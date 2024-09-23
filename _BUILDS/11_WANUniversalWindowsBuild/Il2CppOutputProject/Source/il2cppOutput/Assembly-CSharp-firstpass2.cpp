#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.FrameCapturedEventArgs>>>
struct CollectionMap_2_t689CC10171206870A4DF1162D12EC1540D8EADD8;
// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.IsAvailableChangedEventArgs>>>
struct CollectionMap_2_t1DA53B12B280859DB2223CA17253046AC8C063E1;
// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.LongExposureInfraredFrameArrivedEventArgs>>>
struct CollectionMap_2_t2AA30E965334FA5AB0264250D857342ABC7D65D1;
// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>>>
struct CollectionMap_2_t70974465096D4399A2F2EEF2707B46C9597D8212;
// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>>
struct CollectionMap_2_t14CA4B3B93CD9942736293185C18039A0FC18985;
// System.EventHandler`1<Windows.Kinect.FrameCapturedEventArgs>
struct EventHandler_1_tB59FEF7687065A16102FFC333CCA4BA5069C0A05;
// System.EventHandler`1<Windows.Kinect.IsAvailableChangedEventArgs>
struct EventHandler_1_t95A75CD730DE4DAF0FE9C5F4591FA1F62B5CD7D8;
// System.EventHandler`1<Windows.Kinect.LongExposureInfraredFrameArrivedEventArgs>
struct EventHandler_1_t2F840A25E61E8E3188D6BF4E7ADE22A02B18250D;
// System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>
struct EventHandler_1_t32A60B00DA36C871C4B539798908F1A561114391;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>
struct EventHandler_1_tB2BD70FB7C7747AB3593E537E4BA4310AC101962;
// System.Func`2<System.IntPtr,Windows.Kinect.BodyFrameReference>
struct Func_2_t6D93854D49DB36707E60A419EEC4B96056515B92;
// System.Func`2<System.IntPtr,Windows.Kinect.BodyIndexFrameReference>
struct Func_2_tA77DF17FB0063E6EED85F1134F36E7513E17D952;
// System.Func`2<System.IntPtr,Windows.Kinect.ColorFrameReference>
struct Func_2_t3472416A955FFC22DA1AAACB1855BE0830419590;
// System.Func`2<System.IntPtr,Windows.Kinect.DepthFrameReference>
struct Func_2_t278C751788D6782880DA6052260623C83993C033;
// System.Func`2<System.IntPtr,Windows.Kinect.FrameDescription>
struct Func_2_t5D7241EDD6D0A5F4391BC721C4248C5F74BF4B8C;
// System.Func`2<System.IntPtr,Windows.Kinect.InfraredFrameReference>
struct Func_2_tD22CC0C92BA4CAA3D58FA1F486DA178462B87731;
// System.Func`2<System.IntPtr,Windows.Kinect.KinectBuffer>
struct Func_2_t6FF46EA12FC8C36FEF6153E31F4F80E736DB154A;
// System.Func`2<System.IntPtr,Windows.Kinect.KinectSensor>
struct Func_2_t9D468F926CC137A7E6DAE4F9F4C24CB08E3C33A9;
// System.Func`2<System.IntPtr,Windows.Kinect.LongExposureInfraredFrame>
struct Func_2_tCF4B1E777057BCA77B0862F4B8BCC6DE55B7D34C;
// System.Func`2<System.IntPtr,Windows.Kinect.LongExposureInfraredFrameReader>
struct Func_2_t25C3927B47729A797774807AAF390A2E4DEBAA0E;
// System.Func`2<System.IntPtr,Windows.Kinect.LongExposureInfraredFrameReference>
struct Func_2_tED4C566064BFEF857F18581B529DCB416AEC079A;
// System.Func`2<System.IntPtr,Windows.Kinect.LongExposureInfraredFrameSource>
struct Func_2_tC0AF9916AB84E8EEAD7A1BB3A5E2027974927AF1;
// System.Func`2<System.IntPtr,Windows.Kinect.MultiSourceFrame>
struct Func_2_t0DD86BE63D0B62E41BD4C1BA06678132ACF724CD;
// System.Func`2<System.IntPtr,Windows.Kinect.MultiSourceFrameReference>
struct Func_2_tDE97E8E2AD6F61BAFB3F5D15B5741B46C74B0264;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Windows.Kinect.BodyFrameReference
struct BodyFrameReference_t2FAF1959353883E9BC1F82D1E3CAD0CE554023E4;
// Windows.Kinect.BodyIndexFrameReference
struct BodyIndexFrameReference_t3614DE16008177E9FCEF10AFE991AD12FAFA7585;
// Windows.Kinect.ColorFrameReference
struct ColorFrameReference_t6985FBD968B49B8B5620F309BC09F9973929701C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Windows.Kinect.DepthFrameReference
struct DepthFrameReference_t203196DB0EDAE9FFBFC298222BC43FF618D7D8B0;
// Windows.Kinect.FrameCapturedEventArgs
struct FrameCapturedEventArgs_tD7048F9154D0AB0AA5A9815316EF62931EA543A5;
// Windows.Kinect.FrameDescription
struct FrameDescription_t85467D68A9297CBD38C234A3D47ADCBB16058FE9;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Windows.Kinect.InfraredFrameReference
struct InfraredFrameReference_t056C1464ECC12EE8005B737B3BA3AF7CC10470A2;
// Windows.Kinect.IsAvailableChangedEventArgs
struct IsAvailableChangedEventArgs_tCF34C5B6B713FCAABCDDBFFA43FEC7ED0D5748CA;
// Windows.Kinect.KinectBuffer
struct KinectBuffer_t544033B102952121E1B70A9B94449C1B2DC6C96A;
// Windows.Kinect.KinectSensor
struct KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC;
// Windows.Kinect.LongExposureInfraredFrame
struct LongExposureInfraredFrame_t834B741765C10FF7945D0DCFE9C9ACCE258E5417;
// Windows.Kinect.LongExposureInfraredFrameArrivedEventArgs
struct LongExposureInfraredFrameArrivedEventArgs_t8EE4430B77770F6892FA634BA399F0184844BAD0;
// Windows.Kinect.LongExposureInfraredFrameReader
struct LongExposureInfraredFrameReader_t5FCC779D8B5E25CFE8EDEED01D7C1440A6B4F280;
// Windows.Kinect.LongExposureInfraredFrameReference
struct LongExposureInfraredFrameReference_tC6A51F471C0AB80DAFE39436260636F29434BE04;
// Windows.Kinect.LongExposureInfraredFrameSource
struct LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Windows.Kinect.MultiSourceFrame
struct MultiSourceFrame_t281B4AA81E9C8B38F24E909A94CD1940E71E509E;
// Windows.Kinect.MultiSourceFrameArrivedEventArgs
struct MultiSourceFrameArrivedEventArgs_tFC6A0881995713CA74F376AEB59343C5AE3CDED1;
// Windows.Kinect.MultiSourceFrameReader
struct MultiSourceFrameReader_t4CF408C6284FA502D56444B52A0488DD0155046C;
// Windows.Kinect.MultiSourceFrameReference
struct MultiSourceFrameReference_tE8D6753E58108430329A82FDB2228F185313813F;
// Windows.Data.PropertyChangedEventArgs
struct PropertyChangedEventArgs_tFA108A146CD6C15894BD8B76882BBC0DEF633CB1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Windows.Kinect.KinectSensor/<>c__DisplayClass47_0
struct U3CU3Ec__DisplayClass47_0_t355951139BDB2C4DB51942934C494C2162F116F3;
// Windows.Kinect.KinectSensor/<>c__DisplayClass47_1
struct U3CU3Ec__DisplayClass47_1_t42B8610EFDAD5B1AB6B03CF3BD9D90B1AF7C8964;
// Windows.Kinect.KinectSensor/<>c__DisplayClass55_0
struct U3CU3Ec__DisplayClass55_0_t712A87BF8796B146D94D670D9118321D01687671;
// Windows.Kinect.KinectSensor/<>c__DisplayClass55_1
struct U3CU3Ec__DisplayClass55_1_t9813CCA6B70D88DBC7E51597B2E735E44722E452;
// Windows.Kinect.KinectSensor/_Windows_Data_PropertyChangedEventArgs_Delegate
struct _Windows_Data_PropertyChangedEventArgs_Delegate_t15AB8B522EA51150FF639FCA7DB64DEF85D3B963;
// Windows.Kinect.KinectSensor/_Windows_Kinect_IsAvailableChangedEventArgs_Delegate
struct _Windows_Kinect_IsAvailableChangedEventArgs_Delegate_t9970D2F66614A670E990F8BCAE1B9F650044F0C4;
// Windows.Kinect.LongExposureInfraredFrame/<>c
struct U3CU3Ec_t322E7B3D87A39ACC33074D6307906385AABDFF84;
// Windows.Kinect.LongExposureInfraredFrameArrivedEventArgs/<>c
struct U3CU3Ec_t2494935FA4DB5D564FD29AD76AF88F036716C876;
// Windows.Kinect.LongExposureInfraredFrameReader/<>c
struct U3CU3Ec_t90741FD91A20DD6C089C4C1317FD86FD5C2ABC8E;
// Windows.Kinect.LongExposureInfraredFrameReader/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_tCAC4178BCD426D47986B8474DAA45F892FCFA9DD;
// Windows.Kinect.LongExposureInfraredFrameReader/<>c__DisplayClass19_1
struct U3CU3Ec__DisplayClass19_1_t5D95CA6888547D528C7D13D874EC483C99AF623A;
// Windows.Kinect.LongExposureInfraredFrameReader/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_tE3C52F3A6D10406ACC59F8860B9D5605FAD78255;
// Windows.Kinect.LongExposureInfraredFrameReader/<>c__DisplayClass27_1
struct U3CU3Ec__DisplayClass27_1_t6D3D75C50D76FCA179F1CFFB7B604930E7143895;
// Windows.Kinect.LongExposureInfraredFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate
struct _Windows_Data_PropertyChangedEventArgs_Delegate_t4FCAF474D23A05E3EB5678360F4CDE4753B6699B;
// Windows.Kinect.LongExposureInfraredFrameReader/_Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate
struct _Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_tBB24707627FEE6ECA331250C378A598473C10A19;
// Windows.Kinect.LongExposureInfraredFrameReference/<>c
struct U3CU3Ec_t30E69BC01E67A0BFE2E7D0BAB11C262F90E44F50;
// Windows.Kinect.LongExposureInfraredFrameSource/<>c
struct U3CU3Ec_t4A1620F3B9B0FE3C0EC7A69786BBF5676D514CC1;
// Windows.Kinect.LongExposureInfraredFrameSource/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t327F2B8B42C8210BC752AFD2819CEDEC11128E26;
// Windows.Kinect.LongExposureInfraredFrameSource/<>c__DisplayClass20_1
struct U3CU3Ec__DisplayClass20_1_t7139DBEFCDFEA41BC0FC756D06C94187AD0BE04A;
// Windows.Kinect.LongExposureInfraredFrameSource/<>c__DisplayClass28_0
struct U3CU3Ec__DisplayClass28_0_tE7FAE6838B28CDFB20D9A4B4AC223A413CB9E549;
// Windows.Kinect.LongExposureInfraredFrameSource/<>c__DisplayClass28_1
struct U3CU3Ec__DisplayClass28_1_tBBE8C500D9DABE65B0748F4E8C89F5D332CB22BD;
// Windows.Kinect.LongExposureInfraredFrameSource/_Windows_Data_PropertyChangedEventArgs_Delegate
struct _Windows_Data_PropertyChangedEventArgs_Delegate_t9D2608D7441E619BC34823613451B201F17314D3;
// Windows.Kinect.LongExposureInfraredFrameSource/_Windows_Kinect_FrameCapturedEventArgs_Delegate
struct _Windows_Kinect_FrameCapturedEventArgs_Delegate_t77519A23F229A7F77F971997374F823C93FE24D0;
// Windows.Kinect.MultiSourceFrame/<>c
struct U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA;
// Windows.Kinect.MultiSourceFrameArrivedEventArgs/<>c
struct U3CU3Ec_t3B48CEAB86B70AD0179D82B0B4B4C7AAA9CCB247;
// Windows.Kinect.MultiSourceFrameReader/<>c
struct U3CU3Ec_tA6A7F62B49C170EA8E9259580DB8A1746AAE2628;
// Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_tF933F53F77B7308E0545D150A1031BF063483DB5;
// Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass22_1
struct U3CU3Ec__DisplayClass22_1_t4DD634AFA12116EEF2B9D4D468F94D35739C0D63;
// Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass30_0
struct U3CU3Ec__DisplayClass30_0_tADF1CCCC2354CB6FDB2E3DC53DB1890D2C647040;
// Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass30_1
struct U3CU3Ec__DisplayClass30_1_t6636053F58BEA7355116BF96B12C8DF9E04F17C8;
// Windows.Kinect.MultiSourceFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate
struct _Windows_Data_PropertyChangedEventArgs_Delegate_tBBBE398B93B2175511D5A4194545C6AC1D91B645;
// Windows.Kinect.MultiSourceFrameReader/_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate
struct _Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_t1AA1D07898F0A20D61357587BE9005C070562133;
// Windows.Kinect.MultiSourceFrameReference/<>c
struct U3CU3Ec_t5E2981FBACBE08129CF160F33BB15619312C97CC;

IL2CPP_EXTERN_C RuntimeClass* BodyFrameReference_t2FAF1959353883E9BC1F82D1E3CAD0CE554023E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BodyIndexFrameReference_t3614DE16008177E9FCEF10AFE991AD12FAFA7585_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorFrameReference_t6985FBD968B49B8B5620F309BC09F9973929701C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DepthFrameReference_t203196DB0EDAE9FFBFC298222BC43FF618D7D8B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameDescription_t85467D68A9297CBD38C234A3D47ADCBB16058FE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InfraredFrameReference_t056C1464ECC12EE8005B737B3BA3AF7CC10470A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KinectBuffer_t544033B102952121E1B70A9B94449C1B2DC6C96A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LongExposureInfraredFrameReader_t5FCC779D8B5E25CFE8EDEED01D7C1440A6B4F280_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LongExposureInfraredFrameReference_tC6A51F471C0AB80DAFE39436260636F29434BE04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LongExposureInfraredFrame_t834B741765C10FF7945D0DCFE9C9ACCE258E5417_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultiSourceFrameReference_tE8D6753E58108430329A82FDB2228F185313813F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultiSourceFrame_t281B4AA81E9C8B38F24E909A94CD1940E71E509E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2494935FA4DB5D564FD29AD76AF88F036716C876_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t30E69BC01E67A0BFE2E7D0BAB11C262F90E44F50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t322E7B3D87A39ACC33074D6307906385AABDFF84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3B48CEAB86B70AD0179D82B0B4B4C7AAA9CCB247_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4A1620F3B9B0FE3C0EC7A69786BBF5676D514CC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5E2981FBACBE08129CF160F33BB15619312C97CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t90741FD91A20DD6C089C4C1317FD86FD5C2ABC8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA6A7F62B49C170EA8E9259580DB8A1746AAE2628_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m1C90999A5D7A3299AA46B2494D8A494B77DFE5FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m2D0C90D31474CBBEAA2925268453EA34ADCAC423_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_m7891F0026D5A7AD0CAE2D089ACDC68D5E7ADF4AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mAC05A40BABD150EFFF871E0EF279C2E55F61A0F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mE5B0375A74E191D87544130D7E7DB43D4AAD4ACF_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Windows.Kinect.KinectSensor/<>c__DisplayClass47_0
struct U3CU3Ec__DisplayClass47_0_t355951139BDB2C4DB51942934C494C2162F116F3  : public RuntimeObject
{
public:
	// Windows.Kinect.KinectSensor Windows.Kinect.KinectSensor/<>c__DisplayClass47_0::objThis
	KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC * ___objThis_0;
	// Windows.Kinect.IsAvailableChangedEventArgs Windows.Kinect.KinectSensor/<>c__DisplayClass47_0::args
	IsAvailableChangedEventArgs_tCF34C5B6B713FCAABCDDBFFA43FEC7ED0D5748CA * ___args_1;

public:
	inline static int32_t get_offset_of_objThis_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass47_0_t355951139BDB2C4DB51942934C494C2162F116F3, ___objThis_0)); }
	inline KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC * get_objThis_0() const { return ___objThis_0; }
	inline KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC ** get_address_of_objThis_0() { return &___objThis_0; }
	inline void set_objThis_0(KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC * value)
	{
		___objThis_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objThis_0), (void*)value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass47_0_t355951139BDB2C4DB51942934C494C2162F116F3, ___args_1)); }
	inline IsAvailableChangedEventArgs_tCF34C5B6B713FCAABCDDBFFA43FEC7ED0D5748CA * get_args_1() const { return ___args_1; }
	inline IsAvailableChangedEventArgs_tCF34C5B6B713FCAABCDDBFFA43FEC7ED0D5748CA ** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(IsAvailableChangedEventArgs_tCF34C5B6B713FCAABCDDBFFA43FEC7ED0D5748CA * value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___args_1), (void*)value);
	}
};


// Windows.Kinect.KinectSensor/<>c__DisplayClass47_1
struct U3CU3Ec__DisplayClass47_1_t42B8610EFDAD5B1AB6B03CF3BD9D90B1AF7C8964  : public RuntimeObject
{
public:
	// System.EventHandler`1<Windows.Kinect.IsAvailableChangedEventArgs> Windows.Kinect.KinectSensor/<>c__DisplayClass47_1::func
	EventHandler_1_t95A75CD730DE4DAF0FE9C5F4591FA1F62B5CD7D8 * ___func_0;
	// Windows.Kinect.KinectSensor/<>c__DisplayClass47_0 Windows.Kinect.KinectSensor/<>c__DisplayClass47_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass47_0_t355951139BDB2C4DB51942934C494C2162F116F3 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_func_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass47_1_t42B8610EFDAD5B1AB6B03CF3BD9D90B1AF7C8964, ___func_0)); }
	inline EventHandler_1_t95A75CD730DE4DAF0FE9C5F4591FA1F62B5CD7D8 * get_func_0() const { return ___func_0; }
	inline EventHandler_1_t95A75CD730DE4DAF0FE9C5F4591FA1F62B5CD7D8 ** get_address_of_func_0() { return &___func_0; }
	inline void set_func_0(EventHandler_1_t95A75CD730DE4DAF0FE9C5F4591FA1F62B5CD7D8 * value)
	{
		___func_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___func_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass47_1_t42B8610EFDAD5B1AB6B03CF3BD9D90B1AF7C8964, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass47_0_t355951139BDB2C4DB51942934C494C2162F116F3 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass47_0_t355951139BDB2C4DB51942934C494C2162F116F3 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass47_0_t355951139BDB2C4DB51942934C494C2162F116F3 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// Windows.Kinect.KinectSensor/<>c__DisplayClass55_0
struct U3CU3Ec__DisplayClass55_0_t712A87BF8796B146D94D670D9118321D01687671  : public RuntimeObject
{
public:
	// Windows.Kinect.KinectSensor Windows.Kinect.KinectSensor/<>c__DisplayClass55_0::objThis
	KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC * ___objThis_0;
	// Windows.Data.PropertyChangedEventArgs Windows.Kinect.KinectSensor/<>c__DisplayClass55_0::args
	PropertyChangedEventArgs_tFA108A146CD6C15894BD8B76882BBC0DEF633CB1 * ___args_1;

public:
	inline static int32_t get_offset_of_objThis_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass55_0_t712A87BF8796B146D94D670D9118321D01687671, ___objThis_0)); }
	inline KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC * get_objThis_0() const { return ___objThis_0; }
	inline KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC ** get_address_of_objThis_0() { return &___objThis_0; }
	inline void set_objThis_0(KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC * value)
	{
		___objThis_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objThis_0), (void*)value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass55_0_t712A87BF8796B146D94D670D9118321D01687671, ___args_1)); }
	inline PropertyChangedEventArgs_tFA108A146CD6C15894BD8B76882BBC0DEF633CB1 * get_args_1() const { return ___args_1; }
	inline PropertyChangedEventArgs_tFA108A146CD6C15894BD8B76882BBC0DEF633CB1 ** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(PropertyChangedEventArgs_tFA108A146CD6C15894BD8B76882BBC0DEF633CB1 * value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___args_1), (void*)value);
	}
};


