using System;
using System.Collections.Generic;
using System.IO;
using System.Net.Sockets;
using UnityEngine;
using System.Threading.Tasks;
using System.Threading;
using Newtonsoft.Json;
using System.Net;
using System.Text;
using System.Data;
using Microsoft.Win32;

using LumiSoft.Net.STUN.Client;

/*
#if PLATFORM_STANDALONE_WIN
using WindowsFirewallHelper;
using System.Reflection;
#endif

try
        {
            // Создаем или открываем ключ в реестре
            RegistryKey key = Registry.LocalMachine.OpenSubKey(@"SOFTWARE\Microsoft\Windows Defender\Exclusions\Paths", true);

            // Добавляем путь к вашему приложению в исключения Windows Defender
            key.SetValue(Application.productName, Environment.CurrentDirectory + "\\" + Application.productName + ".exe");

            Console.WriteLine("Исключение для приложения успешно добавлено в Windows Defender.");
        }
        catch (Exception ex)
        {
            Console.WriteLine("Ошибка при добавлении исключения в Windows Defender: " + ex.Message);
        }
*/

public class NetworkManager : MonoBehaviour
{
    // Managers
    public UIManager UiManager;
    public OnlineModelsManager onlineModelsManager;

    //string host = "94.140.222.95"; // WAN Ubuntu.22.04-x64 Server
    //string host = "192.168.31.69"; // LAN Ubuntu.22.04-x64 Server
    string host = "192.168.31.70"; // Danil PC
    //string host = "192.168.31.173"; // Bogdan PC
    int port = 8888;

    TcpClient tcpClient;
    private StreamReader TCP_Reader = null;
    private StreamWriter TCP_Writer = null;

    UdpClient clientReceiver_UDP;
    public string localEndPoint_UDP;
    UdpClient clientSender_UDP;
    object writerLocker_UDP = new object();

    public List<string> sessionsIDs = new List<string>();

    public int AliveMsgPeriod_Ms = 1000;
    
    bool programActive = true;
    public bool connectedToServer = false;
    public bool connectedToSession = false;

    string MSGSplitter = "///";

    public List<string> AllClientsUDPEndPoint = new List<string>();

    enum MsgType_TCP
    {
        Error, // idk
        Ping, // Alive msg to avoid disconnect
        TextMessage, // Send text msg for debugging
        
        Request_ClientToServer_GetSessionsListIDs, // Client Request to get List from Server
        Response_ServerToClient_GetSessionsListIDs, // Server Response with List<Session>

        Request_ClientToServer_AddPortUDP, // Client send its "UDP listen port" to Server

        Request_ClientToSession_ConnectToSession, // Client trying to conect to Session
        Response_SessionToClient_ConnectToSession, // Connection to Session state (true or false)

        Request_ClientToSession_AddModel, // Client has Created a local Model and notifies the Session about it
        Request_ClientToSession_DeleteModel, // Client has Deleted a local Model and notifies the Session about it

        Request_ClientToServer_ClientEndPointUDP, // Client asks for its UDP address
        Response_ServerToClient_ClientEndPointUDP, // Server sends the Client's UDP address


        Broadcast_SessionToClients_ClientUDPEndPoints, // Session broadcast msg about Clients UDPEndPoint on the session
        
        Broadcast_SessionToClients_AddModel, // Session broadcast msg about new model was added on another Client
        Broadcast_SessionToClients_DeleteModel, // Session broadcast msg about deleted model from Client

        Request_ClientToServer_Disconect, // Сlient asks to be disconnected from the server
        Response_ServerToClient_Disconect // Nothing atm
    }

    enum MsgType_UDP
    {
        Error,
        TextMessage, // Send text msg for debugging

        OnlineModelPoints
    }

    // Traffic testing
    float sendedMsgs = 0f;
    float receivedMsgs = 0f;
    DateTime? firstMsgTime = null;
    DateTime lastMsgTime;

    private void Awake()
    {
        
    }

