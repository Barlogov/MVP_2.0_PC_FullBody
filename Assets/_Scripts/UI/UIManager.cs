using Newtonsoft.Json;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;

public class UIManager : MonoBehaviour
{
    public NetworkManager networkManager;

    [Header("Objects to disable", order = 0)]
    public GameObject UI_ConnectToServer;
    public GameObject UI_ConnectToSession;
    public GameObject UI_ModelCalibration;
    public GameObject KinectGO;
    public GameObject ModelCalibrationRoomGO;
    public GameObject UI_Session;

    List<GameObject> AllObjects;

    [Header("", order = 1)]
    public Camera mainCamera;
    public Text Text_Connection;

    public Dropdown sessionsDropdown;

    public Text debugText;

    public bool needToComeBackToFirstMenu = false;
    public string errorMessage;

    public Toggle kinectToggle;
    bool wantEnableKinect = false;
    bool onlineKinectCanBeEnabled = false;
    bool calibrationKinectCanBeEnabled = false;

    bool inCalibration = false;

    [Header("Model Calibration", order = 2)]
    public ModelCalibrator modelCalibrator;
    public Text countDownText;
    public Text colibrationResultText;
    public GameObject StartCalibrationButtonGO;
    public GameObject RecalibrateButtonGO;
    public GameObject StartRecordButtonGO;
    public GameObject ReRecordButtonGO;
    public GameObject BackToColibrationButtonGO;

    public void ToggleKinnect()
    {
        wantEnableKinect = kinectToggle.isOn;
        if (wantEnableKinect && onlineKinectCanBeEnabled) KinectGO.SetActive(true); else KinectGO.SetActive(false);
        if (wantEnableKinect && calibrationKinectCanBeEnabled) ModelCalibrationRoomGO.SetActive(true); else ModelCalibrationRoomGO.SetActive(false);
    }

    /*
    public void DisableKinnect()
    {
        if (kinectCanBeEnabled && kinectToggle.isOn)
        {
            KinectGO.SetActive(true);
            enableKinect = true;
            kinectToggle.isOn = true;
        }
        else
        {
            KinectGO.SetActive(false);
            enableKinect = false;
            kinectToggle.isOn = false;
        }
    }
    */

    private void Awake()
    {
        AllObjects = new List<GameObject>()
        {
            UI_ConnectToServer,
            UI_ConnectToSession,
            UI_ModelCalibration,
            KinectGO,
            ModelCalibrationRoomGO,
            UI_Session
        };
        ComeBackToFirstMenu();
    }

    private void Update()
    {
        if (needToComeBackToFirstMenu) ComeBackToFirstMenu();
    }

    public void DisconnectError(string errorMsg)
    {
        needToComeBackToFirstMenu = true;
        errorMessage = errorMsg;
    }

    public void ComeBackToFirstMenu()
    {
        inCalibration = false;
        onlineKinectCanBeEnabled = false;
        calibrationKinectCanBeEnabled = false;

        if (networkManager.connectedToServer)
            networkManager.DisconnectFromServer();

        foreach (GameObject go in AllObjects)
        {
            go.SetActive(false);
        }
        UI_ConnectToServer.SetActive(true);
        Text_Connection.text = errorMessage;
        errorMessage = "";
        needToComeBackToFirstMenu =false;
    }
    public void Button_ModelCalibration()
    {
        calibrationKinectCanBeEnabled = true;

        UI_ConnectToServer.SetActive(false);
        if (wantEnableKinect) ModelCalibrationRoomGO.SetActive(true);
        UI_ModelCalibration.SetActive(true);
        countDownText.gameObject.SetActive(false);

        colibrationResultText.gameObject.SetActive(false);
        StartCalibrationButtonGO.SetActive(true);
        StartRecordButtonGO.SetActive(true);
        RecalibrateButtonGO.SetActive(false);
        ReRecordButtonGO.SetActive(false);
        BackToColibrationButtonGO.SetActive(false);


    }

    Vector3 cameraBasePosition;
    Quaternion cameraBaseRotation;
    public void Button_StartCalibration()
    {
        cameraBasePosition = mainCamera.transform.position;
        cameraBaseRotation = mainCamera.transform.rotation;
        mainCamera.transform.position = new Vector3(0, 0.8f, 0);
        mainCamera.transform.rotation = Quaternion.identity;

        colibrationResultText.gameObject.SetActive(false);
        RecalibrateButtonGO.SetActive(false);
        StartRecordButtonGO.SetActive(false);
        ReRecordButtonGO.SetActive(false);

        StartCalibrationButtonGO.SetActive(false);
        countDownText.gameObject.SetActive(true);

        inCalibration = true;
        StartCoroutine(CountDownToCalibration());
    }

    

    private IEnumerator CountDownToCalibration()
    {
        for(int i = 5; i>=0; i--)
        {
            countDownText.text = i.ToString();
            yield return new WaitForSeconds(1);
        }
        if (inCalibration)
        {
            countDownText.gameObject.SetActive(false);
            colibrationResultText.text = "Calibration result: " + modelCalibrator.WriteDataToCalibrationFile();
            colibrationResultText.gameObject.SetActive(true);
            RecalibrateButtonGO.SetActive(true);
            BackToColibrationButtonGO.SetActive(true);
            mainCamera.transform.position = cameraBasePosition;
            mainCamera.transform.rotation = cameraBaseRotation;
        }
    }