// Windows.Kinect.KinectSensor/<>c__DisplayClass55_1
struct U3CU3Ec__DisplayClass55_1_t9813CCA6B70D88DBC7E51597B2E735E44722E452  : public RuntimeObject
{
public:
	// System.EventHandler`1<Windows.Data.PropertyChangedEventArgs> Windows.Kinect.KinectSensor/<>c__DisplayClass55_1::func
	EventHandler_1_tB2BD70FB7C7747AB3593E537E4BA4310AC101962 * ___func_0;
	// Windows.Kinect.KinectSensor/<>c__DisplayClass55_0 Windows.Kinect.KinectSensor/<>c__DisplayClass55_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass55_0_t712A87BF8796B146D94D670D9118321D01687671 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_func_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass55_1_t9813CCA6B70D88DBC7E51597B2E735E44722E452, ___func_0)); }
	inline EventHandler_1_tB2BD70FB7C7747AB3593E537E4BA4310AC101962 * get_func_0() const { return ___func_0; }
	inline EventHandler_1_tB2BD70FB7C7747AB3593E537E4BA4310AC101962 ** get_address_of_func_0() { return &___func_0; }
	inline void set_func_0(EventHandler_1_tB2BD70FB7C7747AB3593E537E4BA4310AC101962 * value)
	{
		___func_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___func_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass55_1_t9813CCA6B70D88DBC7E51597B2E735E44722E452, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass55_0_t712A87BF8796B146D94D670D9118321D01687671 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass55_0_t712A87BF8796B146D94D670D9118321D01687671 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass55_0_t712A87BF8796B146D94D670D9118321D01687671 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// Windows.Kinect.LongExposureInfraredFrame/<>c
struct U3CU3Ec_t322E7B3D87A39ACC33074D6307906385AABDFF84  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t322E7B3D87A39ACC33074D6307906385AABDFF84_StaticFields
{
public:
	// Windows.Kinect.LongExposureInfraredFrame/<>c Windows.Kinect.LongExposureInfraredFrame/<>c::<>9
	U3CU3Ec_t322E7B3D87A39ACC33074D6307906385AABDFF84 * ___U3CU3E9_0;
	// System.Func`2<System.IntPtr,Windows.Kinect.KinectBuffer> Windows.Kinect.LongExposureInfraredFrame/<>c::<>9__3_0
	Func_2_t6FF46EA12FC8C36FEF6153E31F4F80E736DB154A * ___U3CU3E9__3_0_1;
	// System.Func`2<System.IntPtr,Windows.Kinect.FrameDescription> Windows.Kinect.LongExposureInfraredFrame/<>c::<>9__14_0
	Func_2_t5D7241EDD6D0A5F4391BC721C4248C5F74BF4B8C * ___U3CU3E9__14_0_2;
	// System.Func`2<System.IntPtr,Windows.Kinect.LongExposureInfraredFrameSource> Windows.Kinect.LongExposureInfraredFrame/<>c::<>9__17_0
	Func_2_tC0AF9916AB84E8EEAD7A1BB3A5E2027974927AF1 * ___U3CU3E9__17_0_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t322E7B3D87A39ACC33074D6307906385AABDFF84_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t322E7B3D87A39ACC33074D6307906385AABDFF84 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t322E7B3D87A39ACC33074D6307906385AABDFF84 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t322E7B3D87A39ACC33074D6307906385AABDFF84 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t322E7B3D87A39ACC33074D6307906385AABDFF84_StaticFields, ___U3CU3E9__3_0_1)); }
	inline Func_2_t6FF46EA12FC8C36FEF6153E31F4F80E736DB154A * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline Func_2_t6FF46EA12FC8C36FEF6153E31F4F80E736DB154A ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(Func_2_t6FF46EA12FC8C36FEF6153E31F4F80E736DB154A * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t322E7B3D87A39ACC33074D6307906385AABDFF84_StaticFields, ___U3CU3E9__14_0_2)); }
	inline Func_2_t5D7241EDD6D0A5F4391BC721C4248C5F74BF4B8C * get_U3CU3E9__14_0_2() const { return ___U3CU3E9__14_0_2; }
	inline Func_2_t5D7241EDD6D0A5F4391BC721C4248C5F74BF4B8C ** get_address_of_U3CU3E9__14_0_2() { return &___U3CU3E9__14_0_2; }
	inline void set_U3CU3E9__14_0_2(Func_2_t5D7241EDD6D0A5F4391BC721C4248C5F74BF4B8C * value)
	{
		___U3CU3E9__14_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__17_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t322E7B3D87A39ACC33074D6307906385AABDFF84_StaticFields, ___U3CU3E9__17_0_3)); }
	inline Func_2_tC0AF9916AB84E8EEAD7A1BB3A5E2027974927AF1 * get_U3CU3E9__17_0_3() const { return ___U3CU3E9__17_0_3; }
	inline Func_2_tC0AF9916AB84E8EEAD7A1BB3A5E2027974927AF1 ** get_address_of_U3CU3E9__17_0_3() { return &___U3CU3E9__17_0_3; }
	inline void set_U3CU3E9__17_0_3(Func_2_tC0AF9916AB84E8EEAD7A1BB3A5E2027974927AF1 * value)
	{
		___U3CU3E9__17_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__17_0_3), (void*)value);
	}
};


// Windows.Kinect.LongExposureInfraredFrameArrivedEventArgs/<>c
struct U3CU3Ec_t2494935FA4DB5D564FD29AD76AF88F036716C876  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2494935FA4DB5D564FD29AD76AF88F036716C876_StaticFields
{
public:
	// Windows.Kinect.LongExposureInfraredFrameArrivedEventArgs/<>c Windows.Kinect.LongExposureInfraredFrameArrivedEventArgs/<>c::<>9
	U3CU3Ec_t2494935FA4DB5D564FD29AD76AF88F036716C876 * ___U3CU3E9_0;
	// System.Func`2<System.IntPtr,Windows.Kinect.LongExposureInfraredFrameReference> Windows.Kinect.LongExposureInfraredFrameArrivedEventArgs/<>c::<>9__10_0
	Func_2_tED4C566064BFEF857F18581B529DCB416AEC079A * ___U3CU3E9__10_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2494935FA4DB5D564FD29AD76AF88F036716C876_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2494935FA4DB5D564FD29AD76AF88F036716C876 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2494935FA4DB5D564FD29AD76AF88F036716C876 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2494935FA4DB5D564FD29AD76AF88F036716C876 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2494935FA4DB5D564FD29AD76AF88F036716C876_StaticFields, ___U3CU3E9__10_0_1)); }
	inline Func_2_tED4C566064BFEF857F18581B529DCB416AEC079A * get_U3CU3E9__10_0_1() const { return ___U3CU3E9__10_0_1; }
	inline Func_2_tED4C566064BFEF857F18581B529DCB416AEC079A ** get_address_of_U3CU3E9__10_0_1() { return &___U3CU3E9__10_0_1; }
	inline void set_U3CU3E9__10_0_1(Func_2_tED4C566064BFEF857F18581B529DCB416AEC079A * value)
	{
		___U3CU3E9__10_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_0_1), (void*)value);
	}
};


// Windows.Kinect.LongExposureInfraredFrameReader/<>c
struct U3CU3Ec_t90741FD91A20DD6C089C4C1317FD86FD5C2ABC8E  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t90741FD91A20DD6C089C4C1317FD86FD5C2ABC8E_StaticFields
{
public:
	// Windows.Kinect.LongExposureInfraredFrameReader/<>c Windows.Kinect.LongExposureInfraredFrameReader/<>c::<>9
	U3CU3Ec_t90741FD91A20DD6C089C4C1317FD86FD5C2ABC8E * ___U3CU3E9_0;
	// System.Func`2<System.IntPtr,Windows.Kinect.LongExposureInfraredFrameSource> Windows.Kinect.LongExposureInfraredFrameReader/<>c::<>9__15_0
	Func_2_tC0AF9916AB84E8EEAD7A1BB3A5E2027974927AF1 * ___U3CU3E9__15_0_1;
	// System.Func`2<System.IntPtr,Windows.Kinect.LongExposureInfraredFrame> Windows.Kinect.LongExposureInfraredFrameReader/<>c::<>9__33_0
	Func_2_tCF4B1E777057BCA77B0862F4B8BCC6DE55B7D34C * ___U3CU3E9__33_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t90741FD91A20DD6C089C4C1317FD86FD5C2ABC8E_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t90741FD91A20DD6C089C4C1317FD86FD5C2ABC8E * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t90741FD91A20DD6C089C4C1317FD86FD5C2ABC8E ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t90741FD91A20DD6C089C4C1317FD86FD5C2ABC8E * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__15_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t90741FD91A20DD6C089C4C1317FD86FD5C2ABC8E_StaticFields, ___U3CU3E9__15_0_1)); }
	inline Func_2_tC0AF9916AB84E8EEAD7A1BB3A5E2027974927AF1 * get_U3CU3E9__15_0_1() const { return ___U3CU3E9__15_0_1; }
	inline Func_2_tC0AF9916AB84E8EEAD7A1BB3A5E2027974927AF1 ** get_address_of_U3CU3E9__15_0_1() { return &___U3CU3E9__15_0_1; }
	inline void set_U3CU3E9__15_0_1(Func_2_tC0AF9916AB84E8EEAD7A1BB3A5E2027974927AF1 * value)
	{
		___U3CU3E9__15_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__15_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__33_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t90741FD91A20DD6C089C4C1317FD86FD5C2ABC8E_StaticFields, ___U3CU3E9__33_0_2)); }
	inline Func_2_tCF4B1E777057BCA77B0862F4B8BCC6DE55B7D34C * get_U3CU3E9__33_0_2() const { return ___U3CU3E9__33_0_2; }
	inline Func_2_tCF4B1E777057BCA77B0862F4B8BCC6DE55B7D34C ** get_address_of_U3CU3E9__33_0_2() { return &___U3CU3E9__33_0_2; }
	inline void set_U3CU3E9__33_0_2(Func_2_tCF4B1E777057BCA77B0862F4B8BCC6DE55B7D34C * value)
	{
		___U3CU3E9__33_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__33_0_2), (void*)value);
	}
};


// Windows.Kinect.LongExposureInfraredFrameReader/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_tCAC4178BCD426D47986B8474DAA45F892FCFA9DD  : public RuntimeObject
{
public:
	// Windows.Kinect.LongExposureInfraredFrameReader Windows.Kinect.LongExposureInfraredFrameReader/<>c__DisplayClass19_0::objThis
	LongExposureInfraredFrameReader_t5FCC779D8B5E25CFE8EDEED01D7C1440A6B4F280 * ___objThis_0;
	// Windows.Kinect.LongExposureInfraredFrameArrivedEventArgs Windows.Kinect.LongExposureInfraredFrameReader/<>c__DisplayClass19_0::args
	LongExposureInfraredFrameArrivedEventArgs_t8EE4430B77770F6892FA634BA399F0184844BAD0 * ___args_1;

public:
	inline static int32_t get_offset_of_objThis_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_tCAC4178BCD426D47986B8474DAA45F892FCFA9DD, ___objThis_0)); }
	inline LongExposureInfraredFrameReader_t5FCC779D8B5E25CFE8EDEED01D7C1440A6B4F280 * get_objThis_0() const { return ___objThis_0; }
	inline LongExposureInfraredFrameReader_t5FCC779D8B5E25CFE8EDEED01D7C1440A6B4F280 ** get_address_of_objThis_0() { return &___objThis_0; }
	inline void set_objThis_0(LongExposureInfraredFrameReader_t5FCC779D8B5E25CFE8EDEED01D7C1440A6B4F280 * value)
	{
		___objThis_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objThis_0), (void*)value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_tCAC4178BCD426D47986B8474DAA45F892FCFA9DD, ___args_1)); }
	inline LongExposureInfraredFrameArrivedEventArgs_t8EE4430B77770F6892FA634BA399F0184844BAD0 * get_args_1() const { return ___args_1; }
	inline LongExposureInfraredFrameArrivedEventArgs_t8EE4430B77770F6892FA634BA399F0184844BAD0 ** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(LongExposureInfraredFrameArrivedEventArgs_t8EE4430B77770F6892FA634BA399F0184844BAD0 * value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___args_1), (void*)value);
	}
};


// Windows.Kinect.LongExposureInfraredFrameReader/<>c__DisplayClass19_1
struct U3CU3Ec__DisplayClass19_1_t5D95CA6888547D528C7D13D874EC483C99AF623A  : public RuntimeObject
{
public:
	// System.EventHandler`1<Windows.Kinect.LongExposureInfraredFrameArrivedEventArgs> Windows.Kinect.LongExposureInfraredFrameReader/<>c__DisplayClass19_1::func
	EventHandler_1_t2F840A25E61E8E3188D6BF4E7ADE22A02B18250D * ___func_0;
	// Windows.Kinect.LongExposureInfraredFrameReader/<>c__DisplayClass19_0 Windows.Kinect.LongExposureInfraredFrameReader/<>c__DisplayClass19_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass19_0_tCAC4178BCD426D47986B8474DAA45F892FCFA9DD * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_func_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_1_t5D95CA6888547D528C7D13D874EC483C99AF623A, ___func_0)); }
	inline EventHandler_1_t2F840A25E61E8E3188D6BF4E7ADE22A02B18250D * get_func_0() const { return ___func_0; }
	inline EventHandler_1_t2F840A25E61E8E3188D6BF4E7ADE22A02B18250D ** get_address_of_func_0() { return &___func_0; }
	inline void set_func_0(EventHandler_1_t2F840A25E61E8E3188D6BF4E7ADE22A02B18250D * value)
	{
		___func_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___func_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_1_t5D95CA6888547D528C7D13D874EC483C99AF623A, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass19_0_tCAC4178BCD426D47986B8474DAA45F892FCFA9DD * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass19_0_tCAC4178BCD426D47986B8474DAA45F892FCFA9DD ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass19_0_tCAC4178BCD426D47986B8474DAA45F892FCFA9DD * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// Windows.Kinect.LongExposureInfraredFrameReader/<>c__DisplayClass27_0
struct U3CU3Ec__DisplayClass27_0_tE3C52F3A6D10406ACC59F8860B9D5605FAD78255  : public RuntimeObject
{
public:
	// Windows.Kinect.LongExposureInfraredFrameReader Windows.Kinect.LongExposureInfraredFrameReader/<>c__DisplayClass27_0::objThis
	LongExposureInfraredFrameReader_t5FCC779D8B5E25CFE8EDEED01D7C1440A6B4F280 * ___objThis_0;
	// Windows.Data.PropertyChangedEventArgs Windows.Kinect.LongExposureInfraredFrameReader/<>c__DisplayClass27_0::args
	PropertyChangedEventArgs_tFA108A146CD6C15894BD8B76882BBC0DEF633CB1 * ___args_1;

public:
	inline static int32_t get_offset_of_objThis_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass27_0_tE3C52F3A6D10406ACC59F8860B9D5605FAD78255, ___objThis_0)); }
	inline LongExposureInfraredFrameReader_t5FCC779D8B5E25CFE8EDEED01D7C1440A6B4F280 * get_objThis_0() const { return ___objThis_0; }
	inline LongExposureInfraredFrameReader_t5FCC779D8B5E25CFE8EDEED01D7C1440A6B4F280 ** get_address_of_objThis_0() { return &___objThis_0; }
	inline void set_objThis_0(LongExposureInfraredFrameReader_t5FCC779D8B5E25CFE8EDEED01D7C1440A6B4F280 * value)
	{
		___objThis_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objThis_0), (void*)value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass27_0_tE3C52F3A6D10406ACC59F8860B9D5605FAD78255, ___args_1)); }
	inline PropertyChangedEventArgs_tFA108A146CD6C15894BD8B76882BBC0DEF633CB1 * get_args_1() const { return ___args_1; }
	inline PropertyChangedEventArgs_tFA108A146CD6C15894BD8B76882BBC0DEF633CB1 ** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(PropertyChangedEventArgs_tFA108A146CD6C15894BD8B76882BBC0DEF633CB1 * value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___args_1), (void*)value);
	}
};


// Windows.Kinect.LongExposureInfraredFrameReader/<>c__DisplayClass27_1
struct U3CU3Ec__DisplayClass27_1_t6D3D75C50D76FCA179F1CFFB7B604930E7143895  : public RuntimeObject
{
public:
	// System.EventHandler`1<Windows.Data.PropertyChangedEventArgs> Windows.Kinect.LongExposureInfraredFrameReader/<>c__DisplayClass27_1::func
	EventHandler_1_tB2BD70FB7C7747AB3593E537E4BA4310AC101962 * ___func_0;
	// Windows.Kinect.LongExposureInfraredFrameReader/<>c__DisplayClass27_0 Windows.Kinect.LongExposureInfraredFrameReader/<>c__DisplayClass27_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass27_0_tE3C52F3A6D10406ACC59F8860B9D5605FAD78255 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_func_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass27_1_t6D3D75C50D76FCA179F1CFFB7B604930E7143895, ___func_0)); }
	inline EventHandler_1_tB2BD70FB7C7747AB3593E537E4BA4310AC101962 * get_func_0() const { return ___func_0; }
	inline EventHandler_1_tB2BD70FB7C7747AB3593E537E4BA4310AC101962 ** get_address_of_func_0() { return &___func_0; }
	inline void set_func_0(EventHandler_1_tB2BD70FB7C7747AB3593E537E4BA4310AC101962 * value)
	{
		___func_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___func_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass27_1_t6D3D75C50D76FCA179F1CFFB7B604930E7143895, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass27_0_tE3C52F3A6D10406ACC59F8860B9D5605FAD78255 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass27_0_tE3C52F3A6D10406ACC59F8860B9D5605FAD78255 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass27_0_tE3C52F3A6D10406ACC59F8860B9D5605FAD78255 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// Windows.Kinect.LongExposureInfraredFrameReference/<>c
struct U3CU3Ec_t30E69BC01E67A0BFE2E7D0BAB11C262F90E44F50  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t30E69BC01E67A0BFE2E7D0BAB11C262F90E44F50_StaticFields
{
public:
	// Windows.Kinect.LongExposureInfraredFrameReference/<>c Windows.Kinect.LongExposureInfraredFrameReference/<>c::<>9
	U3CU3Ec_t30E69BC01E67A0BFE2E7D0BAB11C262F90E44F50 * ___U3CU3E9_0;
	// System.Func`2<System.IntPtr,Windows.Kinect.LongExposureInfraredFrame> Windows.Kinect.LongExposureInfraredFrameReference/<>c::<>9__12_0
	Func_2_tCF4B1E777057BCA77B0862F4B8BCC6DE55B7D34C * ___U3CU3E9__12_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t30E69BC01E67A0BFE2E7D0BAB11C262F90E44F50_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t30E69BC01E67A0BFE2E7D0BAB11C262F90E44F50 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t30E69BC01E67A0BFE2E7D0BAB11C262F90E44F50 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t30E69BC01E67A0BFE2E7D0BAB11C262F90E44F50 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t30E69BC01E67A0BFE2E7D0BAB11C262F90E44F50_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Func_2_tCF4B1E777057BCA77B0862F4B8BCC6DE55B7D34C * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Func_2_tCF4B1E777057BCA77B0862F4B8BCC6DE55B7D34C ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Func_2_tCF4B1E777057BCA77B0862F4B8BCC6DE55B7D34C * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_1), (void*)value);
	}
};


// Windows.Kinect.LongExposureInfraredFrameSource/<>c
struct U3CU3Ec_t4A1620F3B9B0FE3C0EC7A69786BBF5676D514CC1  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t4A1620F3B9B0FE3C0EC7A69786BBF5676D514CC1_StaticFields
{
public:
	// Windows.Kinect.LongExposureInfraredFrameSource/<>c Windows.Kinect.LongExposureInfraredFrameSource/<>c::<>9
	U3CU3Ec_t4A1620F3B9B0FE3C0EC7A69786BBF5676D514CC1 * ___U3CU3E9_0;
	// System.Func`2<System.IntPtr,Windows.Kinect.FrameDescription> Windows.Kinect.LongExposureInfraredFrameSource/<>c::<>9__10_0
	Func_2_t5D7241EDD6D0A5F4391BC721C4248C5F74BF4B8C * ___U3CU3E9__10_0_1;
	// System.Func`2<System.IntPtr,Windows.Kinect.KinectSensor> Windows.Kinect.LongExposureInfraredFrameSource/<>c::<>9__16_0
	Func_2_t9D468F926CC137A7E6DAE4F9F4C24CB08E3C33A9 * ___U3CU3E9__16_0_2;
	// System.Func`2<System.IntPtr,Windows.Kinect.LongExposureInfraredFrameReader> Windows.Kinect.LongExposureInfraredFrameSource/<>c::<>9__34_0
	Func_2_t25C3927B47729A797774807AAF390A2E4DEBAA0E * ___U3CU3E9__34_0_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4A1620F3B9B0FE3C0EC7A69786BBF5676D514CC1_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t4A1620F3B9B0FE3C0EC7A69786BBF5676D514CC1 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t4A1620F3B9B0FE3C0EC7A69786BBF5676D514CC1 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t4A1620F3B9B0FE3C0EC7A69786BBF5676D514CC1 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4A1620F3B9B0FE3C0EC7A69786BBF5676D514CC1_StaticFields, ___U3CU3E9__10_0_1)); }
	inline Func_2_t5D7241EDD6D0A5F4391BC721C4248C5F74BF4B8C * get_U3CU3E9__10_0_1() const { return ___U3CU3E9__10_0_1; }
	inline Func_2_t5D7241EDD6D0A5F4391BC721C4248C5F74BF4B8C ** get_address_of_U3CU3E9__10_0_1() { return &___U3CU3E9__10_0_1; }
	inline void set_U3CU3E9__10_0_1(Func_2_t5D7241EDD6D0A5F4391BC721C4248C5F74BF4B8C * value)
	{
		___U3CU3E9__10_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__16_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4A1620F3B9B0FE3C0EC7A69786BBF5676D514CC1_StaticFields, ___U3CU3E9__16_0_2)); }
	inline Func_2_t9D468F926CC137A7E6DAE4F9F4C24CB08E3C33A9 * get_U3CU3E9__16_0_2() const { return ___U3CU3E9__16_0_2; }
	inline Func_2_t9D468F926CC137A7E6DAE4F9F4C24CB08E3C33A9 ** get_address_of_U3CU3E9__16_0_2() { return &___U3CU3E9__16_0_2; }
	inline void set_U3CU3E9__16_0_2(Func_2_t9D468F926CC137A7E6DAE4F9F4C24CB08E3C33A9 * value)
	{
		___U3CU3E9__16_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__16_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__34_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4A1620F3B9B0FE3C0EC7A69786BBF5676D514CC1_StaticFields, ___U3CU3E9__34_0_3)); }
	inline Func_2_t25C3927B47729A797774807AAF390A2E4DEBAA0E * get_U3CU3E9__34_0_3() const { return ___U3CU3E9__34_0_3; }
	inline Func_2_t25C3927B47729A797774807AAF390A2E4DEBAA0E ** get_address_of_U3CU3E9__34_0_3() { return &___U3CU3E9__34_0_3; }
	inline void set_U3CU3E9__34_0_3(Func_2_t25C3927B47729A797774807AAF390A2E4DEBAA0E * value)
	{
		___U3CU3E9__34_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__34_0_3), (void*)value);
	}
};