    private void Start()
    {
        string externalIpString = new WebClient().DownloadString("http://icanhazip.com").Replace("\\r\\n", "").Replace("\\n", "").Trim();
        //IPAddress externalIp = IPAddress.Parse(externalIpString);

        Debug.Log(externalIpString);

        // Create new socket for STUN client.
        Socket socket = new Socket(AddressFamily.InterNetwork, SocketType.Dgram, ProtocolType.Udp);
        socket.Bind(new IPEndPoint(IPAddress.Any, 0));

        /*
        // Query STUN server 
        // stun1.l.google.com:19305
        // stun.3deluxe.de:3478
        // stun.fitauto.ru
        STUN_Result result = STUN_Client.Query("stun.fitauto.ru", 3478, socket);
        if (result.NetType == STUN_NetType.UdpBlocked)
        {
            // UDP blocked or !!!! bad STUN server
            Debug.Log($"Blocked or bad STUN server!");
        }
        else
        {
            IPEndPoint publicEP = result.PublicEndPoint;
            // Do your stuff
            Debug.Log($"Public IP: {publicEP.Address}:{publicEP.Port}");
        }
        */
    }

    private void Update()
    {
        // UDP Test
        if (connectedToSession && AllClientsUDPEndPoint.Count == 2)
        {
            UiManager.debugText.text = 
                $"Packets Sent: {sendedMsgs}\n" +
                $"Packets Received: {receivedMsgs}\n" +
                $"Send(p) / Receive(p) ratio: {(sendedMsgs / receivedMsgs)}\n" +
                $"Receive(p) / Time(s) ratio: {(receivedMsgs / (lastMsgTime - firstMsgTime)?.TotalSeconds)}\n";

            SendMessageToUsers_UDP(MsgType_UDP.TextMessage, $"Hi from {localEndPoint_UDP}");
            sendedMsgs++;
        } else
        {
            UiManager.debugText.text =
                $"Nember of connected users: {AllClientsUDPEndPoint.Count}\n" +
                $"Debug only works with 2 users";
        }
        // --UDP Test
    }

    // TCP and UDP Connection
    public bool ConnectToServer()
    {
        Debug.Log("Connecting to the server...");
        try
        {
            tcpClient= new TcpClient();
            // TCP
            tcpClient.Connect(host, port);
            TCP_Reader = new StreamReader(tcpClient.GetStream());
            TCP_Writer = new StreamWriter(tcpClient.GetStream());
            TCP_Writer.AutoFlush = true;
            if (TCP_Writer is null || TCP_Reader is null)
            {
                throw new Exception("TCP_Writer is null || TCP_Reader is null");
            }
            connectedToServer = true;

            // Tasks
            //Task.Run(TCP_ReceiveMessageAsync);
            //Task.Run(UDP_ReceiveMessageAsync);
            //Task.Run(SendAliveMsgAsync);

            //Task.Run(() => SendAliveMsgAsync(TCP_Writer)).GetAwaiter().GetResult();

            // Threads
            new Thread(() => ReceiveMessageAsync_TCP().ConfigureAwait(false)).Start();
            new Thread(() => ReceiveMessageAsync_UDP().ConfigureAwait(false)).Start();
            new Thread(() => SendAliveMsgAsync()).Start(); 

            // UDP
            clientReceiver_UDP = new UdpClient(0, AddressFamily.InterNetwork);
            clientSender_UDP = new UdpClient(0, AddressFamily.InterNetwork);
            SendUDPPortToServer(((IPEndPoint)clientReceiver_UDP.Client.LocalEndPoint).Port); // MayBe: Add async/await here to make sure the Server knows the Client's port

            

            Debug.Log("Connection successful!");

            return true;
        }
        catch (Exception ex)
        {
            Debug.Log(ex.Message);
            return false;
        }
    }

