#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtualFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.UInt32[][][]
struct UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37;
// System.UInt32[][]
struct UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6;
// System.UInt64[][]
struct UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// Org.BouncyCastle.Crypto.Digests.SkeinEngine/Parameter[]
struct ParameterU5BU5D_t63C04172EA11C424371D4CA4374B577B8E6695AF;
// Org.BouncyCastle.Crypto.Parameters.AeadParameters
struct AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmExponentiator
struct BasicGcmExponentiator_t889C88199B1E25F4C5610EFD2AB4144F96F89832;
// Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmMultiplier
struct BasicGcmMultiplier_t70121FD66BA3790D9F0CD78FA12FD2676920451E;
// Org.BouncyCastle.Crypto.Macs.CMac
struct CMac_tEE0527411A50849DB625E0C83E46E0C4A809DFB1;
// Org.BouncyCastle.Crypto.Modes.CbcBlockCipher
struct CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548;
// Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac
struct CbcBlockCipherMac_tB98ED50E26EFEEBA2A312F50D356D6C3C473777D;
// Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac
struct CfbBlockCipherMac_t00336B3CBEBF99EE3F5B458636F3DE463E26B543;
// Org.BouncyCastle.Crypto.IO.CipherStream
struct CipherStream_t6FB015ADC43BBA71B75FF9A76BF776709B28CA78;
// Org.BouncyCastle.Crypto.DataLengthException
struct DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC;
// Org.BouncyCastle.Crypto.Engines.DesEngine
struct DesEngine_t9AD2B250FCBA8652F674C4BBD78AA6C2C7530156;
// Org.BouncyCastle.Crypto.Digests.Dstu7564Digest
struct Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05;
// Org.BouncyCastle.Crypto.Macs.Dstu7564Mac
struct Dstu7564Mac_t8D657AE5566F3F7456E008A028228628340D7542;
// Org.BouncyCastle.Crypto.Engines.Dstu7624Engine
struct Dstu7624Engine_tE8D2E80377239DCFFF117DC4EB3E15E429A3261A;
// Org.BouncyCastle.Crypto.Macs.Dstu7624Mac
struct Dstu7624Mac_tFF79D84F1342BB1964F54B1D4420F883117DC179;
// Org.BouncyCastle.Crypto.Macs.GMac
struct GMac_tB4674C456AE5441355614DEE56E8FD5E2F1C4335;
// Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher
struct GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F;
// Org.BouncyCastle.Crypto.Modes.GcmBlockCipher
struct GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3;
// Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities
struct GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC;
// Org.BouncyCastle.Crypto.Macs.Gost28147Mac
struct Gost28147Mac_t7B6DC8F9E8BC75140EDC063151B2D407E266712E;
// Org.BouncyCastle.Crypto.Macs.HMac
struct HMac_t6F0768FC92486A4BB51A39C74FBAB8B4B8CFB607;
// Org.BouncyCastle.Crypto.IBlockCipher
struct IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997;
// Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding
struct IBlockCipherPadding_t5B2EB9D7A2BB11DD4C72B65E622CED29672E7D6B;
// Org.BouncyCastle.Crypto.IBufferedCipher
struct IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_tE4751F03244264E12A0669633A68076FD032E2CF;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// Org.BouncyCastle.Crypto.Modes.Gcm.IGcmExponentiator
struct IGcmExponentiator_tEDB2CF41858778F18EAD938A6589A762F43C776C;
// Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier
struct IGcmMultiplier_tAF775B12F6AF749A4932AFBD6899B0D54A00826B;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// Org.BouncyCastle.Utilities.IMemoable
struct IMemoable_t6C000683C46B891FF54A73DA7A2D54E1E2169615;
// Org.BouncyCastle.Crypto.Paddings.ISO7816d4Padding
struct ISO7816d4Padding_tD2A6A0862ACF21BBE348E4AAE59805BBE487DC50;
// Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac
struct ISO9797Alg3Mac_tAA4D43F48712FD037BB5532EA1EB616794B20854;
// Org.BouncyCastle.Crypto.InvalidCipherTextException
struct InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher
struct KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D;
// Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher
struct KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347;
// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC;
// Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher
struct MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// Org.BouncyCastle.Crypto.Modes.OcbBlockCipher
struct OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8;
// Org.BouncyCastle.Crypto.Modes.OfbBlockCipher
struct OfbBlockCipher_t72A403CDCDA517916A318565473D48F651DC4A4A;
// Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher
struct OpenPgpCfbBlockCipher_t26FDB232414CBB4030BD3AD43F7EFC2A9329CF6B;
// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV
struct ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1;
// Org.BouncyCastle.Crypto.Parameters.ParametersWithSBox
struct ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1;
// Org.BouncyCastle.Crypto.Macs.Poly1305
struct Poly1305_t2AB3E59D012311B29065EEBEA053843267EB748A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// Org.BouncyCastle.Crypto.Modes.SicBlockCipher
struct SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105;
// Org.BouncyCastle.Crypto.Macs.SipHash
struct SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A;
// Org.BouncyCastle.Crypto.Digests.SkeinEngine
struct SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB;
// Org.BouncyCastle.Crypto.Macs.SkeinMac
struct SkeinMac_tACA0D50E98487386B2B30E53119701B18FDC1A8E;
// Org.BouncyCastle.Crypto.Parameters.SkeinParameters
struct SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Org.BouncyCastle.Crypto.Modes.Gcm.Tables1kGcmExponentiator
struct Tables1kGcmExponentiator_t15B1305B08575DCBE165CF932CEB04DB570FAA1B;
// Org.BouncyCastle.Crypto.Modes.Gcm.Tables64kGcmMultiplier
struct Tables64kGcmMultiplier_tA2C58BD435F6D7B7BE6AC407A0650827AA5833AE;
// Org.BouncyCastle.Crypto.Modes.Gcm.Tables8kGcmMultiplier
struct Tables8kGcmMultiplier_tB07FBFB1B8DE3234CBD37D39FCE0E7E91AEEF90A;
// Org.BouncyCastle.Crypto.Engines.ThreefishEngine
struct ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C;
// Org.BouncyCastle.Crypto.Macs.VmpcMac
struct VmpcMac_t16974E2BD73719C7204F28641E8B32E8CD49FEC6;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Org.BouncyCastle.Crypto.Digests.SkeinEngine/UBI
struct UBI_t30B89363C0696B93C7B682B16D4EE222C270A552;
// Org.BouncyCastle.Crypto.Parameters.SkeinParameters/Builder
struct Builder_t3D2F2E6112A8B367D304B58F4E781E0DC33983B6;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Builder_t3D2F2E6112A8B367D304B58F4E781E0DC33983B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DesEngine_t9AD2B250FCBA8652F674C4BBD78AA6C2C7530156_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dstu7624Engine_tE8D2E80377239DCFFF117DC4EB3E15E429A3261A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBlockCipherPadding_t5B2EB9D7A2BB11DD4C72B65E622CED29672E7D6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMemoable_t6C000683C46B891FF54A73DA7A2D54E1E2169615_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISO7816d4Padding_tD2A6A0862ACF21BBE348E4AAE59805BBE487DC50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____2338F1330733829B7EA276F350452E34DC02E35AEA142145F1294F417A412FE5_32_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01E187759622701239321907D0B46741BA9B86F5;
IL2CPP_EXTERN_C String_t* _stringLiteral0C2C8987828E01D85FC122E11371CD17A9B27B40;
IL2CPP_EXTERN_C String_t* _stringLiteral1983E7A90C7F1B994609F90B8C541C307412F740;
IL2CPP_EXTERN_C String_t* _stringLiteral1A58DB7BFCB1182D82C8575955DE92285B1D9B49;
IL2CPP_EXTERN_C String_t* _stringLiteral2115E6A6B071E7C386063E044367F472747FD12B;
IL2CPP_EXTERN_C String_t* _stringLiteral2367BCDD7B214D5EEC78058C7E0F28C2DB18486F;
IL2CPP_EXTERN_C String_t* _stringLiteral248BF5CC4E65CCA322C6142014C84E32232A5525;
IL2CPP_EXTERN_C String_t* _stringLiteral283A7D32B5B4E6B494E6701B8AD8381563ED4FFD;
IL2CPP_EXTERN_C String_t* _stringLiteral2E8A844C3E2202C0C8A0B5D56D2645FAC07131A8;
IL2CPP_EXTERN_C String_t* _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2;
IL2CPP_EXTERN_C String_t* _stringLiteral353A6935FCF15C38C7BF3563764BB2295A273832;
IL2CPP_EXTERN_C String_t* _stringLiteral38D09B1907F51A21FA890AD1B24D91155B49D4DB;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral41A2189BC076CA51A8306F66C8964C4E63B2B3CE;
IL2CPP_EXTERN_C String_t* _stringLiteral48A6BEF31FBF27712A87AAD8E28D18B07F6E7724;
IL2CPP_EXTERN_C String_t* _stringLiteral4901277BD17A5B2F9FD51DCD98D6CE81842202C4;
IL2CPP_EXTERN_C String_t* _stringLiteral4AEFBB61F65FCA6B5F41F05AB7DEEECF9118783C;
IL2CPP_EXTERN_C String_t* _stringLiteral4BF2CE86BA69492C7DE55AB9B517CC2DAC4FB810;
IL2CPP_EXTERN_C String_t* _stringLiteral4C272B1013F6BCFD2376C951EF8457C19DC5E555;
IL2CPP_EXTERN_C String_t* _stringLiteral4EBDAE183BC30C2AD6BD85811A7DA978BDAB9809;
IL2CPP_EXTERN_C String_t* _stringLiteral508FADA7965A5CC9B9F3F205B9D7F61B002F4352;
IL2CPP_EXTERN_C String_t* _stringLiteral5127190258785C5AEA3518F6AB4CD59849A380C9;
IL2CPP_EXTERN_C String_t* _stringLiteral52538118793B81FB245EEED74CE92FD312BED2C4;
IL2CPP_EXTERN_C String_t* _stringLiteral593CBFE95E3FA15438E893EF8E8CBD31F861CDE1;
IL2CPP_EXTERN_C String_t* _stringLiteral5A31AC14113454FAB5A743783182DA009E141D3E;
IL2CPP_EXTERN_C String_t* _stringLiteral633B32425CF01CC2E1E97B0E9A89A8E20F2503E4;
IL2CPP_EXTERN_C String_t* _stringLiteral6348AE9AC0D51DA91EE3554B61F63EF74190CB52;
IL2CPP_EXTERN_C String_t* _stringLiteral65D1B0E1FA928C5674E15C89FEC7B4B01353ACBF;
IL2CPP_EXTERN_C String_t* _stringLiteral67B684FF757EC3D9F8FF6AC1E114C05BCB9D0E8E;
IL2CPP_EXTERN_C String_t* _stringLiteral682C0F55F26D0952232FB08AB9218BC9FE80C181;
IL2CPP_EXTERN_C String_t* _stringLiteral6A97AB369F86F4B2FA00721206E1CD3F3E97A1E5;
IL2CPP_EXTERN_C String_t* _stringLiteral6D60AC5770D4F760AEFAF7885FA604E7091BBEDE;
IL2CPP_EXTERN_C String_t* _stringLiteral6E28B77701E12A1794C995C45F1EF36494F5492C;
IL2CPP_EXTERN_C String_t* _stringLiteral7F9A983F97E640754D4FF0C422EC4417D6927478;
IL2CPP_EXTERN_C String_t* _stringLiteral7FFB3CD71BE9EF070986A4E7959BB3A9AD1551EC;
IL2CPP_EXTERN_C String_t* _stringLiteral8020C7D6696CB083F06538A14CF53AFC87D4339B;
IL2CPP_EXTERN_C String_t* _stringLiteral86676EF5625B07BB6A212B0248104BFAD8CDFD5C;
IL2CPP_EXTERN_C String_t* _stringLiteral885C1F522AFB0B733EF983628BB641707475502A;
IL2CPP_EXTERN_C String_t* _stringLiteral8A2FA226E0BD2F452D9FB468B577991FF60938CD;
IL2CPP_EXTERN_C String_t* _stringLiteral8E0BB1099A2BB7E26AB1115B17E7A4107597EBF1;
IL2CPP_EXTERN_C String_t* _stringLiteral8F03BAAAD1A2D95F1010A467F3B8DD7CA392CD05;
IL2CPP_EXTERN_C String_t* _stringLiteral8FE94193A3EF39943F898714AC9062F7EBD96279;
IL2CPP_EXTERN_C String_t* _stringLiteral9037918EF368FDB9869069C353AC1D0AA985BD83;
IL2CPP_EXTERN_C String_t* _stringLiteral9285BEB84CFC90BDC52DB62913B2A7EFFB48DF38;
IL2CPP_EXTERN_C String_t* _stringLiteral97A9A868349D6F48CDEEB77E1B607C7ECD80E72E;
IL2CPP_EXTERN_C String_t* _stringLiteralA36F4A18BBB08C35D630C9FC8DA48D74B347321F;
IL2CPP_EXTERN_C String_t* _stringLiteralA45007D7F3EEE3049CA245286566C5CA15FF403B;
IL2CPP_EXTERN_C String_t* _stringLiteralA60FCC00D6D4CA6783A659EEC3F2851AEA8D66AD;
IL2CPP_EXTERN_C String_t* _stringLiteralA8250B534396AB58BA9610ADE04FDD1310D4478D;
IL2CPP_EXTERN_C String_t* _stringLiteralAA69448F84737D723637778606E199D0B9E062A1;
IL2CPP_EXTERN_C String_t* _stringLiteralAEAC30D8C28806B51680D5DC521FC3C410F2D5B5;
IL2CPP_EXTERN_C String_t* _stringLiteralB2C8D3FBAAD06D3594B0F1E444B21F1F2C527617;
IL2CPP_EXTERN_C String_t* _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBC2647BD6DA802D3F62530E32EF626870E784F2C;
IL2CPP_EXTERN_C String_t* _stringLiteralBC8251D29BA8DB6132478DCBA316EB17DC929F67;
IL2CPP_EXTERN_C String_t* _stringLiteralC0AF24C062D41B2862B33243471041D1C8178B46;
IL2CPP_EXTERN_C String_t* _stringLiteralC0B4E2268F20A2A288F4E8477064136017351AF5;
IL2CPP_EXTERN_C String_t* _stringLiteralC1247379A9C42BAF4DAD87F9ABE2F0CB38AF22A2;
IL2CPP_EXTERN_C String_t* _stringLiteralC18D414929C4A2ACC69D7D2EF4A0C9D467BBFE2F;
IL2CPP_EXTERN_C String_t* _stringLiteralC19A67243F4A3B2010D2D94EAB2C299DEFFBC32F;
IL2CPP_EXTERN_C String_t* _stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13;
IL2CPP_EXTERN_C String_t* _stringLiteralC690C3E3484DF59A062AC0913B3AA0F9E608C757;
IL2CPP_EXTERN_C String_t* _stringLiteralC8395859B32B7B887C6F2ED68A0C1A5C2784CD17;
IL2CPP_EXTERN_C String_t* _stringLiteralCCB82F0F4DA064DD76DFEDE7D38B39C103AC2E57;
IL2CPP_EXTERN_C String_t* _stringLiteralD1635F743BCCF05EBCBF4308EDB05E287908D2E9;
IL2CPP_EXTERN_C String_t* _stringLiteralD51022872FB303A7DBC4B2E2230BB177C213C99C;
IL2CPP_EXTERN_C String_t* _stringLiteralD6EC569AA0ACFA41FB7FB87F2D80E4E7FE0F6A14;
IL2CPP_EXTERN_C String_t* _stringLiteralDB80EEF4A6BDCB6B1C755569BAB4BD8A610B18FC;
IL2CPP_EXTERN_C String_t* _stringLiteralDD3CC45459A96F58457572A63B4B9F9EFBD4DC7C;
IL2CPP_EXTERN_C String_t* _stringLiteralDF91F11D46E8807FE33EB79CAE11A89BB6018A3D;
IL2CPP_EXTERN_C String_t* _stringLiteralE34BE56CCF14C174933090C28103F2A946D7FE3B;
IL2CPP_EXTERN_C String_t* _stringLiteralE47CA5EE52BC88E7B37B1013341EDFB13A317690;
IL2CPP_EXTERN_C String_t* _stringLiteralE4C658D20BBC8937C0090DF472A2F217361E1529;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralEC57A1BC04132D54D01B5668540E7E9CA7A0A47C;
IL2CPP_EXTERN_C String_t* _stringLiteralECC1A0699405F92CE60EE43047E89512ABB064E6;
IL2CPP_EXTERN_C String_t* _stringLiteralED443665193280814467D04B48B265709B5BB7BB;
IL2CPP_EXTERN_C String_t* _stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C;
IL2CPP_EXTERN_C String_t* _stringLiteralF54C61EA654A453F853B81CE072DEC048FBB4991;
IL2CPP_EXTERN_C String_t* _stringLiteralF8E97A2EC91B9BC5BE9457E4364E5C15F95B7FDC;
IL2CPP_EXTERN_C String_t* _stringLiteralF8EAF3F5572F56F2CD6ABE50B3DD347232620A91;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFA1C93C4701E9DEBBB21F7804FB0D557305BF116;
IL2CPP_EXTERN_C String_t* _stringLiteralFAF787A17C0E33E26BD66D31E0EBF57A8F228A38;
IL2CPP_EXTERN_C const RuntimeMethod* CMac_BlockUpdate_m52794C259365CE8D832AC83D3CC56045FF3F3536_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CMac_Init_m020430AC871144F44ABCAC7C78CD6CE1A7D33CBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CMac__ctor_mA813D306C1D6B020ED09E8969849B451387C8982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CbcBlockCipherMac_BlockUpdate_mE1569AA1A95AEB46A0AC57DDFD4141E9064C8692_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CbcBlockCipherMac__ctor_m64B815C8E01DB3E534F99C93AA90E4D784167FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CfbBlockCipherMac_BlockUpdate_m472F97123B82BBE61A81CACF7378D4333A0FDA18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CfbBlockCipherMac__ctor_mFAAC83D5FA64B787452CE42AAAB7735C3E9B4715_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CipherStream_Seek_m99794B7B5D15D0643A80A15DE46334B82A90B526_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CipherStream_SetLength_mC906F81444BF640CECAB040E42A3E098B7931EF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CipherStream_get_Length_m82D132B1270AE2A5928B88E18BAAE1E048FEF575_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CipherStream_get_Position_mC0B11B86F1C918382B8CEA0892FE5798786664BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CipherStream_set_Position_m2B7FB08F0E58673439AEC3F603EC7A915A011AEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dstu7564Mac_BlockUpdate_m98AB7102A10FC8088D2D4F45A246A490EB828695_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dstu7564Mac_DoFinal_mEE4690EEADCA9460E3C27644B400B399CF6BD990_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dstu7564Mac_Init_mD6078606AD72CA687FE4436D5387A41638B566CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dstu7624Mac_BlockUpdate_mDA47FA81B2E7A2B27BF61A8B7FF7F4194850EFE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dstu7624Mac_DoFinal_mD9B63959081279BB1DAC56B5A31A784F83D84E4B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dstu7624Mac_Init_mB79083D2321D51A1AADAEE323FDDF57B70977BC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GMac_DoFinal_mC46DE9D1B3C54552A43265FE677A3B71318D8DD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GMac_Init_m08F7B68F975AFBBFC88C9BBF2BD4795684BFD73A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GOfbBlockCipher_ProcessBlock_mF94A5E757AE3B78FC7B0899E5DD9859870D599F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GOfbBlockCipher__ctor_m41728F9A6150D41A48DA87943290B294C58A0227_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Gost28147Mac_BlockUpdate_mEE869A6916D0BF21FA79E7352FF31AD9744B924E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Gost28147Mac_GenerateWorkingKey_m4062FC694B44A00F7EBA00EF49E2E0E80EA32B8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Gost28147Mac_Init_mCBCC9166490C1842C2757AFAC23485F1E00E5ADE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISO9797Alg3Mac_BlockUpdate_m16E4D4325D7855630651FB67EE47B59FB4FD3F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISO9797Alg3Mac_Init_m12A9A113FEC8B694BDACC9FAC8831246CDEFBB6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISO9797Alg3Mac__ctor_m36B14ED53C9C19F8FD2B303D44B2F4A8D9FD30A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KCcmBlockCipher_Init_m04E0D4833CEC3D87BCE2F981D63DC62EBF8D2B98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KCcmBlockCipher_ProcessAAD_m79FD33523E877DE08A1E4990E722A73FC05828F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KCcmBlockCipher_ProcessPacket_m344E885BC3D8DACAFD862BBB1FAE2F544BD324C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KCcmBlockCipher_setNb_m1691E94D49CC5EABA0F785F00CB19CC414DAC106_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KCtrBlockCipher_Init_mD2FFC0E9F1D559998BD98F71A577DB5F828EDCE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KCtrBlockCipher_ProcessBlock_m3510B9B3DF03C463C75EC814623432ACB6B1119C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KCtrBlockCipher_ProcessBytes_m079BC47B7944C6828B94289226A07878914FA8B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MacCFBBlockCipher_ProcessBlock_m513784A2508547799B9558EFC11A28525B70C222_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OcbBlockCipher_DoFinal_mF61E82DADC50ED931CB9DB096FE9A2001C213578_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OcbBlockCipher_Init_m4CCC51F169845704774A26A60D01A0FA7E335353_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OcbBlockCipher__ctor_mD95F4616B211A789244A178A2B5E48A0E35C5861_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OfbBlockCipher_ProcessBlock_mF03390EFB9295135EC5EE2CF9CB40920DF6E62C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenPgpCfbBlockCipher_DecryptBlock_mE57690EA4975784C8A038234186780E1C0153EF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OpenPgpCfbBlockCipher_EncryptBlock_mB03D14664C3EFCBDFCD5A9116BDA21B258FB7B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Poly1305_Init_mCAAD45A71ABFA50E23F7B99F4D2659B5C7C986FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Poly1305_SetKey_mF5F9D809C8EE221A3A3B0B2070C6E8C9137689FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Poly1305__ctor_m02FB171508E9AC9A7FA3483B238D274624F3348D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SicBlockCipher_Init_mE3F8D7CBDB4603738F3BE14E3B00CD9B9361E78A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SipHash_Init_m0DE654CF92F0A1CF6B82CD01DA1D0F531B4AF21A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkeinMac_Init_mA0D146C830F8412CC3AF683021CB93206040FB0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VmpcMac_BlockUpdate_m6EAB637B2E0E5772F6C1AF49488933A93FEFF35A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VmpcMac_Init_mE5318BAB03EF84D1C31EA3F2351F52A24EAAB9B0_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37;
struct UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Crypto.Parameters.AeadParameters
struct AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::associatedText
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___associatedText_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::nonce
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___nonce_1;
	// Org.BouncyCastle.Crypto.Parameters.KeyParameter Org.BouncyCastle.Crypto.Parameters.AeadParameters::key
	KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* ___key_2;
	// System.Int32 Org.BouncyCastle.Crypto.Parameters.AeadParameters::macSize
	int32_t ___macSize_3;
};

// Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmExponentiator
struct BasicGcmExponentiator_t889C88199B1E25F4C5610EFD2AB4144F96F89832  : public RuntimeObject
{
	// System.UInt32[] Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmExponentiator::x
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x_0;
};

// Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmMultiplier
struct BasicGcmMultiplier_t70121FD66BA3790D9F0CD78FA12FD2676920451E  : public RuntimeObject
{
	// System.UInt32[] Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmMultiplier::H
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___H_0;
};

// Org.BouncyCastle.Crypto.Macs.CMac
struct CMac_tEE0527411A50849DB625E0C83E46E0C4A809DFB1  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.CMac::ZEROES
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ZEROES_2;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.CMac::mac
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mac_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.CMac::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_4;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.CMac::bufOff
	int32_t ___bufOff_5;
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Macs.CMac::cipher
	RuntimeObject* ___cipher_6;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.CMac::macSize
	int32_t ___macSize_7;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.CMac::L
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___L_8;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.CMac::Lu
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Lu_9;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.CMac::Lu2
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Lu2_10;
};

// Org.BouncyCastle.Crypto.Modes.CbcBlockCipher
struct CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::IV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IV_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::cbcV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cbcV_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::cbcNextV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cbcNextV_2;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::blockSize
	int32_t ___blockSize_3;
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::cipher
	RuntimeObject* ___cipher_4;
	// System.Boolean Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::encrypting
	bool ___encrypting_5;
};

// Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac
struct CbcBlockCipherMac_tB98ED50E26EFEEBA2A312F50D356D6C3C473777D  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_0;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::bufOff
	int32_t ___bufOff_1;
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::cipher
	RuntimeObject* ___cipher_2;
	// Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::padding
	RuntimeObject* ___padding_3;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::macSize
	int32_t ___macSize_4;
};

// Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac
struct CfbBlockCipherMac_t00336B3CBEBF99EE3F5B458636F3DE463E26B543  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::mac
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mac_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::Buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Buffer_1;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::bufOff
	int32_t ___bufOff_2;
	// Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::cipher
	MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* ___cipher_3;
	// Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::padding
	RuntimeObject* ___padding_4;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::macSize
	int32_t ___macSize_5;
};

// Org.BouncyCastle.Crypto.Engines.DesEngine
struct DesEngine_t9AD2B250FCBA8652F674C4BBD78AA6C2C7530156  : public RuntimeObject
{
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.DesEngine::workingKey
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___workingKey_1;
};

// Org.BouncyCastle.Crypto.Digests.Dstu7564Digest
struct Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05  : public RuntimeObject
{
	// System.Int32 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::hashSize
	int32_t ___hashSize_4;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::blockSize
	int32_t ___blockSize_5;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::columns
	int32_t ___columns_6;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::rounds
	int32_t ___rounds_7;
	// System.UInt64[] Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::state
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___state_8;
	// System.UInt64[] Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::tempState1
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___tempState1_9;
	// System.UInt64[] Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::tempState2
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___tempState2_10;
	// System.UInt64 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::inputBlocks
	uint64_t ___inputBlocks_11;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::bufOff
	int32_t ___bufOff_12;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_13;
};

// Org.BouncyCastle.Crypto.Macs.Dstu7564Mac
struct Dstu7564Mac_t8D657AE5566F3F7456E008A028228628340D7542  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.Digests.Dstu7564Digest Org.BouncyCastle.Crypto.Macs.Dstu7564Mac::engine
	Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* ___engine_0;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.Dstu7564Mac::macSize
	int32_t ___macSize_1;
	// System.UInt64 Org.BouncyCastle.Crypto.Macs.Dstu7564Mac::inputLength
	uint64_t ___inputLength_2;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.Dstu7564Mac::paddedKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___paddedKey_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.Dstu7564Mac::invertedKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___invertedKey_4;
};

// Org.BouncyCastle.Crypto.Engines.Dstu7624Engine
struct Dstu7624Engine_tE8D2E80377239DCFFF117DC4EB3E15E429A3261A  : public RuntimeObject
{
	// System.UInt64[] Org.BouncyCastle.Crypto.Engines.Dstu7624Engine::internalState
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___internalState_0;
	// System.UInt64[] Org.BouncyCastle.Crypto.Engines.Dstu7624Engine::workingKey
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___workingKey_1;
	// System.UInt64[][] Org.BouncyCastle.Crypto.Engines.Dstu7624Engine::roundKeys
	UInt64U5BU5DU5BU5D_t2750F026E78BF67F7933578818E40C94896B0C11* ___roundKeys_2;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.Dstu7624Engine::wordsInBlock
	int32_t ___wordsInBlock_3;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.Dstu7624Engine::wordsInKey
	int32_t ___wordsInKey_4;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.Dstu7624Engine::roundsAmount
	int32_t ___roundsAmount_8;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.Dstu7624Engine::forEncryption
	bool ___forEncryption_9;
};

// Org.BouncyCastle.Crypto.Macs.Dstu7624Mac
struct Dstu7624Mac_tFF79D84F1342BB1964F54B1D4420F883117DC179  : public RuntimeObject
{
	// System.Int32 Org.BouncyCastle.Crypto.Macs.Dstu7624Mac::macSize
	int32_t ___macSize_0;
	// Org.BouncyCastle.Crypto.Engines.Dstu7624Engine Org.BouncyCastle.Crypto.Macs.Dstu7624Mac::engine
	Dstu7624Engine_tE8D2E80377239DCFFF117DC4EB3E15E429A3261A* ___engine_1;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.Dstu7624Mac::blockSize
	int32_t ___blockSize_2;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.Dstu7624Mac::c
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___c_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.Dstu7624Mac::cTemp
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cTemp_4;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.Dstu7624Mac::kDelta
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___kDelta_5;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.Dstu7624Mac::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.Dstu7624Mac::bufOff
	int32_t ___bufOff_7;
};

// Org.BouncyCastle.Crypto.Macs.GMac
struct GMac_tB4674C456AE5441355614DEE56E8FD5E2F1C4335  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.Modes.GcmBlockCipher Org.BouncyCastle.Crypto.Macs.GMac::cipher
	GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* ___cipher_0;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.GMac::macSizeBits
	int32_t ___macSizeBits_1;
};

// Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher
struct GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::IV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IV_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::ofbV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ofbV_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::ofbOutV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ofbOutV_2;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::blockSize
	int32_t ___blockSize_3;
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::cipher
	RuntimeObject* ___cipher_4;
	// System.Boolean Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::firstStep
	bool ___firstStep_5;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::N3
	int32_t ___N3_6;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::N4
	int32_t ___N4_7;
};

// Org.BouncyCastle.Crypto.Modes.GcmBlockCipher
struct GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::cipher
	RuntimeObject* ___cipher_1;
	// Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::multiplier
	RuntimeObject* ___multiplier_2;
	// Org.BouncyCastle.Crypto.Modes.Gcm.IGcmExponentiator Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::exp
	RuntimeObject* ___exp_3;
	// System.Boolean Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::forEncryption
	bool ___forEncryption_4;
	// System.Boolean Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::initialised
	bool ___initialised_5;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::macSize
	int32_t ___macSize_6;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::lastKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lastKey_7;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::nonce
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___nonce_8;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::initialAssociatedText
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___initialAssociatedText_9;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::H
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___H_10;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::J0
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___J0_11;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::bufBlock
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bufBlock_12;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::macBlock
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___macBlock_13;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::S
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S_14;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::S_at
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S_at_15;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::S_atPre
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S_atPre_16;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::counter
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___counter_17;
	// System.UInt32 Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::blocksRemaining
	uint32_t ___blocksRemaining_18;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::bufOff
	int32_t ___bufOff_19;
	// System.UInt64 Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::totalLength
	uint64_t ___totalLength_20;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::atBlock
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___atBlock_21;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::atBlockPos
	int32_t ___atBlockPos_22;
	// System.UInt64 Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::atLength
	uint64_t ___atLength_23;
	// System.UInt64 Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::atLengthPre
	uint64_t ___atLengthPre_24;
};

// Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities
struct GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC  : public RuntimeObject
{
};

// Org.BouncyCastle.Crypto.Macs.Gost28147Mac
struct Gost28147Mac_t7B6DC8F9E8BC75140EDC063151B2D407E266712E  : public RuntimeObject
{
	// System.Int32 Org.BouncyCastle.Crypto.Macs.Gost28147Mac::bufOff
	int32_t ___bufOff_2;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.Gost28147Mac::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.Gost28147Mac::mac
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mac_4;
	// System.Boolean Org.BouncyCastle.Crypto.Macs.Gost28147Mac::firstStep
	bool ___firstStep_5;
	// System.Int32[] Org.BouncyCastle.Crypto.Macs.Gost28147Mac::workingKey
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___workingKey_6;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.Gost28147Mac::macIV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___macIV_7;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.Gost28147Mac::S
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S_8;
};

// Org.BouncyCastle.Crypto.Macs.HMac
struct HMac_t6F0768FC92486A4BB51A39C74FBAB8B4B8CFB607  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Macs.HMac::digest
	RuntimeObject* ___digest_2;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.HMac::digestSize
	int32_t ___digestSize_3;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.HMac::blockLength
	int32_t ___blockLength_4;
	// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Macs.HMac::ipadState
	RuntimeObject* ___ipadState_5;
	// Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Crypto.Macs.HMac::opadState
	RuntimeObject* ___opadState_6;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.HMac::inputPad
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inputPad_7;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.HMac::outputBuf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___outputBuf_8;
};

// Org.BouncyCastle.Crypto.Paddings.ISO7816d4Padding
struct ISO7816d4Padding_tD2A6A0862ACF21BBE348E4AAE59805BBE487DC50  : public RuntimeObject
{
};

// Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac
struct ISO9797Alg3Mac_tAA4D43F48712FD037BB5532EA1EB616794B20854  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::mac
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mac_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_1;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::bufOff
	int32_t ___bufOff_2;
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::cipher
	RuntimeObject* ___cipher_3;
	// Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::padding
	RuntimeObject* ___padding_4;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::macSize
	int32_t ___macSize_5;
	// Org.BouncyCastle.Crypto.Parameters.KeyParameter Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::lastKey2
	KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* ___lastKey2_6;
	// Org.BouncyCastle.Crypto.Parameters.KeyParameter Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::lastKey3
	KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* ___lastKey3_7;
};

// Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher
struct KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::engine
	RuntimeObject* ___engine_4;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::macSize
	int32_t ___macSize_5;
	// System.Boolean Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::forEncryption
	bool ___forEncryption_6;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::initialAssociatedText
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___initialAssociatedText_7;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::mac
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mac_8;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::macBlock
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___macBlock_9;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::nonce
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___nonce_10;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::G1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___G1_11;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_12;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::s
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_13;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::counter
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___counter_14;
	// System.IO.MemoryStream Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::associatedText
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___associatedText_15;
	// System.IO.MemoryStream Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::data
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ___data_16;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::Nb_
	int32_t ___Nb__17;
};

// Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher
struct KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::IV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IV_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::ofbV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ofbV_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::ofbOutV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ofbOutV_2;
	// System.Boolean Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::initialised
	bool ___initialised_3;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::byteCount
	int32_t ___byteCount_4;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::blockSize
	int32_t ___blockSize_5;
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::cipher
	RuntimeObject* ___cipher_6;
};

// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KeyParameter::key
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key_0;
};

// Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher
struct MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::IV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IV_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::cfbV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cfbV_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::cfbOutV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cfbOutV_2;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::blockSize
	int32_t ___blockSize_3;
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::cipher
	RuntimeObject* ___cipher_4;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// Org.BouncyCastle.Crypto.Modes.OcbBlockCipher
struct OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::hashCipher
	RuntimeObject* ___hashCipher_1;
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::mainCipher
	RuntimeObject* ___mainCipher_2;
	// System.Boolean Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::forEncryption
	bool ___forEncryption_3;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::macSize
	int32_t ___macSize_4;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::initialAssociatedText
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___initialAssociatedText_5;
	// System.Collections.IList Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::L
	RuntimeObject* ___L_6;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::L_Asterisk
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___L_Asterisk_7;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::L_Dollar
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___L_Dollar_8;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::KtopInput
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___KtopInput_9;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Stretch
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Stretch_10;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::OffsetMAIN_0
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___OffsetMAIN_0_11;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::hashBlock
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___hashBlock_12;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::mainBlock
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mainBlock_13;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::hashBlockPos
	int32_t ___hashBlockPos_14;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::mainBlockPos
	int32_t ___mainBlockPos_15;
	// System.Int64 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::hashBlockCount
	int64_t ___hashBlockCount_16;
	// System.Int64 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::mainBlockCount
	int64_t ___mainBlockCount_17;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::OffsetHASH
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___OffsetHASH_18;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Sum
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Sum_19;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::OffsetMAIN
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___OffsetMAIN_20;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Checksum
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Checksum_21;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::macBlock
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___macBlock_22;
};

// Org.BouncyCastle.Crypto.Modes.OfbBlockCipher
struct OfbBlockCipher_t72A403CDCDA517916A318565473D48F651DC4A4A  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OfbBlockCipher::IV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IV_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OfbBlockCipher::ofbV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ofbV_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OfbBlockCipher::ofbOutV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ofbOutV_2;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.OfbBlockCipher::blockSize
	int32_t ___blockSize_3;
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.OfbBlockCipher::cipher
	RuntimeObject* ___cipher_4;
};

// Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher
struct OpenPgpCfbBlockCipher_t26FDB232414CBB4030BD3AD43F7EFC2A9329CF6B  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::IV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IV_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::FR
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FR_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::FRE
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FRE_2;
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::cipher
	RuntimeObject* ___cipher_3;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::blockSize
	int32_t ___blockSize_4;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::count
	int32_t ___count_5;
	// System.Boolean Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::forEncryption
	bool ___forEncryption_6;
};

// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV
struct ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::parameters
	RuntimeObject* ___parameters_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::iv
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv_1;
};

// Org.BouncyCastle.Crypto.Parameters.ParametersWithSBox
struct ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithSBox::parameters
	RuntimeObject* ___parameters_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ParametersWithSBox::sBox
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sBox_1;
};

// Org.BouncyCastle.Crypto.Macs.Poly1305
struct Poly1305_t2AB3E59D012311B29065EEBEA053843267EB748A  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Macs.Poly1305::cipher
	RuntimeObject* ___cipher_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.Poly1305::singleByte
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___singleByte_2;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::r0
	uint32_t ___r0_3;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::r1
	uint32_t ___r1_4;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::r2
	uint32_t ___r2_5;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::r3
	uint32_t ___r3_6;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::r4
	uint32_t ___r4_7;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::s1
	uint32_t ___s1_8;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::s2
	uint32_t ___s2_9;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::s3
	uint32_t ___s3_10;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::s4
	uint32_t ___s4_11;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::k0
	uint32_t ___k0_12;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::k1
	uint32_t ___k1_13;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::k2
	uint32_t ___k2_14;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::k3
	uint32_t ___k3_15;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.Poly1305::currentBlock
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___currentBlock_16;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.Poly1305::currentBlockOffset
	int32_t ___currentBlockOffset_17;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::h0
	uint32_t ___h0_18;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::h1
	uint32_t ___h1_19;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::h2
	uint32_t ___h2_20;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::h3
	uint32_t ___h3_21;
	// System.UInt32 Org.BouncyCastle.Crypto.Macs.Poly1305::h4
	uint32_t ___h4_22;
};

// Org.BouncyCastle.Crypto.Modes.SicBlockCipher
struct SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.SicBlockCipher::cipher
	RuntimeObject* ___cipher_0;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.SicBlockCipher::blockSize
	int32_t ___blockSize_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.SicBlockCipher::counter
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___counter_2;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.SicBlockCipher::counterOut
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___counterOut_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.SicBlockCipher::IV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___IV_4;
};

// Org.BouncyCastle.Crypto.Macs.SipHash
struct SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A  : public RuntimeObject
{
	// System.Int32 Org.BouncyCastle.Crypto.Macs.SipHash::c
	int32_t ___c_0;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.SipHash::d
	int32_t ___d_1;
	// System.Int64 Org.BouncyCastle.Crypto.Macs.SipHash::k0
	int64_t ___k0_2;
	// System.Int64 Org.BouncyCastle.Crypto.Macs.SipHash::k1
	int64_t ___k1_3;
	// System.Int64 Org.BouncyCastle.Crypto.Macs.SipHash::v0
	int64_t ___v0_4;
	// System.Int64 Org.BouncyCastle.Crypto.Macs.SipHash::v1
	int64_t ___v1_5;
	// System.Int64 Org.BouncyCastle.Crypto.Macs.SipHash::v2
	int64_t ___v2_6;
	// System.Int64 Org.BouncyCastle.Crypto.Macs.SipHash::v3
	int64_t ___v3_7;
	// System.Int64 Org.BouncyCastle.Crypto.Macs.SipHash::m
	int64_t ___m_8;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.SipHash::wordPos
	int32_t ___wordPos_9;
	// System.Int32 Org.BouncyCastle.Crypto.Macs.SipHash::wordCount
	int32_t ___wordCount_10;
};

// Org.BouncyCastle.Crypto.Digests.SkeinEngine
struct SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.Engines.ThreefishEngine Org.BouncyCastle.Crypto.Digests.SkeinEngine::threefish
	ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C* ___threefish_8;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.SkeinEngine::outputSizeBytes
	int32_t ___outputSizeBytes_9;
	// System.UInt64[] Org.BouncyCastle.Crypto.Digests.SkeinEngine::chain
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___chain_10;
	// System.UInt64[] Org.BouncyCastle.Crypto.Digests.SkeinEngine::initialState
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___initialState_11;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.SkeinEngine::key
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key_12;
	// Org.BouncyCastle.Crypto.Digests.SkeinEngine/Parameter[] Org.BouncyCastle.Crypto.Digests.SkeinEngine::preMessageParameters
	ParameterU5BU5D_t63C04172EA11C424371D4CA4374B577B8E6695AF* ___preMessageParameters_13;
	// Org.BouncyCastle.Crypto.Digests.SkeinEngine/Parameter[] Org.BouncyCastle.Crypto.Digests.SkeinEngine::postMessageParameters
	ParameterU5BU5D_t63C04172EA11C424371D4CA4374B577B8E6695AF* ___postMessageParameters_14;
	// Org.BouncyCastle.Crypto.Digests.SkeinEngine/UBI Org.BouncyCastle.Crypto.Digests.SkeinEngine::ubi
	UBI_t30B89363C0696B93C7B682B16D4EE222C270A552* ___ubi_15;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.SkeinEngine::singleByte
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___singleByte_16;
};

// Org.BouncyCastle.Crypto.Macs.SkeinMac
struct SkeinMac_tACA0D50E98487386B2B30E53119701B18FDC1A8E  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.Digests.SkeinEngine Org.BouncyCastle.Crypto.Macs.SkeinMac::engine
	SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* ___engine_3;
};

// Org.BouncyCastle.Crypto.Parameters.SkeinParameters
struct SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8  : public RuntimeObject
{
	// System.Collections.IDictionary Org.BouncyCastle.Crypto.Parameters.SkeinParameters::parameters
	RuntimeObject* ___parameters_8;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// Org.BouncyCastle.Crypto.Modes.Gcm.Tables1kGcmExponentiator
struct Tables1kGcmExponentiator_t15B1305B08575DCBE165CF932CEB04DB570FAA1B  : public RuntimeObject
{
	// System.Collections.IList Org.BouncyCastle.Crypto.Modes.Gcm.Tables1kGcmExponentiator::lookupPowX2
	RuntimeObject* ___lookupPowX2_0;
};

// Org.BouncyCastle.Crypto.Modes.Gcm.Tables64kGcmMultiplier
struct Tables64kGcmMultiplier_tA2C58BD435F6D7B7BE6AC407A0650827AA5833AE  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.Gcm.Tables64kGcmMultiplier::H
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___H_0;
	// System.UInt32[][][] Org.BouncyCastle.Crypto.Modes.Gcm.Tables64kGcmMultiplier::M
	UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* ___M_1;
};

// Org.BouncyCastle.Crypto.Modes.Gcm.Tables8kGcmMultiplier
struct Tables8kGcmMultiplier_tB07FBFB1B8DE3234CBD37D39FCE0E7E91AEEF90A  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Modes.Gcm.Tables8kGcmMultiplier::H
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___H_0;
	// System.UInt32[][][] Org.BouncyCastle.Crypto.Modes.Gcm.Tables8kGcmMultiplier::M
	UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* ___M_1;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Org.BouncyCastle.Crypto.Macs.VmpcMac
struct VmpcMac_t16974E2BD73719C7204F28641E8B32E8CD49FEC6  : public RuntimeObject
{
	// System.Byte Org.BouncyCastle.Crypto.Macs.VmpcMac::g
	uint8_t ___g_0;
	// System.Byte Org.BouncyCastle.Crypto.Macs.VmpcMac::n
	uint8_t ___n_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.VmpcMac::P
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___P_2;
	// System.Byte Org.BouncyCastle.Crypto.Macs.VmpcMac::s
	uint8_t ___s_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.VmpcMac::T
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___T_4;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.VmpcMac::workingIV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___workingIV_5;
	// System.Byte[] Org.BouncyCastle.Crypto.Macs.VmpcMac::workingKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___workingKey_6;
	// System.Byte Org.BouncyCastle.Crypto.Macs.VmpcMac::x1
	uint8_t ___x1_7;
	// System.Byte Org.BouncyCastle.Crypto.Macs.VmpcMac::x2
	uint8_t ___x2_8;
	// System.Byte Org.BouncyCastle.Crypto.Macs.VmpcMac::x3
	uint8_t ___x3_9;
	// System.Byte Org.BouncyCastle.Crypto.Macs.VmpcMac::x4
	uint8_t ___x4_10;
};

// Org.BouncyCastle.Crypto.Parameters.SkeinParameters/Builder
struct Builder_t3D2F2E6112A8B367D304B58F4E781E0DC33983B6  : public RuntimeObject
{
	// System.Collections.IDictionary Org.BouncyCastle.Crypto.Parameters.SkeinParameters/Builder::parameters
	RuntimeObject* ___parameters_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Org.BouncyCastle.Crypto.IO.CipherStream
struct CipherStream_t6FB015ADC43BBA71B75FF9A76BF776709B28CA78  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.IO.Stream Org.BouncyCastle.Crypto.IO.CipherStream::stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_4;
	// Org.BouncyCastle.Crypto.IBufferedCipher Org.BouncyCastle.Crypto.IO.CipherStream::inCipher
	RuntimeObject* ___inCipher_5;
	// Org.BouncyCastle.Crypto.IBufferedCipher Org.BouncyCastle.Crypto.IO.CipherStream::outCipher
	RuntimeObject* ___outCipher_6;
	// System.Byte[] Org.BouncyCastle.Crypto.IO.CipherStream::mInBuf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mInBuf_7;
	// System.Int32 Org.BouncyCastle.Crypto.IO.CipherStream::mInPos
	int32_t ___mInPos_8;
	// System.Boolean Org.BouncyCastle.Crypto.IO.CipherStream::inStreamEnded
	bool ___inStreamEnded_9;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// Org.BouncyCastle.Crypto.CryptoException
struct CryptoException_t4AD3626BE1D22C083AB2877DC9E63B19B51F1D26  : public Exception_t
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// Org.BouncyCastle.Crypto.DataLengthException
struct DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC  : public CryptoException_t4AD3626BE1D22C083AB2877DC9E63B19B51F1D26
{
};

// Org.BouncyCastle.Crypto.InvalidCipherTextException
struct InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB  : public CryptoException_t4AD3626BE1D22C083AB2877DC9E63B19B51F1D26
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// Org.BouncyCastle.Crypto.Parameters.AeadParameters

// Org.BouncyCastle.Crypto.Parameters.AeadParameters

// Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmExponentiator

// Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmExponentiator

// Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmMultiplier

// Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmMultiplier

// Org.BouncyCastle.Crypto.Macs.CMac

// Org.BouncyCastle.Crypto.Macs.CMac

// Org.BouncyCastle.Crypto.Modes.CbcBlockCipher

// Org.BouncyCastle.Crypto.Modes.CbcBlockCipher

// Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac

// Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac

// Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac

// Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac

// Org.BouncyCastle.Crypto.Engines.DesEngine
struct DesEngine_t9AD2B250FCBA8652F674C4BBD78AA6C2C7530156_StaticFields
{
	// System.Int16[] Org.BouncyCastle.Crypto.Engines.DesEngine::bytebit
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___bytebit_2;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.DesEngine::bigbyte
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bigbyte_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.DesEngine::pc1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pc1_4;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.DesEngine::totrot
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___totrot_5;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.DesEngine::pc2
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___pc2_6;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.DesEngine::SP1
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___SP1_7;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.DesEngine::SP2
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___SP2_8;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.DesEngine::SP3
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___SP3_9;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.DesEngine::SP4
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___SP4_10;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.DesEngine::SP5
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___SP5_11;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.DesEngine::SP6
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___SP6_12;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.DesEngine::SP7
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___SP7_13;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.DesEngine::SP8
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___SP8_14;
};

// Org.BouncyCastle.Crypto.Engines.DesEngine

// Org.BouncyCastle.Crypto.Digests.Dstu7564Digest
struct Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_StaticFields
{
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::S0
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S0_14;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::S1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S1_15;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::S2
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S2_16;
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::S3
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S3_17;
};

// Org.BouncyCastle.Crypto.Digests.Dstu7564Digest

// Org.BouncyCastle.Crypto.Macs.Dstu7564Mac

// Org.BouncyCastle.Crypto.Macs.Dstu7564Mac

// Org.BouncyCastle.Crypto.Engines.Dstu7624Engine
struct Dstu7624Engine_tE8D2E80377239DCFFF117DC4EB3E15E429A3261A_StaticFields
{
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.Dstu7624Engine::S0
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S0_12;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.Dstu7624Engine::S1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S1_13;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.Dstu7624Engine::S2
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S2_14;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.Dstu7624Engine::S3
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___S3_15;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.Dstu7624Engine::T0
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___T0_16;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.Dstu7624Engine::T1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___T1_17;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.Dstu7624Engine::T2
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___T2_18;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.Dstu7624Engine::T3
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___T3_19;
};

// Org.BouncyCastle.Crypto.Engines.Dstu7624Engine

// Org.BouncyCastle.Crypto.Macs.Dstu7624Mac

// Org.BouncyCastle.Crypto.Macs.Dstu7624Mac

// Org.BouncyCastle.Crypto.Macs.GMac

// Org.BouncyCastle.Crypto.Macs.GMac

// Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher

// Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher

// Org.BouncyCastle.Crypto.Modes.GcmBlockCipher

// Org.BouncyCastle.Crypto.Modes.GcmBlockCipher

// Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities
struct GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_StaticFields
{
	// System.UInt32[] Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::LOOKUP
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___LOOKUP_2;
};

// Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities

// Org.BouncyCastle.Crypto.Macs.Gost28147Mac

// Org.BouncyCastle.Crypto.Macs.Gost28147Mac

// Org.BouncyCastle.Crypto.Macs.HMac

// Org.BouncyCastle.Crypto.Macs.HMac

// Org.BouncyCastle.Crypto.Paddings.ISO7816d4Padding

// Org.BouncyCastle.Crypto.Paddings.ISO7816d4Padding

// Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac

// Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac

// Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher
struct KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_StaticFields
{
	// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::BYTES_IN_INT
	int32_t ___BYTES_IN_INT_0;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::BITS_IN_BYTE
	int32_t ___BITS_IN_BYTE_1;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::MAX_MAC_BIT_LENGTH
	int32_t ___MAX_MAC_BIT_LENGTH_2;
	// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::MIN_MAC_BIT_LENGTH
	int32_t ___MIN_MAC_BIT_LENGTH_3;
};

// Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher

// Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher

// Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher

// Org.BouncyCastle.Crypto.Parameters.KeyParameter

// Org.BouncyCastle.Crypto.Parameters.KeyParameter

// Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher

// Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher

// Org.BouncyCastle.Crypto.Modes.OcbBlockCipher

// Org.BouncyCastle.Crypto.Modes.OcbBlockCipher

// Org.BouncyCastle.Crypto.Modes.OfbBlockCipher

// Org.BouncyCastle.Crypto.Modes.OfbBlockCipher

// Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher

// Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher

// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV

// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV

// Org.BouncyCastle.Crypto.Parameters.ParametersWithSBox

// Org.BouncyCastle.Crypto.Parameters.ParametersWithSBox

// Org.BouncyCastle.Crypto.Macs.Poly1305

// Org.BouncyCastle.Crypto.Macs.Poly1305

// Org.BouncyCastle.Crypto.Modes.SicBlockCipher

// Org.BouncyCastle.Crypto.Modes.SicBlockCipher

// Org.BouncyCastle.Crypto.Macs.SipHash

// Org.BouncyCastle.Crypto.Macs.SipHash

// Org.BouncyCastle.Crypto.Digests.SkeinEngine
struct SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB_StaticFields
{
	// System.Collections.IDictionary Org.BouncyCastle.Crypto.Digests.SkeinEngine::INITIAL_STATES
	RuntimeObject* ___INITIAL_STATES_7;
};

// Org.BouncyCastle.Crypto.Digests.SkeinEngine

// Org.BouncyCastle.Crypto.Macs.SkeinMac

// Org.BouncyCastle.Crypto.Macs.SkeinMac

// Org.BouncyCastle.Crypto.Parameters.SkeinParameters

// Org.BouncyCastle.Crypto.Parameters.SkeinParameters

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// Org.BouncyCastle.Crypto.Modes.Gcm.Tables1kGcmExponentiator

// Org.BouncyCastle.Crypto.Modes.Gcm.Tables1kGcmExponentiator

// Org.BouncyCastle.Crypto.Modes.Gcm.Tables64kGcmMultiplier

// Org.BouncyCastle.Crypto.Modes.Gcm.Tables64kGcmMultiplier

// Org.BouncyCastle.Crypto.Modes.Gcm.Tables8kGcmMultiplier

// Org.BouncyCastle.Crypto.Modes.Gcm.Tables8kGcmMultiplier

// Org.BouncyCastle.Crypto.Macs.VmpcMac

// Org.BouncyCastle.Crypto.Macs.VmpcMac

// Org.BouncyCastle.Crypto.Parameters.SkeinParameters/Builder

// Org.BouncyCastle.Crypto.Parameters.SkeinParameters/Builder

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// Org.BouncyCastle.Crypto.IO.CipherStream

// Org.BouncyCastle.Crypto.IO.CipherStream

// System.IO.MemoryStream

// System.IO.MemoryStream

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// System.ArgumentException

// System.ArgumentException

// Org.BouncyCastle.Crypto.DataLengthException

// Org.BouncyCastle.Crypto.DataLengthException

// Org.BouncyCastle.Crypto.InvalidCipherTextException

// Org.BouncyCastle.Crypto.InvalidCipherTextException

// System.InvalidOperationException

// System.InvalidOperationException

// System.NotSupportedException

// System.NotSupportedException

// System.ArgumentNullException

// System.ArgumentNullException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[][]
struct UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6  : public RuntimeArray
{
	ALIGN_FIELD (8) UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* m_Items[1];

	inline UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.UInt32[][][]
struct UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37  : public RuntimeArray
{
	ALIGN_FIELD (8) UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* m_Items[1];

	inline UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::GetIV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7 (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GOfbBlockCipher_Reset_m2231BC960D8CE99D9D179CB25E5593102EEF209B (GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.DataLengthException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2 (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::bytesToint(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GOfbBlockCipher_bytesToint_m132EB4DCD140F572F15B3EAA227BE14184F1B06C (GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inBytes, int32_t ___1_inOff, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::intTobytes(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GOfbBlockCipher_intTobytes_m8DB65F009CD71CBF3B1D5C1A27C75326E1FDEADF (GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F* __this, int32_t ___0_num, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_outBytes, int32_t ___2_outOff, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher__ctor_mADC6A0960D163766B3DBB59C900AAA3F8B473472 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, RuntimeObject* ___0_engine, int32_t ___1_Nb, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::setNb(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_setNb_m1691E94D49CC5EABA0F785F00CB19CC414DAC106 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, int32_t ___0_Nb, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::intToBytes(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_intToBytes_m16AC65329A63E3BDCB6643C4A0601D00FFD06A2D (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, int32_t ___0_num, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_outBytes, int32_t ___2_outOff, const RuntimeMethod* method) ;
// System.Byte Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::getFlag(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t KCcmBlockCipher_getFlag_mE35B88807B9FF2999EB5E7BD4B4C62BFDFDD888E (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, bool ___0_authTextPresents, int32_t ___1_macSize, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Check::DataLength(System.Byte[],System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Check_DataLength_m4BEA4E45985CDB8967A7C3C71799B9036DDCC991 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buf, int32_t ___1_off, int32_t ___2_len, String_t* ___3_msg, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Check::OutputLength(System.Byte[],System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Check_OutputLength_mFBD480CE544E8B2C4EFAD3A12D1E105DC36FFA68 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buf, int32_t ___1_off, int32_t ___2_len, String_t* ___3_msg, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::ProcessAAD(System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_ProcessAAD_m79FD33523E877DE08A1E4990E722A73FC05828F0 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_assocText, int32_t ___1_assocOff, int32_t ___2_assocLen, int32_t ___3_dataLen, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Check::DataLength(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Check_DataLength_m2F2550C28CBC7D7B6045D7E5068AAC8E233713C4 (bool ___0_condition, String_t* ___1_msg, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::CalculateMac(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_CalculateMac_mA4118A7BC12FE3E8A25246B06D3ED33DE020218E (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_authText, int32_t ___1_authOff, int32_t ___2_len, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_ProcessBlock_m249BA206E27B6B453359C3AF0CB88EC1C0FB88C0 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_len, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_output, int32_t ___4_outOff, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Utilities.Arrays::ConstantTimeAreEqual(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_ConstantTimeAreEqual_m5AF040D6BA657E1B8D8CB8CB68340FB2D86203C2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_a, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_b, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.InvalidCipherTextException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6 (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::ProcessPacket(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KCcmBlockCipher_ProcessPacket_m344E885BC3D8DACAFD862BBB1FAE2F544BD324C2 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_len, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_output, int32_t ___4_outOff, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Utilities.Arrays::Clone(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_Clone_m5565718292F04770F6788351922E476D3BEF1A94 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Arrays::Fill(System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrays_Fill_mE21DFB2A97B1AE17AFE700D6A367141498048242 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buf, uint8_t ___1_b, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mC3349029FE37EB00B5BFCB1F87022458A3834E35 (int32_t ___0_value, int32_t ___1_toBase, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60 (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Insert_mEA426100381DD65FB6A891BA28B5F1208BEDDD29 (StringBuilder_t* __this, int32_t ___0_index, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mD1B3AFBDA26E52D0382434804364FEF8BA241FB4 (String_t* ___0_value, int32_t ___1_fromBase, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCtrBlockCipher_Reset_m6A4947B31FC2ED648DF6A2A80CE8AF8E8CC42A0A (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, const RuntimeMethod* method) ;
// System.Byte Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::CalculateByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t KCtrBlockCipher_CalculateByte_m978B111433891E0AF9E76CC865C64504CA093A43 (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, uint8_t ___0_b, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::incrementCounterAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCtrBlockCipher_incrementCounterAt_m15EA59FF8C03506011D848CBE9928489BEFD345D (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, int32_t ___0_pos, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::checkCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCtrBlockCipher_checkCounter_m0999CDF444F2ABDF770F65E8A555CBD3212A9BBA (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KCtrBlockCipher_GetBlockSize_mABF015BD46C03876D7BF7E8BF9CE6860CD77A743 (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCtrBlockCipher_ProcessBytes_m079BC47B7944C6828B94289226A07878914FA8B6 (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_len, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_output, int32_t ___4_outOff, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::OCB_double(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OcbBlockCipher_OCB_double_mF9389380384059D0523557292468AE28FBAA35CE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_block, const RuntimeMethod* method) ;
// System.Collections.IList Org.BouncyCastle.Utilities.Platform::CreateArrayList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Platform_CreateArrayList_mF7A2D52167B208F9F6E15D9405F1D52723B94E9E (const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Utilities.Arrays::AreEqual(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_AreEqual_m93263147E08C039BD573B4D2A4921988053170B7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_a, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_b, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::OCB_extend(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher_OCB_extend_mD1545BD7077A9C374C87BDBBE36148801EAD19B4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_block, int32_t ___1_pos, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Xor(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher_Xor_m84D8B4AA2CC63BE5CE01D60786CB8E3B4FB5C423 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_block, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_val, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::OCB_ntz(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OcbBlockCipher_OCB_ntz_mF9DF24257B562D51C5F2E18135B7479F2C793C4A (int64_t ___0_x, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ShiftLeft(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OcbBlockCipher_ShiftLeft_m34C629F94C1448B8A3B4FC73E730923038E4F3CF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_block, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_output, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.OfbBlockCipher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OfbBlockCipher_Reset_mD37835704D0D3CB0946C81924259FA3301483570 (OfbBlockCipher_t72A403CDCDA517916A318565473D48F651DC4A4A* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenPgpCfbBlockCipher_DecryptBlock_mE57690EA4975784C8A038234186780E1C0153EF3 (OpenPgpCfbBlockCipher_t26FDB232414CBB4030BD3AD43F7EFC2A9329CF6B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_outBytes, int32_t ___3_outOff, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenPgpCfbBlockCipher_EncryptBlock_mB03D14664C3EFCBDFCD5A9116BDA21B258FB7B90 (OpenPgpCfbBlockCipher_t26FDB232414CBB4030BD3AD43F7EFC2A9329CF6B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_outBytes, int32_t ___3_outOff, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenPgpCfbBlockCipher_Reset_m30647DD13ED5B1DFBB3EA2B471F7C615142519A6 (OpenPgpCfbBlockCipher_t26FDB232414CBB4030BD3AD43F7EFC2A9329CF6B* __this, const RuntimeMethod* method) ;
// System.Byte Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::EncryptByte(System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t OpenPgpCfbBlockCipher_EncryptByte_m5A0113EE6FC77FF70AAC2D8E93C80F54B10E4DCA (OpenPgpCfbBlockCipher_t26FDB232414CBB4030BD3AD43F7EFC2A9329CF6B* __this, uint8_t ___0_data, int32_t ___1_blockOff, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.UInt32[] Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::AsUints(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* GcmUtilities_AsUints_mD89C5B70F49D0C864C411063BF92669FF552C1AC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, const RuntimeMethod* method) ;
// System.UInt32[] Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::OneAsUints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* GcmUtilities_OneAsUints_m4AFB1DB6550B44FEE6A8691CDE5FE17654EB3B41 (const RuntimeMethod* method) ;
// System.UInt32[] Org.BouncyCastle.Utilities.Arrays::Clone(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* Arrays_Clone_m08685E342DDDE7F030FFC476AF4247546375B68C (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_data, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Multiply(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Multiply_m2CF9D333A155D0656B547EB3C8DFBBC0B1AC3553 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::AsBytes(System.UInt32[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_AsBytes_mF8FE4D1CB1BD15CA1A37EF4CF2B9D599C630AC78 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_z, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Utilities.Pack::UInt32_To_BE(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Pack_UInt32_To_BE_m0FBFA801233192361B48D8A04F3DD28AA63C882C (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_ns, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::UInt32_To_BE(System.UInt32[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_BE_m8F147B0DDE3F9707553F3C00755C59ECA9DCB4E2 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_ns, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::UInt64_To_BE(System.UInt64[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_BE_m9DE42A9AD2A682769599A377CD6521EFFD495D9F (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_ns, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::BE_To_UInt32(System.Byte[],System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_BE_To_UInt32_m717B3FE3B230E50D7A584EA3E345606FDD3773F0 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_ns, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::BE_To_UInt64(System.Byte[],System.Int32,System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_BE_To_UInt64_m96A414ACD984149F238E7410C9FD52DCF9D966DB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___2_ns, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::ShiftRight(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t GcmUtilities_ShiftRight_m5FCC01C2742D5C5CFE2800089837A20AB84CEB37 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::ShiftRight(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t GcmUtilities_ShiftRight_mE76CB0727456A9750215C29B06428F8A6E5ACF88 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::ShiftRightN(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t GcmUtilities_ShiftRightN_m00C8E1EA2DC4B67619C5405053CC001E3A214FD5 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_n, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::ShiftRightN(System.UInt32[],System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t GcmUtilities_ShiftRightN_m4B6768D86F1F10C3BAAE0753117338341881EF4D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_n, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) ;
// System.UInt32[] Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::GenerateLookup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* GcmUtilities_GenerateLookup_mF3F460890D8DDF5D06639239FB88F3FC85FFD824 (const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Utilities.Arrays::AreEqual(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_AreEqual_m1DD4CAFB9CE13CB4D330F56ABAFEA01AD7D054E4 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_a, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_b, const RuntimeMethod* method) ;
// System.Collections.IList Org.BouncyCastle.Utilities.Platform::CreateArrayList(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Platform_CreateArrayList_mB3F2E7DEE8B5F5076ACDD529719D23D740922B03 (int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.Tables1kGcmExponentiator::EnsureAvailable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables1kGcmExponentiator_EnsureAvailable_m7CF7035202D583EF46C7395785683C3B8CA2F643 (Tables1kGcmExponentiator_t15B1305B08575DCBE165CF932CEB04DB570FAA1B* __this, int32_t ___0_bit, const RuntimeMethod* method) ;
// System.Object System.Array::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_MultiplyP_mA360A9784FA8539CCA238FF4EE78D0C076CFD9A9 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_m0394ABCF57E7A32E752C26AECF3FEB94FF93FCC7 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP8(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_MultiplyP8_mCB52F45F1CAC26CFCC12078E9D068DA29C57895F (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32,Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CbcBlockCipherMac__ctor_m64B815C8E01DB3E534F99C93AA90E4D784167FE8 (CbcBlockCipherMac_tB98ED50E26EFEEBA2A312F50D356D6C3C473777D* __this, RuntimeObject* ___0_cipher, int32_t ___1_macSizeInBits, RuntimeObject* ___2_padding, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Modes.CbcBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CbcBlockCipher__ctor_mC5E40D0E42BE608A3786ECA72565E2726C339D9F (CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* __this, RuntimeObject* ___0_cipher, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CbcBlockCipherMac_Reset_m04CD28CF9224C27E7C13ACC9318FACB62252DBC4 (CbcBlockCipherMac_tB98ED50E26EFEEBA2A312F50D356D6C3C473777D* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacCFBBlockCipher_Reset_mEB6FEF730CB670FB039A4372F26BA3F97FF3B5D3 (MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* __this, const RuntimeMethod* method) ;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32,System.Int32,Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CfbBlockCipherMac__ctor_mFAAC83D5FA64B787452CE42AAAB7735C3E9B4715 (CfbBlockCipherMac_t00336B3CBEBF99EE3F5B458636F3DE463E26B543* __this, RuntimeObject* ___0_cipher, int32_t ___1_cfbBitSize, int32_t ___2_macSizeInBits, RuntimeObject* ___3_padding, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacCFBBlockCipher__ctor_m286644B8FD89004CE42C1C69E7D39290DEA6E37A (MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* __this, RuntimeObject* ___0_cipher, int32_t ___1_bitBlockSize, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::GetBlockSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MacCFBBlockCipher_GetBlockSize_m190699E466D18B71CC3242CE15A3B22F80FA2A2C_inline (MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* __this, const RuntimeMethod* method) ;
// System.String Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MacCFBBlockCipher_get_AlgorithmName_mF9BED971D51FCD5B44FAADC8D0FFFAE53EDA9322 (MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CfbBlockCipherMac_Reset_mA7DF7BE65A29A71426ACEFE3A418174DDC1165C7 (CfbBlockCipherMac_t00336B3CBEBF99EE3F5B458636F3DE463E26B543* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacCFBBlockCipher_Init_mCE1C56852D7B7B06A841BEC0545A4E93A9A8CFCF (MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* __this, bool ___0_forEncryption, RuntimeObject* ___1_parameters, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MacCFBBlockCipher_ProcessBlock_m513784A2508547799B9558EFC11A28525B70C222 (MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_outBytes, int32_t ___3_outOff, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::GetMacBlock(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacCFBBlockCipher_GetMacBlock_mC96AA40940B8399E5B6C50B9A87683569FBC68F4 (MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_mac, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.CMac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMac__ctor_mA813D306C1D6B020ED09E8969849B451387C8982 (CMac_tEE0527411A50849DB625E0C83E46E0C4A809DFB1* __this, RuntimeObject* ___0_cipher, int32_t ___1_macSizeInBits, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Macs.CMac::ShiftLeft(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CMac_ShiftLeft_m5574F57EEF2E8FF2A69E990F5CC6723C56BB14BB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_block, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_output, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Macs.CMac::DoubleLu(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CMac_DoubleLu_m9A5003B709D456F4C8E49E77C851DE7CF67A448C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.CMac::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMac_Reset_mA8D754298F526C7EAFE16601D2036375C3D42BDE (CMac_tEE0527411A50849DB625E0C83E46E0C4A809DFB1* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Paddings.ISO7816d4Padding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO7816d4Padding__ctor_m8950A118C8373C721AD553999D4BC34DBDACD794 (ISO7816d4Padding_tD2A6A0862ACF21BBE348E4AAE59805BBE487DC50* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Paddings.ISO7816d4Padding::AddPadding(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO7816d4Padding_AddPadding_m9E1395EAE62260ADA05AD3FE49B3498E08319EAE (ISO7816d4Padding_tD2A6A0862ACF21BBE348E4AAE59805BBE487DC50* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Digest__ctor_mA6BDB63EBD7A709B0FE32C268D153A9D9DA2650A (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* __this, int32_t ___0_hashSizeBits, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KeyParameter::GetKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16 (KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* __this, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Macs.Dstu7564Mac::PadKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Dstu7564Mac_PadKey_m8A2A630D9FFDE0145C81E11C137DC6AEC65DB02C (Dstu7564Mac_t8D657AE5566F3F7456E008A028228628340D7542* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, const RuntimeMethod* method) ;
// System.String Org.BouncyCastle.Crypto.Macs.Dstu7564Mac::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Dstu7564Mac_get_AlgorithmName_m9FAA34CD0DB74F3F985B6F9569F6E87E04D7865C (Dstu7564Mac_t8D657AE5566F3F7456E008A028228628340D7542* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.Dstu7564Mac::Pad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Mac_Pad_mC8EE4BD6E6A08D17231CAEBA5BDDC6C8C2186978 (Dstu7564Mac_t8D657AE5566F3F7456E008A028228628340D7542* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::UInt64_To_LE(System.UInt64,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt64_To_LE_m7FAB73112D2DBB58B79823435B3C3A06488A5E90 (uint64_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::UInt32_To_LE(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_LE_m2499D0485ABBAB63E653F26941EE0AFA53508D18 (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.Dstu7624Engine::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7624Engine__ctor_m538B9047A2E181AF15343305F9E6A425B6ABB2F0 (Dstu7624Engine_tE8D2E80377239DCFFF117DC4EB3E15E429A3261A* __this, int32_t ___0_blockSizeBits, const RuntimeMethod* method) ;
// System.String Org.BouncyCastle.Utilities.Platform::GetTypeName(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_GetTypeName_m9B04679202710BC6A96803803882849D0C5001FB (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.Dstu7624Mac::processBlock(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7624Mac_processBlock_mD34047D1C77B017DA227119CA471FFC9EB815522 (Dstu7624Mac_tFF79D84F1342BB1964F54B1D4420F883117DC179* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.Dstu7624Mac::Xor(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7624Mac_Xor_mAC5D0DE7D7B6584C917FA78589688A7114E82CAD (Dstu7624Mac_tFF79D84F1342BB1964F54B1D4420F883117DC179* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_c, int32_t ___1_cOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_input, int32_t ___3_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_xorResult, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.GMac::.ctor(Org.BouncyCastle.Crypto.Modes.GcmBlockCipher,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GMac__ctor_mBCF39A7BB9FE2C6945303ED147C0E40DB68DCC78 (GMac_tB4674C456AE5441355614DEE56E8FD5E2F1C4335* __this, GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* ___0_cipher, int32_t ___1_macSizeBits, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Parameters.AeadParameters::.ctor(Org.BouncyCastle.Crypto.Parameters.KeyParameter,System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AeadParameters__ctor_m839BAD2C310C7FD080DCEA9B9FF687579F4CC01A (AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* __this, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* ___0_key, int32_t ___1_macSize, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_nonce, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::GetUnderlyingCipher()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GcmBlockCipher_GetUnderlyingCipher_mEEF1C6CAB71C34751D1FE22C1F864D383F59A50F_inline (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GcmBlockCipher_DoFinal_m5AF85CBF03932F45B132BF44BE503208D2C138E8 (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, int32_t ___1_outOff, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Macs.Gost28147Mac::bytesToint(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Gost28147Mac_bytesToint_m16CFC669A06E992BEF56AEF7616F5D5F27DA25E4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.Gost28147Mac::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost28147Mac_Reset_mBB75CEBDFFA46EECD16D31513D24737C4D7030C1 (Gost28147Mac_t7B6DC8F9E8BC75140EDC063151B2D407E266712E* __this, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ParametersWithSBox::GetSBox()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ParametersWithSBox_GetSBox_mE7792E5467EA987BDB4F99A15782F4E6CDB40859_inline (ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithSBox::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithSBox_get_Parameters_mD81DBF1AB7E751D8ACE28E241D0A50E5EC04D7D7_inline (ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1* __this, const RuntimeMethod* method) ;
// System.Int32[] Org.BouncyCastle.Crypto.Macs.Gost28147Mac::GenerateWorkingKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Gost28147Mac_GenerateWorkingKey_m4062FC694B44A00F7EBA00EF49E2E0E80EA32B8E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_userKey, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Macs.Gost28147Mac::gost28147_mainStep(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Gost28147Mac_gost28147_mainStep_m4F2DD058597AE86E786F402DBB646155BCFF495D (Gost28147Mac_t7B6DC8F9E8BC75140EDC063151B2D407E266712E* __this, int32_t ___0_n1, int32_t ___1_key, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.Gost28147Mac::intTobytes(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost28147Mac_intTobytes_mFB1C4EAF2B1BC4D52D9F281F2A9F76CD2CA8E172 (int32_t ___0_num, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_output, int32_t ___2_outOff, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Macs.Gost28147Mac::CM5func(System.Byte[],System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Gost28147Mac_CM5func_mB555A031CE02B1C960668503534344B39806CAF3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buf, int32_t ___1_bufOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_mac, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.Gost28147Mac::gost28147MacFunc(System.Int32[],System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost28147Mac_gost28147MacFunc_m5A343775444F93932DC82A0EA7C2D9F29BA0C258 (Gost28147Mac_t7B6DC8F9E8BC75140EDC063151B2D407E266712E* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_workingKey, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_input, int32_t ___2_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_output, int32_t ___4_outOff, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.HMac::XorPad(System.Byte[],System.Int32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMac_XorPad_mCF5146F2A5CE810F5C9B756CA76708027CB6EF80 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pad, int32_t ___1_len, uint8_t ___2_n, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32,Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO9797Alg3Mac__ctor_m36B14ED53C9C19F8FD2B303D44B2F4A8D9FD30A6 (ISO9797Alg3Mac_tAA4D43F48712FD037BB5532EA1EB616794B20854* __this, RuntimeObject* ___0_cipher, int32_t ___1_macSizeInBits, RuntimeObject* ___2_padding, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO9797Alg3Mac_Reset_mFE682B024FCF0D8F6722FF78F535EE8C7D328CE1 (ISO9797Alg3Mac_tAA4D43F48712FD037BB5532EA1EB616794B20854* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Parameters.KeyParameter::.ctor(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyParameter__ctor_mF6FAECE6A51D41CEBFE899223AFC9924B6541D8E (KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, int32_t ___1_keyOff, int32_t ___2_keyLen, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::.ctor(Org.BouncyCastle.Crypto.ICipherParameters,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParametersWithIV__ctor_mC1B4901D3CEBECE5903FE14597AA0701B7B7C994 (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* __this, RuntimeObject* ___0_parameters, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_iv, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.DesEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesEngine__ctor_mDBD566A1EA8FCE1BA4F684F5B3FBE15D666CD915 (DesEngine_t9AD2B250FCBA8652F674C4BBD78AA6C2C7530156* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.Poly1305::SetKey(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Poly1305_SetKey_mF5F9D809C8EE221A3A3B0B2070C6E8C9137689FD (Poly1305_t2AB3E59D012311B29065EEBEA053843267EB748A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_nonce, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.Poly1305::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Poly1305_Reset_mD8B7C4EB5F8E44905007654526D7ACF50D10D0FF (Poly1305_t2AB3E59D012311B29065EEBEA053843267EB748A* __this, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Utilities.Pack::LE_To_UInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.Poly1305::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Poly1305_BlockUpdate_m83BDE8611CBDEE62F3069198FAD4F685638D68D2 (Poly1305_t2AB3E59D012311B29065EEBEA053843267EB748A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_len, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.Poly1305::ProcessBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Poly1305_ProcessBlock_mD3C5708213A43E9B0CE362CC521A6AEE7D1784CE (Poly1305_t2AB3E59D012311B29065EEBEA053843267EB748A* __this, const RuntimeMethod* method) ;
// System.UInt64 Org.BouncyCastle.Crypto.Macs.Poly1305::mul32x32_64(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Poly1305_mul32x32_64_mF5BC2B0818647B4366506173F3B4E814145F2445 (uint32_t ___0_i1, uint32_t ___1_i2, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.SipHash::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SipHash__ctor_mF2A1426AAD4AF5D75E0AE3A3A98485EC0FA2ED81 (SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A* __this, int32_t ___0_c, int32_t ___1_d, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.UInt64 Org.BouncyCastle.Crypto.Utilities.Pack::LE_To_UInt64(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Pack_LE_To_UInt64_m6CC6EA10A381D168EEEF20ACD2A7C5C3A0B6795B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) ;
// System.Int64 Org.BouncyCastle.Crypto.Macs.SipHash::RotateLeft(System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SipHash_RotateLeft_m8A13AAF7455EB976269D15631A5B5936EFC88BF8 (int64_t ___0_x, int32_t ___1_n, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.SkeinEngine::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine__ctor_mF91E68903CC0C9FC02C1C0DD1F1E9B221762A11D (SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* __this, int32_t ___0_blockSizeBits, int32_t ___1_outputSizeBits, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.SkeinEngine::.ctor(Org.BouncyCastle.Crypto.Digests.SkeinEngine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine__ctor_m3070EA964D73F5C5E72C1275DF0A49280B024847 (SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* __this, SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* ___0_engine, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Digests.SkeinEngine::get_BlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeinEngine_get_BlockSize_m5F6B1D2FA8ACBB9639AA3666B7B85B8DD2151037 (SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Digests.SkeinEngine::get_OutputSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SkeinEngine_get_OutputSize_m7B75A727F4C5300C10FEBFBCAEE6E6BBEDC3EF0A_inline (SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Parameters.SkeinParameters/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m88F4EA119C5649FAFD12B50E5A7EEC0DE814D38A (Builder_t3D2F2E6112A8B367D304B58F4E781E0DC33983B6* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.Parameters.SkeinParameters/Builder Org.BouncyCastle.Crypto.Parameters.SkeinParameters/Builder::SetKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t3D2F2E6112A8B367D304B58F4E781E0DC33983B6* Builder_SetKey_m7D926FEBC30CDB6D8283B7581D5547CC82AA7E10 (Builder_t3D2F2E6112A8B367D304B58F4E781E0DC33983B6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.Parameters.SkeinParameters Org.BouncyCastle.Crypto.Parameters.SkeinParameters/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8* Builder_Build_m4D43C97CEA70091569F5C97B0DC2AACF158FEF7C (Builder_t3D2F2E6112A8B367D304B58F4E781E0DC33983B6* __this, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.SkeinParameters::GetKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SkeinParameters_GetKey_mB0360C83775B338B3A690618EF6945F648CB5468 (SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.SkeinEngine::Init(Org.BouncyCastle.Crypto.Parameters.SkeinParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_Init_m600D7AFFBFF869AFBE5681C28AF9613DA427D83C (SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* __this, SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8* ___0_parameters, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.SkeinEngine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_Reset_m33B2F40AFEDB819D4BB1E00D174F7661D063E085 (SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.SkeinEngine::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_Update_m74954574D1266FE7710840FFE7B74F886A37166B (SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* __this, uint8_t ___0_inByte, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.SkeinEngine::Update(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinEngine_Update_m1C44C4466C02B46ACD3661FD2B13B5959170592C (SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inBytes, int32_t ___1_inOff, int32_t ___2_len, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Digests.SkeinEngine::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeinEngine_DoFinal_mDE98915E12A1C2148E59947191FBFE606FFFF730 (SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_outBytes, int32_t ___1_outOff, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Macs.VmpcMac::initKey(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcMac_initKey_m1497C4E0D51B1A2C3582CF21EE5AADD1B4FFF787 (VmpcMac_t16974E2BD73719C7204F28641E8B32E8CD49FEC6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_keyBytes, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_ivBytes, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0 (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Crypto.IO.CipherStream::FillInBuf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CipherStream_FillInBuf_mA8C8EA9DF906D225302052CEDA51D5FBB15BBD7A (CipherStream_t6FB015ADC43BBA71B75FF9A76BF776709B28CA78* __this, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.IO.CipherStream::ReadAndProcessBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CipherStream_ReadAndProcessBlock_m5CBAF2A24534309607752E85F873E46C5270CD42 (CipherStream_t6FB015ADC43BBA71B75FF9A76BF776709B28CA78* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Platform::Dispose(System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_Dispose_m2E991EB894A4FA3C42A995E49F9890E5B0B08CDE (RuntimeObject* ___0_d, const RuntimeMethod* method) ;
// System.Void System.IO.Stream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* __this, bool ___0_disposing, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GOfbBlockCipher__ctor_m41728F9A6150D41A48DA87943290B294C58A0227 (GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F* __this, RuntimeObject* ___0_cipher, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___firstStep_5 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_cipher;
		__this->___cipher_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_4), (void*)L_0);
		RuntimeObject* L_1 = ___0_cipher;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_1);
		__this->___blockSize_3 = L_2;
		int32_t L_3 = __this->___blockSize_3;
		if ((((int32_t)L_3) == ((int32_t)8)))
		{
			goto IL_0034;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral97A9A868349D6F48CDEEB77E1B607C7ECD80E72E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GOfbBlockCipher__ctor_m41728F9A6150D41A48DA87943290B294C58A0227_RuntimeMethod_var)));
	}

IL_0034:
	{
		RuntimeObject* L_5 = ___0_cipher;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___IV_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IV_0), (void*)L_7);
		RuntimeObject* L_8 = ___0_cipher;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_9);
		__this->___ofbV_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ofbV_1), (void*)L_10);
		RuntimeObject* L_11 = ___0_cipher;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_12);
		__this->___ofbOutV_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ofbOutV_2), (void*)L_13);
		return;
	}
}
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::GetUnderlyingCipher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GOfbBlockCipher_GetUnderlyingCipher_m73C188EB0E94CA84AF9A82CEF8DFF780EC63F63E (GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___cipher_4;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GOfbBlockCipher_Init_mC3C4E7D5CD056328FF775DFF7D2A410ACC3BECEF (GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F* __this, bool ___0_forEncryption, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	{
		__this->___firstStep_5 = (bool)1;
		__this->___N3_6 = 0;
		__this->___N4_7 = 0;
		RuntimeObject* L_0 = ___1_parameters;
		if (!((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_0, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_0094;
		}
	}
	{
		RuntimeObject* L_1 = ___1_parameters;
		V_0 = ((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_1, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var));
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_2 = V_0;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(L_2, NULL);
		V_1 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___IV_0;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0076;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___IV_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___IV_0;
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		NullCheck(L_10);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, 0, (RuntimeArray*)L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), ((int32_t)(((RuntimeArray*)L_9)->max_length)))), ((int32_t)(((RuntimeArray*)L_10)->max_length)), NULL);
		V_2 = 0;
		goto IL_0065;
	}

IL_0058:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___IV_0;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint8_t)0);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0065:
	{
		int32_t L_14 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___IV_0;
		NullCheck(L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), ((int32_t)(((RuntimeArray*)L_16)->max_length)))))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_008c;
	}

IL_0076:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___IV_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___IV_0;
		NullCheck(L_19);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_17, 0, (RuntimeArray*)L_18, 0, ((int32_t)(((RuntimeArray*)L_19)->max_length)), NULL);
	}

IL_008c:
	{
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_20 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_20, NULL);
		___1_parameters = L_21;
	}

IL_0094:
	{
		GOfbBlockCipher_Reset_m2231BC960D8CE99D9D179CB25E5593102EEF209B(__this, NULL);
		RuntimeObject* L_22 = ___1_parameters;
		if (!L_22)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_23 = __this->___cipher_4;
		RuntimeObject* L_24 = ___1_parameters;
		NullCheck(L_23);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_23, (bool)1, L_24);
	}

IL_00aa:
	{
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GOfbBlockCipher_get_AlgorithmName_mA5B86384AAFF533446F1DCBC01EFD0D63414FCBD (GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2C8D3FBAAD06D3594B0F1E444B21F1F2C527617);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___cipher_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralB2C8D3FBAAD06D3594B0F1E444B21F1F2C527617, NULL);
		return L_2;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GOfbBlockCipher_get_IsPartialBlockOkay_mAA148729F478B4F781B1D5A70947683977954891 (GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GOfbBlockCipher_GetBlockSize_mC128D00BC597F4C8E2AF8FC4426D476D1C53EB6B (GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___blockSize_3;
		return L_0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GOfbBlockCipher_ProcessBlock_mF94A5E757AE3B78FC7B0899E5DD9859870D599F3 (GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_output, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_inOff;
		int32_t L_1 = __this->___blockSize_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_input;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_3 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GOfbBlockCipher_ProcessBlock_mF94A5E757AE3B78FC7B0899E5DD9859870D599F3_RuntimeMethod_var)));
	}

IL_0018:
	{
		int32_t L_4 = ___3_outOff;
		int32_t L_5 = __this->___blockSize_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___2_output;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0031;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_7 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GOfbBlockCipher_ProcessBlock_mF94A5E757AE3B78FC7B0899E5DD9859870D599F3_RuntimeMethod_var)));
	}

IL_0031:
	{
		bool L_8 = __this->___firstStep_5;
		if (!L_8)
		{
			goto IL_0080;
		}
	}
	{
		__this->___firstStep_5 = (bool)0;
		RuntimeObject* L_9 = __this->___cipher_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___ofbV_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___ofbOutV_2;
		NullCheck(L_9);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_9, L_10, 0, L_11, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___ofbOutV_2;
		int32_t L_14;
		L_14 = GOfbBlockCipher_bytesToint_m132EB4DCD140F572F15B3EAA227BE14184F1B06C(__this, L_13, 0, NULL);
		__this->___N3_6 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___ofbOutV_2;
		int32_t L_16;
		L_16 = GOfbBlockCipher_bytesToint_m132EB4DCD140F572F15B3EAA227BE14184F1B06C(__this, L_15, 4, NULL);
		__this->___N4_7 = L_16;
	}

IL_0080:
	{
		int32_t L_17 = __this->___N3_6;
		__this->___N3_6 = ((int32_t)il2cpp_codegen_add(L_17, ((int32_t)16843009)));
		int32_t L_18 = __this->___N4_7;
		__this->___N4_7 = ((int32_t)il2cpp_codegen_add(L_18, ((int32_t)16843012)));
		int32_t L_19 = __this->___N4_7;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)16843012))))
		{
			goto IL_00c8;
		}
	}
	{
		int32_t L_20 = __this->___N4_7;
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_00c8;
		}
	}
	{
		int32_t L_21 = __this->___N4_7;
		__this->___N4_7 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_00c8:
	{
		int32_t L_22 = __this->___N3_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___ofbV_1;
		GOfbBlockCipher_intTobytes_m8DB65F009CD71CBF3B1D5C1A27C75326E1FDEADF(__this, L_22, L_23, 0, NULL);
		int32_t L_24 = __this->___N4_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___ofbV_1;
		GOfbBlockCipher_intTobytes_m8DB65F009CD71CBF3B1D5C1A27C75326E1FDEADF(__this, L_24, L_25, 4, NULL);
		RuntimeObject* L_26 = __this->___cipher_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->___ofbV_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->___ofbOutV_2;
		NullCheck(L_26);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_26, L_27, 0, L_28, 0);
		V_0 = 0;
		goto IL_0125;
	}

IL_010c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___2_output;
		int32_t L_31 = ___3_outOff;
		int32_t L_32 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = __this->___ofbOutV_2;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		uint8_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ___0_input;
		int32_t L_38 = ___1_inOff;
		int32_t L_39 = V_0;
		NullCheck(L_37);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_38, L_39));
		uint8_t L_41 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_31, L_32))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_36^(int32_t)L_41))));
		int32_t L_42 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_0125:
	{
		int32_t L_43 = V_0;
		int32_t L_44 = __this->___blockSize_3;
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_010c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = __this->___ofbV_1;
		int32_t L_46 = __this->___blockSize_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___ofbV_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = __this->___ofbV_1;
		NullCheck(L_48);
		int32_t L_49 = __this->___blockSize_3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_45, L_46, (RuntimeArray*)L_47, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_48)->max_length)), L_49)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = __this->___ofbOutV_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = __this->___ofbV_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = __this->___ofbV_1;
		NullCheck(L_52);
		int32_t L_53 = __this->___blockSize_3;
		int32_t L_54 = __this->___blockSize_3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_50, 0, (RuntimeArray*)L_51, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_52)->max_length)), L_53)), L_54, NULL);
		int32_t L_55 = __this->___blockSize_3;
		return L_55;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GOfbBlockCipher_Reset_m2231BC960D8CE99D9D179CB25E5593102EEF209B (GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___IV_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___ofbV_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___IV_0;
		NullCheck(L_2);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		RuntimeObject* L_3 = __this->___cipher_4;
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(5 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Reset() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_3);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::bytesToint(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GOfbBlockCipher_bytesToint_m132EB4DCD140F572F15B3EAA227BE14184F1B06C (GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inBytes, int32_t ___1_inOff, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_inBytes;
		int32_t L_1 = ___1_inOff;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_add(L_1, 3));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_inBytes;
		int32_t L_5 = ___1_inOff;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 2));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_inBytes;
		int32_t L_9 = ___1_inOff;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_inBytes;
		int32_t L_13 = ___1_inOff;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((int64_t)(((int64_t)((int32_t)((int32_t)L_3<<((int32_t)24))))&((int64_t)(uint64_t)((uint32_t)((int32_t)-16777216)))))), ((int32_t)(((int32_t)((int32_t)L_7<<((int32_t)16)))&((int32_t)16711680))))), ((int32_t)(((int32_t)((int32_t)L_11<<8))&((int32_t)65280))))), ((int32_t)((int32_t)L_15&((int32_t)255)))));
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.GOfbBlockCipher::intTobytes(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GOfbBlockCipher_intTobytes_m8DB65F009CD71CBF3B1D5C1A27C75326E1FDEADF (GOfbBlockCipher_t1952BA91330890AB7A9CD47B20AC9BE78B5E5F1F* __this, int32_t ___0_num, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_outBytes, int32_t ___2_outOff, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_outBytes;
		int32_t L_1 = ___2_outOff;
		int32_t L_2 = ___0_num;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, 3))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_2>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_outBytes;
		int32_t L_4 = ___2_outOff;
		int32_t L_5 = ___0_num;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_5>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_outBytes;
		int32_t L_7 = ___2_outOff;
		int32_t L_8 = ___0_num;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_8>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___1_outBytes;
		int32_t L_10 = ___2_outOff;
		int32_t L_11 = ___0_num;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint8_t)((int32_t)(uint8_t)L_11));
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
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::setNb(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_setNb_m1691E94D49CC5EABA0F785F00CB19CC414DAC106 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, int32_t ___0_Nb, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_Nb;
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___0_Nb;
		if ((((int32_t)L_1) == ((int32_t)6)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_2 = ___0_Nb;
		if ((!(((uint32_t)L_2) == ((uint32_t)8))))
		{
			goto IL_0014;
		}
	}

IL_000c:
	{
		int32_t L_3 = ___0_Nb;
		__this->___Nb__17 = L_3;
		return;
	}

IL_0014:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral86676EF5625B07BB6A212B0248104BFAD8CDFD5C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KCcmBlockCipher_setNb_m1691E94D49CC5EABA0F785F00CB19CC414DAC106_RuntimeMethod_var)));
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher__ctor_m81F23A22F88A6898D86E98BA6B728C2B6F1276D2 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, RuntimeObject* ___0_engine, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_engine;
		KCcmBlockCipher__ctor_mADC6A0960D163766B3DBB59C900AAA3F8B473472(__this, L_0, 4, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher__ctor_mADC6A0960D163766B3DBB59C900AAA3F8B473472 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, RuntimeObject* ___0_engine, int32_t ___1_Nb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_0, NULL);
		__this->___associatedText_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___associatedText_15), (void*)L_0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_1 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_1, NULL);
		__this->___data_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_16), (void*)L_1);
		__this->___Nb__17 = 4;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_2 = ___0_engine;
		__this->___engine_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___engine_4), (void*)L_2);
		RuntimeObject* L_3 = ___0_engine;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_3);
		__this->___macSize_5 = L_4;
		RuntimeObject* L_5 = ___0_engine;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___nonce_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nonce_10), (void*)L_7);
		RuntimeObject* L_8 = ___0_engine;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_9);
		__this->___initialAssociatedText_7 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___initialAssociatedText_7), (void*)L_10);
		RuntimeObject* L_11 = ___0_engine;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_12);
		__this->___mac_8 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mac_8), (void*)L_13);
		RuntimeObject* L_14 = ___0_engine;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_15);
		__this->___macBlock_9 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___macBlock_9), (void*)L_16);
		RuntimeObject* L_17 = ___0_engine;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_18);
		__this->___G1_11 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___G1_11), (void*)L_19);
		RuntimeObject* L_20 = ___0_engine;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_21);
		__this->___buffer_12 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buffer_12), (void*)L_22);
		RuntimeObject* L_23 = ___0_engine;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_23);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_24);
		__this->___s_13 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___s_13), (void*)L_25);
		RuntimeObject* L_26 = ___0_engine;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_26);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_27);
		__this->___counter_14 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___counter_14), (void*)L_28);
		int32_t L_29 = ___1_Nb;
		KCcmBlockCipher_setNb_m1691E94D49CC5EABA0F785F00CB19CC414DAC106(__this, L_29, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_Init_m04E0D4833CEC3D87BCE2F981D63DC62EBF8D2B98 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, bool ___0_forEncryption, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___1_parameters;
		if (!((AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B*)IsInstClass((RuntimeObject*)L_0, AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var)))
		{
			goto IL_0071;
		}
	}
	{
		RuntimeObject* L_1 = ___1_parameters;
		V_1 = ((AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B*)CastclassClass((RuntimeObject*)L_1, AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var));
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_2 = V_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.Parameters.AeadParameters::get_MacSize() */, L_2);
		il2cpp_codegen_runtime_class_init_inline(KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var);
		int32_t L_4 = ((KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_StaticFields*)il2cpp_codegen_static_fields_for(KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var))->___MAX_MAC_BIT_LENGTH_2;
		if ((((int32_t)L_3) > ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.Parameters.AeadParameters::get_MacSize() */, L_5);
		il2cpp_codegen_runtime_class_init_inline(KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var);
		int32_t L_7 = ((KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_StaticFields*)il2cpp_codegen_static_fields_for(KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var))->___MIN_MAC_BIT_LENGTH_3;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0033;
		}
	}
	{
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.Parameters.AeadParameters::get_MacSize() */, L_8);
		if (!((int32_t)(L_9%8)))
		{
			goto IL_003e;
		}
	}

IL_0033:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2367BCDD7B214D5EEC78058C7E0F28C2DB18486F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KCcmBlockCipher_Init_m04E0D4833CEC3D87BCE2F981D63DC62EBF8D2B98_RuntimeMethod_var)));
	}

IL_003e:
	{
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_11 = V_1;
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(7 /* System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::GetNonce() */, L_11);
		__this->___nonce_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nonce_10), (void*)L_12);
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.Parameters.AeadParameters::get_MacSize() */, L_13);
		il2cpp_codegen_runtime_class_init_inline(KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var);
		int32_t L_15 = ((KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_StaticFields*)il2cpp_codegen_static_fields_for(KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var))->___BITS_IN_BYTE_1;
		__this->___macSize_5 = ((int32_t)(L_14/L_15));
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_16 = V_1;
		NullCheck(L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
		L_17 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(6 /* System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::GetAssociatedText() */, L_16);
		__this->___initialAssociatedText_7 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___initialAssociatedText_7), (void*)L_17);
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_18 = V_1;
		NullCheck(L_18);
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_19;
		L_19 = VirtualFuncInvoker0< KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* >::Invoke(4 /* Org.BouncyCastle.Crypto.Parameters.KeyParameter Org.BouncyCastle.Crypto.Parameters.AeadParameters::get_Key() */, L_18);
		V_0 = L_19;
		goto IL_00bb;
	}

IL_0071:
	{
		RuntimeObject* L_20 = ___1_parameters;
		if (!((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_20, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_00b0;
		}
	}
	{
		RuntimeObject* L_21 = ___1_parameters;
		NullCheck(((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_21, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_21, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)), NULL);
		__this->___nonce_10 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nonce_10), (void*)L_22);
		RuntimeObject* L_23 = __this->___engine_4;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_23);
		__this->___macSize_5 = L_24;
		__this->___initialAssociatedText_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___initialAssociatedText_7), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		RuntimeObject* L_25 = ___1_parameters;
		NullCheck(((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_25, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)));
		RuntimeObject* L_26;
		L_26 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_25, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_26;
		goto IL_00bb;
	}

IL_00b0:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_27 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_27);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_27, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC1247379A9C42BAF4DAD87F9ABE2F0CB38AF22A2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KCcmBlockCipher_Init_m04E0D4833CEC3D87BCE2F981D63DC62EBF8D2B98_RuntimeMethod_var)));
	}

IL_00bb:
	{
		int32_t L_28 = __this->___macSize_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_28);
		__this->___mac_8 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mac_8), (void*)L_29);
		bool L_30 = ___0_forEncryption;
		__this->___forEncryption_6 = L_30;
		RuntimeObject* L_31 = __this->___engine_4;
		RuntimeObject* L_32 = V_0;
		NullCheck(L_31);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_31, (bool)1, L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = __this->___counter_14;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___initialAssociatedText_7;
		if (!L_34)
		{
			goto IL_0106;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = __this->___initialAssociatedText_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___initialAssociatedText_7;
		NullCheck(L_36);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(22 /* System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::ProcessAadBytes(System.Byte[],System.Int32,System.Int32) */, __this, L_35, 0, ((int32_t)(((RuntimeArray*)L_36)->max_length)));
	}

IL_0106:
	{
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KCcmBlockCipher_get_AlgorithmName_mE2322A7D266529BC36E4864AE1B0AB7A5E8312A9 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8395859B32B7B887C6F2ED68A0C1A5C2784CD17);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___engine_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralC8395859B32B7B887C6F2ED68A0C1A5C2784CD17, NULL);
		return L_2;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KCcmBlockCipher_GetBlockSize_m4314E62BC6AD77C09A880D58C1CC6BCFEA16E7F3 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___engine_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::GetUnderlyingCipher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KCcmBlockCipher_GetUnderlyingCipher_mA5470EAE4FDC9CB8FD5530746694EE2154368936 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___engine_4;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::ProcessAadByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_ProcessAadByte_mC958A5D4C019DF0F1988523A75863D6B4A417704 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, uint8_t ___0_input, const RuntimeMethod* method) 
{
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___associatedText_15;
		uint8_t L_1 = ___0_input;
		NullCheck(L_0);
		VirtualActionInvoker1< uint8_t >::Invoke(39 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_0, L_1);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::ProcessAadBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_ProcessAadBytes_m1DA9CB7AE59E49E3E13F2894FDFF4FD69CA11AE4 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_len, const RuntimeMethod* method) 
{
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___associatedText_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_input;
		int32_t L_2 = ___1_inOff;
		int32_t L_3 = ___2_len;
		NullCheck(L_0);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::ProcessAAD(System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_ProcessAAD_m79FD33523E877DE08A1E4990E722A73FC05828F0 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_assocText, int32_t ___1_assocOff, int32_t ___2_assocLen, int32_t ___3_dataLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___2_assocLen;
		int32_t L_1 = ___1_assocOff;
		RuntimeObject* L_2 = __this->___engine_4;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_2);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_0, L_1))) >= ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38D09B1907F51A21FA890AD1B24D91155B49D4DB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KCcmBlockCipher_ProcessAAD_m79FD33523E877DE08A1E4990E722A73FC05828F0_RuntimeMethod_var)));
	}

IL_001b:
	{
		int32_t L_5 = ___2_assocLen;
		RuntimeObject* L_6 = __this->___engine_4;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_6);
		if (!((int32_t)(L_5%L_7)))
		{
			goto IL_0035;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral885C1F522AFB0B733EF983628BB641707475502A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KCcmBlockCipher_ProcessAAD_m79FD33523E877DE08A1E4990E722A73FC05828F0_RuntimeMethod_var)));
	}

IL_0035:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___nonce_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___G1_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___nonce_10;
		NullCheck(L_11);
		int32_t L_12 = __this->___Nb__17;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), 1)), NULL);
		int32_t L_13 = ___3_dataLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___buffer_12;
		KCcmBlockCipher_intToBytes_m16AC65329A63E3BDCB6643C4A0601D00FFD06A2D(__this, L_13, L_14, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___buffer_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___G1_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___nonce_10;
		NullCheck(L_17);
		int32_t L_18 = __this->___Nb__17;
		il2cpp_codegen_runtime_class_init_inline(KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var);
		int32_t L_19 = ((KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_StaticFields*)il2cpp_codegen_static_fields_for(KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var))->___BYTES_IN_INT_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), 1)), L_19, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___G1_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___G1_11;
		NullCheck(L_21);
		int32_t L_22 = __this->___macSize_5;
		uint8_t L_23;
		L_23 = KCcmBlockCipher_getFlag_mE35B88807B9FF2999EB5E7BD4B4C62BFDFDD888E(__this, (bool)1, L_22, NULL);
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_21)->max_length)), 1))), (uint8_t)L_23);
		RuntimeObject* L_24 = __this->___engine_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___G1_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___macBlock_9;
		NullCheck(L_24);
		int32_t L_27;
		L_27 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_24, L_25, 0, L_26, 0);
		int32_t L_28 = ___2_assocLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___buffer_12;
		KCcmBlockCipher_intToBytes_m16AC65329A63E3BDCB6643C4A0601D00FFD06A2D(__this, L_28, L_29, 0, NULL);
		int32_t L_30 = ___2_assocLen;
		RuntimeObject* L_31 = __this->___engine_4;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_31);
		int32_t L_33 = __this->___Nb__17;
		if ((((int32_t)L_30) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_32, L_33)))))
		{
			goto IL_015e;
		}
	}
	{
		V_1 = 0;
		goto IL_0110;
	}

IL_00ef:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___buffer_12;
		int32_t L_35 = V_1;
		int32_t L_36 = __this->___Nb__17;
		NullCheck(L_34);
		uint8_t* L_37 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_35, L_36)))));
		int32_t L_38 = *((uint8_t*)L_37);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ___0_assocText;
		int32_t L_40 = ___1_assocOff;
		int32_t L_41 = V_1;
		NullCheck(L_39);
		int32_t L_42 = ((int32_t)il2cpp_codegen_add(L_40, L_41));
		uint8_t L_43 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		*((int8_t*)L_37) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_38^(int32_t)L_43)));
		int32_t L_44 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_0110:
	{
		int32_t L_45 = V_1;
		int32_t L_46 = ___2_assocLen;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_00ef;
		}
	}
	{
		V_2 = 0;
		goto IL_0135;
	}

IL_0118:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___macBlock_9;
		int32_t L_48 = V_2;
		NullCheck(L_47);
		uint8_t* L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)));
		int32_t L_50 = *((uint8_t*)L_49);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = __this->___buffer_12;
		int32_t L_52 = V_2;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		uint8_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		*((int8_t*)L_49) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_50^(int32_t)L_54)));
		int32_t L_55 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_0135:
	{
		int32_t L_56 = V_2;
		RuntimeObject* L_57 = __this->___engine_4;
		NullCheck(L_57);
		int32_t L_58;
		L_58 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_57);
		if ((((int32_t)L_56) < ((int32_t)L_58)))
		{
			goto IL_0118;
		}
	}
	{
		RuntimeObject* L_59 = __this->___engine_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = __this->___macBlock_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = __this->___macBlock_9;
		NullCheck(L_59);
		int32_t L_62;
		L_62 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_59, L_60, 0, L_61, 0);
		return;
	}

IL_015e:
	{
		V_3 = 0;
		goto IL_017f;
	}

IL_0162:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = __this->___macBlock_9;
		int32_t L_64 = V_3;
		NullCheck(L_63);
		uint8_t* L_65 = ((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_64)));
		int32_t L_66 = *((uint8_t*)L_65);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = __this->___buffer_12;
		int32_t L_68 = V_3;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		uint8_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		*((int8_t*)L_65) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_66^(int32_t)L_70)));
		int32_t L_71 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_017f:
	{
		int32_t L_72 = V_3;
		RuntimeObject* L_73 = __this->___engine_4;
		NullCheck(L_73);
		int32_t L_74;
		L_74 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_73);
		if ((((int32_t)L_72) < ((int32_t)L_74)))
		{
			goto IL_0162;
		}
	}
	{
		RuntimeObject* L_75 = __this->___engine_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = __this->___macBlock_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = __this->___macBlock_9;
		NullCheck(L_75);
		int32_t L_78;
		L_78 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_75, L_76, 0, L_77, 0);
		int32_t L_79 = ___2_assocLen;
		V_0 = L_79;
		goto IL_0214;
	}

IL_01ab:
	{
		V_4 = 0;
		goto IL_01ce;
	}

IL_01b0:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = __this->___macBlock_9;
		int32_t L_81 = V_4;
		NullCheck(L_80);
		uint8_t* L_82 = ((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)));
		int32_t L_83 = *((uint8_t*)L_82);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = ___0_assocText;
		int32_t L_85 = V_4;
		int32_t L_86 = ___1_assocOff;
		NullCheck(L_84);
		int32_t L_87 = ((int32_t)il2cpp_codegen_add(L_85, L_86));
		uint8_t L_88 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		*((int8_t*)L_82) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_83^(int32_t)L_88)));
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_01ce:
	{
		int32_t L_90 = V_4;
		RuntimeObject* L_91 = __this->___engine_4;
		NullCheck(L_91);
		int32_t L_92;
		L_92 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_91);
		if ((((int32_t)L_90) < ((int32_t)L_92)))
		{
			goto IL_01b0;
		}
	}
	{
		RuntimeObject* L_93 = __this->___engine_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = __this->___macBlock_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = __this->___macBlock_9;
		NullCheck(L_93);
		int32_t L_96;
		L_96 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_93, L_94, 0, L_95, 0);
		int32_t L_97 = ___1_assocOff;
		RuntimeObject* L_98 = __this->___engine_4;
		NullCheck(L_98);
		int32_t L_99;
		L_99 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_98);
		___1_assocOff = ((int32_t)il2cpp_codegen_add(L_97, L_99));
		int32_t L_100 = V_0;
		RuntimeObject* L_101 = __this->___engine_4;
		NullCheck(L_101);
		int32_t L_102;
		L_102 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_101);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_100, L_102));
	}

IL_0214:
	{
		int32_t L_103 = V_0;
		if (L_103)
		{
			goto IL_01ab;
		}
	}
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::ProcessByte(System.Byte,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KCcmBlockCipher_ProcessByte_m5935A8C0B9F4DF67C8DBB9C9607261B60B3C1DDF (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, uint8_t ___0_input, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_output, int32_t ___2_outOff, const RuntimeMethod* method) 
{
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___data_16;
		uint8_t L_1 = ___0_input;
		NullCheck(L_0);
		VirtualActionInvoker1< uint8_t >::Invoke(39 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_0, L_1);
		return 0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KCcmBlockCipher_ProcessBytes_m97D5E2B848DB1E5284EBFC8ADF0D84F7EA6A7811 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_inLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_output, int32_t ___4_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_input;
		int32_t L_1 = ___1_inOff;
		int32_t L_2 = ___2_inLen;
		Check_DataLength_m4BEA4E45985CDB8967A7C3C71799B9036DDCC991(L_0, L_1, L_2, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_3 = __this->___data_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_input;
		int32_t L_5 = ___1_inOff;
		int32_t L_6 = ___2_inLen;
		NullCheck(L_3);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_3, L_4, L_5, L_6);
		return 0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::ProcessPacket(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KCcmBlockCipher_ProcessPacket_m344E885BC3D8DACAFD862BBB1FAE2F544BD324C2 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_len, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_output, int32_t ___4_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral593CBFE95E3FA15438E893EF8E8CBD31F861CDE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t G_B4_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_input;
		int32_t L_1 = ___1_inOff;
		int32_t L_2 = ___2_len;
		Check_DataLength_m4BEA4E45985CDB8967A7C3C71799B9036DDCC991(L_0, L_1, L_2, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___3_output;
		int32_t L_4 = ___4_outOff;
		int32_t L_5 = ___2_len;
		Check_OutputLength_mFBD480CE544E8B2C4EFAD3A12D1E105DC36FFA68(L_3, L_4, L_5, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_6 = __this->___associatedText_15;
		NullCheck(L_6);
		int64_t L_7;
		L_7 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Length() */, L_6);
		if ((((int64_t)L_7) <= ((int64_t)((int64_t)0))))
		{
			goto IL_006f;
		}
	}
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_8 = __this->___associatedText_15;
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(44 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_8);
		V_0 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		NullCheck(L_10);
		V_1 = ((int32_t)(((RuntimeArray*)L_10)->max_length));
		bool L_11 = __this->___forEncryption_6;
		if (L_11)
		{
			goto IL_0058;
		}
	}
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_12 = __this->___data_16;
		NullCheck(L_12);
		int64_t L_13;
		L_13 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Length() */, L_12);
		int32_t L_14 = __this->___macSize_5;
		G_B4_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)L_13), L_14));
		goto IL_0064;
	}

IL_0058:
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_15 = __this->___data_16;
		NullCheck(L_15);
		int64_t L_16;
		L_16 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Length() */, L_15);
		G_B4_0 = ((int32_t)L_16);
	}

IL_0064:
	{
		V_2 = G_B4_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = V_2;
		KCcmBlockCipher_ProcessAAD_m79FD33523E877DE08A1E4990E722A73FC05828F0(__this, L_17, 0, L_18, L_19, NULL);
	}

IL_006f:
	{
		bool L_20 = __this->___forEncryption_6;
		if (!L_20)
		{
			goto IL_019e;
		}
	}
	{
		int32_t L_21 = ___2_len;
		RuntimeObject* L_22 = __this->___engine_4;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_22);
		Check_DataLength_m2F2550C28CBC7D7B6045D7E5068AAC8E233713C4((bool)((!(((uint32_t)((int32_t)(L_21%L_23))) <= ((uint32_t)0)))? 1 : 0), _stringLiteral593CBFE95E3FA15438E893EF8E8CBD31F861CDE1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___0_input;
		int32_t L_25 = ___1_inOff;
		int32_t L_26 = ___2_len;
		KCcmBlockCipher_CalculateMac_mA4118A7BC12FE3E8A25246B06D3ED33DE020218E(__this, L_24, L_25, L_26, NULL);
		RuntimeObject* L_27 = __this->___engine_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->___nonce_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___s_13;
		NullCheck(L_27);
		int32_t L_30;
		L_30 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_27, L_28, 0, L_29, 0);
		int32_t L_31 = ___2_len;
		V_3 = L_31;
		goto IL_00f5;
	}

IL_00bb:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___0_input;
		int32_t L_33 = ___1_inOff;
		int32_t L_34 = ___2_len;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ___3_output;
		int32_t L_36 = ___4_outOff;
		KCcmBlockCipher_ProcessBlock_m249BA206E27B6B453359C3AF0CB88EC1C0FB88C0(__this, L_32, L_33, L_34, L_35, L_36, NULL);
		int32_t L_37 = V_3;
		RuntimeObject* L_38 = __this->___engine_4;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_38);
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_37, L_39));
		int32_t L_40 = ___1_inOff;
		RuntimeObject* L_41 = __this->___engine_4;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_41);
		___1_inOff = ((int32_t)il2cpp_codegen_add(L_40, L_42));
		int32_t L_43 = ___4_outOff;
		RuntimeObject* L_44 = __this->___engine_4;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_44);
		___4_outOff = ((int32_t)il2cpp_codegen_add(L_43, L_45));
	}

IL_00f5:
	{
		int32_t L_46 = V_3;
		if ((((int32_t)L_46) > ((int32_t)0)))
		{
			goto IL_00bb;
		}
	}
	{
		V_4 = 0;
		goto IL_011f;
	}

IL_00fe:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___s_13;
		int32_t L_48 = V_4;
		NullCheck(L_47);
		uint8_t* L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)));
		int32_t L_50 = *((uint8_t*)L_49);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = __this->___counter_14;
		int32_t L_52 = V_4;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		uint8_t L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		*((int8_t*)L_49) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(L_50, (int32_t)L_54)));
		int32_t L_55 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_011f:
	{
		int32_t L_56 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = __this->___counter_14;
		NullCheck(L_57);
		if ((((int32_t)L_56) < ((int32_t)((int32_t)(((RuntimeArray*)L_57)->max_length)))))
		{
			goto IL_00fe;
		}
	}
	{
		RuntimeObject* L_58 = __this->___engine_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = __this->___s_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = __this->___buffer_12;
		NullCheck(L_58);
		int32_t L_61;
		L_61 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_58, L_59, 0, L_60, 0);
		V_5 = 0;
		goto IL_016c;
	}

IL_014a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = ___3_output;
		int32_t L_63 = ___4_outOff;
		int32_t L_64 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = __this->___buffer_12;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		uint8_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = __this->___macBlock_9;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		uint8_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_63, L_64))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_68^(int32_t)L_72))));
		int32_t L_73 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_016c:
	{
		int32_t L_74 = V_5;
		int32_t L_75 = __this->___macSize_5;
		if ((((int32_t)L_74) < ((int32_t)L_75)))
		{
			goto IL_014a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = __this->___macBlock_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = __this->___mac_8;
		int32_t L_78 = __this->___macSize_5;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_76, 0, (RuntimeArray*)L_77, 0, L_78, NULL);
		VirtualActionInvoker0::Invoke(29 /* System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::Reset() */, __this);
		int32_t L_79 = ___2_len;
		int32_t L_80 = __this->___macSize_5;
		return ((int32_t)il2cpp_codegen_add(L_79, L_80));
	}

IL_019e:
	{
		int32_t L_81 = ___2_len;
		int32_t L_82 = __this->___macSize_5;
		RuntimeObject* L_83 = __this->___engine_4;
		NullCheck(L_83);
		int32_t L_84;
		L_84 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_83);
		Check_DataLength_m2F2550C28CBC7D7B6045D7E5068AAC8E233713C4((bool)((!(((uint32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(L_81, L_82))%L_84))) <= ((uint32_t)0)))? 1 : 0), _stringLiteral593CBFE95E3FA15438E893EF8E8CBD31F861CDE1, NULL);
		RuntimeObject* L_85 = __this->___engine_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = __this->___nonce_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = __this->___s_13;
		NullCheck(L_85);
		int32_t L_88;
		L_88 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_85, L_86, 0, L_87, 0);
		int32_t L_89 = ___2_len;
		RuntimeObject* L_90 = __this->___engine_4;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_90);
		V_6 = ((int32_t)(L_89/L_91));
		V_8 = 0;
		goto IL_021f;
	}

IL_01ed:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = ___0_input;
		int32_t L_93 = ___1_inOff;
		int32_t L_94 = ___2_len;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = ___3_output;
		int32_t L_96 = ___4_outOff;
		KCcmBlockCipher_ProcessBlock_m249BA206E27B6B453359C3AF0CB88EC1C0FB88C0(__this, L_92, L_93, L_94, L_95, L_96, NULL);
		int32_t L_97 = ___1_inOff;
		RuntimeObject* L_98 = __this->___engine_4;
		NullCheck(L_98);
		int32_t L_99;
		L_99 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_98);
		___1_inOff = ((int32_t)il2cpp_codegen_add(L_97, L_99));
		int32_t L_100 = ___4_outOff;
		RuntimeObject* L_101 = __this->___engine_4;
		NullCheck(L_101);
		int32_t L_102;
		L_102 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_101);
		___4_outOff = ((int32_t)il2cpp_codegen_add(L_100, L_102));
		int32_t L_103 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_103, 1));
	}

IL_021f:
	{
		int32_t L_104 = V_8;
		int32_t L_105 = V_6;
		if ((((int32_t)L_104) < ((int32_t)L_105)))
		{
			goto IL_01ed;
		}
	}
	{
		int32_t L_106 = ___2_len;
		int32_t L_107 = ___1_inOff;
		if ((((int32_t)L_106) <= ((int32_t)L_107)))
		{
			goto IL_02b1;
		}
	}
	{
		V_9 = 0;
		goto IL_0252;
	}

IL_0231:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_108 = __this->___s_13;
		int32_t L_109 = V_9;
		NullCheck(L_108);
		uint8_t* L_110 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_109)));
		int32_t L_111 = *((uint8_t*)L_110);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = __this->___counter_14;
		int32_t L_113 = V_9;
		NullCheck(L_112);
		int32_t L_114 = L_113;
		uint8_t L_115 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		*((int8_t*)L_110) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(L_111, (int32_t)L_115)));
		int32_t L_116 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_116, 1));
	}

IL_0252:
	{
		int32_t L_117 = V_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_118 = __this->___counter_14;
		NullCheck(L_118);
		if ((((int32_t)L_117) < ((int32_t)((int32_t)(((RuntimeArray*)L_118)->max_length)))))
		{
			goto IL_0231;
		}
	}
	{
		RuntimeObject* L_119 = __this->___engine_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_120 = __this->___s_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_121 = __this->___buffer_12;
		NullCheck(L_119);
		int32_t L_122;
		L_122 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_119, L_120, 0, L_121, 0);
		V_10 = 0;
		goto IL_029c;
	}

IL_027d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_123 = ___3_output;
		int32_t L_124 = ___4_outOff;
		int32_t L_125 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_126 = __this->___buffer_12;
		int32_t L_127 = V_10;
		NullCheck(L_126);
		int32_t L_128 = L_127;
		uint8_t L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_130 = ___0_input;
		int32_t L_131 = ___1_inOff;
		int32_t L_132 = V_10;
		NullCheck(L_130);
		int32_t L_133 = ((int32_t)il2cpp_codegen_add(L_131, L_132));
		uint8_t L_134 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		NullCheck(L_123);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_124, L_125))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_129^(int32_t)L_134))));
		int32_t L_135 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_135, 1));
	}

IL_029c:
	{
		int32_t L_136 = V_10;
		int32_t L_137 = __this->___macSize_5;
		if ((((int32_t)L_136) < ((int32_t)L_137)))
		{
			goto IL_027d;
		}
	}
	{
		int32_t L_138 = ___4_outOff;
		int32_t L_139 = __this->___macSize_5;
		___4_outOff = ((int32_t)il2cpp_codegen_add(L_138, L_139));
	}

IL_02b1:
	{
		V_11 = 0;
		goto IL_02d7;
	}

IL_02b6:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_140 = __this->___s_13;
		int32_t L_141 = V_11;
		NullCheck(L_140);
		uint8_t* L_142 = ((L_140)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_141)));
		int32_t L_143 = *((uint8_t*)L_142);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_144 = __this->___counter_14;
		int32_t L_145 = V_11;
		NullCheck(L_144);
		int32_t L_146 = L_145;
		uint8_t L_147 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		*((int8_t*)L_142) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(L_143, (int32_t)L_147)));
		int32_t L_148 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_148, 1));
	}

IL_02d7:
	{
		int32_t L_149 = V_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_150 = __this->___counter_14;
		NullCheck(L_150);
		if ((((int32_t)L_149) < ((int32_t)((int32_t)(((RuntimeArray*)L_150)->max_length)))))
		{
			goto IL_02b6;
		}
	}
	{
		RuntimeObject* L_151 = __this->___engine_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_152 = __this->___s_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_153 = __this->___buffer_12;
		NullCheck(L_151);
		int32_t L_154;
		L_154 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_151, L_152, 0, L_153, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_155 = ___3_output;
		int32_t L_156 = ___4_outOff;
		int32_t L_157 = __this->___macSize_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_158 = __this->___buffer_12;
		int32_t L_159 = __this->___macSize_5;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_155, ((int32_t)il2cpp_codegen_subtract(L_156, L_157)), (RuntimeArray*)L_158, 0, L_159, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_160 = ___3_output;
		int32_t L_161 = ___4_outOff;
		int32_t L_162 = __this->___macSize_5;
		KCcmBlockCipher_CalculateMac_mA4118A7BC12FE3E8A25246B06D3ED33DE020218E(__this, L_160, 0, ((int32_t)il2cpp_codegen_subtract(L_161, L_162)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_163 = __this->___macBlock_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_164 = __this->___mac_8;
		int32_t L_165 = __this->___macSize_5;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_163, 0, (RuntimeArray*)L_164, 0, L_165, NULL);
		int32_t L_166 = __this->___macSize_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_167 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_166);
		V_7 = L_167;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_168 = __this->___buffer_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_169 = V_7;
		int32_t L_170 = __this->___macSize_5;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_168, 0, (RuntimeArray*)L_169, 0, L_170, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_171 = __this->___mac_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_172 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_173;
		L_173 = Arrays_ConstantTimeAreEqual_m5AF040D6BA657E1B8D8CB8CB68340FB2D86203C2(L_171, L_172, NULL);
		if (L_173)
		{
			goto IL_0381;
		}
	}
	{
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_174 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		NullCheck(L_174);
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_174, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF2CE86BA69492C7DE55AB9B517CC2DAC4FB810)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_174, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KCcmBlockCipher_ProcessPacket_m344E885BC3D8DACAFD862BBB1FAE2F544BD324C2_RuntimeMethod_var)));
	}

IL_0381:
	{
		VirtualActionInvoker0::Invoke(29 /* System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::Reset() */, __this);
		int32_t L_175 = ___2_len;
		int32_t L_176 = __this->___macSize_5;
		return ((int32_t)il2cpp_codegen_subtract(L_175, L_176));
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_ProcessBlock_m249BA206E27B6B453359C3AF0CB88EC1C0FB88C0 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_len, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_output, int32_t ___4_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0021;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___s_13;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		uint8_t* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)));
		int32_t L_3 = *((uint8_t*)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___counter_14;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		*((int8_t*)L_2) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(L_3, (int32_t)L_7)));
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0021:
	{
		int32_t L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___counter_14;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		RuntimeObject* L_11 = __this->___engine_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___s_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___buffer_12;
		NullCheck(L_11);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_11, L_12, 0, L_13, 0);
		V_1 = 0;
		goto IL_0064;
	}

IL_004a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___3_output;
		int32_t L_16 = ___4_outOff;
		int32_t L_17 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___buffer_12;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___0_input;
		int32_t L_23 = ___1_inOff;
		int32_t L_24 = V_1;
		NullCheck(L_22);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add(L_23, L_24));
		uint8_t L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_16, L_17))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_21^(int32_t)L_26))));
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0064:
	{
		int32_t L_28 = V_1;
		RuntimeObject* L_29 = __this->___engine_4;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_29);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_004a;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::CalculateMac(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_CalculateMac_mA4118A7BC12FE3E8A25246B06D3ED33DE020218E (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_authText, int32_t ___1_authOff, int32_t ___2_len, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___2_len;
		V_0 = L_0;
		goto IL_0067;
	}

IL_0004:
	{
		V_1 = 0;
		goto IL_0022;
	}

IL_0008:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___macBlock_9;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		uint8_t* L_3 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)));
		int32_t L_4 = *((uint8_t*)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_authText;
		int32_t L_6 = ___1_authOff;
		int32_t L_7 = V_1;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		*((int8_t*)L_3) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_4^(int32_t)L_9)));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0022:
	{
		int32_t L_11 = V_1;
		RuntimeObject* L_12 = __this->___engine_4;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0008;
		}
	}
	{
		RuntimeObject* L_14 = __this->___engine_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___macBlock_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___macBlock_9;
		NullCheck(L_14);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_14, L_15, 0, L_16, 0);
		int32_t L_18 = V_0;
		RuntimeObject* L_19 = __this->___engine_4;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_19);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_18, L_20));
		int32_t L_21 = ___1_authOff;
		RuntimeObject* L_22 = __this->___engine_4;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_22);
		___1_authOff = ((int32_t)il2cpp_codegen_add(L_21, L_23));
	}

IL_0067:
	{
		int32_t L_24 = V_0;
		if ((((int32_t)L_24) > ((int32_t)0)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KCcmBlockCipher_DoFinal_m3E86CA5248EB6A288602971AFEBD2C0E82C8AFD9 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, int32_t ___1_outOff, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->___data_16;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(44 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_0);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		NullCheck(L_2);
		V_1 = ((int32_t)(((RuntimeArray*)L_2)->max_length));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		int32_t L_4 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_output;
		int32_t L_6 = ___1_outOff;
		int32_t L_7;
		L_7 = KCcmBlockCipher_ProcessPacket_m344E885BC3D8DACAFD862BBB1FAE2F544BD324C2(__this, L_3, 0, L_4, L_5, L_6, NULL);
		VirtualActionInvoker0::Invoke(29 /* System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::Reset() */, __this);
		return L_7;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::GetMac()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KCcmBlockCipher_GetMac_mDFC1015F53143B9066B4D1C5C5732727E9AA3613 (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mac_8;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Arrays_Clone_m5565718292F04770F6788351922E476D3BEF1A94(L_0, NULL);
		return L_1;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::GetUpdateOutputSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KCcmBlockCipher_GetUpdateOutputSize_mBCC09A00CBCC26C60788359A783FDA64B42A692F (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, int32_t ___0_len, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_len;
		return L_0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::GetOutputSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KCcmBlockCipher_GetOutputSize_mD6D3752267E5A854C2B2D2D94BBB643CB0D0CBEC (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, int32_t ___0_len, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_len;
		int32_t L_1 = __this->___macSize_5;
		return ((int32_t)il2cpp_codegen_add(L_0, L_1));
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_Reset_m01A08F7ED40297E2A21F96A0606ACE97604AFB8F (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___G1_11;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		Arrays_Fill_mE21DFB2A97B1AE17AFE700D6A367141498048242(L_0, (uint8_t)0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___buffer_12;
		Arrays_Fill_mE21DFB2A97B1AE17AFE700D6A367141498048242(L_1, (uint8_t)0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___counter_14;
		Arrays_Fill_mE21DFB2A97B1AE17AFE700D6A367141498048242(L_2, (uint8_t)0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___macBlock_9;
		Arrays_Fill_mE21DFB2A97B1AE17AFE700D6A367141498048242(L_3, (uint8_t)0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___counter_14;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)1);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_5 = __this->___data_16;
		NullCheck(L_5);
		VirtualActionInvoker1< int64_t >::Invoke(33 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_5, ((int64_t)0));
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_6 = __this->___associatedText_15;
		NullCheck(L_6);
		VirtualActionInvoker1< int64_t >::Invoke(33 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_6, ((int64_t)0));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___initialAssociatedText_7;
		if (!L_7)
		{
			goto IL_0070;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___initialAssociatedText_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___initialAssociatedText_7;
		NullCheck(L_9);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(22 /* System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::ProcessAadBytes(System.Byte[],System.Int32,System.Int32) */, __this, L_8, 0, ((int32_t)(((RuntimeArray*)L_9)->max_length)));
	}

IL_0070:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::intToBytes(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher_intToBytes_m16AC65329A63E3BDCB6643C4A0601D00FFD06A2D (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, int32_t ___0_num, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_outBytes, int32_t ___2_outOff, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_outBytes;
		int32_t L_1 = ___2_outOff;
		int32_t L_2 = ___0_num;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, 3))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_2>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_outBytes;
		int32_t L_4 = ___2_outOff;
		int32_t L_5 = ___0_num;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_5>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_outBytes;
		int32_t L_7 = ___2_outOff;
		int32_t L_8 = ___0_num;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_8>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___1_outBytes;
		int32_t L_10 = ___2_outOff;
		int32_t L_11 = ___0_num;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint8_t)((int32_t)(uint8_t)L_11));
		return;
	}
}
// System.Byte Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::getFlag(System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t KCcmBlockCipher_getFlag_mE35B88807B9FF2999EB5E7BD4B4C62BFDFDD888E (KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D* __this, bool ___0_authTextPresents, int32_t ___1_macSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01E187759622701239321907D0B46741BA9B86F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral508FADA7965A5CC9B9F3F205B9D7F61B002F4352);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6348AE9AC0D51DA91EE3554B61F63EF74190CB52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FE94193A3EF39943F898714AC9062F7EBD96279);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9037918EF368FDB9869069C353AC1D0AA985BD83);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		bool L_1 = ___0_authTextPresents;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_2 = V_0;
		NullCheck(L_2);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_2, _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, NULL);
		goto IL_0023;
	}

IL_0017:
	{
		StringBuilder_t* L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___1_macSize;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)16))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = ___1_macSize;
		if ((((int32_t)L_7) == ((int32_t)8)))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_8 = ___1_macSize;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)16))))
		{
			goto IL_0052;
		}
	}
	{
		goto IL_0088;
	}

IL_0033:
	{
		int32_t L_9 = ___1_macSize;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)32))))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_10 = ___1_macSize;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)48))))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_11 = ___1_macSize;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)64))))
		{
			goto IL_007c;
		}
	}
	{
		goto IL_0088;
	}

IL_0044:
	{
		StringBuilder_t* L_12 = V_0;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteral01E187759622701239321907D0B46741BA9B86F5, NULL);
		goto IL_0088;
	}

IL_0052:
	{
		StringBuilder_t* L_14 = V_0;
		NullCheck(L_14);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, _stringLiteral508FADA7965A5CC9B9F3F205B9D7F61B002F4352, NULL);
		goto IL_0088;
	}

IL_0060:
	{
		StringBuilder_t* L_16 = V_0;
		NullCheck(L_16);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, _stringLiteral8FE94193A3EF39943F898714AC9062F7EBD96279, NULL);
		goto IL_0088;
	}

IL_006e:
	{
		StringBuilder_t* L_18 = V_0;
		NullCheck(L_18);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, _stringLiteral6348AE9AC0D51DA91EE3554B61F63EF74190CB52, NULL);
		goto IL_0088;
	}

IL_007c:
	{
		StringBuilder_t* L_20 = V_0;
		NullCheck(L_20);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, _stringLiteral9037918EF368FDB9869069C353AC1D0AA985BD83, NULL);
	}

IL_0088:
	{
		int32_t L_22 = __this->___Nb__17;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_23;
		L_23 = Convert_ToString_mC3349029FE37EB00B5BFCB1F87022458A3834E35(((int32_t)il2cpp_codegen_subtract(L_22, 1)), 2, NULL);
		V_1 = L_23;
		goto IL_00b0;
	}

IL_0099:
	{
		String_t* L_24 = V_1;
		StringBuilder_t* L_25 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_25, L_24, NULL);
		NullCheck(L_25);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Insert_mEA426100381DD65FB6A891BA28B5F1208BEDDD29(L_25, 0, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		NullCheck(L_26);
		String_t* L_27;
		L_27 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_26);
		V_1 = L_27;
	}

IL_00b0:
	{
		String_t* L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_28, NULL);
		if ((((int32_t)L_29) < ((int32_t)4)))
		{
			goto IL_0099;
		}
	}
	{
		StringBuilder_t* L_30 = V_0;
		String_t* L_31 = V_1;
		NullCheck(L_30);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_30, L_31, NULL);
		StringBuilder_t* L_33 = V_0;
		NullCheck(L_33);
		String_t* L_34;
		L_34 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_33);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		int32_t L_35;
		L_35 = Convert_ToInt32_mD1B3AFBDA26E52D0382434804364FEF8BA241FB4(L_34, 2, NULL);
		return (uint8_t)((int32_t)(uint8_t)L_35);
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCcmBlockCipher::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCcmBlockCipher__cctor_mF345C3FFD0AB9763151C2A98B05DD65885D8F4B6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_StaticFields*)il2cpp_codegen_static_fields_for(KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var))->___BYTES_IN_INT_0 = 4;
		((KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_StaticFields*)il2cpp_codegen_static_fields_for(KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var))->___BITS_IN_BYTE_1 = 8;
		((KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_StaticFields*)il2cpp_codegen_static_fields_for(KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var))->___MAX_MAC_BIT_LENGTH_2 = ((int32_t)512);
		((KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_StaticFields*)il2cpp_codegen_static_fields_for(KCcmBlockCipher_t1CBC698B859C10ADE039A535DA532FC631B4232D_il2cpp_TypeInfo_var))->___MIN_MAC_BIT_LENGTH_3 = ((int32_t)64);
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
// System.Void Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCtrBlockCipher__ctor_m72F87F983C515F3454F474E27E1849A94909A8DE (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, RuntimeObject* ___0_cipher, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_cipher;
		__this->___cipher_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_6), (void*)L_0);
		RuntimeObject* L_1 = ___0_cipher;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->___IV_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IV_0), (void*)L_3);
		RuntimeObject* L_4 = ___0_cipher;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_4);
		__this->___blockSize_5 = L_5;
		RuntimeObject* L_6 = ___0_cipher;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->___ofbV_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ofbV_1), (void*)L_8);
		RuntimeObject* L_9 = ___0_cipher;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->___ofbOutV_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ofbOutV_2), (void*)L_11);
		return;
	}
}
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::GetUnderlyingCipher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* KCtrBlockCipher_GetUnderlyingCipher_m47B241608742C65A46F6F95C800D24D5B840CF6F (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___cipher_6;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCtrBlockCipher_Init_mD2FFC0E9F1D559998BD98F71A577DB5F828EDCE6 (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, bool ___0_forEncryption, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		__this->___initialised_3 = (bool)1;
		RuntimeObject* L_0 = ___1_parameters;
		if (!((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_0, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_1 = ___1_parameters;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_2 = ((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_1, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var));
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(L_2, NULL);
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___IV_0;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		NullCheck(L_5);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), ((int32_t)(((RuntimeArray*)L_5)->max_length))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___IV_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___IV_0;
		NullCheck(L_7);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, 0, ((int32_t)(((RuntimeArray*)L_7)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___IV_0;
		int32_t L_10 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_11);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, L_10, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		NullCheck(L_2);
		RuntimeObject* L_12;
		L_12 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_2, NULL);
		___1_parameters = L_12;
		goto IL_0062;
	}

IL_0057:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A2FA226E0BD2F452D9FB468B577991FF60938CD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KCtrBlockCipher_Init_mD2FFC0E9F1D559998BD98F71A577DB5F828EDCE6_RuntimeMethod_var)));
	}

IL_0062:
	{
		RuntimeObject* L_14 = ___1_parameters;
		if (!L_14)
		{
			goto IL_0072;
		}
	}
	{
		RuntimeObject* L_15 = __this->___cipher_6;
		RuntimeObject* L_16 = ___1_parameters;
		NullCheck(L_15);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_15, (bool)1, L_16);
	}

IL_0072:
	{
		KCtrBlockCipher_Reset_m6A4947B31FC2ED648DF6A2A80CE8AF8E8CC42A0A(__this, NULL);
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KCtrBlockCipher_get_AlgorithmName_mFA692BE947795FE741ADAFF10567717068A34D01 (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC690C3E3484DF59A062AC0913B3AA0F9E608C757);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___cipher_6;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralC690C3E3484DF59A062AC0913B3AA0F9E608C757, NULL);
		return L_2;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool KCtrBlockCipher_get_IsPartialBlockOkay_mA84E7ABCBDC19FB7111A0554BB4E46871610BF49 (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KCtrBlockCipher_GetBlockSize_mABF015BD46C03876D7BF7E8BF9CE6860CD77A743 (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___cipher_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Byte Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::ReturnByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t KCtrBlockCipher_ReturnByte_m3A32F77EB520D6C6CE04027427DF7F98E0369293 (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, uint8_t ___0_input, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_input;
		uint8_t L_1;
		L_1 = KCtrBlockCipher_CalculateByte_m978B111433891E0AF9E76CC865C64504CA093A43(__this, L_0, NULL);
		return L_1;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCtrBlockCipher_ProcessBytes_m079BC47B7944C6828B94289226A07878914FA8B6 (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_len, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_output, int32_t ___4_outOff, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___4_outOff;
		int32_t L_1 = ___2_len;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___3_output;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0015;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_3 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KCtrBlockCipher_ProcessBytes_m079BC47B7944C6828B94289226A07878914FA8B6_RuntimeMethod_var)));
	}

IL_0015:
	{
		int32_t L_4 = ___1_inOff;
		int32_t L_5 = ___2_len;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_input;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0028;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_7 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC19A67243F4A3B2010D2D94EAB2C299DEFFBC32F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KCtrBlockCipher_ProcessBytes_m079BC47B7944C6828B94289226A07878914FA8B6_RuntimeMethod_var)));
	}

IL_0028:
	{
		int32_t L_8 = ___1_inOff;
		V_0 = L_8;
		int32_t L_9 = ___1_inOff;
		int32_t L_10 = ___2_len;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		int32_t L_11 = ___4_outOff;
		V_2 = L_11;
		goto IL_0048;
	}

IL_0033:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___3_output;
		int32_t L_13 = V_2;
		int32_t L_14 = L_13;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_input;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		NullCheck(L_15);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		uint8_t L_20;
		L_20 = KCtrBlockCipher_CalculateByte_m978B111433891E0AF9E76CC865C64504CA093A43(__this, L_19, NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)L_20);
	}

IL_0048:
	{
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0033;
		}
	}
	{
		return;
	}
}
// System.Byte Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::CalculateByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t KCtrBlockCipher_CalculateByte_m978B111433891E0AF9E76CC865C64504CA093A43 (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, uint8_t ___0_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->___byteCount_4;
		if (L_0)
		{
			goto IL_004b;
		}
	}
	{
		KCtrBlockCipher_incrementCounterAt_m15EA59FF8C03506011D848CBE9928489BEFD345D(__this, 0, NULL);
		KCtrBlockCipher_checkCounter_m0999CDF444F2ABDF770F65E8A555CBD3212A9BBA(__this, NULL);
		RuntimeObject* L_1 = __this->___cipher_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___ofbV_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___ofbOutV_2;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_1, L_2, 0, L_3, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___ofbOutV_2;
		int32_t L_6 = __this->___byteCount_4;
		V_0 = L_6;
		int32_t L_7 = V_0;
		__this->___byteCount_4 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_0;
		NullCheck(L_5);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		uint8_t L_11 = ___0_b;
		return (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_10^(int32_t)L_11)));
	}

IL_004b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___ofbOutV_2;
		int32_t L_13 = __this->___byteCount_4;
		V_0 = L_13;
		int32_t L_14 = V_0;
		__this->___byteCount_4 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		int32_t L_15 = V_0;
		NullCheck(L_12);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		uint8_t L_18 = ___0_b;
		int32_t L_19 = __this->___byteCount_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___ofbV_1;
		NullCheck(L_20);
		G_B3_0 = ((int32_t)(uint8_t)((int32_t)((int32_t)L_17^(int32_t)L_18)));
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			G_B4_0 = ((int32_t)(uint8_t)((int32_t)((int32_t)L_17^(int32_t)L_18)));
			goto IL_007d;
		}
	}
	{
		__this->___byteCount_4 = 0;
		G_B4_0 = G_B3_0;
	}

IL_007d:
	{
		return (uint8_t)G_B4_0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t KCtrBlockCipher_ProcessBlock_m3510B9B3DF03C463C75EC814623432ACB6B1119C (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_output, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_input;
		NullCheck(L_0);
		int32_t L_1 = ___1_inOff;
		int32_t L_2;
		L_2 = KCtrBlockCipher_GetBlockSize_mABF015BD46C03876D7BF7E8BF9CE6860CD77A743(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), L_1))) >= ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_3 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEAC30D8C28806B51680D5DC521FC3C410F2D5B5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KCtrBlockCipher_ProcessBlock_m3510B9B3DF03C463C75EC814623432ACB6B1119C_RuntimeMethod_var)));
	}

IL_0018:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___2_output;
		NullCheck(L_4);
		int32_t L_5 = ___3_outOff;
		int32_t L_6;
		L_6 = KCtrBlockCipher_GetBlockSize_mABF015BD46C03876D7BF7E8BF9CE6860CD77A743(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), L_5))) >= ((int32_t)L_6)))
		{
			goto IL_0031;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_7 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KCtrBlockCipher_ProcessBlock_m3510B9B3DF03C463C75EC814623432ACB6B1119C_RuntimeMethod_var)));
	}

IL_0031:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_input;
		int32_t L_9 = ___1_inOff;
		int32_t L_10;
		L_10 = KCtrBlockCipher_GetBlockSize_mABF015BD46C03876D7BF7E8BF9CE6860CD77A743(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___2_output;
		int32_t L_12 = ___3_outOff;
		KCtrBlockCipher_ProcessBytes_m079BC47B7944C6828B94289226A07878914FA8B6(__this, L_8, L_9, L_10, L_11, L_12, NULL);
		int32_t L_13;
		L_13 = KCtrBlockCipher_GetBlockSize_mABF015BD46C03876D7BF7E8BF9CE6860CD77A743(__this, NULL);
		return L_13;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCtrBlockCipher_Reset_m6A4947B31FC2ED648DF6A2A80CE8AF8E8CC42A0A (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___initialised_3;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_1 = __this->___cipher_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___IV_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___ofbV_1;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_1, L_2, 0, L_3, 0);
	}

IL_0022:
	{
		RuntimeObject* L_5 = __this->___cipher_6;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(5 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Reset() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_5);
		__this->___byteCount_4 = 0;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::incrementCounterAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCtrBlockCipher_incrementCounterAt_m15EA59FF8C03506011D848CBE9928489BEFD345D (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, int32_t ___0_pos, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		int32_t L_0 = ___0_pos;
		V_0 = L_0;
		goto IL_001f;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___ofbV_1;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		NullCheck(L_1);
		uint8_t* L_4 = ((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)));
		int32_t L_5 = *((uint8_t*)L_4);
		V_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(L_5, 1)));
		uint8_t L_6 = V_1;
		*((int8_t*)L_4) = (int8_t)L_6;
		uint8_t L_7 = V_1;
		if (L_7)
		{
			goto IL_002a;
		}
	}

IL_001f:
	{
		int32_t L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___ofbV_1;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0004;
		}
	}

IL_002a:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.KCtrBlockCipher::checkCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KCtrBlockCipher_checkCounter_m0999CDF444F2ABDF770F65E8A555CBD3212A9BBA (KCtrBlockCipher_t4794F3C97F65EF46A3BA3737B8370203FCA2C347* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher__ctor_mD95F4616B211A789244A178A2B5E48A0E35C5861 (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, RuntimeObject* ___0_hashCipher, RuntimeObject* ___1_mainCipher, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)24));
		__this->___Stretch_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Stretch_10), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___OffsetMAIN_0_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OffsetMAIN_0_11), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___OffsetMAIN_20 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OffsetMAIN_20), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_3 = ___0_hashCipher;
		if (L_3)
		{
			goto IL_003b;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F9A983F97E640754D4FF0C422EC4417D6927478)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OcbBlockCipher__ctor_mD95F4616B211A789244A178A2B5E48A0E35C5861_RuntimeMethod_var)));
	}

IL_003b:
	{
		RuntimeObject* L_5 = ___0_hashCipher;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_5);
		if ((((int32_t)L_6) == ((int32_t)((int32_t)16))))
		{
			goto IL_0064;
		}
	}
	{
		V_0 = ((int32_t)16);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral41A2189BC076CA51A8306F66C8964C4E63B2B3CE)), L_7, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_9, L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F9A983F97E640754D4FF0C422EC4417D6927478)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OcbBlockCipher__ctor_mD95F4616B211A789244A178A2B5E48A0E35C5861_RuntimeMethod_var)));
	}

IL_0064:
	{
		RuntimeObject* L_10 = ___1_mainCipher;
		if (L_10)
		{
			goto IL_0072;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_11 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC18D414929C4A2ACC69D7D2EF4A0C9D467BBFE2F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OcbBlockCipher__ctor_mD95F4616B211A789244A178A2B5E48A0E35C5861_RuntimeMethod_var)));
	}

IL_0072:
	{
		RuntimeObject* L_12 = ___1_mainCipher;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_12);
		if ((((int32_t)L_13) == ((int32_t)((int32_t)16))))
		{
			goto IL_009b;
		}
	}
	{
		V_0 = ((int32_t)16);
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral41A2189BC076CA51A8306F66C8964C4E63B2B3CE)), L_14, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_16 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_16, L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC18D414929C4A2ACC69D7D2EF4A0C9D467BBFE2F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OcbBlockCipher__ctor_mD95F4616B211A789244A178A2B5E48A0E35C5861_RuntimeMethod_var)));
	}

IL_009b:
	{
		RuntimeObject* L_17 = ___0_hashCipher;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_17);
		RuntimeObject* L_19 = ___1_mainCipher;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_19);
		NullCheck(L_18);
		bool L_21;
		L_21 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_18, L_20, NULL);
		if (L_21)
		{
			goto IL_00b9;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_22 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6A97AB369F86F4B2FA00721206E1CD3F3E97A1E5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OcbBlockCipher__ctor_mD95F4616B211A789244A178A2B5E48A0E35C5861_RuntimeMethod_var)));
	}

IL_00b9:
	{
		RuntimeObject* L_23 = ___0_hashCipher;
		__this->___hashCipher_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hashCipher_1), (void*)L_23);
		RuntimeObject* L_24 = ___1_mainCipher;
		__this->___mainCipher_2 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainCipher_2), (void*)L_24);
		return;
	}
}
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::GetUnderlyingCipher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OcbBlockCipher_GetUnderlyingCipher_m477D9687C28734FC998A00578AC0D0F36BB88329 (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___mainCipher_2;
		return L_0;
	}
}
// System.String Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OcbBlockCipher_get_AlgorithmName_m70F0B4A0955A478B19589D3A5EA671362896C790 (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF91F11D46E8807FE33EB79CAE11A89BB6018A3D);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___mainCipher_2;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralDF91F11D46E8807FE33EB79CAE11A89BB6018A3D, NULL);
		return L_2;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher_Init_m4CCC51F169845704774A26A60D01A0FA7E335353 (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, bool ___0_forEncryption, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* G_B11_0 = NULL;
	OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* G_B12_1 = NULL;
	{
		bool L_0 = __this->___forEncryption_3;
		V_0 = L_0;
		bool L_1 = ___0_forEncryption;
		__this->___forEncryption_3 = L_1;
		__this->___macBlock_22 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___macBlock_22), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		RuntimeObject* L_2 = ___1_parameters;
		if (!((AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B*)IsInstClass((RuntimeObject*)L_2, AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var)))
		{
			goto IL_0083;
		}
	}
	{
		RuntimeObject* L_3 = ___1_parameters;
		V_5 = ((AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B*)CastclassClass((RuntimeObject*)L_3, AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var));
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_4 = V_5;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(7 /* System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::GetNonce() */, L_4);
		V_2 = L_5;
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_6 = V_5;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(6 /* System.Byte[] Org.BouncyCastle.Crypto.Parameters.AeadParameters::GetAssociatedText() */, L_6);
		__this->___initialAssociatedText_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___initialAssociatedText_5), (void*)L_7);
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_8 = V_5;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.Parameters.AeadParameters::get_MacSize() */, L_8);
		V_6 = L_9;
		int32_t L_10 = V_6;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)64))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_11 = V_6;
		if ((((int32_t)L_11) > ((int32_t)((int32_t)128))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_6;
		if (!((int32_t)(L_12%8)))
		{
			goto IL_006f;
		}
	}

IL_0058:
	{
		String_t* L_13;
		L_13 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_6), NULL);
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EBDAE183BC30C2AD6BD85811A7DA978BDAB9809)), L_13, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OcbBlockCipher_Init_m4CCC51F169845704774A26A60D01A0FA7E335353_RuntimeMethod_var)));
	}

IL_006f:
	{
		int32_t L_16 = V_6;
		__this->___macSize_4 = ((int32_t)(L_16/8));
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_17 = V_5;
		NullCheck(L_17);
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_18;
		L_18 = VirtualFuncInvoker0< KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* >::Invoke(4 /* Org.BouncyCastle.Crypto.Parameters.KeyParameter Org.BouncyCastle.Crypto.Parameters.AeadParameters::get_Key() */, L_17);
		V_1 = L_18;
		goto IL_00bf;
	}

IL_0083:
	{
		RuntimeObject* L_19 = ___1_parameters;
		if (!((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_19, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_20 = ___1_parameters;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_21 = ((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_20, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var));
		NullCheck(L_21);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(L_21, NULL);
		V_2 = L_22;
		__this->___initialAssociatedText_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___initialAssociatedText_5), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		__this->___macSize_4 = ((int32_t)16);
		NullCheck(L_21);
		RuntimeObject* L_23;
		L_23 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_21, NULL);
		V_1 = ((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_23, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var));
		goto IL_00bf;
	}

IL_00b4:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_24 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_24);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4AEFBB61F65FCA6B5F41F05AB7DEEECF9118783C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OcbBlockCipher_Init_m4CCC51F169845704774A26A60D01A0FA7E335353_RuntimeMethod_var)));
	}

IL_00bf:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___hashBlock_12 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hashBlock_12), (void*)L_25);
		bool L_26 = ___0_forEncryption;
		G_B10_0 = __this;
		if (L_26)
		{
			G_B11_0 = __this;
			goto IL_00db;
		}
	}
	{
		int32_t L_27 = __this->___macSize_4;
		G_B12_0 = ((int32_t)il2cpp_codegen_add(((int32_t)16), L_27));
		G_B12_1 = G_B10_0;
		goto IL_00dd;
	}

IL_00db:
	{
		G_B12_0 = ((int32_t)16);
		G_B12_1 = G_B11_0;
	}

IL_00dd:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)G_B12_0);
		NullCheck(G_B12_1);
		G_B12_1->___mainBlock_13 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&G_B12_1->___mainBlock_13), (void*)L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_2;
		if (L_29)
		{
			goto IL_00f1;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		V_2 = L_30;
	}

IL_00f1:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_2;
		NullCheck(L_31);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))) <= ((int32_t)((int32_t)15))))
		{
			goto IL_0103;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_32 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_32);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC2647BD6DA802D3F62530E32EF626870E784F2C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OcbBlockCipher_Init_m4CCC51F169845704774A26A60D01A0FA7E335353_RuntimeMethod_var)));
	}

IL_0103:
	{
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_33 = V_1;
		if (!L_33)
		{
			goto IL_0129;
		}
	}
	{
		RuntimeObject* L_34 = __this->___hashCipher_1;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_35 = V_1;
		NullCheck(L_34);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_34, (bool)1, L_35);
		RuntimeObject* L_36 = __this->___mainCipher_2;
		bool L_37 = ___0_forEncryption;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_38 = V_1;
		NullCheck(L_36);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_36, L_37, L_38);
		__this->___KtopInput_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KtopInput_9), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		goto IL_0138;
	}

IL_0129:
	{
		bool L_39 = V_0;
		bool L_40 = ___0_forEncryption;
		if ((((int32_t)L_39) == ((int32_t)L_40)))
		{
			goto IL_0138;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_41 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_41);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_41, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E0BB1099A2BB7E26AB1115B17E7A4107597EBF1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OcbBlockCipher_Init_m4CCC51F169845704774A26A60D01A0FA7E335353_RuntimeMethod_var)));
	}

IL_0138:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___L_Asterisk_7 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___L_Asterisk_7), (void*)L_42);
		RuntimeObject* L_43 = __this->___hashCipher_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = __this->___L_Asterisk_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = __this->___L_Asterisk_7;
		NullCheck(L_43);
		int32_t L_46;
		L_46 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_43, L_44, 0, L_45, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___L_Asterisk_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48;
		L_48 = OcbBlockCipher_OCB_double_mF9389380384059D0523557292468AE28FBAA35CE(L_47, NULL);
		__this->___L_Dollar_8 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___L_Dollar_8), (void*)L_48);
		il2cpp_codegen_runtime_class_init_inline(Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var);
		RuntimeObject* L_49;
		L_49 = Platform_CreateArrayList_mF7A2D52167B208F9F6E15D9405F1D52723B94E9E(NULL);
		__this->___L_6 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___L_6), (void*)L_49);
		RuntimeObject* L_50 = __this->___L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = __this->___L_Dollar_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52;
		L_52 = OcbBlockCipher_OCB_double_mF9389380384059D0523557292468AE28FBAA35CE(L_51, NULL);
		NullCheck(L_50);
		int32_t L_53;
		L_53 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_50, (RuntimeObject*)L_52);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_2;
		int32_t L_55;
		L_55 = VirtualFuncInvoker1< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(20 /* System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessNonce(System.Byte[]) */, __this, L_54);
		int32_t L_56 = L_55;
		V_3 = ((int32_t)(L_56%8));
		V_4 = ((int32_t)(L_56/8));
		int32_t L_57 = V_3;
		if (L_57)
		{
			goto IL_01bc;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = __this->___Stretch_10;
		int32_t L_59 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = __this->___OffsetMAIN_0_11;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_58, L_59, (RuntimeArray*)L_60, 0, ((int32_t)16), NULL);
		goto IL_0203;
	}

IL_01bc:
	{
		V_7 = 0;
		goto IL_01fd;
	}

IL_01c1:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = __this->___Stretch_10;
		int32_t L_62 = V_4;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		uint8_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		V_8 = L_64;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = __this->___Stretch_10;
		int32_t L_66 = V_4;
		int32_t L_67 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		V_4 = L_67;
		NullCheck(L_65);
		int32_t L_68 = L_67;
		uint8_t L_69 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_9 = L_69;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = __this->___OffsetMAIN_0_11;
		int32_t L_71 = V_7;
		uint32_t L_72 = V_8;
		int32_t L_73 = V_3;
		uint32_t L_74 = V_9;
		int32_t L_75 = V_3;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(L_71), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_72<<((int32_t)(L_73&((int32_t)31)))))|((int32_t)((uint32_t)L_74>>((int32_t)(((int32_t)il2cpp_codegen_subtract(8, L_75))&((int32_t)31)))))))));
		int32_t L_76 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01fd:
	{
		int32_t L_77 = V_7;
		if ((((int32_t)L_77) < ((int32_t)((int32_t)16))))
		{
			goto IL_01c1;
		}
	}

IL_0203:
	{
		__this->___hashBlockPos_14 = 0;
		__this->___mainBlockPos_15 = 0;
		__this->___hashBlockCount_16 = ((int64_t)0);
		__this->___mainBlockCount_17 = ((int64_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___OffsetHASH_18 = L_78;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___OffsetHASH_18), (void*)L_78);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___Sum_19 = L_79;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Sum_19), (void*)L_79);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = __this->___OffsetMAIN_0_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = __this->___OffsetMAIN_20;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_80, 0, (RuntimeArray*)L_81, 0, ((int32_t)16), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___Checksum_21 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Checksum_21), (void*)L_82);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = __this->___initialAssociatedText_5;
		if (!L_83)
		{
			goto IL_027a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = __this->___initialAssociatedText_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = __this->___initialAssociatedText_5;
		NullCheck(L_85);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(26 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessAadBytes(System.Byte[],System.Int32,System.Int32) */, __this, L_84, 0, ((int32_t)(((RuntimeArray*)L_85)->max_length)));
	}

IL_027a:
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessNonce(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OcbBlockCipher_ProcessNonce_mD1567E4BA792843805635AFFA336A6830D81CB2B (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_N, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_N;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_N;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_N;
		NullCheck(L_5);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_1, 0, (RuntimeArray*)L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_3)->max_length)), ((int32_t)(((RuntimeArray*)L_4)->max_length)))), ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		int32_t L_7 = __this->___macSize_4;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_7<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_N;
		NullCheck(L_9);
		NullCheck(L_8);
		uint8_t* L_10 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)15), ((int32_t)(((RuntimeArray*)L_9)->max_length)))))));
		int32_t L_11 = *((uint8_t*)L_10);
		*((int8_t*)L_10) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_11|1)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = ((int32_t)15);
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_1 = ((int32_t)((int32_t)L_14&((int32_t)63)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		NullCheck(L_15);
		uint8_t* L_16 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)15))));
		int32_t L_17 = *((uint8_t*)L_16);
		*((int8_t*)L_16) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_17&((int32_t)192))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___KtopInput_9;
		if (!L_18)
		{
			goto IL_0068;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___KtopInput_9;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Arrays_AreEqual_m93263147E08C039BD573B4D2A4921988053170B7(L_19, L_20, NULL);
		if (L_21)
		{
			goto IL_00bd;
		}
	}

IL_0068:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_2 = L_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_0;
		__this->___KtopInput_9 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___KtopInput_9), (void*)L_23);
		RuntimeObject* L_24 = __this->___hashCipher_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___KtopInput_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_2;
		NullCheck(L_24);
		int32_t L_27;
		L_27 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_24, L_25, 0, L_26, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___Stretch_10;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_28, 0, (RuntimeArray*)L_29, 0, ((int32_t)16), NULL);
		V_3 = 0;
		goto IL_00b9;
	}

IL_00a0:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->___Stretch_10;
		int32_t L_31 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_2;
		int32_t L_33 = V_3;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		uint8_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_2;
		int32_t L_37 = V_3;
		NullCheck(L_36);
		int32_t L_38 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		uint8_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)16), L_31))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_35^(int32_t)L_39))));
		int32_t L_40 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00b9:
	{
		int32_t L_41 = V_3;
		if ((((int32_t)L_41) < ((int32_t)8)))
		{
			goto IL_00a0;
		}
	}

IL_00bd:
	{
		int32_t L_42 = V_1;
		return L_42;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OcbBlockCipher_GetBlockSize_mAECA9C9AD9E8CD760F59F2FA3B436F3E5C85539D (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)16);
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::GetMac()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OcbBlockCipher_GetMac_m47312F16F373D990C6EEB761689D04943CEB4FD4 (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___macBlock_22;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___macBlock_22;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Arrays_Clone_m5565718292F04770F6788351922E476D3BEF1A94(L_1, NULL);
		return L_2;
	}

IL_0014:
	{
		int32_t L_3 = __this->___macSize_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		return L_4;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::GetOutputSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OcbBlockCipher_GetOutputSize_m3B7F44223AC21EB039C0644D18743579BF2C135B (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, int32_t ___0_len, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_len;
		int32_t L_1 = __this->___mainBlockPos_15;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		bool L_2 = __this->___forEncryption_3;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		int32_t L_4 = __this->___macSize_4;
		return ((int32_t)il2cpp_codegen_add(L_3, L_4));
	}

IL_001a:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = __this->___macSize_4;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = __this->___macSize_4;
		return ((int32_t)il2cpp_codegen_subtract(L_7, L_8));
	}

IL_002c:
	{
		return 0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::GetUpdateOutputSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OcbBlockCipher_GetUpdateOutputSize_m882602520E7A6672F8E869E5B2F08494C3878563 (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, int32_t ___0_len, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_len;
		int32_t L_1 = __this->___mainBlockPos_15;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		bool L_2 = __this->___forEncryption_3;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_3 = V_0;
		int32_t L_4 = __this->___macSize_4;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_001c;
		}
	}
	{
		return 0;
	}

IL_001c:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = __this->___macSize_4;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
	}

IL_0025:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_0;
		return ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)(L_8%((int32_t)16)))));
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessAadByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher_ProcessAadByte_m9ACBF6AB3F1B4421A684AC24A9D7501C8E4B74E3 (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, uint8_t ___0_input, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___hashBlock_12;
		int32_t L_1 = __this->___hashBlockPos_14;
		uint8_t L_2 = ___0_input;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)L_2);
		int32_t L_3 = __this->___hashBlockPos_14;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = V_0;
		__this->___hashBlockPos_14 = L_4;
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___hashBlock_12;
		NullCheck(L_6);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_002f;
		}
	}
	{
		VirtualActionInvoker0::Invoke(33 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessHashBlock() */, __this);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessAadBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher_ProcessAadBytes_mA4846984B600C26B68924584A25E9DB8979B590C (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_off, int32_t ___2_len, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_003b;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___hashBlock_12;
		int32_t L_1 = __this->___hashBlockPos_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_input;
		int32_t L_3 = ___1_off;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		uint8_t L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)L_6);
		int32_t L_7 = __this->___hashBlockPos_14;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_1;
		__this->___hashBlockPos_14 = L_8;
		int32_t L_9 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___hashBlock_12;
		NullCheck(L_10);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0037;
		}
	}
	{
		VirtualActionInvoker0::Invoke(33 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessHashBlock() */, __this);
	}

IL_0037:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003b:
	{
		int32_t L_12 = V_0;
		int32_t L_13 = ___2_len;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessByte(System.Byte,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OcbBlockCipher_ProcessByte_m072690D26449EED20298BB1C938D04860B187621 (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, uint8_t ___0_input, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_output, int32_t ___2_outOff, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mainBlock_13;
		int32_t L_1 = __this->___mainBlockPos_15;
		uint8_t L_2 = ___0_input;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)L_2);
		int32_t L_3 = __this->___mainBlockPos_15;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = V_0;
		__this->___mainBlockPos_15 = L_4;
		int32_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___mainBlock_13;
		NullCheck(L_6);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___1_output;
		int32_t L_8 = ___2_outOff;
		VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(34 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessMainBlock(System.Byte[],System.Int32) */, __this, L_7, L_8);
		return ((int32_t)16);
	}

IL_0034:
	{
		return 0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OcbBlockCipher_ProcessBytes_mF81372920D428C0947EE846AA7BA579BF29494DB (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_len, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_output, int32_t ___4_outOff, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0048;
	}

IL_0006:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mainBlock_13;
		int32_t L_1 = __this->___mainBlockPos_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_input;
		int32_t L_3 = ___1_inOff;
		int32_t L_4 = V_1;
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		uint8_t L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)L_6);
		int32_t L_7 = __this->___mainBlockPos_15;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_2;
		__this->___mainBlockPos_15 = L_8;
		int32_t L_9 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___mainBlock_13;
		NullCheck(L_10);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0044;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___3_output;
		int32_t L_12 = ___4_outOff;
		int32_t L_13 = V_0;
		VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(34 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessMainBlock(System.Byte[],System.Int32) */, __this, L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)));
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, ((int32_t)16)));
	}

IL_0044:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0048:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = ___2_len;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_18 = V_0;
		return L_18;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OcbBlockCipher_DoFinal_mF61E82DADC50ED931CB9DB096FE9A2001C213578 (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, int32_t ___1_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		bool L_0 = __this->___forEncryption_3;
		if (L_0)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_1 = __this->___mainBlockPos_15;
		int32_t L_2 = __this->___macSize_4;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0023;
		}
	}
	{
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_3 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4901277BD17A5B2F9FD51DCD98D6CE81842202C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OcbBlockCipher_DoFinal_mF61E82DADC50ED931CB9DB096FE9A2001C213578_RuntimeMethod_var)));
	}

IL_0023:
	{
		int32_t L_4 = __this->___mainBlockPos_15;
		int32_t L_5 = __this->___macSize_4;
		__this->___mainBlockPos_15 = ((int32_t)il2cpp_codegen_subtract(L_4, L_5));
		int32_t L_6 = __this->___macSize_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_0 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___mainBlock_13;
		int32_t L_9 = __this->___mainBlockPos_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		int32_t L_11 = __this->___macSize_4;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_005b:
	{
		int32_t L_12 = __this->___hashBlockPos_14;
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_0081;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___hashBlock_12;
		int32_t L_14 = __this->___hashBlockPos_14;
		OcbBlockCipher_OCB_extend_mD1545BD7077A9C374C87BDBBE36148801EAD19B4(L_13, L_14, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___L_Asterisk_7;
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(36 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::UpdateHASH(System.Byte[]) */, __this, L_15);
	}

IL_0081:
	{
		int32_t L_16 = __this->___mainBlockPos_15;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0141;
		}
	}
	{
		bool L_17 = __this->___forEncryption_3;
		if (!L_17)
		{
			goto IL_00b7;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___mainBlock_13;
		int32_t L_19 = __this->___mainBlockPos_15;
		OcbBlockCipher_OCB_extend_mD1545BD7077A9C374C87BDBBE36148801EAD19B4(L_18, L_19, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___Checksum_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___mainBlock_13;
		OcbBlockCipher_Xor_m84D8B4AA2CC63BE5CE01D60786CB8E3B4FB5C423(L_20, L_21, NULL);
	}

IL_00b7:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___OffsetMAIN_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___L_Asterisk_7;
		OcbBlockCipher_Xor_m84D8B4AA2CC63BE5CE01D60786CB8E3B4FB5C423(L_22, L_23, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_2 = L_24;
		RuntimeObject* L_25 = __this->___hashCipher_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___OffsetMAIN_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_2;
		NullCheck(L_25);
		int32_t L_28;
		L_28 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_25, L_26, 0, L_27, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___mainBlock_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_2;
		OcbBlockCipher_Xor_m84D8B4AA2CC63BE5CE01D60786CB8E3B4FB5C423(L_29, L_30, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___0_output;
		int32_t L_32 = ___1_outOff;
		int32_t L_33 = __this->___mainBlockPos_15;
		Check_OutputLength_mFBD480CE544E8B2C4EFAD3A12D1E105DC36FFA68(L_31, L_32, L_33, _stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___mainBlock_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ___0_output;
		int32_t L_36 = ___1_outOff;
		int32_t L_37 = __this->___mainBlockPos_15;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_34, 0, (RuntimeArray*)L_35, L_36, L_37, NULL);
		bool L_38 = __this->___forEncryption_3;
		if (L_38)
		{
			goto IL_0141;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = __this->___mainBlock_13;
		int32_t L_40 = __this->___mainBlockPos_15;
		OcbBlockCipher_OCB_extend_mD1545BD7077A9C374C87BDBBE36148801EAD19B4(L_39, L_40, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = __this->___Checksum_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = __this->___mainBlock_13;
		OcbBlockCipher_Xor_m84D8B4AA2CC63BE5CE01D60786CB8E3B4FB5C423(L_41, L_42, NULL);
	}

IL_0141:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = __this->___Checksum_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = __this->___OffsetMAIN_20;
		OcbBlockCipher_Xor_m84D8B4AA2CC63BE5CE01D60786CB8E3B4FB5C423(L_43, L_44, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = __this->___Checksum_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = __this->___L_Dollar_8;
		OcbBlockCipher_Xor_m84D8B4AA2CC63BE5CE01D60786CB8E3B4FB5C423(L_45, L_46, NULL);
		RuntimeObject* L_47 = __this->___hashCipher_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = __this->___Checksum_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = __this->___Checksum_21;
		NullCheck(L_47);
		int32_t L_50;
		L_50 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_47, L_48, 0, L_49, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = __this->___Checksum_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = __this->___Sum_19;
		OcbBlockCipher_Xor_m84D8B4AA2CC63BE5CE01D60786CB8E3B4FB5C423(L_51, L_52, NULL);
		int32_t L_53 = __this->___macSize_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_53);
		__this->___macBlock_22 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___macBlock_22), (void*)L_54);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = __this->___Checksum_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = __this->___macBlock_22;
		int32_t L_57 = __this->___macSize_4;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_55, 0, (RuntimeArray*)L_56, 0, L_57, NULL);
		int32_t L_58 = __this->___mainBlockPos_15;
		V_1 = L_58;
		bool L_59 = __this->___forEncryption_3;
		if (!L_59)
		{
			goto IL_01fc;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = ___0_output;
		int32_t L_61 = ___1_outOff;
		int32_t L_62 = V_1;
		int32_t L_63 = __this->___macSize_4;
		Check_OutputLength_mFBD480CE544E8B2C4EFAD3A12D1E105DC36FFA68(L_60, L_61, ((int32_t)il2cpp_codegen_add(L_62, L_63)), _stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = __this->___macBlock_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = ___0_output;
		int32_t L_66 = ___1_outOff;
		int32_t L_67 = V_1;
		int32_t L_68 = __this->___macSize_4;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_64, 0, (RuntimeArray*)L_65, ((int32_t)il2cpp_codegen_add(L_66, L_67)), L_68, NULL);
		int32_t L_69 = V_1;
		int32_t L_70 = __this->___macSize_4;
		V_1 = ((int32_t)il2cpp_codegen_add(L_69, L_70));
		goto IL_0215;
	}

IL_01fc:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = __this->___macBlock_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_73;
		L_73 = Arrays_ConstantTimeAreEqual_m5AF040D6BA657E1B8D8CB8CB68340FB2D86203C2(L_71, L_72, NULL);
		if (L_73)
		{
			goto IL_0215;
		}
	}
	{
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_74 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		NullCheck(L_74);
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_74, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA60FCC00D6D4CA6783A659EEC3F2851AEA8D66AD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_74, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OcbBlockCipher_DoFinal_mF61E82DADC50ED931CB9DB096FE9A2001C213578_RuntimeMethod_var)));
	}

IL_0215:
	{
		VirtualActionInvoker1< bool >::Invoke(35 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Reset(System.Boolean) */, __this, (bool)0);
		int32_t L_75 = V_1;
		return L_75;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher_Reset_m4E3D871D62E7A67343A66CC6FDE5CB6677257A54 (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, const RuntimeMethod* method) 
{
	{
		VirtualActionInvoker1< bool >::Invoke(35 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Reset(System.Boolean) */, __this, (bool)1);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Clear(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher_Clear_mBF9B88A6E2D823B78E448C284E57F31DB9FB9247 (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bs;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_bs;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_bs;
		NullCheck(L_2);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
	}

IL_000d:
	{
		return;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::GetLSub(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OcbBlockCipher_GetLSub_mE2F23D6AC7EBD0F5E59EE1796EE0E309443658AE (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, int32_t ___0_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0030;
	}

IL_0002:
	{
		RuntimeObject* L_0 = __this->___L_6;
		RuntimeObject* L_1 = __this->___L_6;
		RuntimeObject* L_2 = __this->___L_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_1);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_1, ((int32_t)il2cpp_codegen_subtract(L_3, 1)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = OcbBlockCipher_OCB_double_mF9389380384059D0523557292468AE28FBAA35CE(((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_4, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_0);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, (RuntimeObject*)L_5);
	}

IL_0030:
	{
		int32_t L_7 = ___0_n;
		RuntimeObject* L_8 = __this->___L_6;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_8);
		if ((((int32_t)L_7) >= ((int32_t)L_9)))
		{
			goto IL_0002;
		}
	}
	{
		RuntimeObject* L_10 = __this->___L_6;
		int32_t L_11 = ___0_n;
		NullCheck(L_10);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_10, L_11);
		return ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_12, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessHashBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher_ProcessHashBlock_m0D8D086555BB54715B2AD2C6E3D2ECAD1FE9B3B9 (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->___hashBlockCount_16;
		V_0 = ((int64_t)il2cpp_codegen_add(L_0, ((int64_t)1)));
		int64_t L_1 = V_0;
		__this->___hashBlockCount_16 = L_1;
		int64_t L_2 = V_0;
		int32_t L_3;
		L_3 = OcbBlockCipher_OCB_ntz_mF9DF24257B562D51C5F2E18135B7479F2C793C4A(L_2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(32 /* System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::GetLSub(System.Int32) */, __this, L_3);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(36 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::UpdateHASH(System.Byte[]) */, __this, L_4);
		__this->___hashBlockPos_14 = 0;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessMainBlock(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher_ProcessMainBlock_m11CEB0AAE1D33EFEA6B8003A4D547BAC33BB7F8F (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, int32_t ___1_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_output;
		int32_t L_1 = ___1_outOff;
		Check_DataLength_m4BEA4E45985CDB8967A7C3C71799B9036DDCC991(L_0, L_1, ((int32_t)16), _stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C, NULL);
		bool L_2 = __this->___forEncryption_3;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___Checksum_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___mainBlock_13;
		OcbBlockCipher_Xor_m84D8B4AA2CC63BE5CE01D60786CB8E3B4FB5C423(L_3, L_4, NULL);
		__this->___mainBlockPos_15 = 0;
	}

IL_002e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___OffsetMAIN_20;
		int64_t L_6 = __this->___mainBlockCount_17;
		V_0 = ((int64_t)il2cpp_codegen_add(L_6, ((int64_t)1)));
		int64_t L_7 = V_0;
		__this->___mainBlockCount_17 = L_7;
		int64_t L_8 = V_0;
		int32_t L_9;
		L_9 = OcbBlockCipher_OCB_ntz_mF9DF24257B562D51C5F2E18135B7479F2C793C4A(L_8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(32 /* System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::GetLSub(System.Int32) */, __this, L_9);
		OcbBlockCipher_Xor_m84D8B4AA2CC63BE5CE01D60786CB8E3B4FB5C423(L_5, L_10, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___mainBlock_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___OffsetMAIN_20;
		OcbBlockCipher_Xor_m84D8B4AA2CC63BE5CE01D60786CB8E3B4FB5C423(L_11, L_12, NULL);
		RuntimeObject* L_13 = __this->___mainCipher_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___mainBlock_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___mainBlock_13;
		NullCheck(L_13);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_13, L_14, 0, L_15, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___mainBlock_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___OffsetMAIN_20;
		OcbBlockCipher_Xor_m84D8B4AA2CC63BE5CE01D60786CB8E3B4FB5C423(L_17, L_18, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___mainBlock_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___0_output;
		int32_t L_21 = ___1_outOff;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_19, 0, (RuntimeArray*)L_20, L_21, ((int32_t)16), NULL);
		bool L_22 = __this->___forEncryption_3;
		if (L_22)
		{
			goto IL_00e1;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___Checksum_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___mainBlock_13;
		OcbBlockCipher_Xor_m84D8B4AA2CC63BE5CE01D60786CB8E3B4FB5C423(L_23, L_24, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___mainBlock_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___mainBlock_13;
		int32_t L_27 = __this->___macSize_4;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_25, ((int32_t)16), (RuntimeArray*)L_26, 0, L_27, NULL);
		int32_t L_28 = __this->___macSize_4;
		__this->___mainBlockPos_15 = L_28;
	}

IL_00e1:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Reset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher_Reset_m89E40D633651E4745C675C3D06DA3C132D35446D (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, bool ___0_clearMac, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___hashCipher_1;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(5 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Reset() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_1 = __this->___mainCipher_2;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(5 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Reset() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___hashBlock_12;
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(31 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Clear(System.Byte[]) */, __this, L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___mainBlock_13;
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(31 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Clear(System.Byte[]) */, __this, L_3);
		__this->___hashBlockPos_14 = 0;
		__this->___mainBlockPos_15 = 0;
		__this->___hashBlockCount_16 = ((int64_t)0);
		__this->___mainBlockCount_17 = ((int64_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___OffsetHASH_18;
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(31 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Clear(System.Byte[]) */, __this, L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___Sum_19;
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(31 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Clear(System.Byte[]) */, __this, L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___OffsetMAIN_0_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___OffsetMAIN_20;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, 0, (RuntimeArray*)L_7, 0, ((int32_t)16), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___Checksum_21;
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(31 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Clear(System.Byte[]) */, __this, L_8);
		bool L_9 = ___0_clearMac;
		if (!L_9)
		{
			goto IL_008f;
		}
	}
	{
		__this->___macBlock_22 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___macBlock_22), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
	}

IL_008f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___initialAssociatedText_5;
		if (!L_10)
		{
			goto IL_00ac;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___initialAssociatedText_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___initialAssociatedText_5;
		NullCheck(L_12);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(26 /* System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ProcessAadBytes(System.Byte[],System.Int32,System.Int32) */, __this, L_11, 0, ((int32_t)(((RuntimeArray*)L_12)->max_length)));
	}

IL_00ac:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::UpdateHASH(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher_UpdateHASH_mB249793FB41D5944EFC05E49D5E7E4DED9744EE8 (OcbBlockCipher_tAA3319B726D3CB17881112C1F82DD063877C95F8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_LSub, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___OffsetHASH_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_LSub;
		OcbBlockCipher_Xor_m84D8B4AA2CC63BE5CE01D60786CB8E3B4FB5C423(L_0, L_1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___hashBlock_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___OffsetHASH_18;
		OcbBlockCipher_Xor_m84D8B4AA2CC63BE5CE01D60786CB8E3B4FB5C423(L_2, L_3, NULL);
		RuntimeObject* L_4 = __this->___hashCipher_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___hashBlock_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___hashBlock_12;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_4, L_5, 0, L_6, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___Sum_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___hashBlock_12;
		OcbBlockCipher_Xor_m84D8B4AA2CC63BE5CE01D60786CB8E3B4FB5C423(L_8, L_9, NULL);
		return;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::OCB_double(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OcbBlockCipher_OCB_double_mF9389380384059D0523557292468AE28FBAA35CE (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_block, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_block;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		int32_t L_3;
		L_3 = OcbBlockCipher_ShiftLeft_m34C629F94C1448B8A3B4FC73E730923038E4F3CF(L_1, L_2, NULL);
		V_1 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		uint8_t* L_5 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)15))));
		int32_t L_6 = *((uint8_t*)L_5);
		int32_t L_7 = V_1;
		*((int8_t*)L_5) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_6^((int32_t)(uint8_t)((int32_t)(((int32_t)135)>>((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_subtract(1, L_7))<<3))&((int32_t)31)))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		return L_8;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::OCB_extend(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher_OCB_extend_mD1545BD7077A9C374C87BDBBE36148801EAD19B4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_block, int32_t ___1_pos, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_block;
		int32_t L_1 = ___1_pos;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)128));
		goto IL_000e;
	}

IL_000a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_block;
		int32_t L_3 = ___1_pos;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)0);
	}

IL_000e:
	{
		int32_t L_4 = ___1_pos;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		___1_pos = L_5;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)16))))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::OCB_ntz(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OcbBlockCipher_OCB_ntz_mF9DF24257B562D51C5F2E18135B7479F2C793C4A (int64_t ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint64_t V_1 = 0;
	{
		int64_t L_0 = ___0_x;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		return ((int32_t)64);
	}

IL_0006:
	{
		V_0 = 0;
		int64_t L_1 = ___0_x;
		V_1 = L_1;
		goto IL_0014;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		uint64_t L_3 = V_1;
		V_1 = ((int64_t)((uint64_t)L_3>>1));
	}

IL_0014:
	{
		uint64_t L_4 = V_1;
		if (!((int64_t)((int64_t)L_4&((int64_t)1))))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::ShiftLeft(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OcbBlockCipher_ShiftLeft_m34C629F94C1448B8A3B4FC73E730923038E4F3CF (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_block, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_output, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		V_0 = ((int32_t)16);
		V_1 = 0;
		goto IL_001a;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_block;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_2 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_output;
		int32_t L_5 = V_0;
		uint32_t L_6 = V_2;
		uint32_t L_7 = V_1;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_6<<1))|(int32_t)L_7))));
		uint32_t L_8 = V_2;
		V_1 = ((int32_t)(((int32_t)((uint32_t)L_8>>7))&1));
	}

IL_001a:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		V_0 = L_10;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0007;
		}
	}
	{
		uint32_t L_11 = V_1;
		return L_11;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.OcbBlockCipher::Xor(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcbBlockCipher_Xor_m84D8B4AA2CC63BE5CE01D60786CB8E3B4FB5C423 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_block, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_val, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = ((int32_t)15);
		goto IL_0018;
	}

IL_0005:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_block;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		uint8_t* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)));
		int32_t L_3 = *((uint8_t*)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_val;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		*((int8_t*)L_2) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_3^(int32_t)L_7)));
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}

IL_0018:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0005;
		}
	}
	{
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
// System.Void Org.BouncyCastle.Crypto.Modes.OfbBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OfbBlockCipher__ctor_mC3A82EB8E237539A6799B05FD5506DAD9F4DEC7B (OfbBlockCipher_t72A403CDCDA517916A318565473D48F651DC4A4A* __this, RuntimeObject* ___0_cipher, int32_t ___1_blockSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_cipher;
		__this->___cipher_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_4), (void*)L_0);
		int32_t L_1 = ___1_blockSize;
		__this->___blockSize_3 = ((int32_t)(L_1/8));
		RuntimeObject* L_2 = ___0_cipher;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->___IV_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IV_0), (void*)L_4);
		RuntimeObject* L_5 = ___0_cipher;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___ofbV_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ofbV_1), (void*)L_7);
		RuntimeObject* L_8 = ___0_cipher;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_9);
		__this->___ofbOutV_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ofbOutV_2), (void*)L_10);
		return;
	}
}
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.OfbBlockCipher::GetUnderlyingCipher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OfbBlockCipher_GetUnderlyingCipher_mC3D4792CC18A547684DA40958A3548254B1BB0D7 (OfbBlockCipher_t72A403CDCDA517916A318565473D48F651DC4A4A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___cipher_4;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.OfbBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OfbBlockCipher_Init_mB066F704FABC78B67E54391ED46587E68D472ADA (OfbBlockCipher_t72A403CDCDA517916A318565473D48F651DC4A4A* __this, bool ___0_forEncryption, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_parameters;
		if (!((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_0, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_007f;
		}
	}
	{
		RuntimeObject* L_1 = ___1_parameters;
		V_0 = ((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_1, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var));
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_2 = V_0;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(L_2, NULL);
		V_1 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___IV_0;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0061;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___IV_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___IV_0;
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		NullCheck(L_10);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, 0, (RuntimeArray*)L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), ((int32_t)(((RuntimeArray*)L_9)->max_length)))), ((int32_t)(((RuntimeArray*)L_10)->max_length)), NULL);
		V_2 = 0;
		goto IL_0050;
	}

IL_0043:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___IV_0;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint8_t)0);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___IV_0;
		NullCheck(L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), ((int32_t)(((RuntimeArray*)L_16)->max_length)))))))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0077;
	}

IL_0061:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___IV_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___IV_0;
		NullCheck(L_19);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_17, 0, (RuntimeArray*)L_18, 0, ((int32_t)(((RuntimeArray*)L_19)->max_length)), NULL);
	}

IL_0077:
	{
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_20 = V_0;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_20, NULL);
		___1_parameters = L_21;
	}

IL_007f:
	{
		OfbBlockCipher_Reset_mD37835704D0D3CB0946C81924259FA3301483570(__this, NULL);
		RuntimeObject* L_22 = ___1_parameters;
		if (!L_22)
		{
			goto IL_0095;
		}
	}
	{
		RuntimeObject* L_23 = __this->___cipher_4;
		RuntimeObject* L_24 = ___1_parameters;
		NullCheck(L_23);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_23, (bool)1, L_24);
	}

IL_0095:
	{
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Modes.OfbBlockCipher::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OfbBlockCipher_get_AlgorithmName_m13021EBA7556E5D003B321D86F86D60CDFD05B66 (OfbBlockCipher_t72A403CDCDA517916A318565473D48F651DC4A4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED443665193280814467D04B48B265709B5BB7BB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->___cipher_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		int32_t L_2 = __this->___blockSize_3;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_2, 8));
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, _stringLiteralED443665193280814467D04B48B265709B5BB7BB, L_3, NULL);
		return L_4;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Modes.OfbBlockCipher::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OfbBlockCipher_get_IsPartialBlockOkay_m499C48507EE0808DCFEABE29102619EF9644894A (OfbBlockCipher_t72A403CDCDA517916A318565473D48F651DC4A4A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.OfbBlockCipher::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OfbBlockCipher_GetBlockSize_m7FB63CDB4C0C88AE5114066DB01220E5CFD3841A (OfbBlockCipher_t72A403CDCDA517916A318565473D48F651DC4A4A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___blockSize_3;
		return L_0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.OfbBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OfbBlockCipher_ProcessBlock_mF03390EFB9295135EC5EE2CF9CB40920DF6E62C4 (OfbBlockCipher_t72A403CDCDA517916A318565473D48F651DC4A4A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_output, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_inOff;
		int32_t L_1 = __this->___blockSize_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_input;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_3 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OfbBlockCipher_ProcessBlock_mF03390EFB9295135EC5EE2CF9CB40920DF6E62C4_RuntimeMethod_var)));
	}

IL_0018:
	{
		int32_t L_4 = ___3_outOff;
		int32_t L_5 = __this->___blockSize_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___2_output;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0031;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_7 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OfbBlockCipher_ProcessBlock_mF03390EFB9295135EC5EE2CF9CB40920DF6E62C4_RuntimeMethod_var)));
	}

IL_0031:
	{
		RuntimeObject* L_8 = __this->___cipher_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___ofbV_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___ofbOutV_2;
		NullCheck(L_8);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_8, L_9, 0, L_10, 0);
		V_0 = 0;
		goto IL_0068;
	}

IL_004f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___2_output;
		int32_t L_13 = ___3_outOff;
		int32_t L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___ofbOutV_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___0_input;
		int32_t L_20 = ___1_inOff;
		int32_t L_21 = V_0;
		NullCheck(L_19);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_20, L_21));
		uint8_t L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_13, L_14))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_18^(int32_t)L_23))));
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0068:
	{
		int32_t L_25 = V_0;
		int32_t L_26 = __this->___blockSize_3;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->___ofbV_1;
		int32_t L_28 = __this->___blockSize_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___ofbV_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->___ofbV_1;
		NullCheck(L_30);
		int32_t L_31 = __this->___blockSize_3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_27, L_28, (RuntimeArray*)L_29, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_30)->max_length)), L_31)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = __this->___ofbOutV_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = __this->___ofbV_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___ofbV_1;
		NullCheck(L_34);
		int32_t L_35 = __this->___blockSize_3;
		int32_t L_36 = __this->___blockSize_3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_32, 0, (RuntimeArray*)L_33, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_34)->max_length)), L_35)), L_36, NULL);
		int32_t L_37 = __this->___blockSize_3;
		return L_37;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.OfbBlockCipher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OfbBlockCipher_Reset_mD37835704D0D3CB0946C81924259FA3301483570 (OfbBlockCipher_t72A403CDCDA517916A318565473D48F651DC4A4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___IV_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___ofbV_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___IV_0;
		NullCheck(L_2);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		RuntimeObject* L_3 = __this->___cipher_4;
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(5 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Reset() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_3);
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
// System.Void Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenPgpCfbBlockCipher__ctor_m004F97DA42DB2E15A35737661DDF776BF77A3EAA (OpenPgpCfbBlockCipher_t26FDB232414CBB4030BD3AD43F7EFC2A9329CF6B* __this, RuntimeObject* ___0_cipher, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_cipher;
		__this->___cipher_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_3), (void*)L_0);
		RuntimeObject* L_1 = ___0_cipher;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_1);
		__this->___blockSize_4 = L_2;
		int32_t L_3 = __this->___blockSize_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->___IV_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IV_0), (void*)L_4);
		int32_t L_5 = __this->___blockSize_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		__this->___FR_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FR_1), (void*)L_6);
		int32_t L_7 = __this->___blockSize_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->___FRE_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___FRE_2), (void*)L_8);
		return;
	}
}
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::GetUnderlyingCipher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OpenPgpCfbBlockCipher_GetUnderlyingCipher_m9F0FE22209E5EC8F7FE80575C00C58ECF9FD032C (OpenPgpCfbBlockCipher_t26FDB232414CBB4030BD3AD43F7EFC2A9329CF6B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___cipher_3;
		return L_0;
	}
}
// System.String Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OpenPgpCfbBlockCipher_get_AlgorithmName_mF3412DEC19994A19B3BCBF323B68D19EDF12AB7C (OpenPgpCfbBlockCipher_t26FDB232414CBB4030BD3AD43F7EFC2A9329CF6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC8251D29BA8DB6132478DCBA316EB17DC929F67);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___cipher_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralBC8251D29BA8DB6132478DCBA316EB17DC929F67, NULL);
		return L_2;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OpenPgpCfbBlockCipher_get_IsPartialBlockOkay_mAE723B581D6DC0C03C41BCE8DFA73C572EEEDA04 (OpenPgpCfbBlockCipher_t26FDB232414CBB4030BD3AD43F7EFC2A9329CF6B* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenPgpCfbBlockCipher_GetBlockSize_mA6502E542BAC87EB50419DD1BE63A20C0CDFEFB0 (OpenPgpCfbBlockCipher_t26FDB232414CBB4030BD3AD43F7EFC2A9329CF6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___cipher_3;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenPgpCfbBlockCipher_ProcessBlock_m1E3773E9307F7285C3AA9DC2A655C0BB57AE4A64 (OpenPgpCfbBlockCipher_t26FDB232414CBB4030BD3AD43F7EFC2A9329CF6B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_output, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___forEncryption_6;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_input;
		int32_t L_2 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___2_output;
		int32_t L_4 = ___3_outOff;
		int32_t L_5;
		L_5 = OpenPgpCfbBlockCipher_DecryptBlock_mE57690EA4975784C8A038234186780E1C0153EF3(__this, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_input;
		int32_t L_7 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___2_output;
		int32_t L_9 = ___3_outOff;
		int32_t L_10;
		L_10 = OpenPgpCfbBlockCipher_EncryptBlock_mB03D14664C3EFCBDFCD5A9116BDA21B258FB7B90(__this, L_6, L_7, L_8, L_9, NULL);
		return L_10;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenPgpCfbBlockCipher_Reset_m30647DD13ED5B1DFBB3EA2B471F7C615142519A6 (OpenPgpCfbBlockCipher_t26FDB232414CBB4030BD3AD43F7EFC2A9329CF6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___count_5 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___IV_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___FR_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___FR_1;
		NullCheck(L_2);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		RuntimeObject* L_3 = __this->___cipher_3;
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(5 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Reset() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_3);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenPgpCfbBlockCipher_Init_mE7CE492C69D6D728689BC4F4B9CB8389E7049751 (OpenPgpCfbBlockCipher_t26FDB232414CBB4030BD3AD43F7EFC2A9329CF6B* __this, bool ___0_forEncryption, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	{
		bool L_0 = ___0_forEncryption;
		__this->___forEncryption_6 = L_0;
		RuntimeObject* L_1 = ___1_parameters;
		if (!((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_1, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_0086;
		}
	}
	{
		RuntimeObject* L_2 = ___1_parameters;
		V_0 = ((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_2, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var));
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_3 = V_0;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(L_3, NULL);
		V_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___IV_0;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0068;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___IV_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___IV_0;
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_1;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_1;
		NullCheck(L_11);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, 0, (RuntimeArray*)L_8, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), ((int32_t)(((RuntimeArray*)L_10)->max_length)))), ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		V_2 = 0;
		goto IL_0057;
	}

IL_004a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___IV_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint8_t)0);
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0057:
	{
		int32_t L_15 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___IV_0;
		NullCheck(L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), ((int32_t)(((RuntimeArray*)L_17)->max_length)))))))
		{
			goto IL_004a;
		}
	}
	{
		goto IL_007e;
	}

IL_0068:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___IV_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___IV_0;
		NullCheck(L_20);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_18, 0, (RuntimeArray*)L_19, 0, ((int32_t)(((RuntimeArray*)L_20)->max_length)), NULL);
	}

IL_007e:
	{
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_21 = V_0;
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_21, NULL);
		___1_parameters = L_22;
	}

IL_0086:
	{
		OpenPgpCfbBlockCipher_Reset_m30647DD13ED5B1DFBB3EA2B471F7C615142519A6(__this, NULL);
		RuntimeObject* L_23 = __this->___cipher_3;
		RuntimeObject* L_24 = ___1_parameters;
		NullCheck(L_23);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_23, (bool)1, L_24);
		return;
	}
}
// System.Byte Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::EncryptByte(System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t OpenPgpCfbBlockCipher_EncryptByte_m5A0113EE6FC77FF70AAC2D8E93C80F54B10E4DCA (OpenPgpCfbBlockCipher_t26FDB232414CBB4030BD3AD43F7EFC2A9329CF6B* __this, uint8_t ___0_data, int32_t ___1_blockOff, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___FRE_2;
		int32_t L_1 = ___1_blockOff;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		uint8_t L_4 = ___0_data;
		return (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_3^(int32_t)L_4)));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenPgpCfbBlockCipher_EncryptBlock_mB03D14664C3EFCBDFCD5A9116BDA21B258FB7B90 (OpenPgpCfbBlockCipher_t26FDB232414CBB4030BD3AD43F7EFC2A9329CF6B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_outBytes, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___1_inOff;
		int32_t L_1 = __this->___blockSize_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_input;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_3 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OpenPgpCfbBlockCipher_EncryptBlock_mB03D14664C3EFCBDFCD5A9116BDA21B258FB7B90_RuntimeMethod_var)));
	}

IL_0018:
	{
		int32_t L_4 = ___3_outOff;
		int32_t L_5 = __this->___blockSize_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___2_outBytes;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0031;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_7 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OpenPgpCfbBlockCipher_EncryptBlock_mB03D14664C3EFCBDFCD5A9116BDA21B258FB7B90_RuntimeMethod_var)));
	}

IL_0031:
	{
		int32_t L_8 = __this->___count_5;
		int32_t L_9 = __this->___blockSize_4;
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_00e5;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___FR_1;
		int32_t L_11 = __this->___blockSize_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___2_outBytes;
		int32_t L_13 = ___3_outOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_input;
		int32_t L_15 = ___1_inOff;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18 = __this->___blockSize_4;
		uint8_t L_19;
		L_19 = OpenPgpCfbBlockCipher_EncryptByte_m5A0113EE6FC77FF70AAC2D8E93C80F54B10E4DCA(__this, L_17, ((int32_t)il2cpp_codegen_subtract(L_18, 2)), NULL);
		uint8_t L_20 = L_19;
		V_0 = L_20;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint8_t)L_20);
		uint8_t L_21 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_11, 2))), (uint8_t)L_21);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___FR_1;
		int32_t L_23 = __this->___blockSize_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___2_outBytes;
		int32_t L_25 = ___3_outOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___0_input;
		int32_t L_27 = ___1_inOff;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		uint8_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = __this->___blockSize_4;
		uint8_t L_31;
		L_31 = OpenPgpCfbBlockCipher_EncryptByte_m5A0113EE6FC77FF70AAC2D8E93C80F54B10E4DCA(__this, L_29, ((int32_t)il2cpp_codegen_subtract(L_30, 1)), NULL);
		uint8_t L_32 = L_31;
		V_0 = L_32;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_25, 1))), (uint8_t)L_32);
		uint8_t L_33 = V_0;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_23, 1))), (uint8_t)L_33);
		RuntimeObject* L_34 = __this->___cipher_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = __this->___FR_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___FRE_2;
		NullCheck(L_34);
		int32_t L_37;
		L_37 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_34, L_35, 0, L_36, 0);
		V_1 = 2;
		goto IL_00d7;
	}

IL_00b2:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = __this->___FR_1;
		int32_t L_39 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___2_outBytes;
		int32_t L_41 = ___3_outOff;
		int32_t L_42 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ___0_input;
		int32_t L_44 = ___1_inOff;
		int32_t L_45 = V_1;
		NullCheck(L_43);
		int32_t L_46 = ((int32_t)il2cpp_codegen_add(L_44, L_45));
		uint8_t L_47 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		int32_t L_48 = V_1;
		uint8_t L_49;
		L_49 = OpenPgpCfbBlockCipher_EncryptByte_m5A0113EE6FC77FF70AAC2D8E93C80F54B10E4DCA(__this, L_47, ((int32_t)il2cpp_codegen_subtract(L_48, 2)), NULL);
		uint8_t L_50 = L_49;
		V_0 = L_50;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_41, L_42))), (uint8_t)L_50);
		uint8_t L_51 = V_0;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_39, 2))), (uint8_t)L_51);
		int32_t L_52 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_00d7:
	{
		int32_t L_53 = V_1;
		int32_t L_54 = __this->___blockSize_4;
		if ((((int32_t)L_53) < ((int32_t)L_54)))
		{
			goto IL_00b2;
		}
	}
	{
		goto IL_0229;
	}

IL_00e5:
	{
		int32_t L_55 = __this->___count_5;
		if (L_55)
		{
			goto IL_014d;
		}
	}
	{
		RuntimeObject* L_56 = __this->___cipher_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = __this->___FR_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = __this->___FRE_2;
		NullCheck(L_56);
		int32_t L_59;
		L_59 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_56, L_57, 0, L_58, 0);
		V_2 = 0;
		goto IL_012c;
	}

IL_010b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = __this->___FR_1;
		int32_t L_61 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = ___2_outBytes;
		int32_t L_63 = ___3_outOff;
		int32_t L_64 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = ___0_input;
		int32_t L_66 = ___1_inOff;
		int32_t L_67 = V_2;
		NullCheck(L_65);
		int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_66, L_67));
		uint8_t L_69 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		int32_t L_70 = V_2;
		uint8_t L_71;
		L_71 = OpenPgpCfbBlockCipher_EncryptByte_m5A0113EE6FC77FF70AAC2D8E93C80F54B10E4DCA(__this, L_69, L_70, NULL);
		uint8_t L_72 = L_71;
		V_0 = L_72;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_63, L_64))), (uint8_t)L_72);
		uint8_t L_73 = V_0;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (uint8_t)L_73);
		int32_t L_74 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_012c:
	{
		int32_t L_75 = V_2;
		int32_t L_76 = __this->___blockSize_4;
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_010b;
		}
	}
	{
		int32_t L_77 = __this->___count_5;
		int32_t L_78 = __this->___blockSize_4;
		__this->___count_5 = ((int32_t)il2cpp_codegen_add(L_77, L_78));
		goto IL_0229;
	}

IL_014d:
	{
		int32_t L_79 = __this->___count_5;
		int32_t L_80 = __this->___blockSize_4;
		if ((!(((uint32_t)L_79) == ((uint32_t)L_80))))
		{
			goto IL_0229;
		}
	}
	{
		RuntimeObject* L_81 = __this->___cipher_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = __this->___FR_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = __this->___FRE_2;
		NullCheck(L_81);
		int32_t L_84;
		L_84 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_81, L_82, 0, L_83, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = ___2_outBytes;
		int32_t L_86 = ___3_outOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = ___0_input;
		int32_t L_88 = ___1_inOff;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		uint8_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		uint8_t L_91;
		L_91 = OpenPgpCfbBlockCipher_EncryptByte_m5A0113EE6FC77FF70AAC2D8E93C80F54B10E4DCA(__this, L_90, 0, NULL);
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(L_86), (uint8_t)L_91);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = ___2_outBytes;
		int32_t L_93 = ___3_outOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = ___0_input;
		int32_t L_95 = ___1_inOff;
		NullCheck(L_94);
		int32_t L_96 = ((int32_t)il2cpp_codegen_add(L_95, 1));
		uint8_t L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		uint8_t L_98;
		L_98 = OpenPgpCfbBlockCipher_EncryptByte_m5A0113EE6FC77FF70AAC2D8E93C80F54B10E4DCA(__this, L_97, 1, NULL);
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_93, 1))), (uint8_t)L_98);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = __this->___FR_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = __this->___FR_1;
		int32_t L_101 = __this->___blockSize_4;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_99, 2, (RuntimeArray*)L_100, 0, ((int32_t)il2cpp_codegen_subtract(L_101, 2)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_102 = ___2_outBytes;
		int32_t L_103 = ___3_outOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = __this->___FR_1;
		int32_t L_105 = __this->___blockSize_4;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_102, L_103, (RuntimeArray*)L_104, ((int32_t)il2cpp_codegen_subtract(L_105, 2)), 2, NULL);
		RuntimeObject* L_106 = __this->___cipher_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107 = __this->___FR_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_108 = __this->___FRE_2;
		NullCheck(L_106);
		int32_t L_109;
		L_109 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_106, L_107, 0, L_108, 0);
		V_3 = 2;
		goto IL_020d;
	}

IL_01e8:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_110 = __this->___FR_1;
		int32_t L_111 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_112 = ___2_outBytes;
		int32_t L_113 = ___3_outOff;
		int32_t L_114 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_115 = ___0_input;
		int32_t L_116 = ___1_inOff;
		int32_t L_117 = V_3;
		NullCheck(L_115);
		int32_t L_118 = ((int32_t)il2cpp_codegen_add(L_116, L_117));
		uint8_t L_119 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		int32_t L_120 = V_3;
		uint8_t L_121;
		L_121 = OpenPgpCfbBlockCipher_EncryptByte_m5A0113EE6FC77FF70AAC2D8E93C80F54B10E4DCA(__this, L_119, ((int32_t)il2cpp_codegen_subtract(L_120, 2)), NULL);
		uint8_t L_122 = L_121;
		V_0 = L_122;
		NullCheck(L_112);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_113, L_114))), (uint8_t)L_122);
		uint8_t L_123 = V_0;
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_111, 2))), (uint8_t)L_123);
		int32_t L_124 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_124, 1));
	}

IL_020d:
	{
		int32_t L_125 = V_3;
		int32_t L_126 = __this->___blockSize_4;
		if ((((int32_t)L_125) < ((int32_t)L_126)))
		{
			goto IL_01e8;
		}
	}
	{
		int32_t L_127 = __this->___count_5;
		int32_t L_128 = __this->___blockSize_4;
		__this->___count_5 = ((int32_t)il2cpp_codegen_add(L_127, L_128));
	}

IL_0229:
	{
		int32_t L_129 = __this->___blockSize_4;
		return L_129;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.OpenPgpCfbBlockCipher::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OpenPgpCfbBlockCipher_DecryptBlock_mE57690EA4975784C8A038234186780E1C0153EF3 (OpenPgpCfbBlockCipher_t26FDB232414CBB4030BD3AD43F7EFC2A9329CF6B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_outBytes, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	uint8_t V_6 = 0x0;
	{
		int32_t L_0 = ___1_inOff;
		int32_t L_1 = __this->___blockSize_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_input;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_3 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OpenPgpCfbBlockCipher_DecryptBlock_mE57690EA4975784C8A038234186780E1C0153EF3_RuntimeMethod_var)));
	}

IL_0018:
	{
		int32_t L_4 = ___3_outOff;
		int32_t L_5 = __this->___blockSize_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___2_outBytes;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0031;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_7 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OpenPgpCfbBlockCipher_DecryptBlock_mE57690EA4975784C8A038234186780E1C0153EF3_RuntimeMethod_var)));
	}

IL_0031:
	{
		int32_t L_8 = __this->___count_5;
		int32_t L_9 = __this->___blockSize_4;
		if ((((int32_t)L_8) <= ((int32_t)L_9)))
		{
			goto IL_00e5;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_input;
		int32_t L_11 = ___1_inOff;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_0 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___FR_1;
		int32_t L_15 = __this->___blockSize_4;
		uint8_t L_16 = V_0;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_15, 2))), (uint8_t)L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___2_outBytes;
		int32_t L_18 = ___3_outOff;
		uint8_t L_19 = V_0;
		int32_t L_20 = __this->___blockSize_4;
		uint8_t L_21;
		L_21 = OpenPgpCfbBlockCipher_EncryptByte_m5A0113EE6FC77FF70AAC2D8E93C80F54B10E4DCA(__this, L_19, ((int32_t)il2cpp_codegen_subtract(L_20, 2)), NULL);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint8_t)L_21);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___0_input;
		int32_t L_23 = ___1_inOff;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_0 = L_25;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___FR_1;
		int32_t L_27 = __this->___blockSize_4;
		uint8_t L_28 = V_0;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_27, 1))), (uint8_t)L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___2_outBytes;
		int32_t L_30 = ___3_outOff;
		uint8_t L_31 = V_0;
		int32_t L_32 = __this->___blockSize_4;
		uint8_t L_33;
		L_33 = OpenPgpCfbBlockCipher_EncryptByte_m5A0113EE6FC77FF70AAC2D8E93C80F54B10E4DCA(__this, L_31, ((int32_t)il2cpp_codegen_subtract(L_32, 1)), NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_30, 1))), (uint8_t)L_33);
		RuntimeObject* L_34 = __this->___cipher_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = __this->___FR_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___FRE_2;
		NullCheck(L_34);
		int32_t L_37;
		L_37 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_34, L_35, 0, L_36, 0);
		V_1 = 2;
		goto IL_00d7;
	}

IL_00b2:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___0_input;
		int32_t L_39 = ___1_inOff;
		int32_t L_40 = V_1;
		NullCheck(L_38);
		int32_t L_41 = ((int32_t)il2cpp_codegen_add(L_39, L_40));
		uint8_t L_42 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_0 = L_42;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = __this->___FR_1;
		int32_t L_44 = V_1;
		uint8_t L_45 = V_0;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_44, 2))), (uint8_t)L_45);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ___2_outBytes;
		int32_t L_47 = ___3_outOff;
		int32_t L_48 = V_1;
		uint8_t L_49 = V_0;
		int32_t L_50 = V_1;
		uint8_t L_51;
		L_51 = OpenPgpCfbBlockCipher_EncryptByte_m5A0113EE6FC77FF70AAC2D8E93C80F54B10E4DCA(__this, L_49, ((int32_t)il2cpp_codegen_subtract(L_50, 2)), NULL);
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_47, L_48))), (uint8_t)L_51);
		int32_t L_52 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_00d7:
	{
		int32_t L_53 = V_1;
		int32_t L_54 = __this->___blockSize_4;
		if ((((int32_t)L_53) < ((int32_t)L_54)))
		{
			goto IL_00b2;
		}
	}
	{
		goto IL_0243;
	}

IL_00e5:
	{
		int32_t L_55 = __this->___count_5;
		if (L_55)
		{
			goto IL_014c;
		}
	}
	{
		RuntimeObject* L_56 = __this->___cipher_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = __this->___FR_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = __this->___FRE_2;
		NullCheck(L_56);
		int32_t L_59;
		L_59 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_56, L_57, 0, L_58, 0);
		V_2 = 0;
		goto IL_012b;
	}

IL_010b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = __this->___FR_1;
		int32_t L_61 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = ___0_input;
		int32_t L_63 = ___1_inOff;
		int32_t L_64 = V_2;
		NullCheck(L_62);
		int32_t L_65 = ((int32_t)il2cpp_codegen_add(L_63, L_64));
		uint8_t L_66 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (uint8_t)L_66);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = ___2_outBytes;
		int32_t L_68 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = ___0_input;
		int32_t L_70 = ___1_inOff;
		int32_t L_71 = V_2;
		NullCheck(L_69);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_70, L_71));
		uint8_t L_73 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		int32_t L_74 = V_2;
		uint8_t L_75;
		L_75 = OpenPgpCfbBlockCipher_EncryptByte_m5A0113EE6FC77FF70AAC2D8E93C80F54B10E4DCA(__this, L_73, L_74, NULL);
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (uint8_t)L_75);
		int32_t L_76 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_012b:
	{
		int32_t L_77 = V_2;
		int32_t L_78 = __this->___blockSize_4;
		if ((((int32_t)L_77) < ((int32_t)L_78)))
		{
			goto IL_010b;
		}
	}
	{
		int32_t L_79 = __this->___count_5;
		int32_t L_80 = __this->___blockSize_4;
		__this->___count_5 = ((int32_t)il2cpp_codegen_add(L_79, L_80));
		goto IL_0243;
	}

IL_014c:
	{
		int32_t L_81 = __this->___count_5;
		int32_t L_82 = __this->___blockSize_4;
		if ((!(((uint32_t)L_81) == ((uint32_t)L_82))))
		{
			goto IL_0243;
		}
	}
	{
		RuntimeObject* L_83 = __this->___cipher_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84 = __this->___FR_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = __this->___FRE_2;
		NullCheck(L_83);
		int32_t L_86;
		L_86 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_83, L_84, 0, L_85, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_87 = ___0_input;
		int32_t L_88 = ___1_inOff;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		uint8_t L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		V_3 = L_90;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_91 = ___0_input;
		int32_t L_92 = ___1_inOff;
		NullCheck(L_91);
		int32_t L_93 = ((int32_t)il2cpp_codegen_add(L_92, 1));
		uint8_t L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		V_4 = L_94;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = ___2_outBytes;
		int32_t L_96 = ___3_outOff;
		uint8_t L_97 = V_3;
		uint8_t L_98;
		L_98 = OpenPgpCfbBlockCipher_EncryptByte_m5A0113EE6FC77FF70AAC2D8E93C80F54B10E4DCA(__this, L_97, 0, NULL);
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(L_96), (uint8_t)L_98);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = ___2_outBytes;
		int32_t L_100 = ___3_outOff;
		uint8_t L_101 = V_4;
		uint8_t L_102;
		L_102 = OpenPgpCfbBlockCipher_EncryptByte_m5A0113EE6FC77FF70AAC2D8E93C80F54B10E4DCA(__this, L_101, 1, NULL);
		NullCheck(L_99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_100, 1))), (uint8_t)L_102);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_103 = __this->___FR_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = __this->___FR_1;
		int32_t L_105 = __this->___blockSize_4;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_103, 2, (RuntimeArray*)L_104, 0, ((int32_t)il2cpp_codegen_subtract(L_105, 2)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_106 = __this->___FR_1;
		int32_t L_107 = __this->___blockSize_4;
		uint8_t L_108 = V_3;
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_107, 2))), (uint8_t)L_108);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_109 = __this->___FR_1;
		int32_t L_110 = __this->___blockSize_4;
		uint8_t L_111 = V_4;
		NullCheck(L_109);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_110, 1))), (uint8_t)L_111);
		RuntimeObject* L_112 = __this->___cipher_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_113 = __this->___FR_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_114 = __this->___FRE_2;
		NullCheck(L_112);
		int32_t L_115;
		L_115 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_112, L_113, 0, L_114, 0);
		V_5 = 2;
		goto IL_0226;
	}

IL_01f8:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_116 = ___0_input;
		int32_t L_117 = ___1_inOff;
		int32_t L_118 = V_5;
		NullCheck(L_116);
		int32_t L_119 = ((int32_t)il2cpp_codegen_add(L_117, L_118));
		uint8_t L_120 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		V_6 = L_120;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_121 = __this->___FR_1;
		int32_t L_122 = V_5;
		uint8_t L_123 = V_6;
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_122, 2))), (uint8_t)L_123);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_124 = ___2_outBytes;
		int32_t L_125 = ___3_outOff;
		int32_t L_126 = V_5;
		uint8_t L_127 = V_6;
		int32_t L_128 = V_5;
		uint8_t L_129;
		L_129 = OpenPgpCfbBlockCipher_EncryptByte_m5A0113EE6FC77FF70AAC2D8E93C80F54B10E4DCA(__this, L_127, ((int32_t)il2cpp_codegen_subtract(L_128, 2)), NULL);
		NullCheck(L_124);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_125, L_126))), (uint8_t)L_129);
		int32_t L_130 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_130, 1));
	}

IL_0226:
	{
		int32_t L_131 = V_5;
		int32_t L_132 = __this->___blockSize_4;
		if ((((int32_t)L_131) < ((int32_t)L_132)))
		{
			goto IL_01f8;
		}
	}
	{
		int32_t L_133 = __this->___count_5;
		int32_t L_134 = __this->___blockSize_4;
		__this->___count_5 = ((int32_t)il2cpp_codegen_add(L_133, L_134));
	}

IL_0243:
	{
		int32_t L_135 = __this->___blockSize_4;
		return L_135;
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
// System.Void Org.BouncyCastle.Crypto.Modes.SicBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SicBlockCipher__ctor_mA7ADBD37CBBF2B5DB603804C12BBD044A86DD99A (SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105* __this, RuntimeObject* ___0_cipher, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_cipher;
		__this->___cipher_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_0), (void*)L_0);
		RuntimeObject* L_1 = ___0_cipher;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_1);
		__this->___blockSize_1 = L_2;
		int32_t L_3 = __this->___blockSize_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->___counter_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___counter_2), (void*)L_4);
		int32_t L_5 = __this->___blockSize_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		__this->___counterOut_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___counterOut_3), (void*)L_6);
		int32_t L_7 = __this->___blockSize_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->___IV_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IV_4), (void*)L_8);
		return;
	}
}
// Org.BouncyCastle.Crypto.IBlockCipher Org.BouncyCastle.Crypto.Modes.SicBlockCipher::GetUnderlyingCipher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SicBlockCipher_GetUnderlyingCipher_mE000ACA40269D7EB87B9D6A803199EF5DABB4232 (SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___cipher_0;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.SicBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SicBlockCipher_Init_mE3F8D7CBDB4603738F3BE14E3B00CD9B9361E78A (SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105* __this, bool ___0_forEncryption, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___1_parameters;
		V_0 = ((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_0, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var));
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_1 = V_0;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6E28B77701E12A1794C995C45F1EF36494F5492C)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SicBlockCipher_Init_mE3F8D7CBDB4603738F3BE14E3B00CD9B9361E78A_RuntimeMethod_var)));
	}

IL_001a:
	{
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_3 = V_0;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Arrays_Clone_m5565718292F04770F6788351922E476D3BEF1A94(L_4, NULL);
		__this->___IV_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IV_4), (void*)L_5);
		int32_t L_6 = __this->___blockSize_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___IV_4;
		NullCheck(L_7);
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_8 = __this->___blockSize_1;
		V_2 = L_8;
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_10;
		L_10 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA45007D7F3EEE3049CA245286566C5CA15FF403B)), L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8020C7D6696CB083F06538A14CF53AFC87D4339B)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SicBlockCipher_Init_mE3F8D7CBDB4603738F3BE14E3B00CD9B9361E78A_RuntimeMethod_var)));
	}

IL_005e:
	{
		int32_t L_12 = __this->___blockSize_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(8, ((int32_t)(L_12/2)), NULL);
		V_1 = L_13;
		int32_t L_14 = __this->___blockSize_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___IV_4;
		NullCheck(L_15);
		int32_t L_16 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_14, ((int32_t)(((RuntimeArray*)L_15)->max_length))))) <= ((int32_t)L_16)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_17 = __this->___blockSize_1;
		int32_t L_18 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_17, L_18));
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_20;
		L_20 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4C272B1013F6BCFD2376C951EF8457C19DC5E555)), L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8020C7D6696CB083F06538A14CF53AFC87D4339B)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_21 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_21, L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SicBlockCipher_Init_mE3F8D7CBDB4603738F3BE14E3B00CD9B9361E78A_RuntimeMethod_var)));
	}

IL_00a4:
	{
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_22 = V_0;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_22, NULL);
		if (!L_23)
		{
			goto IL_00be;
		}
	}
	{
		RuntimeObject* L_24 = __this->___cipher_0;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_25 = V_0;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_25, NULL);
		NullCheck(L_24);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_24, (bool)1, L_26);
	}

IL_00be:
	{
		VirtualActionInvoker0::Invoke(16 /* System.Void Org.BouncyCastle.Crypto.Modes.SicBlockCipher::Reset() */, __this);
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Modes.SicBlockCipher::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SicBlockCipher_get_AlgorithmName_m9F7E27776985B56E53979AEADD6E1CE544B820CB (SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral283A7D32B5B4E6B494E6701B8AD8381563ED4FFD);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___cipher_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral283A7D32B5B4E6B494E6701B8AD8381563ED4FFD, NULL);
		return L_2;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Modes.SicBlockCipher::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SicBlockCipher_get_IsPartialBlockOkay_m8E611A4A74CC24912E8295E19FCCD2E26E35D01E (SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.SicBlockCipher::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SicBlockCipher_GetBlockSize_m80649992295EFD6428163B299B69B48B6569D30B (SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___cipher_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Modes.SicBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SicBlockCipher_ProcessBlock_m6BFF6E8D478CFEBB25EF70E7B94942AC40A560AF (SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_output, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		RuntimeObject* L_0 = __this->___cipher_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___counter_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___counterOut_3;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0, L_1, 0, L_2, 0);
		V_1 = 0;
		goto IL_0037;
	}

IL_001e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___2_output;
		int32_t L_5 = ___3_outOff;
		int32_t L_6 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___counterOut_3;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_input;
		int32_t L_12 = ___1_inOff;
		int32_t L_13 = V_1;
		NullCheck(L_11);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_12, L_13));
		uint8_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_5, L_6))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_10^(int32_t)L_15))));
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0037:
	{
		int32_t L_17 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___counterOut_3;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___counter_2;
		NullCheck(L_19);
		V_0 = ((int32_t)(((RuntimeArray*)L_19)->max_length));
	}

IL_004b:
	{
		int32_t L_20 = V_0;
		int32_t L_21 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		V_0 = L_21;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___counter_2;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		uint8_t* L_24 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)));
		int32_t L_25 = *((uint8_t*)L_24);
		V_2 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(L_25, 1)));
		uint8_t L_26 = V_2;
		*((int8_t*)L_24) = (int8_t)L_26;
		uint8_t L_27 = V_2;
		if (!L_27)
		{
			goto IL_004b;
		}
	}

IL_006a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->___counter_2;
		NullCheck(L_28);
		return ((int32_t)(((RuntimeArray*)L_28)->max_length));
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.SicBlockCipher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SicBlockCipher_Reset_mD959CCBC93DFE429B0C6FC0D8783F41E4726DC00 (SicBlockCipher_tFEFD49A73D62BFD7C3D8D80FC89E4000F6495105* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___counter_2;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		Arrays_Fill_mE21DFB2A97B1AE17AFE700D6A367141498048242(L_0, (uint8_t)0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___IV_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___counter_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___IV_4;
		NullCheck(L_3);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_1, 0, (RuntimeArray*)L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		RuntimeObject* L_4 = __this->___cipher_0;
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(5 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Reset() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_4);
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
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmExponentiator::Init(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGcmExponentiator_Init_m0971A5079C56154D8F2AE9492DFF223FD696C1A2 (BasicGcmExponentiator_t889C88199B1E25F4C5610EFD2AB4144F96F89832* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_x;
		il2cpp_codegen_runtime_class_init_inline(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = GcmUtilities_AsUints_mD89C5B70F49D0C864C411063BF92669FF552C1AC(L_0, NULL);
		__this->___x_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x_0), (void*)L_1);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmExponentiator::ExponentiateX(System.Int64,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGcmExponentiator_ExponentiateX_mD24CA856DAFBD04C4B6D7B04C597FCA668A5F0F0 (BasicGcmExponentiator_t889C88199B1E25F4C5610EFD2AB4144F96F89832* __this, int64_t ___0_pow, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_output, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = GcmUtilities_OneAsUints_m4AFB1DB6550B44FEE6A8691CDE5FE17654EB3B41(NULL);
		V_0 = L_0;
		int64_t L_1 = ___0_pow;
		if ((((int64_t)L_1) <= ((int64_t)((int64_t)0))))
		{
			goto IL_0035;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = __this->___x_0;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3;
		L_3 = Arrays_Clone_m08685E342DDDE7F030FFC476AF4247546375B68C(L_2, NULL);
		V_1 = L_3;
	}

IL_0017:
	{
		int64_t L_4 = ___0_pow;
		if (!((int64_t)(L_4&((int64_t)1))))
		{
			goto IL_0024;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		GcmUtilities_Multiply_m2CF9D333A155D0656B547EB3C8DFBBC0B1AC3553(L_5, L_6, NULL);
	}

IL_0024:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		GcmUtilities_Multiply_m2CF9D333A155D0656B547EB3C8DFBBC0B1AC3553(L_7, L_8, NULL);
		int64_t L_9 = ___0_pow;
		___0_pow = ((int64_t)(L_9>>1));
		int64_t L_10 = ___0_pow;
		if ((((int64_t)L_10) > ((int64_t)((int64_t)0))))
		{
			goto IL_0017;
		}
	}

IL_0035:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___1_output;
		il2cpp_codegen_runtime_class_init_inline(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		GcmUtilities_AsBytes_mF8FE4D1CB1BD15CA1A37EF4CF2B9D599C630AC78(L_11, L_12, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmExponentiator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGcmExponentiator__ctor_m36D6363D489BD4C0EDEC41F879EB48638202F298 (BasicGcmExponentiator_t889C88199B1E25F4C5610EFD2AB4144F96F89832* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmMultiplier::Init(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGcmMultiplier_Init_m8E9E103AF5F8EA156CB79DA73013C9C538C53E78 (BasicGcmMultiplier_t70121FD66BA3790D9F0CD78FA12FD2676920451E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_H, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_H;
		il2cpp_codegen_runtime_class_init_inline(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = GcmUtilities_AsUints_mD89C5B70F49D0C864C411063BF92669FF552C1AC(L_0, NULL);
		__this->___H_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___H_0), (void*)L_1);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmMultiplier::MultiplyH(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGcmMultiplier_MultiplyH_m323C8C3497E7D6403A80EA0B5F4FA2FDF1ECF1BA (BasicGcmMultiplier_t70121FD66BA3790D9F0CD78FA12FD2676920451E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_x;
		il2cpp_codegen_runtime_class_init_inline(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = GcmUtilities_AsUints_mD89C5B70F49D0C864C411063BF92669FF552C1AC(L_0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = __this->___H_0;
		GcmUtilities_Multiply_m2CF9D333A155D0656B547EB3C8DFBBC0B1AC3553(L_2, L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_x;
		GcmUtilities_AsBytes_mF8FE4D1CB1BD15CA1A37EF4CF2B9D599C630AC78(L_2, L_4, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.BasicGcmMultiplier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGcmMultiplier__ctor_m7B0EB3BBAF5B2AC8925833B62B38B3B4D88D95BA (BasicGcmMultiplier_t70121FD66BA3790D9F0CD78FA12FD2676920451E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.UInt32[] Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::GenerateLookup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* GcmUtilities_GenerateLookup_mF3F460890D8DDF5D06639239FB88F3FC85FFD824 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		V_0 = L_0;
		V_1 = 0;
		goto IL_003e;
	}

IL_000f:
	{
		V_2 = 0;
		V_3 = 7;
		goto IL_0032;
	}

IL_0015:
	{
		int32_t L_1 = V_1;
		int32_t L_2 = V_3;
		if (!((int32_t)(L_1&((int32_t)(1<<((int32_t)(L_2&((int32_t)31))))))))
		{
			goto IL_002e;
		}
	}
	{
		uint32_t L_3 = V_2;
		int32_t L_4 = V_3;
		V_2 = ((int32_t)((int32_t)L_3^((int32_t)((uint32_t)((int32_t)-520093696)>>((int32_t)(((int32_t)il2cpp_codegen_subtract(7, L_4))&((int32_t)31)))))));
	}

IL_002e:
	{
		int32_t L_5 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
	}

IL_0032:
	{
		int32_t L_6 = V_3;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_0;
		int32_t L_8 = V_1;
		uint32_t L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint32_t)L_9);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003e:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)256))))
		{
			goto IL_000f;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		return L_12;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::OneAsBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GcmUtilities_OneAsBytes_m1D87899ED0BF5A6719651162DA7A402C838AAD51 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)128));
		return L_1;
	}
}
// System.UInt32[] Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::OneAsUints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* GcmUtilities_OneAsUints_m4AFB1DB6550B44FEE6A8691CDE5FE17654EB3B41 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)-2147483648LL));
		return L_1;
	}
}
// System.UInt64[] Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::OneAsUlongs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* GcmUtilities_OneAsUlongs_mEC9FABD565C98E37ABFFB00793BC284AA1CA179E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)2);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)(std::numeric_limits<int64_t>::min)()));
		return L_1;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::AsBytes(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GcmUtilities_AsBytes_m0FB584B2E2F5E3BD5F6CB37B56AB3A3C3D4DD238 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Pack_UInt32_To_BE_m0FBFA801233192361B48D8A04F3DD28AA63C882C(L_0, NULL);
		return L_1;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::AsBytes(System.UInt32[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_AsBytes_mF8FE4D1CB1BD15CA1A37EF4CF2B9D599C630AC78 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_z, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_z;
		Pack_UInt32_To_BE_m8F147B0DDE3F9707553F3C00755C59ECA9DCB4E2(L_0, L_1, 0, NULL);
		return;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::AsBytes(System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GcmUtilities_AsBytes_m4FA862DE8E787EC9A333784D1AE5CDFD79A86A94 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___0_x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		Pack_UInt64_To_BE_m9DE42A9AD2A682769599A377CD6521EFFD495D9F(L_1, L_2, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		return L_3;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::AsBytes(System.UInt64[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_AsBytes_mB21E6E6E572E2D0D0A06A4BFB28E2B52B695D2A1 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_z, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_z;
		Pack_UInt64_To_BE_m9DE42A9AD2A682769599A377CD6521EFFD495D9F(L_0, L_1, 0, NULL);
		return;
	}
}
// System.UInt32[] Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::AsUints(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* GcmUtilities_AsUints_mD89C5B70F49D0C864C411063BF92669FF552C1AC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_bs;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		Pack_BE_To_UInt32_m717B3FE3B230E50D7A584EA3E345606FDD3773F0(L_1, 0, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		return L_3;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::AsUints(System.Byte[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_AsUints_m79E0020628FAFBD7CDCB0957893ACF66D0484111 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_output, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bs;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_output;
		Pack_BE_To_UInt32_m717B3FE3B230E50D7A584EA3E345606FDD3773F0(L_0, 0, L_1, NULL);
		return;
	}
}
// System.UInt64[] Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::AsUlongs(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* GcmUtilities_AsUlongs_m0078681C13224CBE6372BEAEDA1D2E4E5681FAA1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_x;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = V_0;
		Pack_BE_To_UInt64_m96A414ACD984149F238E7410C9FD52DCF9D966DB(L_1, 0, L_2, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = V_0;
		return L_3;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::AsUlongs(System.Byte[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_AsUlongs_mB3244CA1C81C5067BE128399790F17841D8315AB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_z, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_x;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___1_z;
		Pack_BE_To_UInt64_m96A414ACD984149F238E7410C9FD52DCF9D966DB(L_0, 0, L_1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Multiply(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Multiply_m780DA304729B823F67D56B9661C057D717CBBB00 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_x, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_x;
		il2cpp_codegen_runtime_class_init_inline(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = GcmUtilities_AsUints_mD89C5B70F49D0C864C411063BF92669FF552C1AC(L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3;
		L_3 = GcmUtilities_AsUints_mD89C5B70F49D0C864C411063BF92669FF552C1AC(L_2, NULL);
		V_0 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_0;
		GcmUtilities_Multiply_m2CF9D333A155D0656B547EB3C8DFBBC0B1AC3553(L_4, L_5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_x;
		GcmUtilities_AsBytes_mF8FE4D1CB1BD15CA1A37EF4CF2B9D599C630AC78(L_4, L_6, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Multiply(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Multiply_m2CF9D333A155D0656B547EB3C8DFBBC0B1AC3553 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___0_x;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___0_x;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		V_4 = 0;
		V_5 = 0;
		V_6 = 0;
		V_7 = 0;
		V_8 = 0;
		goto IL_009f;
	}

IL_0021:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___1_y;
		int32_t L_13 = V_8;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_9 = L_15;
		V_10 = 0;
		goto IL_0093;
	}

IL_002c:
	{
		int32_t L_16 = V_9;
		V_11 = ((int32_t)(L_16>>((int32_t)31)));
		int32_t L_17 = V_9;
		V_9 = ((int32_t)(L_17<<1));
		uint32_t L_18 = V_4;
		uint32_t L_19 = V_0;
		uint32_t L_20 = V_11;
		V_4 = ((int32_t)((int32_t)L_18^((int32_t)((int32_t)L_19&(int32_t)L_20))));
		uint32_t L_21 = V_5;
		uint32_t L_22 = V_1;
		uint32_t L_23 = V_11;
		V_5 = ((int32_t)((int32_t)L_21^((int32_t)((int32_t)L_22&(int32_t)L_23))));
		uint32_t L_24 = V_6;
		uint32_t L_25 = V_2;
		uint32_t L_26 = V_11;
		V_6 = ((int32_t)((int32_t)L_24^((int32_t)((int32_t)L_25&(int32_t)L_26))));
		uint32_t L_27 = V_7;
		uint32_t L_28 = V_3;
		uint32_t L_29 = V_11;
		V_7 = ((int32_t)((int32_t)L_27^((int32_t)((int32_t)L_28&(int32_t)L_29))));
		uint32_t L_30 = V_3;
		V_12 = ((int32_t)(((int32_t)((int32_t)L_30<<((int32_t)31)))>>8));
		uint32_t L_31 = V_3;
		uint32_t L_32 = V_2;
		V_3 = ((int32_t)(((int32_t)((uint32_t)L_31>>1))|((int32_t)((int32_t)L_32<<((int32_t)31)))));
		uint32_t L_33 = V_2;
		uint32_t L_34 = V_1;
		V_2 = ((int32_t)(((int32_t)((uint32_t)L_33>>1))|((int32_t)((int32_t)L_34<<((int32_t)31)))));
		uint32_t L_35 = V_1;
		uint32_t L_36 = V_0;
		V_1 = ((int32_t)(((int32_t)((uint32_t)L_35>>1))|((int32_t)((int32_t)L_36<<((int32_t)31)))));
		uint32_t L_37 = V_0;
		uint32_t L_38 = V_12;
		V_0 = ((int32_t)(((int32_t)((uint32_t)L_37>>1))^((int32_t)((int32_t)L_38&((int32_t)-520093696)))));
		int32_t L_39 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_0093:
	{
		int32_t L_40 = V_10;
		if ((((int32_t)L_40) < ((int32_t)((int32_t)32))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_41 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_009f:
	{
		int32_t L_42 = V_8;
		if ((((int32_t)L_42) < ((int32_t)4)))
		{
			goto IL_0021;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = ___0_x;
		uint32_t L_44 = V_4;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_44);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___0_x;
		uint32_t L_46 = V_5;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_46);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = ___0_x;
		uint32_t L_48 = V_6;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_48);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = ___0_x;
		uint32_t L_50 = V_7;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_50);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Multiply(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Multiply_mA6E441E416184EB662552A017C3A0D2FEDBCAD00 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_y, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int32_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		int64_t L_2 = (int64_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___0_x;
		NullCheck(L_3);
		int32_t L_4 = 1;
		int64_t L_5 = (int64_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		V_2 = ((int64_t)0);
		V_3 = ((int64_t)0);
		V_4 = 0;
		goto IL_006d;
	}

IL_0013:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = ___1_y;
		int32_t L_7 = V_4;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int64_t L_9 = (int64_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = L_9;
		V_6 = 0;
		goto IL_0061;
	}

IL_001e:
	{
		int64_t L_10 = V_5;
		V_7 = ((int64_t)(L_10>>((int32_t)63)));
		int64_t L_11 = V_5;
		V_5 = ((int64_t)(L_11<<1));
		uint64_t L_12 = V_2;
		uint64_t L_13 = V_0;
		uint64_t L_14 = V_7;
		V_2 = ((int64_t)((int64_t)L_12^((int64_t)((int64_t)L_13&(int64_t)L_14))));
		uint64_t L_15 = V_3;
		uint64_t L_16 = V_1;
		uint64_t L_17 = V_7;
		V_3 = ((int64_t)((int64_t)L_15^((int64_t)((int64_t)L_16&(int64_t)L_17))));
		uint64_t L_18 = V_1;
		V_8 = ((int64_t)(((int64_t)((int64_t)L_18<<((int32_t)63)))>>8));
		uint64_t L_19 = V_1;
		uint64_t L_20 = V_0;
		V_1 = ((int64_t)(((int64_t)((uint64_t)L_19>>1))|((int64_t)((int64_t)L_20<<((int32_t)63)))));
		uint64_t L_21 = V_0;
		uint64_t L_22 = V_8;
		V_0 = ((int64_t)(((int64_t)((uint64_t)L_21>>1))^((int64_t)((int64_t)L_22&((int64_t)-2233785415175766016LL)))));
		int32_t L_23 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0061:
	{
		int32_t L_24 = V_6;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)64))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_006d:
	{
		int32_t L_26 = V_4;
		if ((((int32_t)L_26) < ((int32_t)2)))
		{
			goto IL_0013;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_27 = ___0_x;
		uint64_t L_28 = V_2;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_28);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = ___0_x;
		uint64_t L_30 = V_3;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_30);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_MultiplyP_mA360A9784FA8539CCA238FF4EE78D0C076CFD9A9 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		il2cpp_codegen_runtime_class_init_inline(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = GcmUtilities_ShiftRight_m5FCC01C2742D5C5CFE2800089837A20AB84CEB37(L_0, NULL);
		V_0 = ((int32_t)((int32_t)L_1>>8));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_x;
		NullCheck(L_2);
		uint32_t* L_3 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_4 = *((uint32_t*)L_3);
		uint32_t L_5 = V_0;
		*((int32_t*)L_3) = (int32_t)((int32_t)(L_4^((int32_t)((int32_t)L_5&((int32_t)-520093696)))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_MultiplyP_mA89CFAEC9E50B82EAC02C6F84430C7B1513DF524 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_z;
		il2cpp_codegen_runtime_class_init_inline(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = GcmUtilities_ShiftRight_mE76CB0727456A9750215C29B06428F8A6E5ACF88(L_0, L_1, NULL);
		V_0 = ((int32_t)((int32_t)L_2>>8));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_z;
		NullCheck(L_3);
		uint32_t* L_4 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_5 = *((uint32_t*)L_4);
		uint32_t L_6 = V_0;
		*((int32_t*)L_4) = (int32_t)((int32_t)(L_5^((int32_t)((int32_t)L_6&((int32_t)-520093696)))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP8(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_MultiplyP8_mCB52F45F1CAC26CFCC12078E9D068DA29C57895F (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		il2cpp_codegen_runtime_class_init_inline(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = GcmUtilities_ShiftRightN_m00C8E1EA2DC4B67619C5405053CC001E3A214FD5(L_0, 8, NULL);
		V_0 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_x;
		NullCheck(L_2);
		uint32_t* L_3 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_4 = *((uint32_t*)L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ((GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_StaticFields*)il2cpp_codegen_static_fields_for(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var))->___LOOKUP_2;
		uint32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)((uint32_t)L_6>>((int32_t)24)));
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*((int32_t*)L_3) = (int32_t)((int32_t)(L_4^(int32_t)L_8));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::MultiplyP8(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_MultiplyP8_mB2E8EBFC70393E80BE81607CFCDBC26F37F81C95 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_y;
		il2cpp_codegen_runtime_class_init_inline(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = GcmUtilities_ShiftRightN_m4B6768D86F1F10C3BAAE0753117338341881EF4D(L_0, 8, L_1, NULL);
		V_0 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_y;
		NullCheck(L_3);
		uint32_t* L_4 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_5 = *((uint32_t*)L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ((GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_StaticFields*)il2cpp_codegen_static_fields_for(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var))->___LOOKUP_2;
		uint32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)((uint32_t)L_7>>((int32_t)24)));
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		*((int32_t*)L_4) = (int32_t)((int32_t)(L_5^(int32_t)L_9));
		return;
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::ShiftRight(System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t GcmUtilities_ShiftRight_m5FCC01C2742D5C5CFE2800089837A20AB84CEB37 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		uint32_t L_4 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)((uint32_t)L_4>>1)));
		uint32_t L_5 = V_0;
		V_1 = ((int32_t)((int32_t)L_5<<((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___0_x;
		NullCheck(L_6);
		int32_t L_7 = 1;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = L_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___0_x;
		uint32_t L_10 = V_0;
		uint32_t L_11 = V_1;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_10>>1))|(int32_t)L_11)));
		uint32_t L_12 = V_0;
		V_1 = ((int32_t)((int32_t)L_12<<((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___0_x;
		NullCheck(L_13);
		int32_t L_14 = 2;
		uint32_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_0 = L_15;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___0_x;
		uint32_t L_17 = V_0;
		uint32_t L_18 = V_1;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_17>>1))|(int32_t)L_18)));
		uint32_t L_19 = V_0;
		V_1 = ((int32_t)((int32_t)L_19<<((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___0_x;
		NullCheck(L_20);
		int32_t L_21 = 3;
		uint32_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_0 = L_22;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___0_x;
		uint32_t L_24 = V_0;
		uint32_t L_25 = V_1;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_24>>1))|(int32_t)L_25)));
		uint32_t L_26 = V_0;
		return ((int32_t)((int32_t)L_26<<((int32_t)31)));
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::ShiftRight(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t GcmUtilities_ShiftRight_mE76CB0727456A9750215C29B06428F8A6E5ACF88 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_z;
		uint32_t L_4 = V_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)((uint32_t)L_4>>1)));
		uint32_t L_5 = V_0;
		V_1 = ((int32_t)((int32_t)L_5<<((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___0_x;
		NullCheck(L_6);
		int32_t L_7 = 1;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = L_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_z;
		uint32_t L_10 = V_0;
		uint32_t L_11 = V_1;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_10>>1))|(int32_t)L_11)));
		uint32_t L_12 = V_0;
		V_1 = ((int32_t)((int32_t)L_12<<((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___0_x;
		NullCheck(L_13);
		int32_t L_14 = 2;
		uint32_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_0 = L_15;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___1_z;
		uint32_t L_17 = V_0;
		uint32_t L_18 = V_1;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_17>>1))|(int32_t)L_18)));
		uint32_t L_19 = V_0;
		V_1 = ((int32_t)((int32_t)L_19<<((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___0_x;
		NullCheck(L_20);
		int32_t L_21 = 3;
		uint32_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_0 = L_22;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___1_z;
		uint32_t L_24 = V_0;
		uint32_t L_25 = V_1;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_24>>1))|(int32_t)L_25)));
		uint32_t L_26 = V_0;
		return ((int32_t)((int32_t)L_26<<((int32_t)31)));
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::ShiftRightN(System.UInt32[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t GcmUtilities_ShiftRightN_m00C8E1EA2DC4B67619C5405053CC001E3A214FD5 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_n, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		int32_t L_3 = ___1_n;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_x;
		uint32_t L_5 = V_0;
		int32_t L_6 = ___1_n;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)((uint32_t)L_5>>((int32_t)(L_6&((int32_t)31))))));
		uint32_t L_7 = V_0;
		int32_t L_8 = V_1;
		V_2 = ((int32_t)((int32_t)L_7<<((int32_t)(L_8&((int32_t)31)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___0_x;
		NullCheck(L_9);
		int32_t L_10 = 1;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = L_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___0_x;
		uint32_t L_13 = V_0;
		int32_t L_14 = ___1_n;
		uint32_t L_15 = V_2;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_13>>((int32_t)(L_14&((int32_t)31)))))|(int32_t)L_15)));
		uint32_t L_16 = V_0;
		int32_t L_17 = V_1;
		V_2 = ((int32_t)((int32_t)L_16<<((int32_t)(L_17&((int32_t)31)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___0_x;
		NullCheck(L_18);
		int32_t L_19 = 2;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_0 = L_20;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		uint32_t L_22 = V_0;
		int32_t L_23 = ___1_n;
		uint32_t L_24 = V_2;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_22>>((int32_t)(L_23&((int32_t)31)))))|(int32_t)L_24)));
		uint32_t L_25 = V_0;
		int32_t L_26 = V_1;
		V_2 = ((int32_t)((int32_t)L_25<<((int32_t)(L_26&((int32_t)31)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		NullCheck(L_27);
		int32_t L_28 = 3;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_0 = L_29;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___0_x;
		uint32_t L_31 = V_0;
		int32_t L_32 = ___1_n;
		uint32_t L_33 = V_2;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_31>>((int32_t)(L_32&((int32_t)31)))))|(int32_t)L_33)));
		uint32_t L_34 = V_0;
		int32_t L_35 = V_1;
		return ((int32_t)((int32_t)L_34<<((int32_t)(L_35&((int32_t)31)))));
	}
}
// System.UInt32 Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::ShiftRightN(System.UInt32[],System.Int32,System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t GcmUtilities_ShiftRightN_m4B6768D86F1F10C3BAAE0753117338341881EF4D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_n, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		int32_t L_3 = ___1_n;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)32), L_3));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___2_z;
		uint32_t L_5 = V_0;
		int32_t L_6 = ___1_n;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)((uint32_t)L_5>>((int32_t)(L_6&((int32_t)31))))));
		uint32_t L_7 = V_0;
		int32_t L_8 = V_1;
		V_2 = ((int32_t)((int32_t)L_7<<((int32_t)(L_8&((int32_t)31)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___0_x;
		NullCheck(L_9);
		int32_t L_10 = 1;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_0 = L_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___2_z;
		uint32_t L_13 = V_0;
		int32_t L_14 = ___1_n;
		uint32_t L_15 = V_2;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_13>>((int32_t)(L_14&((int32_t)31)))))|(int32_t)L_15)));
		uint32_t L_16 = V_0;
		int32_t L_17 = V_1;
		V_2 = ((int32_t)((int32_t)L_16<<((int32_t)(L_17&((int32_t)31)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___0_x;
		NullCheck(L_18);
		int32_t L_19 = 2;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_0 = L_20;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___2_z;
		uint32_t L_22 = V_0;
		int32_t L_23 = ___1_n;
		uint32_t L_24 = V_2;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_22>>((int32_t)(L_23&((int32_t)31)))))|(int32_t)L_24)));
		uint32_t L_25 = V_0;
		int32_t L_26 = V_1;
		V_2 = ((int32_t)((int32_t)L_25<<((int32_t)(L_26&((int32_t)31)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		NullCheck(L_27);
		int32_t L_28 = 3;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_0 = L_29;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___2_z;
		uint32_t L_31 = V_0;
		int32_t L_32 = ___1_n;
		uint32_t L_33 = V_2;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_31>>((int32_t)(L_32&((int32_t)31)))))|(int32_t)L_33)));
		uint32_t L_34 = V_0;
		int32_t L_35 = V_1;
		return ((int32_t)((int32_t)L_34<<((int32_t)(L_35&((int32_t)31)))));
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_mC3ED2BD17DC6BAEB08930D6A8F4CAB53CFA814C5 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_x, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_y, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		uint8_t* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)));
		int32_t L_3 = *((uint8_t*)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		*((int8_t*)L_2) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_3^(int32_t)L_7)));
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_x;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		uint8_t* L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)));
		int32_t L_12 = *((uint8_t*)L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___1_y;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		*((int8_t*)L_11) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_12^(int32_t)L_16)));
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___0_x;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		uint8_t* L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)));
		int32_t L_21 = *((uint8_t*)L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___1_y;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		*((int8_t*)L_20) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_21^(int32_t)L_25)));
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___0_x;
		int32_t L_28 = V_0;
		NullCheck(L_27);
		uint8_t* L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)));
		int32_t L_30 = *((uint8_t*)L_29);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___1_y;
		int32_t L_32 = V_0;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		uint8_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		*((int8_t*)L_29) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_30^(int32_t)L_34)));
		int32_t L_35 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		int32_t L_36 = V_0;
		if ((((int32_t)L_36) < ((int32_t)((int32_t)16))))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.Byte[],System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_m6BB013B95CCD8D8977D9C569BD67574A8467E852 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_x, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_y, int32_t ___2_yOff, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		uint8_t* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)));
		int32_t L_3 = *((uint8_t*)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_y;
		int32_t L_5 = ___2_yOff;
		int32_t L_6 = V_0;
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*((int8_t*)L_2) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_3^(int32_t)L_8)));
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_x;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		uint8_t* L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)));
		int32_t L_13 = *((uint8_t*)L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___1_y;
		int32_t L_15 = ___2_yOff;
		int32_t L_16 = V_0;
		NullCheck(L_14);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add(L_15, L_16));
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		*((int8_t*)L_12) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_13^(int32_t)L_18)));
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___0_x;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		uint8_t* L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)));
		int32_t L_23 = *((uint8_t*)L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___1_y;
		int32_t L_25 = ___2_yOff;
		int32_t L_26 = V_0;
		NullCheck(L_24);
		int32_t L_27 = ((int32_t)il2cpp_codegen_add(L_25, L_26));
		uint8_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		*((int8_t*)L_22) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_23^(int32_t)L_28)));
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___0_x;
		int32_t L_31 = V_0;
		NullCheck(L_30);
		uint8_t* L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)));
		int32_t L_33 = *((uint8_t*)L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___1_y;
		int32_t L_35 = ___2_yOff;
		int32_t L_36 = V_0;
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)il2cpp_codegen_add(L_35, L_36));
		uint8_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		*((int8_t*)L_32) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_33^(int32_t)L_38)));
		int32_t L_39 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		int32_t L_40 = V_0;
		if ((((int32_t)L_40) < ((int32_t)((int32_t)16))))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_mD7C07594FD1FAB83C38B196BAD755A72CA4B8DA6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_x, int32_t ___1_xOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_y, int32_t ___3_yOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_z, int32_t ___5_zOff, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___4_z;
		int32_t L_1 = ___5_zOff;
		int32_t L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_x;
		int32_t L_4 = ___1_xOff;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		uint8_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___2_y;
		int32_t L_9 = ___3_yOff;
		int32_t L_10 = V_0;
		NullCheck(L_8);
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_9, L_10));
		uint8_t L_12 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_7^(int32_t)L_12))));
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___4_z;
		int32_t L_15 = ___5_zOff;
		int32_t L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___0_x;
		int32_t L_18 = ___1_xOff;
		int32_t L_19 = V_0;
		NullCheck(L_17);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_18, L_19));
		uint8_t L_21 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___2_y;
		int32_t L_23 = ___3_yOff;
		int32_t L_24 = V_0;
		NullCheck(L_22);
		int32_t L_25 = ((int32_t)il2cpp_codegen_add(L_23, L_24));
		uint8_t L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_15, L_16))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_21^(int32_t)L_26))));
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___4_z;
		int32_t L_29 = ___5_zOff;
		int32_t L_30 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___0_x;
		int32_t L_32 = ___1_xOff;
		int32_t L_33 = V_0;
		NullCheck(L_31);
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_32, L_33));
		uint8_t L_35 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___2_y;
		int32_t L_37 = ___3_yOff;
		int32_t L_38 = V_0;
		NullCheck(L_36);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_37, L_38));
		uint8_t L_40 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_29, L_30))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_35^(int32_t)L_40))));
		int32_t L_41 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_41, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___4_z;
		int32_t L_43 = ___5_zOff;
		int32_t L_44 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = ___0_x;
		int32_t L_46 = ___1_xOff;
		int32_t L_47 = V_0;
		NullCheck(L_45);
		int32_t L_48 = ((int32_t)il2cpp_codegen_add(L_46, L_47));
		uint8_t L_49 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ___2_y;
		int32_t L_51 = ___3_yOff;
		int32_t L_52 = V_0;
		NullCheck(L_50);
		int32_t L_53 = ((int32_t)il2cpp_codegen_add(L_51, L_52));
		uint8_t L_54 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_43, L_44))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_49^(int32_t)L_54))));
		int32_t L_55 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		int32_t L_56 = V_0;
		if ((((int32_t)L_56) < ((int32_t)((int32_t)16))))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.Byte[],System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_m447B06BE80BCDE72602E4AE3EE2E83ABFDCF9F31 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_x, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_y, int32_t ___2_yOff, int32_t ___3_yLen, const RuntimeMethod* method) 
{
	{
		goto IL_0013;
	}

IL_0002:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_x;
		int32_t L_1 = ___3_yLen;
		NullCheck(L_0);
		uint8_t* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)));
		int32_t L_3 = *((uint8_t*)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_y;
		int32_t L_5 = ___2_yOff;
		int32_t L_6 = ___3_yLen;
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*((int8_t*)L_2) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_3^(int32_t)L_8)));
	}

IL_0013:
	{
		int32_t L_9 = ___3_yLen;
		int32_t L_10 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		___3_yLen = L_10;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_mB25BF93C35AD32A1B1C8F11C2E1BF95AD366E22E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_x, int32_t ___1_xOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_y, int32_t ___3_yOff, int32_t ___4_len, const RuntimeMethod* method) 
{
	{
		goto IL_0017;
	}

IL_0002:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_x;
		int32_t L_1 = ___1_xOff;
		int32_t L_2 = ___4_len;
		NullCheck(L_0);
		uint8_t* L_3 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2)))));
		int32_t L_4 = *((uint8_t*)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___2_y;
		int32_t L_6 = ___3_yOff;
		int32_t L_7 = ___4_len;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		*((int8_t*)L_3) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_4^(int32_t)L_9)));
	}

IL_0017:
	{
		int32_t L_10 = ___4_len;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		___4_len = L_11;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.Byte[],System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_mC9298C229834EAB7747BABE4A7F81C2FB8301785 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_x, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_y, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_z, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
	}

IL_0002:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___2_z;
		int32_t L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_x;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_y;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_5^(int32_t)L_9))));
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___2_z;
		int32_t L_12 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___0_x;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___1_y;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint8_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_16^(int32_t)L_20))));
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___2_z;
		int32_t L_23 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___0_x;
		int32_t L_25 = V_0;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___1_y;
		int32_t L_29 = V_0;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint8_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_27^(int32_t)L_31))));
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___2_z;
		int32_t L_34 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ___0_x;
		int32_t L_36 = V_0;
		NullCheck(L_35);
		int32_t L_37 = L_36;
		uint8_t L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ___1_y;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		uint8_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_38^(int32_t)L_42))));
		int32_t L_43 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = V_0;
		if ((((int32_t)L_44) < ((int32_t)((int32_t)16))))
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_m0394ABCF57E7A32E752C26AECF3FEB94FF93FCC7 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		NullCheck(L_0);
		uint32_t* L_1 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_2 = *((uint32_t*)L_1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_y;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		*((int32_t*)L_1) = (int32_t)((int32_t)(L_2^(int32_t)L_5));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___0_x;
		NullCheck(L_6);
		uint32_t* L_7 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		int32_t L_8 = *((uint32_t*)L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___1_y;
		NullCheck(L_9);
		int32_t L_10 = 1;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		*((int32_t*)L_7) = (int32_t)((int32_t)(L_8^(int32_t)L_11));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___0_x;
		NullCheck(L_12);
		uint32_t* L_13 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)));
		int32_t L_14 = *((uint32_t*)L_13);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___1_y;
		NullCheck(L_15);
		int32_t L_16 = 2;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		*((int32_t*)L_13) = (int32_t)((int32_t)(L_14^(int32_t)L_17));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___0_x;
		NullCheck(L_18);
		uint32_t* L_19 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)));
		int32_t L_20 = *((uint32_t*)L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___1_y;
		NullCheck(L_21);
		int32_t L_22 = 3;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		*((int32_t*)L_19) = (int32_t)((int32_t)(L_20^(int32_t)L_23));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.UInt32[],System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_mE760EA89138FCFD1106DC253DD05844F75BC8223 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___2_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint32_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___1_y;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)((int32_t)L_3^(int32_t)L_6)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___2_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___0_x;
		NullCheck(L_8);
		int32_t L_9 = 1;
		uint32_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___1_y;
		NullCheck(L_11);
		int32_t L_12 = 1;
		uint32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)((int32_t)L_10^(int32_t)L_13)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___2_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___0_x;
		NullCheck(L_15);
		int32_t L_16 = 2;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___1_y;
		NullCheck(L_18);
		int32_t L_19 = 2;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)((int32_t)L_17^(int32_t)L_20)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___2_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___0_x;
		NullCheck(L_22);
		int32_t L_23 = 3;
		uint32_t L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___1_y;
		NullCheck(L_25);
		int32_t L_26 = 3;
		uint32_t L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)((int32_t)L_24^(int32_t)L_27)));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_m9D319800D68BCD969843D3F5B8EC21F4E44339DE (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_y, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_x;
		NullCheck(L_0);
		uint64_t* L_1 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int64_t L_2 = *((int64_t*)L_1);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = ___1_y;
		NullCheck(L_3);
		int32_t L_4 = 0;
		int64_t L_5 = (int64_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		*((int64_t*)L_1) = (int64_t)((int64_t)(L_2^L_5));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = ___0_x;
		NullCheck(L_6);
		uint64_t* L_7 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		int64_t L_8 = *((int64_t*)L_7);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_9 = ___1_y;
		NullCheck(L_9);
		int32_t L_10 = 1;
		int64_t L_11 = (int64_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		*((int64_t*)L_7) = (int64_t)((int64_t)(L_8^L_11));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::Xor(System.UInt64[],System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities_Xor_m4F5B388FF3B02B1C81A3BDE9BFDEFC66224FB7B9 (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_x, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_y, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___2_z, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___2_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___0_x;
		NullCheck(L_1);
		int32_t L_2 = 0;
		int64_t L_3 = (int64_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___1_y;
		NullCheck(L_4);
		int32_t L_5 = 0;
		int64_t L_6 = (int64_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)((int64_t)(L_3^L_6)));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = ___2_z;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_x;
		NullCheck(L_8);
		int32_t L_9 = 1;
		int64_t L_10 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___1_y;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)((int64_t)(L_10^L_13)));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities__ctor_mB7F54B7FD3ECE30063B87090EE617E9D3A8765E4 (GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.GcmUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcmUtilities__cctor_mB39E5177384AB3EED7750817A07D4804AD558F35 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = GcmUtilities_GenerateLookup_mF3F460890D8DDF5D06639239FB88F3FC85FFD824(NULL);
		((GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_StaticFields*)il2cpp_codegen_static_fields_for(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var))->___LOOKUP_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_StaticFields*)il2cpp_codegen_static_fields_for(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var))->___LOOKUP_2), (void*)L_0);
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
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.Tables1kGcmExponentiator::Init(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables1kGcmExponentiator_Init_m9977D7A7639BC6E8A617ED00C9AC438D0A2659C4 (Tables1kGcmExponentiator_t15B1305B08575DCBE165CF932CEB04DB570FAA1B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_x;
		il2cpp_codegen_runtime_class_init_inline(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = GcmUtilities_AsUints_mD89C5B70F49D0C864C411063BF92669FF552C1AC(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = __this->___lookupPowX2_0;
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		RuntimeObject* L_4 = __this->___lookupPowX2_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_4, 0);
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Arrays_AreEqual_m1DD4CAFB9CE13CB4D330F56ABAFEA01AD7D054E4(L_3, ((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_5, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var)), NULL);
		if (!L_6)
		{
			goto IL_0029;
		}
	}
	{
		return;
	}

IL_0029:
	{
		il2cpp_codegen_runtime_class_init_inline(Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var);
		RuntimeObject* L_7;
		L_7 = Platform_CreateArrayList_mB3F2E7DEE8B5F5076ACDD529719D23D740922B03(8, NULL);
		__this->___lookupPowX2_0 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lookupPowX2_0), (void*)L_7);
		RuntimeObject* L_8 = __this->___lookupPowX2_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, (RuntimeObject*)L_9);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.Tables1kGcmExponentiator::ExponentiateX(System.Int64,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables1kGcmExponentiator_ExponentiateX_m0ED460CD8F02057903CD9243C6B2279FA1F8D321 (Tables1kGcmExponentiator_t15B1305B08575DCBE165CF932CEB04DB570FAA1B* __this, int64_t ___0_pow, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_output, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = GcmUtilities_OneAsUints_m4AFB1DB6550B44FEE6A8691CDE5FE17654EB3B41(NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0037;
	}

IL_000a:
	{
		int64_t L_1 = ___0_pow;
		if (!((int64_t)(L_1&((int64_t)1))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_2 = V_1;
		Tables1kGcmExponentiator_EnsureAvailable_m7CF7035202D583EF46C7395785683C3B8CA2F643(__this, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		RuntimeObject* L_4 = __this->___lookupPowX2_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_4, L_5);
		il2cpp_codegen_runtime_class_init_inline(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		GcmUtilities_Multiply_m2CF9D333A155D0656B547EB3C8DFBBC0B1AC3553(L_3, ((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_6, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var)), NULL);
	}

IL_002e:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int64_t L_8 = ___0_pow;
		___0_pow = ((int64_t)(L_8>>1));
	}

IL_0037:
	{
		int64_t L_9 = ___0_pow;
		if ((((int64_t)L_9) > ((int64_t)((int64_t)0))))
		{
			goto IL_000a;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___1_output;
		il2cpp_codegen_runtime_class_init_inline(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		GcmUtilities_AsBytes_mF8FE4D1CB1BD15CA1A37EF4CF2B9D599C630AC78(L_10, L_11, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.Tables1kGcmExponentiator::EnsureAvailable(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables1kGcmExponentiator_EnsureAvailable_m7CF7035202D583EF46C7395785683C3B8CA2F643 (Tables1kGcmExponentiator_t15B1305B08575DCBE165CF932CEB04DB570FAA1B* __this, int32_t ___0_bit, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->___lookupPowX2_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___0_bit;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0047;
		}
	}
	{
		RuntimeObject* L_4 = __this->___lookupPowX2_0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_4, ((int32_t)il2cpp_codegen_subtract(L_5, 1)));
		V_1 = ((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_6, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var));
	}

IL_0024:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8;
		L_8 = Arrays_Clone_m08685E342DDDE7F030FFC476AF4247546375B68C(L_7, NULL);
		V_1 = L_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		GcmUtilities_Multiply_m2CF9D333A155D0656B547EB3C8DFBBC0B1AC3553(L_9, L_10, NULL);
		RuntimeObject* L_11 = __this->___lookupPowX2_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_11, (RuntimeObject*)L_12);
		int32_t L_14 = V_0;
		int32_t L_15 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		V_0 = L_15;
		int32_t L_16 = ___0_bit;
		if ((((int32_t)L_15) <= ((int32_t)L_16)))
		{
			goto IL_0024;
		}
	}

IL_0047:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.Tables1kGcmExponentiator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables1kGcmExponentiator__ctor_m36D672FB8F7BDFD6830B2F0FA0903525CC689C7B (Tables1kGcmExponentiator_t15B1305B08575DCBE165CF932CEB04DB570FAA1B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.Tables64kGcmMultiplier::Init(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables64kGcmMultiplier_Init_mC72770FEC21B4693B8DFD97AA8D5B6BB3B0FFC58 (Tables64kGcmMultiplier_tA2C58BD435F6D7B7BE6AC407A0650827AA5833AE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_H, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	int32_t V_6 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_7 = NULL;
	{
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_0 = __this->___M_1;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_1 = (UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37*)(UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37*)SZArrayNew(UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___M_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___M_1), (void*)L_1);
		goto IL_0026;
	}

IL_0017:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___H_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_H;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Arrays_AreEqual_m93263147E08C039BD573B4D2A4921988053170B7(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_H;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = Arrays_Clone_m5565718292F04770F6788351922E476D3BEF1A94(L_5, NULL);
		__this->___H_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___H_0), (void*)L_6);
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_7 = __this->___M_1;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_8 = (UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6*)(UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6*)SZArrayNew(UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6*)L_8);
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_9 = __this->___M_1;
		NullCheck(L_9);
		int32_t L_10 = 0;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)L_12);
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_13 = __this->___M_1;
		NullCheck(L_13);
		int32_t L_14 = 0;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___0_H;
		il2cpp_codegen_runtime_class_init_inline(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17;
		L_17 = GcmUtilities_AsUints_mD89C5B70F49D0C864C411063BF92669FF552C1AC(L_16, NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)128)), (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)L_17);
		V_0 = ((int32_t)64);
		goto IL_0099;
	}

IL_006d:
	{
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_18 = __this->___M_1;
		NullCheck(L_18);
		int32_t L_19 = 0;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		int32_t L_21 = V_0;
		int32_t L_22 = V_0;
		NullCheck(L_20);
		int32_t L_23 = ((int32_t)il2cpp_codegen_add(L_21, L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck((RuntimeArray*)L_24);
		RuntimeObject* L_25;
		L_25 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_24, NULL);
		V_1 = ((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_25, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_1;
		il2cpp_codegen_runtime_class_init_inline(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		GcmUtilities_MultiplyP_mA360A9784FA8539CCA238FF4EE78D0C076CFD9A9(L_26, NULL);
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_27 = __this->___M_1;
		NullCheck(L_27);
		int32_t L_28 = 0;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_1;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)L_31);
		int32_t L_32 = V_0;
		V_0 = ((int32_t)(L_32>>1));
	}

IL_0099:
	{
		int32_t L_33 = V_0;
		if ((((int32_t)L_33) >= ((int32_t)1)))
		{
			goto IL_006d;
		}
	}
	{
		V_2 = 0;
	}

IL_009f:
	{
		V_3 = 2;
		goto IL_00ee;
	}

IL_00a3:
	{
		V_4 = 1;
		goto IL_00e5;
	}

IL_00a8:
	{
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_34 = __this->___M_1;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		int32_t L_38 = V_3;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck((RuntimeArray*)L_40);
		RuntimeObject* L_41;
		L_41 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_40, NULL);
		V_5 = ((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_41, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = V_5;
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_43 = __this->___M_1;
		int32_t L_44 = V_2;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47 = V_4;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		il2cpp_codegen_runtime_class_init_inline(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		GcmUtilities_Xor_m0394ABCF57E7A32E752C26AECF3FEB94FF93FCC7(L_42, L_49, NULL);
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_50 = __this->___M_1;
		int32_t L_51 = V_2;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		int32_t L_54 = V_3;
		int32_t L_55 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = V_5;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_56);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_54, L_55))), (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)L_56);
		int32_t L_57 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_00e5:
	{
		int32_t L_58 = V_4;
		int32_t L_59 = V_3;
		if ((((int32_t)L_58) < ((int32_t)L_59)))
		{
			goto IL_00a8;
		}
	}
	{
		int32_t L_60 = V_3;
		int32_t L_61 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_60, L_61));
	}

IL_00ee:
	{
		int32_t L_62 = V_3;
		if ((((int32_t)L_62) < ((int32_t)((int32_t)256))))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_63 = V_2;
		int32_t L_64 = ((int32_t)il2cpp_codegen_add(L_63, 1));
		V_2 = L_64;
		if ((!(((uint32_t)L_64) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0100;
		}
	}
	{
		return;
	}

IL_0100:
	{
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_65 = __this->___M_1;
		int32_t L_66 = V_2;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_67 = (UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6*)(UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6*)SZArrayNew(UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_67);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_66), (UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6*)L_67);
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_68 = __this->___M_1;
		int32_t L_69 = V_2;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_72);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(0), (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)L_72);
		V_6 = ((int32_t)128);
		goto IL_015e;
	}

IL_012b:
	{
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_73 = __this->___M_1;
		int32_t L_74 = V_2;
		NullCheck(L_73);
		int32_t L_75 = ((int32_t)il2cpp_codegen_subtract(L_74, 1));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_76 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		int32_t L_77 = V_6;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		NullCheck((RuntimeArray*)L_79);
		RuntimeObject* L_80;
		L_80 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_79, NULL);
		V_7 = ((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_80, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = V_7;
		il2cpp_codegen_runtime_class_init_inline(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		GcmUtilities_MultiplyP8_mCB52F45F1CAC26CFCC12078E9D068DA29C57895F(L_81, NULL);
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_82 = __this->___M_1;
		int32_t L_83 = V_2;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		int32_t L_86 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = V_7;
		NullCheck(L_85);
		ArrayElementTypeCheck (L_85, L_87);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(L_86), (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)L_87);
		int32_t L_88 = V_6;
		V_6 = ((int32_t)(L_88>>1));
	}

IL_015e:
	{
		int32_t L_89 = V_6;
		if ((((int32_t)L_89) > ((int32_t)0)))
		{
			goto IL_012b;
		}
	}
	{
		goto IL_009f;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.Tables64kGcmMultiplier::MultiplyH(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables64kGcmMultiplier_MultiplyH_m32EB47500CA6BE9779712E0EB4556C603522C45B (Tables64kGcmMultiplier_tA2C58BD435F6D7B7BE6AC407A0650827AA5833AE* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0054;
	}

IL_000b:
	{
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_1 = __this->___M_1;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_x;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_4);
		uint8_t L_9 = L_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = L_10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		NullCheck(L_11);
		uint32_t* L_12 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_13 = *((uint32_t*)L_12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_2;
		NullCheck(L_14);
		int32_t L_15 = 0;
		uint32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		*((int32_t*)L_12) = (int32_t)((int32_t)(L_13^(int32_t)L_16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_0;
		NullCheck(L_17);
		uint32_t* L_18 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		int32_t L_19 = *((uint32_t*)L_18);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_2;
		NullCheck(L_20);
		int32_t L_21 = 1;
		uint32_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		*((int32_t*)L_18) = (int32_t)((int32_t)(L_19^(int32_t)L_22));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_0;
		NullCheck(L_23);
		uint32_t* L_24 = ((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)));
		int32_t L_25 = *((uint32_t*)L_24);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_2;
		NullCheck(L_26);
		int32_t L_27 = 2;
		uint32_t L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		*((int32_t*)L_24) = (int32_t)((int32_t)(L_25^(int32_t)L_28));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_0;
		NullCheck(L_29);
		uint32_t* L_30 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)));
		int32_t L_31 = *((uint32_t*)L_30);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_2;
		NullCheck(L_32);
		int32_t L_33 = 3;
		uint32_t L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		*((int32_t*)L_30) = (int32_t)((int32_t)(L_31^(int32_t)L_34));
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_0054:
	{
		int32_t L_36 = V_1;
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_000b;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___0_x;
		Pack_UInt32_To_BE_m8F147B0DDE3F9707553F3C00755C59ECA9DCB4E2(L_37, L_38, 0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.Tables64kGcmMultiplier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables64kGcmMultiplier__ctor_m7A61A6148B412A348E7CD595A93EE800A993ABB9 (Tables64kGcmMultiplier_tA2C58BD435F6D7B7BE6AC407A0650827AA5833AE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.Tables8kGcmMultiplier::Init(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables8kGcmMultiplier_Init_m82039B7E0BCA45B6289B324526554D00E13BABA4 (Tables8kGcmMultiplier_tB07FBFB1B8DE3234CBD37D39FCE0E7E91AEEF90A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_H, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	int32_t V_3 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_8 = NULL;
	int32_t V_9 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_10 = NULL;
	{
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_0 = __this->___M_1;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_1 = (UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37*)(UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37*)SZArrayNew(UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___M_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___M_1), (void*)L_1);
		goto IL_0026;
	}

IL_0017:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___H_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_H;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Arrays_AreEqual_m93263147E08C039BD573B4D2A4921988053170B7(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_0026:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_H;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = Arrays_Clone_m5565718292F04770F6788351922E476D3BEF1A94(L_5, NULL);
		__this->___H_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___H_0), (void*)L_6);
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_7 = __this->___M_1;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_8 = (UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6*)(UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6*)SZArrayNew(UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6*)L_8);
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_9 = __this->___M_1;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_10 = (UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6*)(UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6*)SZArrayNew(UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6*)L_10);
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_11 = __this->___M_1;
		NullCheck(L_11);
		int32_t L_12 = 0;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)L_14);
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_15 = __this->___M_1;
		NullCheck(L_15);
		int32_t L_16 = 1;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)L_18);
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_19 = __this->___M_1;
		NullCheck(L_19);
		int32_t L_20 = 1;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___0_H;
		il2cpp_codegen_runtime_class_init_inline(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23;
		L_23 = GcmUtilities_AsUints_mD89C5B70F49D0C864C411063BF92669FF552C1AC(L_22, NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_23);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(8), (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)L_23);
		V_0 = 4;
		goto IL_00b0;
	}

IL_0084:
	{
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_24 = __this->___M_1;
		NullCheck(L_24);
		int32_t L_25 = 1;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		int32_t L_27 = V_0;
		int32_t L_28 = V_0;
		NullCheck(L_26);
		int32_t L_29 = ((int32_t)il2cpp_codegen_add(L_27, L_28));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck((RuntimeArray*)L_30);
		RuntimeObject* L_31;
		L_31 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_30, NULL);
		V_1 = ((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_31, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_1;
		il2cpp_codegen_runtime_class_init_inline(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		GcmUtilities_MultiplyP_mA360A9784FA8539CCA238FF4EE78D0C076CFD9A9(L_32, NULL);
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_33 = __this->___M_1;
		NullCheck(L_33);
		int32_t L_34 = 1;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		int32_t L_36 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = V_1;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_37);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)L_37);
		int32_t L_38 = V_0;
		V_0 = ((int32_t)(L_38>>1));
	}

IL_00b0:
	{
		int32_t L_39 = V_0;
		if ((((int32_t)L_39) >= ((int32_t)1)))
		{
			goto IL_0084;
		}
	}
	{
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_40 = __this->___M_1;
		NullCheck(L_40);
		int32_t L_41 = 1;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_42);
		int32_t L_43 = 1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck((RuntimeArray*)L_44);
		RuntimeObject* L_45;
		L_45 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_44, NULL);
		V_2 = ((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_45, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = V_2;
		il2cpp_codegen_runtime_class_init_inline(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		GcmUtilities_MultiplyP_mA360A9784FA8539CCA238FF4EE78D0C076CFD9A9(L_46, NULL);
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_47 = __this->___M_1;
		NullCheck(L_47);
		int32_t L_48 = 0;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = V_2;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_50);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(8), (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)L_50);
		V_3 = 4;
		goto IL_010d;
	}

IL_00de:
	{
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_51 = __this->___M_1;
		NullCheck(L_51);
		int32_t L_52 = 0;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		int32_t L_54 = V_3;
		int32_t L_55 = V_3;
		NullCheck(L_53);
		int32_t L_56 = ((int32_t)il2cpp_codegen_add(L_54, L_55));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck((RuntimeArray*)L_57);
		RuntimeObject* L_58;
		L_58 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_57, NULL);
		V_4 = ((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_58, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = V_4;
		il2cpp_codegen_runtime_class_init_inline(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		GcmUtilities_MultiplyP_mA360A9784FA8539CCA238FF4EE78D0C076CFD9A9(L_59, NULL);
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_60 = __this->___M_1;
		NullCheck(L_60);
		int32_t L_61 = 0;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		int32_t L_63 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = V_4;
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_64);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_63), (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)L_64);
		int32_t L_65 = V_3;
		V_3 = ((int32_t)(L_65>>1));
	}

IL_010d:
	{
		int32_t L_66 = V_3;
		if ((((int32_t)L_66) >= ((int32_t)1)))
		{
			goto IL_00de;
		}
	}
	{
		V_5 = 0;
	}

IL_0114:
	{
		V_6 = 2;
		goto IL_016d;
	}

IL_0119:
	{
		V_7 = 1;
		goto IL_0160;
	}

IL_011e:
	{
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_67 = __this->___M_1;
		int32_t L_68 = V_5;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		int32_t L_71 = V_6;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck((RuntimeArray*)L_73);
		RuntimeObject* L_74;
		L_74 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_73, NULL);
		V_8 = ((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_74, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = V_8;
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_76 = __this->___M_1;
		int32_t L_77 = V_5;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		int32_t L_80 = V_7;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		il2cpp_codegen_runtime_class_init_inline(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		GcmUtilities_Xor_m0394ABCF57E7A32E752C26AECF3FEB94FF93FCC7(L_75, L_82, NULL);
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_83 = __this->___M_1;
		int32_t L_84 = V_5;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		int32_t L_87 = V_6;
		int32_t L_88 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_89 = V_8;
		NullCheck(L_86);
		ArrayElementTypeCheck (L_86, L_89);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_87, L_88))), (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)L_89);
		int32_t L_90 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_90, 1));
	}

IL_0160:
	{
		int32_t L_91 = V_7;
		int32_t L_92 = V_6;
		if ((((int32_t)L_91) < ((int32_t)L_92)))
		{
			goto IL_011e;
		}
	}
	{
		int32_t L_93 = V_6;
		int32_t L_94 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_93, L_94));
	}

IL_016d:
	{
		int32_t L_95 = V_6;
		if ((((int32_t)L_95) < ((int32_t)((int32_t)16))))
		{
			goto IL_0119;
		}
	}
	{
		int32_t L_96 = V_5;
		int32_t L_97 = ((int32_t)il2cpp_codegen_add(L_96, 1));
		V_5 = L_97;
		if ((!(((uint32_t)L_97) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_017f;
		}
	}
	{
		return;
	}

IL_017f:
	{
		int32_t L_98 = V_5;
		if ((((int32_t)L_98) <= ((int32_t)1)))
		{
			goto IL_0114;
		}
	}
	{
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_99 = __this->___M_1;
		int32_t L_100 = V_5;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_101 = (UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6*)(UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6*)SZArrayNew(UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		NullCheck(L_99);
		ArrayElementTypeCheck (L_99, L_101);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(L_100), (UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6*)L_101);
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_102 = __this->___M_1;
		int32_t L_103 = V_5;
		NullCheck(L_102);
		int32_t L_104 = L_103;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_105 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_106 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		NullCheck(L_105);
		ArrayElementTypeCheck (L_105, L_106);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(0), (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)L_106);
		V_9 = 8;
		goto IL_01df;
	}

IL_01aa:
	{
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_107 = __this->___M_1;
		int32_t L_108 = V_5;
		NullCheck(L_107);
		int32_t L_109 = ((int32_t)il2cpp_codegen_subtract(L_108, 2));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		int32_t L_111 = V_9;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_113 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		NullCheck((RuntimeArray*)L_113);
		RuntimeObject* L_114;
		L_114 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_113, NULL);
		V_10 = ((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_114, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_115 = V_10;
		il2cpp_codegen_runtime_class_init_inline(GcmUtilities_t5DFECD55381881B640EE8ABDC1FDA4C82C46ECBC_il2cpp_TypeInfo_var);
		GcmUtilities_MultiplyP8_mCB52F45F1CAC26CFCC12078E9D068DA29C57895F(L_115, NULL);
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_116 = __this->___M_1;
		int32_t L_117 = V_5;
		NullCheck(L_116);
		int32_t L_118 = L_117;
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		int32_t L_120 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_121 = V_10;
		NullCheck(L_119);
		ArrayElementTypeCheck (L_119, L_121);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(L_120), (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)L_121);
		int32_t L_122 = V_9;
		V_9 = ((int32_t)(L_122>>1));
	}

IL_01df:
	{
		int32_t L_123 = V_9;
		if ((((int32_t)L_123) > ((int32_t)0)))
		{
			goto IL_01aa;
		}
	}
	{
		goto IL_0114;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.Tables8kGcmMultiplier::MultiplyH(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables8kGcmMultiplier_MultiplyH_mE54B4D65FB536390FEBE421A2571B19E69EE06C6 (Tables8kGcmMultiplier_tB07FBFB1B8DE3234CBD37D39FCE0E7E91AEEF90A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	int32_t V_1 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		V_1 = ((int32_t)15);
		goto IL_00ae;
	}

IL_000f:
	{
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_1 = __this->___M_1;
		int32_t L_2 = V_1;
		int32_t L_3 = V_1;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_x;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_5);
		int32_t L_10 = ((int32_t)((int32_t)L_9&((int32_t)15)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = L_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		NullCheck(L_12);
		uint32_t* L_13 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_14 = *((uint32_t*)L_13);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_2;
		NullCheck(L_15);
		int32_t L_16 = 0;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		*((int32_t*)L_13) = (int32_t)((int32_t)(L_14^(int32_t)L_17));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_0;
		NullCheck(L_18);
		uint32_t* L_19 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		int32_t L_20 = *((uint32_t*)L_19);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = 1;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		*((int32_t*)L_19) = (int32_t)((int32_t)(L_20^(int32_t)L_23));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_0;
		NullCheck(L_24);
		uint32_t* L_25 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)));
		int32_t L_26 = *((uint32_t*)L_25);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_2;
		NullCheck(L_27);
		int32_t L_28 = 2;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		*((int32_t*)L_25) = (int32_t)((int32_t)(L_26^(int32_t)L_29));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_0;
		NullCheck(L_30);
		uint32_t* L_31 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)));
		int32_t L_32 = *((uint32_t*)L_31);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = V_2;
		NullCheck(L_33);
		int32_t L_34 = 3;
		uint32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		*((int32_t*)L_31) = (int32_t)((int32_t)(L_32^(int32_t)L_35));
		UInt32U5BU5DU5BU5DU5BU5D_tB2F2D1A567B2D91744793128AE7EEB0BB4A62D37* L_36 = __this->___M_1;
		int32_t L_37 = V_1;
		int32_t L_38 = V_1;
		NullCheck(L_36);
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_37, L_38)), 1));
		UInt32U5BU5DU5BU5D_t79F6B5270F9D4F846B5AACEF3AC8E62515A43EA6* L_40 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ___0_x;
		int32_t L_42 = V_1;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		uint8_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_40);
		int32_t L_45 = ((int32_t)(((int32_t)((int32_t)L_44&((int32_t)240)))>>4));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_2 = L_46;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = V_0;
		NullCheck(L_47);
		uint32_t* L_48 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_49 = *((uint32_t*)L_48);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = V_2;
		NullCheck(L_50);
		int32_t L_51 = 0;
		uint32_t L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		*((int32_t*)L_48) = (int32_t)((int32_t)(L_49^(int32_t)L_52));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = V_0;
		NullCheck(L_53);
		uint32_t* L_54 = ((L_53)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		int32_t L_55 = *((uint32_t*)L_54);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = V_2;
		NullCheck(L_56);
		int32_t L_57 = 1;
		uint32_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		*((int32_t*)L_54) = (int32_t)((int32_t)(L_55^(int32_t)L_58));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = V_0;
		NullCheck(L_59);
		uint32_t* L_60 = ((L_59)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)));
		int32_t L_61 = *((uint32_t*)L_60);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = V_2;
		NullCheck(L_62);
		int32_t L_63 = 2;
		uint32_t L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		*((int32_t*)L_60) = (int32_t)((int32_t)(L_61^(int32_t)L_64));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = V_0;
		NullCheck(L_65);
		uint32_t* L_66 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)));
		int32_t L_67 = *((uint32_t*)L_66);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = V_2;
		NullCheck(L_68);
		int32_t L_69 = 3;
		uint32_t L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		*((int32_t*)L_66) = (int32_t)((int32_t)(L_67^(int32_t)L_70));
		int32_t L_71 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_71, 1));
	}

IL_00ae:
	{
		int32_t L_72 = V_1;
		if ((((int32_t)L_72) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = ___0_x;
		Pack_UInt32_To_BE_m8F147B0DDE3F9707553F3C00755C59ECA9DCB4E2(L_73, L_74, 0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Modes.Gcm.Tables8kGcmMultiplier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tables8kGcmMultiplier__ctor_m9B21299A2C2574A8266501BA3D1E86F8FF03D73E (Tables8kGcmMultiplier_tB07FBFB1B8DE3234CBD37D39FCE0E7E91AEEF90A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CbcBlockCipherMac__ctor_m76521E75487686849F2318A219C2896CECE302F7 (CbcBlockCipherMac_tB98ED50E26EFEEBA2A312F50D356D6C3C473777D* __this, RuntimeObject* ___0_cipher, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_cipher;
		RuntimeObject* L_1 = ___0_cipher;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_1);
		CbcBlockCipherMac__ctor_m64B815C8E01DB3E534F99C93AA90E4D784167FE8(__this, L_0, ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_2, 8))/2)), (RuntimeObject*)NULL, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CbcBlockCipherMac__ctor_mFF3D6363CC57A22D25135B746747EBD65EDFF143 (CbcBlockCipherMac_tB98ED50E26EFEEBA2A312F50D356D6C3C473777D* __this, RuntimeObject* ___0_cipher, RuntimeObject* ___1_padding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_cipher;
		RuntimeObject* L_1 = ___0_cipher;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = ___1_padding;
		CbcBlockCipherMac__ctor_m64B815C8E01DB3E534F99C93AA90E4D784167FE8(__this, L_0, ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_2, 8))/2)), L_3, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CbcBlockCipherMac__ctor_m12906E75391E114BA84897865E8EE30CDBC4F28F (CbcBlockCipherMac_tB98ED50E26EFEEBA2A312F50D356D6C3C473777D* __this, RuntimeObject* ___0_cipher, int32_t ___1_macSizeInBits, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_cipher;
		int32_t L_1 = ___1_macSizeInBits;
		CbcBlockCipherMac__ctor_m64B815C8E01DB3E534F99C93AA90E4D784167FE8(__this, L_0, L_1, (RuntimeObject*)NULL, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32,Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CbcBlockCipherMac__ctor_m64B815C8E01DB3E534F99C93AA90E4D784167FE8 (CbcBlockCipherMac_tB98ED50E26EFEEBA2A312F50D356D6C3C473777D* __this, RuntimeObject* ___0_cipher, int32_t ___1_macSizeInBits, RuntimeObject* ___2_padding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___1_macSizeInBits;
		if (!((int32_t)(L_0%8)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFA1C93C4701E9DEBBB21F7804FB0D557305BF116)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CbcBlockCipherMac__ctor_m64B815C8E01DB3E534F99C93AA90E4D784167FE8_RuntimeMethod_var)));
	}

IL_0016:
	{
		RuntimeObject* L_2 = ___0_cipher;
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_3 = (CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548*)il2cpp_codegen_object_new(CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		CbcBlockCipher__ctor_mC5E40D0E42BE608A3786ECA72565E2726C339D9F(L_3, L_2, NULL);
		__this->___cipher_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_2), (void*)L_3);
		RuntimeObject* L_4 = ___2_padding;
		__this->___padding_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___padding_3), (void*)L_4);
		int32_t L_5 = ___1_macSizeInBits;
		__this->___macSize_4 = ((int32_t)(L_5/8));
		RuntimeObject* L_6 = ___0_cipher;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->___buf_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buf_0), (void*)L_8);
		__this->___bufOff_1 = 0;
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CbcBlockCipherMac_get_AlgorithmName_mADFC0595D45F6D958BB0575084B87D520B758AA4 (CbcBlockCipherMac_tB98ED50E26EFEEBA2A312F50D356D6C3C473777D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___cipher_2;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::Init(Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CbcBlockCipherMac_Init_mCD08669573712B5DFA1C4369C88BD018CA52D47A (CbcBlockCipherMac_tB98ED50E26EFEEBA2A312F50D356D6C3C473777D* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CbcBlockCipherMac_Reset_m04CD28CF9224C27E7C13ACC9318FACB62252DBC4(__this, NULL);
		RuntimeObject* L_0 = __this->___cipher_2;
		RuntimeObject* L_1 = ___0_parameters;
		NullCheck(L_0);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0, (bool)1, L_1);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::GetMacSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CbcBlockCipherMac_GetMacSize_mB6530CA11CCDB20FC6BA1E6D4D259DE8CFFFFB31 (CbcBlockCipherMac_tB98ED50E26EFEEBA2A312F50D356D6C3C473777D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___macSize_4;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CbcBlockCipherMac_Update_m0147EDBE2633E4EDEC40E4457585ED28EB6B4D7C (CbcBlockCipherMac_tB98ED50E26EFEEBA2A312F50D356D6C3C473777D* __this, uint8_t ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___bufOff_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___buf_0;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject* L_2 = __this->___cipher_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___buf_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___buf_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_2, L_3, 0, L_4, 0);
		__this->___bufOff_1 = 0;
	}

IL_0031:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___buf_0;
		int32_t L_7 = __this->___bufOff_1;
		V_0 = L_7;
		int32_t L_8 = V_0;
		__this->___bufOff_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = V_0;
		uint8_t L_10 = ___0_input;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)L_10);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CbcBlockCipherMac_BlockUpdate_mE1569AA1A95AEB46A0AC57DDFD4141E9064C8692 (CbcBlockCipherMac_tB98ED50E26EFEEBA2A312F50D356D6C3C473777D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_len, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___2_len;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8E97A2EC91B9BC5BE9457E4364E5C15F95B7FDC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CbcBlockCipherMac_BlockUpdate_mE1569AA1A95AEB46A0AC57DDFD4141E9064C8692_RuntimeMethod_var)));
	}

IL_000f:
	{
		RuntimeObject* L_2 = __this->___cipher_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = __this->___bufOff_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_4, L_5));
		int32_t L_6 = ___2_len;
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_008c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_input;
		int32_t L_9 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___buf_0;
		int32_t L_11 = __this->___bufOff_1;
		int32_t L_12 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, L_11, L_12, NULL);
		RuntimeObject* L_13 = __this->___cipher_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___buf_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___buf_0;
		NullCheck(L_13);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_13, L_14, 0, L_15, 0);
		__this->___bufOff_1 = 0;
		int32_t L_17 = ___2_len;
		int32_t L_18 = V_1;
		___2_len = ((int32_t)il2cpp_codegen_subtract(L_17, L_18));
		int32_t L_19 = ___1_inOff;
		int32_t L_20 = V_1;
		___1_inOff = ((int32_t)il2cpp_codegen_add(L_19, L_20));
		goto IL_0088;
	}

IL_0069:
	{
		RuntimeObject* L_21 = __this->___cipher_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___0_input;
		int32_t L_23 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___buf_0;
		NullCheck(L_21);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_21, L_22, L_23, L_24, 0);
		int32_t L_26 = ___2_len;
		int32_t L_27 = V_0;
		___2_len = ((int32_t)il2cpp_codegen_subtract(L_26, L_27));
		int32_t L_28 = ___1_inOff;
		int32_t L_29 = V_0;
		___1_inOff = ((int32_t)il2cpp_codegen_add(L_28, L_29));
	}

IL_0088:
	{
		int32_t L_30 = ___2_len;
		int32_t L_31 = V_0;
		if ((((int32_t)L_30) > ((int32_t)L_31)))
		{
			goto IL_0069;
		}
	}

IL_008c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___0_input;
		int32_t L_33 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___buf_0;
		int32_t L_35 = __this->___bufOff_1;
		int32_t L_36 = ___2_len;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_32, L_33, (RuntimeArray*)L_34, L_35, L_36, NULL);
		int32_t L_37 = __this->___bufOff_1;
		int32_t L_38 = ___2_len;
		__this->___bufOff_1 = ((int32_t)il2cpp_codegen_add(L_37, L_38));
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CbcBlockCipherMac_DoFinal_m11D3D5B409DFA2AA9D029C7DD31BD14760C3CBE9 (CbcBlockCipherMac_tB98ED50E26EFEEBA2A312F50D356D6C3C473777D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, int32_t ___1_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipherPadding_t5B2EB9D7A2BB11DD4C72B65E622CED29672E7D6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___cipher_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		RuntimeObject* L_2 = __this->___padding_3;
		if (L_2)
		{
			goto IL_003a;
		}
	}
	{
		goto IL_002f;
	}

IL_0016:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___buf_0;
		int32_t L_4 = __this->___bufOff_1;
		V_1 = L_4;
		int32_t L_5 = V_1;
		__this->___bufOff_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)0);
	}

IL_002f:
	{
		int32_t L_7 = __this->___bufOff_1;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_007c;
	}

IL_003a:
	{
		int32_t L_9 = __this->___bufOff_1;
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0064;
		}
	}
	{
		RuntimeObject* L_11 = __this->___cipher_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___buf_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___buf_0;
		NullCheck(L_11);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_11, L_12, 0, L_13, 0);
		__this->___bufOff_1 = 0;
	}

IL_0064:
	{
		RuntimeObject* L_15 = __this->___padding_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___buf_0;
		int32_t L_17 = __this->___bufOff_1;
		NullCheck(L_15);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding::AddPadding(System.Byte[],System.Int32) */, IBlockCipherPadding_t5B2EB9D7A2BB11DD4C72B65E622CED29672E7D6B_il2cpp_TypeInfo_var, L_15, L_16, L_17);
	}

IL_007c:
	{
		RuntimeObject* L_19 = __this->___cipher_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___buf_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___buf_0;
		NullCheck(L_19);
		int32_t L_22;
		L_22 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_19, L_20, 0, L_21, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___buf_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___0_output;
		int32_t L_25 = ___1_outOff;
		int32_t L_26 = __this->___macSize_4;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_23, 0, (RuntimeArray*)L_24, L_25, L_26, NULL);
		CbcBlockCipherMac_Reset_m04CD28CF9224C27E7C13ACC9318FACB62252DBC4(__this, NULL);
		int32_t L_27 = __this->___macSize_4;
		return L_27;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CbcBlockCipherMac_Reset_m04CD28CF9224C27E7C13ACC9318FACB62252DBC4 (CbcBlockCipherMac_tB98ED50E26EFEEBA2A312F50D356D6C3C473777D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___buf_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___buf_0;
		NullCheck(L_1);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		__this->___bufOff_1 = 0;
		RuntimeObject* L_2 = __this->___cipher_2;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(5 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Reset() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_2);
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
// System.Void Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacCFBBlockCipher__ctor_m286644B8FD89004CE42C1C69E7D39290DEA6E37A (MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* __this, RuntimeObject* ___0_cipher, int32_t ___1_bitBlockSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_cipher;
		__this->___cipher_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_4), (void*)L_0);
		int32_t L_1 = ___1_bitBlockSize;
		__this->___blockSize_3 = ((int32_t)(L_1/8));
		RuntimeObject* L_2 = ___0_cipher;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->___IV_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___IV_0), (void*)L_4);
		RuntimeObject* L_5 = ___0_cipher;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___cfbV_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cfbV_1), (void*)L_7);
		RuntimeObject* L_8 = ___0_cipher;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_9);
		__this->___cfbOutV_2 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cfbOutV_2), (void*)L_10);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacCFBBlockCipher_Init_mCE1C56852D7B7B06A841BEC0545A4E93A9A8CFCF (MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* __this, bool ___0_forEncryption, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* G_B3_0 = NULL;
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* G_B2_0 = NULL;
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* G_B4_0 = NULL;
	{
		RuntimeObject* L_0 = ___1_parameters;
		if (!((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_0, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_1 = ___1_parameters;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_2 = ((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_1, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var));
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(L_2, NULL);
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___IV_0;
		NullCheck(L_5);
		G_B2_0 = L_2;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			G_B3_0 = L_2;
			goto IL_0040;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___IV_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___IV_0;
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		NullCheck(L_10);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, 0, (RuntimeArray*)L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), ((int32_t)(((RuntimeArray*)L_9)->max_length)))), ((int32_t)(((RuntimeArray*)L_10)->max_length)), NULL);
		G_B4_0 = G_B2_0;
		goto IL_0056;
	}

IL_0040:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___IV_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___IV_0;
		NullCheck(L_13);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, 0, (RuntimeArray*)L_12, 0, ((int32_t)(((RuntimeArray*)L_13)->max_length)), NULL);
		G_B4_0 = G_B3_0;
	}

IL_0056:
	{
		NullCheck(G_B4_0);
		RuntimeObject* L_14;
		L_14 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(G_B4_0, NULL);
		___1_parameters = L_14;
	}

IL_005d:
	{
		MacCFBBlockCipher_Reset_mEB6FEF730CB670FB039A4372F26BA3F97FF3B5D3(__this, NULL);
		RuntimeObject* L_15 = __this->___cipher_4;
		RuntimeObject* L_16 = ___1_parameters;
		NullCheck(L_15);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_15, (bool)1, L_16);
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MacCFBBlockCipher_get_AlgorithmName_mF9BED971D51FCD5B44FAADC8D0FFFAE53EDA9322 (MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65D1B0E1FA928C5674E15C89FEC7B4B01353ACBF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->___cipher_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		int32_t L_2 = __this->___blockSize_3;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_2, 8));
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, _stringLiteral65D1B0E1FA928C5674E15C89FEC7B4B01353ACBF, L_3, NULL);
		return L_4;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MacCFBBlockCipher_get_IsPartialBlockOkay_m214B0D65BC869000EC2561FF4D9C1939C72A8718 (MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MacCFBBlockCipher_GetBlockSize_m190699E466D18B71CC3242CE15A3B22F80FA2A2C (MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___blockSize_3;
		return L_0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MacCFBBlockCipher_ProcessBlock_m513784A2508547799B9558EFC11A28525B70C222 (MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_outBytes, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_inOff;
		int32_t L_1 = __this->___blockSize_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_input;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0018;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_3 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MacCFBBlockCipher_ProcessBlock_m513784A2508547799B9558EFC11A28525B70C222_RuntimeMethod_var)));
	}

IL_0018:
	{
		int32_t L_4 = ___3_outOff;
		int32_t L_5 = __this->___blockSize_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___2_outBytes;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0031;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_7 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MacCFBBlockCipher_ProcessBlock_m513784A2508547799B9558EFC11A28525B70C222_RuntimeMethod_var)));
	}

IL_0031:
	{
		RuntimeObject* L_8 = __this->___cipher_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___cfbV_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___cfbOutV_2;
		NullCheck(L_8);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_8, L_9, 0, L_10, 0);
		V_0 = 0;
		goto IL_0068;
	}

IL_004f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___2_outBytes;
		int32_t L_13 = ___3_outOff;
		int32_t L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___cfbOutV_2;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___0_input;
		int32_t L_20 = ___1_inOff;
		int32_t L_21 = V_0;
		NullCheck(L_19);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add(L_20, L_21));
		uint8_t L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_13, L_14))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_18^(int32_t)L_23))));
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0068:
	{
		int32_t L_25 = V_0;
		int32_t L_26 = __this->___blockSize_3;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_004f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->___cfbV_1;
		int32_t L_28 = __this->___blockSize_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___cfbV_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->___cfbV_1;
		NullCheck(L_30);
		int32_t L_31 = __this->___blockSize_3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_27, L_28, (RuntimeArray*)L_29, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_30)->max_length)), L_31)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___2_outBytes;
		int32_t L_33 = ___3_outOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___cfbV_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = __this->___cfbV_1;
		NullCheck(L_35);
		int32_t L_36 = __this->___blockSize_3;
		int32_t L_37 = __this->___blockSize_3;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_32, L_33, (RuntimeArray*)L_34, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_35)->max_length)), L_36)), L_37, NULL);
		int32_t L_38 = __this->___blockSize_3;
		return L_38;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacCFBBlockCipher_Reset_mEB6FEF730CB670FB039A4372F26BA3F97FF3B5D3 (MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___IV_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___cfbV_1;
		NullCheck((RuntimeArray*)L_0);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_0, (RuntimeArray*)L_1, 0, NULL);
		RuntimeObject* L_2 = __this->___cipher_4;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(5 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Reset() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_2);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.MacCFBBlockCipher::GetMacBlock(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MacCFBBlockCipher_GetMacBlock_mC96AA40940B8399E5B6C50B9A87683569FBC68F4 (MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_mac, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___cipher_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___cfbV_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_mac;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0, L_1, 0, L_2, 0);
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
// System.Void Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CfbBlockCipherMac__ctor_mEDB79F5EC58EC4DCFD1D58C149235E598A1CD748 (CfbBlockCipherMac_t00336B3CBEBF99EE3F5B458636F3DE463E26B543* __this, RuntimeObject* ___0_cipher, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_cipher;
		RuntimeObject* L_1 = ___0_cipher;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_1);
		CfbBlockCipherMac__ctor_mFAAC83D5FA64B787452CE42AAAB7735C3E9B4715(__this, L_0, 8, ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_2, 8))/2)), (RuntimeObject*)NULL, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CfbBlockCipherMac__ctor_m01E860A239633278C7FC60704CB00C906E0431C1 (CfbBlockCipherMac_t00336B3CBEBF99EE3F5B458636F3DE463E26B543* __this, RuntimeObject* ___0_cipher, RuntimeObject* ___1_padding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_cipher;
		RuntimeObject* L_1 = ___0_cipher;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = ___1_padding;
		CfbBlockCipherMac__ctor_mFAAC83D5FA64B787452CE42AAAB7735C3E9B4715(__this, L_0, 8, ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_2, 8))/2)), L_3, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CfbBlockCipherMac__ctor_m351C3EBBE0D597BCA641E0B9E14E9493EAB66B58 (CfbBlockCipherMac_t00336B3CBEBF99EE3F5B458636F3DE463E26B543* __this, RuntimeObject* ___0_cipher, int32_t ___1_cfbBitSize, int32_t ___2_macSizeInBits, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_cipher;
		int32_t L_1 = ___1_cfbBitSize;
		int32_t L_2 = ___2_macSizeInBits;
		CfbBlockCipherMac__ctor_mFAAC83D5FA64B787452CE42AAAB7735C3E9B4715(__this, L_0, L_1, L_2, (RuntimeObject*)NULL, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32,System.Int32,Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CfbBlockCipherMac__ctor_mFAAC83D5FA64B787452CE42AAAB7735C3E9B4715 (CfbBlockCipherMac_t00336B3CBEBF99EE3F5B458636F3DE463E26B543* __this, RuntimeObject* ___0_cipher, int32_t ___1_cfbBitSize, int32_t ___2_macSizeInBits, RuntimeObject* ___3_padding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___2_macSizeInBits;
		if (!((int32_t)(L_0%8)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFA1C93C4701E9DEBBB21F7804FB0D557305BF116)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CfbBlockCipherMac__ctor_mFAAC83D5FA64B787452CE42AAAB7735C3E9B4715_RuntimeMethod_var)));
	}

IL_0016:
	{
		RuntimeObject* L_2 = ___0_cipher;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->___mac_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mac_0), (void*)L_4);
		RuntimeObject* L_5 = ___0_cipher;
		int32_t L_6 = ___1_cfbBitSize;
		MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* L_7 = (MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED*)il2cpp_codegen_object_new(MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		MacCFBBlockCipher__ctor_m286644B8FD89004CE42C1C69E7D39290DEA6E37A(L_7, L_5, L_6, NULL);
		__this->___cipher_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_3), (void*)L_7);
		RuntimeObject* L_8 = ___3_padding;
		__this->___padding_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___padding_4), (void*)L_8);
		int32_t L_9 = ___2_macSizeInBits;
		__this->___macSize_5 = ((int32_t)(L_9/8));
		MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* L_10 = __this->___cipher_3;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = MacCFBBlockCipher_GetBlockSize_m190699E466D18B71CC3242CE15A3B22F80FA2A2C_inline(L_10, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_11);
		__this->___Buffer_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Buffer_1), (void*)L_12);
		__this->___bufOff_2 = 0;
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CfbBlockCipherMac_get_AlgorithmName_m11411D501FD9D2A623439555F6BC764970F53264 (CfbBlockCipherMac_t00336B3CBEBF99EE3F5B458636F3DE463E26B543* __this, const RuntimeMethod* method) 
{
	{
		MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* L_0 = __this->___cipher_3;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = MacCFBBlockCipher_get_AlgorithmName_mF9BED971D51FCD5B44FAADC8D0FFFAE53EDA9322(L_0, NULL);
		return L_1;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::Init(Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CfbBlockCipherMac_Init_m5447B26C91FA8B7D593E1525E009CABBD3A14296 (CfbBlockCipherMac_t00336B3CBEBF99EE3F5B458636F3DE463E26B543* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) 
{
	{
		CfbBlockCipherMac_Reset_mA7DF7BE65A29A71426ACEFE3A418174DDC1165C7(__this, NULL);
		MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* L_0 = __this->___cipher_3;
		RuntimeObject* L_1 = ___0_parameters;
		NullCheck(L_0);
		MacCFBBlockCipher_Init_mCE1C56852D7B7B06A841BEC0545A4E93A9A8CFCF(L_0, (bool)1, L_1, NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::GetMacSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CfbBlockCipherMac_GetMacSize_m501AF01D7C5E066ED3608E3F15EB62940B8EC35C (CfbBlockCipherMac_t00336B3CBEBF99EE3F5B458636F3DE463E26B543* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___macSize_5;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CfbBlockCipherMac_Update_m139813440B50BF1CBC72EFCAFD5329D52E517F2F (CfbBlockCipherMac_t00336B3CBEBF99EE3F5B458636F3DE463E26B543* __this, uint8_t ___0_input, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___bufOff_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___Buffer_1;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* L_2 = __this->___cipher_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___Buffer_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___mac_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = MacCFBBlockCipher_ProcessBlock_m513784A2508547799B9558EFC11A28525B70C222(L_2, L_3, 0, L_4, 0, NULL);
		__this->___bufOff_2 = 0;
	}

IL_0031:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___Buffer_1;
		int32_t L_7 = __this->___bufOff_2;
		V_0 = L_7;
		int32_t L_8 = V_0;
		__this->___bufOff_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = V_0;
		uint8_t L_10 = ___0_input;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)L_10);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CfbBlockCipherMac_BlockUpdate_m472F97123B82BBE61A81CACF7378D4333A0FDA18 (CfbBlockCipherMac_t00336B3CBEBF99EE3F5B458636F3DE463E26B543* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_len, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_len;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8E97A2EC91B9BC5BE9457E4364E5C15F95B7FDC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CfbBlockCipherMac_BlockUpdate_m472F97123B82BBE61A81CACF7378D4333A0FDA18_RuntimeMethod_var)));
	}

IL_000f:
	{
		MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* L_2 = __this->___cipher_3;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = MacCFBBlockCipher_GetBlockSize_m190699E466D18B71CC3242CE15A3B22F80FA2A2C_inline(L_2, NULL);
		V_0 = L_3;
		V_1 = 0;
		int32_t L_4 = V_0;
		int32_t L_5 = __this->___bufOff_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_4, L_5));
		int32_t L_6 = ___2_len;
		int32_t L_7 = V_2;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0092;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_input;
		int32_t L_9 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___Buffer_1;
		int32_t L_11 = __this->___bufOff_2;
		int32_t L_12 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, L_11, L_12, NULL);
		int32_t L_13 = V_1;
		MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* L_14 = __this->___cipher_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___Buffer_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___mac_0;
		NullCheck(L_14);
		int32_t L_17;
		L_17 = MacCFBBlockCipher_ProcessBlock_m513784A2508547799B9558EFC11A28525B70C222(L_14, L_15, 0, L_16, 0, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, L_17));
		__this->___bufOff_2 = 0;
		int32_t L_18 = ___2_len;
		int32_t L_19 = V_2;
		___2_len = ((int32_t)il2cpp_codegen_subtract(L_18, L_19));
		int32_t L_20 = ___1_inOff;
		int32_t L_21 = V_2;
		___1_inOff = ((int32_t)il2cpp_codegen_add(L_20, L_21));
		goto IL_008e;
	}

IL_006d:
	{
		int32_t L_22 = V_1;
		MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* L_23 = __this->___cipher_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___0_input;
		int32_t L_25 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___mac_0;
		NullCheck(L_23);
		int32_t L_27;
		L_27 = MacCFBBlockCipher_ProcessBlock_m513784A2508547799B9558EFC11A28525B70C222(L_23, L_24, L_25, L_26, 0, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, L_27));
		int32_t L_28 = ___2_len;
		int32_t L_29 = V_0;
		___2_len = ((int32_t)il2cpp_codegen_subtract(L_28, L_29));
		int32_t L_30 = ___1_inOff;
		int32_t L_31 = V_0;
		___1_inOff = ((int32_t)il2cpp_codegen_add(L_30, L_31));
	}

IL_008e:
	{
		int32_t L_32 = ___2_len;
		int32_t L_33 = V_0;
		if ((((int32_t)L_32) > ((int32_t)L_33)))
		{
			goto IL_006d;
		}
	}

IL_0092:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___0_input;
		int32_t L_35 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___Buffer_1;
		int32_t L_37 = __this->___bufOff_2;
		int32_t L_38 = ___2_len;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_34, L_35, (RuntimeArray*)L_36, L_37, L_38, NULL);
		int32_t L_39 = __this->___bufOff_2;
		int32_t L_40 = ___2_len;
		__this->___bufOff_2 = ((int32_t)il2cpp_codegen_add(L_39, L_40));
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CfbBlockCipherMac_DoFinal_mBA7ABEA399366FD0A25AD432230B8AE0E33AFEC0 (CfbBlockCipherMac_t00336B3CBEBF99EE3F5B458636F3DE463E26B543* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, int32_t ___1_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipherPadding_t5B2EB9D7A2BB11DD4C72B65E622CED29672E7D6B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* L_0 = __this->___cipher_3;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = MacCFBBlockCipher_GetBlockSize_m190699E466D18B71CC3242CE15A3B22F80FA2A2C_inline(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = __this->___padding_4;
		if (L_2)
		{
			goto IL_003a;
		}
	}
	{
		goto IL_002f;
	}

IL_0016:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___Buffer_1;
		int32_t L_4 = __this->___bufOff_2;
		V_1 = L_4;
		int32_t L_5 = V_1;
		__this->___bufOff_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)0);
	}

IL_002f:
	{
		int32_t L_7 = __this->___bufOff_2;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_0052;
	}

IL_003a:
	{
		RuntimeObject* L_9 = __this->___padding_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___Buffer_1;
		int32_t L_11 = __this->___bufOff_2;
		NullCheck(L_9);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding::AddPadding(System.Byte[],System.Int32) */, IBlockCipherPadding_t5B2EB9D7A2BB11DD4C72B65E622CED29672E7D6B_il2cpp_TypeInfo_var, L_9, L_10, L_11);
	}

IL_0052:
	{
		MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* L_13 = __this->___cipher_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___Buffer_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___mac_0;
		NullCheck(L_13);
		int32_t L_16;
		L_16 = MacCFBBlockCipher_ProcessBlock_m513784A2508547799B9558EFC11A28525B70C222(L_13, L_14, 0, L_15, 0, NULL);
		MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* L_17 = __this->___cipher_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___mac_0;
		NullCheck(L_17);
		MacCFBBlockCipher_GetMacBlock_mC96AA40940B8399E5B6C50B9A87683569FBC68F4(L_17, L_18, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___mac_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___0_output;
		int32_t L_21 = ___1_outOff;
		int32_t L_22 = __this->___macSize_5;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_19, 0, (RuntimeArray*)L_20, L_21, L_22, NULL);
		CfbBlockCipherMac_Reset_mA7DF7BE65A29A71426ACEFE3A418174DDC1165C7(__this, NULL);
		int32_t L_23 = __this->___macSize_5;
		return L_23;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.CfbBlockCipherMac::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CfbBlockCipherMac_Reset_mA7DF7BE65A29A71426ACEFE3A418174DDC1165C7 (CfbBlockCipherMac_t00336B3CBEBF99EE3F5B458636F3DE463E26B543* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___Buffer_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___Buffer_1;
		NullCheck(L_1);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		__this->___bufOff_2 = 0;
		MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* L_2 = __this->___cipher_3;
		NullCheck(L_2);
		MacCFBBlockCipher_Reset_mEB6FEF730CB670FB039A4372F26BA3F97FF3B5D3(L_2, NULL);
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
// System.Void Org.BouncyCastle.Crypto.Macs.CMac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMac__ctor_mDD6FBE8A55213BDF31F4A4591CE8827D2462FC5D (CMac_tEE0527411A50849DB625E0C83E46E0C4A809DFB1* __this, RuntimeObject* ___0_cipher, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_cipher;
		RuntimeObject* L_1 = ___0_cipher;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_1);
		CMac__ctor_mA813D306C1D6B020ED09E8969849B451387C8982(__this, L_0, ((int32_t)il2cpp_codegen_multiply(L_2, 8)), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.CMac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMac__ctor_mA813D306C1D6B020ED09E8969849B451387C8982 (CMac_tEE0527411A50849DB625E0C83E46E0C4A809DFB1* __this, RuntimeObject* ___0_cipher, int32_t ___1_macSizeInBits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___1_macSizeInBits;
		if (!((int32_t)(L_0%8)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFA1C93C4701E9DEBBB21F7804FB0D557305BF116)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CMac__ctor_mA813D306C1D6B020ED09E8969849B451387C8982_RuntimeMethod_var)));
	}

IL_0016:
	{
		int32_t L_2 = ___1_macSizeInBits;
		RuntimeObject* L_3 = ___0_cipher;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_3);
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)il2cpp_codegen_multiply(L_4, 8)))))
		{
			goto IL_0041;
		}
	}
	{
		RuntimeObject* L_5 = ___0_cipher;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var)), L_5);
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_6, 8));
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1A58DB7BFCB1182D82C8575955DE92285B1D9B49)), L_7, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CMac__ctor_mA813D306C1D6B020ED09E8969849B451387C8982_RuntimeMethod_var)));
	}

IL_0041:
	{
		RuntimeObject* L_10 = ___0_cipher;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_10);
		if ((((int32_t)L_11) == ((int32_t)8)))
		{
			goto IL_005f;
		}
	}
	{
		RuntimeObject* L_12 = ___0_cipher;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_12);
		if ((((int32_t)L_13) == ((int32_t)((int32_t)16))))
		{
			goto IL_005f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDD3CC45459A96F58457572A63B4B9F9EFBD4DC7C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CMac__ctor_mA813D306C1D6B020ED09E8969849B451387C8982_RuntimeMethod_var)));
	}

IL_005f:
	{
		RuntimeObject* L_15 = ___0_cipher;
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_16 = (CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548*)il2cpp_codegen_object_new(CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		CbcBlockCipher__ctor_mC5E40D0E42BE608A3786ECA72565E2726C339D9F(L_16, L_15, NULL);
		__this->___cipher_6 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_6), (void*)L_16);
		int32_t L_17 = ___1_macSizeInBits;
		__this->___macSize_7 = ((int32_t)(L_17/8));
		RuntimeObject* L_18 = ___0_cipher;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_18);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		__this->___mac_3 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mac_3), (void*)L_20);
		RuntimeObject* L_21 = ___0_cipher;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_21);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_22);
		__this->___buf_4 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buf_4), (void*)L_23);
		RuntimeObject* L_24 = ___0_cipher;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_25);
		__this->___ZEROES_2 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ZEROES_2), (void*)L_26);
		__this->___bufOff_5 = 0;
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Macs.CMac::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CMac_get_AlgorithmName_m0FDF384490F27D01564FA6CF231C5D793656AF5B (CMac_tEE0527411A50849DB625E0C83E46E0C4A809DFB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___cipher_6;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.CMac::ShiftLeft(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CMac_ShiftLeft_m5574F57EEF2E8FF2A69E990F5CC6723C56BB14BB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_block, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_output, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_block;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		V_1 = 0;
		goto IL_001b;
	}

IL_0008:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_block;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___1_output;
		int32_t L_6 = V_0;
		uint32_t L_7 = V_2;
		uint32_t L_8 = V_1;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_7<<1))|(int32_t)L_8))));
		uint32_t L_9 = V_2;
		V_1 = ((int32_t)(((int32_t)((uint32_t)L_9>>7))&1));
	}

IL_001b:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		V_0 = L_11;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		uint32_t L_12 = V_1;
		return L_12;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Macs.CMac::DoubleLu(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CMac_DoubleLu_m9A5003B709D456F4C8E49E77C851DE7CF67A448C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_input;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_input;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		int32_t L_4;
		L_4 = CMac_ShiftLeft_m5574F57EEF2E8FF2A69E990F5CC6723C56BB14BB(L_2, L_3, NULL);
		V_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_input;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) == ((int32_t)((int32_t)16))))
		{
			goto IL_001c;
		}
	}
	{
		G_B3_0 = ((int32_t)27);
		goto IL_0021;
	}

IL_001c:
	{
		G_B3_0 = ((int32_t)135);
	}

IL_0021:
	{
		V_2 = G_B3_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_input;
		NullCheck(L_7);
		NullCheck(L_6);
		uint8_t* L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), 1)))));
		int32_t L_9 = *((uint8_t*)L_8);
		int32_t L_10 = V_2;
		int32_t L_11 = V_1;
		*((int8_t*)L_8) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_9^((int32_t)(uint8_t)((int32_t)(L_10>>((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_subtract(1, L_11))<<3))&((int32_t)31)))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		return L_12;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.CMac::Init(Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMac_Init_m020430AC871144F44ABCAC7C78CD6CE1A7D33CBA (CMac_tEE0527411A50849DB625E0C83E46E0C4A809DFB1* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_parameters;
		if (!((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_0, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)))
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_1 = __this->___cipher_6;
		RuntimeObject* L_2 = ___0_parameters;
		NullCheck(L_1);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_1, (bool)1, L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___ZEROES_2;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
		__this->___L_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___L_8), (void*)L_4);
		RuntimeObject* L_5 = __this->___cipher_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___ZEROES_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___L_8;
		NullCheck(L_5);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_5, L_6, 0, L_7, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = CMac_DoubleLu_m9A5003B709D456F4C8E49E77C851DE7CF67A448C(L_9, NULL);
		__this->___Lu_9 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Lu_9), (void*)L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___Lu_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = CMac_DoubleLu_m9A5003B709D456F4C8E49E77C851DE7CF67A448C(L_11, NULL);
		__this->___Lu2_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Lu2_10), (void*)L_12);
		goto IL_0079;
	}

IL_0066:
	{
		RuntimeObject* L_13 = ___0_parameters;
		if (!L_13)
		{
			goto IL_0079;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral48A6BEF31FBF27712A87AAD8E28D18B07F6E7724)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CMac_Init_m020430AC871144F44ABCAC7C78CD6CE1A7D33CBA_RuntimeMethod_var)));
	}

IL_0079:
	{
		CMac_Reset_mA8D754298F526C7EAFE16601D2036375C3D42BDE(__this, NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.CMac::GetMacSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CMac_GetMacSize_mB49E6AA9895416D00C01B956D7468EFBB7A0DFB5 (CMac_tEE0527411A50849DB625E0C83E46E0C4A809DFB1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___macSize_7;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.CMac::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMac_Update_mBC344F1284C01AE927325C76453C9DF424499033 (CMac_tEE0527411A50849DB625E0C83E46E0C4A809DFB1* __this, uint8_t ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___bufOff_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___buf_4;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject* L_2 = __this->___cipher_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___buf_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___mac_3;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_2, L_3, 0, L_4, 0);
		__this->___bufOff_5 = 0;
	}

IL_0031:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___buf_4;
		int32_t L_7 = __this->___bufOff_5;
		V_0 = L_7;
		int32_t L_8 = V_0;
		__this->___bufOff_5 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = V_0;
		uint8_t L_10 = ___0_input;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)L_10);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.CMac::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMac_BlockUpdate_m52794C259365CE8D832AC83D3CC56045FF3F3536 (CMac_tEE0527411A50849DB625E0C83E46E0C4A809DFB1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inBytes, int32_t ___1_inOff, int32_t ___2_len, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___2_len;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8E97A2EC91B9BC5BE9457E4364E5C15F95B7FDC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CMac_BlockUpdate_m52794C259365CE8D832AC83D3CC56045FF3F3536_RuntimeMethod_var)));
	}

IL_000f:
	{
		RuntimeObject* L_2 = __this->___cipher_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = __this->___bufOff_5;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_4, L_5));
		int32_t L_6 = ___2_len;
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_008c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_inBytes;
		int32_t L_9 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___buf_4;
		int32_t L_11 = __this->___bufOff_5;
		int32_t L_12 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, L_11, L_12, NULL);
		RuntimeObject* L_13 = __this->___cipher_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___buf_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___mac_3;
		NullCheck(L_13);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_13, L_14, 0, L_15, 0);
		__this->___bufOff_5 = 0;
		int32_t L_17 = ___2_len;
		int32_t L_18 = V_1;
		___2_len = ((int32_t)il2cpp_codegen_subtract(L_17, L_18));
		int32_t L_19 = ___1_inOff;
		int32_t L_20 = V_1;
		___1_inOff = ((int32_t)il2cpp_codegen_add(L_19, L_20));
		goto IL_0088;
	}

IL_0069:
	{
		RuntimeObject* L_21 = __this->___cipher_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___0_inBytes;
		int32_t L_23 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___mac_3;
		NullCheck(L_21);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_21, L_22, L_23, L_24, 0);
		int32_t L_26 = ___2_len;
		int32_t L_27 = V_0;
		___2_len = ((int32_t)il2cpp_codegen_subtract(L_26, L_27));
		int32_t L_28 = ___1_inOff;
		int32_t L_29 = V_0;
		___1_inOff = ((int32_t)il2cpp_codegen_add(L_28, L_29));
	}

IL_0088:
	{
		int32_t L_30 = ___2_len;
		int32_t L_31 = V_0;
		if ((((int32_t)L_30) > ((int32_t)L_31)))
		{
			goto IL_0069;
		}
	}

IL_008c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___0_inBytes;
		int32_t L_33 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___buf_4;
		int32_t L_35 = __this->___bufOff_5;
		int32_t L_36 = ___2_len;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_32, L_33, (RuntimeArray*)L_34, L_35, L_36, NULL);
		int32_t L_37 = __this->___bufOff_5;
		int32_t L_38 = ___2_len;
		__this->___bufOff_5 = ((int32_t)il2cpp_codegen_add(L_37, L_38));
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.CMac::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CMac_DoFinal_m477ABB8984121014634AF491EC2832ECD31F1149 (CMac_tEE0527411A50849DB625E0C83E46E0C4A809DFB1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_outBytes, int32_t ___1_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISO7816d4Padding_tD2A6A0862ACF21BBE348E4AAE59805BBE487DC50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	{
		RuntimeObject* L_0 = __this->___cipher_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2 = __this->___bufOff_5;
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_001e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___Lu_9;
		V_1 = L_4;
		goto IL_003c;
	}

IL_001e:
	{
		ISO7816d4Padding_tD2A6A0862ACF21BBE348E4AAE59805BBE487DC50* L_5 = (ISO7816d4Padding_tD2A6A0862ACF21BBE348E4AAE59805BBE487DC50*)il2cpp_codegen_object_new(ISO7816d4Padding_tD2A6A0862ACF21BBE348E4AAE59805BBE487DC50_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ISO7816d4Padding__ctor_m8950A118C8373C721AD553999D4BC34DBDACD794(L_5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___buf_4;
		int32_t L_7 = __this->___bufOff_5;
		NullCheck(L_5);
		int32_t L_8;
		L_8 = ISO7816d4Padding_AddPadding_m9E1395EAE62260ADA05AD3FE49B3498E08319EAE(L_5, L_6, L_7, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___Lu2_10;
		V_1 = L_9;
	}

IL_003c:
	{
		V_2 = 0;
		goto IL_0058;
	}

IL_0040:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___buf_4;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		uint8_t* L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)));
		int32_t L_13 = *((uint8_t*)L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		*((int8_t*)L_12) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_13^(int32_t)L_17)));
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0058:
	{
		int32_t L_19 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___mac_3;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_21 = __this->___cipher_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___buf_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___mac_3;
		NullCheck(L_21);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_21, L_22, 0, L_23, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___mac_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___0_outBytes;
		int32_t L_27 = ___1_outOff;
		int32_t L_28 = __this->___macSize_7;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_25, 0, (RuntimeArray*)L_26, L_27, L_28, NULL);
		CMac_Reset_mA8D754298F526C7EAFE16601D2036375C3D42BDE(__this, NULL);
		int32_t L_29 = __this->___macSize_7;
		return L_29;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.CMac::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CMac_Reset_mA8D754298F526C7EAFE16601D2036375C3D42BDE (CMac_tEE0527411A50849DB625E0C83E46E0C4A809DFB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___buf_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___buf_4;
		NullCheck(L_1);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		__this->___bufOff_5 = 0;
		RuntimeObject* L_2 = __this->___cipher_6;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(5 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Reset() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_2);
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
// System.String Org.BouncyCastle.Crypto.Macs.Dstu7564Mac::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Dstu7564Mac_get_AlgorithmName_m9FAA34CD0DB74F3F985B6F9569F6E87E04D7865C (Dstu7564Mac_t8D657AE5566F3F7456E008A028228628340D7542* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1983E7A90C7F1B994609F90B8C541C307412F740);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1983E7A90C7F1B994609F90B8C541C307412F740;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.Dstu7564Mac::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Mac__ctor_mED4DF52FEC478077AD49F16308030589C07F962E (Dstu7564Mac_t8D657AE5566F3F7456E008A028228628340D7542* __this, int32_t ___0_macSizeBits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_macSizeBits;
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_1 = (Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05*)il2cpp_codegen_object_new(Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dstu7564Digest__ctor_mA6BDB63EBD7A709B0FE32C268D153A9D9DA2650A(L_1, L_0, NULL);
		__this->___engine_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___engine_0), (void*)L_1);
		int32_t L_2 = ___0_macSizeBits;
		__this->___macSize_1 = ((int32_t)(L_2/8));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.Dstu7564Mac::Init(Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Mac_Init_mD6078606AD72CA687FE4436D5387A41638B566CB (Dstu7564Mac_t8D657AE5566F3F7456E008A028228628340D7542* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_parameters;
		if (!((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_0, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)))
		{
			goto IL_0056;
		}
	}
	{
		RuntimeObject* L_1 = ___0_parameters;
		NullCheck(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_1, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_1, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
		__this->___invertedKey_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___invertedKey_4), (void*)L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = Dstu7564Mac_PadKey_m8A2A630D9FFDE0145C81E11C137DC6AEC65DB02C(__this, L_5, NULL);
		__this->___paddedKey_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___paddedKey_3), (void*)L_6);
		V_1 = 0;
		goto IL_0049;
	}

IL_0033:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___invertedKey_4;
		int32_t L_8 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_12^((int32_t)255)))));
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0049:
	{
		int32_t L_14 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___invertedKey_4;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0033;
		}
	}
	{
		goto IL_0061;
	}

IL_0056:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_16 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7FFB3CD71BE9EF070986A4E7959BB3A9AD1551EC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Dstu7564Mac_Init_mD6078606AD72CA687FE4436D5387A41638B566CB_RuntimeMethod_var)));
	}

IL_0061:
	{
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_17 = __this->___engine_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___paddedKey_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___paddedKey_3;
		NullCheck(L_19);
		NullCheck(L_17);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(17 /* System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, L_17, L_18, 0, ((int32_t)(((RuntimeArray*)L_19)->max_length)));
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.Dstu7564Mac::GetMacSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dstu7564Mac_GetMacSize_mF94D318A67CD0E8E614CC0185266A346EF5480F2 (Dstu7564Mac_t8D657AE5566F3F7456E008A028228628340D7542* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___macSize_1;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.Dstu7564Mac::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Mac_BlockUpdate_m98AB7102A10FC8088D2D4F45A246A490EB828695 (Dstu7564Mac_t8D657AE5566F3F7456E008A028228628340D7542* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_len, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEAC30D8C28806B51680D5DC521FC3C410F2D5B5);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_input;
		int32_t L_1 = ___1_inOff;
		int32_t L_2 = ___2_len;
		Check_DataLength_m4BEA4E45985CDB8967A7C3C71799B9036DDCC991(L_0, L_1, L_2, _stringLiteralAEAC30D8C28806B51680D5DC521FC3C410F2D5B5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___paddedKey_3;
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_4;
		L_4 = Dstu7564Mac_get_AlgorithmName_m9FAA34CD0DB74F3F985B6F9569F6E87E04D7865C(__this, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF54C61EA654A453F853B81CE072DEC048FBB4991)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Dstu7564Mac_BlockUpdate_m98AB7102A10FC8088D2D4F45A246A490EB828695_RuntimeMethod_var)));
	}

IL_002b:
	{
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_7 = __this->___engine_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_input;
		int32_t L_9 = ___1_inOff;
		int32_t L_10 = ___2_len;
		NullCheck(L_7);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(17 /* System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, L_9, L_10);
		uint64_t L_11 = __this->___inputLength_2;
		int32_t L_12 = ___2_len;
		__this->___inputLength_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_11, ((int64_t)L_12)));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.Dstu7564Mac::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Mac_Update_m3F258BDB9B79D50E76803F32308EE3CDB9B13087 (Dstu7564Mac_t8D657AE5566F3F7456E008A028228628340D7542* __this, uint8_t ___0_input, const RuntimeMethod* method) 
{
	{
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_0 = __this->___engine_0;
		uint8_t L_1 = ___0_input;
		NullCheck(L_0);
		VirtualActionInvoker1< uint8_t >::Invoke(16 /* System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::Update(System.Byte) */, L_0, L_1);
		uint64_t L_2 = __this->___inputLength_2;
		__this->___inputLength_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_2, ((int64_t)1)));
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.Dstu7564Mac::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dstu7564Mac_DoFinal_mEE4690EEADCA9460E3C27644B400B399CF6BD990 (Dstu7564Mac_t8D657AE5566F3F7456E008A028228628340D7542* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, int32_t ___1_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_output;
		int32_t L_1 = ___1_outOff;
		int32_t L_2 = __this->___macSize_1;
		Check_OutputLength_mFBD480CE544E8B2C4EFAD3A12D1E105DC36FFA68(L_0, L_1, L_2, _stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___paddedKey_3;
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		String_t* L_4;
		L_4 = Dstu7564Mac_get_AlgorithmName_m9FAA34CD0DB74F3F985B6F9569F6E87E04D7865C(__this, NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF54C61EA654A453F853B81CE072DEC048FBB4991)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Dstu7564Mac_DoFinal_mEE4690EEADCA9460E3C27644B400B399CF6BD990_RuntimeMethod_var)));
	}

IL_0030:
	{
		Dstu7564Mac_Pad_mC8EE4BD6E6A08D17231CAEBA5BDDC6C8C2186978(__this, NULL);
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_7 = __this->___engine_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___invertedKey_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___invertedKey_4;
		NullCheck(L_9);
		NullCheck(L_7);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(17 /* System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, ((int32_t)(((RuntimeArray*)L_9)->max_length)));
		__this->___inputLength_2 = ((int64_t)0);
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_10 = __this->___engine_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_output;
		int32_t L_12 = ___1_outOff;
		NullCheck(L_10);
		int32_t L_13;
		L_13 = VirtualFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(18 /* System.Int32 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::DoFinal(System.Byte[],System.Int32) */, L_10, L_11, L_12);
		return L_13;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.Dstu7564Mac::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Mac_Reset_mEF7278AAB1B6D741350656D882D521F543510DAE (Dstu7564Mac_t8D657AE5566F3F7456E008A028228628340D7542* __this, const RuntimeMethod* method) 
{
	{
		__this->___inputLength_2 = ((int64_t)0);
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_0 = __this->___engine_0;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(19 /* System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::Reset() */, L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___paddedKey_3;
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_2 = __this->___engine_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___paddedKey_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___paddedKey_3;
		NullCheck(L_4);
		NullCheck(L_2);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(17 /* System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)));
	}

IL_0035:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.Dstu7564Mac::Pad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7564Mac_Pad_mC8EE4BD6E6A08D17231CAEBA5BDDC6C8C2186978 (Dstu7564Mac_t8D657AE5566F3F7456E008A028228628340D7542* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_0 = __this->___engine_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::GetByteLength() */, L_0);
		uint64_t L_2 = __this->___inputLength_2;
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_3 = __this->___engine_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::GetByteLength() */, L_3);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)((int64_t)((uint64_t)(int64_t)L_2%(uint64_t)(int64_t)((int64_t)L_4))))));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)13))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_0;
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_7 = __this->___engine_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::GetByteLength() */, L_7);
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, L_8));
	}

IL_0034:
	{
		int32_t L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_1 = L_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_1;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)128));
		uint64_t L_12 = __this->___inputLength_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		NullCheck(L_14);
		Pack_UInt64_To_LE_m7FAB73112D2DBB58B79823435B3C3A06488A5E90(((int64_t)il2cpp_codegen_multiply((int64_t)L_12, ((int64_t)8))), L_13, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_14)->max_length)), ((int32_t)12))), NULL);
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_15 = __this->___engine_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		NullCheck(L_17);
		NullCheck(L_15);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(17 /* System.Void Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, L_15, L_16, 0, ((int32_t)(((RuntimeArray*)L_17)->max_length)));
		return;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Macs.Dstu7564Mac::PadKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Dstu7564Mac_PadKey_m8A2A630D9FFDE0145C81E11C137DC6AEC65DB02C (Dstu7564Mac_t8D657AE5566F3F7456E008A028228628340D7542* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_input;
		NullCheck(L_0);
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_1 = __this->___engine_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::GetByteLength() */, L_1);
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_3 = __this->___engine_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::GetByteLength() */, L_3);
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_5 = __this->___engine_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::GetByteLength() */, L_5);
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_0)->max_length)), L_2)), 1))/L_4)), L_6));
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_7 = __this->___engine_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::GetByteLength() */, L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_input;
		NullCheck(L_9);
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_10 = __this->___engine_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::GetByteLength() */, L_10);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_8, ((int32_t)(((int32_t)(((RuntimeArray*)L_9)->max_length))%L_11))))) >= ((int32_t)((int32_t)13))))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_12 = V_0;
		Dstu7564Digest_tF08503E2FDB6CF9BF1ED3F8D192DBE36AD447F05* L_13 = __this->___engine_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 Org.BouncyCastle.Crypto.Digests.Dstu7564Digest::GetByteLength() */, L_13);
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, L_14));
	}

IL_0057:
	{
		int32_t L_15 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_15);
		V_1 = L_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___0_input;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___0_input;
		NullCheck(L_19);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_17, 0, (RuntimeArray*)L_18, 0, ((int32_t)(((RuntimeArray*)L_19)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_input;
		NullCheck(L_21);
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(((RuntimeArray*)L_21)->max_length))), (uint8_t)((int32_t)128));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___0_input;
		NullCheck(L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_1;
		NullCheck(L_24);
		Pack_UInt32_To_LE_m2499D0485ABBAB63E653F26941EE0AFA53508D18(((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_22)->max_length)), 8)), L_23, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_24)->max_length)), ((int32_t)12))), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_1;
		return L_25;
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
// System.Void Org.BouncyCastle.Crypto.Macs.Dstu7624Mac::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7624Mac__ctor_m221A92C19FF3DDEB5384D5A4C27AFB4428F811AF (Dstu7624Mac_tFF79D84F1342BB1964F54B1D4420F883117DC179* __this, int32_t ___0_blockSizeBits, int32_t ___1_q, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dstu7624Engine_tE8D2E80377239DCFFF117DC4EB3E15E429A3261A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_blockSizeBits;
		Dstu7624Engine_tE8D2E80377239DCFFF117DC4EB3E15E429A3261A* L_1 = (Dstu7624Engine_tE8D2E80377239DCFFF117DC4EB3E15E429A3261A*)il2cpp_codegen_object_new(Dstu7624Engine_tE8D2E80377239DCFFF117DC4EB3E15E429A3261A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dstu7624Engine__ctor_m538B9047A2E181AF15343305F9E6A425B6ABB2F0(L_1, L_0, NULL);
		__this->___engine_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___engine_1), (void*)L_1);
		int32_t L_2 = ___0_blockSizeBits;
		__this->___blockSize_2 = ((int32_t)(L_2/8));
		int32_t L_3 = ___1_q;
		__this->___macSize_0 = ((int32_t)(L_3/8));
		int32_t L_4 = __this->___blockSize_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->___c_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c_3), (void*)L_5);
		int32_t L_6 = __this->___blockSize_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___cTemp_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cTemp_4), (void*)L_7);
		int32_t L_8 = __this->___blockSize_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->___kDelta_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kDelta_5), (void*)L_9);
		int32_t L_10 = __this->___blockSize_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_10);
		__this->___buf_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buf_6), (void*)L_11);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.Dstu7624Mac::Init(Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7624Mac_Init_mB79083D2321D51A1AADAEE323FDDF57B70977BC3 (Dstu7624Mac_tFF79D84F1342BB1964F54B1D4420F883117DC179* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_parameters;
		if (!((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_0, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)))
		{
			goto IL_0035;
		}
	}
	{
		Dstu7624Engine_tE8D2E80377239DCFFF117DC4EB3E15E429A3261A* L_1 = __this->___engine_1;
		RuntimeObject* L_2 = ___0_parameters;
		NullCheck(L_1);
		VirtualActionInvoker2< bool, RuntimeObject* >::Invoke(10 /* System.Void Org.BouncyCastle.Crypto.Engines.Dstu7624Engine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, L_1, (bool)1, ((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_2, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)));
		Dstu7624Engine_tE8D2E80377239DCFFF117DC4EB3E15E429A3261A* L_3 = __this->___engine_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___kDelta_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___kDelta_5;
		NullCheck(L_3);
		int32_t L_6;
		L_6 = VirtualFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(11 /* System.Int32 Org.BouncyCastle.Crypto.Engines.Dstu7624Engine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, L_3, L_4, 0, L_5, 0);
		return;
	}

IL_0035:
	{
		RuntimeObject* L_7 = ___0_parameters;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var)));
		String_t* L_8;
		L_8 = Platform_GetTypeName_m9B04679202710BC6A96803803882849D0C5001FB(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral353A6935FCF15C38C7BF3563764BB2295A273832)), L_8, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Dstu7624Mac_Init_mB79083D2321D51A1AADAEE323FDDF57B70977BC3_RuntimeMethod_var)));
	}
}
// System.String Org.BouncyCastle.Crypto.Macs.Dstu7624Mac::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Dstu7624Mac_get_AlgorithmName_m794792F15863FE8CEA3CC37AC0A915A6F1171C60 (Dstu7624Mac_tFF79D84F1342BB1964F54B1D4420F883117DC179* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67B684FF757EC3D9F8FF6AC1E114C05BCB9D0E8E);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral67B684FF757EC3D9F8FF6AC1E114C05BCB9D0E8E;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.Dstu7624Mac::GetMacSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dstu7624Mac_GetMacSize_m5C24631D3B9593BCEC85021CE5C887C10D63B143 (Dstu7624Mac_tFF79D84F1342BB1964F54B1D4420F883117DC179* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___macSize_0;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.Dstu7624Mac::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7624Mac_Update_mA7DFF16AFDDA61353C13C3B07CF964FFFEDBBA7C (Dstu7624Mac_tFF79D84F1342BB1964F54B1D4420F883117DC179* __this, uint8_t ___0_input, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___bufOff_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___buf_6;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___buf_6;
		Dstu7624Mac_processBlock_mD34047D1C77B017DA227119CA471FFC9EB815522(__this, L_2, 0, NULL);
		__this->___bufOff_7 = 0;
	}

IL_0024:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___buf_6;
		int32_t L_4 = __this->___bufOff_7;
		V_0 = L_4;
		int32_t L_5 = V_0;
		__this->___bufOff_7 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		uint8_t L_7 = ___0_input;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)L_7);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.Dstu7624Mac::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7624Mac_BlockUpdate_mDA47FA81B2E7A2B27BF61A8B7FF7F4194850EFE1 (Dstu7624Mac_tFF79D84F1342BB1964F54B1D4420F883117DC179* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_len, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___2_len;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8E97A2EC91B9BC5BE9457E4364E5C15F95B7FDC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Dstu7624Mac_BlockUpdate_mDA47FA81B2E7A2B27BF61A8B7FF7F4194850EFE1_RuntimeMethod_var)));
	}

IL_000f:
	{
		Dstu7624Engine_tE8D2E80377239DCFFF117DC4EB3E15E429A3261A* L_2 = __this->___engine_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(13 /* System.Int32 Org.BouncyCastle.Crypto.Engines.Dstu7624Engine::GetBlockSize() */, L_2);
		V_0 = L_3;
		int32_t L_4 = V_0;
		int32_t L_5 = __this->___bufOff_7;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_4, L_5));
		int32_t L_6 = ___2_len;
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0072;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_input;
		int32_t L_9 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___buf_6;
		int32_t L_11 = __this->___bufOff_7;
		int32_t L_12 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, L_11, L_12, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___buf_6;
		Dstu7624Mac_processBlock_mD34047D1C77B017DA227119CA471FFC9EB815522(__this, L_13, 0, NULL);
		__this->___bufOff_7 = 0;
		int32_t L_14 = ___2_len;
		int32_t L_15 = V_1;
		___2_len = ((int32_t)il2cpp_codegen_subtract(L_14, L_15));
		int32_t L_16 = ___1_inOff;
		int32_t L_17 = V_1;
		___1_inOff = ((int32_t)il2cpp_codegen_add(L_16, L_17));
		goto IL_006e;
	}

IL_005c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___0_input;
		int32_t L_19 = ___1_inOff;
		Dstu7624Mac_processBlock_mD34047D1C77B017DA227119CA471FFC9EB815522(__this, L_18, L_19, NULL);
		int32_t L_20 = ___2_len;
		int32_t L_21 = V_0;
		___2_len = ((int32_t)il2cpp_codegen_subtract(L_20, L_21));
		int32_t L_22 = ___1_inOff;
		int32_t L_23 = V_0;
		___1_inOff = ((int32_t)il2cpp_codegen_add(L_22, L_23));
	}

IL_006e:
	{
		int32_t L_24 = ___2_len;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) > ((int32_t)L_25)))
		{
			goto IL_005c;
		}
	}

IL_0072:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___0_input;
		int32_t L_27 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->___buf_6;
		int32_t L_29 = __this->___bufOff_7;
		int32_t L_30 = ___2_len;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_26, L_27, (RuntimeArray*)L_28, L_29, L_30, NULL);
		int32_t L_31 = __this->___bufOff_7;
		int32_t L_32 = ___2_len;
		__this->___bufOff_7 = ((int32_t)il2cpp_codegen_add(L_31, L_32));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.Dstu7624Mac::processBlock(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7624Mac_processBlock_mD34047D1C77B017DA227119CA471FFC9EB815522 (Dstu7624Mac_tFF79D84F1342BB1964F54B1D4420F883117DC179* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___c_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_input;
		int32_t L_2 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___cTemp_4;
		Dstu7624Mac_Xor_mAC5D0DE7D7B6584C917FA78589688A7114E82CAD(__this, L_0, 0, L_1, L_2, L_3, NULL);
		Dstu7624Engine_tE8D2E80377239DCFFF117DC4EB3E15E429A3261A* L_4 = __this->___engine_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___cTemp_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___c_3;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = VirtualFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(11 /* System.Int32 Org.BouncyCastle.Crypto.Engines.Dstu7624Engine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, L_4, L_5, 0, L_6, 0);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.Dstu7624Mac::Xor(System.Byte[],System.Int32,System.Byte[],System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7624Mac_Xor_mAC5D0DE7D7B6584C917FA78589688A7114E82CAD (Dstu7624Mac_tFF79D84F1342BB1964F54B1D4420F883117DC179* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_c, int32_t ___1_cOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_input, int32_t ___3_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_xorResult, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___4_xorResult;
		int32_t L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_c;
		int32_t L_3 = V_0;
		int32_t L_4 = ___1_cOff;
		NullCheck(L_2);
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		uint8_t L_6 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___2_input;
		int32_t L_8 = V_0;
		int32_t L_9 = ___3_inOff;
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_8, L_9));
		uint8_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_6^(int32_t)L_11))));
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0019:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___blockSize_2;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.Dstu7624Mac::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dstu7624Mac_DoFinal_mD9B63959081279BB1DAC56B5A31A784F83D84E4B (Dstu7624Mac_tFF79D84F1342BB1964F54B1D4420F883117DC179* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, int32_t ___1_outOff, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___bufOff_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___buf_6;
		NullCheck(L_1);
		if (!((int32_t)(L_0%((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_2 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral633B32425CF01CC2E1E97B0E9A89A8E20F2503E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Dstu7624Mac_DoFinal_mD9B63959081279BB1DAC56B5A31A784F83D84E4B_RuntimeMethod_var)));
	}

IL_001c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___c_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___buf_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___cTemp_4;
		Dstu7624Mac_Xor_mAC5D0DE7D7B6584C917FA78589688A7114E82CAD(__this, L_3, 0, L_4, 0, L_5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___cTemp_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___kDelta_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___c_3;
		Dstu7624Mac_Xor_mAC5D0DE7D7B6584C917FA78589688A7114E82CAD(__this, L_6, 0, L_7, 0, L_8, NULL);
		Dstu7624Engine_tE8D2E80377239DCFFF117DC4EB3E15E429A3261A* L_9 = __this->___engine_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___c_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___c_3;
		NullCheck(L_9);
		int32_t L_12;
		L_12 = VirtualFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(11 /* System.Int32 Org.BouncyCastle.Crypto.Engines.Dstu7624Engine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, L_9, L_10, 0, L_11, 0);
		int32_t L_13 = __this->___macSize_0;
		int32_t L_14 = ___1_outOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_output;
		NullCheck(L_15);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_13, L_14))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0082;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_16 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEE9CDDD8B1181A0CB43151D4FF76A5DF7386E75C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Dstu7624Mac_DoFinal_mD9B63959081279BB1DAC56B5A31A784F83D84E4B_RuntimeMethod_var)));
	}

IL_0082:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___c_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___0_output;
		int32_t L_19 = ___1_outOff;
		int32_t L_20 = __this->___macSize_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_17, 0, (RuntimeArray*)L_18, L_19, L_20, NULL);
		int32_t L_21 = __this->___macSize_0;
		return L_21;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.Dstu7624Mac::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dstu7624Mac_Reset_m97F26A9912C38AF98E685FC0A8854008E65CD34A (Dstu7624Mac_tFF79D84F1342BB1964F54B1D4420F883117DC179* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___c_3;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		Arrays_Fill_mE21DFB2A97B1AE17AFE700D6A367141498048242(L_0, (uint8_t)0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___cTemp_4;
		Arrays_Fill_mE21DFB2A97B1AE17AFE700D6A367141498048242(L_1, (uint8_t)0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___kDelta_5;
		Arrays_Fill_mE21DFB2A97B1AE17AFE700D6A367141498048242(L_2, (uint8_t)0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___buf_6;
		Arrays_Fill_mE21DFB2A97B1AE17AFE700D6A367141498048242(L_3, (uint8_t)0, NULL);
		Dstu7624Engine_tE8D2E80377239DCFFF117DC4EB3E15E429A3261A* L_4 = __this->___engine_1;
		NullCheck(L_4);
		VirtualActionInvoker0::Invoke(15 /* System.Void Org.BouncyCastle.Crypto.Engines.Dstu7624Engine::Reset() */, L_4);
		Dstu7624Engine_tE8D2E80377239DCFFF117DC4EB3E15E429A3261A* L_5 = __this->___engine_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___kDelta_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___kDelta_5;
		NullCheck(L_5);
		int32_t L_8;
		L_8 = VirtualFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(11 /* System.Int32 Org.BouncyCastle.Crypto.Engines.Dstu7624Engine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, L_5, L_6, 0, L_7, 0);
		__this->___bufOff_7 = 0;
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
// System.Void Org.BouncyCastle.Crypto.Macs.GMac::.ctor(Org.BouncyCastle.Crypto.Modes.GcmBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GMac__ctor_m7B6127707566ABA9C837A7CDA10B2A3C683C2CFE (GMac_tB4674C456AE5441355614DEE56E8FD5E2F1C4335* __this, GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* ___0_cipher, const RuntimeMethod* method) 
{
	{
		GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* L_0 = ___0_cipher;
		GMac__ctor_mBCF39A7BB9FE2C6945303ED147C0E40DB68DCC78(__this, L_0, ((int32_t)128), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.GMac::.ctor(Org.BouncyCastle.Crypto.Modes.GcmBlockCipher,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GMac__ctor_mBCF39A7BB9FE2C6945303ED147C0E40DB68DCC78 (GMac_tB4674C456AE5441355614DEE56E8FD5E2F1C4335* __this, GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* ___0_cipher, int32_t ___1_macSizeBits, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* L_0 = ___0_cipher;
		__this->___cipher_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_0), (void*)L_0);
		int32_t L_1 = ___1_macSizeBits;
		__this->___macSizeBits_1 = L_1;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.GMac::Init(Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GMac_Init_m08F7B68F975AFBBFC88C9BBF2BD4795684BFD73A (GMac_tB4674C456AE5441355614DEE56E8FD5E2F1C4335* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_parameters;
		if (!((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_0, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_1 = ___0_parameters;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_2 = ((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_1, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var));
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(L_2, NULL);
		V_0 = L_3;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_2, NULL);
		V_1 = ((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_4, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var));
		GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* L_5 = __this->___cipher_0;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_6 = V_1;
		int32_t L_7 = __this->___macSizeBits_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B* L_9 = (AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B*)il2cpp_codegen_object_new(AeadParameters_tC98FA63AE3CCE9F75D2AA0CF4EDCC98601EA773B_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		AeadParameters__ctor_m839BAD2C310C7FD080DCEA9B9FF687579F4CC01A(L_9, L_6, L_7, L_8, NULL);
		NullCheck(L_5);
		VirtualActionInvoker2< bool, RuntimeObject* >::Invoke(19 /* System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, L_5, (bool)1, L_9);
		return;
	}

IL_003a:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2115E6A6B071E7C386063E044367F472747FD12B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GMac_Init_m08F7B68F975AFBBFC88C9BBF2BD4795684BFD73A_RuntimeMethod_var)));
	}
}
// System.String Org.BouncyCastle.Crypto.Macs.GMac::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GMac_get_AlgorithmName_mDC075108F7278EE0185C7F36F94467CE3EA762AE (GMac_tB4674C456AE5441355614DEE56E8FD5E2F1C4335* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral682C0F55F26D0952232FB08AB9218BC9FE80C181);
		s_Il2CppMethodInitialized = true;
	}
	{
		GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* L_0 = __this->___cipher_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = GcmBlockCipher_GetUnderlyingCipher_mEEF1C6CAB71C34751D1FE22C1F864D383F59A50F_inline(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_1);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, _stringLiteral682C0F55F26D0952232FB08AB9218BC9FE80C181, NULL);
		return L_3;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.GMac::GetMacSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GMac_GetMacSize_m9307BA9445B2751A9FD4A6990795527E54F9D7E2 (GMac_tB4674C456AE5441355614DEE56E8FD5E2F1C4335* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___macSizeBits_1;
		return ((int32_t)(L_0/8));
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.GMac::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GMac_Update_m9FC6022CFFDD2904AF7B1E69B55A60BA9D9C5350 (GMac_tB4674C456AE5441355614DEE56E8FD5E2F1C4335* __this, uint8_t ___0_input, const RuntimeMethod* method) 
{
	{
		GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* L_0 = __this->___cipher_0;
		uint8_t L_1 = ___0_input;
		NullCheck(L_0);
		VirtualActionInvoker1< uint8_t >::Invoke(23 /* System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::ProcessAadByte(System.Byte) */, L_0, L_1);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.GMac::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GMac_BlockUpdate_m22708643CAB3124EB970C68E93DF6F16AD0157A6 (GMac_tB4674C456AE5441355614DEE56E8FD5E2F1C4335* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_len, const RuntimeMethod* method) 
{
	{
		GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* L_0 = __this->___cipher_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_input;
		int32_t L_2 = ___1_inOff;
		int32_t L_3 = ___2_len;
		NullCheck(L_0);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(24 /* System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::ProcessAadBytes(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.GMac::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GMac_DoFinal_mC46DE9D1B3C54552A43265FE677A3B71318D8DD6 (GMac_tB4674C456AE5441355614DEE56E8FD5E2F1C4335* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, int32_t ___1_outOff, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* L_0 = __this->___cipher_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_output;
		int32_t L_2 = ___1_outOff;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = GcmBlockCipher_DoFinal_m5AF85CBF03932F45B132BF44BE503208D2C138E8(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		goto IL_001b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0010;
		}
		throw e;
	}

CATCH_0010:
	{// begin catch(Org.BouncyCastle.Crypto.InvalidCipherTextException)
		NullCheck(((InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)));
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ((InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GMac_DoFinal_mC46DE9D1B3C54552A43265FE677A3B71318D8DD6_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_001b:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.GMac::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GMac_Reset_mE701A2068225EF7AFC6241828FC726142E4EFCD7 (GMac_tB4674C456AE5441355614DEE56E8FD5E2F1C4335* __this, const RuntimeMethod* method) 
{
	{
		GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* L_0 = __this->___cipher_0;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(27 /* System.Void Org.BouncyCastle.Crypto.Modes.GcmBlockCipher::Reset() */, L_0);
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
// System.Void Org.BouncyCastle.Crypto.Macs.Gost28147Mac::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost28147Mac__ctor_mDAF9551AC075BD7DE320188CD66F8327E2B4072A (Gost28147Mac_t7B6DC8F9E8BC75140EDC063151B2D407E266712E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____2338F1330733829B7EA276F350452E34DC02E35AEA142145F1294F417A412FE5_32_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___firstStep_5 = (bool)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____2338F1330733829B7EA276F350452E34DC02E35AEA142145F1294F417A412FE5_32_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		__this->___S_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___S_8), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___mac_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mac_4), (void*)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___buf_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buf_3), (void*)L_4);
		__this->___bufOff_2 = 0;
		return;
	}
}
// System.Int32[] Org.BouncyCastle.Crypto.Macs.Gost28147Mac::GenerateWorkingKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Gost28147Mac_GenerateWorkingKey_m4062FC694B44A00F7EBA00EF49E2E0E80EA32B8E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_userKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_userKey;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)((int32_t)32))))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral52538118793B81FB245EEED74CE92FD312BED2C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Gost28147Mac_GenerateWorkingKey_m4062FC694B44A00F7EBA00EF49E2E0E80EA32B8E_RuntimeMethod_var)));
	}

IL_0012:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_2;
		V_1 = 0;
		goto IL_002d;
	}

IL_001d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_0;
		int32_t L_4 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_userKey;
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = Gost28147Mac_bytesToint_m16CFC669A06E992BEF56AEF7616F5D5F27DA25E4(L_5, ((int32_t)il2cpp_codegen_multiply(L_6, 4)), NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002d:
	{
		int32_t L_9 = V_1;
		if ((!(((uint32_t)L_9) == ((uint32_t)8))))
		{
			goto IL_001d;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_0;
		return L_10;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.Gost28147Mac::Init(Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost28147Mac_Init_mCBCC9166490C1842C2757AFAC23485F1E00E5ADE (Gost28147Mac_t7B6DC8F9E8BC75140EDC063151B2D407E266712E* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1* V_0 = NULL;
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* V_1 = NULL;
	{
		Gost28147Mac_Reset_mBB75CEBDFFA46EECD16D31513D24737C4D7030C1(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->___buf_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buf_3), (void*)L_0);
		__this->___macIV_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___macIV_7), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
		RuntimeObject* L_1 = ___0_parameters;
		if (!((ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1*)IsInstClass((RuntimeObject*)L_1, ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1_il2cpp_TypeInfo_var)))
		{
			goto IL_0061;
		}
	}
	{
		RuntimeObject* L_2 = ___0_parameters;
		V_0 = ((ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1*)CastclassClass((RuntimeObject*)L_2, ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1_il2cpp_TypeInfo_var));
		ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1* L_3 = V_0;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = ParametersWithSBox_GetSBox_mE7792E5467EA987BDB4F99A15782F4E6CDB40859_inline(L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___S_8;
		NullCheck((RuntimeArray*)L_4);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_4, (RuntimeArray*)L_5, 0, NULL);
		ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ParametersWithSBox_get_Parameters_mD81DBF1AB7E751D8ACE28E241D0A50E5EC04D7D7_inline(L_6, NULL);
		if (!L_7)
		{
			goto IL_00e8;
		}
	}
	{
		ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1* L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = ParametersWithSBox_get_Parameters_mD81DBF1AB7E751D8ACE28E241D0A50E5EC04D7D7_inline(L_8, NULL);
		NullCheck(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_9, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_9, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = Gost28147Mac_GenerateWorkingKey_m4062FC694B44A00F7EBA00EF49E2E0E80EA32B8E(L_10, NULL);
		__this->___workingKey_6 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___workingKey_6), (void*)L_11);
		return;
	}

IL_0061:
	{
		RuntimeObject* L_12 = ___0_parameters;
		if (!((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_12, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)))
		{
			goto IL_0080;
		}
	}
	{
		RuntimeObject* L_13 = ___0_parameters;
		NullCheck(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_13, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_13, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15;
		L_15 = Gost28147Mac_GenerateWorkingKey_m4062FC694B44A00F7EBA00EF49E2E0E80EA32B8E(L_14, NULL);
		__this->___workingKey_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___workingKey_6), (void*)L_15);
		return;
	}

IL_0080:
	{
		RuntimeObject* L_16 = ___0_parameters;
		if (!((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_16, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_00d2;
		}
	}
	{
		RuntimeObject* L_17 = ___0_parameters;
		V_1 = ((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_17, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var));
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_18 = V_1;
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_18, NULL);
		NullCheck(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_19, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_19, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21;
		L_21 = Gost28147Mac_GenerateWorkingKey_m4062FC694B44A00F7EBA00EF49E2E0E80EA32B8E(L_20, NULL);
		__this->___workingKey_6 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___workingKey_6), (void*)L_21);
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_22 = V_1;
		NullCheck(L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(L_22, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___mac_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___mac_4;
		NullCheck(L_25);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_23, 0, (RuntimeArray*)L_24, 0, ((int32_t)(((RuntimeArray*)L_25)->max_length)), NULL);
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_26 = V_1;
		NullCheck(L_26);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
		L_27 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(L_26, NULL);
		__this->___macIV_7 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___macIV_7), (void*)L_27);
		return;
	}

IL_00d2:
	{
		RuntimeObject* L_28 = ___0_parameters;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var)));
		String_t* L_29;
		L_29 = Platform_GetTypeName_m9B04679202710BC6A96803803882849D0C5001FB(L_28, NULL);
		String_t* L_30;
		L_30 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA69448F84737D723637778606E199D0B9E062A1)), L_29, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_31 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_31);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_31, L_30, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Gost28147Mac_Init_mCBCC9166490C1842C2757AFAC23485F1E00E5ADE_RuntimeMethod_var)));
	}

IL_00e8:
	{
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Macs.Gost28147Mac::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Gost28147Mac_get_AlgorithmName_mDBEB64A7510E8770300FA49B90242C781931C69D (Gost28147Mac_t7B6DC8F9E8BC75140EDC063151B2D407E266712E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0AF24C062D41B2862B33243471041D1C8178B46);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralC0AF24C062D41B2862B33243471041D1C8178B46;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.Gost28147Mac::GetMacSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Gost28147Mac_GetMacSize_m00173DEFA53063DB3D232EE4F19A2C973193B7F1 (Gost28147Mac_t7B6DC8F9E8BC75140EDC063151B2D407E266712E* __this, const RuntimeMethod* method) 
{
	{
		return 4;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.Gost28147Mac::gost28147_mainStep(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Gost28147Mac_gost28147_mainStep_m4F2DD058597AE86E786F402DBB646155BCFF495D (Gost28147Mac_t7B6DC8F9E8BC75140EDC063151B2D407E266712E* __this, int32_t ___0_n1, int32_t ___1_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___1_key;
		int32_t L_1 = ___0_n1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___S_8;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)(L_3&((int32_t)15)));
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___S_8;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(((int32_t)16), ((int32_t)(((int32_t)(L_7>>4))&((int32_t)15)))));
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___S_8;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(((int32_t)32), ((int32_t)(((int32_t)(L_11>>8))&((int32_t)15)))));
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___S_8;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(((int32_t)48), ((int32_t)(((int32_t)(L_15>>((int32_t)12)))&((int32_t)15)))));
		uint8_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___S_8;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(((int32_t)64), ((int32_t)(((int32_t)(L_19>>((int32_t)16)))&((int32_t)15)))));
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___S_8;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(((int32_t)80), ((int32_t)(((int32_t)(L_23>>((int32_t)20)))&((int32_t)15)))));
		uint8_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___S_8;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_add(((int32_t)96), ((int32_t)(((int32_t)(L_27>>((int32_t)24)))&((int32_t)15)))));
		uint8_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->___S_8;
		int32_t L_31 = V_0;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add(((int32_t)112), ((int32_t)(((int32_t)(L_31>>((int32_t)28)))&((int32_t)15)))));
		uint8_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_5, ((int32_t)((int32_t)L_9<<4)))), ((int32_t)((int32_t)L_13<<8)))), ((int32_t)((int32_t)L_17<<((int32_t)12))))), ((int32_t)((int32_t)L_21<<((int32_t)16))))), ((int32_t)((int32_t)L_25<<((int32_t)20))))), ((int32_t)((int32_t)L_29<<((int32_t)24))))), ((int32_t)((int32_t)L_33<<((int32_t)28)))));
		V_1 = ((int32_t)(L_34<<((int32_t)11)));
		V_2 = ((int32_t)((uint32_t)L_34>>((int32_t)21)));
		int32_t L_35 = V_1;
		int32_t L_36 = V_2;
		return ((int32_t)(L_35|L_36));
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.Gost28147Mac::gost28147MacFunc(System.Int32[],System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost28147Mac_gost28147MacFunc_m5A343775444F93932DC82A0EA7C2D9F29BA0C258 (Gost28147Mac_t7B6DC8F9E8BC75140EDC063151B2D407E266712E* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_workingKey, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_input, int32_t ___2_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_output, int32_t ___4_outOff, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_input;
		int32_t L_1 = ___2_inOff;
		int32_t L_2;
		L_2 = Gost28147Mac_bytesToint_m16CFC669A06E992BEF56AEF7616F5D5F27DA25E4(L_0, L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_input;
		int32_t L_4 = ___2_inOff;
		int32_t L_5;
		L_5 = Gost28147Mac_bytesToint_m16CFC669A06E992BEF56AEF7616F5D5F27DA25E4(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0035;
	}

IL_0016:
	{
		V_3 = 0;
		goto IL_002d;
	}

IL_001a:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___0_workingKey;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13;
		L_13 = Gost28147Mac_gost28147_mainStep_m4F2DD058597AE86E786F402DBB646155BCFF495D(__this, L_8, L_12, NULL);
		V_0 = ((int32_t)(L_7^L_13));
		V_1 = L_6;
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_002d:
	{
		int32_t L_15 = V_3;
		if ((((int32_t)L_15) < ((int32_t)8)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0035:
	{
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) < ((int32_t)2)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_18 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___3_output;
		int32_t L_20 = ___4_outOff;
		Gost28147Mac_intTobytes_mFB1C4EAF2B1BC4D52D9F281F2A9F76CD2CA8E172(L_18, L_19, L_20, NULL);
		int32_t L_21 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___3_output;
		int32_t L_23 = ___4_outOff;
		Gost28147Mac_intTobytes_mFB1C4EAF2B1BC4D52D9F281F2A9F76CD2CA8E172(L_21, L_22, ((int32_t)il2cpp_codegen_add(L_23, 4)), NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.Gost28147Mac::bytesToint(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Gost28147Mac_bytesToint_m16CFC669A06E992BEF56AEF7616F5D5F27DA25E4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_input;
		int32_t L_1 = ___1_inOff;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_add(L_1, 3));
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_input;
		int32_t L_5 = ___1_inOff;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 2));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_input;
		int32_t L_9 = ___1_inOff;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_input;
		int32_t L_13 = ___1_inOff;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((int64_t)(((int64_t)((int32_t)((int32_t)L_3<<((int32_t)24))))&((int64_t)(uint64_t)((uint32_t)((int32_t)-16777216)))))), ((int32_t)(((int32_t)((int32_t)L_7<<((int32_t)16)))&((int32_t)16711680))))), ((int32_t)(((int32_t)((int32_t)L_11<<8))&((int32_t)65280))))), ((int32_t)((int32_t)L_15&((int32_t)255)))));
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.Gost28147Mac::intTobytes(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost28147Mac_intTobytes_mFB1C4EAF2B1BC4D52D9F281F2A9F76CD2CA8E172 (int32_t ___0_num, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_output, int32_t ___2_outOff, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_output;
		int32_t L_1 = ___2_outOff;
		int32_t L_2 = ___0_num;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, 3))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_2>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_output;
		int32_t L_4 = ___2_outOff;
		int32_t L_5 = ___0_num;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_5>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_output;
		int32_t L_7 = ___2_outOff;
		int32_t L_8 = ___0_num;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_8>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___1_output;
		int32_t L_10 = ___2_outOff;
		int32_t L_11 = ___0_num;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (uint8_t)((int32_t)(uint8_t)L_11));
		return;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Macs.Gost28147Mac::CM5func(System.Byte[],System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Gost28147Mac_CM5func_mB555A031CE02B1C960668503534344B39806CAF3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buf, int32_t ___1_bufOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_mac, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buf;
		NullCheck(L_0);
		int32_t L_1 = ___1_bufOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), L_1)));
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_buf;
		int32_t L_4 = ___1_bufOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___2_mac;
		NullCheck(L_6);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 0, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		V_1 = 0;
		goto IL_002a;
	}

IL_001b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___2_mac;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_12^(int32_t)L_16))));
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_002a:
	{
		int32_t L_18 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___2_mac;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_0;
		return L_20;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.Gost28147Mac::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost28147Mac_Update_mA038CCE12B9D2B041D52F7826CDB60B61A05CB63 (Gost28147Mac_t7B6DC8F9E8BC75140EDC063151B2D407E266712E* __this, uint8_t ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___bufOff_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___buf_3;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_008f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___buf_3;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___buf_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___mac_4;
		NullCheck(L_6);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, 0, (RuntimeArray*)L_5, 0, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		bool L_7 = __this->___firstStep_5;
		if (!L_7)
		{
			goto IL_0060;
		}
	}
	{
		__this->___firstStep_5 = (bool)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___macIV_7;
		if (!L_8)
		{
			goto IL_0073;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___buf_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___macIV_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = Gost28147Mac_CM5func_mB555A031CE02B1C960668503534344B39806CAF3(L_9, 0, L_10, NULL);
		V_0 = L_11;
		goto IL_0073;
	}

IL_0060:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___buf_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___mac_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = Gost28147Mac_CM5func_mB555A031CE02B1C960668503534344B39806CAF3(L_12, 0, L_13, NULL);
		V_0 = L_14;
	}

IL_0073:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___workingKey_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___mac_4;
		Gost28147Mac_gost28147MacFunc_m5A343775444F93932DC82A0EA7C2D9F29BA0C258(__this, L_15, L_16, 0, L_17, 0, NULL);
		__this->___bufOff_2 = 0;
	}

IL_008f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___buf_3;
		int32_t L_19 = __this->___bufOff_2;
		V_1 = L_19;
		int32_t L_20 = V_1;
		__this->___bufOff_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		int32_t L_21 = V_1;
		uint8_t L_22 = ___0_input;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (uint8_t)L_22);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.Gost28147Mac::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost28147Mac_BlockUpdate_mEE869A6916D0BF21FA79E7352FF31AD9744B924E (Gost28147Mac_t7B6DC8F9E8BC75140EDC063151B2D407E266712E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_len, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		int32_t L_0 = ___2_len;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8E97A2EC91B9BC5BE9457E4364E5C15F95B7FDC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Gost28147Mac_BlockUpdate_mEE869A6916D0BF21FA79E7352FF31AD9744B924E_RuntimeMethod_var)));
	}

IL_000f:
	{
		int32_t L_2 = __this->___bufOff_2;
		V_0 = ((int32_t)il2cpp_codegen_subtract(8, L_2));
		int32_t L_3 = ___2_len;
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_00ef;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_input;
		int32_t L_6 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___buf_3;
		int32_t L_8 = __this->___bufOff_2;
		int32_t L_9 = V_0;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, L_8, L_9, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___buf_3;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)));
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___buf_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___mac_4;
		NullCheck(L_14);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, 0, (RuntimeArray*)L_13, 0, ((int32_t)(((RuntimeArray*)L_14)->max_length)), NULL);
		bool L_15 = __this->___firstStep_5;
		if (!L_15)
		{
			goto IL_0083;
		}
	}
	{
		__this->___firstStep_5 = (bool)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___macIV_7;
		if (!L_16)
		{
			goto IL_0096;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___buf_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___macIV_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
		L_19 = Gost28147Mac_CM5func_mB555A031CE02B1C960668503534344B39806CAF3(L_17, 0, L_18, NULL);
		V_1 = L_19;
		goto IL_0096;
	}

IL_0083:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___buf_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___mac_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22;
		L_22 = Gost28147Mac_CM5func_mB555A031CE02B1C960668503534344B39806CAF3(L_20, 0, L_21, NULL);
		V_1 = L_22;
	}

IL_0096:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = __this->___workingKey_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___mac_4;
		Gost28147Mac_gost28147MacFunc_m5A343775444F93932DC82A0EA7C2D9F29BA0C258(__this, L_23, L_24, 0, L_25, 0, NULL);
		__this->___bufOff_2 = 0;
		int32_t L_26 = ___2_len;
		int32_t L_27 = V_0;
		___2_len = ((int32_t)il2cpp_codegen_subtract(L_26, L_27));
		int32_t L_28 = ___1_inOff;
		int32_t L_29 = V_0;
		___1_inOff = ((int32_t)il2cpp_codegen_add(L_28, L_29));
		goto IL_00eb;
	}

IL_00be:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___0_input;
		int32_t L_31 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = __this->___mac_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = Gost28147Mac_CM5func_mB555A031CE02B1C960668503534344B39806CAF3(L_30, L_31, L_32, NULL);
		V_1 = L_33;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = __this->___workingKey_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___mac_4;
		Gost28147Mac_gost28147MacFunc_m5A343775444F93932DC82A0EA7C2D9F29BA0C258(__this, L_34, L_35, 0, L_36, 0, NULL);
		int32_t L_37 = ___2_len;
		___2_len = ((int32_t)il2cpp_codegen_subtract(L_37, 8));
		int32_t L_38 = ___1_inOff;
		___1_inOff = ((int32_t)il2cpp_codegen_add(L_38, 8));
	}

IL_00eb:
	{
		int32_t L_39 = ___2_len;
		if ((((int32_t)L_39) > ((int32_t)8)))
		{
			goto IL_00be;
		}
	}

IL_00ef:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_input;
		int32_t L_41 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = __this->___buf_3;
		int32_t L_43 = __this->___bufOff_2;
		int32_t L_44 = ___2_len;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_40, L_41, (RuntimeArray*)L_42, L_43, L_44, NULL);
		int32_t L_45 = __this->___bufOff_2;
		int32_t L_46 = ___2_len;
		__this->___bufOff_2 = ((int32_t)il2cpp_codegen_add(L_45, L_46));
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.Gost28147Mac::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Gost28147Mac_DoFinal_m12508DC8972E55E0C14D4D1E39A111AC2CAF28DE (Gost28147Mac_t7B6DC8F9E8BC75140EDC063151B2D407E266712E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, int32_t ___1_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		goto IL_001b;
	}

IL_0002:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___buf_3;
		int32_t L_1 = __this->___bufOff_2;
		V_1 = L_1;
		int32_t L_2 = V_1;
		__this->___bufOff_2 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (uint8_t)0);
	}

IL_001b:
	{
		int32_t L_4 = __this->___bufOff_2;
		if ((((int32_t)L_4) < ((int32_t)8)))
		{
			goto IL_0002;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___buf_3;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)));
		V_0 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___buf_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___mac_4;
		NullCheck(L_9);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, 0, (RuntimeArray*)L_8, 0, ((int32_t)(((RuntimeArray*)L_9)->max_length)), NULL);
		bool L_10 = __this->___firstStep_5;
		if (!L_10)
		{
			goto IL_0059;
		}
	}
	{
		__this->___firstStep_5 = (bool)0;
		goto IL_006c;
	}

IL_0059:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___buf_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___mac_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = Gost28147Mac_CM5func_mB555A031CE02B1C960668503534344B39806CAF3(L_11, 0, L_12, NULL);
		V_0 = L_13;
	}

IL_006c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->___workingKey_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___mac_4;
		Gost28147Mac_gost28147MacFunc_m5A343775444F93932DC82A0EA7C2D9F29BA0C258(__this, L_14, L_15, 0, L_16, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___mac_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___mac_4;
		NullCheck(L_18);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___0_output;
		int32_t L_20 = ___1_outOff;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((int32_t)(((RuntimeArray*)L_18)->max_length))/2)), 4)), (RuntimeArray*)L_19, L_20, 4, NULL);
		Gost28147Mac_Reset_mBB75CEBDFFA46EECD16D31513D24737C4D7030C1(__this, NULL);
		return 4;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.Gost28147Mac::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gost28147Mac_Reset_mBB75CEBDFFA46EECD16D31513D24737C4D7030C1 (Gost28147Mac_t7B6DC8F9E8BC75140EDC063151B2D407E266712E* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___buf_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___buf_3;
		NullCheck(L_1);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		__this->___bufOff_2 = 0;
		__this->___firstStep_5 = (bool)1;
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
// System.Void Org.BouncyCastle.Crypto.Macs.HMac::.ctor(Org.BouncyCastle.Crypto.IDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMac__ctor_m668C4136EFC2B472FC9300D118CE72D0C07F9D5B (HMac_t6F0768FC92486A4BB51A39C74FBAB8B4B8CFB607* __this, RuntimeObject* ___0_digest, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_digest;
		__this->___digest_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___digest_2), (void*)L_0);
		RuntimeObject* L_1 = ___0_digest;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::GetDigestSize() */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_1);
		__this->___digestSize_3 = L_2;
		RuntimeObject* L_3 = ___0_digest;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::GetByteLength() */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_3);
		__this->___blockLength_4 = L_4;
		int32_t L_5 = __this->___blockLength_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_5);
		__this->___inputPad_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inputPad_7), (void*)L_6);
		int32_t L_7 = __this->___blockLength_4;
		int32_t L_8 = __this->___digestSize_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_7, L_8)));
		__this->___outputBuf_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outputBuf_8), (void*)L_9);
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Macs.HMac::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HMac_get_AlgorithmName_m9F284A066099655CA0480D54D2B7DC1BEC4CCCF5 (HMac_t6F0768FC92486A4BB51A39C74FBAB8B4B8CFB607* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5127190258785C5AEA3518F6AB4CD59849A380C9);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___digest_2;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IDigest::get_AlgorithmName() */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral5127190258785C5AEA3518F6AB4CD59849A380C9, NULL);
		return L_2;
	}
}
// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Macs.HMac::GetUnderlyingDigest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HMac_GetUnderlyingDigest_m3DEBEED1B146155A972E2FD0651449F8B2CEEDF4 (HMac_t6F0768FC92486A4BB51A39C74FBAB8B4B8CFB607* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___digest_2;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.HMac::Init(Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMac_Init_mE59147D8A6508848BF78E58AB8714D02A062255A (HMac_t6F0768FC92486A4BB51A39C74FBAB8B4B8CFB607* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMemoable_t6C000683C46B891FF54A73DA7A2D54E1E2169615_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___digest_2;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(6 /* System.Void Org.BouncyCastle.Crypto.IDigest::Reset() */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_1 = ___0_parameters;
		NullCheck(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_1, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_1, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		NullCheck(L_3);
		V_1 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		int32_t L_4 = V_1;
		int32_t L_5 = __this->___blockLength_4;
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject* L_6 = __this->___digest_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_6);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_6, L_7, 0, L_8);
		RuntimeObject* L_9 = __this->___digest_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___inputPad_7;
		NullCheck(L_9);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::DoFinal(System.Byte[],System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_9, L_10, 0);
		int32_t L_12 = __this->___digestSize_3;
		V_1 = L_12;
		goto IL_005d;
	}

IL_004e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___inputPad_7;
		int32_t L_15 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_13, 0, (RuntimeArray*)L_14, 0, L_15, NULL);
	}

IL_005d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___inputPad_7;
		int32_t L_17 = V_1;
		int32_t L_18 = __this->___blockLength_4;
		int32_t L_19 = V_1;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_16, L_17, ((int32_t)il2cpp_codegen_subtract(L_18, L_19)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___inputPad_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___outputBuf_8;
		int32_t L_22 = __this->___blockLength_4;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_20, 0, (RuntimeArray*)L_21, 0, L_22, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___inputPad_7;
		int32_t L_24 = __this->___blockLength_4;
		HMac_XorPad_mCF5146F2A5CE810F5C9B756CA76708027CB6EF80(L_23, L_24, (uint8_t)((int32_t)54), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___outputBuf_8;
		int32_t L_26 = __this->___blockLength_4;
		HMac_XorPad_mCF5146F2A5CE810F5C9B756CA76708027CB6EF80(L_25, L_26, (uint8_t)((int32_t)92), NULL);
		RuntimeObject* L_27 = __this->___digest_2;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_27, IMemoable_t6C000683C46B891FF54A73DA7A2D54E1E2169615_il2cpp_TypeInfo_var)))
		{
			goto IL_00f0;
		}
	}
	{
		RuntimeObject* L_28 = __this->___digest_2;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_28, IMemoable_t6C000683C46B891FF54A73DA7A2D54E1E2169615_il2cpp_TypeInfo_var)));
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Utilities.IMemoable::Copy() */, IMemoable_t6C000683C46B891FF54A73DA7A2D54E1E2169615_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_28, IMemoable_t6C000683C46B891FF54A73DA7A2D54E1E2169615_il2cpp_TypeInfo_var)));
		__this->___opadState_6 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___opadState_6), (void*)L_29);
		RuntimeObject* L_30 = __this->___opadState_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = __this->___outputBuf_8;
		int32_t L_32 = __this->___blockLength_4;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_30, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_30, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var)), L_31, 0, L_32);
	}

IL_00f0:
	{
		RuntimeObject* L_33 = __this->___digest_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___inputPad_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = __this->___inputPad_7;
		NullCheck(L_35);
		NullCheck(L_33);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_33, L_34, 0, ((int32_t)(((RuntimeArray*)L_35)->max_length)));
		RuntimeObject* L_36 = __this->___digest_2;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_36, IMemoable_t6C000683C46B891FF54A73DA7A2D54E1E2169615_il2cpp_TypeInfo_var)))
		{
			goto IL_012d;
		}
	}
	{
		RuntimeObject* L_37 = __this->___digest_2;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_37, IMemoable_t6C000683C46B891FF54A73DA7A2D54E1E2169615_il2cpp_TypeInfo_var)));
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* Org.BouncyCastle.Utilities.IMemoable Org.BouncyCastle.Utilities.IMemoable::Copy() */, IMemoable_t6C000683C46B891FF54A73DA7A2D54E1E2169615_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_37, IMemoable_t6C000683C46B891FF54A73DA7A2D54E1E2169615_il2cpp_TypeInfo_var)));
		__this->___ipadState_5 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ipadState_5), (void*)L_38);
	}

IL_012d:
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.HMac::GetMacSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HMac_GetMacSize_m6FB85B0327DA35F4AC0CFC0CE61BB6B386747039 (HMac_t6F0768FC92486A4BB51A39C74FBAB8B4B8CFB607* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___digestSize_3;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.HMac::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMac_Update_mB106C3F6A6FEC1C686A3AFB9020EB8487828EC90 (HMac_t6F0768FC92486A4BB51A39C74FBAB8B4B8CFB607* __this, uint8_t ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___digest_2;
		uint8_t L_1 = ___0_input;
		NullCheck(L_0);
		InterfaceActionInvoker1< uint8_t >::Invoke(3 /* System.Void Org.BouncyCastle.Crypto.IDigest::Update(System.Byte) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.HMac::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMac_BlockUpdate_m3FDD336BC72003A025DB7039842FF8B898C5735A (HMac_t6F0768FC92486A4BB51A39C74FBAB8B4B8CFB607* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_len, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___digest_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_input;
		int32_t L_2 = ___1_inOff;
		int32_t L_3 = ___2_len;
		NullCheck(L_0);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.HMac::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HMac_DoFinal_m4F721B7388C67E171E5B4DB8B200CDB04AFCA1A6 (HMac_t6F0768FC92486A4BB51A39C74FBAB8B4B8CFB607* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, int32_t ___1_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMemoable_t6C000683C46B891FF54A73DA7A2D54E1E2169615_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	{
		RuntimeObject* L_0 = __this->___digest_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___outputBuf_8;
		int32_t L_2 = __this->___blockLength_4;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::DoFinal(System.Byte[],System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		RuntimeObject* L_4 = __this->___opadState_6;
		if (!L_4)
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_5 = __this->___digest_2;
		RuntimeObject* L_6 = __this->___opadState_6;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_5, IMemoable_t6C000683C46B891FF54A73DA7A2D54E1E2169615_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Utilities.IMemoable::Reset(Org.BouncyCastle.Utilities.IMemoable) */, IMemoable_t6C000683C46B891FF54A73DA7A2D54E1E2169615_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IMemoable_t6C000683C46B891FF54A73DA7A2D54E1E2169615_il2cpp_TypeInfo_var)), L_6);
		RuntimeObject* L_7 = __this->___digest_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___outputBuf_8;
		int32_t L_9 = __this->___blockLength_4;
		RuntimeObject* L_10 = __this->___digest_2;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::GetDigestSize() */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_7);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_7, L_8, L_9, L_11);
		goto IL_0074;
	}

IL_005a:
	{
		RuntimeObject* L_12 = __this->___digest_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___outputBuf_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___outputBuf_8;
		NullCheck(L_14);
		NullCheck(L_12);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_12, L_13, 0, ((int32_t)(((RuntimeArray*)L_14)->max_length)));
	}

IL_0074:
	{
		RuntimeObject* L_15 = __this->___digest_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___0_output;
		int32_t L_17 = ___1_outOff;
		NullCheck(L_15);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::DoFinal(System.Byte[],System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_15, L_16, L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___outputBuf_8;
		int32_t L_20 = __this->___blockLength_4;
		int32_t L_21 = __this->___digestSize_3;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_19, L_20, L_21, NULL);
		RuntimeObject* L_22 = __this->___ipadState_5;
		G_B4_0 = L_18;
		if (!L_22)
		{
			G_B5_0 = L_18;
			goto IL_00b7;
		}
	}
	{
		RuntimeObject* L_23 = __this->___digest_2;
		RuntimeObject* L_24 = __this->___ipadState_5;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_23, IMemoable_t6C000683C46B891FF54A73DA7A2D54E1E2169615_il2cpp_TypeInfo_var)));
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Utilities.IMemoable::Reset(Org.BouncyCastle.Utilities.IMemoable) */, IMemoable_t6C000683C46B891FF54A73DA7A2D54E1E2169615_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_23, IMemoable_t6C000683C46B891FF54A73DA7A2D54E1E2169615_il2cpp_TypeInfo_var)), L_24);
		return G_B4_0;
	}

IL_00b7:
	{
		RuntimeObject* L_25 = __this->___digest_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___inputPad_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->___inputPad_7;
		NullCheck(L_27);
		NullCheck(L_25);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_25, L_26, 0, ((int32_t)(((RuntimeArray*)L_27)->max_length)));
		return G_B5_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.HMac::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMac_Reset_mFAD0A0766436FA5B4579A2BB072479567A24FD42 (HMac_t6F0768FC92486A4BB51A39C74FBAB8B4B8CFB607* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___digest_2;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(6 /* System.Void Org.BouncyCastle.Crypto.IDigest::Reset() */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_1 = __this->___digest_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___inputPad_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___inputPad_7;
		NullCheck(L_3);
		NullCheck(L_1);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_1, L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.HMac::XorPad(System.Byte[],System.Int32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HMac_XorPad_mCF5146F2A5CE810F5C9B756CA76708027CB6EF80 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_pad, int32_t ___1_len, uint8_t ___2_n, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_pad;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		uint8_t* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)));
		int32_t L_3 = *((uint8_t*)L_2);
		uint8_t L_4 = ___2_n;
		*((int8_t*)L_2) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_3^(int32_t)L_4)));
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0015:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = ___1_len;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0004;
		}
	}
	{
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
// System.Void Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO9797Alg3Mac__ctor_mCA5A40DA26277A5735989B6F06DA24825AE72CBE (ISO9797Alg3Mac_tAA4D43F48712FD037BB5532EA1EB616794B20854* __this, RuntimeObject* ___0_cipher, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_cipher;
		RuntimeObject* L_1 = ___0_cipher;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_1);
		ISO9797Alg3Mac__ctor_m36B14ED53C9C19F8FD2B303D44B2F4A8D9FD30A6(__this, L_0, ((int32_t)il2cpp_codegen_multiply(L_2, 8)), (RuntimeObject*)NULL, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO9797Alg3Mac__ctor_m1CE4D25F126B8E08786ED83AE9CF32DF81AF5731 (ISO9797Alg3Mac_tAA4D43F48712FD037BB5532EA1EB616794B20854* __this, RuntimeObject* ___0_cipher, RuntimeObject* ___1_padding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_cipher;
		RuntimeObject* L_1 = ___0_cipher;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = ___1_padding;
		ISO9797Alg3Mac__ctor_m36B14ED53C9C19F8FD2B303D44B2F4A8D9FD30A6(__this, L_0, ((int32_t)il2cpp_codegen_multiply(L_2, 8)), L_3, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO9797Alg3Mac__ctor_mCDBCEF6A2AAE92B11580F321A6A5BC97386FCAEC (ISO9797Alg3Mac_tAA4D43F48712FD037BB5532EA1EB616794B20854* __this, RuntimeObject* ___0_cipher, int32_t ___1_macSizeInBits, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_cipher;
		int32_t L_1 = ___1_macSizeInBits;
		ISO9797Alg3Mac__ctor_m36B14ED53C9C19F8FD2B303D44B2F4A8D9FD30A6(__this, L_0, L_1, (RuntimeObject*)NULL, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::.ctor(Org.BouncyCastle.Crypto.IBlockCipher,System.Int32,Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO9797Alg3Mac__ctor_m36B14ED53C9C19F8FD2B303D44B2F4A8D9FD30A6 (ISO9797Alg3Mac_tAA4D43F48712FD037BB5532EA1EB616794B20854* __this, RuntimeObject* ___0_cipher, int32_t ___1_macSizeInBits, RuntimeObject* ___2_padding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DesEngine_t9AD2B250FCBA8652F674C4BBD78AA6C2C7530156_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___1_macSizeInBits;
		if (!((int32_t)(L_0%8)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFA1C93C4701E9DEBBB21F7804FB0D557305BF116)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISO9797Alg3Mac__ctor_m36B14ED53C9C19F8FD2B303D44B2F4A8D9FD30A6_RuntimeMethod_var)));
	}

IL_0016:
	{
		RuntimeObject* L_2 = ___0_cipher;
		if (((DesEngine_t9AD2B250FCBA8652F674C4BBD78AA6C2C7530156*)IsInstClass((RuntimeObject*)L_2, DesEngine_t9AD2B250FCBA8652F674C4BBD78AA6C2C7530156_il2cpp_TypeInfo_var)))
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA36F4A18BBB08C35D630C9FC8DA48D74B347321F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISO9797Alg3Mac__ctor_m36B14ED53C9C19F8FD2B303D44B2F4A8D9FD30A6_RuntimeMethod_var)));
	}

IL_0029:
	{
		RuntimeObject* L_4 = ___0_cipher;
		CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548* L_5 = (CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548*)il2cpp_codegen_object_new(CbcBlockCipher_t30E752D961E34BF1E1B7724A874C5393F2227548_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		CbcBlockCipher__ctor_mC5E40D0E42BE608A3786ECA72565E2726C339D9F(L_5, L_4, NULL);
		__this->___cipher_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_3), (void*)L_5);
		RuntimeObject* L_6 = ___2_padding;
		__this->___padding_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___padding_4), (void*)L_6);
		int32_t L_7 = ___1_macSizeInBits;
		__this->___macSize_5 = ((int32_t)(L_7/8));
		RuntimeObject* L_8 = ___0_cipher;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_9);
		__this->___mac_0 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mac_0), (void*)L_10);
		RuntimeObject* L_11 = ___0_cipher;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_12);
		__this->___buf_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buf_1), (void*)L_13);
		__this->___bufOff_2 = 0;
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISO9797Alg3Mac_get_AlgorithmName_mBE76BC5D259E891710281D45A5FD6C053DDDF733 (ISO9797Alg3Mac_tAA4D43F48712FD037BB5532EA1EB616794B20854* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4C658D20BBC8937C0090DF472A2F217361E1529);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralE4C658D20BBC8937C0090DF472A2F217361E1529;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::Init(Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO9797Alg3Mac_Init_m12A9A113FEC8B694BDACC9FAC8831246CDEFBB6E (ISO9797Alg3Mac_tAA4D43F48712FD037BB5532EA1EB616794B20854* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* V_0 = NULL;
	KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		ISO9797Alg3Mac_Reset_mFE682B024FCF0D8F6722FF78F535EE8C7D328CE1(__this, NULL);
		RuntimeObject* L_0 = ___0_parameters;
		if (((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_0, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)))
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_1 = ___0_parameters;
		if (((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_1, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_0021;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEC57A1BC04132D54D01B5668540E7E9CA7A0A47C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISO9797Alg3Mac_Init_m12A9A113FEC8B694BDACC9FAC8831246CDEFBB6E_RuntimeMethod_var)));
	}

IL_0021:
	{
		RuntimeObject* L_3 = ___0_parameters;
		if (!((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_3, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)))
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_4 = ___0_parameters;
		V_0 = ((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_4, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var));
		goto IL_0043;
	}

IL_0032:
	{
		RuntimeObject* L_5 = ___0_parameters;
		NullCheck(((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_5, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)));
		RuntimeObject* L_6;
		L_6 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_5, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)), NULL);
		V_0 = ((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_6, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var));
	}

IL_0043:
	{
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_7 = V_0;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(L_7, NULL);
		V_2 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		NullCheck(L_9);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0071;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_11 = (KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)il2cpp_codegen_object_new(KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		KeyParameter__ctor_mF6FAECE6A51D41CEBFE899223AFC9924B6541D8E(L_11, L_10, 0, 8, NULL);
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_2;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_13 = (KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)il2cpp_codegen_object_new(KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		KeyParameter__ctor_mF6FAECE6A51D41CEBFE899223AFC9924B6541D8E(L_13, L_12, 8, 8, NULL);
		__this->___lastKey2_6 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastKey2_6), (void*)L_13);
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_14 = V_1;
		__this->___lastKey3_7 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastKey3_7), (void*)L_14);
		goto IL_00ab;
	}

IL_0071:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		NullCheck(L_15);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_00a0;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_2;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_17 = (KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)il2cpp_codegen_object_new(KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		KeyParameter__ctor_mF6FAECE6A51D41CEBFE899223AFC9924B6541D8E(L_17, L_16, 0, 8, NULL);
		V_1 = L_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_2;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_19 = (KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)il2cpp_codegen_object_new(KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		KeyParameter__ctor_mF6FAECE6A51D41CEBFE899223AFC9924B6541D8E(L_19, L_18, 8, 8, NULL);
		__this->___lastKey2_6 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastKey2_6), (void*)L_19);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_2;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_21 = (KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)il2cpp_codegen_object_new(KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		KeyParameter__ctor_mF6FAECE6A51D41CEBFE899223AFC9924B6541D8E(L_21, L_20, ((int32_t)16), 8, NULL);
		__this->___lastKey3_7 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastKey3_7), (void*)L_21);
		goto IL_00ab;
	}

IL_00a0:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_22 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5A31AC14113454FAB5A743783182DA009E141D3E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISO9797Alg3Mac_Init_m12A9A113FEC8B694BDACC9FAC8831246CDEFBB6E_RuntimeMethod_var)));
	}

IL_00ab:
	{
		RuntimeObject* L_23 = ___0_parameters;
		if (!((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_23, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_00d1;
		}
	}
	{
		RuntimeObject* L_24 = __this->___cipher_3;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_25 = V_1;
		RuntimeObject* L_26 = ___0_parameters;
		NullCheck(((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_26, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27;
		L_27 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_26, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)), NULL);
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_28 = (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)il2cpp_codegen_object_new(ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		ParametersWithIV__ctor_mC1B4901D3CEBECE5903FE14597AA0701B7B7C994(L_28, L_25, L_27, NULL);
		NullCheck(L_24);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_24, (bool)1, L_28);
		return;
	}

IL_00d1:
	{
		RuntimeObject* L_29 = __this->___cipher_3;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_30 = V_1;
		NullCheck(L_29);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_29, (bool)1, L_30);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::GetMacSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO9797Alg3Mac_GetMacSize_mF548B917F81BFD953470BEF85D67D6FFCD6D82D3 (ISO9797Alg3Mac_tAA4D43F48712FD037BB5532EA1EB616794B20854* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___macSize_5;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO9797Alg3Mac_Update_mD1FE5BFD5A450D2CEFD1935880CE769835639FFA (ISO9797Alg3Mac_tAA4D43F48712FD037BB5532EA1EB616794B20854* __this, uint8_t ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___bufOff_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___buf_1;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject* L_2 = __this->___cipher_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___buf_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___mac_0;
		NullCheck(L_2);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_2, L_3, 0, L_4, 0);
		__this->___bufOff_2 = 0;
	}

IL_0031:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___buf_1;
		int32_t L_7 = __this->___bufOff_2;
		V_0 = L_7;
		int32_t L_8 = V_0;
		__this->___bufOff_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = V_0;
		uint8_t L_10 = ___0_input;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)L_10);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO9797Alg3Mac_BlockUpdate_m16E4D4325D7855630651FB67EE47B59FB4FD3F13 (ISO9797Alg3Mac_tAA4D43F48712FD037BB5532EA1EB616794B20854* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_len, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_len;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8E97A2EC91B9BC5BE9457E4364E5C15F95B7FDC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISO9797Alg3Mac_BlockUpdate_m16E4D4325D7855630651FB67EE47B59FB4FD3F13_RuntimeMethod_var)));
	}

IL_000f:
	{
		RuntimeObject* L_2 = __this->___cipher_3;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		V_1 = 0;
		int32_t L_4 = V_0;
		int32_t L_5 = __this->___bufOff_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_4, L_5));
		int32_t L_6 = ___2_len;
		int32_t L_7 = V_2;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0092;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_input;
		int32_t L_9 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___buf_1;
		int32_t L_11 = __this->___bufOff_2;
		int32_t L_12 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, L_11, L_12, NULL);
		int32_t L_13 = V_1;
		RuntimeObject* L_14 = __this->___cipher_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___buf_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___mac_0;
		NullCheck(L_14);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_14, L_15, 0, L_16, 0);
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, L_17));
		__this->___bufOff_2 = 0;
		int32_t L_18 = ___2_len;
		int32_t L_19 = V_2;
		___2_len = ((int32_t)il2cpp_codegen_subtract(L_18, L_19));
		int32_t L_20 = ___1_inOff;
		int32_t L_21 = V_2;
		___1_inOff = ((int32_t)il2cpp_codegen_add(L_20, L_21));
		goto IL_008e;
	}

IL_006d:
	{
		int32_t L_22 = V_1;
		RuntimeObject* L_23 = __this->___cipher_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___0_input;
		int32_t L_25 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___mac_0;
		NullCheck(L_23);
		int32_t L_27;
		L_27 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_23, L_24, L_25, L_26, 0);
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, L_27));
		int32_t L_28 = ___2_len;
		int32_t L_29 = V_0;
		___2_len = ((int32_t)il2cpp_codegen_subtract(L_28, L_29));
		int32_t L_30 = ___1_inOff;
		int32_t L_31 = V_0;
		___1_inOff = ((int32_t)il2cpp_codegen_add(L_30, L_31));
	}

IL_008e:
	{
		int32_t L_32 = ___2_len;
		int32_t L_33 = V_0;
		if ((((int32_t)L_32) > ((int32_t)L_33)))
		{
			goto IL_006d;
		}
	}

IL_0092:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___0_input;
		int32_t L_35 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___buf_1;
		int32_t L_37 = __this->___bufOff_2;
		int32_t L_38 = ___2_len;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_34, L_35, (RuntimeArray*)L_36, L_37, L_38, NULL);
		int32_t L_39 = __this->___bufOff_2;
		int32_t L_40 = ___2_len;
		__this->___bufOff_2 = ((int32_t)il2cpp_codegen_add(L_39, L_40));
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO9797Alg3Mac_DoFinal_mD95BDC39389841938B5600D57E63E5B1BB69F52C (ISO9797Alg3Mac_tAA4D43F48712FD037BB5532EA1EB616794B20854* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, int32_t ___1_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DesEngine_t9AD2B250FCBA8652F674C4BBD78AA6C2C7530156_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipherPadding_t5B2EB9D7A2BB11DD4C72B65E622CED29672E7D6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___cipher_3;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		RuntimeObject* L_2 = __this->___padding_4;
		if (L_2)
		{
			goto IL_003a;
		}
	}
	{
		goto IL_002f;
	}

IL_0016:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___buf_1;
		int32_t L_4 = __this->___bufOff_2;
		V_1 = L_4;
		int32_t L_5 = V_1;
		__this->___bufOff_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)0);
	}

IL_002f:
	{
		int32_t L_7 = __this->___bufOff_2;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0016;
		}
	}
	{
		goto IL_007c;
	}

IL_003a:
	{
		int32_t L_9 = __this->___bufOff_2;
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0064;
		}
	}
	{
		RuntimeObject* L_11 = __this->___cipher_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___buf_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___mac_0;
		NullCheck(L_11);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_11, L_12, 0, L_13, 0);
		__this->___bufOff_2 = 0;
	}

IL_0064:
	{
		RuntimeObject* L_15 = __this->___padding_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___buf_1;
		int32_t L_17 = __this->___bufOff_2;
		NullCheck(L_15);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding::AddPadding(System.Byte[],System.Int32) */, IBlockCipherPadding_t5B2EB9D7A2BB11DD4C72B65E622CED29672E7D6B_il2cpp_TypeInfo_var, L_15, L_16, L_17);
	}

IL_007c:
	{
		RuntimeObject* L_19 = __this->___cipher_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___buf_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___mac_0;
		NullCheck(L_19);
		int32_t L_22;
		L_22 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_19, L_20, 0, L_21, 0);
		DesEngine_t9AD2B250FCBA8652F674C4BBD78AA6C2C7530156* L_23 = (DesEngine_t9AD2B250FCBA8652F674C4BBD78AA6C2C7530156*)il2cpp_codegen_object_new(DesEngine_t9AD2B250FCBA8652F674C4BBD78AA6C2C7530156_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		DesEngine__ctor_mDBD566A1EA8FCE1BA4F684F5B3FBE15D666CD915(L_23, NULL);
		DesEngine_t9AD2B250FCBA8652F674C4BBD78AA6C2C7530156* L_24 = L_23;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_25 = __this->___lastKey2_6;
		NullCheck(L_24);
		VirtualActionInvoker2< bool, RuntimeObject* >::Invoke(11 /* System.Void Org.BouncyCastle.Crypto.Engines.DesEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, L_24, (bool)0, L_25);
		DesEngine_t9AD2B250FCBA8652F674C4BBD78AA6C2C7530156* L_26 = L_24;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = __this->___mac_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->___mac_0;
		NullCheck(L_26);
		int32_t L_29;
		L_29 = VirtualFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(15 /* System.Int32 Org.BouncyCastle.Crypto.Engines.DesEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, L_26, L_27, 0, L_28, 0);
		DesEngine_t9AD2B250FCBA8652F674C4BBD78AA6C2C7530156* L_30 = L_26;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_31 = __this->___lastKey3_7;
		NullCheck(L_30);
		VirtualActionInvoker2< bool, RuntimeObject* >::Invoke(11 /* System.Void Org.BouncyCastle.Crypto.Engines.DesEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, L_30, (bool)1, L_31);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = __this->___mac_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = __this->___mac_0;
		NullCheck(L_30);
		int32_t L_34;
		L_34 = VirtualFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(15 /* System.Int32 Org.BouncyCastle.Crypto.Engines.DesEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, L_30, L_32, 0, L_33, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = __this->___mac_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___0_output;
		int32_t L_37 = ___1_outOff;
		int32_t L_38 = __this->___macSize_5;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_35, 0, (RuntimeArray*)L_36, L_37, L_38, NULL);
		ISO9797Alg3Mac_Reset_mFE682B024FCF0D8F6722FF78F535EE8C7D328CE1(__this, NULL);
		int32_t L_39 = __this->___macSize_5;
		return L_39;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO9797Alg3Mac_Reset_mFE682B024FCF0D8F6722FF78F535EE8C7D328CE1 (ISO9797Alg3Mac_tAA4D43F48712FD037BB5532EA1EB616794B20854* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___buf_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___buf_1;
		NullCheck(L_1);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_0, 0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		__this->___bufOff_2 = 0;
		RuntimeObject* L_2 = __this->___cipher_3;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(5 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Reset() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_2);
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
// System.Void Org.BouncyCastle.Crypto.Macs.Poly1305::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Poly1305__ctor_mEE7F9D04CF0340E4E3202F153CE16D7C98AD2A08 (Poly1305_t2AB3E59D012311B29065EEBEA053843267EB748A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___singleByte_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___singleByte_2), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___currentBlock_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentBlock_16), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___cipher_1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_1), (void*)(RuntimeObject*)NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.Poly1305::.ctor(Org.BouncyCastle.Crypto.IBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Poly1305__ctor_m02FB171508E9AC9A7FA3483B238D274624F3348D (Poly1305_t2AB3E59D012311B29065EEBEA053843267EB748A* __this, RuntimeObject* ___0_cipher, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		__this->___singleByte_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___singleByte_2), (void*)L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___currentBlock_16 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentBlock_16), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_2 = ___0_cipher;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::GetBlockSize() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_2);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)16))))
		{
			goto IL_0034;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCCB82F0F4DA064DD76DFEDE7D38B39C103AC2E57)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Poly1305__ctor_m02FB171508E9AC9A7FA3483B238D274624F3348D_RuntimeMethod_var)));
	}

IL_0034:
	{
		RuntimeObject* L_5 = ___0_cipher;
		__this->___cipher_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cipher_1), (void*)L_5);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.Poly1305::Init(Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Poly1305_Init_mCAAD45A71ABFA50E23F7B99F4D2659B5C7C986FB (Poly1305_t2AB3E59D012311B29065EEBEA053843267EB748A* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* V_1 = NULL;
	{
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		RuntimeObject* L_0 = __this->___cipher_1;
		if (!L_0)
		{
			goto IL_0036;
		}
	}
	{
		RuntimeObject* L_1 = ___0_parameters;
		if (((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_1, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD1635F743BCCF05EBCBF4308EDB05E287908D2E9)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Poly1305_Init_mCAAD45A71ABFA50E23F7B99F4D2659B5C7C986FB_RuntimeMethod_var)));
	}

IL_0022:
	{
		RuntimeObject* L_3 = ___0_parameters;
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_4 = ((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_3, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var));
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(L_4, NULL);
		V_0 = L_5;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_4, NULL);
		___0_parameters = L_6;
	}

IL_0036:
	{
		RuntimeObject* L_7 = ___0_parameters;
		if (((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_7, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)))
		{
			goto IL_0049;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8EAF3F5572F56F2CD6ABE50B3DD347232620A91)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Poly1305_Init_mCAAD45A71ABFA50E23F7B99F4D2659B5C7C986FB_RuntimeMethod_var)));
	}

IL_0049:
	{
		RuntimeObject* L_9 = ___0_parameters;
		V_1 = ((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_9, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var));
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_10 = V_1;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(L_10, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		Poly1305_SetKey_mF5F9D809C8EE221A3A3B0B2070C6E8C9137689FD(__this, L_11, L_12, NULL);
		Poly1305_Reset_mD8B7C4EB5F8E44905007654526D7ACF50D10D0FF(__this, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.Poly1305::SetKey(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Poly1305_SetKey_mF5F9D809C8EE221A3A3B0B2070C6E8C9137689FD (Poly1305_t2AB3E59D012311B29065EEBEA053843267EB748A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_nonce, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_key;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) == ((int32_t)((int32_t)32))))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD51022872FB303A7DBC4B2E2230BB177C213C99C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Poly1305_SetKey_mF5F9D809C8EE221A3A3B0B2070C6E8C9137689FD_RuntimeMethod_var)));
	}

IL_0012:
	{
		RuntimeObject* L_2 = __this->___cipher_1;
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_nonce;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_nonce;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)16))))
		{
			goto IL_002f;
		}
	}

IL_0024:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECC1A0699405F92CE60EE43047E89512ABB064E6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Poly1305_SetKey_mF5F9D809C8EE221A3A3B0B2070C6E8C9137689FD_RuntimeMethod_var)));
	}

IL_002f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_key;
		uint32_t L_7;
		L_7 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_6, 0, NULL);
		V_0 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_key;
		uint32_t L_9;
		L_9 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_8, 4, NULL);
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_key;
		uint32_t L_11;
		L_11 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_10, 8, NULL);
		V_2 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_key;
		uint32_t L_13;
		L_13 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_12, ((int32_t)12), NULL);
		V_3 = L_13;
		uint32_t L_14 = V_0;
		__this->___r0_3 = ((int32_t)((int32_t)L_14&((int32_t)67108863)));
		uint32_t L_15 = V_0;
		uint32_t L_16 = V_1;
		__this->___r1_4 = ((int32_t)(((int32_t)(((int32_t)((uint32_t)L_15>>((int32_t)26)))|((int32_t)((int32_t)L_16<<6))))&((int32_t)67108611)));
		uint32_t L_17 = V_1;
		uint32_t L_18 = V_2;
		__this->___r2_5 = ((int32_t)(((int32_t)(((int32_t)((uint32_t)L_17>>((int32_t)20)))|((int32_t)((int32_t)L_18<<((int32_t)12)))))&((int32_t)67092735)));
		uint32_t L_19 = V_2;
		uint32_t L_20 = V_3;
		__this->___r3_6 = ((int32_t)(((int32_t)(((int32_t)((uint32_t)L_19>>((int32_t)14)))|((int32_t)((int32_t)L_20<<((int32_t)18)))))&((int32_t)66076671)));
		uint32_t L_21 = V_3;
		__this->___r4_7 = ((int32_t)(((int32_t)((uint32_t)L_21>>8))&((int32_t)1048575)));
		uint32_t L_22 = __this->___r1_4;
		__this->___s1_8 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_22, 5));
		uint32_t L_23 = __this->___r2_5;
		__this->___s2_9 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_23, 5));
		uint32_t L_24 = __this->___r3_6;
		__this->___s3_10 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_24, 5));
		uint32_t L_25 = __this->___r4_7;
		__this->___s4_11 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_25, 5));
		RuntimeObject* L_26 = __this->___cipher_1;
		if (L_26)
		{
			goto IL_00f3;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___0_key;
		V_4 = L_27;
		V_5 = ((int32_t)16);
		goto IL_0126;
	}

IL_00f3:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_4 = L_28;
		V_5 = 0;
		RuntimeObject* L_29 = __this->___cipher_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___0_key;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_31 = (KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)il2cpp_codegen_object_new(KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		KeyParameter__ctor_mF6FAECE6A51D41CEBFE899223AFC9924B6541D8E(L_31, L_30, ((int32_t)16), ((int32_t)16), NULL);
		NullCheck(L_29);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_29, (bool)1, L_31);
		RuntimeObject* L_32 = __this->___cipher_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___1_nonce;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_4;
		NullCheck(L_32);
		int32_t L_35;
		L_35 = InterfaceFuncInvoker4< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* System.Int32 Org.BouncyCastle.Crypto.IBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32) */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_32, L_33, 0, L_34, 0);
	}

IL_0126:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_4;
		int32_t L_37 = V_5;
		uint32_t L_38;
		L_38 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_36, L_37, NULL);
		__this->___k0_12 = L_38;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_4;
		int32_t L_40 = V_5;
		uint32_t L_41;
		L_41 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_39, ((int32_t)il2cpp_codegen_add(L_40, 4)), NULL);
		__this->___k1_13 = L_41;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_4;
		int32_t L_43 = V_5;
		uint32_t L_44;
		L_44 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_42, ((int32_t)il2cpp_codegen_add(L_43, 8)), NULL);
		__this->___k2_14 = L_44;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_4;
		int32_t L_46 = V_5;
		uint32_t L_47;
		L_47 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_45, ((int32_t)il2cpp_codegen_add(L_46, ((int32_t)12))), NULL);
		__this->___k3_15 = L_47;
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Macs.Poly1305::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Poly1305_get_AlgorithmName_mFDF18EDAB0222F644762C4B85C70D52A83931600 (Poly1305_t2AB3E59D012311B29065EEBEA053843267EB748A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0B4E2268F20A2A288F4E8477064136017351AF5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE47CA5EE52BC88E7B37B1013341EDFB13A317690);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___cipher_1;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_1 = __this->___cipher_1;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IBlockCipher::get_AlgorithmName() */, IBlockCipher_t623B50D93E13F5D8BA5F939C4B4C13AA7B36B997_il2cpp_TypeInfo_var, L_1);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE47CA5EE52BC88E7B37B1013341EDFB13A317690, L_2, NULL);
		return L_3;
	}

IL_001e:
	{
		return _stringLiteralC0B4E2268F20A2A288F4E8477064136017351AF5;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.Poly1305::GetMacSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Poly1305_GetMacSize_mC2E462787426DB00C8B3221FF8E29699C6C6C288 (Poly1305_t2AB3E59D012311B29065EEBEA053843267EB748A* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)16);
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.Poly1305::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Poly1305_Update_m52461246E59C3C115A926646717B8A59675EBB12 (Poly1305_t2AB3E59D012311B29065EEBEA053843267EB748A* __this, uint8_t ___0_input, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___singleByte_2;
		uint8_t L_1 = ___0_input;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___singleByte_2;
		Poly1305_BlockUpdate_m83BDE8611CBDEE62F3069198FAD4F685638D68D2(__this, L_2, 0, 1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.Poly1305::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Poly1305_BlockUpdate_m83BDE8611CBDEE62F3069198FAD4F685638D68D2 (Poly1305_t2AB3E59D012311B29065EEBEA053843267EB748A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_len, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_0055;
	}

IL_0004:
	{
		int32_t L_0 = __this->___currentBlockOffset_17;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_001b;
		}
	}
	{
		Poly1305_ProcessBlock_mD3C5708213A43E9B0CE362CC521A6AEE7D1784CE(__this, NULL);
		__this->___currentBlockOffset_17 = 0;
	}

IL_001b:
	{
		int32_t L_1 = ___2_len;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___currentBlockOffset_17;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(L_1, L_2)), ((int32_t)il2cpp_codegen_subtract(((int32_t)16), L_3)), NULL);
		V_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_input;
		int32_t L_6 = V_0;
		int32_t L_7 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___currentBlock_16;
		int32_t L_9 = __this->___currentBlockOffset_17;
		int32_t L_10 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, ((int32_t)il2cpp_codegen_add(L_6, L_7)), (RuntimeArray*)L_8, L_9, L_10, NULL);
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, L_12));
		int32_t L_13 = __this->___currentBlockOffset_17;
		int32_t L_14 = V_1;
		__this->___currentBlockOffset_17 = ((int32_t)il2cpp_codegen_add(L_13, L_14));
	}

IL_0055:
	{
		int32_t L_15 = ___2_len;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) > ((int32_t)L_16)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.Poly1305::ProcessBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Poly1305_ProcessBlock_mD3C5708213A43E9B0CE362CC521A6AEE7D1784CE (Poly1305_t2AB3E59D012311B29065EEBEA053843267EB748A* __this, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	int32_t V_9 = 0;
	{
		int32_t L_0 = __this->___currentBlockOffset_17;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)16))))
		{
			goto IL_003a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___currentBlock_16;
		int32_t L_2 = __this->___currentBlockOffset_17;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)1);
		int32_t L_3 = __this->___currentBlockOffset_17;
		V_9 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		goto IL_0034;
	}

IL_0024:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___currentBlock_16;
		int32_t L_5 = V_9;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)0);
		int32_t L_6 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0034:
	{
		int32_t L_7 = V_9;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)16))))
		{
			goto IL_0024;
		}
	}

IL_003a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___currentBlock_16;
		uint32_t L_9;
		L_9 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_8, 0, NULL);
		V_0 = ((int64_t)(uint64_t)L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___currentBlock_16;
		uint32_t L_11;
		L_11 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_10, 4, NULL);
		V_1 = ((int64_t)(uint64_t)L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___currentBlock_16;
		uint32_t L_13;
		L_13 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_12, 8, NULL);
		V_2 = ((int64_t)(uint64_t)L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___currentBlock_16;
		uint32_t L_15;
		L_15 = Pack_LE_To_UInt32_m32402F49FE8DAA33A354B52C3AF820E313FA26BE(L_14, ((int32_t)12), NULL);
		V_3 = ((int64_t)(uint64_t)L_15);
		uint32_t L_16 = __this->___h0_18;
		uint64_t L_17 = V_0;
		__this->___h0_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, ((int32_t)(uint32_t)((int64_t)((int64_t)L_17&((int64_t)((int32_t)67108863)))))));
		uint32_t L_18 = __this->___h1_19;
		uint64_t L_19 = V_1;
		uint64_t L_20 = V_0;
		__this->___h1_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, ((int32_t)(uint32_t)((int64_t)(((int64_t)((uint64_t)((int64_t)(((int64_t)((int64_t)L_19<<((int32_t)32)))|(int64_t)L_20))>>((int32_t)26)))&((int64_t)((int32_t)67108863)))))));
		uint32_t L_21 = __this->___h2_20;
		uint64_t L_22 = V_2;
		uint64_t L_23 = V_1;
		__this->___h2_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, ((int32_t)(uint32_t)((int64_t)(((int64_t)((uint64_t)((int64_t)(((int64_t)((int64_t)L_22<<((int32_t)32)))|(int64_t)L_23))>>((int32_t)20)))&((int64_t)((int32_t)67108863)))))));
		uint32_t L_24 = __this->___h3_21;
		uint64_t L_25 = V_3;
		uint64_t L_26 = V_2;
		__this->___h3_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, ((int32_t)(uint32_t)((int64_t)(((int64_t)((uint64_t)((int64_t)(((int64_t)((int64_t)L_25<<((int32_t)32)))|(int64_t)L_26))>>((int32_t)14)))&((int64_t)((int32_t)67108863)))))));
		uint32_t L_27 = __this->___h4_22;
		uint64_t L_28 = V_3;
		__this->___h4_22 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, ((int32_t)(uint32_t)((int64_t)((uint64_t)L_28>>8)))));
		int32_t L_29 = __this->___currentBlockOffset_17;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0110;
		}
	}
	{
		uint32_t L_30 = __this->___h4_22;
		__this->___h4_22 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, ((int32_t)16777216)));
	}

IL_0110:
	{
		uint32_t L_31 = __this->___h0_18;
		uint32_t L_32 = __this->___r0_3;
		uint64_t L_33;
		L_33 = Poly1305_mul32x32_64_mF5BC2B0818647B4366506173F3B4E814145F2445(L_31, L_32, NULL);
		uint32_t L_34 = __this->___h1_19;
		uint32_t L_35 = __this->___s4_11;
		uint64_t L_36;
		L_36 = Poly1305_mul32x32_64_mF5BC2B0818647B4366506173F3B4E814145F2445(L_34, L_35, NULL);
		uint32_t L_37 = __this->___h2_20;
		uint32_t L_38 = __this->___s3_10;
		uint64_t L_39;
		L_39 = Poly1305_mul32x32_64_mF5BC2B0818647B4366506173F3B4E814145F2445(L_37, L_38, NULL);
		uint32_t L_40 = __this->___h3_21;
		uint32_t L_41 = __this->___s2_9;
		uint64_t L_42;
		L_42 = Poly1305_mul32x32_64_mF5BC2B0818647B4366506173F3B4E814145F2445(L_40, L_41, NULL);
		uint32_t L_43 = __this->___h4_22;
		uint32_t L_44 = __this->___s1_8;
		uint64_t L_45;
		L_45 = Poly1305_mul32x32_64_mF5BC2B0818647B4366506173F3B4E814145F2445(L_43, L_44, NULL);
		V_4 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_33, (int64_t)L_36)), (int64_t)L_39)), (int64_t)L_42)), (int64_t)L_45));
		uint32_t L_46 = __this->___h0_18;
		uint32_t L_47 = __this->___r1_4;
		uint64_t L_48;
		L_48 = Poly1305_mul32x32_64_mF5BC2B0818647B4366506173F3B4E814145F2445(L_46, L_47, NULL);
		uint32_t L_49 = __this->___h1_19;
		uint32_t L_50 = __this->___r0_3;
		uint64_t L_51;
		L_51 = Poly1305_mul32x32_64_mF5BC2B0818647B4366506173F3B4E814145F2445(L_49, L_50, NULL);
		uint32_t L_52 = __this->___h2_20;
		uint32_t L_53 = __this->___s4_11;
		uint64_t L_54;
		L_54 = Poly1305_mul32x32_64_mF5BC2B0818647B4366506173F3B4E814145F2445(L_52, L_53, NULL);
		uint32_t L_55 = __this->___h3_21;
		uint32_t L_56 = __this->___s3_10;
		uint64_t L_57;
		L_57 = Poly1305_mul32x32_64_mF5BC2B0818647B4366506173F3B4E814145F2445(L_55, L_56, NULL);
		uint32_t L_58 = __this->___h4_22;
		uint32_t L_59 = __this->___s2_9;
		uint64_t L_60;
		L_60 = Poly1305_mul32x32_64_mF5BC2B0818647B4366506173F3B4E814145F2445(L_58, L_59, NULL);
		V_5 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_48, (int64_t)L_51)), (int64_t)L_54)), (int64_t)L_57)), (int64_t)L_60));
		uint32_t L_61 = __this->___h0_18;
		uint32_t L_62 = __this->___r2_5;
		uint64_t L_63;
		L_63 = Poly1305_mul32x32_64_mF5BC2B0818647B4366506173F3B4E814145F2445(L_61, L_62, NULL);
		uint32_t L_64 = __this->___h1_19;
		uint32_t L_65 = __this->___r1_4;
		uint64_t L_66;
		L_66 = Poly1305_mul32x32_64_mF5BC2B0818647B4366506173F3B4E814145F2445(L_64, L_65, NULL);
		uint32_t L_67 = __this->___h2_20;
		uint32_t L_68 = __this->___r0_3;
		uint64_t L_69;
		L_69 = Poly1305_mul32x32_64_mF5BC2B0818647B4366506173F3B4E814145F2445(L_67, L_68, NULL);
		uint32_t L_70 = __this->___h3_21;
		uint32_t L_71 = __this->___s4_11;
		uint64_t L_72;
		L_72 = Poly1305_mul32x32_64_mF5BC2B0818647B4366506173F3B4E814145F2445(L_70, L_71, NULL);
		uint32_t L_73 = __this->___h4_22;
		uint32_t L_74 = __this->___s3_10;
		uint64_t L_75;
		L_75 = Poly1305_mul32x32_64_mF5BC2B0818647B4366506173F3B4E814145F2445(L_73, L_74, NULL);
		V_6 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_63, (int64_t)L_66)), (int64_t)L_69)), (int64_t)L_72)), (int64_t)L_75));
		uint32_t L_76 = __this->___h0_18;
		uint32_t L_77 = __this->___r3_6;
		uint64_t L_78;
		L_78 = Poly1305_mul32x32_64_mF5BC2B0818647B4366506173F3B4E814145F2445(L_76, L_77, NULL);
		uint32_t L_79 = __this->___h1_19;
		uint32_t L_80 = __this->___r2_5;
		uint64_t L_81;
		L_81 = Poly1305_mul32x32_64_mF5BC2B0818647B4366506173F3B4E814145F2445(L_79, L_80, NULL);
		uint32_t L_82 = __this->___h2_20;
		uint32_t L_83 = __this->___r1_4;
		uint64_t L_84;
		L_84 = Poly1305_mul32x32_64_mF5BC2B0818647B4366506173F3B4E814145F2445(L_82, L_83, NULL);
		uint32_t L_85 = __this->___h3_21;
		uint32_t L_86 = __this->___r0_3;
		uint64_t L_87;
		L_87 = Poly1305_mul32x32_64_mF5BC2B0818647B4366506173F3B4E814145F2445(L_85, L_86, NULL);
		uint32_t L_88 = __this->___h4_22;
		uint32_t L_89 = __this->___s4_11;
		uint64_t L_90;
		L_90 = Poly1305_mul32x32_64_mF5BC2B0818647B4366506173F3B4E814145F2445(L_88, L_89, NULL);
		V_7 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_78, (int64_t)L_81)), (int64_t)L_84)), (int64_t)L_87)), (int64_t)L_90));
		uint32_t L_91 = __this->___h0_18;
		uint32_t L_92 = __this->___r4_7;
		uint64_t L_93;
		L_93 = Poly1305_mul32x32_64_mF5BC2B0818647B4366506173F3B4E814145F2445(L_91, L_92, NULL);
		uint32_t L_94 = __this->___h1_19;
		uint32_t L_95 = __this->___r3_6;
		uint64_t L_96;
		L_96 = Poly1305_mul32x32_64_mF5BC2B0818647B4366506173F3B4E814145F2445(L_94, L_95, NULL);
		uint32_t L_97 = __this->___h2_20;
		uint32_t L_98 = __this->___r2_5;
		uint64_t L_99;
		L_99 = Poly1305_mul32x32_64_mF5BC2B0818647B4366506173F3B4E814145F2445(L_97, L_98, NULL);
		uint32_t L_100 = __this->___h3_21;
		uint32_t L_101 = __this->___r1_4;
		uint64_t L_102;
		L_102 = Poly1305_mul32x32_64_mF5BC2B0818647B4366506173F3B4E814145F2445(L_100, L_101, NULL);
		uint32_t L_103 = __this->___h4_22;
		uint32_t L_104 = __this->___r0_3;
		uint64_t L_105;
		L_105 = Poly1305_mul32x32_64_mF5BC2B0818647B4366506173F3B4E814145F2445(L_103, L_104, NULL);
		V_8 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_93, (int64_t)L_96)), (int64_t)L_99)), (int64_t)L_102)), (int64_t)L_105));
		uint64_t L_106 = V_4;
		__this->___h0_18 = ((int32_t)(((int32_t)(uint32_t)L_106)&((int32_t)67108863)));
		uint64_t L_107 = V_5;
		uint64_t L_108 = V_4;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_107, ((int64_t)((uint64_t)L_108>>((int32_t)26)))));
		uint64_t L_109 = V_5;
		__this->___h1_19 = ((int32_t)(((int32_t)(uint32_t)L_109)&((int32_t)67108863)));
		uint64_t L_110 = V_6;
		uint64_t L_111 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_110, ((int64_t)((uint64_t)L_111>>((int32_t)26)))));
		uint64_t L_112 = V_6;
		__this->___h2_20 = ((int32_t)(((int32_t)(uint32_t)L_112)&((int32_t)67108863)));
		uint64_t L_113 = V_7;
		uint64_t L_114 = V_6;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_113, ((int64_t)((uint64_t)L_114>>((int32_t)26)))));
		uint64_t L_115 = V_7;
		__this->___h3_21 = ((int32_t)(((int32_t)(uint32_t)L_115)&((int32_t)67108863)));
		uint64_t L_116 = V_8;
		uint64_t L_117 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_116, ((int64_t)((uint64_t)L_117>>((int32_t)26)))));
		uint64_t L_118 = V_8;
		__this->___h4_22 = ((int32_t)(((int32_t)(uint32_t)L_118)&((int32_t)67108863)));
		uint32_t L_119 = __this->___h0_18;
		uint64_t L_120 = V_8;
		__this->___h0_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_119, ((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)((int64_t)((uint64_t)L_120>>((int32_t)26)))), 5))));
		uint32_t L_121 = __this->___h1_19;
		uint32_t L_122 = __this->___h0_18;
		__this->___h1_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_121, ((int32_t)((uint32_t)L_122>>((int32_t)26)))));
		uint32_t L_123 = __this->___h0_18;
		__this->___h0_18 = ((int32_t)((int32_t)L_123&((int32_t)67108863)));
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.Poly1305::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Poly1305_DoFinal_m6DFCD2BD50731DAC9047163385EC00EC07108D7C (Poly1305_t2AB3E59D012311B29065EEBEA053843267EB748A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, int32_t ___1_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAF787A17C0E33E26BD66D31E0EBF57A8F228A38);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_output;
		int32_t L_1 = ___1_outOff;
		Check_DataLength_m4BEA4E45985CDB8967A7C3C71799B9036DDCC991(L_0, L_1, ((int32_t)16), _stringLiteralFAF787A17C0E33E26BD66D31E0EBF57A8F228A38, NULL);
		int32_t L_2 = __this->___currentBlockOffset_17;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Poly1305_ProcessBlock_mD3C5708213A43E9B0CE362CC521A6AEE7D1784CE(__this, NULL);
	}

IL_001d:
	{
		uint32_t L_3 = __this->___h1_19;
		uint32_t L_4 = __this->___h0_18;
		__this->___h1_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, ((int32_t)((uint32_t)L_4>>((int32_t)26)))));
		uint32_t L_5 = __this->___h0_18;
		__this->___h0_18 = ((int32_t)((int32_t)L_5&((int32_t)67108863)));
		uint32_t L_6 = __this->___h2_20;
		uint32_t L_7 = __this->___h1_19;
		__this->___h2_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, ((int32_t)((uint32_t)L_7>>((int32_t)26)))));
		uint32_t L_8 = __this->___h1_19;
		__this->___h1_19 = ((int32_t)((int32_t)L_8&((int32_t)67108863)));
		uint32_t L_9 = __this->___h3_21;
		uint32_t L_10 = __this->___h2_20;
		__this->___h3_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, ((int32_t)((uint32_t)L_10>>((int32_t)26)))));
		uint32_t L_11 = __this->___h2_20;
		__this->___h2_20 = ((int32_t)((int32_t)L_11&((int32_t)67108863)));
		uint32_t L_12 = __this->___h4_22;
		uint32_t L_13 = __this->___h3_21;
		__this->___h4_22 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, ((int32_t)((uint32_t)L_13>>((int32_t)26)))));
		uint32_t L_14 = __this->___h3_21;
		__this->___h3_21 = ((int32_t)((int32_t)L_14&((int32_t)67108863)));
		uint32_t L_15 = __this->___h0_18;
		uint32_t L_16 = __this->___h4_22;
		__this->___h0_18 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, ((int32_t)il2cpp_codegen_multiply(((int32_t)((uint32_t)L_16>>((int32_t)26))), 5))));
		uint32_t L_17 = __this->___h4_22;
		__this->___h4_22 = ((int32_t)((int32_t)L_17&((int32_t)67108863)));
		uint32_t L_18 = __this->___h1_19;
		uint32_t L_19 = __this->___h0_18;
		__this->___h1_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, ((int32_t)((uint32_t)L_19>>((int32_t)26)))));
		uint32_t L_20 = __this->___h0_18;
		__this->___h0_18 = ((int32_t)((int32_t)L_20&((int32_t)67108863)));
		uint32_t L_21 = __this->___h0_18;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, 5));
		uint32_t L_22 = V_0;
		V_5 = ((int32_t)((uint32_t)L_22>>((int32_t)26)));
		uint32_t L_23 = V_0;
		V_0 = ((int32_t)((int32_t)L_23&((int32_t)67108863)));
		uint32_t L_24 = __this->___h1_19;
		uint32_t L_25 = V_5;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_25));
		uint32_t L_26 = V_1;
		V_5 = ((int32_t)((uint32_t)L_26>>((int32_t)26)));
		uint32_t L_27 = V_1;
		V_1 = ((int32_t)((int32_t)L_27&((int32_t)67108863)));
		uint32_t L_28 = __this->___h2_20;
		uint32_t L_29 = V_5;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)L_29));
		uint32_t L_30 = V_2;
		V_5 = ((int32_t)((uint32_t)L_30>>((int32_t)26)));
		uint32_t L_31 = V_2;
		V_2 = ((int32_t)((int32_t)L_31&((int32_t)67108863)));
		uint32_t L_32 = __this->___h3_21;
		uint32_t L_33 = V_5;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_33));
		uint32_t L_34 = V_3;
		V_5 = ((int32_t)((uint32_t)L_34>>((int32_t)26)));
		uint32_t L_35 = V_3;
		V_3 = ((int32_t)((int32_t)L_35&((int32_t)67108863)));
		uint32_t L_36 = __this->___h4_22;
		uint32_t L_37 = V_5;
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)L_37)), ((int32_t)67108864)));
		uint32_t L_38 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_subtract(((int32_t)((uint32_t)L_38>>((int32_t)31))), 1));
		uint32_t L_39 = V_5;
		V_6 = ((~L_39));
		uint32_t L_40 = __this->___h0_18;
		uint32_t L_41 = V_6;
		uint32_t L_42 = V_0;
		uint32_t L_43 = V_5;
		__this->___h0_18 = ((int32_t)(((int32_t)((int32_t)L_40&(int32_t)L_41))|((int32_t)((int32_t)L_42&(int32_t)L_43))));
		uint32_t L_44 = __this->___h1_19;
		uint32_t L_45 = V_6;
		uint32_t L_46 = V_1;
		uint32_t L_47 = V_5;
		__this->___h1_19 = ((int32_t)(((int32_t)((int32_t)L_44&(int32_t)L_45))|((int32_t)((int32_t)L_46&(int32_t)L_47))));
		uint32_t L_48 = __this->___h2_20;
		uint32_t L_49 = V_6;
		uint32_t L_50 = V_2;
		uint32_t L_51 = V_5;
		__this->___h2_20 = ((int32_t)(((int32_t)((int32_t)L_48&(int32_t)L_49))|((int32_t)((int32_t)L_50&(int32_t)L_51))));
		uint32_t L_52 = __this->___h3_21;
		uint32_t L_53 = V_6;
		uint32_t L_54 = V_3;
		uint32_t L_55 = V_5;
		__this->___h3_21 = ((int32_t)(((int32_t)((int32_t)L_52&(int32_t)L_53))|((int32_t)((int32_t)L_54&(int32_t)L_55))));
		uint32_t L_56 = __this->___h4_22;
		uint32_t L_57 = V_6;
		uint32_t L_58 = V_4;
		uint32_t L_59 = V_5;
		__this->___h4_22 = ((int32_t)(((int32_t)((int32_t)L_56&(int32_t)L_57))|((int32_t)((int32_t)L_58&(int32_t)L_59))));
		uint32_t L_60 = __this->___h0_18;
		uint32_t L_61 = __this->___h1_19;
		uint32_t L_62 = __this->___k0_12;
		V_7 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_60|((int32_t)((int32_t)L_61<<((int32_t)26))))))), ((int64_t)(uint64_t)L_62)));
		uint32_t L_63 = __this->___h1_19;
		uint32_t L_64 = __this->___h2_20;
		uint32_t L_65 = __this->___k1_13;
		V_8 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)((int32_t)(((int32_t)((uint32_t)L_63>>6))|((int32_t)((int32_t)L_64<<((int32_t)20))))))), ((int64_t)(uint64_t)L_65)));
		uint32_t L_66 = __this->___h2_20;
		uint32_t L_67 = __this->___h3_21;
		uint32_t L_68 = __this->___k2_14;
		V_9 = ((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)((int32_t)(((int32_t)((uint32_t)L_66>>((int32_t)12)))|((int32_t)((int32_t)L_67<<((int32_t)14))))))), ((int64_t)(uint64_t)L_68)));
		uint32_t L_69 = __this->___h3_21;
		uint32_t L_70 = __this->___h4_22;
		uint32_t L_71 = __this->___k3_15;
		uint64_t L_72 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = ___0_output;
		int32_t L_74 = ___1_outOff;
		Pack_UInt32_To_LE_m2499D0485ABBAB63E653F26941EE0AFA53508D18(((int32_t)(uint32_t)L_72), L_73, L_74, NULL);
		uint64_t L_75 = V_8;
		uint64_t L_76 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_75, ((int64_t)((uint64_t)L_76>>((int32_t)32)))));
		uint64_t L_77 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = ___0_output;
		int32_t L_79 = ___1_outOff;
		Pack_UInt32_To_LE_m2499D0485ABBAB63E653F26941EE0AFA53508D18(((int32_t)(uint32_t)L_77), L_78, ((int32_t)il2cpp_codegen_add(L_79, 4)), NULL);
		uint64_t L_80 = V_9;
		uint64_t L_81 = V_8;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)((uint64_t)L_81>>((int32_t)32)))));
		uint64_t L_82 = V_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = ___0_output;
		int32_t L_84 = ___1_outOff;
		Pack_UInt32_To_LE_m2499D0485ABBAB63E653F26941EE0AFA53508D18(((int32_t)(uint32_t)L_82), L_83, ((int32_t)il2cpp_codegen_add(L_84, 8)), NULL);
		uint64_t L_85 = V_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = ___0_output;
		int32_t L_87 = ___1_outOff;
		Pack_UInt32_To_LE_m2499D0485ABBAB63E653F26941EE0AFA53508D18(((int32_t)(uint32_t)((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)(uint64_t)((uint32_t)((int32_t)(((int32_t)((uint32_t)L_69>>((int32_t)18)))|((int32_t)((int32_t)L_70<<8)))))), ((int64_t)(uint64_t)L_71))), ((int64_t)((uint64_t)L_85>>((int32_t)32)))))), L_86, ((int32_t)il2cpp_codegen_add(L_87, ((int32_t)12))), NULL);
		Poly1305_Reset_mD8B7C4EB5F8E44905007654526D7ACF50D10D0FF(__this, NULL);
		return ((int32_t)16);
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.Poly1305::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Poly1305_Reset_mD8B7C4EB5F8E44905007654526D7ACF50D10D0FF (Poly1305_t2AB3E59D012311B29065EEBEA053843267EB748A* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		__this->___currentBlockOffset_17 = 0;
		int32_t L_0 = 0;
		V_0 = L_0;
		__this->___h4_22 = L_0;
		uint32_t L_1 = V_0;
		uint32_t L_2 = L_1;
		V_0 = L_2;
		__this->___h3_21 = L_2;
		uint32_t L_3 = V_0;
		uint32_t L_4 = L_3;
		V_0 = L_4;
		__this->___h2_20 = L_4;
		uint32_t L_5 = V_0;
		uint32_t L_6 = L_5;
		V_0 = L_6;
		__this->___h1_19 = L_6;
		uint32_t L_7 = V_0;
		__this->___h0_18 = L_7;
		return;
	}
}
// System.UInt64 Org.BouncyCastle.Crypto.Macs.Poly1305::mul32x32_64(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Poly1305_mul32x32_64_mF5BC2B0818647B4366506173F3B4E814145F2445 (uint32_t ___0_i1, uint32_t ___1_i2, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_i1;
		uint32_t L_1 = ___1_i2;
		return ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_0), ((int64_t)(uint64_t)L_1)));
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
// System.Void Org.BouncyCastle.Crypto.Macs.SipHash::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SipHash__ctor_m1CF2BE34378F689D41CED85A942206466CE388ED (SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A* __this, const RuntimeMethod* method) 
{
	{
		SipHash__ctor_mF2A1426AAD4AF5D75E0AE3A3A98485EC0FA2ED81(__this, 2, 4, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.SipHash::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SipHash__ctor_mF2A1426AAD4AF5D75E0AE3A3A98485EC0FA2ED81 (SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A* __this, int32_t ___0_c, int32_t ___1_d, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_c;
		__this->___c_0 = L_0;
		int32_t L_1 = ___1_d;
		__this->___d_1 = L_1;
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Macs.SipHash::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SipHash_get_AlgorithmName_m01D5F108BF366B3C9B933928D40E03CD75863A00 (SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6EC569AA0ACFA41FB7FB87F2D80E4E7FE0F6A14);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___c_0;
		V_0 = L_0;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		int32_t L_2 = __this->___d_1;
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralD6EC569AA0ACFA41FB7FB87F2D80E4E7FE0F6A14, L_1, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, L_3, NULL);
		return L_4;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.SipHash::GetMacSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SipHash_GetMacSize_mD5A1CDCC851D381B6F701EEDC5C3B1E69B43ECB8 (SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A* __this, const RuntimeMethod* method) 
{
	{
		return 8;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.SipHash::Init(Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SipHash_Init_m0DE654CF92F0A1CF6B82CD01DA1D0F531B4AF21A (SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* G_B2_0 = NULL;
	KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* G_B1_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_parameters;
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_1 = ((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_0, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var));
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0019;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C2C8987828E01D85FC122E11371CD17A9B27B40)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SipHash_Init_m0DE654CF92F0A1CF6B82CD01DA1D0F531B4AF21A_RuntimeMethod_var)));
	}

IL_0019:
	{
		NullCheck(G_B2_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(G_B2_0, NULL);
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)16))))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDB80EEF4A6BDCB6B1C755569BAB4BD8A610B18FC)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SipHash_Init_m0DE654CF92F0A1CF6B82CD01DA1D0F531B4AF21A_RuntimeMethod_var)));
	}

IL_0036:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		uint64_t L_7;
		L_7 = Pack_LE_To_UInt64_m6CC6EA10A381D168EEEF20ACD2A7C5C3A0B6795B(L_6, 0, NULL);
		__this->___k0_2 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		uint64_t L_9;
		L_9 = Pack_LE_To_UInt64_m6CC6EA10A381D168EEEF20ACD2A7C5C3A0B6795B(L_8, 8, NULL);
		__this->___k1_3 = L_9;
		VirtualActionInvoker0::Invoke(18 /* System.Void Org.BouncyCastle.Crypto.Macs.SipHash::Reset() */, __this);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.SipHash::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SipHash_Update_mC6103B343F850103EC3665480FEE422C80F0217F (SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A* __this, uint8_t ___0_input, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int64_t L_0 = __this->___m_8;
		uint8_t L_1 = ___0_input;
		__this->___m_8 = ((int64_t)(((int64_t)((uint64_t)L_0>>8))|((int64_t)(((int64_t)(uint64_t)L_1)<<((int32_t)56)))));
		int32_t L_2 = __this->___wordPos_9;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = V_0;
		__this->___wordPos_9 = L_3;
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)8))))
		{
			goto IL_0035;
		}
	}
	{
		VirtualActionInvoker0::Invoke(19 /* System.Void Org.BouncyCastle.Crypto.Macs.SipHash::ProcessMessageWord() */, __this);
		__this->___wordPos_9 = 0;
	}

IL_0035:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.SipHash::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SipHash_BlockUpdate_m786DBD3346A0310B36F849406DAC4D6EFB1C6BDF (SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_offset, int32_t ___2_length, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint64_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___2_length;
		V_1 = ((int32_t)(L_0&((int32_t)-8)));
		int32_t L_1 = __this->___wordPos_9;
		if (L_1)
		{
			goto IL_005a;
		}
	}
	{
		goto IL_002a;
	}

IL_0011:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_input;
		int32_t L_3 = ___1_offset;
		int32_t L_4 = V_0;
		uint64_t L_5;
		L_5 = Pack_LE_To_UInt64_m6CC6EA10A381D168EEEF20ACD2A7C5C3A0B6795B(L_2, ((int32_t)il2cpp_codegen_add(L_3, L_4)), NULL);
		__this->___m_8 = L_5;
		VirtualActionInvoker0::Invoke(19 /* System.Void Org.BouncyCastle.Crypto.Macs.SipHash::ProcessMessageWord() */, __this);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 8));
	}

IL_002a:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0011;
		}
	}
	{
		goto IL_004c;
	}

IL_0030:
	{
		int64_t L_9 = __this->___m_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_input;
		int32_t L_11 = ___1_offset;
		int32_t L_12 = V_0;
		NullCheck(L_10);
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_11, L_12));
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		__this->___m_8 = ((int64_t)(((int64_t)((uint64_t)L_9>>8))|((int64_t)(((int64_t)(uint64_t)L_14)<<((int32_t)56)))));
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_004c:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = ___2_length;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_18 = ___2_length;
		int32_t L_19 = V_1;
		__this->___wordPos_9 = ((int32_t)il2cpp_codegen_subtract(L_18, L_19));
		return;
	}

IL_005a:
	{
		int32_t L_20 = __this->___wordPos_9;
		V_2 = ((int32_t)(L_20<<3));
		goto IL_0099;
	}

IL_0065:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_input;
		int32_t L_22 = ___1_offset;
		int32_t L_23 = V_0;
		uint64_t L_24;
		L_24 = Pack_LE_To_UInt64_m6CC6EA10A381D168EEEF20ACD2A7C5C3A0B6795B(L_21, ((int32_t)il2cpp_codegen_add(L_22, L_23)), NULL);
		V_3 = L_24;
		uint64_t L_25 = V_3;
		int32_t L_26 = V_2;
		int64_t L_27 = __this->___m_8;
		int32_t L_28 = V_2;
		__this->___m_8 = ((int64_t)(((int64_t)((int64_t)L_25<<((int32_t)(L_26&((int32_t)63)))))|((int64_t)((uint64_t)L_27>>((int32_t)(((-L_28))&((int32_t)63)))))));
		VirtualActionInvoker0::Invoke(19 /* System.Void Org.BouncyCastle.Crypto.Macs.SipHash::ProcessMessageWord() */, __this);
		uint64_t L_29 = V_3;
		__this->___m_8 = L_29;
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 8));
	}

IL_0099:
	{
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0065;
		}
	}
	{
		goto IL_00df;
	}

IL_009f:
	{
		int64_t L_33 = __this->___m_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___0_input;
		int32_t L_35 = ___1_offset;
		int32_t L_36 = V_0;
		NullCheck(L_34);
		int32_t L_37 = ((int32_t)il2cpp_codegen_add(L_35, L_36));
		uint8_t L_38 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		__this->___m_8 = ((int64_t)(((int64_t)((uint64_t)L_33>>8))|((int64_t)(((int64_t)(uint64_t)L_38)<<((int32_t)56)))));
		int32_t L_39 = __this->___wordPos_9;
		V_4 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		int32_t L_40 = V_4;
		__this->___wordPos_9 = L_40;
		int32_t L_41 = V_4;
		if ((!(((uint32_t)L_41) == ((uint32_t)8))))
		{
			goto IL_00db;
		}
	}
	{
		VirtualActionInvoker0::Invoke(19 /* System.Void Org.BouncyCastle.Crypto.Macs.SipHash::ProcessMessageWord() */, __this);
		__this->___wordPos_9 = 0;
	}

IL_00db:
	{
		int32_t L_42 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00df:
	{
		int32_t L_43 = V_0;
		int32_t L_44 = ___2_length;
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_009f;
		}
	}
	{
		return;
	}
}
// System.Int64 Org.BouncyCastle.Crypto.Macs.SipHash::DoFinal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SipHash_DoFinal_m810184C0FE6E956772CA75E53F09C08FE93506BB (SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___m_8;
		int32_t L_1 = __this->___wordPos_9;
		__this->___m_8 = ((int64_t)((uint64_t)L_0>>((int32_t)(((int32_t)(((int32_t)il2cpp_codegen_subtract(7, L_1))<<3))&((int32_t)63)))));
		int64_t L_2 = __this->___m_8;
		__this->___m_8 = ((int64_t)((uint64_t)L_2>>8));
		int64_t L_3 = __this->___m_8;
		int32_t L_4 = __this->___wordCount_10;
		int32_t L_5 = __this->___wordPos_9;
		__this->___m_8 = ((int64_t)(L_3|((int64_t)(((int64_t)((int32_t)il2cpp_codegen_add(((int32_t)(L_4<<3)), L_5)))<<((int32_t)56)))));
		VirtualActionInvoker0::Invoke(19 /* System.Void Org.BouncyCastle.Crypto.Macs.SipHash::ProcessMessageWord() */, __this);
		int64_t L_6 = __this->___v2_6;
		__this->___v2_6 = ((int64_t)(L_6^((int64_t)((int32_t)255))));
		int32_t L_7 = __this->___d_1;
		VirtualActionInvoker1< int32_t >::Invoke(20 /* System.Void Org.BouncyCastle.Crypto.Macs.SipHash::ApplySipRounds(System.Int32) */, __this, L_7);
		int64_t L_8 = __this->___v0_4;
		int64_t L_9 = __this->___v1_5;
		int64_t L_10 = __this->___v2_6;
		int64_t L_11 = __this->___v3_7;
		VirtualActionInvoker0::Invoke(18 /* System.Void Org.BouncyCastle.Crypto.Macs.SipHash::Reset() */, __this);
		return ((int64_t)(((int64_t)(((int64_t)(L_8^L_9))^L_10))^L_11));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.SipHash::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SipHash_DoFinal_mF32245A12EAC11AFC8EEBE690EC27E14E0E94A62 (SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, int32_t ___1_outOff, const RuntimeMethod* method) 
{
	{
		int64_t L_0;
		L_0 = VirtualFuncInvoker0< int64_t >::Invoke(16 /* System.Int64 Org.BouncyCastle.Crypto.Macs.SipHash::DoFinal() */, __this);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_output;
		int32_t L_2 = ___1_outOff;
		Pack_UInt64_To_LE_m7FAB73112D2DBB58B79823435B3C3A06488A5E90(L_0, L_1, L_2, NULL);
		return 8;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.SipHash::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SipHash_Reset_m3ED9FB397AA4B0341063FDA00B8353189C08F965 (SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___k0_2;
		__this->___v0_4 = ((int64_t)(L_0^((int64_t)8317987319222330741LL)));
		int64_t L_1 = __this->___k1_3;
		__this->___v1_5 = ((int64_t)(L_1^((int64_t)7237128888997146477LL)));
		int64_t L_2 = __this->___k0_2;
		__this->___v2_6 = ((int64_t)(L_2^((int64_t)7816392313619706465LL)));
		int64_t L_3 = __this->___k1_3;
		__this->___v3_7 = ((int64_t)(L_3^((int64_t)8387220255154660723LL)));
		__this->___m_8 = ((int64_t)0);
		__this->___wordPos_9 = 0;
		__this->___wordCount_10 = 0;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.SipHash::ProcessMessageWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SipHash_ProcessMessageWord_mC97638BA604938B624279F1679A940629F1692DF (SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___wordCount_10;
		__this->___wordCount_10 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int64_t L_1 = __this->___v3_7;
		int64_t L_2 = __this->___m_8;
		__this->___v3_7 = ((int64_t)(L_1^L_2));
		int32_t L_3 = __this->___c_0;
		VirtualActionInvoker1< int32_t >::Invoke(20 /* System.Void Org.BouncyCastle.Crypto.Macs.SipHash::ApplySipRounds(System.Int32) */, __this, L_3);
		int64_t L_4 = __this->___v0_4;
		int64_t L_5 = __this->___m_8;
		__this->___v0_4 = ((int64_t)(L_4^L_5));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.SipHash::ApplySipRounds(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SipHash_ApplySipRounds_m1A15D0E4271BCCC11C6F5754A4E7DC00EC0CA674 (SipHash_t0C136667DF293825B8AAFD35B1C7A38DCC76291A* __this, int32_t ___0_n, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int64_t L_0 = __this->___v0_4;
		V_0 = L_0;
		int64_t L_1 = __this->___v1_5;
		V_1 = L_1;
		int64_t L_2 = __this->___v2_6;
		V_2 = L_2;
		int64_t L_3 = __this->___v3_7;
		V_3 = L_3;
		V_4 = 0;
		goto IL_007d;
	}

IL_0021:
	{
		int64_t L_4 = V_0;
		int64_t L_5 = V_1;
		V_0 = ((int64_t)il2cpp_codegen_add(L_4, L_5));
		int64_t L_6 = V_2;
		int64_t L_7 = V_3;
		V_2 = ((int64_t)il2cpp_codegen_add(L_6, L_7));
		int64_t L_8 = V_1;
		int64_t L_9;
		L_9 = SipHash_RotateLeft_m8A13AAF7455EB976269D15631A5B5936EFC88BF8(L_8, ((int32_t)13), NULL);
		V_1 = L_9;
		int64_t L_10 = V_3;
		int64_t L_11;
		L_11 = SipHash_RotateLeft_m8A13AAF7455EB976269D15631A5B5936EFC88BF8(L_10, ((int32_t)16), NULL);
		V_3 = L_11;
		int64_t L_12 = V_1;
		int64_t L_13 = V_0;
		V_1 = ((int64_t)(L_12^L_13));
		int64_t L_14 = V_3;
		int64_t L_15 = V_2;
		V_3 = ((int64_t)(L_14^L_15));
		int64_t L_16 = V_0;
		int64_t L_17;
		L_17 = SipHash_RotateLeft_m8A13AAF7455EB976269D15631A5B5936EFC88BF8(L_16, ((int32_t)32), NULL);
		V_0 = L_17;
		int64_t L_18 = V_2;
		int64_t L_19 = V_1;
		V_2 = ((int64_t)il2cpp_codegen_add(L_18, L_19));
		int64_t L_20 = V_0;
		int64_t L_21 = V_3;
		V_0 = ((int64_t)il2cpp_codegen_add(L_20, L_21));
		int64_t L_22 = V_1;
		int64_t L_23;
		L_23 = SipHash_RotateLeft_m8A13AAF7455EB976269D15631A5B5936EFC88BF8(L_22, ((int32_t)17), NULL);
		V_1 = L_23;
		int64_t L_24 = V_3;
		int64_t L_25;
		L_25 = SipHash_RotateLeft_m8A13AAF7455EB976269D15631A5B5936EFC88BF8(L_24, ((int32_t)21), NULL);
		V_3 = L_25;
		int64_t L_26 = V_1;
		int64_t L_27 = V_2;
		V_1 = ((int64_t)(L_26^L_27));
		int64_t L_28 = V_3;
		int64_t L_29 = V_0;
		V_3 = ((int64_t)(L_28^L_29));
		int64_t L_30 = V_2;
		int64_t L_31;
		L_31 = SipHash_RotateLeft_m8A13AAF7455EB976269D15631A5B5936EFC88BF8(L_30, ((int32_t)32), NULL);
		V_2 = L_31;
		int32_t L_32 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_007d:
	{
		int32_t L_33 = V_4;
		int32_t L_34 = ___0_n;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0021;
		}
	}
	{
		int64_t L_35 = V_0;
		__this->___v0_4 = L_35;
		int64_t L_36 = V_1;
		__this->___v1_5 = L_36;
		int64_t L_37 = V_2;
		__this->___v2_6 = L_37;
		int64_t L_38 = V_3;
		__this->___v3_7 = L_38;
		return;
	}
}
// System.Int64 Org.BouncyCastle.Crypto.Macs.SipHash::RotateLeft(System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SipHash_RotateLeft_m8A13AAF7455EB976269D15631A5B5936EFC88BF8 (int64_t ___0_x, int32_t ___1_n, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		int64_t L_0 = ___0_x;
		V_0 = L_0;
		uint64_t L_1 = V_0;
		int32_t L_2 = ___1_n;
		uint64_t L_3 = V_0;
		int32_t L_4 = ___1_n;
		V_0 = ((int64_t)(((int64_t)((int64_t)L_1<<((int32_t)(L_2&((int32_t)63)))))|((int64_t)((uint64_t)L_3>>((int32_t)(((-L_4))&((int32_t)63)))))));
		uint64_t L_5 = V_0;
		return L_5;
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
// System.Void Org.BouncyCastle.Crypto.Macs.SkeinMac::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinMac__ctor_mBCCBED2B2CC243AA6E7B86B6388F48A557F6AAA7 (SkeinMac_tACA0D50E98487386B2B30E53119701B18FDC1A8E* __this, int32_t ___0_stateSizeBits, int32_t ___1_digestSizeBits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_stateSizeBits;
		int32_t L_1 = ___1_digestSizeBits;
		SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* L_2 = (SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB*)il2cpp_codegen_object_new(SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SkeinEngine__ctor_mF91E68903CC0C9FC02C1C0DD1F1E9B221762A11D(L_2, L_0, L_1, NULL);
		__this->___engine_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___engine_3), (void*)L_2);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.SkeinMac::.ctor(Org.BouncyCastle.Crypto.Macs.SkeinMac)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinMac__ctor_m2966F80173B57ECF5D7F4EBC69268EDAB4214A8B (SkeinMac_tACA0D50E98487386B2B30E53119701B18FDC1A8E* __this, SkeinMac_tACA0D50E98487386B2B30E53119701B18FDC1A8E* ___0_mac, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		SkeinMac_tACA0D50E98487386B2B30E53119701B18FDC1A8E* L_0 = ___0_mac;
		NullCheck(L_0);
		SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* L_1 = L_0->___engine_3;
		SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* L_2 = (SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB*)il2cpp_codegen_object_new(SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SkeinEngine__ctor_m3070EA964D73F5C5E72C1275DF0A49280B024847(L_2, L_1, NULL);
		__this->___engine_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___engine_3), (void*)L_2);
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Macs.SkeinMac::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SkeinMac_get_AlgorithmName_m4208DCC7F3608C3A6731C3A9685AA7E7A3144B1E (SkeinMac_tACA0D50E98487386B2B30E53119701B18FDC1A8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D60AC5770D4F760AEFAF7885FA604E7091BBEDE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* L_0 = __this->___engine_3;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = SkeinEngine_get_BlockSize_m5F6B1D2FA8ACBB9639AA3666B7B85B8DD2151037(L_0, NULL);
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_1, 8));
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* L_3 = __this->___engine_3;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = SkeinEngine_get_OutputSize_m7B75A727F4C5300C10FEBFBCAEE6E6BBEDC3EF0A_inline(L_3, NULL);
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_4, 8));
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_6;
		L_6 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral6D60AC5770D4F760AEFAF7885FA604E7091BBEDE, L_2, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, L_5, NULL);
		return L_6;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.SkeinMac::Init(Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinMac_Init_mA0D146C830F8412CC3AF683021CB93206040FB0C (SkeinMac_tACA0D50E98487386B2B30E53119701B18FDC1A8E* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Builder_t3D2F2E6112A8B367D304B58F4E781E0DC33983B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_parameters;
		if (!((SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8*)IsInstClass((RuntimeObject*)L_0, SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8_il2cpp_TypeInfo_var)))
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_1 = ___0_parameters;
		V_0 = ((SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8*)CastclassClass((RuntimeObject*)L_1, SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8_il2cpp_TypeInfo_var));
		goto IL_004c;
	}

IL_0011:
	{
		RuntimeObject* L_2 = ___0_parameters;
		if (!((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_2, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)))
		{
			goto IL_0036;
		}
	}
	{
		Builder_t3D2F2E6112A8B367D304B58F4E781E0DC33983B6* L_3 = (Builder_t3D2F2E6112A8B367D304B58F4E781E0DC33983B6*)il2cpp_codegen_object_new(Builder_t3D2F2E6112A8B367D304B58F4E781E0DC33983B6_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Builder__ctor_m88F4EA119C5649FAFD12B50E5A7EEC0DE814D38A(L_3, NULL);
		RuntimeObject* L_4 = ___0_parameters;
		NullCheck(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_4, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_4, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)), NULL);
		NullCheck(L_3);
		Builder_t3D2F2E6112A8B367D304B58F4E781E0DC33983B6* L_6;
		L_6 = Builder_SetKey_m7D926FEBC30CDB6D8283B7581D5547CC82AA7E10(L_3, L_5, NULL);
		NullCheck(L_6);
		SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8* L_7;
		L_7 = Builder_Build_m4D43C97CEA70091569F5C97B0DC2AACF158FEF7C(L_6, NULL);
		V_0 = L_7;
		goto IL_004c;
	}

IL_0036:
	{
		RuntimeObject* L_8 = ___0_parameters;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var)));
		String_t* L_9;
		L_9 = Platform_GetTypeName_m9B04679202710BC6A96803803882849D0C5001FB(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9285BEB84CFC90BDC52DB62913B2A7EFFB48DF38)), L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkeinMac_Init_mA0D146C830F8412CC3AF683021CB93206040FB0C_RuntimeMethod_var)));
	}

IL_004c:
	{
		SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8* L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = SkeinParameters_GetKey_mB0360C83775B338B3A690618EF6945F648CB5468(L_12, NULL);
		if (L_13)
		{
			goto IL_005f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA8250B534396AB58BA9610ADE04FDD1310D4478D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SkeinMac_Init_mA0D146C830F8412CC3AF683021CB93206040FB0C_RuntimeMethod_var)));
	}

IL_005f:
	{
		SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* L_15 = __this->___engine_3;
		SkeinParameters_t2D1C228D08C5A7A9A0E2B789D9BC4B13722372B8* L_16 = V_0;
		NullCheck(L_15);
		SkeinEngine_Init_m600D7AFFBFF869AFBE5681C28AF9613DA427D83C(L_15, L_16, NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.SkeinMac::GetMacSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeinMac_GetMacSize_mF62F8E300E7307DCAB87C75903CC9A5A12BC2561 (SkeinMac_tACA0D50E98487386B2B30E53119701B18FDC1A8E* __this, const RuntimeMethod* method) 
{
	{
		SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* L_0 = __this->___engine_3;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = SkeinEngine_get_OutputSize_m7B75A727F4C5300C10FEBFBCAEE6E6BBEDC3EF0A_inline(L_0, NULL);
		return L_1;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.SkeinMac::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinMac_Reset_m8DDD5BE167DB326E4448F6437646A92FD54712E0 (SkeinMac_tACA0D50E98487386B2B30E53119701B18FDC1A8E* __this, const RuntimeMethod* method) 
{
	{
		SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* L_0 = __this->___engine_3;
		NullCheck(L_0);
		SkeinEngine_Reset_m33B2F40AFEDB819D4BB1E00D174F7661D063E085(L_0, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.SkeinMac::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinMac_Update_mDFAE922D67AA3DFA2B70F9BDA19B532C735AEC21 (SkeinMac_tACA0D50E98487386B2B30E53119701B18FDC1A8E* __this, uint8_t ___0_inByte, const RuntimeMethod* method) 
{
	{
		SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* L_0 = __this->___engine_3;
		uint8_t L_1 = ___0_inByte;
		NullCheck(L_0);
		SkeinEngine_Update_m74954574D1266FE7710840FFE7B74F886A37166B(L_0, L_1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.SkeinMac::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkeinMac_BlockUpdate_mFAE493954C8FB6544091E3F833BA44E8C406E38C (SkeinMac_tACA0D50E98487386B2B30E53119701B18FDC1A8E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_len, const RuntimeMethod* method) 
{
	{
		SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* L_0 = __this->___engine_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_input;
		int32_t L_2 = ___1_inOff;
		int32_t L_3 = ___2_len;
		NullCheck(L_0);
		SkeinEngine_Update_m1C44C4466C02B46ACD3661FD2B13B5959170592C(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.SkeinMac::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SkeinMac_DoFinal_mD9881163F096C68FFDC9BAB1EAA1F113B69F9450 (SkeinMac_tACA0D50E98487386B2B30E53119701B18FDC1A8E* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, int32_t ___1_outOff, const RuntimeMethod* method) 
{
	{
		SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* L_0 = __this->___engine_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_output;
		int32_t L_2 = ___1_outOff;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = SkeinEngine_DoFinal_mDE98915E12A1C2148E59947191FBFE606FFFF730(L_0, L_1, L_2, NULL);
		return L_3;
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
// System.Int32 Org.BouncyCastle.Crypto.Macs.VmpcMac::DoFinal(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VmpcMac_DoFinal_m884F38C4E69FCEE1806776BA635C9B546C202026 (VmpcMac_t16974E2BD73719C7204F28641E8B32E8CD49FEC6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_output, int32_t ___1_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	uint8_t V_6 = 0x0;
	{
		V_1 = 1;
		goto IL_01e1;
	}

IL_0007:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___P_2;
		uint8_t L_1 = __this->___s_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___P_2;
		uint8_t L_3 = __this->___n_1;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)((int32_t)L_3&((int32_t)255)));
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		int32_t L_6 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_5))&((int32_t)255)));
		uint8_t L_7 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		__this->___s_3 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___P_2;
		uint8_t L_9 = __this->___x4_10;
		uint8_t L_10 = __this->___x3_9;
		int32_t L_11 = V_1;
		NullCheck(L_8);
		int32_t L_12 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)), L_11))&((int32_t)255)));
		uint8_t L_13 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		__this->___x4_10 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___P_2;
		uint8_t L_15 = __this->___x3_9;
		uint8_t L_16 = __this->___x2_8;
		int32_t L_17 = V_1;
		NullCheck(L_14);
		int32_t L_18 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16)), L_17))&((int32_t)255)));
		uint8_t L_19 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		__this->___x3_9 = L_19;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = __this->___P_2;
		uint8_t L_21 = __this->___x2_8;
		uint8_t L_22 = __this->___x1_7;
		int32_t L_23 = V_1;
		NullCheck(L_20);
		int32_t L_24 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_22)), L_23))&((int32_t)255)));
		uint8_t L_25 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		__this->___x2_8 = L_25;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___P_2;
		uint8_t L_27 = __this->___x1_7;
		uint8_t L_28 = __this->___s_3;
		int32_t L_29 = V_1;
		NullCheck(L_26);
		int32_t L_30 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)L_28)), L_29))&((int32_t)255)));
		uint8_t L_31 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		__this->___x1_7 = L_31;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = __this->___T_4;
		uint8_t L_33 = __this->___g_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___T_4;
		uint8_t L_35 = __this->___g_0;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)((int32_t)L_35&((int32_t)31)));
		uint8_t L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		uint8_t L_38 = __this->___x1_7;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_33&((int32_t)31)))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_37^(int32_t)L_38))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = __this->___T_4;
		uint8_t L_40 = __this->___g_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = __this->___T_4;
		uint8_t L_42 = __this->___g_0;
		NullCheck(L_41);
		int32_t L_43 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_42, 1))&((int32_t)31)));
		uint8_t L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		uint8_t L_45 = __this->___x2_8;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_40, 1))&((int32_t)31)))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_44^(int32_t)L_45))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = __this->___T_4;
		uint8_t L_47 = __this->___g_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = __this->___T_4;
		uint8_t L_49 = __this->___g_0;
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_49, 2))&((int32_t)31)));
		uint8_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		uint8_t L_52 = __this->___x3_9;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_47, 2))&((int32_t)31)))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_51^(int32_t)L_52))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = __this->___T_4;
		uint8_t L_54 = __this->___g_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = __this->___T_4;
		uint8_t L_56 = __this->___g_0;
		NullCheck(L_55);
		int32_t L_57 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_56, 3))&((int32_t)31)));
		uint8_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		uint8_t L_59 = __this->___x4_10;
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_54, 3))&((int32_t)31)))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_58^(int32_t)L_59))));
		uint8_t L_60 = __this->___g_0;
		__this->___g_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_60, 4))&((int32_t)31))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = __this->___P_2;
		uint8_t L_62 = __this->___n_1;
		NullCheck(L_61);
		int32_t L_63 = ((int32_t)((int32_t)L_62&((int32_t)255)));
		uint8_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		V_2 = L_64;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = __this->___P_2;
		uint8_t L_66 = __this->___n_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = __this->___P_2;
		uint8_t L_68 = __this->___s_3;
		NullCheck(L_67);
		int32_t L_69 = ((int32_t)((int32_t)L_68&((int32_t)255)));
		uint8_t L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_66&((int32_t)255)))), (uint8_t)L_70);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = __this->___P_2;
		uint8_t L_72 = __this->___s_3;
		uint8_t L_73 = V_2;
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_72&((int32_t)255)))), (uint8_t)L_73);
		uint8_t L_74 = __this->___n_1;
		__this->___n_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_74, 1))&((int32_t)255))));
		int32_t L_75 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01e1:
	{
		int32_t L_76 = V_1;
		if ((((int32_t)L_76) < ((int32_t)((int32_t)25))))
		{
			goto IL_0007;
		}
	}
	{
		V_3 = 0;
		goto IL_026b;
	}

IL_01ed:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = __this->___P_2;
		uint8_t L_78 = __this->___s_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = __this->___P_2;
		int32_t L_80 = V_3;
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)(L_80&((int32_t)255)));
		uint8_t L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_83 = __this->___T_4;
		int32_t L_84 = V_3;
		NullCheck(L_83);
		int32_t L_85 = ((int32_t)(L_84&((int32_t)31)));
		uint8_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		NullCheck(L_77);
		int32_t L_87 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)L_82)), (int32_t)L_86))&((int32_t)255)));
		uint8_t L_88 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		__this->___s_3 = L_88;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = __this->___P_2;
		int32_t L_90 = V_3;
		NullCheck(L_89);
		int32_t L_91 = ((int32_t)(L_90&((int32_t)255)));
		uint8_t L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		V_4 = L_92;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = __this->___P_2;
		int32_t L_94 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = __this->___P_2;
		uint8_t L_96 = __this->___s_3;
		NullCheck(L_95);
		int32_t L_97 = ((int32_t)((int32_t)L_96&((int32_t)255)));
		uint8_t L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		NullCheck(L_93);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_94&((int32_t)255)))), (uint8_t)L_98);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_99 = __this->___P_2;
		uint8_t L_100 = __this->___s_3;
		uint8_t L_101 = V_4;
		NullCheck(L_99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_100&((int32_t)255)))), (uint8_t)L_101);
		int32_t L_102 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_102, 1));
	}

IL_026b:
	{
		int32_t L_103 = V_3;
		if ((((int32_t)L_103) < ((int32_t)((int32_t)768))))
		{
			goto IL_01ed;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		V_0 = L_104;
		V_5 = 0;
		goto IL_0330;
	}

IL_0286:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_105 = __this->___P_2;
		uint8_t L_106 = __this->___s_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_107 = __this->___P_2;
		int32_t L_108 = V_5;
		NullCheck(L_107);
		int32_t L_109 = ((int32_t)(L_108&((int32_t)255)));
		uint8_t L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		NullCheck(L_105);
		int32_t L_111 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)L_110))&((int32_t)255)));
		uint8_t L_112 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		__this->___s_3 = L_112;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_113 = V_0;
		int32_t L_114 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_115 = __this->___P_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_116 = __this->___P_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_117 = __this->___P_2;
		uint8_t L_118 = __this->___s_3;
		NullCheck(L_117);
		int32_t L_119 = ((int32_t)((int32_t)L_118&((int32_t)255)));
		uint8_t L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		NullCheck(L_116);
		int32_t L_121 = ((int32_t)((int32_t)L_120&((int32_t)255)));
		uint8_t L_122 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		NullCheck(L_115);
		int32_t L_123 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_122, 1))&((int32_t)255)));
		uint8_t L_124 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		NullCheck(L_113);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(L_114), (uint8_t)L_124);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_125 = __this->___P_2;
		int32_t L_126 = V_5;
		NullCheck(L_125);
		int32_t L_127 = ((int32_t)(L_126&((int32_t)255)));
		uint8_t L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		V_6 = L_128;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_129 = __this->___P_2;
		int32_t L_130 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_131 = __this->___P_2;
		uint8_t L_132 = __this->___s_3;
		NullCheck(L_131);
		int32_t L_133 = ((int32_t)((int32_t)L_132&((int32_t)255)));
		uint8_t L_134 = (L_131)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_130&((int32_t)255)))), (uint8_t)L_134);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_135 = __this->___P_2;
		uint8_t L_136 = __this->___s_3;
		uint8_t L_137 = V_6;
		NullCheck(L_135);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_136&((int32_t)255)))), (uint8_t)L_137);
		int32_t L_138 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_138, 1));
	}

IL_0330:
	{
		int32_t L_139 = V_5;
		if ((((int32_t)L_139) < ((int32_t)((int32_t)20))))
		{
			goto IL_0286;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_140 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_141 = ___0_output;
		int32_t L_142 = ___1_outOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_143 = V_0;
		NullCheck(L_143);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_140, 0, (RuntimeArray*)L_141, L_142, ((int32_t)(((RuntimeArray*)L_143)->max_length)), NULL);
		VirtualActionInvoker0::Invoke(15 /* System.Void Org.BouncyCastle.Crypto.Macs.VmpcMac::Reset() */, __this);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_144 = V_0;
		NullCheck(L_144);
		return ((int32_t)(((RuntimeArray*)L_144)->max_length));
	}
}
// System.String Org.BouncyCastle.Crypto.Macs.VmpcMac::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VmpcMac_get_AlgorithmName_m1225CB94308155AFA23E637111EEB6418C9FEB78 (VmpcMac_t16974E2BD73719C7204F28641E8B32E8CD49FEC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE34BE56CCF14C174933090C28103F2A946D7FE3B);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralE34BE56CCF14C174933090C28103F2A946D7FE3B;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Macs.VmpcMac::GetMacSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VmpcMac_GetMacSize_m753123168638945852065C0EE70AE7B66D6EFA98 (VmpcMac_t16974E2BD73719C7204F28641E8B32E8CD49FEC6* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)20);
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.VmpcMac::Init(Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcMac_Init_mE5318BAB03EF84D1C31EA3F2351F52A24EAAB9B0 (VmpcMac_t16974E2BD73719C7204F28641E8B32E8CD49FEC6* __this, RuntimeObject* ___0_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* V_0 = NULL;
	KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_parameters;
		if (((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_0, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral248BF5CC4E65CCA322C6142014C84E32232A5525)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VmpcMac_Init_mE5318BAB03EF84D1C31EA3F2351F52A24EAAB9B0_RuntimeMethod_var)));
	}

IL_0018:
	{
		RuntimeObject* L_2 = ___0_parameters;
		V_0 = ((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_2, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var));
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_3, NULL);
		V_1 = ((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_4, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var));
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_5, NULL);
		if (((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_6, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)))
		{
			goto IL_0048;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F03BAAAD1A2D95F1010A467F3B8DD7CA392CD05)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VmpcMac_Init_mE5318BAB03EF84D1C31EA3F2351F52A24EAAB9B0_RuntimeMethod_var)));
	}

IL_0048:
	{
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_8 = V_0;
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(L_8, NULL);
		__this->___workingIV_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___workingIV_5), (void*)L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___workingIV_5;
		if (!L_10)
		{
			goto IL_0076;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___workingIV_5;
		NullCheck(L_11);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))) < ((int32_t)1)))
		{
			goto IL_0076;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___workingIV_5;
		NullCheck(L_12);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) <= ((int32_t)((int32_t)768))))
		{
			goto IL_0086;
		}
	}

IL_0076:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E8A844C3E2202C0C8A0B5D56D2645FAC07131A8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC611A012636D51B5EBBC7ADEBD3C8631EA8DAF13)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VmpcMac_Init_mE5318BAB03EF84D1C31EA3F2351F52A24EAAB9B0_RuntimeMethod_var)));
	}

IL_0086:
	{
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_14 = V_1;
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(L_14, NULL);
		__this->___workingKey_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___workingKey_6), (void*)L_15);
		VirtualActionInvoker0::Invoke(15 /* System.Void Org.BouncyCastle.Crypto.Macs.VmpcMac::Reset() */, __this);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.VmpcMac::initKey(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcMac_initKey_m1497C4E0D51B1A2C3582CF21EE5AADD1B4FFF787 (VmpcMac_t16974E2BD73719C7204F28641E8B32E8CD49FEC6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_keyBytes, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_ivBytes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	{
		__this->___s_3 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___P_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___P_2), (void*)L_0);
		V_0 = 0;
		goto IL_0029;
	}

IL_001b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___P_2;
		int32_t L_2 = V_0;
		int32_t L_3 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint8_t)((int32_t)(uint8_t)L_3));
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0029:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)256))))
		{
			goto IL_001b;
		}
	}
	{
		V_1 = 0;
		goto IL_00ad;
	}

IL_0035:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___P_2;
		uint8_t L_7 = __this->___s_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___P_2;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)(L_9&((int32_t)255)));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_keyBytes;
		int32_t L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_keyBytes;
		NullCheck(L_14);
		NullCheck(L_12);
		int32_t L_15 = ((int32_t)(L_13%((int32_t)(((RuntimeArray*)L_14)->max_length))));
		uint8_t L_16 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_6);
		int32_t L_17 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_11)), (int32_t)L_16))&((int32_t)255)));
		uint8_t L_18 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		__this->___s_3 = L_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___P_2;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)(L_20&((int32_t)255)));
		uint8_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_2 = L_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___P_2;
		int32_t L_24 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___P_2;
		uint8_t L_26 = __this->___s_3;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)((int32_t)L_26&((int32_t)255)));
		uint8_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_24&((int32_t)255)))), (uint8_t)L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___P_2;
		uint8_t L_30 = __this->___s_3;
		uint8_t L_31 = V_2;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_30&((int32_t)255)))), (uint8_t)L_31);
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00ad:
	{
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) < ((int32_t)((int32_t)768))))
		{
			goto IL_0035;
		}
	}
	{
		V_3 = 0;
		goto IL_0133;
	}

IL_00b9:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___P_2;
		uint8_t L_35 = __this->___s_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___P_2;
		int32_t L_37 = V_3;
		NullCheck(L_36);
		int32_t L_38 = ((int32_t)(L_37&((int32_t)255)));
		uint8_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___1_ivBytes;
		int32_t L_41 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___1_ivBytes;
		NullCheck(L_42);
		NullCheck(L_40);
		int32_t L_43 = ((int32_t)(L_41%((int32_t)(((RuntimeArray*)L_42)->max_length))));
		uint8_t L_44 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_34);
		int32_t L_45 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)L_39)), (int32_t)L_44))&((int32_t)255)));
		uint8_t L_46 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		__this->___s_3 = L_46;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___P_2;
		int32_t L_48 = V_3;
		NullCheck(L_47);
		int32_t L_49 = ((int32_t)(L_48&((int32_t)255)));
		uint8_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_4 = L_50;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = __this->___P_2;
		int32_t L_52 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = __this->___P_2;
		uint8_t L_54 = __this->___s_3;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)((int32_t)L_54&((int32_t)255)));
		uint8_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_52&((int32_t)255)))), (uint8_t)L_56);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = __this->___P_2;
		uint8_t L_58 = __this->___s_3;
		uint8_t L_59 = V_4;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_58&((int32_t)255)))), (uint8_t)L_59);
		int32_t L_60 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_60, 1));
	}

IL_0133:
	{
		int32_t L_61 = V_3;
		if ((((int32_t)L_61) < ((int32_t)((int32_t)768))))
		{
			goto IL_00b9;
		}
	}
	{
		__this->___n_1 = (uint8_t)0;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.VmpcMac::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcMac_Reset_m8D136C741DE4E4E8BC37EA2656A7DC1943C2B173 (VmpcMac_t16974E2BD73719C7204F28641E8B32E8CD49FEC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___workingKey_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___workingIV_5;
		VmpcMac_initKey_m1497C4E0D51B1A2C3582CF21EE5AADD1B4FFF787(__this, L_0, L_1, NULL);
		int32_t L_2 = 0;
		V_0 = (uint8_t)L_2;
		__this->___n_1 = (uint8_t)L_2;
		uint8_t L_3 = V_0;
		uint8_t L_4 = L_3;
		V_0 = L_4;
		__this->___x4_10 = L_4;
		uint8_t L_5 = V_0;
		uint8_t L_6 = L_5;
		V_0 = L_6;
		__this->___x3_9 = L_6;
		uint8_t L_7 = V_0;
		uint8_t L_8 = L_7;
		V_0 = L_8;
		__this->___x2_8 = L_8;
		uint8_t L_9 = V_0;
		uint8_t L_10 = L_9;
		V_0 = L_10;
		__this->___x1_7 = L_10;
		uint8_t L_11 = V_0;
		__this->___g_0 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->___T_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___T_4), (void*)L_12);
		V_1 = 0;
		goto IL_0064;
	}

IL_0057:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___T_4;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint8_t)0);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0064:
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)32))))
		{
			goto IL_0057;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.VmpcMac::Update(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcMac_Update_mBEE4E30E36D4E2612797DD601CC8A77609B20D6E (VmpcMac_t16974E2BD73719C7204F28641E8B32E8CD49FEC6* __this, uint8_t ___0_input, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___P_2;
		uint8_t L_1 = __this->___s_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___P_2;
		uint8_t L_3 = __this->___n_1;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)((int32_t)L_3&((int32_t)255)));
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		int32_t L_6 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_5))&((int32_t)255)));
		uint8_t L_7 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		__this->___s_3 = L_7;
		uint8_t L_8 = ___0_input;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___P_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___P_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___P_2;
		uint8_t L_12 = __this->___s_3;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)((int32_t)L_12&((int32_t)255)));
		uint8_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		int32_t L_15 = ((int32_t)((int32_t)L_14&((int32_t)255)));
		uint8_t L_16 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_9);
		int32_t L_17 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_16, 1))&((int32_t)255)));
		uint8_t L_18 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_8^(int32_t)L_18)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___P_2;
		uint8_t L_20 = __this->___x4_10;
		uint8_t L_21 = __this->___x3_9;
		NullCheck(L_19);
		int32_t L_22 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)L_21))&((int32_t)255)));
		uint8_t L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		__this->___x4_10 = L_23;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___P_2;
		uint8_t L_25 = __this->___x3_9;
		uint8_t L_26 = __this->___x2_8;
		NullCheck(L_24);
		int32_t L_27 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)L_26))&((int32_t)255)));
		uint8_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		__this->___x3_9 = L_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___P_2;
		uint8_t L_30 = __this->___x2_8;
		uint8_t L_31 = __this->___x1_7;
		NullCheck(L_29);
		int32_t L_32 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)L_31))&((int32_t)255)));
		uint8_t L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		__this->___x2_8 = L_33;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___P_2;
		uint8_t L_35 = __this->___x1_7;
		uint8_t L_36 = __this->___s_3;
		uint8_t L_37 = V_0;
		NullCheck(L_34);
		int32_t L_38 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)L_36)), (int32_t)L_37))&((int32_t)255)));
		uint8_t L_39 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		__this->___x1_7 = L_39;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = __this->___T_4;
		uint8_t L_41 = __this->___g_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = __this->___T_4;
		uint8_t L_43 = __this->___g_0;
		NullCheck(L_42);
		int32_t L_44 = ((int32_t)((int32_t)L_43&((int32_t)31)));
		uint8_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		uint8_t L_46 = __this->___x1_7;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_41&((int32_t)31)))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_45^(int32_t)L_46))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___T_4;
		uint8_t L_48 = __this->___g_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = __this->___T_4;
		uint8_t L_50 = __this->___g_0;
		NullCheck(L_49);
		int32_t L_51 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_50, 1))&((int32_t)31)));
		uint8_t L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		uint8_t L_53 = __this->___x2_8;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_48, 1))&((int32_t)31)))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_52^(int32_t)L_53))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = __this->___T_4;
		uint8_t L_55 = __this->___g_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = __this->___T_4;
		uint8_t L_57 = __this->___g_0;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_57, 2))&((int32_t)31)));
		uint8_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		uint8_t L_60 = __this->___x3_9;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_55, 2))&((int32_t)31)))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_59^(int32_t)L_60))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = __this->___T_4;
		uint8_t L_62 = __this->___g_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63 = __this->___T_4;
		uint8_t L_64 = __this->___g_0;
		NullCheck(L_63);
		int32_t L_65 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_64, 3))&((int32_t)31)));
		uint8_t L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		uint8_t L_67 = __this->___x4_10;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_62, 3))&((int32_t)31)))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_66^(int32_t)L_67))));
		uint8_t L_68 = __this->___g_0;
		__this->___g_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_68, 4))&((int32_t)31))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = __this->___P_2;
		uint8_t L_70 = __this->___n_1;
		NullCheck(L_69);
		int32_t L_71 = ((int32_t)((int32_t)L_70&((int32_t)255)));
		uint8_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		V_1 = L_72;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = __this->___P_2;
		uint8_t L_74 = __this->___n_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = __this->___P_2;
		uint8_t L_76 = __this->___s_3;
		NullCheck(L_75);
		int32_t L_77 = ((int32_t)((int32_t)L_76&((int32_t)255)));
		uint8_t L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_74&((int32_t)255)))), (uint8_t)L_78);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = __this->___P_2;
		uint8_t L_80 = __this->___s_3;
		uint8_t L_81 = V_1;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_80&((int32_t)255)))), (uint8_t)L_81);
		uint8_t L_82 = __this->___n_1;
		__this->___n_1 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_82, 1))&((int32_t)255))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.VmpcMac::BlockUpdate(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcMac_BlockUpdate_m6EAB637B2E0E5772F6C1AF49488933A93FEFF35A (VmpcMac_t16974E2BD73719C7204F28641E8B32E8CD49FEC6* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_len, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_inOff;
		int32_t L_1 = ___2_len;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_input;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, L_1))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC* L_3 = (DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataLengthException_tF37901ABEDFBD7AD4D8F62E46FCE4B4BA5CAF4CC_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		DataLengthException__ctor_m868E7880BA2E5DA43D41F3A8E1D662807BA2FCB2(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VmpcMac_BlockUpdate_m6EAB637B2E0E5772F6C1AF49488933A93FEFF35A_RuntimeMethod_var)));
	}

IL_0013:
	{
		V_0 = 0;
		goto IL_0026;
	}

IL_0017:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_input;
		int32_t L_5 = ___1_inOff;
		int32_t L_6 = V_0;
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		VirtualActionInvoker1< uint8_t >::Invoke(16 /* System.Void Org.BouncyCastle.Crypto.Macs.VmpcMac::Update(System.Byte) */, __this, L_8);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0026:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___2_len;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0017;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Macs.VmpcMac::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcMac__ctor_m854AA3918163F046E47A27860C1623A86FE1D164 (VmpcMac_t16974E2BD73719C7204F28641E8B32E8CD49FEC6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Org.BouncyCastle.Crypto.IO.CipherStream::.ctor(System.IO.Stream,Org.BouncyCastle.Crypto.IBufferedCipher,Org.BouncyCastle.Crypto.IBufferedCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherStream__ctor_m47C6804F16980BF322DBE0533A536ABA3CF27CE2 (CipherStream_t6FB015ADC43BBA71B75FF9A76BF776709B28CA78* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_stream, RuntimeObject* ___1_readCipher, RuntimeObject* ___2_writeCipher, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_il2cpp_TypeInfo_var);
		Stream__ctor_mE8B074A0EBEB026FFF14062AB4B8A78E17EFFBF0(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_stream;
		__this->___stream_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stream_4), (void*)L_0);
		RuntimeObject* L_1 = ___1_readCipher;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_2 = ___1_readCipher;
		__this->___inCipher_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inCipher_5), (void*)L_2);
		__this->___mInBuf_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mInBuf_7), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
	}

IL_001e:
	{
		RuntimeObject* L_3 = ___2_writeCipher;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_4 = ___2_writeCipher;
		__this->___outCipher_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___outCipher_6), (void*)L_4);
	}

IL_0028:
	{
		return;
	}
}
// Org.BouncyCastle.Crypto.IBufferedCipher Org.BouncyCastle.Crypto.IO.CipherStream::get_ReadCipher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CipherStream_get_ReadCipher_m7F110DE63804EAA84CECE550273125AB1CD37BAE (CipherStream_t6FB015ADC43BBA71B75FF9A76BF776709B28CA78* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___inCipher_5;
		return L_0;
	}
}
// Org.BouncyCastle.Crypto.IBufferedCipher Org.BouncyCastle.Crypto.IO.CipherStream::get_WriteCipher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CipherStream_get_WriteCipher_m588CB6D32B0B58BE2E601FF06E2E3E453E435577 (CipherStream_t6FB015ADC43BBA71B75FF9A76BF776709B28CA78* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___outCipher_6;
		return L_0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.IO.CipherStream::ReadByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CipherStream_ReadByte_mC1EB339D7166430C448DBF9A6D7DD1CAFED942FD (CipherStream_t6FB015ADC43BBA71B75FF9A76BF776709B28CA78* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->___inCipher_5;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___stream_4;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(36 /* System.Int32 System.IO.Stream::ReadByte() */, L_1);
		return L_2;
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___mInBuf_7;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4 = __this->___mInPos_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___mInBuf_7;
		NullCheck(L_5);
		if ((((int32_t)L_4) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_0036;
		}
	}

IL_002c:
	{
		bool L_6;
		L_6 = CipherStream_FillInBuf_mA8C8EA9DF906D225302052CEDA51D5FBB15BBD7A(__this, NULL);
		if (L_6)
		{
			goto IL_0036;
		}
	}
	{
		return (-1);
	}

IL_0036:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___mInBuf_7;
		int32_t L_8 = __this->___mInPos_8;
		V_0 = L_8;
		int32_t L_9 = V_0;
		__this->___mInPos_8 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		int32_t L_10 = V_0;
		NullCheck(L_7);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		return L_12;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.IO.CipherStream::Read(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CipherStream_Read_m9A15A0A79304E3AB8E30D65AE0C61941E6BEABAB (CipherStream_t6FB015ADC43BBA71B75FF9A76BF776709B28CA78* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->___inCipher_5;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___stream_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_buffer;
		int32_t L_3 = ___1_offset;
		int32_t L_4 = ___2_count;
		NullCheck(L_1);
		int32_t L_5;
		L_5 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, L_3, L_4);
		return L_5;
	}

IL_0017:
	{
		V_0 = 0;
		goto IL_007b;
	}

IL_001b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___mInBuf_7;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = __this->___mInPos_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___mInBuf_7;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_003b;
		}
	}

IL_0033:
	{
		bool L_9;
		L_9 = CipherStream_FillInBuf_mA8C8EA9DF906D225302052CEDA51D5FBB15BBD7A(__this, NULL);
		if (!L_9)
		{
			goto IL_007f;
		}
	}

IL_003b:
	{
		int32_t L_10 = ___2_count;
		int32_t L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___mInBuf_7;
		NullCheck(L_12);
		int32_t L_13 = __this->___mInPos_8;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_subtract(L_10, L_11)), ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		V_1 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___mInBuf_7;
		int32_t L_16 = __this->___mInPos_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___0_buffer;
		int32_t L_18 = ___1_offset;
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, L_16, (RuntimeArray*)L_17, ((int32_t)il2cpp_codegen_add(L_18, L_19)), L_20, NULL);
		int32_t L_21 = __this->___mInPos_8;
		int32_t L_22 = V_1;
		__this->___mInPos_8 = ((int32_t)il2cpp_codegen_add(L_21, L_22));
		int32_t L_23 = V_0;
		int32_t L_24 = V_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_23, L_24));
	}

IL_007b:
	{
		int32_t L_25 = V_0;
		int32_t L_26 = ___2_count;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_001b;
		}
	}

IL_007f:
	{
		int32_t L_27 = V_0;
		return L_27;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.IO.CipherStream::FillInBuf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CipherStream_FillInBuf_mA8C8EA9DF906D225302052CEDA51D5FBB15BBD7A (CipherStream_t6FB015ADC43BBA71B75FF9A76BF776709B28CA78* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___inStreamEnded_9;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		__this->___mInPos_8 = 0;
	}

IL_0011:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = CipherStream_ReadAndProcessBlock_m5CBAF2A24534309607752E85F873E46C5270CD42(__this, NULL);
		__this->___mInBuf_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mInBuf_7), (void*)L_1);
		bool L_2 = __this->___inStreamEnded_9;
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___mInBuf_7;
		if (!L_3)
		{
			goto IL_0011;
		}
	}

IL_002d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___mInBuf_7;
		return (bool)((!(((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.IO.CipherStream::ReadAndProcessBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CipherStream_ReadAndProcessBlock_m5CBAF2A24534309607752E85F873E46C5270CD42 (CipherStream_t6FB015ADC43BBA71B75FF9A76BF776709B28CA78* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t G_B3_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B10_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___inCipher_5;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IBufferedCipher::GetBlockSize() */, IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = V_0;
		G_B3_0 = L_3;
		goto IL_0017;
	}

IL_0012:
	{
		G_B3_0 = ((int32_t)256);
	}

IL_0017:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)G_B3_0);
		V_1 = L_4;
		V_2 = 0;
	}

IL_001f:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = __this->___stream_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_1;
		int32_t L_7 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = V_2;
		NullCheck(L_5);
		int32_t L_10;
		L_10 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(34 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)));
		V_4 = L_10;
		int32_t L_11 = V_4;
		if ((((int32_t)L_11) >= ((int32_t)1)))
		{
			goto IL_0041;
		}
	}
	{
		__this->___inStreamEnded_9 = (bool)1;
		goto IL_004c;
	}

IL_0041:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = V_4;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, L_13));
		int32_t L_14 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_1;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_001f;
		}
	}

IL_004c:
	{
		bool L_16 = __this->___inStreamEnded_9;
		if (L_16)
		{
			goto IL_0062;
		}
	}
	{
		RuntimeObject* L_17 = __this->___inCipher_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		NullCheck(L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
		L_19 = InterfaceFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(7 /* System.Byte[] Org.BouncyCastle.Crypto.IBufferedCipher::ProcessBytes(System.Byte[]) */, IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292_il2cpp_TypeInfo_var, L_17, L_18);
		G_B10_0 = L_19;
		goto IL_0070;
	}

IL_0062:
	{
		RuntimeObject* L_20 = __this->___inCipher_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_1;
		int32_t L_22 = V_2;
		NullCheck(L_20);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = InterfaceFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(13 /* System.Byte[] Org.BouncyCastle.Crypto.IBufferedCipher::DoFinal(System.Byte[],System.Int32,System.Int32) */, IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292_il2cpp_TypeInfo_var, L_20, L_21, 0, L_22);
		G_B10_0 = L_23;
	}

IL_0070:
	{
		V_3 = G_B10_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_3;
		if (!L_24)
		{
			goto IL_007a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_3;
		NullCheck(L_25);
		if ((((RuntimeArray*)L_25)->max_length))
		{
			goto IL_007a;
		}
	}
	{
		V_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_007a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_3;
		return L_26;
	}
}
// System.Void Org.BouncyCastle.Crypto.IO.CipherStream::Write(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherStream_Write_m0E2B63F0C0FC64635EE36FA58F7DB914F1C56421 (CipherStream_t6FB015ADC43BBA71B75FF9A76BF776709B28CA78* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___outCipher_6;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___stream_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_buffer;
		int32_t L_3 = ___1_offset;
		int32_t L_4 = ___2_count;
		NullCheck(L_1);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, L_3, L_4);
		return;
	}

IL_0017:
	{
		RuntimeObject* L_5 = __this->___outCipher_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
		int32_t L_7 = ___1_offset;
		int32_t L_8 = ___2_count;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = InterfaceFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(8 /* System.Byte[] Org.BouncyCastle.Crypto.IBufferedCipher::ProcessBytes(System.Byte[],System.Int32,System.Int32) */, IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292_il2cpp_TypeInfo_var, L_5, L_6, L_7, L_8);
		V_0 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		if (!L_10)
		{
			goto IL_0039;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_11 = __this->___stream_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		NullCheck(L_13);
		NullCheck(L_11);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_11, L_12, 0, ((int32_t)(((RuntimeArray*)L_13)->max_length)));
	}

IL_0039:
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.IO.CipherStream::WriteByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherStream_WriteByte_m12E4B229C076DC4FFB3D11C8918E7569F209CE86 (CipherStream_t6FB015ADC43BBA71B75FF9A76BF776709B28CA78* __this, uint8_t ___0_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___outCipher_6;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->___stream_4;
		uint8_t L_2 = ___0_b;
		NullCheck(L_1);
		VirtualActionInvoker1< uint8_t >::Invoke(39 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_1, L_2);
		return;
	}

IL_0015:
	{
		RuntimeObject* L_3 = __this->___outCipher_6;
		uint8_t L_4 = ___0_b;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = InterfaceFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, uint8_t >::Invoke(5 /* System.Byte[] Org.BouncyCastle.Crypto.IBufferedCipher::ProcessByte(System.Byte) */, IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292_il2cpp_TypeInfo_var, L_3, L_4);
		V_0 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = __this->___stream_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		NullCheck(L_7);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, ((int32_t)(((RuntimeArray*)L_9)->max_length)));
	}

IL_0035:
	{
		return;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.IO.CipherStream::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CipherStream_get_CanRead_mB290076C5F37EC0026A3C69EA865A57D0B3467F6 (CipherStream_t6FB015ADC43BBA71B75FF9A76BF776709B28CA78* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___stream_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanRead() */, L_0);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_2 = __this->___inCipher_5;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.IO.CipherStream::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CipherStream_get_CanWrite_mB3AC87A19BD59650A54E3B86C1102E25F88FDC61 (CipherStream_t6FB015ADC43BBA71B75FF9A76BF776709B28CA78* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___stream_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(11 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_0);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_2 = __this->___outCipher_6;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_2) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.IO.CipherStream::get_CanSeek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CipherStream_get_CanSeek_mFD1B269E4D678D5F928E83ABA760E259968236E7 (CipherStream_t6FB015ADC43BBA71B75FF9A76BF776709B28CA78* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int64 Org.BouncyCastle.Crypto.IO.CipherStream::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CipherStream_get_Length_m82D132B1270AE2A5928B88E18BAAE1E048FEF575 (CipherStream_t6FB015ADC43BBA71B75FF9A76BF776709B28CA78* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CipherStream_get_Length_m82D132B1270AE2A5928B88E18BAAE1E048FEF575_RuntimeMethod_var)));
	}
}
// System.Int64 Org.BouncyCastle.Crypto.IO.CipherStream::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CipherStream_get_Position_mC0B11B86F1C918382B8CEA0892FE5798786664BF (CipherStream_t6FB015ADC43BBA71B75FF9A76BF776709B28CA78* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CipherStream_get_Position_mC0B11B86F1C918382B8CEA0892FE5798786664BF_RuntimeMethod_var)));
	}
}
// System.Void Org.BouncyCastle.Crypto.IO.CipherStream::set_Position(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherStream_set_Position_m2B7FB08F0E58673439AEC3F603EC7A915A011AEC (CipherStream_t6FB015ADC43BBA71B75FF9A76BF776709B28CA78* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CipherStream_set_Position_m2B7FB08F0E58673439AEC3F603EC7A915A011AEC_RuntimeMethod_var)));
	}
}
// System.Void Org.BouncyCastle.Crypto.IO.CipherStream::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherStream_Dispose_m81C00F607CD85004C800269CCF16655EDCFED204 (CipherStream_t6FB015ADC43BBA71B75FF9A76BF776709B28CA78* __this, bool ___0_disposing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		bool L_0 = ___0_disposing;
		if (!L_0)
		{
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_1 = __this->___outCipher_6;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_2 = __this->___outCipher_6;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = InterfaceFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Byte[] Org.BouncyCastle.Crypto.IBufferedCipher::DoFinal() */, IBufferedCipher_tC1E0989E87DB9C6304BA38352D01CEBCA7135292_il2cpp_TypeInfo_var, L_2);
		V_0 = L_3;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = __this->___stream_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_6);
		NullCheck(L_4);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(37 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, ((int32_t)(((RuntimeArray*)L_6)->max_length)));
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = __this->___stream_4;
		NullCheck(L_7);
		VirtualActionInvoker0::Invoke(22 /* System.Void System.IO.Stream::Flush() */, L_7);
	}

IL_0032:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = __this->___stream_4;
		il2cpp_codegen_runtime_class_init_inline(Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var);
		Platform_Dispose_m2E991EB894A4FA3C42A995E49F9890E5B0B08CDE(L_8, NULL);
	}

IL_003d:
	{
		bool L_9 = ___0_disposing;
		Stream_Dispose_m9B37BD21A57F8F2BD20EE353DE14405700810C5C(__this, L_9, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.IO.CipherStream::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherStream_Flush_m69C18DB47959BBA5CFB50DF0287FA806A01F84FD (CipherStream_t6FB015ADC43BBA71B75FF9A76BF776709B28CA78* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->___stream_4;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(22 /* System.Void System.IO.Stream::Flush() */, L_0);
		return;
	}
}
// System.Int64 Org.BouncyCastle.Crypto.IO.CipherStream::Seek(System.Int64,System.IO.SeekOrigin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CipherStream_Seek_m99794B7B5D15D0643A80A15DE46334B82A90B526 (CipherStream_t6FB015ADC43BBA71B75FF9A76BF776709B28CA78* __this, int64_t ___0_offset, int32_t ___1_origin, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CipherStream_Seek_m99794B7B5D15D0643A80A15DE46334B82A90B526_RuntimeMethod_var)));
	}
}
// System.Void Org.BouncyCastle.Crypto.IO.CipherStream::SetLength(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CipherStream_SetLength_mC906F81444BF640CECAB040E42A3E098B7931EF8 (CipherStream_t6FB015ADC43BBA71B75FF9A76BF776709B28CA78* __this, int64_t ___0_length, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CipherStream_SetLength_mC906F81444BF640CECAB040E42A3E098B7931EF8_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___parameters_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MacCFBBlockCipher_GetBlockSize_m190699E466D18B71CC3242CE15A3B22F80FA2A2C_inline (MacCFBBlockCipher_t1E8C670F13AC0F2C296FC90B72C10D430707A1ED* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___blockSize_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GcmBlockCipher_GetUnderlyingCipher_mEEF1C6CAB71C34751D1FE22C1F864D383F59A50F_inline (GcmBlockCipher_t05F1189841E713F8542A4407704B9B51D26B23A3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___cipher_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ParametersWithSBox_GetSBox_mE7792E5467EA987BDB4F99A15782F4E6CDB40859_inline (ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___sBox_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithSBox_get_Parameters_mD81DBF1AB7E751D8ACE28E241D0A50E5EC04D7D7_inline (ParametersWithSBox_t6807FCFDE388E7452CA391F23516CC6D6D9CB0F1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___parameters_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SkeinEngine_get_OutputSize_m7B75A727F4C5300C10FEBFBCAEE6E6BBEDC3EF0A_inline (SkeinEngine_tDD6EF6940226648A8787DD345B8F642D9083B3CB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___outputSizeBytes_9;
		return L_0;
	}
}