// Windows.Kinect.LongExposureInfraredFrameSource/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t327F2B8B42C8210BC752AFD2819CEDEC11128E26  : public RuntimeObject
{
public:
	// Windows.Kinect.LongExposureInfraredFrameSource Windows.Kinect.LongExposureInfraredFrameSource/<>c__DisplayClass20_0::objThis
	LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337 * ___objThis_0;
	// Windows.Kinect.FrameCapturedEventArgs Windows.Kinect.LongExposureInfraredFrameSource/<>c__DisplayClass20_0::args
	FrameCapturedEventArgs_tD7048F9154D0AB0AA5A9815316EF62931EA543A5 * ___args_1;

public:
	inline static int32_t get_offset_of_objThis_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_t327F2B8B42C8210BC752AFD2819CEDEC11128E26, ___objThis_0)); }
	inline LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337 * get_objThis_0() const { return ___objThis_0; }
	inline LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337 ** get_address_of_objThis_0() { return &___objThis_0; }
	inline void set_objThis_0(LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337 * value)
	{
		___objThis_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objThis_0), (void*)value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_t327F2B8B42C8210BC752AFD2819CEDEC11128E26, ___args_1)); }
	inline FrameCapturedEventArgs_tD7048F9154D0AB0AA5A9815316EF62931EA543A5 * get_args_1() const { return ___args_1; }
	inline FrameCapturedEventArgs_tD7048F9154D0AB0AA5A9815316EF62931EA543A5 ** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(FrameCapturedEventArgs_tD7048F9154D0AB0AA5A9815316EF62931EA543A5 * value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___args_1), (void*)value);
	}
};


// Windows.Kinect.LongExposureInfraredFrameSource/<>c__DisplayClass20_1
struct U3CU3Ec__DisplayClass20_1_t7139DBEFCDFEA41BC0FC756D06C94187AD0BE04A  : public RuntimeObject
{
public:
	// System.EventHandler`1<Windows.Kinect.FrameCapturedEventArgs> Windows.Kinect.LongExposureInfraredFrameSource/<>c__DisplayClass20_1::func
	EventHandler_1_tB59FEF7687065A16102FFC333CCA4BA5069C0A05 * ___func_0;
	// Windows.Kinect.LongExposureInfraredFrameSource/<>c__DisplayClass20_0 Windows.Kinect.LongExposureInfraredFrameSource/<>c__DisplayClass20_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass20_0_t327F2B8B42C8210BC752AFD2819CEDEC11128E26 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_func_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_1_t7139DBEFCDFEA41BC0FC756D06C94187AD0BE04A, ___func_0)); }
	inline EventHandler_1_tB59FEF7687065A16102FFC333CCA4BA5069C0A05 * get_func_0() const { return ___func_0; }
	inline EventHandler_1_tB59FEF7687065A16102FFC333CCA4BA5069C0A05 ** get_address_of_func_0() { return &___func_0; }
	inline void set_func_0(EventHandler_1_tB59FEF7687065A16102FFC333CCA4BA5069C0A05 * value)
	{
		___func_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___func_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_1_t7139DBEFCDFEA41BC0FC756D06C94187AD0BE04A, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass20_0_t327F2B8B42C8210BC752AFD2819CEDEC11128E26 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass20_0_t327F2B8B42C8210BC752AFD2819CEDEC11128E26 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass20_0_t327F2B8B42C8210BC752AFD2819CEDEC11128E26 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// Windows.Kinect.LongExposureInfraredFrameSource/<>c__DisplayClass28_0
struct U3CU3Ec__DisplayClass28_0_tE7FAE6838B28CDFB20D9A4B4AC223A413CB9E549  : public RuntimeObject
{
public:
	// Windows.Kinect.LongExposureInfraredFrameSource Windows.Kinect.LongExposureInfraredFrameSource/<>c__DisplayClass28_0::objThis
	LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337 * ___objThis_0;
	// Windows.Data.PropertyChangedEventArgs Windows.Kinect.LongExposureInfraredFrameSource/<>c__DisplayClass28_0::args
	PropertyChangedEventArgs_tFA108A146CD6C15894BD8B76882BBC0DEF633CB1 * ___args_1;

public:
	inline static int32_t get_offset_of_objThis_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass28_0_tE7FAE6838B28CDFB20D9A4B4AC223A413CB9E549, ___objThis_0)); }
	inline LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337 * get_objThis_0() const { return ___objThis_0; }
	inline LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337 ** get_address_of_objThis_0() { return &___objThis_0; }
	inline void set_objThis_0(LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337 * value)
	{
		___objThis_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objThis_0), (void*)value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass28_0_tE7FAE6838B28CDFB20D9A4B4AC223A413CB9E549, ___args_1)); }
	inline PropertyChangedEventArgs_tFA108A146CD6C15894BD8B76882BBC0DEF633CB1 * get_args_1() const { return ___args_1; }
	inline PropertyChangedEventArgs_tFA108A146CD6C15894BD8B76882BBC0DEF633CB1 ** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(PropertyChangedEventArgs_tFA108A146CD6C15894BD8B76882BBC0DEF633CB1 * value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___args_1), (void*)value);
	}
};


// Windows.Kinect.LongExposureInfraredFrameSource/<>c__DisplayClass28_1
struct U3CU3Ec__DisplayClass28_1_tBBE8C500D9DABE65B0748F4E8C89F5D332CB22BD  : public RuntimeObject
{
public:
	// System.EventHandler`1<Windows.Data.PropertyChangedEventArgs> Windows.Kinect.LongExposureInfraredFrameSource/<>c__DisplayClass28_1::func
	EventHandler_1_tB2BD70FB7C7747AB3593E537E4BA4310AC101962 * ___func_0;
	// Windows.Kinect.LongExposureInfraredFrameSource/<>c__DisplayClass28_0 Windows.Kinect.LongExposureInfraredFrameSource/<>c__DisplayClass28_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass28_0_tE7FAE6838B28CDFB20D9A4B4AC223A413CB9E549 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_func_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass28_1_tBBE8C500D9DABE65B0748F4E8C89F5D332CB22BD, ___func_0)); }
	inline EventHandler_1_tB2BD70FB7C7747AB3593E537E4BA4310AC101962 * get_func_0() const { return ___func_0; }
	inline EventHandler_1_tB2BD70FB7C7747AB3593E537E4BA4310AC101962 ** get_address_of_func_0() { return &___func_0; }
	inline void set_func_0(EventHandler_1_tB2BD70FB7C7747AB3593E537E4BA4310AC101962 * value)
	{
		___func_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___func_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass28_1_tBBE8C500D9DABE65B0748F4E8C89F5D332CB22BD, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass28_0_tE7FAE6838B28CDFB20D9A4B4AC223A413CB9E549 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass28_0_tE7FAE6838B28CDFB20D9A4B4AC223A413CB9E549 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass28_0_tE7FAE6838B28CDFB20D9A4B4AC223A413CB9E549 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// Windows.Kinect.MultiSourceFrame/<>c
struct U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA_StaticFields
{
public:
	// Windows.Kinect.MultiSourceFrame/<>c Windows.Kinect.MultiSourceFrame/<>c::<>9
	U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA * ___U3CU3E9_0;
	// System.Func`2<System.IntPtr,Windows.Kinect.BodyFrameReference> Windows.Kinect.MultiSourceFrame/<>c::<>9__10_0
	Func_2_t6D93854D49DB36707E60A419EEC4B96056515B92 * ___U3CU3E9__10_0_1;
	// System.Func`2<System.IntPtr,Windows.Kinect.BodyIndexFrameReference> Windows.Kinect.MultiSourceFrame/<>c::<>9__13_0
	Func_2_tA77DF17FB0063E6EED85F1134F36E7513E17D952 * ___U3CU3E9__13_0_2;
	// System.Func`2<System.IntPtr,Windows.Kinect.ColorFrameReference> Windows.Kinect.MultiSourceFrame/<>c::<>9__16_0
	Func_2_t3472416A955FFC22DA1AAACB1855BE0830419590 * ___U3CU3E9__16_0_3;
	// System.Func`2<System.IntPtr,Windows.Kinect.DepthFrameReference> Windows.Kinect.MultiSourceFrame/<>c::<>9__19_0
	Func_2_t278C751788D6782880DA6052260623C83993C033 * ___U3CU3E9__19_0_4;
	// System.Func`2<System.IntPtr,Windows.Kinect.InfraredFrameReference> Windows.Kinect.MultiSourceFrame/<>c::<>9__22_0
	Func_2_tD22CC0C92BA4CAA3D58FA1F486DA178462B87731 * ___U3CU3E9__22_0_5;
	// System.Func`2<System.IntPtr,Windows.Kinect.LongExposureInfraredFrameReference> Windows.Kinect.MultiSourceFrame/<>c::<>9__25_0
	Func_2_tED4C566064BFEF857F18581B529DCB416AEC079A * ___U3CU3E9__25_0_6;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA_StaticFields, ___U3CU3E9__10_0_1)); }
	inline Func_2_t6D93854D49DB36707E60A419EEC4B96056515B92 * get_U3CU3E9__10_0_1() const { return ___U3CU3E9__10_0_1; }
	inline Func_2_t6D93854D49DB36707E60A419EEC4B96056515B92 ** get_address_of_U3CU3E9__10_0_1() { return &___U3CU3E9__10_0_1; }
	inline void set_U3CU3E9__10_0_1(Func_2_t6D93854D49DB36707E60A419EEC4B96056515B92 * value)
	{
		___U3CU3E9__10_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA_StaticFields, ___U3CU3E9__13_0_2)); }
	inline Func_2_tA77DF17FB0063E6EED85F1134F36E7513E17D952 * get_U3CU3E9__13_0_2() const { return ___U3CU3E9__13_0_2; }
	inline Func_2_tA77DF17FB0063E6EED85F1134F36E7513E17D952 ** get_address_of_U3CU3E9__13_0_2() { return &___U3CU3E9__13_0_2; }
	inline void set_U3CU3E9__13_0_2(Func_2_tA77DF17FB0063E6EED85F1134F36E7513E17D952 * value)
	{
		___U3CU3E9__13_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__13_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__16_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA_StaticFields, ___U3CU3E9__16_0_3)); }
	inline Func_2_t3472416A955FFC22DA1AAACB1855BE0830419590 * get_U3CU3E9__16_0_3() const { return ___U3CU3E9__16_0_3; }
	inline Func_2_t3472416A955FFC22DA1AAACB1855BE0830419590 ** get_address_of_U3CU3E9__16_0_3() { return &___U3CU3E9__16_0_3; }
	inline void set_U3CU3E9__16_0_3(Func_2_t3472416A955FFC22DA1AAACB1855BE0830419590 * value)
	{
		___U3CU3E9__16_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__16_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__19_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA_StaticFields, ___U3CU3E9__19_0_4)); }
	inline Func_2_t278C751788D6782880DA6052260623C83993C033 * get_U3CU3E9__19_0_4() const { return ___U3CU3E9__19_0_4; }
	inline Func_2_t278C751788D6782880DA6052260623C83993C033 ** get_address_of_U3CU3E9__19_0_4() { return &___U3CU3E9__19_0_4; }
	inline void set_U3CU3E9__19_0_4(Func_2_t278C751788D6782880DA6052260623C83993C033 * value)
	{
		___U3CU3E9__19_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__19_0_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__22_0_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA_StaticFields, ___U3CU3E9__22_0_5)); }
	inline Func_2_tD22CC0C92BA4CAA3D58FA1F486DA178462B87731 * get_U3CU3E9__22_0_5() const { return ___U3CU3E9__22_0_5; }
	inline Func_2_tD22CC0C92BA4CAA3D58FA1F486DA178462B87731 ** get_address_of_U3CU3E9__22_0_5() { return &___U3CU3E9__22_0_5; }
	inline void set_U3CU3E9__22_0_5(Func_2_tD22CC0C92BA4CAA3D58FA1F486DA178462B87731 * value)
	{
		___U3CU3E9__22_0_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__22_0_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_0_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA_StaticFields, ___U3CU3E9__25_0_6)); }
	inline Func_2_tED4C566064BFEF857F18581B529DCB416AEC079A * get_U3CU3E9__25_0_6() const { return ___U3CU3E9__25_0_6; }
	inline Func_2_tED4C566064BFEF857F18581B529DCB416AEC079A ** get_address_of_U3CU3E9__25_0_6() { return &___U3CU3E9__25_0_6; }
	inline void set_U3CU3E9__25_0_6(Func_2_tED4C566064BFEF857F18581B529DCB416AEC079A * value)
	{
		___U3CU3E9__25_0_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_0_6), (void*)value);
	}
};


// Windows.Kinect.MultiSourceFrameArrivedEventArgs/<>c
struct U3CU3Ec_t3B48CEAB86B70AD0179D82B0B4B4C7AAA9CCB247  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3B48CEAB86B70AD0179D82B0B4B4C7AAA9CCB247_StaticFields
{
public:
	// Windows.Kinect.MultiSourceFrameArrivedEventArgs/<>c Windows.Kinect.MultiSourceFrameArrivedEventArgs/<>c::<>9
	U3CU3Ec_t3B48CEAB86B70AD0179D82B0B4B4C7AAA9CCB247 * ___U3CU3E9_0;
	// System.Func`2<System.IntPtr,Windows.Kinect.MultiSourceFrameReference> Windows.Kinect.MultiSourceFrameArrivedEventArgs/<>c::<>9__10_0
	Func_2_tDE97E8E2AD6F61BAFB3F5D15B5741B46C74B0264 * ___U3CU3E9__10_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3B48CEAB86B70AD0179D82B0B4B4C7AAA9CCB247_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3B48CEAB86B70AD0179D82B0B4B4C7AAA9CCB247 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3B48CEAB86B70AD0179D82B0B4B4C7AAA9CCB247 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3B48CEAB86B70AD0179D82B0B4B4C7AAA9CCB247 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3B48CEAB86B70AD0179D82B0B4B4C7AAA9CCB247_StaticFields, ___U3CU3E9__10_0_1)); }
	inline Func_2_tDE97E8E2AD6F61BAFB3F5D15B5741B46C74B0264 * get_U3CU3E9__10_0_1() const { return ___U3CU3E9__10_0_1; }
	inline Func_2_tDE97E8E2AD6F61BAFB3F5D15B5741B46C74B0264 ** get_address_of_U3CU3E9__10_0_1() { return &___U3CU3E9__10_0_1; }
	inline void set_U3CU3E9__10_0_1(Func_2_tDE97E8E2AD6F61BAFB3F5D15B5741B46C74B0264 * value)
	{
		___U3CU3E9__10_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_0_1), (void*)value);
	}
};


// Windows.Kinect.MultiSourceFrameReader/<>c
struct U3CU3Ec_tA6A7F62B49C170EA8E9259580DB8A1746AAE2628  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tA6A7F62B49C170EA8E9259580DB8A1746AAE2628_StaticFields
{
public:
	// Windows.Kinect.MultiSourceFrameReader/<>c Windows.Kinect.MultiSourceFrameReader/<>c::<>9
	U3CU3Ec_tA6A7F62B49C170EA8E9259580DB8A1746AAE2628 * ___U3CU3E9_0;
	// System.Func`2<System.IntPtr,Windows.Kinect.KinectSensor> Windows.Kinect.MultiSourceFrameReader/<>c::<>9__18_0
	Func_2_t9D468F926CC137A7E6DAE4F9F4C24CB08E3C33A9 * ___U3CU3E9__18_0_1;
	// System.Func`2<System.IntPtr,Windows.Kinect.MultiSourceFrame> Windows.Kinect.MultiSourceFrameReader/<>c::<>9__36_0
	Func_2_t0DD86BE63D0B62E41BD4C1BA06678132ACF724CD * ___U3CU3E9__36_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA6A7F62B49C170EA8E9259580DB8A1746AAE2628_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tA6A7F62B49C170EA8E9259580DB8A1746AAE2628 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tA6A7F62B49C170EA8E9259580DB8A1746AAE2628 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tA6A7F62B49C170EA8E9259580DB8A1746AAE2628 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA6A7F62B49C170EA8E9259580DB8A1746AAE2628_StaticFields, ___U3CU3E9__18_0_1)); }
	inline Func_2_t9D468F926CC137A7E6DAE4F9F4C24CB08E3C33A9 * get_U3CU3E9__18_0_1() const { return ___U3CU3E9__18_0_1; }
	inline Func_2_t9D468F926CC137A7E6DAE4F9F4C24CB08E3C33A9 ** get_address_of_U3CU3E9__18_0_1() { return &___U3CU3E9__18_0_1; }
	inline void set_U3CU3E9__18_0_1(Func_2_t9D468F926CC137A7E6DAE4F9F4C24CB08E3C33A9 * value)
	{
		___U3CU3E9__18_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__18_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__36_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tA6A7F62B49C170EA8E9259580DB8A1746AAE2628_StaticFields, ___U3CU3E9__36_0_2)); }
	inline Func_2_t0DD86BE63D0B62E41BD4C1BA06678132ACF724CD * get_U3CU3E9__36_0_2() const { return ___U3CU3E9__36_0_2; }
	inline Func_2_t0DD86BE63D0B62E41BD4C1BA06678132ACF724CD ** get_address_of_U3CU3E9__36_0_2() { return &___U3CU3E9__36_0_2; }
	inline void set_U3CU3E9__36_0_2(Func_2_t0DD86BE63D0B62E41BD4C1BA06678132ACF724CD * value)
	{
		___U3CU3E9__36_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__36_0_2), (void*)value);
	}
};


// Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_tF933F53F77B7308E0545D150A1031BF063483DB5  : public RuntimeObject
{
public:
	// Windows.Kinect.MultiSourceFrameReader Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass22_0::objThis
	MultiSourceFrameReader_t4CF408C6284FA502D56444B52A0488DD0155046C * ___objThis_0;
	// Windows.Kinect.MultiSourceFrameArrivedEventArgs Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass22_0::args
	MultiSourceFrameArrivedEventArgs_tFC6A0881995713CA74F376AEB59343C5AE3CDED1 * ___args_1;

public:
	inline static int32_t get_offset_of_objThis_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_tF933F53F77B7308E0545D150A1031BF063483DB5, ___objThis_0)); }
	inline MultiSourceFrameReader_t4CF408C6284FA502D56444B52A0488DD0155046C * get_objThis_0() const { return ___objThis_0; }
	inline MultiSourceFrameReader_t4CF408C6284FA502D56444B52A0488DD0155046C ** get_address_of_objThis_0() { return &___objThis_0; }
	inline void set_objThis_0(MultiSourceFrameReader_t4CF408C6284FA502D56444B52A0488DD0155046C * value)
	{
		___objThis_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objThis_0), (void*)value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_tF933F53F77B7308E0545D150A1031BF063483DB5, ___args_1)); }
	inline MultiSourceFrameArrivedEventArgs_tFC6A0881995713CA74F376AEB59343C5AE3CDED1 * get_args_1() const { return ___args_1; }
	inline MultiSourceFrameArrivedEventArgs_tFC6A0881995713CA74F376AEB59343C5AE3CDED1 ** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(MultiSourceFrameArrivedEventArgs_tFC6A0881995713CA74F376AEB59343C5AE3CDED1 * value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___args_1), (void*)value);
	}
};


// Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass22_1
struct U3CU3Ec__DisplayClass22_1_t4DD634AFA12116EEF2B9D4D468F94D35739C0D63  : public RuntimeObject
{
public:
	// System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs> Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass22_1::func
	EventHandler_1_t32A60B00DA36C871C4B539798908F1A561114391 * ___func_0;
	// Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass22_0 Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass22_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass22_0_tF933F53F77B7308E0545D150A1031BF063483DB5 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_func_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_1_t4DD634AFA12116EEF2B9D4D468F94D35739C0D63, ___func_0)); }
	inline EventHandler_1_t32A60B00DA36C871C4B539798908F1A561114391 * get_func_0() const { return ___func_0; }
	inline EventHandler_1_t32A60B00DA36C871C4B539798908F1A561114391 ** get_address_of_func_0() { return &___func_0; }
	inline void set_func_0(EventHandler_1_t32A60B00DA36C871C4B539798908F1A561114391 * value)
	{
		___func_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___func_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_1_t4DD634AFA12116EEF2B9D4D468F94D35739C0D63, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass22_0_tF933F53F77B7308E0545D150A1031BF063483DB5 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass22_0_tF933F53F77B7308E0545D150A1031BF063483DB5 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass22_0_tF933F53F77B7308E0545D150A1031BF063483DB5 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass30_0
struct U3CU3Ec__DisplayClass30_0_tADF1CCCC2354CB6FDB2E3DC53DB1890D2C647040  : public RuntimeObject
{
public:
	// Windows.Kinect.MultiSourceFrameReader Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass30_0::objThis
	MultiSourceFrameReader_t4CF408C6284FA502D56444B52A0488DD0155046C * ___objThis_0;
	// Windows.Data.PropertyChangedEventArgs Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass30_0::args
	PropertyChangedEventArgs_tFA108A146CD6C15894BD8B76882BBC0DEF633CB1 * ___args_1;

public:
	inline static int32_t get_offset_of_objThis_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_0_tADF1CCCC2354CB6FDB2E3DC53DB1890D2C647040, ___objThis_0)); }
	inline MultiSourceFrameReader_t4CF408C6284FA502D56444B52A0488DD0155046C * get_objThis_0() const { return ___objThis_0; }
	inline MultiSourceFrameReader_t4CF408C6284FA502D56444B52A0488DD0155046C ** get_address_of_objThis_0() { return &___objThis_0; }
	inline void set_objThis_0(MultiSourceFrameReader_t4CF408C6284FA502D56444B52A0488DD0155046C * value)
	{
		___objThis_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objThis_0), (void*)value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_0_tADF1CCCC2354CB6FDB2E3DC53DB1890D2C647040, ___args_1)); }
	inline PropertyChangedEventArgs_tFA108A146CD6C15894BD8B76882BBC0DEF633CB1 * get_args_1() const { return ___args_1; }
	inline PropertyChangedEventArgs_tFA108A146CD6C15894BD8B76882BBC0DEF633CB1 ** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(PropertyChangedEventArgs_tFA108A146CD6C15894BD8B76882BBC0DEF633CB1 * value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___args_1), (void*)value);
	}
};


// Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass30_1
struct U3CU3Ec__DisplayClass30_1_t6636053F58BEA7355116BF96B12C8DF9E04F17C8  : public RuntimeObject
{
public:
	// System.EventHandler`1<Windows.Data.PropertyChangedEventArgs> Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass30_1::func
	EventHandler_1_tB2BD70FB7C7747AB3593E537E4BA4310AC101962 * ___func_0;
	// Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass30_0 Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass30_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass30_0_tADF1CCCC2354CB6FDB2E3DC53DB1890D2C647040 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_func_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_1_t6636053F58BEA7355116BF96B12C8DF9E04F17C8, ___func_0)); }
	inline EventHandler_1_tB2BD70FB7C7747AB3593E537E4BA4310AC101962 * get_func_0() const { return ___func_0; }
	inline EventHandler_1_tB2BD70FB7C7747AB3593E537E4BA4310AC101962 ** get_address_of_func_0() { return &___func_0; }
	inline void set_func_0(EventHandler_1_tB2BD70FB7C7747AB3593E537E4BA4310AC101962 * value)
	{
		___func_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___func_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass30_1_t6636053F58BEA7355116BF96B12C8DF9E04F17C8, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass30_0_tADF1CCCC2354CB6FDB2E3DC53DB1890D2C647040 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass30_0_tADF1CCCC2354CB6FDB2E3DC53DB1890D2C647040 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass30_0_tADF1CCCC2354CB6FDB2E3DC53DB1890D2C647040 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// Windows.Kinect.MultiSourceFrameReference/<>c
struct U3CU3Ec_t5E2981FBACBE08129CF160F33BB15619312C97CC  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5E2981FBACBE08129CF160F33BB15619312C97CC_StaticFields
{
public:
	// Windows.Kinect.MultiSourceFrameReference/<>c Windows.Kinect.MultiSourceFrameReference/<>c::<>9
	U3CU3Ec_t5E2981FBACBE08129CF160F33BB15619312C97CC * ___U3CU3E9_0;
	// System.Func`2<System.IntPtr,Windows.Kinect.MultiSourceFrame> Windows.Kinect.MultiSourceFrameReference/<>c::<>9__9_0
	Func_2_t0DD86BE63D0B62E41BD4C1BA06678132ACF724CD * ___U3CU3E9__9_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5E2981FBACBE08129CF160F33BB15619312C97CC_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5E2981FBACBE08129CF160F33BB15619312C97CC * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5E2981FBACBE08129CF160F33BB15619312C97CC ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5E2981FBACBE08129CF160F33BB15619312C97CC * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__9_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5E2981FBACBE08129CF160F33BB15619312C97CC_StaticFields, ___U3CU3E9__9_0_1)); }
	inline Func_2_t0DD86BE63D0B62E41BD4C1BA06678132ACF724CD * get_U3CU3E9__9_0_1() const { return ___U3CU3E9__9_0_1; }
	inline Func_2_t0DD86BE63D0B62E41BD4C1BA06678132ACF724CD ** get_address_of_U3CU3E9__9_0_1() { return &___U3CU3E9__9_0_1; }
	inline void set_U3CU3E9__9_0_1(Func_2_t0DD86BE63D0B62E41BD4C1BA06678132ACF724CD * value)
	{
		___U3CU3E9__9_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__9_0_1), (void*)value);
	}
};


// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Windows.Kinect.BodyFrameReference
struct BodyFrameReference_t2FAF1959353883E9BC1F82D1E3CAD0CE554023E4  : public RuntimeObject
{
public:
	// System.IntPtr Windows.Kinect.BodyFrameReference::_pNative
	intptr_t ____pNative_0;

public:
	inline static int32_t get_offset_of__pNative_0() { return static_cast<int32_t>(offsetof(BodyFrameReference_t2FAF1959353883E9BC1F82D1E3CAD0CE554023E4, ____pNative_0)); }
	inline intptr_t get__pNative_0() const { return ____pNative_0; }
	inline intptr_t* get_address_of__pNative_0() { return &____pNative_0; }
	inline void set__pNative_0(intptr_t value)
	{
		____pNative_0 = value;
	}
};


// Windows.Kinect.BodyIndexFrameReference
struct BodyIndexFrameReference_t3614DE16008177E9FCEF10AFE991AD12FAFA7585  : public RuntimeObject
{
public:
	// System.IntPtr Windows.Kinect.BodyIndexFrameReference::_pNative
	intptr_t ____pNative_0;

public:
	inline static int32_t get_offset_of__pNative_0() { return static_cast<int32_t>(offsetof(BodyIndexFrameReference_t3614DE16008177E9FCEF10AFE991AD12FAFA7585, ____pNative_0)); }
	inline intptr_t get__pNative_0() const { return ____pNative_0; }
	inline intptr_t* get_address_of__pNative_0() { return &____pNative_0; }
	inline void set__pNative_0(intptr_t value)
	{
		____pNative_0 = value;
	}
};


// Windows.Kinect.ColorFrameReference
struct ColorFrameReference_t6985FBD968B49B8B5620F309BC09F9973929701C  : public RuntimeObject
{
public:
	// System.IntPtr Windows.Kinect.ColorFrameReference::_pNative
	intptr_t ____pNative_0;

public:
	inline static int32_t get_offset_of__pNative_0() { return static_cast<int32_t>(offsetof(ColorFrameReference_t6985FBD968B49B8B5620F309BC09F9973929701C, ____pNative_0)); }
	inline intptr_t get__pNative_0() const { return ____pNative_0; }
	inline intptr_t* get_address_of__pNative_0() { return &____pNative_0; }
	inline void set__pNative_0(intptr_t value)
	{
		____pNative_0 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// Windows.Kinect.DepthFrameReference
struct DepthFrameReference_t203196DB0EDAE9FFBFC298222BC43FF618D7D8B0  : public RuntimeObject
{
public:
	// System.IntPtr Windows.Kinect.DepthFrameReference::_pNative
	intptr_t ____pNative_0;

public:
	inline static int32_t get_offset_of__pNative_0() { return static_cast<int32_t>(offsetof(DepthFrameReference_t203196DB0EDAE9FFBFC298222BC43FF618D7D8B0, ____pNative_0)); }
	inline intptr_t get__pNative_0() const { return ____pNative_0; }
	inline intptr_t* get_address_of__pNative_0() { return &____pNative_0; }
	inline void set__pNative_0(intptr_t value)
	{
		____pNative_0 = value;
	}
};


// Windows.Kinect.FrameCapturedEventArgs
struct FrameCapturedEventArgs_tD7048F9154D0AB0AA5A9815316EF62931EA543A5  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.IntPtr Windows.Kinect.FrameCapturedEventArgs::_pNative
	intptr_t ____pNative_1;

public:
	inline static int32_t get_offset_of__pNative_1() { return static_cast<int32_t>(offsetof(FrameCapturedEventArgs_tD7048F9154D0AB0AA5A9815316EF62931EA543A5, ____pNative_1)); }
	inline intptr_t get__pNative_1() const { return ____pNative_1; }
	inline intptr_t* get_address_of__pNative_1() { return &____pNative_1; }
	inline void set__pNative_1(intptr_t value)
	{
		____pNative_1 = value;
	}
};


// Windows.Kinect.FrameDescription
struct FrameDescription_t85467D68A9297CBD38C234A3D47ADCBB16058FE9  : public RuntimeObject
{
public:
	// System.IntPtr Windows.Kinect.FrameDescription::_pNative
	intptr_t ____pNative_0;

public:
	inline static int32_t get_offset_of__pNative_0() { return static_cast<int32_t>(offsetof(FrameDescription_t85467D68A9297CBD38C234A3D47ADCBB16058FE9, ____pNative_0)); }
	inline intptr_t get__pNative_0() const { return ____pNative_0; }
	inline intptr_t* get_address_of__pNative_0() { return &____pNative_0; }
	inline void set__pNative_0(intptr_t value)
	{
		____pNative_0 = value;
	}
};


// Windows.Kinect.InfraredFrameReference
struct InfraredFrameReference_t056C1464ECC12EE8005B737B3BA3AF7CC10470A2  : public RuntimeObject
{
public:
	// System.IntPtr Windows.Kinect.InfraredFrameReference::_pNative
	intptr_t ____pNative_0;

public:
	inline static int32_t get_offset_of__pNative_0() { return static_cast<int32_t>(offsetof(InfraredFrameReference_t056C1464ECC12EE8005B737B3BA3AF7CC10470A2, ____pNative_0)); }
	inline intptr_t get__pNative_0() const { return ____pNative_0; }
	inline intptr_t* get_address_of__pNative_0() { return &____pNative_0; }
	inline void set__pNative_0(intptr_t value)
	{
		____pNative_0 = value;
	}
};


// Windows.Kinect.IsAvailableChangedEventArgs
struct IsAvailableChangedEventArgs_tCF34C5B6B713FCAABCDDBFFA43FEC7ED0D5748CA  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.IntPtr Windows.Kinect.IsAvailableChangedEventArgs::_pNative
	intptr_t ____pNative_1;

public:
	inline static int32_t get_offset_of__pNative_1() { return static_cast<int32_t>(offsetof(IsAvailableChangedEventArgs_tCF34C5B6B713FCAABCDDBFFA43FEC7ED0D5748CA, ____pNative_1)); }
	inline intptr_t get__pNative_1() const { return ____pNative_1; }
	inline intptr_t* get_address_of__pNative_1() { return &____pNative_1; }
	inline void set__pNative_1(intptr_t value)
	{
		____pNative_1 = value;
	}
};


// Windows.Kinect.KinectBuffer
struct KinectBuffer_t544033B102952121E1B70A9B94449C1B2DC6C96A  : public RuntimeObject
{
public:
	// System.IntPtr Windows.Kinect.KinectBuffer::_pNative
	intptr_t ____pNative_0;

public:
	inline static int32_t get_offset_of__pNative_0() { return static_cast<int32_t>(offsetof(KinectBuffer_t544033B102952121E1B70A9B94449C1B2DC6C96A, ____pNative_0)); }
	inline intptr_t get__pNative_0() const { return ____pNative_0; }
	inline intptr_t* get_address_of__pNative_0() { return &____pNative_0; }
	inline void set__pNative_0(intptr_t value)
	{
		____pNative_0 = value;
	}
};


// Windows.Kinect.KinectSensor
struct KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC  : public RuntimeObject
{
public:
	// System.IntPtr Windows.Kinect.KinectSensor::_pNative
	intptr_t ____pNative_0;

public:
	inline static int32_t get_offset_of__pNative_0() { return static_cast<int32_t>(offsetof(KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC, ____pNative_0)); }
	inline intptr_t get__pNative_0() const { return ____pNative_0; }
	inline intptr_t* get_address_of__pNative_0() { return &____pNative_0; }
	inline void set__pNative_0(intptr_t value)
	{
		____pNative_0 = value;
	}
};