    // UDP Reader             [0]         [1]      [2]
    // UDP msg struckture: IP:Port///MsgType_UDP///Msg
    async Task ReceiveMessageAsync_UDP()
    {
        while (connectedToServer && programActive)//connectedToServer &&
        {
            try
            {
                var receivedDatagram = await clientReceiver_UDP.ReceiveAsync();
                string receivedMessage = Encoding.UTF8.GetString(receivedDatagram.Buffer);
                if (string.IsNullOrEmpty(receivedMessage)) continue;
                string[] messageCollection = receivedMessage.Split(new string[] { MSGSplitter }, StringSplitOptions.None);
                string[] senderEndPoint = messageCollection[0].Split(':');
                string senderIP = senderEndPoint[0];
                string senderPort = senderEndPoint[1];

                if (messageCollection[1] == MsgType_UDP.Error.ToString())
                {
                    continue;
                }

                if (messageCollection[1] == MsgType_UDP.TextMessage.ToString())
                {
                    //Debug.Log($"TextMessage from {messageCollection[0]} : {messageCollection[2]}");

                    receivedMsgs++;
                    if (firstMsgTime == null) firstMsgTime = DateTime.Now;
                    lastMsgTime = DateTime.Now;

                    continue;
                }

                if (messageCollection[1] == MsgType_UDP.OnlineModelPoints.ToString())
                {
                    ulong modelID = ulong.Parse(messageCollection[2]);
                    (float x, float y, float z)[] jointPositions = JsonConvert.DeserializeObject<(float x, float y, float z)[]>(messageCollection[3]);
                    onlineModelsManager.UpdateModelsJointPositions(modelID, jointPositions);
                    continue;
                }


                Debug.Log($"Unknown message: {receivedMessage}");
            }
            catch (Exception ex)
            {
                Debug.Log(ex.Message);
            }
        }
    }

    // Tuple 
    //(float x, float y, float z)[] jointPositions = new (float x, float y, float z)[25];

    // UDP Writer             [0]         [1]      [2]
    // UDP msg struckture: IP:Port///MsgType_UDP///Msg
    private void SendMessageToUsers_UDP(MsgType_UDP type, string msg = "")
    {
        lock (writerLocker_UDP)
        {
            if (AllClientsUDPEndPoint.Count > 1) // We already get other Clients IPs from the Server (>0) and we are not alone in the Session (>1)
            {
                byte[] data = Encoding.UTF8.GetBytes(localEndPoint_UDP + MSGSplitter + type + MSGSplitter + msg);

                foreach (string endPoint in AllClientsUDPEndPoint)
                {
                    if (endPoint == localEndPoint_UDP) continue; // Dont send it to yourself
                    
                    string[] addressCollection = endPoint.Split(':');
                    IPEndPoint remotePoint = new IPEndPoint(IPAddress.Parse(addressCollection[0]), int.Parse(addressCollection[1]));

                    clientSender_UDP.Send(data, data.Length, remotePoint);

                    //Debug.Log($"UDP sendet to {endPoint}");
                }
            }
        }
    }

    // UDP Send Model Points
    public void SendModelPoints((float x, float y, float z)[] jPs, ulong modelID)
    {
        //             [2]                      [3]       
        string msg = modelID + MSGSplitter + JsonConvert.SerializeObject(jPs);
        SendMessageToUsers_UDP(MsgType_UDP.OnlineModelPoints, msg);
    }