    public void Button_StartRecord()
    {
        cameraBasePosition = mainCamera.transform.position;
        cameraBaseRotation = mainCamera.transform.rotation;
        mainCamera.transform.position = new Vector3(0, 0.8f, 0);
        mainCamera.transform.rotation = Quaternion.identity;

        colibrationResultText.gameObject.SetActive(false);
        ReRecordButtonGO.SetActive(false);
        StartCalibrationButtonGO.SetActive(false);
        RecalibrateButtonGO.SetActive(false);

        StartRecordButtonGO.SetActive(false);
        countDownText.gameObject.SetActive(true);

        inRecord = true;
        StartCoroutine(CountDownToRecord());
    }

    bool inRecord = false;

    private IEnumerator CountDownToRecord()
    {
        for (int i = 5; i >= 0; i--)
        {
            countDownText.text = i.ToString();
            yield return new WaitForSeconds(1);
        }
        if (inRecord)
        {
            countDownText.gameObject.SetActive(false);
            colibrationResultText.text = "Record result: " + modelCalibrator.WriteDataToRecordFile();
            colibrationResultText.gameObject.SetActive(true);
            ReRecordButtonGO.SetActive(true);
            BackToColibrationButtonGO.SetActive(true);
            mainCamera.transform.position = cameraBasePosition;
            mainCamera.transform.rotation = cameraBaseRotation;
        }
    }

    public void Button_ConnectToServer()
    {
        Text_Connection.text = "Connection...";
        //LayoutRebuilder.ForceRebuildLayoutImmediate(UI_ConnectToServer.transform.GetComponent<RectTransform>());
        //Canvas.ForceUpdateCanvases();

        if (networkManager.ConnectToServer())
        {
            SessionsRefreshButton();

            UI_ConnectToServer.SetActive(false);
            UI_ConnectToSession.SetActive(true);
        } else
        {
            Text_Connection.text = "Can't connect to server. Try again.";
        }
    }

    public void SessionsRefreshButton()
    {
        networkManager.RequestListOfSessionsIDs();
        while(networkManager.sessionsIDs.Count == 0){} //Wait for getting List of SessionsIDs from server

        sessionsDropdown.ClearOptions();
        sessionsDropdown.AddOptions(networkManager.sessionsIDs);
    }

    public void ConnectToSessionButton()
    {
        onlineKinectCanBeEnabled = true;

        networkManager.RequestConnectClientToSession(sessionsDropdown.options[sessionsDropdown.value].text);
        Debug.Log("Connected to session: " + sessionsDropdown.options[sessionsDropdown.value].text);
        UI_ConnectToSession.SetActive(false);
        UI_Session.SetActive(true);
        if (wantEnableKinect) KinectGO.SetActive(true);
    }

    
    Queue<ulong> spawnedModelIDs = new Queue<ulong>();
    public Text spawnedModelIDText;
    public void SpawnModelButton()
    {
        ulong spawnedModelId = RandomUlong();
        spawnedModelIDs.Enqueue(spawnedModelId);
        networkManager.RequestAddModelToSession(spawnedModelId);
        spawnedModelIDText.text = spawnedModelId.ToString();

        string pathRecord = "ModelRecordValues.json";
        string pathCalibration = "ModelCalibrationValues.json";
        (float x, float y, float z)[] jointPositions = new (float x, float y, float z)[25];
        try
        {
            (float x, float y, float z) SpineBasePosition = (0, 0, 0);
            StreamReader recordReader = new StreamReader(pathRecord);
            StreamReader calibrationReader = new StreamReader(pathCalibration);
            jointPositions = JsonConvert.DeserializeObject<(float x, float y, float z)[]>(recordReader.ReadLine());
            SpineBasePosition = JsonConvert.DeserializeObject<(float x, float y, float z)>(calibrationReader.ReadLine());
            recordReader.Close();
            calibrationReader.Close();

            for(int i = 0; i < jointPositions.Length; i++)
            {
                jointPositions[i] = (jointPositions[i].x - SpineBasePosition.x, jointPositions[i].y - SpineBasePosition.y, jointPositions[i].z - SpineBasePosition.z);
            }

            Debug.Log(jointPositions);
            Debug.Log(SpineBasePosition.x + " " + SpineBasePosition.y + " " + SpineBasePosition.z);
        }
        catch (Exception e)
        {
            Debug.Log(e);
        }

        networkManager.SendModelPoints(jointPositions, spawnedModelId);
        spawnedModelIDText.text = $"Models spawned: {spawnedModelIDs.Count}";
    }

    public ulong RandomUlong()
    {
        System.Random rnd = new System.Random();
        var buffer = new byte[sizeof(UInt64)];
        rnd.NextBytes(buffer);
        return BitConverter.ToUInt64(buffer, 0);
    }

    public void DeleteModelButton()
    {
        if (spawnedModelIDs.Count == 0) return;
        networkManager.RequestDeleteModelFromSession(spawnedModelIDs.Dequeue());
        spawnedModelIDText.text = $"Models spawned: {spawnedModelIDs.Count}";
    }
}