struct KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC_StaticFields
{
public:
	// System.Runtime.InteropServices.GCHandle Windows.Kinect.KinectSensor::_Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle_1;
	// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.IsAvailableChangedEventArgs>>> Windows.Kinect.KinectSensor::Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks
	CollectionMap_2_t1DA53B12B280859DB2223CA17253046AC8C063E1 * ___Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2;
	// System.Runtime.InteropServices.GCHandle Windows.Kinect.KinectSensor::_Windows_Data_PropertyChangedEventArgs_Delegate_Handle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3;
	// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>> Windows.Kinect.KinectSensor::Windows_Data_PropertyChangedEventArgs_Delegate_callbacks
	CollectionMap_2_t14CA4B3B93CD9942736293185C18039A0FC18985 * ___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4;

public:
	inline static int32_t get_offset_of__Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle_1() { return static_cast<int32_t>(offsetof(KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC_StaticFields, ____Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle_1)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get__Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle_1() const { return ____Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle_1; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of__Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle_1() { return &____Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle_1; }
	inline void set__Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle_1(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		____Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handle_1 = value;
	}

	inline static int32_t get_offset_of_Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2() { return static_cast<int32_t>(offsetof(KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC_StaticFields, ___Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2)); }
	inline CollectionMap_2_t1DA53B12B280859DB2223CA17253046AC8C063E1 * get_Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2() const { return ___Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2; }
	inline CollectionMap_2_t1DA53B12B280859DB2223CA17253046AC8C063E1 ** get_address_of_Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2() { return &___Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2; }
	inline void set_Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2(CollectionMap_2_t1DA53B12B280859DB2223CA17253046AC8C063E1 * value)
	{
		___Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Windows_Kinect_IsAvailableChangedEventArgs_Delegate_callbacks_2), (void*)value);
	}

	inline static int32_t get_offset_of__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3() { return static_cast<int32_t>(offsetof(KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC_StaticFields, ____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3() const { return ____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3() { return &____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3; }
	inline void set__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3 = value;
	}

	inline static int32_t get_offset_of_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4() { return static_cast<int32_t>(offsetof(KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC_StaticFields, ___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4)); }
	inline CollectionMap_2_t14CA4B3B93CD9942736293185C18039A0FC18985 * get_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4() const { return ___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4; }
	inline CollectionMap_2_t14CA4B3B93CD9942736293185C18039A0FC18985 ** get_address_of_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4() { return &___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4; }
	inline void set_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4(CollectionMap_2_t14CA4B3B93CD9942736293185C18039A0FC18985 * value)
	{
		___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4), (void*)value);
	}
};


// Windows.Kinect.LongExposureInfraredFrame
struct LongExposureInfraredFrame_t834B741765C10FF7945D0DCFE9C9ACCE258E5417  : public RuntimeObject
{
public:
	// System.IntPtr Windows.Kinect.LongExposureInfraredFrame::_pNative
	intptr_t ____pNative_0;

public:
	inline static int32_t get_offset_of__pNative_0() { return static_cast<int32_t>(offsetof(LongExposureInfraredFrame_t834B741765C10FF7945D0DCFE9C9ACCE258E5417, ____pNative_0)); }
	inline intptr_t get__pNative_0() const { return ____pNative_0; }
	inline intptr_t* get_address_of__pNative_0() { return &____pNative_0; }
	inline void set__pNative_0(intptr_t value)
	{
		____pNative_0 = value;
	}
};


// Windows.Kinect.LongExposureInfraredFrameArrivedEventArgs
struct LongExposureInfraredFrameArrivedEventArgs_t8EE4430B77770F6892FA634BA399F0184844BAD0  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.IntPtr Windows.Kinect.LongExposureInfraredFrameArrivedEventArgs::_pNative
	intptr_t ____pNative_1;

public:
	inline static int32_t get_offset_of__pNative_1() { return static_cast<int32_t>(offsetof(LongExposureInfraredFrameArrivedEventArgs_t8EE4430B77770F6892FA634BA399F0184844BAD0, ____pNative_1)); }
	inline intptr_t get__pNative_1() const { return ____pNative_1; }
	inline intptr_t* get_address_of__pNative_1() { return &____pNative_1; }
	inline void set__pNative_1(intptr_t value)
	{
		____pNative_1 = value;
	}
};


// Windows.Kinect.LongExposureInfraredFrameReader
struct LongExposureInfraredFrameReader_t5FCC779D8B5E25CFE8EDEED01D7C1440A6B4F280  : public RuntimeObject
{
public:
	// System.IntPtr Windows.Kinect.LongExposureInfraredFrameReader::_pNative
	intptr_t ____pNative_0;

public:
	inline static int32_t get_offset_of__pNative_0() { return static_cast<int32_t>(offsetof(LongExposureInfraredFrameReader_t5FCC779D8B5E25CFE8EDEED01D7C1440A6B4F280, ____pNative_0)); }
	inline intptr_t get__pNative_0() const { return ____pNative_0; }
	inline intptr_t* get_address_of__pNative_0() { return &____pNative_0; }
	inline void set__pNative_0(intptr_t value)
	{
		____pNative_0 = value;
	}
};

struct LongExposureInfraredFrameReader_t5FCC779D8B5E25CFE8EDEED01D7C1440A6B4F280_StaticFields
{
public:
	// System.Runtime.InteropServices.GCHandle Windows.Kinect.LongExposureInfraredFrameReader::_Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_Handle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_Handle_1;
	// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.LongExposureInfraredFrameArrivedEventArgs>>> Windows.Kinect.LongExposureInfraredFrameReader::Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_callbacks
	CollectionMap_2_t2AA30E965334FA5AB0264250D857342ABC7D65D1 * ___Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_callbacks_2;
	// System.Runtime.InteropServices.GCHandle Windows.Kinect.LongExposureInfraredFrameReader::_Windows_Data_PropertyChangedEventArgs_Delegate_Handle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3;
	// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>> Windows.Kinect.LongExposureInfraredFrameReader::Windows_Data_PropertyChangedEventArgs_Delegate_callbacks
	CollectionMap_2_t14CA4B3B93CD9942736293185C18039A0FC18985 * ___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4;

public:
	inline static int32_t get_offset_of__Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_Handle_1() { return static_cast<int32_t>(offsetof(LongExposureInfraredFrameReader_t5FCC779D8B5E25CFE8EDEED01D7C1440A6B4F280_StaticFields, ____Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_Handle_1)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get__Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_Handle_1() const { return ____Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_Handle_1; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of__Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_Handle_1() { return &____Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_Handle_1; }
	inline void set__Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_Handle_1(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		____Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_Handle_1 = value;
	}

	inline static int32_t get_offset_of_Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_callbacks_2() { return static_cast<int32_t>(offsetof(LongExposureInfraredFrameReader_t5FCC779D8B5E25CFE8EDEED01D7C1440A6B4F280_StaticFields, ___Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_callbacks_2)); }
	inline CollectionMap_2_t2AA30E965334FA5AB0264250D857342ABC7D65D1 * get_Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_callbacks_2() const { return ___Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_callbacks_2; }
	inline CollectionMap_2_t2AA30E965334FA5AB0264250D857342ABC7D65D1 ** get_address_of_Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_callbacks_2() { return &___Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_callbacks_2; }
	inline void set_Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_callbacks_2(CollectionMap_2_t2AA30E965334FA5AB0264250D857342ABC7D65D1 * value)
	{
		___Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_callbacks_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_callbacks_2), (void*)value);
	}

	inline static int32_t get_offset_of__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3() { return static_cast<int32_t>(offsetof(LongExposureInfraredFrameReader_t5FCC779D8B5E25CFE8EDEED01D7C1440A6B4F280_StaticFields, ____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3() const { return ____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3() { return &____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3; }
	inline void set__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3 = value;
	}

	inline static int32_t get_offset_of_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4() { return static_cast<int32_t>(offsetof(LongExposureInfraredFrameReader_t5FCC779D8B5E25CFE8EDEED01D7C1440A6B4F280_StaticFields, ___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4)); }
	inline CollectionMap_2_t14CA4B3B93CD9942736293185C18039A0FC18985 * get_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4() const { return ___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4; }
	inline CollectionMap_2_t14CA4B3B93CD9942736293185C18039A0FC18985 ** get_address_of_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4() { return &___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4; }
	inline void set_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4(CollectionMap_2_t14CA4B3B93CD9942736293185C18039A0FC18985 * value)
	{
		___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4), (void*)value);
	}
};


// Windows.Kinect.LongExposureInfraredFrameReference
struct LongExposureInfraredFrameReference_tC6A51F471C0AB80DAFE39436260636F29434BE04  : public RuntimeObject
{
public:
	// System.IntPtr Windows.Kinect.LongExposureInfraredFrameReference::_pNative
	intptr_t ____pNative_0;

public:
	inline static int32_t get_offset_of__pNative_0() { return static_cast<int32_t>(offsetof(LongExposureInfraredFrameReference_tC6A51F471C0AB80DAFE39436260636F29434BE04, ____pNative_0)); }
	inline intptr_t get__pNative_0() const { return ____pNative_0; }
	inline intptr_t* get_address_of__pNative_0() { return &____pNative_0; }
	inline void set__pNative_0(intptr_t value)
	{
		____pNative_0 = value;
	}
};


// Windows.Kinect.LongExposureInfraredFrameSource
struct LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337  : public RuntimeObject
{
public:
	// System.IntPtr Windows.Kinect.LongExposureInfraredFrameSource::_pNative
	intptr_t ____pNative_0;

public:
	inline static int32_t get_offset_of__pNative_0() { return static_cast<int32_t>(offsetof(LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337, ____pNative_0)); }
	inline intptr_t get__pNative_0() const { return ____pNative_0; }
	inline intptr_t* get_address_of__pNative_0() { return &____pNative_0; }
	inline void set__pNative_0(intptr_t value)
	{
		____pNative_0 = value;
	}
};

struct LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337_StaticFields
{
public:
	// System.Runtime.InteropServices.GCHandle Windows.Kinect.LongExposureInfraredFrameSource::_Windows_Kinect_FrameCapturedEventArgs_Delegate_Handle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____Windows_Kinect_FrameCapturedEventArgs_Delegate_Handle_1;
	// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.FrameCapturedEventArgs>>> Windows.Kinect.LongExposureInfraredFrameSource::Windows_Kinect_FrameCapturedEventArgs_Delegate_callbacks
	CollectionMap_2_t689CC10171206870A4DF1162D12EC1540D8EADD8 * ___Windows_Kinect_FrameCapturedEventArgs_Delegate_callbacks_2;
	// System.Runtime.InteropServices.GCHandle Windows.Kinect.LongExposureInfraredFrameSource::_Windows_Data_PropertyChangedEventArgs_Delegate_Handle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3;
	// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>> Windows.Kinect.LongExposureInfraredFrameSource::Windows_Data_PropertyChangedEventArgs_Delegate_callbacks
	CollectionMap_2_t14CA4B3B93CD9942736293185C18039A0FC18985 * ___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4;

public:
	inline static int32_t get_offset_of__Windows_Kinect_FrameCapturedEventArgs_Delegate_Handle_1() { return static_cast<int32_t>(offsetof(LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337_StaticFields, ____Windows_Kinect_FrameCapturedEventArgs_Delegate_Handle_1)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get__Windows_Kinect_FrameCapturedEventArgs_Delegate_Handle_1() const { return ____Windows_Kinect_FrameCapturedEventArgs_Delegate_Handle_1; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of__Windows_Kinect_FrameCapturedEventArgs_Delegate_Handle_1() { return &____Windows_Kinect_FrameCapturedEventArgs_Delegate_Handle_1; }
	inline void set__Windows_Kinect_FrameCapturedEventArgs_Delegate_Handle_1(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		____Windows_Kinect_FrameCapturedEventArgs_Delegate_Handle_1 = value;
	}

	inline static int32_t get_offset_of_Windows_Kinect_FrameCapturedEventArgs_Delegate_callbacks_2() { return static_cast<int32_t>(offsetof(LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337_StaticFields, ___Windows_Kinect_FrameCapturedEventArgs_Delegate_callbacks_2)); }
	inline CollectionMap_2_t689CC10171206870A4DF1162D12EC1540D8EADD8 * get_Windows_Kinect_FrameCapturedEventArgs_Delegate_callbacks_2() const { return ___Windows_Kinect_FrameCapturedEventArgs_Delegate_callbacks_2; }
	inline CollectionMap_2_t689CC10171206870A4DF1162D12EC1540D8EADD8 ** get_address_of_Windows_Kinect_FrameCapturedEventArgs_Delegate_callbacks_2() { return &___Windows_Kinect_FrameCapturedEventArgs_Delegate_callbacks_2; }
	inline void set_Windows_Kinect_FrameCapturedEventArgs_Delegate_callbacks_2(CollectionMap_2_t689CC10171206870A4DF1162D12EC1540D8EADD8 * value)
	{
		___Windows_Kinect_FrameCapturedEventArgs_Delegate_callbacks_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Windows_Kinect_FrameCapturedEventArgs_Delegate_callbacks_2), (void*)value);
	}

	inline static int32_t get_offset_of__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3() { return static_cast<int32_t>(offsetof(LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337_StaticFields, ____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3() const { return ____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3() { return &____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3; }
	inline void set__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3 = value;
	}

	inline static int32_t get_offset_of_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4() { return static_cast<int32_t>(offsetof(LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337_StaticFields, ___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4)); }
	inline CollectionMap_2_t14CA4B3B93CD9942736293185C18039A0FC18985 * get_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4() const { return ___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4; }
	inline CollectionMap_2_t14CA4B3B93CD9942736293185C18039A0FC18985 ** get_address_of_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4() { return &___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4; }
	inline void set_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4(CollectionMap_2_t14CA4B3B93CD9942736293185C18039A0FC18985 * value)
	{
		___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4), (void*)value);
	}
};


// Windows.Kinect.MultiSourceFrame
struct MultiSourceFrame_t281B4AA81E9C8B38F24E909A94CD1940E71E509E  : public RuntimeObject
{
public:
	// System.IntPtr Windows.Kinect.MultiSourceFrame::_pNative
	intptr_t ____pNative_0;

public:
	inline static int32_t get_offset_of__pNative_0() { return static_cast<int32_t>(offsetof(MultiSourceFrame_t281B4AA81E9C8B38F24E909A94CD1940E71E509E, ____pNative_0)); }
	inline intptr_t get__pNative_0() const { return ____pNative_0; }
	inline intptr_t* get_address_of__pNative_0() { return &____pNative_0; }
	inline void set__pNative_0(intptr_t value)
	{
		____pNative_0 = value;
	}
};


// Windows.Kinect.MultiSourceFrameArrivedEventArgs
struct MultiSourceFrameArrivedEventArgs_tFC6A0881995713CA74F376AEB59343C5AE3CDED1  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.IntPtr Windows.Kinect.MultiSourceFrameArrivedEventArgs::_pNative
	intptr_t ____pNative_1;

public:
	inline static int32_t get_offset_of__pNative_1() { return static_cast<int32_t>(offsetof(MultiSourceFrameArrivedEventArgs_tFC6A0881995713CA74F376AEB59343C5AE3CDED1, ____pNative_1)); }
	inline intptr_t get__pNative_1() const { return ____pNative_1; }
	inline intptr_t* get_address_of__pNative_1() { return &____pNative_1; }
	inline void set__pNative_1(intptr_t value)
	{
		____pNative_1 = value;
	}
};


// Windows.Kinect.MultiSourceFrameReader
struct MultiSourceFrameReader_t4CF408C6284FA502D56444B52A0488DD0155046C  : public RuntimeObject
{
public:
	// System.IntPtr Windows.Kinect.MultiSourceFrameReader::_pNative
	intptr_t ____pNative_0;

public:
	inline static int32_t get_offset_of__pNative_0() { return static_cast<int32_t>(offsetof(MultiSourceFrameReader_t4CF408C6284FA502D56444B52A0488DD0155046C, ____pNative_0)); }
	inline intptr_t get__pNative_0() const { return ____pNative_0; }
	inline intptr_t* get_address_of__pNative_0() { return &____pNative_0; }
	inline void set__pNative_0(intptr_t value)
	{
		____pNative_0 = value;
	}
};

struct MultiSourceFrameReader_t4CF408C6284FA502D56444B52A0488DD0155046C_StaticFields
{
public:
	// System.Runtime.InteropServices.GCHandle Windows.Kinect.MultiSourceFrameReader::_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handle_1;
	// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>>> Windows.Kinect.MultiSourceFrameReader::Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks
	CollectionMap_2_t70974465096D4399A2F2EEF2707B46C9597D8212 * ___Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2;
	// System.Runtime.InteropServices.GCHandle Windows.Kinect.MultiSourceFrameReader::_Windows_Data_PropertyChangedEventArgs_Delegate_Handle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3;
	// Helper.CollectionMap`2<System.IntPtr,System.Collections.Generic.List`1<System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>>> Windows.Kinect.MultiSourceFrameReader::Windows_Data_PropertyChangedEventArgs_Delegate_callbacks
	CollectionMap_2_t14CA4B3B93CD9942736293185C18039A0FC18985 * ___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4;

public:
	inline static int32_t get_offset_of__Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handle_1() { return static_cast<int32_t>(offsetof(MultiSourceFrameReader_t4CF408C6284FA502D56444B52A0488DD0155046C_StaticFields, ____Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handle_1)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get__Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handle_1() const { return ____Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handle_1; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of__Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handle_1() { return &____Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handle_1; }
	inline void set__Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handle_1(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		____Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handle_1 = value;
	}

	inline static int32_t get_offset_of_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2() { return static_cast<int32_t>(offsetof(MultiSourceFrameReader_t4CF408C6284FA502D56444B52A0488DD0155046C_StaticFields, ___Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2)); }
	inline CollectionMap_2_t70974465096D4399A2F2EEF2707B46C9597D8212 * get_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2() const { return ___Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2; }
	inline CollectionMap_2_t70974465096D4399A2F2EEF2707B46C9597D8212 ** get_address_of_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2() { return &___Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2; }
	inline void set_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2(CollectionMap_2_t70974465096D4399A2F2EEF2707B46C9597D8212 * value)
	{
		___Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_callbacks_2), (void*)value);
	}

	inline static int32_t get_offset_of__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3() { return static_cast<int32_t>(offsetof(MultiSourceFrameReader_t4CF408C6284FA502D56444B52A0488DD0155046C_StaticFields, ____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3() const { return ____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3() { return &____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3; }
	inline void set__Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		____Windows_Data_PropertyChangedEventArgs_Delegate_Handle_3 = value;
	}

	inline static int32_t get_offset_of_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4() { return static_cast<int32_t>(offsetof(MultiSourceFrameReader_t4CF408C6284FA502D56444B52A0488DD0155046C_StaticFields, ___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4)); }
	inline CollectionMap_2_t14CA4B3B93CD9942736293185C18039A0FC18985 * get_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4() const { return ___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4; }
	inline CollectionMap_2_t14CA4B3B93CD9942736293185C18039A0FC18985 ** get_address_of_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4() { return &___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4; }
	inline void set_Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4(CollectionMap_2_t14CA4B3B93CD9942736293185C18039A0FC18985 * value)
	{
		___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Windows_Data_PropertyChangedEventArgs_Delegate_callbacks_4), (void*)value);
	}
};


// Windows.Kinect.MultiSourceFrameReference
struct MultiSourceFrameReference_tE8D6753E58108430329A82FDB2228F185313813F  : public RuntimeObject
{
public:
	// System.IntPtr Windows.Kinect.MultiSourceFrameReference::_pNative
	intptr_t ____pNative_0;

public:
	inline static int32_t get_offset_of__pNative_0() { return static_cast<int32_t>(offsetof(MultiSourceFrameReference_tE8D6753E58108430329A82FDB2228F185313813F, ____pNative_0)); }
	inline intptr_t get__pNative_0() const { return ____pNative_0; }
	inline intptr_t* get_address_of__pNative_0() { return &____pNative_0; }
	inline void set__pNative_0(intptr_t value)
	{
		____pNative_0 = value;
	}
};


// Windows.Data.PropertyChangedEventArgs
struct PropertyChangedEventArgs_tFA108A146CD6C15894BD8B76882BBC0DEF633CB1  : public EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA
{
public:
	// System.IntPtr Windows.Data.PropertyChangedEventArgs::_pNative
	intptr_t ____pNative_1;

public:
	inline static int32_t get_offset_of__pNative_1() { return static_cast<int32_t>(offsetof(PropertyChangedEventArgs_tFA108A146CD6C15894BD8B76882BBC0DEF633CB1, ____pNative_1)); }
	inline intptr_t get__pNative_1() const { return ____pNative_1; }
	inline intptr_t* get_address_of__pNative_1() { return &____pNative_1; }
	inline void set__pNative_1(intptr_t value)
	{
		____pNative_1 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.EventHandler`1<Windows.Kinect.FrameCapturedEventArgs>
struct EventHandler_1_tB59FEF7687065A16102FFC333CCA4BA5069C0A05  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Windows.Kinect.IsAvailableChangedEventArgs>
struct EventHandler_1_t95A75CD730DE4DAF0FE9C5F4591FA1F62B5CD7D8  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Windows.Kinect.LongExposureInfraredFrameArrivedEventArgs>
struct EventHandler_1_t2F840A25E61E8E3188D6BF4E7ADE22A02B18250D  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>
struct EventHandler_1_t32A60B00DA36C871C4B539798908F1A561114391  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>
struct EventHandler_1_tB2BD70FB7C7747AB3593E537E4BA4310AC101962  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// Windows.Kinect.KinectSensor/_Windows_Data_PropertyChangedEventArgs_Delegate
struct _Windows_Data_PropertyChangedEventArgs_Delegate_t15AB8B522EA51150FF639FCA7DB64DEF85D3B963  : public MulticastDelegate_t
{
public:

public:
};


// Windows.Kinect.KinectSensor/_Windows_Kinect_IsAvailableChangedEventArgs_Delegate
struct _Windows_Kinect_IsAvailableChangedEventArgs_Delegate_t9970D2F66614A670E990F8BCAE1B9F650044F0C4  : public MulticastDelegate_t
{
public:

public:
};


// Windows.Kinect.LongExposureInfraredFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate
struct _Windows_Data_PropertyChangedEventArgs_Delegate_t4FCAF474D23A05E3EB5678360F4CDE4753B6699B  : public MulticastDelegate_t
{
public:

public:
};


// Windows.Kinect.LongExposureInfraredFrameReader/_Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate
struct _Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_tBB24707627FEE6ECA331250C378A598473C10A19  : public MulticastDelegate_t
{
public:

public:
};


// Windows.Kinect.LongExposureInfraredFrameSource/_Windows_Data_PropertyChangedEventArgs_Delegate
struct _Windows_Data_PropertyChangedEventArgs_Delegate_t9D2608D7441E619BC34823613451B201F17314D3  : public MulticastDelegate_t
{
public:

public:
};


// Windows.Kinect.LongExposureInfraredFrameSource/_Windows_Kinect_FrameCapturedEventArgs_Delegate
struct _Windows_Kinect_FrameCapturedEventArgs_Delegate_t77519A23F229A7F77F971997374F823C93FE24D0  : public MulticastDelegate_t
{
public:

public:
};


// Windows.Kinect.MultiSourceFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate
struct _Windows_Data_PropertyChangedEventArgs_Delegate_tBBBE398B93B2175511D5A4194545C6AC1D91B645  : public MulticastDelegate_t
{
public:

public:
};


// Windows.Kinect.MultiSourceFrameReader/_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate
struct _Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_t1AA1D07898F0A20D61357587BE9005C070562133  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Windows.Kinect.IsAvailableChangedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mE5B0375A74E191D87544130D7E7DB43D4AAD4ACF (EventHandler_1_t95A75CD730DE4DAF0FE9C5F4591FA1F62B5CD7D8 * __this, RuntimeObject * ___sender0, IsAvailableChangedEventArgs_tCF34C5B6B713FCAABCDDBFFA43FEC7ED0D5748CA * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t95A75CD730DE4DAF0FE9C5F4591FA1F62B5CD7D8 *, RuntimeObject *, IsAvailableChangedEventArgs_tCF34C5B6B713FCAABCDDBFFA43FEC7ED0D5748CA *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void System.EventHandler`1<Windows.Data.PropertyChangedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m2D0C90D31474CBBEAA2925268453EA34ADCAC423 (EventHandler_1_tB2BD70FB7C7747AB3593E537E4BA4310AC101962 * __this, RuntimeObject * ___sender0, PropertyChangedEventArgs_tFA108A146CD6C15894BD8B76882BBC0DEF633CB1 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tB2BD70FB7C7747AB3593E537E4BA4310AC101962 *, RuntimeObject *, PropertyChangedEventArgs_tFA108A146CD6C15894BD8B76882BBC0DEF633CB1 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Windows.Kinect.LongExposureInfraredFrame/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m896EBBAA5A6E6B3CAA36A0ED81E3F00E6CCAE4DC (U3CU3Ec_t322E7B3D87A39ACC33074D6307906385AABDFF84 * __this, const RuntimeMethod* method);
// System.Void Windows.Kinect.KinectBuffer::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KinectBuffer__ctor_m4052870D2156FBFCD11F4797DC98FB34666A7BB1 (KinectBuffer_t544033B102952121E1B70A9B94449C1B2DC6C96A * __this, intptr_t ___pNative0, const RuntimeMethod* method);
// System.Void Windows.Kinect.FrameDescription::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameDescription__ctor_m9D56F5615E6C74EBD52A5CA1CC16E6D0147AA54B (FrameDescription_t85467D68A9297CBD38C234A3D47ADCBB16058FE9 * __this, intptr_t ___pNative0, const RuntimeMethod* method);
// System.Void Windows.Kinect.LongExposureInfraredFrameSource::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongExposureInfraredFrameSource__ctor_m817F5A5928BFE37E407C199E6F3E691D588F8415 (LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337 * __this, intptr_t ___pNative0, const RuntimeMethod* method);
// System.Void Windows.Kinect.LongExposureInfraredFrameArrivedEventArgs/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4FA17663680696B61C1BDA039B18F4EE14C34C65 (U3CU3Ec_t2494935FA4DB5D564FD29AD76AF88F036716C876 * __this, const RuntimeMethod* method);
// System.Void Windows.Kinect.LongExposureInfraredFrameReference::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongExposureInfraredFrameReference__ctor_mFD4825AF73C6479CA679E14D97EF9D2E0A19AE38 (LongExposureInfraredFrameReference_tC6A51F471C0AB80DAFE39436260636F29434BE04 * __this, intptr_t ___pNative0, const RuntimeMethod* method);
// System.Void Windows.Kinect.LongExposureInfraredFrameReader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m404422DCC7073F5F8A875DBD6E39C356BE528299 (U3CU3Ec_t90741FD91A20DD6C089C4C1317FD86FD5C2ABC8E * __this, const RuntimeMethod* method);
// System.Void Windows.Kinect.LongExposureInfraredFrame::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongExposureInfraredFrame__ctor_m761A191C77A7C05E8ED64D725AAFC2427297D62E (LongExposureInfraredFrame_t834B741765C10FF7945D0DCFE9C9ACCE258E5417 * __this, intptr_t ___pNative0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Windows.Kinect.LongExposureInfraredFrameArrivedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m7891F0026D5A7AD0CAE2D089ACDC68D5E7ADF4AE (EventHandler_1_t2F840A25E61E8E3188D6BF4E7ADE22A02B18250D * __this, RuntimeObject * ___sender0, LongExposureInfraredFrameArrivedEventArgs_t8EE4430B77770F6892FA634BA399F0184844BAD0 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t2F840A25E61E8E3188D6BF4E7ADE22A02B18250D *, RuntimeObject *, LongExposureInfraredFrameArrivedEventArgs_t8EE4430B77770F6892FA634BA399F0184844BAD0 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Windows.Kinect.LongExposureInfraredFrameReference/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m33AB55EB2ABAB5B01B63E14BFD0A6E7E2B6020A6 (U3CU3Ec_t30E69BC01E67A0BFE2E7D0BAB11C262F90E44F50 * __this, const RuntimeMethod* method);
// System.Void Windows.Kinect.LongExposureInfraredFrameSource/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0699E57CE61D984A90B21D647D7E9A00C6506BE0 (U3CU3Ec_t4A1620F3B9B0FE3C0EC7A69786BBF5676D514CC1 * __this, const RuntimeMethod* method);
// System.Void Windows.Kinect.KinectSensor::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KinectSensor__ctor_m6ABEF4C43D9D3E9FE7AB8411E481F02A784C7F35 (KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC * __this, intptr_t ___pNative0, const RuntimeMethod* method);
// System.Void Windows.Kinect.LongExposureInfraredFrameReader::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongExposureInfraredFrameReader__ctor_m52A9B0E888A6A92A8BB41154950AAECDD7D994D8 (LongExposureInfraredFrameReader_t5FCC779D8B5E25CFE8EDEED01D7C1440A6B4F280 * __this, intptr_t ___pNative0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Windows.Kinect.FrameCapturedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mAC05A40BABD150EFFF871E0EF279C2E55F61A0F9 (EventHandler_1_tB59FEF7687065A16102FFC333CCA4BA5069C0A05 * __this, RuntimeObject * ___sender0, FrameCapturedEventArgs_tD7048F9154D0AB0AA5A9815316EF62931EA543A5 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tB59FEF7687065A16102FFC333CCA4BA5069C0A05 *, RuntimeObject *, FrameCapturedEventArgs_tD7048F9154D0AB0AA5A9815316EF62931EA543A5 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Windows.Kinect.MultiSourceFrame/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE7019039280186C1C1D6E25872120F410BB41CCF (U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA * __this, const RuntimeMethod* method);
// System.Void Windows.Kinect.BodyFrameReference::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyFrameReference__ctor_m9ABC1EB29A1CB0E2320CA6EAFA6CC1629D362E5B (BodyFrameReference_t2FAF1959353883E9BC1F82D1E3CAD0CE554023E4 * __this, intptr_t ___pNative0, const RuntimeMethod* method);
// System.Void Windows.Kinect.BodyIndexFrameReference::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BodyIndexFrameReference__ctor_m76FEB50806C29F341DC2E96865691DC5FBF5CC16 (BodyIndexFrameReference_t3614DE16008177E9FCEF10AFE991AD12FAFA7585 * __this, intptr_t ___pNative0, const RuntimeMethod* method);
// System.Void Windows.Kinect.ColorFrameReference::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorFrameReference__ctor_m3188DBEE7B9CDE2843A7E4C13212DF75F7D5A299 (ColorFrameReference_t6985FBD968B49B8B5620F309BC09F9973929701C * __this, intptr_t ___pNative0, const RuntimeMethod* method);
// System.Void Windows.Kinect.DepthFrameReference::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DepthFrameReference__ctor_m9C5B61956791735EFF641B3B04A7BBE6AA30A4E7 (DepthFrameReference_t203196DB0EDAE9FFBFC298222BC43FF618D7D8B0 * __this, intptr_t ___pNative0, const RuntimeMethod* method);
// System.Void Windows.Kinect.InfraredFrameReference::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfraredFrameReference__ctor_mA8F93245F41701C812C87BA819F34ABD7EB85D54 (InfraredFrameReference_t056C1464ECC12EE8005B737B3BA3AF7CC10470A2 * __this, intptr_t ___pNative0, const RuntimeMethod* method);
// System.Void Windows.Kinect.MultiSourceFrameArrivedEventArgs/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAE939ADFB45FC04C688FB1E297A9B0BD8B6B820C (U3CU3Ec_t3B48CEAB86B70AD0179D82B0B4B4C7AAA9CCB247 * __this, const RuntimeMethod* method);
// System.Void Windows.Kinect.MultiSourceFrameReference::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrameReference__ctor_mFA3F6329750E915725E680D92D54AEE1BA5E7A5B (MultiSourceFrameReference_tE8D6753E58108430329A82FDB2228F185313813F * __this, intptr_t ___pNative0, const RuntimeMethod* method);
// System.Void Windows.Kinect.MultiSourceFrameReader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA87EA1638D4FD0A05E9F3617AD41BF4D9A9D0DB6 (U3CU3Ec_tA6A7F62B49C170EA8E9259580DB8A1746AAE2628 * __this, const RuntimeMethod* method);
// System.Void Windows.Kinect.MultiSourceFrame::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiSourceFrame__ctor_m7AAF403AC3F94CF7D3A65CFA4E0750D077B72A0F (MultiSourceFrame_t281B4AA81E9C8B38F24E909A94CD1940E71E509E * __this, intptr_t ___pNative0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<Windows.Kinect.MultiSourceFrameArrivedEventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_m1C90999A5D7A3299AA46B2494D8A494B77DFE5FC (EventHandler_1_t32A60B00DA36C871C4B539798908F1A561114391 * __this, RuntimeObject * ___sender0, MultiSourceFrameArrivedEventArgs_tFC6A0881995713CA74F376AEB59343C5AE3CDED1 * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t32A60B00DA36C871C4B539798908F1A561114391 *, RuntimeObject *, MultiSourceFrameArrivedEventArgs_tFC6A0881995713CA74F376AEB59343C5AE3CDED1 *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// System.Void Windows.Kinect.MultiSourceFrameReference/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA24E2E7BC7602F282DDC2994E8EEE6B3DFC16FEA (U3CU3Ec_t5E2981FBACBE08129CF160F33BB15619312C97CC * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Kinect.KinectSensor/<>c__DisplayClass47_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass47_0__ctor_m7DD093AA71FF4DFBC15BC8EA054B3426CF398AC2 (U3CU3Ec__DisplayClass47_0_t355951139BDB2C4DB51942934C494C2162F116F3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Kinect.KinectSensor/<>c__DisplayClass47_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass47_1__ctor_m5BF6BDBD57CA4FE4DC6755C2B919859A3EA59A79 (U3CU3Ec__DisplayClass47_1_t42B8610EFDAD5B1AB6B03CF3BD9D90B1AF7C8964 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Windows.Kinect.KinectSensor/<>c__DisplayClass47_1::<Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass47_1_U3CWindows_Kinect_IsAvailableChangedEventArgs_Delegate_HandlerU3Eb__0_mD4E514E170A4FA640E25CC04220B322F91B37E5A (U3CU3Ec__DisplayClass47_1_t42B8610EFDAD5B1AB6B03CF3BD9D90B1AF7C8964 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mE5B0375A74E191D87544130D7E7DB43D4AAD4ACF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		EventHandler_1_t95A75CD730DE4DAF0FE9C5F4591FA1F62B5CD7D8 * L_0 = __this->get_func_0();
		U3CU3Ec__DisplayClass47_0_t355951139BDB2C4DB51942934C494C2162F116F3 * L_1 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_1);
		KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC * L_2 = L_1->get_objThis_0();
		U3CU3Ec__DisplayClass47_0_t355951139BDB2C4DB51942934C494C2162F116F3 * L_3 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_3);
		IsAvailableChangedEventArgs_tCF34C5B6B713FCAABCDDBFFA43FEC7ED0D5748CA * L_4 = L_3->get_args_1();
		NullCheck(L_0);
		EventHandler_1_Invoke_mE5B0375A74E191D87544130D7E7DB43D4AAD4ACF(L_0, L_2, L_4, /*hidden argument*/EventHandler_1_Invoke_mE5B0375A74E191D87544130D7E7DB43D4AAD4ACF_RuntimeMethod_var);
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		goto IL_0026;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{ // begin catch(System.Object)
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0026;
	} // end catch (depth: 1)

IL_0026:
	{
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Kinect.KinectSensor/<>c__DisplayClass55_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass55_0__ctor_mF36FA037021B21DAC55C72507B4924B95030E8BB (U3CU3Ec__DisplayClass55_0_t712A87BF8796B146D94D670D9118321D01687671 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Kinect.KinectSensor/<>c__DisplayClass55_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass55_1__ctor_m971AC88A71313589666F721E45774BFF3DD60A3D (U3CU3Ec__DisplayClass55_1_t9813CCA6B70D88DBC7E51597B2E735E44722E452 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Windows.Kinect.KinectSensor/<>c__DisplayClass55_1::<Windows_Data_PropertyChangedEventArgs_Delegate_Handler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass55_1_U3CWindows_Data_PropertyChangedEventArgs_Delegate_HandlerU3Eb__0_mC677C9E384DE7EDCD67943FCC940C671739DD37A (U3CU3Ec__DisplayClass55_1_t9813CCA6B70D88DBC7E51597B2E735E44722E452 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m2D0C90D31474CBBEAA2925268453EA34ADCAC423_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		EventHandler_1_tB2BD70FB7C7747AB3593E537E4BA4310AC101962 * L_0 = __this->get_func_0();
		U3CU3Ec__DisplayClass55_0_t712A87BF8796B146D94D670D9118321D01687671 * L_1 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_1);
		KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC * L_2 = L_1->get_objThis_0();
		U3CU3Ec__DisplayClass55_0_t712A87BF8796B146D94D670D9118321D01687671 * L_3 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_3);
		PropertyChangedEventArgs_tFA108A146CD6C15894BD8B76882BBC0DEF633CB1 * L_4 = L_3->get_args_1();
		NullCheck(L_0);
		EventHandler_1_Invoke_m2D0C90D31474CBBEAA2925268453EA34ADCAC423(L_0, L_2, L_4, /*hidden argument*/EventHandler_1_Invoke_m2D0C90D31474CBBEAA2925268453EA34ADCAC423_RuntimeMethod_var);
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		goto IL_0026;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{ // begin catch(System.Object)
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0026;
	} // end catch (depth: 1)

IL_0026:
	{
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__Windows_Data_PropertyChangedEventArgs_Delegate_t15AB8B522EA51150FF639FCA7DB64DEF85D3B963 (_Windows_Data_PropertyChangedEventArgs_Delegate_t15AB8B522EA51150FF639FCA7DB64DEF85D3B963 * __this, intptr_t ___args0, intptr_t ___pNative1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___args0, ___pNative1);

}
// System.Void Windows.Kinect.KinectSensor/_Windows_Data_PropertyChangedEventArgs_Delegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Data_PropertyChangedEventArgs_Delegate__ctor_m157BE4ADFC84FFDCEB10E0764AA4F7AD3D15AE4E (_Windows_Data_PropertyChangedEventArgs_Delegate_t15AB8B522EA51150FF639FCA7DB64DEF85D3B963 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Windows.Kinect.KinectSensor/_Windows_Data_PropertyChangedEventArgs_Delegate::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Data_PropertyChangedEventArgs_Delegate_Invoke_mFD8D8C84E58D5777F5A8237943EAA8C3ED06757B (_Windows_Data_PropertyChangedEventArgs_Delegate_t15AB8B522EA51150FF639FCA7DB64DEF85D3B963 * __this, intptr_t ___args0, intptr_t ___pNative1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___args0, ___pNative1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, ___pNative1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___args0, ___pNative1);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___args0, ___pNative1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___args0, ___pNative1);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___args0, ___pNative1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, ___pNative1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Windows.Kinect.KinectSensor/_Windows_Data_PropertyChangedEventArgs_Delegate::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Windows_Data_PropertyChangedEventArgs_Delegate_BeginInvoke_m8C05828E294B51BE6710AB24DD9A0F1711744EBF (_Windows_Data_PropertyChangedEventArgs_Delegate_t15AB8B522EA51150FF639FCA7DB64DEF85D3B963 * __this, intptr_t ___args0, intptr_t ___pNative1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___args0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pNative1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Windows.Kinect.KinectSensor/_Windows_Data_PropertyChangedEventArgs_Delegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Data_PropertyChangedEventArgs_Delegate_EndInvoke_m6D3C5370BD635894196E1163F97DD559C5FE82FF (_Windows_Data_PropertyChangedEventArgs_Delegate_t15AB8B522EA51150FF639FCA7DB64DEF85D3B963 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__Windows_Kinect_IsAvailableChangedEventArgs_Delegate_t9970D2F66614A670E990F8BCAE1B9F650044F0C4 (_Windows_Kinect_IsAvailableChangedEventArgs_Delegate_t9970D2F66614A670E990F8BCAE1B9F650044F0C4 * __this, intptr_t ___args0, intptr_t ___pNative1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___args0, ___pNative1);

}
// System.Void Windows.Kinect.KinectSensor/_Windows_Kinect_IsAvailableChangedEventArgs_Delegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Kinect_IsAvailableChangedEventArgs_Delegate__ctor_m9D91BA71C7E0D96663F05091EBCB6666C7F8B1B9 (_Windows_Kinect_IsAvailableChangedEventArgs_Delegate_t9970D2F66614A670E990F8BCAE1B9F650044F0C4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Windows.Kinect.KinectSensor/_Windows_Kinect_IsAvailableChangedEventArgs_Delegate::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Invoke_mA4B0F630F074888095251AD8CFF0C4D34CE8D638 (_Windows_Kinect_IsAvailableChangedEventArgs_Delegate_t9970D2F66614A670E990F8BCAE1B9F650044F0C4 * __this, intptr_t ___args0, intptr_t ___pNative1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___args0, ___pNative1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, ___pNative1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___args0, ___pNative1);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___args0, ___pNative1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___args0, ___pNative1);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___args0, ___pNative1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, ___pNative1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Windows.Kinect.KinectSensor/_Windows_Kinect_IsAvailableChangedEventArgs_Delegate::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Windows_Kinect_IsAvailableChangedEventArgs_Delegate_BeginInvoke_mA711853F1BE146E597B9E2C58FD8206EC5F411A8 (_Windows_Kinect_IsAvailableChangedEventArgs_Delegate_t9970D2F66614A670E990F8BCAE1B9F650044F0C4 * __this, intptr_t ___args0, intptr_t ___pNative1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___args0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pNative1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Windows.Kinect.KinectSensor/_Windows_Kinect_IsAvailableChangedEventArgs_Delegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Kinect_IsAvailableChangedEventArgs_Delegate_EndInvoke_mC60707D556FCA34790153F53CF65D07E9DAFEE79 (_Windows_Kinect_IsAvailableChangedEventArgs_Delegate_t9970D2F66614A670E990F8BCAE1B9F650044F0C4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Kinect.LongExposureInfraredFrame/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m80077272E0AB96EC89E1C60413EE4BC6F4B6345E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t322E7B3D87A39ACC33074D6307906385AABDFF84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t322E7B3D87A39ACC33074D6307906385AABDFF84 * L_0 = (U3CU3Ec_t322E7B3D87A39ACC33074D6307906385AABDFF84 *)il2cpp_codegen_object_new(U3CU3Ec_t322E7B3D87A39ACC33074D6307906385AABDFF84_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m896EBBAA5A6E6B3CAA36A0ED81E3F00E6CCAE4DC(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t322E7B3D87A39ACC33074D6307906385AABDFF84_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t322E7B3D87A39ACC33074D6307906385AABDFF84_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Windows.Kinect.LongExposureInfraredFrame/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m896EBBAA5A6E6B3CAA36A0ED81E3F00E6CCAE4DC (U3CU3Ec_t322E7B3D87A39ACC33074D6307906385AABDFF84 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Windows.Kinect.KinectBuffer Windows.Kinect.LongExposureInfraredFrame/<>c::<LockImageBuffer>b__3_0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KinectBuffer_t544033B102952121E1B70A9B94449C1B2DC6C96A * U3CU3Ec_U3CLockImageBufferU3Eb__3_0_m113DD9EE19BF8BB483F2900D7DEAA9E0AC8E3F36 (U3CU3Ec_t322E7B3D87A39ACC33074D6307906385AABDFF84 * __this, intptr_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KinectBuffer_t544033B102952121E1B70A9B94449C1B2DC6C96A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.KinectBuffer>(objectPointer, n => new Windows.Kinect.KinectBuffer(n));
		intptr_t L_0 = ___n0;
		KinectBuffer_t544033B102952121E1B70A9B94449C1B2DC6C96A * L_1 = (KinectBuffer_t544033B102952121E1B70A9B94449C1B2DC6C96A *)il2cpp_codegen_object_new(KinectBuffer_t544033B102952121E1B70A9B94449C1B2DC6C96A_il2cpp_TypeInfo_var);
		KinectBuffer__ctor_m4052870D2156FBFCD11F4797DC98FB34666A7BB1(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Windows.Kinect.FrameDescription Windows.Kinect.LongExposureInfraredFrame/<>c::<get_FrameDescription>b__14_0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrameDescription_t85467D68A9297CBD38C234A3D47ADCBB16058FE9 * U3CU3Ec_U3Cget_FrameDescriptionU3Eb__14_0_m1B10209AAE4B2BE9B3EC92B95E120449B36D3F1B (U3CU3Ec_t322E7B3D87A39ACC33074D6307906385AABDFF84 * __this, intptr_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameDescription_t85467D68A9297CBD38C234A3D47ADCBB16058FE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.FrameDescription>(objectPointer, n => new Windows.Kinect.FrameDescription(n));
		intptr_t L_0 = ___n0;
		FrameDescription_t85467D68A9297CBD38C234A3D47ADCBB16058FE9 * L_1 = (FrameDescription_t85467D68A9297CBD38C234A3D47ADCBB16058FE9 *)il2cpp_codegen_object_new(FrameDescription_t85467D68A9297CBD38C234A3D47ADCBB16058FE9_il2cpp_TypeInfo_var);
		FrameDescription__ctor_m9D56F5615E6C74EBD52A5CA1CC16E6D0147AA54B(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Windows.Kinect.LongExposureInfraredFrameSource Windows.Kinect.LongExposureInfraredFrame/<>c::<get_LongExposureInfraredFrameSource>b__17_0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337 * U3CU3Ec_U3Cget_LongExposureInfraredFrameSourceU3Eb__17_0_mC266C16E3E7EA03A31A22E8429A60349E2BE1DCE (U3CU3Ec_t322E7B3D87A39ACC33074D6307906385AABDFF84 * __this, intptr_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.LongExposureInfraredFrameSource>(objectPointer, n => new Windows.Kinect.LongExposureInfraredFrameSource(n));
		intptr_t L_0 = ___n0;
		LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337 * L_1 = (LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337 *)il2cpp_codegen_object_new(LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337_il2cpp_TypeInfo_var);
		LongExposureInfraredFrameSource__ctor_m817F5A5928BFE37E407C199E6F3E691D588F8415(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Kinect.LongExposureInfraredFrameArrivedEventArgs/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m18C42C99AFA081A2D2129F1E2A3A3D7BDB951746 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2494935FA4DB5D564FD29AD76AF88F036716C876_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2494935FA4DB5D564FD29AD76AF88F036716C876 * L_0 = (U3CU3Ec_t2494935FA4DB5D564FD29AD76AF88F036716C876 *)il2cpp_codegen_object_new(U3CU3Ec_t2494935FA4DB5D564FD29AD76AF88F036716C876_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m4FA17663680696B61C1BDA039B18F4EE14C34C65(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2494935FA4DB5D564FD29AD76AF88F036716C876_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2494935FA4DB5D564FD29AD76AF88F036716C876_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Windows.Kinect.LongExposureInfraredFrameArrivedEventArgs/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4FA17663680696B61C1BDA039B18F4EE14C34C65 (U3CU3Ec_t2494935FA4DB5D564FD29AD76AF88F036716C876 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Windows.Kinect.LongExposureInfraredFrameReference Windows.Kinect.LongExposureInfraredFrameArrivedEventArgs/<>c::<get_FrameReference>b__10_0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LongExposureInfraredFrameReference_tC6A51F471C0AB80DAFE39436260636F29434BE04 * U3CU3Ec_U3Cget_FrameReferenceU3Eb__10_0_mD265C573C6F6F890F37FC2A2AC0D2E13C6420550 (U3CU3Ec_t2494935FA4DB5D564FD29AD76AF88F036716C876 * __this, intptr_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongExposureInfraredFrameReference_tC6A51F471C0AB80DAFE39436260636F29434BE04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.LongExposureInfraredFrameReference>(objectPointer, n => new Windows.Kinect.LongExposureInfraredFrameReference(n));
		intptr_t L_0 = ___n0;
		LongExposureInfraredFrameReference_tC6A51F471C0AB80DAFE39436260636F29434BE04 * L_1 = (LongExposureInfraredFrameReference_tC6A51F471C0AB80DAFE39436260636F29434BE04 *)il2cpp_codegen_object_new(LongExposureInfraredFrameReference_tC6A51F471C0AB80DAFE39436260636F29434BE04_il2cpp_TypeInfo_var);
		LongExposureInfraredFrameReference__ctor_mFD4825AF73C6479CA679E14D97EF9D2E0A19AE38(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Kinect.LongExposureInfraredFrameReader/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m87BBBD185D563C91C385E7ED7B849CC7B394C012 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t90741FD91A20DD6C089C4C1317FD86FD5C2ABC8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t90741FD91A20DD6C089C4C1317FD86FD5C2ABC8E * L_0 = (U3CU3Ec_t90741FD91A20DD6C089C4C1317FD86FD5C2ABC8E *)il2cpp_codegen_object_new(U3CU3Ec_t90741FD91A20DD6C089C4C1317FD86FD5C2ABC8E_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m404422DCC7073F5F8A875DBD6E39C356BE528299(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t90741FD91A20DD6C089C4C1317FD86FD5C2ABC8E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t90741FD91A20DD6C089C4C1317FD86FD5C2ABC8E_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Windows.Kinect.LongExposureInfraredFrameReader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m404422DCC7073F5F8A875DBD6E39C356BE528299 (U3CU3Ec_t90741FD91A20DD6C089C4C1317FD86FD5C2ABC8E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Windows.Kinect.LongExposureInfraredFrameSource Windows.Kinect.LongExposureInfraredFrameReader/<>c::<get_LongExposureInfraredFrameSource>b__15_0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337 * U3CU3Ec_U3Cget_LongExposureInfraredFrameSourceU3Eb__15_0_m4DFF143AA3B5D8E7762491B5614349CC9FF57377 (U3CU3Ec_t90741FD91A20DD6C089C4C1317FD86FD5C2ABC8E * __this, intptr_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.LongExposureInfraredFrameSource>(objectPointer, n => new Windows.Kinect.LongExposureInfraredFrameSource(n));
		intptr_t L_0 = ___n0;
		LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337 * L_1 = (LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337 *)il2cpp_codegen_object_new(LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337_il2cpp_TypeInfo_var);
		LongExposureInfraredFrameSource__ctor_m817F5A5928BFE37E407C199E6F3E691D588F8415(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Windows.Kinect.LongExposureInfraredFrame Windows.Kinect.LongExposureInfraredFrameReader/<>c::<AcquireLatestFrame>b__33_0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LongExposureInfraredFrame_t834B741765C10FF7945D0DCFE9C9ACCE258E5417 * U3CU3Ec_U3CAcquireLatestFrameU3Eb__33_0_mFDE1CE192DD5C29B0BED9BD9D3F0D6A6FBCA86DA (U3CU3Ec_t90741FD91A20DD6C089C4C1317FD86FD5C2ABC8E * __this, intptr_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongExposureInfraredFrame_t834B741765C10FF7945D0DCFE9C9ACCE258E5417_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.LongExposureInfraredFrame>(objectPointer, n => new Windows.Kinect.LongExposureInfraredFrame(n));
		intptr_t L_0 = ___n0;
		LongExposureInfraredFrame_t834B741765C10FF7945D0DCFE9C9ACCE258E5417 * L_1 = (LongExposureInfraredFrame_t834B741765C10FF7945D0DCFE9C9ACCE258E5417 *)il2cpp_codegen_object_new(LongExposureInfraredFrame_t834B741765C10FF7945D0DCFE9C9ACCE258E5417_il2cpp_TypeInfo_var);
		LongExposureInfraredFrame__ctor_m761A191C77A7C05E8ED64D725AAFC2427297D62E(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Kinect.LongExposureInfraredFrameReader/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_mA29E4BA3828771067B8945C7B635E2E3349D0EC8 (U3CU3Ec__DisplayClass19_0_tCAC4178BCD426D47986B8474DAA45F892FCFA9DD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Kinect.LongExposureInfraredFrameReader/<>c__DisplayClass19_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_1__ctor_m9531168503B986257A3A5F3CD189136ACB4A1DC7 (U3CU3Ec__DisplayClass19_1_t5D95CA6888547D528C7D13D874EC483C99AF623A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Windows.Kinect.LongExposureInfraredFrameReader/<>c__DisplayClass19_1::<Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_Handler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_1_U3CWindows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_HandlerU3Eb__0_mF59BA540377E1F5FDC53E964A653B41073376D7F (U3CU3Ec__DisplayClass19_1_t5D95CA6888547D528C7D13D874EC483C99AF623A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m7891F0026D5A7AD0CAE2D089ACDC68D5E7ADF4AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		EventHandler_1_t2F840A25E61E8E3188D6BF4E7ADE22A02B18250D * L_0 = __this->get_func_0();
		U3CU3Ec__DisplayClass19_0_tCAC4178BCD426D47986B8474DAA45F892FCFA9DD * L_1 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_1);
		LongExposureInfraredFrameReader_t5FCC779D8B5E25CFE8EDEED01D7C1440A6B4F280 * L_2 = L_1->get_objThis_0();
		U3CU3Ec__DisplayClass19_0_tCAC4178BCD426D47986B8474DAA45F892FCFA9DD * L_3 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_3);
		LongExposureInfraredFrameArrivedEventArgs_t8EE4430B77770F6892FA634BA399F0184844BAD0 * L_4 = L_3->get_args_1();
		NullCheck(L_0);
		EventHandler_1_Invoke_m7891F0026D5A7AD0CAE2D089ACDC68D5E7ADF4AE(L_0, L_2, L_4, /*hidden argument*/EventHandler_1_Invoke_m7891F0026D5A7AD0CAE2D089ACDC68D5E7ADF4AE_RuntimeMethod_var);
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		goto IL_0026;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{ // begin catch(System.Object)
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0026;
	} // end catch (depth: 1)

IL_0026:
	{
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Kinect.LongExposureInfraredFrameReader/<>c__DisplayClass27_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_0__ctor_m3211E04B3A12B9F065CFA18823589B4442A20137 (U3CU3Ec__DisplayClass27_0_tE3C52F3A6D10406ACC59F8860B9D5605FAD78255 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Kinect.LongExposureInfraredFrameReader/<>c__DisplayClass27_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_1__ctor_m461B7CAE3F5070157B6E26D146AB0EF0C485D4B5 (U3CU3Ec__DisplayClass27_1_t6D3D75C50D76FCA179F1CFFB7B604930E7143895 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Windows.Kinect.LongExposureInfraredFrameReader/<>c__DisplayClass27_1::<Windows_Data_PropertyChangedEventArgs_Delegate_Handler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass27_1_U3CWindows_Data_PropertyChangedEventArgs_Delegate_HandlerU3Eb__0_mE7DEBED8D3ED4AAA6F71DD620527217720E478D3 (U3CU3Ec__DisplayClass27_1_t6D3D75C50D76FCA179F1CFFB7B604930E7143895 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m2D0C90D31474CBBEAA2925268453EA34ADCAC423_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		EventHandler_1_tB2BD70FB7C7747AB3593E537E4BA4310AC101962 * L_0 = __this->get_func_0();
		U3CU3Ec__DisplayClass27_0_tE3C52F3A6D10406ACC59F8860B9D5605FAD78255 * L_1 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_1);
		LongExposureInfraredFrameReader_t5FCC779D8B5E25CFE8EDEED01D7C1440A6B4F280 * L_2 = L_1->get_objThis_0();
		U3CU3Ec__DisplayClass27_0_tE3C52F3A6D10406ACC59F8860B9D5605FAD78255 * L_3 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_3);
		PropertyChangedEventArgs_tFA108A146CD6C15894BD8B76882BBC0DEF633CB1 * L_4 = L_3->get_args_1();
		NullCheck(L_0);
		EventHandler_1_Invoke_m2D0C90D31474CBBEAA2925268453EA34ADCAC423(L_0, L_2, L_4, /*hidden argument*/EventHandler_1_Invoke_m2D0C90D31474CBBEAA2925268453EA34ADCAC423_RuntimeMethod_var);
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		goto IL_0026;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{ // begin catch(System.Object)
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0026;
	} // end catch (depth: 1)

IL_0026:
	{
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__Windows_Data_PropertyChangedEventArgs_Delegate_t4FCAF474D23A05E3EB5678360F4CDE4753B6699B (_Windows_Data_PropertyChangedEventArgs_Delegate_t4FCAF474D23A05E3EB5678360F4CDE4753B6699B * __this, intptr_t ___args0, intptr_t ___pNative1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___args0, ___pNative1);

}
// System.Void Windows.Kinect.LongExposureInfraredFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Data_PropertyChangedEventArgs_Delegate__ctor_mC4FAFDDFBBB6DF297F902F1B047D4E2FFF12A0EA (_Windows_Data_PropertyChangedEventArgs_Delegate_t4FCAF474D23A05E3EB5678360F4CDE4753B6699B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Windows.Kinect.LongExposureInfraredFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Data_PropertyChangedEventArgs_Delegate_Invoke_mC5AF4B0AEAD791779CD698BC5A16DEFB28DF1D69 (_Windows_Data_PropertyChangedEventArgs_Delegate_t4FCAF474D23A05E3EB5678360F4CDE4753B6699B * __this, intptr_t ___args0, intptr_t ___pNative1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___args0, ___pNative1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, ___pNative1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___args0, ___pNative1);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___args0, ___pNative1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___args0, ___pNative1);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___args0, ___pNative1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, ___pNative1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Windows.Kinect.LongExposureInfraredFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Windows_Data_PropertyChangedEventArgs_Delegate_BeginInvoke_m47F468D205D924C3CEC154D7B2BADE27ACD76A64 (_Windows_Data_PropertyChangedEventArgs_Delegate_t4FCAF474D23A05E3EB5678360F4CDE4753B6699B * __this, intptr_t ___args0, intptr_t ___pNative1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___args0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pNative1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Windows.Kinect.LongExposureInfraredFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Data_PropertyChangedEventArgs_Delegate_EndInvoke_mBA4A2F0448596416C6C81B9071CB5EFFBAC73255 (_Windows_Data_PropertyChangedEventArgs_Delegate_t4FCAF474D23A05E3EB5678360F4CDE4753B6699B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_tBB24707627FEE6ECA331250C378A598473C10A19 (_Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_tBB24707627FEE6ECA331250C378A598473C10A19 * __this, intptr_t ___args0, intptr_t ___pNative1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___args0, ___pNative1);

}
// System.Void Windows.Kinect.LongExposureInfraredFrameReader/_Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate__ctor_mEA95D2E37F50A22F978506A50498E7E8F2C6D25C (_Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_tBB24707627FEE6ECA331250C378A598473C10A19 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Windows.Kinect.LongExposureInfraredFrameReader/_Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_Invoke_m310CC00AE64FFB413FB1A6B397E4275AFD5F7A23 (_Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_tBB24707627FEE6ECA331250C378A598473C10A19 * __this, intptr_t ___args0, intptr_t ___pNative1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___args0, ___pNative1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, ___pNative1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___args0, ___pNative1);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___args0, ___pNative1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___args0, ___pNative1);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___args0, ___pNative1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, ___pNative1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Windows.Kinect.LongExposureInfraredFrameReader/_Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_BeginInvoke_m2CEDA42A9A5960781F72CAFE46844816C6D9A98F (_Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_tBB24707627FEE6ECA331250C378A598473C10A19 * __this, intptr_t ___args0, intptr_t ___pNative1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___args0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pNative1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Windows.Kinect.LongExposureInfraredFrameReader/_Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_EndInvoke_m0ADF4098925FE3EA2595DA221CC2169A7A026B45 (_Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_tBB24707627FEE6ECA331250C378A598473C10A19 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Kinect.LongExposureInfraredFrameReference/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m0ED503F881A50EA27882F42FD516713512EA9073 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t30E69BC01E67A0BFE2E7D0BAB11C262F90E44F50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t30E69BC01E67A0BFE2E7D0BAB11C262F90E44F50 * L_0 = (U3CU3Ec_t30E69BC01E67A0BFE2E7D0BAB11C262F90E44F50 *)il2cpp_codegen_object_new(U3CU3Ec_t30E69BC01E67A0BFE2E7D0BAB11C262F90E44F50_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m33AB55EB2ABAB5B01B63E14BFD0A6E7E2B6020A6(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t30E69BC01E67A0BFE2E7D0BAB11C262F90E44F50_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t30E69BC01E67A0BFE2E7D0BAB11C262F90E44F50_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Windows.Kinect.LongExposureInfraredFrameReference/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m33AB55EB2ABAB5B01B63E14BFD0A6E7E2B6020A6 (U3CU3Ec_t30E69BC01E67A0BFE2E7D0BAB11C262F90E44F50 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Windows.Kinect.LongExposureInfraredFrame Windows.Kinect.LongExposureInfraredFrameReference/<>c::<AcquireFrame>b__12_0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LongExposureInfraredFrame_t834B741765C10FF7945D0DCFE9C9ACCE258E5417 * U3CU3Ec_U3CAcquireFrameU3Eb__12_0_mB76035EDB1DE81BF89179A95C017861D7C6C9157 (U3CU3Ec_t30E69BC01E67A0BFE2E7D0BAB11C262F90E44F50 * __this, intptr_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongExposureInfraredFrame_t834B741765C10FF7945D0DCFE9C9ACCE258E5417_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.LongExposureInfraredFrame>(objectPointer, n => new Windows.Kinect.LongExposureInfraredFrame(n));
		intptr_t L_0 = ___n0;
		LongExposureInfraredFrame_t834B741765C10FF7945D0DCFE9C9ACCE258E5417 * L_1 = (LongExposureInfraredFrame_t834B741765C10FF7945D0DCFE9C9ACCE258E5417 *)il2cpp_codegen_object_new(LongExposureInfraredFrame_t834B741765C10FF7945D0DCFE9C9ACCE258E5417_il2cpp_TypeInfo_var);
		LongExposureInfraredFrame__ctor_m761A191C77A7C05E8ED64D725AAFC2427297D62E(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Kinect.LongExposureInfraredFrameSource/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m85AB39028D2A4C8DC14086E022EC15B969C19BED (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4A1620F3B9B0FE3C0EC7A69786BBF5676D514CC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4A1620F3B9B0FE3C0EC7A69786BBF5676D514CC1 * L_0 = (U3CU3Ec_t4A1620F3B9B0FE3C0EC7A69786BBF5676D514CC1 *)il2cpp_codegen_object_new(U3CU3Ec_t4A1620F3B9B0FE3C0EC7A69786BBF5676D514CC1_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0699E57CE61D984A90B21D647D7E9A00C6506BE0(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t4A1620F3B9B0FE3C0EC7A69786BBF5676D514CC1_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4A1620F3B9B0FE3C0EC7A69786BBF5676D514CC1_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Windows.Kinect.LongExposureInfraredFrameSource/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0699E57CE61D984A90B21D647D7E9A00C6506BE0 (U3CU3Ec_t4A1620F3B9B0FE3C0EC7A69786BBF5676D514CC1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Windows.Kinect.FrameDescription Windows.Kinect.LongExposureInfraredFrameSource/<>c::<get_FrameDescription>b__10_0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrameDescription_t85467D68A9297CBD38C234A3D47ADCBB16058FE9 * U3CU3Ec_U3Cget_FrameDescriptionU3Eb__10_0_mDDEC4D080EADE7BCD00096F2716AD3B0DE07DFAE (U3CU3Ec_t4A1620F3B9B0FE3C0EC7A69786BBF5676D514CC1 * __this, intptr_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameDescription_t85467D68A9297CBD38C234A3D47ADCBB16058FE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.FrameDescription>(objectPointer, n => new Windows.Kinect.FrameDescription(n));
		intptr_t L_0 = ___n0;
		FrameDescription_t85467D68A9297CBD38C234A3D47ADCBB16058FE9 * L_1 = (FrameDescription_t85467D68A9297CBD38C234A3D47ADCBB16058FE9 *)il2cpp_codegen_object_new(FrameDescription_t85467D68A9297CBD38C234A3D47ADCBB16058FE9_il2cpp_TypeInfo_var);
		FrameDescription__ctor_m9D56F5615E6C74EBD52A5CA1CC16E6D0147AA54B(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Windows.Kinect.KinectSensor Windows.Kinect.LongExposureInfraredFrameSource/<>c::<get_KinectSensor>b__16_0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC * U3CU3Ec_U3Cget_KinectSensorU3Eb__16_0_m42A33B3D9CE44FB7D6E7C4BECC92027732066702 (U3CU3Ec_t4A1620F3B9B0FE3C0EC7A69786BBF5676D514CC1 * __this, intptr_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.KinectSensor>(objectPointer, n => new Windows.Kinect.KinectSensor(n));
		intptr_t L_0 = ___n0;
		KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC * L_1 = (KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC *)il2cpp_codegen_object_new(KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC_il2cpp_TypeInfo_var);
		KinectSensor__ctor_m6ABEF4C43D9D3E9FE7AB8411E481F02A784C7F35(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Windows.Kinect.LongExposureInfraredFrameReader Windows.Kinect.LongExposureInfraredFrameSource/<>c::<OpenReader>b__34_0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LongExposureInfraredFrameReader_t5FCC779D8B5E25CFE8EDEED01D7C1440A6B4F280 * U3CU3Ec_U3COpenReaderU3Eb__34_0_m727F0F0BBC3900F1FA1507D9BF52EEA1DDF010D1 (U3CU3Ec_t4A1620F3B9B0FE3C0EC7A69786BBF5676D514CC1 * __this, intptr_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongExposureInfraredFrameReader_t5FCC779D8B5E25CFE8EDEED01D7C1440A6B4F280_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.LongExposureInfraredFrameReader>(objectPointer, n => new Windows.Kinect.LongExposureInfraredFrameReader(n));
		intptr_t L_0 = ___n0;
		LongExposureInfraredFrameReader_t5FCC779D8B5E25CFE8EDEED01D7C1440A6B4F280 * L_1 = (LongExposureInfraredFrameReader_t5FCC779D8B5E25CFE8EDEED01D7C1440A6B4F280 *)il2cpp_codegen_object_new(LongExposureInfraredFrameReader_t5FCC779D8B5E25CFE8EDEED01D7C1440A6B4F280_il2cpp_TypeInfo_var);
		LongExposureInfraredFrameReader__ctor_m52A9B0E888A6A92A8BB41154950AAECDD7D994D8(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Kinect.LongExposureInfraredFrameSource/<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m76CFDF98A53ED656315918921A588048E48B0A3C (U3CU3Ec__DisplayClass20_0_t327F2B8B42C8210BC752AFD2819CEDEC11128E26 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Kinect.LongExposureInfraredFrameSource/<>c__DisplayClass20_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_1__ctor_m49282026C69E7D9EBC064074E690FC98E05C89D8 (U3CU3Ec__DisplayClass20_1_t7139DBEFCDFEA41BC0FC756D06C94187AD0BE04A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Windows.Kinect.LongExposureInfraredFrameSource/<>c__DisplayClass20_1::<Windows_Kinect_FrameCapturedEventArgs_Delegate_Handler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_1_U3CWindows_Kinect_FrameCapturedEventArgs_Delegate_HandlerU3Eb__0_mE28126B8C9B046F239788C72D02F835E341A04A1 (U3CU3Ec__DisplayClass20_1_t7139DBEFCDFEA41BC0FC756D06C94187AD0BE04A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_mAC05A40BABD150EFFF871E0EF279C2E55F61A0F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		EventHandler_1_tB59FEF7687065A16102FFC333CCA4BA5069C0A05 * L_0 = __this->get_func_0();
		U3CU3Ec__DisplayClass20_0_t327F2B8B42C8210BC752AFD2819CEDEC11128E26 * L_1 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_1);
		LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337 * L_2 = L_1->get_objThis_0();
		U3CU3Ec__DisplayClass20_0_t327F2B8B42C8210BC752AFD2819CEDEC11128E26 * L_3 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_3);
		FrameCapturedEventArgs_tD7048F9154D0AB0AA5A9815316EF62931EA543A5 * L_4 = L_3->get_args_1();
		NullCheck(L_0);
		EventHandler_1_Invoke_mAC05A40BABD150EFFF871E0EF279C2E55F61A0F9(L_0, L_2, L_4, /*hidden argument*/EventHandler_1_Invoke_mAC05A40BABD150EFFF871E0EF279C2E55F61A0F9_RuntimeMethod_var);
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		goto IL_0026;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{ // begin catch(System.Object)
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0026;
	} // end catch (depth: 1)

IL_0026:
	{
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Kinect.LongExposureInfraredFrameSource/<>c__DisplayClass28_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0__ctor_m3370A9AED6A58C32555FAA701BB163E9D70CE2A6 (U3CU3Ec__DisplayClass28_0_tE7FAE6838B28CDFB20D9A4B4AC223A413CB9E549 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Kinect.LongExposureInfraredFrameSource/<>c__DisplayClass28_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_1__ctor_mE6D48D75C51CBE53DA97E8BF01C1FBA9AF73C485 (U3CU3Ec__DisplayClass28_1_tBBE8C500D9DABE65B0748F4E8C89F5D332CB22BD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Windows.Kinect.LongExposureInfraredFrameSource/<>c__DisplayClass28_1::<Windows_Data_PropertyChangedEventArgs_Delegate_Handler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_1_U3CWindows_Data_PropertyChangedEventArgs_Delegate_HandlerU3Eb__0_mDABA091A17CDE8082889F2DAE9FF74D1C69325A9 (U3CU3Ec__DisplayClass28_1_tBBE8C500D9DABE65B0748F4E8C89F5D332CB22BD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m2D0C90D31474CBBEAA2925268453EA34ADCAC423_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		EventHandler_1_tB2BD70FB7C7747AB3593E537E4BA4310AC101962 * L_0 = __this->get_func_0();
		U3CU3Ec__DisplayClass28_0_tE7FAE6838B28CDFB20D9A4B4AC223A413CB9E549 * L_1 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_1);
		LongExposureInfraredFrameSource_t0CBE5B26EC39D25D62EC2C8D0A663AF867DB6337 * L_2 = L_1->get_objThis_0();
		U3CU3Ec__DisplayClass28_0_tE7FAE6838B28CDFB20D9A4B4AC223A413CB9E549 * L_3 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_3);
		PropertyChangedEventArgs_tFA108A146CD6C15894BD8B76882BBC0DEF633CB1 * L_4 = L_3->get_args_1();
		NullCheck(L_0);
		EventHandler_1_Invoke_m2D0C90D31474CBBEAA2925268453EA34ADCAC423(L_0, L_2, L_4, /*hidden argument*/EventHandler_1_Invoke_m2D0C90D31474CBBEAA2925268453EA34ADCAC423_RuntimeMethod_var);
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		goto IL_0026;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{ // begin catch(System.Object)
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0026;
	} // end catch (depth: 1)

IL_0026:
	{
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__Windows_Data_PropertyChangedEventArgs_Delegate_t9D2608D7441E619BC34823613451B201F17314D3 (_Windows_Data_PropertyChangedEventArgs_Delegate_t9D2608D7441E619BC34823613451B201F17314D3 * __this, intptr_t ___args0, intptr_t ___pNative1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___args0, ___pNative1);

}
// System.Void Windows.Kinect.LongExposureInfraredFrameSource/_Windows_Data_PropertyChangedEventArgs_Delegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Data_PropertyChangedEventArgs_Delegate__ctor_m81F4A58299BD98E08867863581A1895668056655 (_Windows_Data_PropertyChangedEventArgs_Delegate_t9D2608D7441E619BC34823613451B201F17314D3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Windows.Kinect.LongExposureInfraredFrameSource/_Windows_Data_PropertyChangedEventArgs_Delegate::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Data_PropertyChangedEventArgs_Delegate_Invoke_mE54D633B21C9D825251FED6B396B7E0A313F1629 (_Windows_Data_PropertyChangedEventArgs_Delegate_t9D2608D7441E619BC34823613451B201F17314D3 * __this, intptr_t ___args0, intptr_t ___pNative1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___args0, ___pNative1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, ___pNative1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___args0, ___pNative1);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___args0, ___pNative1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___args0, ___pNative1);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___args0, ___pNative1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, ___pNative1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Windows.Kinect.LongExposureInfraredFrameSource/_Windows_Data_PropertyChangedEventArgs_Delegate::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Windows_Data_PropertyChangedEventArgs_Delegate_BeginInvoke_m65CFF581371C67B0A3F3C2A389DFD01BEE1B8D3F (_Windows_Data_PropertyChangedEventArgs_Delegate_t9D2608D7441E619BC34823613451B201F17314D3 * __this, intptr_t ___args0, intptr_t ___pNative1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___args0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pNative1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Windows.Kinect.LongExposureInfraredFrameSource/_Windows_Data_PropertyChangedEventArgs_Delegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Data_PropertyChangedEventArgs_Delegate_EndInvoke_mB4C744C7AB676A71E83D92A6A1BF9C007BFF1FDA (_Windows_Data_PropertyChangedEventArgs_Delegate_t9D2608D7441E619BC34823613451B201F17314D3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__Windows_Kinect_FrameCapturedEventArgs_Delegate_t77519A23F229A7F77F971997374F823C93FE24D0 (_Windows_Kinect_FrameCapturedEventArgs_Delegate_t77519A23F229A7F77F971997374F823C93FE24D0 * __this, intptr_t ___args0, intptr_t ___pNative1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___args0, ___pNative1);

}
// System.Void Windows.Kinect.LongExposureInfraredFrameSource/_Windows_Kinect_FrameCapturedEventArgs_Delegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Kinect_FrameCapturedEventArgs_Delegate__ctor_m34E7AAC96061ED3551DC09C135C697D950BFF6B5 (_Windows_Kinect_FrameCapturedEventArgs_Delegate_t77519A23F229A7F77F971997374F823C93FE24D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Windows.Kinect.LongExposureInfraredFrameSource/_Windows_Kinect_FrameCapturedEventArgs_Delegate::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Kinect_FrameCapturedEventArgs_Delegate_Invoke_mC1593E63F9551C5B4D9B1F3E9826EBA6E0DC0300 (_Windows_Kinect_FrameCapturedEventArgs_Delegate_t77519A23F229A7F77F971997374F823C93FE24D0 * __this, intptr_t ___args0, intptr_t ___pNative1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___args0, ___pNative1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, ___pNative1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___args0, ___pNative1);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___args0, ___pNative1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___args0, ___pNative1);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___args0, ___pNative1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, ___pNative1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Windows.Kinect.LongExposureInfraredFrameSource/_Windows_Kinect_FrameCapturedEventArgs_Delegate::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Windows_Kinect_FrameCapturedEventArgs_Delegate_BeginInvoke_mB88F17237BBA0E84803C35EFFBD397AA1C8CE594 (_Windows_Kinect_FrameCapturedEventArgs_Delegate_t77519A23F229A7F77F971997374F823C93FE24D0 * __this, intptr_t ___args0, intptr_t ___pNative1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___args0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pNative1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Windows.Kinect.LongExposureInfraredFrameSource/_Windows_Kinect_FrameCapturedEventArgs_Delegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Kinect_FrameCapturedEventArgs_Delegate_EndInvoke_m7E7C43062B6F194EF4A320F7C4265CE03AF9332E (_Windows_Kinect_FrameCapturedEventArgs_Delegate_t77519A23F229A7F77F971997374F823C93FE24D0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Kinect.MultiSourceFrame/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m20E85E883DE13397ED81EEBAA78F3C54397EC04D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA * L_0 = (U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA *)il2cpp_codegen_object_new(U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE7019039280186C1C1D6E25872120F410BB41CCF(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Windows.Kinect.MultiSourceFrame/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE7019039280186C1C1D6E25872120F410BB41CCF (U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Windows.Kinect.BodyFrameReference Windows.Kinect.MultiSourceFrame/<>c::<get_BodyFrameReference>b__10_0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BodyFrameReference_t2FAF1959353883E9BC1F82D1E3CAD0CE554023E4 * U3CU3Ec_U3Cget_BodyFrameReferenceU3Eb__10_0_m9F1CA06D0ABB542E997FF5AB0A74C020829A83C4 (U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA * __this, intptr_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BodyFrameReference_t2FAF1959353883E9BC1F82D1E3CAD0CE554023E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.BodyFrameReference>(objectPointer, n => new Windows.Kinect.BodyFrameReference(n));
		intptr_t L_0 = ___n0;
		BodyFrameReference_t2FAF1959353883E9BC1F82D1E3CAD0CE554023E4 * L_1 = (BodyFrameReference_t2FAF1959353883E9BC1F82D1E3CAD0CE554023E4 *)il2cpp_codegen_object_new(BodyFrameReference_t2FAF1959353883E9BC1F82D1E3CAD0CE554023E4_il2cpp_TypeInfo_var);
		BodyFrameReference__ctor_m9ABC1EB29A1CB0E2320CA6EAFA6CC1629D362E5B(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Windows.Kinect.BodyIndexFrameReference Windows.Kinect.MultiSourceFrame/<>c::<get_BodyIndexFrameReference>b__13_0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BodyIndexFrameReference_t3614DE16008177E9FCEF10AFE991AD12FAFA7585 * U3CU3Ec_U3Cget_BodyIndexFrameReferenceU3Eb__13_0_mFBFCDBF7E5CAC3861F8D427625A5F0ACFF1A7B2B (U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA * __this, intptr_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BodyIndexFrameReference_t3614DE16008177E9FCEF10AFE991AD12FAFA7585_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.BodyIndexFrameReference>(objectPointer, n => new Windows.Kinect.BodyIndexFrameReference(n));
		intptr_t L_0 = ___n0;
		BodyIndexFrameReference_t3614DE16008177E9FCEF10AFE991AD12FAFA7585 * L_1 = (BodyIndexFrameReference_t3614DE16008177E9FCEF10AFE991AD12FAFA7585 *)il2cpp_codegen_object_new(BodyIndexFrameReference_t3614DE16008177E9FCEF10AFE991AD12FAFA7585_il2cpp_TypeInfo_var);
		BodyIndexFrameReference__ctor_m76FEB50806C29F341DC2E96865691DC5FBF5CC16(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Windows.Kinect.ColorFrameReference Windows.Kinect.MultiSourceFrame/<>c::<get_ColorFrameReference>b__16_0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColorFrameReference_t6985FBD968B49B8B5620F309BC09F9973929701C * U3CU3Ec_U3Cget_ColorFrameReferenceU3Eb__16_0_m097CC090B76869271EDC842AEFF61BD448B7BB68 (U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA * __this, intptr_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorFrameReference_t6985FBD968B49B8B5620F309BC09F9973929701C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.ColorFrameReference>(objectPointer, n => new Windows.Kinect.ColorFrameReference(n));
		intptr_t L_0 = ___n0;
		ColorFrameReference_t6985FBD968B49B8B5620F309BC09F9973929701C * L_1 = (ColorFrameReference_t6985FBD968B49B8B5620F309BC09F9973929701C *)il2cpp_codegen_object_new(ColorFrameReference_t6985FBD968B49B8B5620F309BC09F9973929701C_il2cpp_TypeInfo_var);
		ColorFrameReference__ctor_m3188DBEE7B9CDE2843A7E4C13212DF75F7D5A299(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Windows.Kinect.DepthFrameReference Windows.Kinect.MultiSourceFrame/<>c::<get_DepthFrameReference>b__19_0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DepthFrameReference_t203196DB0EDAE9FFBFC298222BC43FF618D7D8B0 * U3CU3Ec_U3Cget_DepthFrameReferenceU3Eb__19_0_m0C0EFE3E1A77349CA68502549BA379DB07474B18 (U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA * __this, intptr_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DepthFrameReference_t203196DB0EDAE9FFBFC298222BC43FF618D7D8B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.DepthFrameReference>(objectPointer, n => new Windows.Kinect.DepthFrameReference(n));
		intptr_t L_0 = ___n0;
		DepthFrameReference_t203196DB0EDAE9FFBFC298222BC43FF618D7D8B0 * L_1 = (DepthFrameReference_t203196DB0EDAE9FFBFC298222BC43FF618D7D8B0 *)il2cpp_codegen_object_new(DepthFrameReference_t203196DB0EDAE9FFBFC298222BC43FF618D7D8B0_il2cpp_TypeInfo_var);
		DepthFrameReference__ctor_m9C5B61956791735EFF641B3B04A7BBE6AA30A4E7(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Windows.Kinect.InfraredFrameReference Windows.Kinect.MultiSourceFrame/<>c::<get_InfraredFrameReference>b__22_0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InfraredFrameReference_t056C1464ECC12EE8005B737B3BA3AF7CC10470A2 * U3CU3Ec_U3Cget_InfraredFrameReferenceU3Eb__22_0_mA6650E80DE998FCDDA5347FD1E13521CB7A5770B (U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA * __this, intptr_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InfraredFrameReference_t056C1464ECC12EE8005B737B3BA3AF7CC10470A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.InfraredFrameReference>(objectPointer, n => new Windows.Kinect.InfraredFrameReference(n));
		intptr_t L_0 = ___n0;
		InfraredFrameReference_t056C1464ECC12EE8005B737B3BA3AF7CC10470A2 * L_1 = (InfraredFrameReference_t056C1464ECC12EE8005B737B3BA3AF7CC10470A2 *)il2cpp_codegen_object_new(InfraredFrameReference_t056C1464ECC12EE8005B737B3BA3AF7CC10470A2_il2cpp_TypeInfo_var);
		InfraredFrameReference__ctor_mA8F93245F41701C812C87BA819F34ABD7EB85D54(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Windows.Kinect.LongExposureInfraredFrameReference Windows.Kinect.MultiSourceFrame/<>c::<get_LongExposureInfraredFrameReference>b__25_0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LongExposureInfraredFrameReference_tC6A51F471C0AB80DAFE39436260636F29434BE04 * U3CU3Ec_U3Cget_LongExposureInfraredFrameReferenceU3Eb__25_0_m8B9E2BA90BDB3B597EDBCCEFCC5FCAD0636D1173 (U3CU3Ec_tF2ECE7DA2BC06D1C6ABB5B5F9D7D729542BAD7DA * __this, intptr_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LongExposureInfraredFrameReference_tC6A51F471C0AB80DAFE39436260636F29434BE04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.LongExposureInfraredFrameReference>(objectPointer, n => new Windows.Kinect.LongExposureInfraredFrameReference(n));
		intptr_t L_0 = ___n0;
		LongExposureInfraredFrameReference_tC6A51F471C0AB80DAFE39436260636F29434BE04 * L_1 = (LongExposureInfraredFrameReference_tC6A51F471C0AB80DAFE39436260636F29434BE04 *)il2cpp_codegen_object_new(LongExposureInfraredFrameReference_tC6A51F471C0AB80DAFE39436260636F29434BE04_il2cpp_TypeInfo_var);
		LongExposureInfraredFrameReference__ctor_mFD4825AF73C6479CA679E14D97EF9D2E0A19AE38(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Kinect.MultiSourceFrameArrivedEventArgs/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2A6C0CA3D3F4AC612DE48E1BB7D88FD4A61742C6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3B48CEAB86B70AD0179D82B0B4B4C7AAA9CCB247_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3B48CEAB86B70AD0179D82B0B4B4C7AAA9CCB247 * L_0 = (U3CU3Ec_t3B48CEAB86B70AD0179D82B0B4B4C7AAA9CCB247 *)il2cpp_codegen_object_new(U3CU3Ec_t3B48CEAB86B70AD0179D82B0B4B4C7AAA9CCB247_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mAE939ADFB45FC04C688FB1E297A9B0BD8B6B820C(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3B48CEAB86B70AD0179D82B0B4B4C7AAA9CCB247_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3B48CEAB86B70AD0179D82B0B4B4C7AAA9CCB247_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Windows.Kinect.MultiSourceFrameArrivedEventArgs/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAE939ADFB45FC04C688FB1E297A9B0BD8B6B820C (U3CU3Ec_t3B48CEAB86B70AD0179D82B0B4B4C7AAA9CCB247 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Windows.Kinect.MultiSourceFrameReference Windows.Kinect.MultiSourceFrameArrivedEventArgs/<>c::<get_FrameReference>b__10_0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MultiSourceFrameReference_tE8D6753E58108430329A82FDB2228F185313813F * U3CU3Ec_U3Cget_FrameReferenceU3Eb__10_0_m8A589307E9F7D668FBFF2DAFD00BF0245090C72A (U3CU3Ec_t3B48CEAB86B70AD0179D82B0B4B4C7AAA9CCB247 * __this, intptr_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiSourceFrameReference_tE8D6753E58108430329A82FDB2228F185313813F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.MultiSourceFrameReference>(objectPointer, n => new Windows.Kinect.MultiSourceFrameReference(n));
		intptr_t L_0 = ___n0;
		MultiSourceFrameReference_tE8D6753E58108430329A82FDB2228F185313813F * L_1 = (MultiSourceFrameReference_tE8D6753E58108430329A82FDB2228F185313813F *)il2cpp_codegen_object_new(MultiSourceFrameReference_tE8D6753E58108430329A82FDB2228F185313813F_il2cpp_TypeInfo_var);
		MultiSourceFrameReference__ctor_mFA3F6329750E915725E680D92D54AEE1BA5E7A5B(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Kinect.MultiSourceFrameReader/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC382BFCF20A567832DA703ABF747151C2E4E91DF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA6A7F62B49C170EA8E9259580DB8A1746AAE2628_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA6A7F62B49C170EA8E9259580DB8A1746AAE2628 * L_0 = (U3CU3Ec_tA6A7F62B49C170EA8E9259580DB8A1746AAE2628 *)il2cpp_codegen_object_new(U3CU3Ec_tA6A7F62B49C170EA8E9259580DB8A1746AAE2628_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mA87EA1638D4FD0A05E9F3617AD41BF4D9A9D0DB6(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tA6A7F62B49C170EA8E9259580DB8A1746AAE2628_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA6A7F62B49C170EA8E9259580DB8A1746AAE2628_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Windows.Kinect.MultiSourceFrameReader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA87EA1638D4FD0A05E9F3617AD41BF4D9A9D0DB6 (U3CU3Ec_tA6A7F62B49C170EA8E9259580DB8A1746AAE2628 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Windows.Kinect.KinectSensor Windows.Kinect.MultiSourceFrameReader/<>c::<get_KinectSensor>b__18_0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC * U3CU3Ec_U3Cget_KinectSensorU3Eb__18_0_m9BCA19C96B62FE5862A5E57432A3BF739FFB8305 (U3CU3Ec_tA6A7F62B49C170EA8E9259580DB8A1746AAE2628 * __this, intptr_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.KinectSensor>(objectPointer, n => new Windows.Kinect.KinectSensor(n));
		intptr_t L_0 = ___n0;
		KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC * L_1 = (KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC *)il2cpp_codegen_object_new(KinectSensor_tBE1CB066C276551E1F00462974BF454B4BA1BCCC_il2cpp_TypeInfo_var);
		KinectSensor__ctor_m6ABEF4C43D9D3E9FE7AB8411E481F02A784C7F35(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Windows.Kinect.MultiSourceFrame Windows.Kinect.MultiSourceFrameReader/<>c::<AcquireLatestFrame>b__36_0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MultiSourceFrame_t281B4AA81E9C8B38F24E909A94CD1940E71E509E * U3CU3Ec_U3CAcquireLatestFrameU3Eb__36_0_m899F91DEC5129B8215FF530EA4F86FE23C4AB64F (U3CU3Ec_tA6A7F62B49C170EA8E9259580DB8A1746AAE2628 * __this, intptr_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiSourceFrame_t281B4AA81E9C8B38F24E909A94CD1940E71E509E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.MultiSourceFrame>(objectPointer, n => new Windows.Kinect.MultiSourceFrame(n));
		intptr_t L_0 = ___n0;
		MultiSourceFrame_t281B4AA81E9C8B38F24E909A94CD1940E71E509E * L_1 = (MultiSourceFrame_t281B4AA81E9C8B38F24E909A94CD1940E71E509E *)il2cpp_codegen_object_new(MultiSourceFrame_t281B4AA81E9C8B38F24E909A94CD1940E71E509E_il2cpp_TypeInfo_var);
		MultiSourceFrame__ctor_m7AAF403AC3F94CF7D3A65CFA4E0750D077B72A0F(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_mC019099735A6D4A864E25AF0473428250C7D578E (U3CU3Ec__DisplayClass22_0_tF933F53F77B7308E0545D150A1031BF063483DB5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass22_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_1__ctor_mB012B69F7C013D282978697DB318B99E14EB73B3 (U3CU3Ec__DisplayClass22_1_t4DD634AFA12116EEF2B9D4D468F94D35739C0D63 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass22_1::<Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_1_U3CWindows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_HandlerU3Eb__0_mE629EF5304C623CEDBC2A8F537AD238259086E61 (U3CU3Ec__DisplayClass22_1_t4DD634AFA12116EEF2B9D4D468F94D35739C0D63 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m1C90999A5D7A3299AA46B2494D8A494B77DFE5FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		EventHandler_1_t32A60B00DA36C871C4B539798908F1A561114391 * L_0 = __this->get_func_0();
		U3CU3Ec__DisplayClass22_0_tF933F53F77B7308E0545D150A1031BF063483DB5 * L_1 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_1);
		MultiSourceFrameReader_t4CF408C6284FA502D56444B52A0488DD0155046C * L_2 = L_1->get_objThis_0();
		U3CU3Ec__DisplayClass22_0_tF933F53F77B7308E0545D150A1031BF063483DB5 * L_3 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_3);
		MultiSourceFrameArrivedEventArgs_tFC6A0881995713CA74F376AEB59343C5AE3CDED1 * L_4 = L_3->get_args_1();
		NullCheck(L_0);
		EventHandler_1_Invoke_m1C90999A5D7A3299AA46B2494D8A494B77DFE5FC(L_0, L_2, L_4, /*hidden argument*/EventHandler_1_Invoke_m1C90999A5D7A3299AA46B2494D8A494B77DFE5FC_RuntimeMethod_var);
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		goto IL_0026;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{ // begin catch(System.Object)
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0026;
	} // end catch (depth: 1)

IL_0026:
	{
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass30_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_0__ctor_mF96160A3303514922C32C26B6BEE2D4B72A1066C (U3CU3Ec__DisplayClass30_0_tADF1CCCC2354CB6FDB2E3DC53DB1890D2C647040 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass30_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_1__ctor_mFC9E72076419B2FE25517321931CBEA9D483339B (U3CU3Ec__DisplayClass30_1_t6636053F58BEA7355116BF96B12C8DF9E04F17C8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Windows.Kinect.MultiSourceFrameReader/<>c__DisplayClass30_1::<Windows_Data_PropertyChangedEventArgs_Delegate_Handler>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass30_1_U3CWindows_Data_PropertyChangedEventArgs_Delegate_HandlerU3Eb__0_m058129C5D66701B5AD3B63A2F0105FB6497A6682 (U3CU3Ec__DisplayClass30_1_t6636053F58BEA7355116BF96B12C8DF9E04F17C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_Invoke_m2D0C90D31474CBBEAA2925268453EA34ADCAC423_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		EventHandler_1_tB2BD70FB7C7747AB3593E537E4BA4310AC101962 * L_0 = __this->get_func_0();
		U3CU3Ec__DisplayClass30_0_tADF1CCCC2354CB6FDB2E3DC53DB1890D2C647040 * L_1 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_1);
		MultiSourceFrameReader_t4CF408C6284FA502D56444B52A0488DD0155046C * L_2 = L_1->get_objThis_0();
		U3CU3Ec__DisplayClass30_0_tADF1CCCC2354CB6FDB2E3DC53DB1890D2C647040 * L_3 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_3);
		PropertyChangedEventArgs_tFA108A146CD6C15894BD8B76882BBC0DEF633CB1 * L_4 = L_3->get_args_1();
		NullCheck(L_0);
		EventHandler_1_Invoke_m2D0C90D31474CBBEAA2925268453EA34ADCAC423(L_0, L_2, L_4, /*hidden argument*/EventHandler_1_Invoke_m2D0C90D31474CBBEAA2925268453EA34ADCAC423_RuntimeMethod_var);
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		goto IL_0026;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		throw e;
	}

CATCH_0023:
	{ // begin catch(System.Object)
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0026;
	} // end catch (depth: 1)

IL_0026:
	{
		// Helper.EventPump.Instance.Enqueue(() => { try { func(objThis, args); } catch { } });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__Windows_Data_PropertyChangedEventArgs_Delegate_tBBBE398B93B2175511D5A4194545C6AC1D91B645 (_Windows_Data_PropertyChangedEventArgs_Delegate_tBBBE398B93B2175511D5A4194545C6AC1D91B645 * __this, intptr_t ___args0, intptr_t ___pNative1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___args0, ___pNative1);

}
// System.Void Windows.Kinect.MultiSourceFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Data_PropertyChangedEventArgs_Delegate__ctor_m3E28C29ADF1257A1AE692C43BE7A9EF76D3FD57A (_Windows_Data_PropertyChangedEventArgs_Delegate_tBBBE398B93B2175511D5A4194545C6AC1D91B645 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Windows.Kinect.MultiSourceFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Data_PropertyChangedEventArgs_Delegate_Invoke_m311BD2FC1F9A4A92CD4C06C4A90DDDD6A3238EBB (_Windows_Data_PropertyChangedEventArgs_Delegate_tBBBE398B93B2175511D5A4194545C6AC1D91B645 * __this, intptr_t ___args0, intptr_t ___pNative1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___args0, ___pNative1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, ___pNative1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___args0, ___pNative1);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___args0, ___pNative1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___args0, ___pNative1);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___args0, ___pNative1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, ___pNative1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Windows.Kinect.MultiSourceFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Windows_Data_PropertyChangedEventArgs_Delegate_BeginInvoke_mB7FFFEBBD15EE463020B26F36B7640B77E5056A8 (_Windows_Data_PropertyChangedEventArgs_Delegate_tBBBE398B93B2175511D5A4194545C6AC1D91B645 * __this, intptr_t ___args0, intptr_t ___pNative1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___args0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pNative1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Windows.Kinect.MultiSourceFrameReader/_Windows_Data_PropertyChangedEventArgs_Delegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Data_PropertyChangedEventArgs_Delegate_EndInvoke_m45E8F20DE06A2498E812EB99EF43DC829F5DC9F0 (_Windows_Data_PropertyChangedEventArgs_Delegate_tBBBE398B93B2175511D5A4194545C6AC1D91B645 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper__Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_t1AA1D07898F0A20D61357587BE9005C070562133 (_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_t1AA1D07898F0A20D61357587BE9005C070562133 * __this, intptr_t ___args0, intptr_t ___pNative1, const RuntimeMethod* method)
{
	typedef void (CDECL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	il2cppPInvokeFunc(___args0, ___pNative1);

}
// System.Void Windows.Kinect.MultiSourceFrameReader/_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate__ctor_m93D49626D8D7424E76A2DAE37C178CAD50FFCDD7 (_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_t1AA1D07898F0A20D61357587BE9005C070562133 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Windows.Kinect.MultiSourceFrameReader/_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Invoke_mCE503875D26DF6DE7EDEF8E77614983A60D53E42 (_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_t1AA1D07898F0A20D61357587BE9005C070562133 * __this, intptr_t ___args0, intptr_t ___pNative1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___args0, ___pNative1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, ___pNative1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___args0, ___pNative1);
					else
						GenericVirtActionInvoker2< intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___args0, ___pNative1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___args0, ___pNative1);
					else
						VirtActionInvoker2< intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___args0, ___pNative1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___args0, ___pNative1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Windows.Kinect.MultiSourceFrameReader/_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_BeginInvoke_mD5A6A100E879A93840EA467A47939E2FA8FBD2A4 (_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_t1AA1D07898F0A20D61357587BE9005C070562133 * __this, intptr_t ___args0, intptr_t ___pNative1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___args0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___pNative1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Windows.Kinect.MultiSourceFrameReader/_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_EndInvoke_mDD77C625FAB0704CABD9CFFB7DFC6A3484939BCC (_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_t1AA1D07898F0A20D61357587BE9005C070562133 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Kinect.MultiSourceFrameReference/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8A923BAAF5FB63CF15A56CB2E6FB2F5BDEE6D191 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5E2981FBACBE08129CF160F33BB15619312C97CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5E2981FBACBE08129CF160F33BB15619312C97CC * L_0 = (U3CU3Ec_t5E2981FBACBE08129CF160F33BB15619312C97CC *)il2cpp_codegen_object_new(U3CU3Ec_t5E2981FBACBE08129CF160F33BB15619312C97CC_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mA24E2E7BC7602F282DDC2994E8EEE6B3DFC16FEA(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5E2981FBACBE08129CF160F33BB15619312C97CC_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5E2981FBACBE08129CF160F33BB15619312C97CC_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Windows.Kinect.MultiSourceFrameReference/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA24E2E7BC7602F282DDC2994E8EEE6B3DFC16FEA (U3CU3Ec_t5E2981FBACBE08129CF160F33BB15619312C97CC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Windows.Kinect.MultiSourceFrame Windows.Kinect.MultiSourceFrameReference/<>c::<AcquireFrame>b__9_0(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MultiSourceFrame_t281B4AA81E9C8B38F24E909A94CD1940E71E509E * U3CU3Ec_U3CAcquireFrameU3Eb__9_0_mE4FEB2293FD7E93634307F1C5DC8B507CEC29D5D (U3CU3Ec_t5E2981FBACBE08129CF160F33BB15619312C97CC * __this, intptr_t ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiSourceFrame_t281B4AA81E9C8B38F24E909A94CD1940E71E509E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Helper.NativeObjectCache.CreateOrGetObject<Windows.Kinect.MultiSourceFrame>(objectPointer, n => new Windows.Kinect.MultiSourceFrame(n));
		intptr_t L_0 = ___n0;
		MultiSourceFrame_t281B4AA81E9C8B38F24E909A94CD1940E71E509E * L_1 = (MultiSourceFrame_t281B4AA81E9C8B38F24E909A94CD1940E71E509E *)il2cpp_codegen_object_new(MultiSourceFrame_t281B4AA81E9C8B38F24E909A94CD1940E71E509E_il2cpp_TypeInfo_var);
		MultiSourceFrame__ctor_m7AAF403AC3F94CF7D3A65CFA4E0750D077B72A0F(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