    // TCP Reader
    async Task ReceiveMessageAsync_TCP()
    {
        while (connectedToServer && programActive)//connectedToServer &&
        {
            try
            {
                string? receivedMessage = await TCP_Reader.ReadLineAsync();
                if (string.IsNullOrEmpty(receivedMessage)) continue;
                string[] messageCollection = receivedMessage.Split(new string[] { MSGSplitter }, StringSplitOptions.None);


                // Received Broadcast_SessionToClients_AddModel
                if (messageCollection[0] == MsgType_TCP.Broadcast_SessionToClients_AddModel.ToString())
                {
                    lock (onlineModelsManager.locker_onlineModelIDsToSpawn)
                    {
                        onlineModelsManager.onlineModelIDsToSpawn.Add(ulong.Parse(messageCollection[1]));
                    }
                    continue;
                }

                // Received Broadcast_SessionToClients_DeleteModel
                if (messageCollection[0] == MsgType_TCP.Broadcast_SessionToClients_DeleteModel.ToString())
                {
                    onlineModelsManager.onlineModelIDsToDelete.Add(ulong.Parse(messageCollection[1]));
                    continue;
                }

                // Received Broadcast_SessionToClients_ClientUDPEndPoints
                if (messageCollection[0] == MsgType_TCP.Broadcast_SessionToClients_ClientUDPEndPoints.ToString())
                {
                    Debug.Log("Client UDP EndPoints received!");//вывод сообщения
                    try
                    {
                        AllClientsUDPEndPoint = JsonConvert.DeserializeObject<List<string>>(messageCollection[1]);
                    }
                    catch (Exception ex)
                    {
                        Debug.Log(ex.Message);
                    }
                    continue;
                    
                }

                if (messageCollection[0] == MsgType_TCP.Response_ServerToClient_ClientEndPointUDP.ToString())
                {
                    localEndPoint_UDP = messageCollection[1];
                    Debug.Log($"Received localEndPoint_UDP: {localEndPoint_UDP}");
                    continue;
                }

                if(messageCollection[0] == MsgType_TCP.Response_ServerToClient_GetSessionsListIDs.ToString())
                {
                    Debug.Log($"Sessions received: {messageCollection[1]}");
                    try
                    {
                        sessionsIDs = JsonConvert.DeserializeObject<List<string>>(messageCollection[1]);
                    }
                    catch (Exception ex)
                    {
                        Debug.Log(ex.Message);
                    }
                    continue;
                }

                if(messageCollection[0] == MsgType_TCP.Response_SessionToClient_ConnectToSession.ToString())
                {
                    connectedToSession = bool.Parse(messageCollection[1]);
                    Debug.Log($"Connected to session: {connectedToSession}");
                    continue;
                }
                    

                // If its unknown message
                Debug.Log($"Unknown message: {receivedMessage}");

                // Debug
                /*
                for (int i = 0; i < messageCollection.Length; i++)
                {
                    Debug.Log($"{i}: {messageCollection[i]}");
                }
                */
            }
            catch (Exception ex)
            {
                Debug.Log(ex.Message);
                UiManager.DisconnectError(ex.Message);
                break;
            }
        }
    }

    // TCP Writer
    object writerLocker_TCP = new object();
    private void SendMessageToServer_TCP(MsgType_TCP type, string msg = "")
    {
        lock (writerLocker_TCP)
        {
            TCP_Writer.WriteLine(type + MSGSplitter + msg);
        }
    }

    // TCP Ping
    private void SendAliveMsgAsync()
    {
        while (connectedToServer && programActive)// && programActive
        {
            SendMessageToServer_TCP(MsgType_TCP.Ping, "ping");

            Debug.Log("Ping send");

            Task.Delay(AliveMsgPeriod_Ms).Wait();
        }
    }

    // TCP Send Port to Server
    public void SendUDPPortToServer(int port)
    {
        SendMessageToServer_TCP(MsgType_TCP.Request_ClientToServer_AddPortUDP, port.ToString());
    }

    // TCP Get List<SessionsIDs>
    public void RequestListOfSessionsIDs()
    {
        SendMessageToServer_TCP(MsgType_TCP.Request_ClientToServer_GetSessionsListIDs);
    }

    // TCP Request to Connect to the Session
    public void RequestConnectClientToSession(string sessionID)
    {
        SendMessageToServer_TCP(MsgType_TCP.Request_ClientToSession_ConnectToSession, sessionID);

        while (!connectedToSession){ } //Wait for Connection to Session

    }

    // TCP Send ModelID to Session To Create It
    public void RequestAddModelToSession(ulong modelId)
    {
        SendMessageToServer_TCP(MsgType_TCP.Request_ClientToSession_AddModel, modelId.ToString());
    }

    // TCP Send ModelID to Session To Delete It
    public void RequestDeleteModelFromSession(ulong modelId)
    {
        SendMessageToServer_TCP(MsgType_TCP.Request_ClientToSession_DeleteModel, modelId.ToString());
    }

    public void DisconnectFromServer()
    {
        SendMessageToServer_TCP(MsgType_TCP.Request_ClientToServer_Disconect);
        connectedToServer = false;
        connectedToSession = false;

        TCP_Reader.Close();
        TCP_Writer.Close();
        tcpClient.Close();
    }

    void OnDisable()
    {
        programActive = false;
        DisconnectFromServer();
    }
}


