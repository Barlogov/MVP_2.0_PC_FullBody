﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

struct EVENT_FILTER_DESCRIPTOR_t59379AB6F16CCEA5C0BDF328FF5AC64040CED05B ;
struct Guid_t ;
struct unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 ;
struct unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 ;
struct unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA ;
struct unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D ;
struct unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6 ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


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

// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
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


// Mono.Unity.UnityTls/unitytls_x509list_ref
struct unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D 
{
public:
	// System.UInt64 Mono.Unity.UnityTls/unitytls_x509list_ref::handle
	uint64_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D, ___handle_0)); }
	inline uint64_t get_handle_0() const { return ___handle_0; }
	inline uint64_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(uint64_t value)
	{
		___handle_0 = value;
	}
};


// Mono.Unity.UnityTls/unitytls_x509verify_result
struct unitytls_x509verify_result_t3CE5D0E50DA56D0A6561757039E6F1F292996B84 
{
public:
	// System.UInt32 Mono.Unity.UnityTls/unitytls_x509verify_result::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(unitytls_x509verify_result_t3CE5D0E50DA56D0A6561757039E6F1F292996B84, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern "C" void CDECL ReversePInvokeWrapper_AudioBeam_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m9BFDADCF4413B9CA48879827C2CE96A67B9F1796(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_AudioBeamFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m96A60ABB989DAF7C6606DB10B751825F62ECAD9E(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_AudioBeamFrameReader_Windows_Kinect_AudioBeamFrameArrivedEventArgs_Delegate_Handler_m313C90D549004773A1EAFC1EB13791F1E639D1D3(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_AudioSource_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m89FC7D4352BF4D938631E3CC0756513DF33AAD4E(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_AudioSource_Windows_Kinect_FrameCapturedEventArgs_Delegate_Handler_mF169F743D3EC324AD88C7EBF9FBDFC9D02412070(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_BodyFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m6670DF80B29B0EB1A128E73A27F34E163199484A(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_BodyFrameReader_Windows_Kinect_BodyFrameArrivedEventArgs_Delegate_Handler_mE759F22B9321D1B4C6B1C2514EF95E8B4702F4BE(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_BodyFrameSource_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_mC1CFBA930A012591E6522D01FCF3DD699F149DB4(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_BodyFrameSource_Windows_Kinect_FrameCapturedEventArgs_Delegate_Handler_m3C6B3BAAC3BC90178EA9C79983AECD87B5EC9BC8(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_BodyIndexFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m547CEE31B6BF9A643E9F676F7B5C3FF0572E234F(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_BodyIndexFrameReader_Windows_Kinect_BodyIndexFrameArrivedEventArgs_Delegate_Handler_m0DA2F3A7C7A21D20C23D0537819C2BA0203C98CA(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_BodyIndexFrameSource_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_mC91FFA7D0F7023F8C12350910A6594B9165506EC(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_BodyIndexFrameSource_Windows_Kinect_FrameCapturedEventArgs_Delegate_Handler_mD2B02CC4B26C643F97E1A4BF46218B74EEF42D3C(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_ColorFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_mB119EDEEBAB15332382BB13848F43F5CD071B524(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_ColorFrameReader_Windows_Kinect_ColorFrameArrivedEventArgs_Delegate_Handler_m8299279DE943CC9BF624939AEC4B48EE8CA6CE86(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_ColorFrameSource_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_mF9FF5A42D1504485427E206DBAAA92ED575CAA13(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_ColorFrameSource_Windows_Kinect_FrameCapturedEventArgs_Delegate_Handler_mDDF8645E9D4EC3DC305B706CF962427351836754(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_CoordinateMapper_Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_Handler_mEE7F645C45603ADD7639EEAF21F52296639FC75F(intptr_t ___result0, intptr_t ___pNative1);
extern "C" int32_t CDECL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedRead_m1B817101FEA9D3C28DF3C9192F70557465BDFB25(intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2);
extern "C" int32_t CDECL ReversePInvokeWrapper_DeflateStreamNative_UnmanagedWrite_m531442C0133AA29BF262DFD21F81CCBE5EA7E086(intptr_t ___buffer0, int32_t ___length1, intptr_t ___data2);
extern "C" void CDECL ReversePInvokeWrapper_DepthFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m269DD3248D7233296ECAE0C101C2EF6981118CE8(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_DepthFrameReader_Windows_Kinect_DepthFrameArrivedEventArgs_Delegate_Handler_mF0E4534BD09C7C0788F4FDCC7D42D5F037F91AB0(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_DepthFrameSource_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m8F16D129032F725D3AFAA1C3A0AE8AA2FACA8E99(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_DepthFrameSource_Windows_Kinect_FrameCapturedEventArgs_Delegate_Handler_m0A1E9549122F0DF410CA406DF924D3E72C6A10EB(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_EventProvider_EtwEnableCallBack_m21ADE6DC652B28DDB916AC68B9FC908B18006FFD(Guid_t * ___sourceId0, int32_t ___controlCode1, uint8_t ___setLevel2, int64_t ___anyKeyword3, int64_t ___allKeyword4, EVENT_FILTER_DESCRIPTOR_t59379AB6F16CCEA5C0BDF328FF5AC64040CED05B * ___filterData5, void* ___callbackContext6);
extern "C" void CDECL ReversePInvokeWrapper_InfraredFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_mDA1BED6C79A84830B79F9AEAEFC16AE296189BED(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_InfraredFrameReader_Windows_Kinect_InfraredFrameArrivedEventArgs_Delegate_Handler_mB4A08390DC15171B504FFB41843106CF750D330F(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_InfraredFrameSource_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_mBB8CB832C3C09C50571D894D815FC82C8D24A36C(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_InfraredFrameSource_Windows_Kinect_FrameCapturedEventArgs_Delegate_Handler_mD2B04783E8DE995E7CAF8A28681755E794302DB2(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_KinectSensor_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m52835EA1C669B9F50C39D9D338691BA5A83F2712(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_KinectSensor_Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handler_m6AD33B4F7F26E39612E0D4E139C1A55043B8C8DB(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_LongExposureInfraredFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m5EF0917EA00F80004DAEEC3FCB581F3D0470A8FE(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_LongExposureInfraredFrameReader_Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_Handler_mA0347FBF0ECFB96263C8F664D0FDC50A8D560796(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_LongExposureInfraredFrameSource_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_mE2D5F4A9F8723052E8B10360B353AF4480485CE9(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_LongExposureInfraredFrameSource_Windows_Kinect_FrameCapturedEventArgs_Delegate_Handler_m571643E91074D58FEF4813F49387F207692DD135(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_MultiSourceFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_mEB97CC6C18F9BDB6C1A35E98DDDAF922C3B84696(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void CDECL ReversePInvokeWrapper_MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handler_m18F4B71F86CBCD6EBCF34C8CECBEFE5E2D78EC43(intptr_t ___result0, intptr_t ___pNative1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m0045E44F7E960D6B4A864D5206D4116249C09BB0(intptr_t ___arg0);
extern "C" void CDECL ReversePInvokeWrapper_UnityTlsContext_CertificateCallback_m793CC2EDD82935F29A3DEBD1F208DC56EA822E9C(void* ___userData0, unitytls_tlsctx_tA5DB674E2A83ADDD03624096501FCDD29E9DB7FA * ___ctx1, uint8_t* ___cn2, intptr_t ___cnLen3, unitytls_x509name_tC19C2F27FF70AD438A79A5F66E4C5FFA2613EDA6 * ___caList4, intptr_t ___caListLen5, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D * ___chain6, unitytls_key_ref_t7EFBA70561D0E9FD8517038EBC0CC9FCF9AE6B61 * ___key7, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState8);
extern "C" intptr_t CDECL ReversePInvokeWrapper_UnityTlsContext_ReadCallback_mA0BF382397D912B79B6064B58B6C7C5D97853245(void* ___userData0, uint8_t* ___buffer1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3);
extern "C" uint32_t CDECL ReversePInvokeWrapper_UnityTlsContext_VerifyCallback_m8C61EF3A0037483AD56A083CA47D8E4C0404961E(void* ___userData0, unitytls_x509list_ref_tE4376B9592E1AF7E02BB0BB2CE110D8219832D4D  ___chain1, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState2);
extern "C" intptr_t CDECL ReversePInvokeWrapper_UnityTlsContext_WriteCallback_m466D11090AF989AD1F14E6FE049320297C12A86C(void* ___userData0, uint8_t* ___data1, intptr_t ___bufferLen2, unitytls_errorstate_t0015D496F47B84E1D98D31D5132B27FADB38F499 * ___errorState3);


IL2CPP_EXTERN_C const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[42] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AudioBeam_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m9BFDADCF4413B9CA48879827C2CE96A67B9F1796),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AudioBeamFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m96A60ABB989DAF7C6606DB10B751825F62ECAD9E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AudioBeamFrameReader_Windows_Kinect_AudioBeamFrameArrivedEventArgs_Delegate_Handler_m313C90D549004773A1EAFC1EB13791F1E639D1D3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AudioSource_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m89FC7D4352BF4D938631E3CC0756513DF33AAD4E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AudioSource_Windows_Kinect_FrameCapturedEventArgs_Delegate_Handler_mF169F743D3EC324AD88C7EBF9FBDFC9D02412070),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_BodyFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m6670DF80B29B0EB1A128E73A27F34E163199484A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_BodyFrameReader_Windows_Kinect_BodyFrameArrivedEventArgs_Delegate_Handler_mE759F22B9321D1B4C6B1C2514EF95E8B4702F4BE),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_BodyFrameSource_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_mC1CFBA930A012591E6522D01FCF3DD699F149DB4),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_BodyFrameSource_Windows_Kinect_FrameCapturedEventArgs_Delegate_Handler_m3C6B3BAAC3BC90178EA9C79983AECD87B5EC9BC8),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_BodyIndexFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m547CEE31B6BF9A643E9F676F7B5C3FF0572E234F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_BodyIndexFrameReader_Windows_Kinect_BodyIndexFrameArrivedEventArgs_Delegate_Handler_m0DA2F3A7C7A21D20C23D0537819C2BA0203C98CA),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_BodyIndexFrameSource_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_mC91FFA7D0F7023F8C12350910A6594B9165506EC),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_BodyIndexFrameSource_Windows_Kinect_FrameCapturedEventArgs_Delegate_Handler_mD2B02CC4B26C643F97E1A4BF46218B74EEF42D3C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ColorFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_mB119EDEEBAB15332382BB13848F43F5CD071B524),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ColorFrameReader_Windows_Kinect_ColorFrameArrivedEventArgs_Delegate_Handler_m8299279DE943CC9BF624939AEC4B48EE8CA6CE86),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ColorFrameSource_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_mF9FF5A42D1504485427E206DBAAA92ED575CAA13),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ColorFrameSource_Windows_Kinect_FrameCapturedEventArgs_Delegate_Handler_mDDF8645E9D4EC3DC305B706CF962427351836754),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_CoordinateMapper_Windows_Kinect_CoordinateMappingChangedEventArgs_Delegate_Handler_mEE7F645C45603ADD7639EEAF21F52296639FC75F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_DeflateStreamNative_UnmanagedRead_m1B817101FEA9D3C28DF3C9192F70557465BDFB25),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_DeflateStreamNative_UnmanagedWrite_m531442C0133AA29BF262DFD21F81CCBE5EA7E086),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_DepthFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m269DD3248D7233296ECAE0C101C2EF6981118CE8),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_DepthFrameReader_Windows_Kinect_DepthFrameArrivedEventArgs_Delegate_Handler_mF0E4534BD09C7C0788F4FDCC7D42D5F037F91AB0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_DepthFrameSource_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m8F16D129032F725D3AFAA1C3A0AE8AA2FACA8E99),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_DepthFrameSource_Windows_Kinect_FrameCapturedEventArgs_Delegate_Handler_m0A1E9549122F0DF410CA406DF924D3E72C6A10EB),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_EventProvider_EtwEnableCallBack_m21ADE6DC652B28DDB916AC68B9FC908B18006FFD),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_InfraredFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_mDA1BED6C79A84830B79F9AEAEFC16AE296189BED),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_InfraredFrameReader_Windows_Kinect_InfraredFrameArrivedEventArgs_Delegate_Handler_mB4A08390DC15171B504FFB41843106CF750D330F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_InfraredFrameSource_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_mBB8CB832C3C09C50571D894D815FC82C8D24A36C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_InfraredFrameSource_Windows_Kinect_FrameCapturedEventArgs_Delegate_Handler_mD2B04783E8DE995E7CAF8A28681755E794302DB2),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_KinectSensor_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m52835EA1C669B9F50C39D9D338691BA5A83F2712),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_KinectSensor_Windows_Kinect_IsAvailableChangedEventArgs_Delegate_Handler_m6AD33B4F7F26E39612E0D4E139C1A55043B8C8DB),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_LongExposureInfraredFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_m5EF0917EA00F80004DAEEC3FCB581F3D0470A8FE),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_LongExposureInfraredFrameReader_Windows_Kinect_LongExposureInfraredFrameArrivedEventArgs_Delegate_Handler_mA0347FBF0ECFB96263C8F664D0FDC50A8D560796),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_LongExposureInfraredFrameSource_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_mE2D5F4A9F8723052E8B10360B353AF4480485CE9),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_LongExposureInfraredFrameSource_Windows_Kinect_FrameCapturedEventArgs_Delegate_Handler_m571643E91074D58FEF4813F49387F207692DD135),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MultiSourceFrameReader_Windows_Data_PropertyChangedEventArgs_Delegate_Handler_mEB97CC6C18F9BDB6C1A35E98DDDAF922C3B84696),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MultiSourceFrameReader_Windows_Kinect_MultiSourceFrameArrivedEventArgs_Delegate_Handler_m18F4B71F86CBCD6EBCF34C8CECBEFE5E2D78EC43),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m0045E44F7E960D6B4A864D5206D4116249C09BB0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_CertificateCallback_m793CC2EDD82935F29A3DEBD1F208DC56EA822E9C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_ReadCallback_mA0BF382397D912B79B6064B58B6C7C5D97853245),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_VerifyCallback_m8C61EF3A0037483AD56A083CA47D8E4C0404961E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTlsContext_WriteCallback_m466D11090AF989AD1F14E6FE049320297C12A86C),
};
