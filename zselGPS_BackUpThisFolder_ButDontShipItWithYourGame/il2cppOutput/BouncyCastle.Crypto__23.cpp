#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// Org.BouncyCastle.Math.BigInteger[]
struct BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// Org.BouncyCastle.Asn1.DerObjectIdentifier[]
struct DerObjectIdentifierU5BU5D_t5D61227577C3BB3814DC6B7D30D7C415908301A8;
// Org.BouncyCastle.Math.EC.ECFieldElement[]
struct ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Org.BouncyCastle.Security.SecureRandom[]
struct SecureRandomU5BU5D_t9CDCDE8DC35C008A2EDEA385E2A7FE78B9F9CFF6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// System.Byte[,]
struct ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// Org.BouncyCastle.Asn1.Asn1OctetString
struct Asn1OctetString_t7BECD15DD6B253DA18A4F62F86D7BE4815EDBA86;
// Org.BouncyCastle.Crypto.AsymmetricKeyParameter
struct AsymmetricKeyParameter_tA5D2359A65E6D2862EC9B31F64730CA7A117109A;
// Org.BouncyCastle.Math.BigInteger
struct BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12;
// Org.BouncyCastle.Crypto.EC.CustomNamedCurves
struct CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96;
// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC;
// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0;
// Org.BouncyCastle.Math.EC.Endo.ECEndomorphism
struct ECEndomorphism_tC5A1FB7591D557A4183DF341343D07578B17C484;
// Org.BouncyCastle.Math.EC.ECFieldElement
struct ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F;
// Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier
struct ECMultiplier_tCD1F45EE7084B55F6FB7A8C0E0DB2CCBE0E8DF19;
// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70;
// Org.BouncyCastle.Math.EC.ECPointMap
struct ECPointMap_t7AE183EBB2029035F8CDC9062C46D9A526F942AD;
// Org.BouncyCastle.Utilities.Collections.EnumerableProxy
struct EnumerableProxy_tF96BE797C0C85614DD7CA44F9F78BB8F09CCF3BE;
// Org.BouncyCastle.Math.EC.Endo.GlvTypeBEndomorphism
struct GlvTypeBEndomorphism_t1B1D78DB77BC16B0939641F401E31106099E52EC;
// Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters
struct GlvTypeBParameters_tA2BFD2238E017AD101E59544E6EE92EC06179AEB;
// Org.BouncyCastle.Crypto.IAsymmetricBlockCipher
struct IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC;
// Org.BouncyCastle.Crypto.ICipherParameters
struct ICipherParameters_tE4751F03244264E12A0669633A68076FD032E2CF;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Org.BouncyCastle.Crypto.IDigest
struct IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// Org.BouncyCastle.Math.Field.IFiniteField
struct IFiniteField_t39CD6F3BBF217B04350EEF19B5DA180A4C62EA56;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// Org.BouncyCastle.Crypto.Prng.IRandomGenerator
struct IRandomGenerator_t50CA6B7268CF1B6ED0762EB5808373C32743C8F1;
// Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding
struct ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC;
// Org.BouncyCastle.Crypto.InvalidCipherTextException
struct InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC;
// Org.BouncyCastle.Crypto.Encodings.OaepEncoding
struct OaepEncoding_tA46EB59C382F7748F9052C3127712089E211D3D5;
// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV
struct ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1;
// Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom
struct ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5;
// Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding
struct Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8;
// Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters
struct RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Org.BouncyCastle.Crypto.Engines.Salsa20Engine
struct Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4;
// Org.BouncyCastle.Math.EC.Endo.ScalarSplitParameters
struct ScalarSplitParameters_t0CCEBA9B80B3C9B7BF9C901FAD6B0D63C33A6F28;
// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076;
// Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
struct SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0;
// Org.BouncyCastle.Crypto.Digests.Sha1Digest
struct Sha1Digest_tC8861FE4F42B403ECE6991A7D168F82E0427C0DA;
// System.String
struct String_t;
// Org.BouncyCastle.Crypto.Engines.TnepresEngine
struct TnepresEngine_tB2063E257FDB18D464780C832450C7244D433DFC;
// Org.BouncyCastle.Crypto.Engines.TwofishEngine
struct TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C;
// Org.BouncyCastle.Crypto.Engines.VmpcEngine
struct VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF;
// Org.BouncyCastle.Crypto.Engines.VmpcKsa3Engine
struct VmpcKsa3Engine_t6B40A255ABBC4585FD23E3EB9A16329F6CB62C76;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Org.BouncyCastle.Asn1.X9.X9ECParameters
struct X9ECParameters_tA38EBA48073F91FDA9CF46ED605B02A1EB1F8B5A;
// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder
struct X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100;
// Org.BouncyCastle.Asn1.X9.X9ECPoint
struct X9ECPoint_tE24AC28576C4C41CAA3A4373C00FB1486ACF83F4;
// Org.BouncyCastle.Asn1.X9.X9FieldID
struct X9FieldID_tB255CB73D8980FFE1312D42243EA1A96543C2D35;
// Org.BouncyCastle.Crypto.Engines.XSalsa20Engine
struct XSalsa20Engine_tDF36BD3BD165A1B1D6E28DFE5D17C69A072F5EDD;
// Org.BouncyCastle.Crypto.Engines.XteaEngine
struct XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1;
// Org.BouncyCastle.Math.EC.ECCurve/Config
struct Config_tD12AA93D54F452B9AFEA0D10600F2AA24691AE75;
// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish1024Cipher
struct Threefish1024Cipher_t56D2C1AB2ED3A65A7E1F23EAE08F5EF51E25CC0E;
// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher
struct Threefish512Cipher_tE02AA413DEC2B3FA789F12AF89E596A009794B8D;
// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher
struct ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsymmetricKeyParameter_tA5D2359A65E6D2862EC9B31F64730CA7A117109A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Curve25519Holder_tF39AA971A231CB4B4CC413DFD910BE7A9D6B92B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumerableProxy_tF96BE797C0C85614DD7CA44F9F78BB8F09CCF3BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GMObjectIdentifiers_t13F9571874C97A1CEB1C2CCEF5295838CF708CBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlvTypeBEndomorphism_t1B1D78DB77BC16B0939641F401E31106099E52EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hex_t7457F6D4DC900156C750BB04D59F8D3B4428F060_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SM2P256V1Holder_t485E648CA73ACBF012BAC2A3FB9185AAF291EE4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecP128R1Holder_tA26EA6A7F7A8FB4774FC64750C08FAEFDD9AED9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecP160K1Holder_t17AB4CB4A638430E69B7DEABAD836AFAEA99DA58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecP160R1Holder_t28F24C382550802EE80D38240B51B160F0673BF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecP160R2Holder_t618B185F8B23E4518496A22BEBE5CF596AB09AF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecP192K1Holder_tBF29D835BDE49D97B34171CCA93209150E059C20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecP192R1Holder_tC182C6696165A12F7271D5D4FD01B8FBB0E396A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecP224K1Holder_t39350033689D077BDD1E2D04C47B1A0A3BEAD101_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecP224R1Holder_tD102A567AC29704B9A9BCA9ED70E27FED1CC72CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecP256K1Holder_t9F128F0E30C4420C583BF0A2953B1939E8865F00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecP256R1Holder_t39F733AB96E0C335A3D5E0C4249279E90BA5D77D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecP384R1Holder_t49D312BC73EAEC9F7E38EC859EF04D32F0A9102D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecP521R1Holder_tA0DCFED9DC7186346D0B1C1C603939F4A48835C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecT113R1Holder_t6BF6AC593665AE34156F631E30A610C546CF25FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecT113R2Holder_t470C28BB2C7522C7F30267132861CC1817B7EF6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecT131R1Holder_tD2DC2E3F0946730FC0064A1BE2BDDD1A031D40AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecT131R2Holder_t1DCD22AC2C6E92A73AD9F174516DB11A1E33372C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecT163K1Holder_t2394C1DCF3CD497996820DC11A4F76654CF7ED90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecT163R1Holder_t8BC3DCEA44BA53C630FA2416A43FBB6D3FA2191C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecT163R2Holder_t77955560C48EF15E97EF7D76F23BAAEE93DE5CD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecT193R1Holder_tA0CBD4683C1FEBE468B9AB1FDCF5D1A3C887BA12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecT193R2Holder_t479127B795F2927BCEE50E643E8AEE4DD57F1781_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecT233K1Holder_tD8B6FE5965F7160EC7829DBA6A2D6D63B6DF5309_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecT233R1Holder_t485B464B1C06FB829B23B6D9AF1F11921DCDCE54_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecT239K1Holder_tE2B4C933670F696ED4E23FC4B4D54A053487063B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecT283K1Holder_tFF0B62B99828A0101433D8282426F36C360E739F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecT283R1Holder_t8015A02A2E52A52BCA84606F14469B1A1D2F8640_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecT409K1Holder_tC8EE4A638C25C207D13D517C2AF89B7DB04E7359_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecT409R1Holder_t44E628CFA24F1197D5FC34E865C467A69F791A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecT571K1Holder_t0BD1A2D2C8502E8153E4B11B49BDD0D9766D7BF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecT571R1Holder_tCD797766DDE48158A3A9172D9F509D2F9F4EC755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sha1Digest_tC8861FE4F42B403ECE6991A7D168F82E0427C0DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WNafUtilities_t78832ACD19F88921A67F67B8B012C41794A27657_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X9ECPoint_tE24AC28576C4C41CAA3A4373C00FB1486ACF83F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____712618256BB5287925AAF70FA8EA2EBFFB72DF72B5D29A339CC9B8DB464EFC14_121_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____7919EF601386C08FC5EFB981B4A1E478D8413596173FC159B15739E87EE1BA50_130_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____A80010A555E14F5B5B3D967E0F1621742AC2048F40EBF73EB76AD8991448EE21_185_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00731C2C86C2D15B58ED9A20890E494DBD2AC58B;
IL2CPP_EXTERN_C String_t* _stringLiteral101B3C75A51196AFDCA86EB43BB5855E80AA199D;
IL2CPP_EXTERN_C String_t* _stringLiteral106CA6D4E30D25D2B2EAFADF9BE9BC07FDD3AF5A;
IL2CPP_EXTERN_C String_t* _stringLiteral121C4C482521BAC60D9843CA1C2EC60228CD0E04;
IL2CPP_EXTERN_C String_t* _stringLiteral14B0A532250BF0860700A7A9315ACC3640CBADAE;
IL2CPP_EXTERN_C String_t* _stringLiteral14CEE6733903CF095F0E2144576E08E2EABC9277;
IL2CPP_EXTERN_C String_t* _stringLiteral1599555C091EE02EB53958FBBB14EE6BC93EB040;
IL2CPP_EXTERN_C String_t* _stringLiteral1901531392D4D06B4EAE345EA607F19497305607;
IL2CPP_EXTERN_C String_t* _stringLiteral190F59210696C8475CFA176585CFF1622879DBE1;
IL2CPP_EXTERN_C String_t* _stringLiteral20F8D13FB02603A64C6EFA3BAB77505EA82A0329;
IL2CPP_EXTERN_C String_t* _stringLiteral24A57AFC86DFC2F917FB3184B090926214BB2C69;
IL2CPP_EXTERN_C String_t* _stringLiteral28CFD4B42FAC205F7F948E0DAF4E1297B574750E;
IL2CPP_EXTERN_C String_t* _stringLiteral293FFD890AB5C4872D2545D031F6CB01D4B06A77;
IL2CPP_EXTERN_C String_t* _stringLiteral294687797ABDD257E21658BA5C1227138C09DD53;
IL2CPP_EXTERN_C String_t* _stringLiteral295D64C15805E8B87DE6268E6C208DC097900D16;
IL2CPP_EXTERN_C String_t* _stringLiteral2F7BF7401F3F7A3BA05C7AA32544809B4FB2BD98;
IL2CPP_EXTERN_C String_t* _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2;
IL2CPP_EXTERN_C String_t* _stringLiteral317820C53E8C96F3F3CB5EBCBC64786D3085C97D;
IL2CPP_EXTERN_C String_t* _stringLiteral33C188DAF3C5E4DE065FAE37222A765402587199;
IL2CPP_EXTERN_C String_t* _stringLiteral3B15D43C3C3CF7810D1DB4600E3558EA56F61F8D;
IL2CPP_EXTERN_C String_t* _stringLiteral424361A636835E34F0B2F9CACA7AA037448A4A44;
IL2CPP_EXTERN_C String_t* _stringLiteral4690523A3F07C01F5A658C98771DE79551536F47;
IL2CPP_EXTERN_C String_t* _stringLiteral47D20EC1D621302B327F8DA26CCC5372F970DFB8;
IL2CPP_EXTERN_C String_t* _stringLiteral50A9CE486E3E9EFF76FBCA6538E018EA3EFFEE43;
IL2CPP_EXTERN_C String_t* _stringLiteral5532FE05AC1F9905E82EA8B3069C706903FBC6C7;
IL2CPP_EXTERN_C String_t* _stringLiteral56D52AD282DBCFB2D99151E8DB5A2E4598834384;
IL2CPP_EXTERN_C String_t* _stringLiteral5CF8F317A0F31BCFFA61870265D17E1F64F60FC4;
IL2CPP_EXTERN_C String_t* _stringLiteral5F1F4A58853B31A2075544F5A704FD9361EB7986;
IL2CPP_EXTERN_C String_t* _stringLiteral601CCA376E46978BDEF3632F3CF3209C7891C382;
IL2CPP_EXTERN_C String_t* _stringLiteral6A8BA3A091AD02088C20BEFFA94C01D62506011C;
IL2CPP_EXTERN_C String_t* _stringLiteral6C5080960E62793E72538806C84DA62D6AA21637;
IL2CPP_EXTERN_C String_t* _stringLiteral6E604500859D71B2446831C6C20E2386D5D259EF;
IL2CPP_EXTERN_C String_t* _stringLiteral6FE897253FBE41D1812A828E7F9FBC1C263A7EBE;
IL2CPP_EXTERN_C String_t* _stringLiteral7187EE2A7EE264D8D5ED3324026616F1451B1256;
IL2CPP_EXTERN_C String_t* _stringLiteral7456ED91E9BFF169E541673E536CBC66656AE3DD;
IL2CPP_EXTERN_C String_t* _stringLiteral78DCF8BE751904E2F2302AEBBAF7BA625943E2EB;
IL2CPP_EXTERN_C String_t* _stringLiteral7B6830563CB740F590BA73639EE340CD8924E7BC;
IL2CPP_EXTERN_C String_t* _stringLiteral7FF13600614C606C2C24DA56CFA5376483D30C59;
IL2CPP_EXTERN_C String_t* _stringLiteral83298FB9C35B736FC1AE3C68DC4C4157F50AD0C4;
IL2CPP_EXTERN_C String_t* _stringLiteral884724CC95307DD596874FA08EE010892E4A183C;
IL2CPP_EXTERN_C String_t* _stringLiteral8A935BC163FB7C550742399792C4D1966C3E2AF4;
IL2CPP_EXTERN_C String_t* _stringLiteral8D4D325381C1A11D3538AD29D1B428BAF343DFF1;
IL2CPP_EXTERN_C String_t* _stringLiteral911B4A1FDE26660B4A0334FB33921AFC19DA7953;
IL2CPP_EXTERN_C String_t* _stringLiteral9369C15741F567CCB187EBA6138866E39B755551;
IL2CPP_EXTERN_C String_t* _stringLiteral9C5C06DB877BD7B3274BB146538D0362FDA80644;
IL2CPP_EXTERN_C String_t* _stringLiteralA344F15495B254FE3D4B9C07925DDD4CC039D78E;
IL2CPP_EXTERN_C String_t* _stringLiteralA345B47042D46E66AF27151C921F5ED266CD400D;
IL2CPP_EXTERN_C String_t* _stringLiteralA5EACAA5F8AC837043324C9FFCB5A5E9941B2DEF;
IL2CPP_EXTERN_C String_t* _stringLiteralA6FA674D84149E00E1BD5050C2D218560759D2E2;
IL2CPP_EXTERN_C String_t* _stringLiteralAB30661A27320A92CF3AB0B7CB38F153F4CED107;
IL2CPP_EXTERN_C String_t* _stringLiteralABB62B8930F03CF00DE8D94D913ACB908E73A303;
IL2CPP_EXTERN_C String_t* _stringLiteralACB9A1832D3C353D963D539E4EC52CD3E7916B78;
IL2CPP_EXTERN_C String_t* _stringLiteralB2CAB479468CF767096ACC4632C28817AA097913;
IL2CPP_EXTERN_C String_t* _stringLiteralB49DFC1F57BC99FD5BB3C405A05DE58592B829CD;
IL2CPP_EXTERN_C String_t* _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED;
IL2CPP_EXTERN_C String_t* _stringLiteralB60D7472B47218394A8509E3F4E1C6290B4A5CE2;
IL2CPP_EXTERN_C String_t* _stringLiteralB6317D9BDEAB95DE0D033C96F2C144B408D15A4E;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB864FA713E0DCD2132FFDF2E1F4113DC6243B5A5;
IL2CPP_EXTERN_C String_t* _stringLiteralBA7BCF9AE5E78AB0B6EC8121BFF8B61517C067E0;
IL2CPP_EXTERN_C String_t* _stringLiteralBD8359A08BF3AE7D4D96436F5EBC8ABFC50B22EA;
IL2CPP_EXTERN_C String_t* _stringLiteralBF289442F665D0D89080A24EA187093A102B47B8;
IL2CPP_EXTERN_C String_t* _stringLiteralC0C69B3D70DB13EA1E9F81C663CDCE39841EEDDC;
IL2CPP_EXTERN_C String_t* _stringLiteralC639AC33D2C568FE3314FD6510EE9F098A831841;
IL2CPP_EXTERN_C String_t* _stringLiteralC799D0BEAEC3053C515C6ECC0DAACA1AD760976D;
IL2CPP_EXTERN_C String_t* _stringLiteralC89858D824AC4A3F2216B74EEFEA4A867D131078;
IL2CPP_EXTERN_C String_t* _stringLiteralCA3EDAE8181D1A67857C59386CF03AAF007C8ABA;
IL2CPP_EXTERN_C String_t* _stringLiteralCB879F2EF65B4665A454CC69D72CFC0D331A9EB0;
IL2CPP_EXTERN_C String_t* _stringLiteralD187D665853B8D7EA2432DDF6CBF2E65DC3BA81D;
IL2CPP_EXTERN_C String_t* _stringLiteralD70C4DD1CFCAE3F5B82091C96D28299660AAE0C9;
IL2CPP_EXTERN_C String_t* _stringLiteralD744D02E9F69554C563F58496A5C08C4A6486D26;
IL2CPP_EXTERN_C String_t* _stringLiteralD7E72730072DA8AB8DE547875E5CAA08AC56C08E;
IL2CPP_EXTERN_C String_t* _stringLiteralD9A6748424872C8784852D78F7DD2DE942822C95;
IL2CPP_EXTERN_C String_t* _stringLiteralE2748C15A306B030A614C7A2C0345FF6B7157B31;
IL2CPP_EXTERN_C String_t* _stringLiteralE3707C5C43B4ABE6AA51AD5AAC5543F6F46FAFB2;
IL2CPP_EXTERN_C String_t* _stringLiteralE61A524EA8F45BE850EE16F02879615EBF327FD4;
IL2CPP_EXTERN_C String_t* _stringLiteralECAD71D2A48AFE84D642BA9E2C90621A70C4A478;
IL2CPP_EXTERN_C String_t* _stringLiteralECAE2B09CB631781CFCFCD552F2962F20F16EF79;
IL2CPP_EXTERN_C String_t* _stringLiteralEDCB09D2C4DDB18CC9498045EEF5EB7E8BFC5A7C;
IL2CPP_EXTERN_C String_t* _stringLiteralF54C61EA654A453F853B81CE072DEC048FBB4991;
IL2CPP_EXTERN_C String_t* _stringLiteralFAC97F3CD7D12781406344C6B230BE7320057813;
IL2CPP_EXTERN_C String_t* _stringLiteralFD0541DDC28710D257FB999346ED7F8EA302E0A5;
IL2CPP_EXTERN_C String_t* _stringLiteralFECD8400D40388654726CCBD85C70BC0C92155FC;
IL2CPP_EXTERN_C String_t* _stringLiteralFFE75A95B7D3247C2BAC6EA44FC795138FB2A034;
IL2CPP_EXTERN_C const RuntimeMethod* CustomNamedCurves_DefineCurveAlias_m0BF0C0FBC57737045A632CE737D71797583F57A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISO9796d1Encoding_DecodeBlock_m6DCE0AC7024D29BD5656D486E9D8589A6DF08AC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ISO9796d1Encoding_SetPadBits_m7A8D8B05BF8F4A64EC2EE395BB3D3944DE0EA0F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OaepEncoding_DecodeBlock_m61472386EDFD38AC64EBF377F2660A448249520A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pkcs1Encoding_DecodeBlockOrRandom_m5779EEE26B9D654078F9B5B0FAC8E60D28A40EED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pkcs1Encoding_DecodeBlock_m503210F83A364B44C345EDE39A349C60ACB7E0F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pkcs1Encoding_EncodeBlock_m84AD4E676CB86AE6BD9A2B5407A2458DFCB29B7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Pkcs1Encoding_Init_mFC8027BEE643D1CAE7E261697D20568B1F000A06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Threefish1024Cipher_DecryptBlock_m525CF0E616C29474935EB564D2C40F4160C6FF73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Threefish1024Cipher_EncryptBlock_m01621552A0885FD0F7F1326407DA9AE0CBD0181E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Threefish512Cipher_DecryptBlock_m16375AEF72B36D04FB1BDD9F9E888A36CD9952A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Threefish512Cipher_EncryptBlock_m64CDF8986D9CB209B4DAE4F040CE9DC8495D54FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TnepresEngine_MakeWorkingKey_m04D37ACB002CEAF725D20DACFCED267EC5FD4425_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TwofishEngine_Init_mDFCA39C40CD778FDE3C80054A7DD3515E55A6406_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TwofishEngine_ProcessBlock_m79AEAA7D729BB7F743AD5CE452C1EC6757D8BDB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TwofishEngine_SetKey_mE272A8D0083032E411423BB5EC140A1A77BD1A05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VmpcEngine_Init_mEDF99BE009C242F3F95B9A8E7E57CCC98F8003A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XSalsa20Engine_SetKey_mC4921500383B53B0CC5C3E9B7E0BE0EE67C271FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XteaEngine_Init_mEA7D4FE490AAB2C0510ADC42F12DC53D153150F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XteaEngine_ProcessBlock_mA56C7529E825AE5B9D3E8B955CCC39A6AEB8939E_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Org.BouncyCastle.Asn1.Asn1Encodable
struct Asn1Encodable_tDF4F2E3B3E175A389BAE8B763398B642043D5628  : public RuntimeObject
{
};

// Org.BouncyCastle.Crypto.AsymmetricKeyParameter
struct AsymmetricKeyParameter_tA5D2359A65E6D2862EC9B31F64730CA7A117109A  : public RuntimeObject
{
	// System.Boolean Org.BouncyCastle.Crypto.AsymmetricKeyParameter::privateKey
	bool ___privateKey_0;
};

// Org.BouncyCastle.Math.BigInteger
struct BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12  : public RuntimeObject
{
	// System.Int32[] Org.BouncyCastle.Math.BigInteger::magnitude
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___magnitude_31;
	// System.Int32 Org.BouncyCastle.Math.BigInteger::sign
	int32_t ___sign_32;
	// System.Int32 Org.BouncyCastle.Math.BigInteger::nBits
	int32_t ___nBits_33;
	// System.Int32 Org.BouncyCastle.Math.BigInteger::nBitLength
	int32_t ___nBitLength_34;
	// System.Int32 Org.BouncyCastle.Math.BigInteger::mQuote
	int32_t ___mQuote_35;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves
struct CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96  : public RuntimeObject
{
};

// Org.BouncyCastle.Math.EC.ECCurve
struct ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0  : public RuntimeObject
{
	// Org.BouncyCastle.Math.Field.IFiniteField Org.BouncyCastle.Math.EC.ECCurve::m_field
	RuntimeObject* ___m_field_8;
	// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.ECCurve::m_a
	ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* ___m_a_9;
	// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.ECCurve::m_b
	ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* ___m_b_10;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.ECCurve::m_order
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___m_order_11;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.ECCurve::m_cofactor
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___m_cofactor_12;
	// System.Int32 Org.BouncyCastle.Math.EC.ECCurve::m_coord
	int32_t ___m_coord_13;
	// Org.BouncyCastle.Math.EC.Endo.ECEndomorphism Org.BouncyCastle.Math.EC.ECCurve::m_endomorphism
	RuntimeObject* ___m_endomorphism_14;
	// Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier Org.BouncyCastle.Math.EC.ECCurve::m_multiplier
	RuntimeObject* ___m_multiplier_15;
};

// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70  : public RuntimeObject
{
	// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Math.EC.ECPoint::m_curve
	ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* ___m_curve_1;
	// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.ECPoint::m_x
	ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* ___m_x_2;
	// Org.BouncyCastle.Math.EC.ECFieldElement Org.BouncyCastle.Math.EC.ECPoint::m_y
	ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* ___m_y_3;
	// Org.BouncyCastle.Math.EC.ECFieldElement[] Org.BouncyCastle.Math.EC.ECPoint::m_zs
	ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475* ___m_zs_4;
	// System.Boolean Org.BouncyCastle.Math.EC.ECPoint::m_withCompression
	bool ___m_withCompression_5;
	// System.Collections.IDictionary Org.BouncyCastle.Math.EC.ECPoint::m_preCompTable
	RuntimeObject* ___m_preCompTable_6;
};

// Org.BouncyCastle.Utilities.Collections.EnumerableProxy
struct EnumerableProxy_tF96BE797C0C85614DD7CA44F9F78BB8F09CCF3BE  : public RuntimeObject
{
	// System.Collections.IEnumerable Org.BouncyCastle.Utilities.Collections.EnumerableProxy::inner
	RuntimeObject* ___inner_0;
};

// Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers
struct GMObjectIdentifiers_t13F9571874C97A1CEB1C2CCEF5295838CF708CBD  : public RuntimeObject
{
};

// Org.BouncyCastle.Crypto.Digests.GeneralDigest
struct GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Digests.GeneralDigest::xBuf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___xBuf_1;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.GeneralDigest::xBufOff
	int32_t ___xBufOff_2;
	// System.Int64 Org.BouncyCastle.Crypto.Digests.GeneralDigest::byteCount
	int64_t ___byteCount_3;
};

// Org.BouncyCastle.Math.EC.Endo.GlvTypeBEndomorphism
struct GlvTypeBEndomorphism_t1B1D78DB77BC16B0939641F401E31106099E52EC  : public RuntimeObject
{
	// Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters Org.BouncyCastle.Math.EC.Endo.GlvTypeBEndomorphism::m_parameters
	GlvTypeBParameters_tA2BFD2238E017AD101E59544E6EE92EC06179AEB* ___m_parameters_0;
	// Org.BouncyCastle.Math.EC.ECPointMap Org.BouncyCastle.Math.EC.Endo.GlvTypeBEndomorphism::m_pointMap
	RuntimeObject* ___m_pointMap_1;
};

// Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters
struct GlvTypeBParameters_tA2BFD2238E017AD101E59544E6EE92EC06179AEB  : public RuntimeObject
{
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters::m_beta
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___m_beta_0;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters::m_lambda
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___m_lambda_1;
	// Org.BouncyCastle.Math.EC.Endo.ScalarSplitParameters Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters::m_splitParams
	ScalarSplitParameters_t0CCEBA9B80B3C9B7BF9C901FAD6B0D63C33A6F28* ___m_splitParams_2;
};

// Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding
struct ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.IAsymmetricBlockCipher Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::engine
	RuntimeObject* ___engine_4;
	// System.Boolean Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::forEncryption
	bool ___forEncryption_5;
	// System.Int32 Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::bitSize
	int32_t ___bitSize_6;
	// System.Int32 Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::padBits
	int32_t ___padBits_7;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::modulus
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___modulus_8;
};

// Org.BouncyCastle.Crypto.Parameters.KeyParameter
struct KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KeyParameter::key
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___key_0;
};

// Org.BouncyCastle.Crypto.Encodings.OaepEncoding
struct OaepEncoding_tA46EB59C382F7748F9052C3127712089E211D3D5  : public RuntimeObject
{
	// System.Byte[] Org.BouncyCastle.Crypto.Encodings.OaepEncoding::defHash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___defHash_0;
	// Org.BouncyCastle.Crypto.IDigest Org.BouncyCastle.Crypto.Encodings.OaepEncoding::mgf1Hash
	RuntimeObject* ___mgf1Hash_1;
	// Org.BouncyCastle.Crypto.IAsymmetricBlockCipher Org.BouncyCastle.Crypto.Encodings.OaepEncoding::engine
	RuntimeObject* ___engine_2;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Encodings.OaepEncoding::random
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random_3;
	// System.Boolean Org.BouncyCastle.Crypto.Encodings.OaepEncoding::forEncryption
	bool ___forEncryption_4;
};

// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV
struct ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::parameters
	RuntimeObject* ___parameters_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::iv
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___iv_1;
};

// Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom
struct ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5  : public RuntimeObject
{
	// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom::parameters
	RuntimeObject* ___parameters_0;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom::random
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random_1;
};

// Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding
struct Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8  : public RuntimeObject
{
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::random
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___random_3;
	// Org.BouncyCastle.Crypto.IAsymmetricBlockCipher Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::engine
	RuntimeObject* ___engine_4;
	// System.Boolean Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::forEncryption
	bool ___forEncryption_5;
	// System.Boolean Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::forPrivateKey
	bool ___forPrivateKey_6;
	// System.Boolean Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::useStrictLength
	bool ___useStrictLength_7;
	// System.Int32 Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::pLen
	int32_t ___pLen_8;
	// System.Byte[] Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::fallback
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___fallback_9;
	// System.Byte[] Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::blockBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___blockBuffer_10;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

// Org.BouncyCastle.Crypto.Engines.Salsa20Engine
struct Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4  : public RuntimeObject
{
	// System.Int32 Org.BouncyCastle.Crypto.Engines.Salsa20Engine::rounds
	int32_t ___rounds_5;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.Salsa20Engine::index
	int32_t ___index_6;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.Salsa20Engine::engineState
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___engineState_7;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.Salsa20Engine::x
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x_8;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.Salsa20Engine::keyStream
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyStream_9;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.Salsa20Engine::initialised
	bool ___initialised_10;
	// System.UInt32 Org.BouncyCastle.Crypto.Engines.Salsa20Engine::cW0
	uint32_t ___cW0_11;
	// System.UInt32 Org.BouncyCastle.Crypto.Engines.Salsa20Engine::cW1
	uint32_t ___cW1_12;
	// System.UInt32 Org.BouncyCastle.Crypto.Engines.Salsa20Engine::cW2
	uint32_t ___cW2_13;
};

// Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers
struct SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F  : public RuntimeObject
{
};

// Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
struct SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0  : public RuntimeObject
{
	// System.Boolean Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::encrypting
	bool ___encrypting_3;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::wKey
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___wKey_4;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::X0
	int32_t ___X0_5;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::X1
	int32_t ___X1_6;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::X2
	int32_t ___X2_7;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::X3
	int32_t ___X3_8;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// Org.BouncyCastle.Crypto.Engines.ThreefishEngine
struct ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C  : public RuntimeObject
{
	// System.Int32 Org.BouncyCastle.Crypto.Engines.ThreefishEngine::blocksizeBytes
	int32_t ___blocksizeBytes_14;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.ThreefishEngine::blocksizeWords
	int32_t ___blocksizeWords_15;
	// System.UInt64[] Org.BouncyCastle.Crypto.Engines.ThreefishEngine::currentBlock
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___currentBlock_16;
	// System.UInt64[] Org.BouncyCastle.Crypto.Engines.ThreefishEngine::t
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___t_17;
	// System.UInt64[] Org.BouncyCastle.Crypto.Engines.ThreefishEngine::kw
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___kw_18;
	// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher Org.BouncyCastle.Crypto.Engines.ThreefishEngine::cipher
	ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1* ___cipher_19;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.ThreefishEngine::forEncryption
	bool ___forEncryption_20;
};

// Org.BouncyCastle.Crypto.Engines.TwofishEngine
struct TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C  : public RuntimeObject
{
	// System.Boolean Org.BouncyCastle.Crypto.Engines.TwofishEngine::encrypting
	bool ___encrypting_36;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.TwofishEngine::gMDS0
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gMDS0_37;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.TwofishEngine::gMDS1
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gMDS1_38;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.TwofishEngine::gMDS2
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gMDS2_39;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.TwofishEngine::gMDS3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gMDS3_40;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.TwofishEngine::gSubKeys
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gSubKeys_41;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.TwofishEngine::gSBox
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gSBox_42;
	// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::k64Cnt
	int32_t ___k64Cnt_43;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.TwofishEngine::workingKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___workingKey_44;
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

// Org.BouncyCastle.Crypto.Engines.VmpcEngine
struct VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF  : public RuntimeObject
{
	// System.Byte Org.BouncyCastle.Crypto.Engines.VmpcEngine::n
	uint8_t ___n_0;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.VmpcEngine::P
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___P_1;
	// System.Byte Org.BouncyCastle.Crypto.Engines.VmpcEngine::s
	uint8_t ___s_2;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.VmpcEngine::workingIV
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___workingIV_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.VmpcEngine::workingKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___workingKey_4;
};

// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder
struct X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100  : public RuntimeObject
{
	// Org.BouncyCastle.Asn1.X9.X9ECParameters Org.BouncyCastle.Asn1.X9.X9ECParametersHolder::parameters
	X9ECParameters_tA38EBA48073F91FDA9CF46ED605B02A1EB1F8B5A* ___parameters_0;
};

// Org.BouncyCastle.Crypto.Engines.XteaEngine
struct XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1  : public RuntimeObject
{
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.XteaEngine::_S
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____S_3;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.XteaEngine::_sum0
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____sum0_4;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.XteaEngine::_sum1
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____sum1_5;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.XteaEngine::_initialised
	bool ____initialised_6;
	// System.Boolean Org.BouncyCastle.Crypto.Engines.XteaEngine::_forEncryption
	bool ____forEncryption_7;
};

// Org.BouncyCastle.Math.EC.ECCurve/Config
struct Config_tD12AA93D54F452B9AFEA0D10600F2AA24691AE75  : public RuntimeObject
{
	// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Math.EC.ECCurve/Config::outer
	ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* ___outer_0;
	// System.Int32 Org.BouncyCastle.Math.EC.ECCurve/Config::coord
	int32_t ___coord_1;
	// Org.BouncyCastle.Math.EC.Endo.ECEndomorphism Org.BouncyCastle.Math.EC.ECCurve/Config::endomorphism
	RuntimeObject* ___endomorphism_2;
	// Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier Org.BouncyCastle.Math.EC.ECCurve/Config::multiplier
	RuntimeObject* ___multiplier_3;
};

// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher
struct ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1  : public RuntimeObject
{
	// System.UInt64[] Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher::t
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___t_0;
	// System.UInt64[] Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher::kw
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___kw_1;
};

// Org.BouncyCastle.Asn1.Asn1Object
struct Asn1Object_t6011E32509DB4BF56BE60B217B5BB2165DB3152C  : public Asn1Encodable_tDF4F2E3B3E175A389BAE8B763398B642043D5628
{
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

// Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters
struct RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B  : public AsymmetricKeyParameter_tA5D2359A65E6D2862EC9B31F64730CA7A117109A
{
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters::modulus
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___modulus_2;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters::exponent
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___exponent_3;
};

// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076  : public Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8
{
	// Org.BouncyCastle.Crypto.Prng.IRandomGenerator Org.BouncyCastle.Security.SecureRandom::generator
	RuntimeObject* ___generator_8;
};

// Org.BouncyCastle.Crypto.Digests.Sha1Digest
struct Sha1Digest_tC8861FE4F42B403ECE6991A7D168F82E0427C0DA  : public GeneralDigest_t606F59074DD217629688FF89A93C5A9C3956ACD7
{
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha1Digest::H1
	uint32_t ___H1_5;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha1Digest::H2
	uint32_t ___H2_6;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha1Digest::H3
	uint32_t ___H3_7;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha1Digest::H4
	uint32_t ___H4_8;
	// System.UInt32 Org.BouncyCastle.Crypto.Digests.Sha1Digest::H5
	uint32_t ___H5_9;
	// System.UInt32[] Org.BouncyCastle.Crypto.Digests.Sha1Digest::X
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___X_10;
	// System.Int32 Org.BouncyCastle.Crypto.Digests.Sha1Digest::xOff
	int32_t ___xOff_11;
};

// Org.BouncyCastle.Crypto.Engines.TnepresEngine
struct TnepresEngine_tB2063E257FDB18D464780C832450C7244D433DFC  : public SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0
{
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

// Org.BouncyCastle.Crypto.Engines.VmpcKsa3Engine
struct VmpcKsa3Engine_t6B40A255ABBC4585FD23E3EB9A16329F6CB62C76  : public VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF
{
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

// Org.BouncyCastle.Asn1.X9.X9ECParameters
struct X9ECParameters_tA38EBA48073F91FDA9CF46ED605B02A1EB1F8B5A  : public Asn1Encodable_tDF4F2E3B3E175A389BAE8B763398B642043D5628
{
	// Org.BouncyCastle.Asn1.X9.X9FieldID Org.BouncyCastle.Asn1.X9.X9ECParameters::fieldID
	X9FieldID_tB255CB73D8980FFE1312D42243EA1A96543C2D35* ___fieldID_2;
	// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Asn1.X9.X9ECParameters::curve
	ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* ___curve_3;
	// Org.BouncyCastle.Asn1.X9.X9ECPoint Org.BouncyCastle.Asn1.X9.X9ECParameters::g
	X9ECPoint_tE24AC28576C4C41CAA3A4373C00FB1486ACF83F4* ___g_4;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Asn1.X9.X9ECParameters::n
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___n_5;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Asn1.X9.X9ECParameters::h
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___h_6;
	// System.Byte[] Org.BouncyCastle.Asn1.X9.X9ECParameters::seed
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___seed_7;
};

// Org.BouncyCastle.Asn1.X9.X9ECPoint
struct X9ECPoint_tE24AC28576C4C41CAA3A4373C00FB1486ACF83F4  : public Asn1Encodable_tDF4F2E3B3E175A389BAE8B763398B642043D5628
{
	// Org.BouncyCastle.Asn1.Asn1OctetString Org.BouncyCastle.Asn1.X9.X9ECPoint::encoding
	Asn1OctetString_t7BECD15DD6B253DA18A4F62F86D7BE4815EDBA86* ___encoding_2;
	// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Asn1.X9.X9ECPoint::c
	ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* ___c_3;
	// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Asn1.X9.X9ECPoint::p
	ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___p_4;
};

// Org.BouncyCastle.Crypto.Engines.XSalsa20Engine
struct XSalsa20Engine_tDF36BD3BD165A1B1D6E28DFE5D17C69A072F5EDD  : public Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/Curve25519Holder
struct Curve25519Holder_tF39AA971A231CB4B4CC413DFD910BE7A9D6B92B7  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SM2P256V1Holder
struct SM2P256V1Holder_t485E648CA73ACBF012BAC2A3FB9185AAF291EE4B  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP128R1Holder
struct SecP128R1Holder_tA26EA6A7F7A8FB4774FC64750C08FAEFDD9AED9D  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP160K1Holder
struct SecP160K1Holder_t17AB4CB4A638430E69B7DEABAD836AFAEA99DA58  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP160R1Holder
struct SecP160R1Holder_t28F24C382550802EE80D38240B51B160F0673BF2  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP160R2Holder
struct SecP160R2Holder_t618B185F8B23E4518496A22BEBE5CF596AB09AF4  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP192K1Holder
struct SecP192K1Holder_tBF29D835BDE49D97B34171CCA93209150E059C20  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP192R1Holder
struct SecP192R1Holder_tC182C6696165A12F7271D5D4FD01B8FBB0E396A0  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP224K1Holder
struct SecP224K1Holder_t39350033689D077BDD1E2D04C47B1A0A3BEAD101  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP224R1Holder
struct SecP224R1Holder_tD102A567AC29704B9A9BCA9ED70E27FED1CC72CE  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP256K1Holder
struct SecP256K1Holder_t9F128F0E30C4420C583BF0A2953B1939E8865F00  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP256R1Holder
struct SecP256R1Holder_t39F733AB96E0C335A3D5E0C4249279E90BA5D77D  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP384R1Holder
struct SecP384R1Holder_t49D312BC73EAEC9F7E38EC859EF04D32F0A9102D  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP521R1Holder
struct SecP521R1Holder_tA0DCFED9DC7186346D0B1C1C603939F4A48835C8  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT113R1Holder
struct SecT113R1Holder_t6BF6AC593665AE34156F631E30A610C546CF25FA  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT113R2Holder
struct SecT113R2Holder_t470C28BB2C7522C7F30267132861CC1817B7EF6E  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT131R1Holder
struct SecT131R1Holder_tD2DC2E3F0946730FC0064A1BE2BDDD1A031D40AC  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT131R2Holder
struct SecT131R2Holder_t1DCD22AC2C6E92A73AD9F174516DB11A1E33372C  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT163K1Holder
struct SecT163K1Holder_t2394C1DCF3CD497996820DC11A4F76654CF7ED90  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT163R1Holder
struct SecT163R1Holder_t8BC3DCEA44BA53C630FA2416A43FBB6D3FA2191C  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT163R2Holder
struct SecT163R2Holder_t77955560C48EF15E97EF7D76F23BAAEE93DE5CD1  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT193R1Holder
struct SecT193R1Holder_tA0CBD4683C1FEBE468B9AB1FDCF5D1A3C887BA12  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT193R2Holder
struct SecT193R2Holder_t479127B795F2927BCEE50E643E8AEE4DD57F1781  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT233K1Holder
struct SecT233K1Holder_tD8B6FE5965F7160EC7829DBA6A2D6D63B6DF5309  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT233R1Holder
struct SecT233R1Holder_t485B464B1C06FB829B23B6D9AF1F11921DCDCE54  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT239K1Holder
struct SecT239K1Holder_tE2B4C933670F696ED4E23FC4B4D54A053487063B  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT283K1Holder
struct SecT283K1Holder_tFF0B62B99828A0101433D8282426F36C360E739F  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT283R1Holder
struct SecT283R1Holder_t8015A02A2E52A52BCA84606F14469B1A1D2F8640  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT409K1Holder
struct SecT409K1Holder_tC8EE4A638C25C207D13D517C2AF89B7DB04E7359  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT409R1Holder
struct SecT409R1Holder_t44E628CFA24F1197D5FC34E865C467A69F791A8D  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT571K1Holder
struct SecT571K1Holder_t0BD1A2D2C8502E8153E4B11B49BDD0D9766D7BF0  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT571R1Holder
struct SecT571R1Holder_tCD797766DDE48158A3A9172D9F509D2F9F4EC755  : public X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100
{
};

// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish1024Cipher
struct Threefish1024Cipher_t56D2C1AB2ED3A65A7E1F23EAE08F5EF51E25CC0E  : public ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1
{
};

// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher
struct Threefish512Cipher_tE02AA413DEC2B3FA789F12AF89E596A009794B8D  : public ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1
{
};

// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC  : public Asn1Object_t6011E32509DB4BF56BE60B217B5BB2165DB3152C
{
	// System.String Org.BouncyCastle.Asn1.DerObjectIdentifier::identifier
	String_t* ___identifier_2;
	// System.Byte[] Org.BouncyCastle.Asn1.DerObjectIdentifier::body
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___body_3;
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

// Org.BouncyCastle.Crypto.InvalidCipherTextException
struct InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB  : public CryptoException_t4AD3626BE1D22C083AB2877DC9E63B19B51F1D26
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Org.BouncyCastle.Crypto.AsymmetricKeyParameter

// Org.BouncyCastle.Crypto.AsymmetricKeyParameter

// Org.BouncyCastle.Math.BigInteger
struct BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields
{
	// System.Int32[][] Org.BouncyCastle.Math.BigInteger::primeLists
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___primeLists_0;
	// System.Int32[] Org.BouncyCastle.Math.BigInteger::primeProducts
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___primeProducts_1;
	// System.Int32[] Org.BouncyCastle.Math.BigInteger::ZeroMagnitude
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ZeroMagnitude_4;
	// System.Byte[] Org.BouncyCastle.Math.BigInteger::ZeroEncoding
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ZeroEncoding_5;
	// Org.BouncyCastle.Math.BigInteger[] Org.BouncyCastle.Math.BigInteger::SMALL_CONSTANTS
	BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* ___SMALL_CONSTANTS_6;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Zero
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___Zero_7;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::One
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___One_8;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Two
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___Two_9;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Three
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___Three_10;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Four
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___Four_11;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Ten
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___Ten_12;
	// System.Byte[] Org.BouncyCastle.Math.BigInteger::BitLengthTable
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___BitLengthTable_13;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::radix2
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix2_18;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::radix2E
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix2E_19;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::radix8
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix8_20;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::radix8E
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix8E_21;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::radix10
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix10_22;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::radix10E
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix10E_23;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::radix16
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix16_24;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::radix16E
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix16E_25;
	// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Math.BigInteger::RandomSource
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___RandomSource_26;
	// System.Int32[] Org.BouncyCastle.Math.BigInteger::ExpWindowThresholds
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ExpWindowThresholds_27;
};

// Org.BouncyCastle.Math.BigInteger

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves
struct CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_StaticFields
{
	// System.Collections.IDictionary Org.BouncyCastle.Crypto.EC.CustomNamedCurves::nameToCurve
	RuntimeObject* ___nameToCurve_0;
	// System.Collections.IDictionary Org.BouncyCastle.Crypto.EC.CustomNamedCurves::nameToOid
	RuntimeObject* ___nameToOid_1;
	// System.Collections.IDictionary Org.BouncyCastle.Crypto.EC.CustomNamedCurves::oidToCurve
	RuntimeObject* ___oidToCurve_2;
	// System.Collections.IDictionary Org.BouncyCastle.Crypto.EC.CustomNamedCurves::oidToName
	RuntimeObject* ___oidToName_3;
	// System.Collections.IList Org.BouncyCastle.Crypto.EC.CustomNamedCurves::names
	RuntimeObject* ___names_4;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves

// Org.BouncyCastle.Math.EC.ECCurve

// Org.BouncyCastle.Math.EC.ECCurve

// Org.BouncyCastle.Math.EC.ECPoint
struct ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70_StaticFields
{
	// Org.BouncyCastle.Math.EC.ECFieldElement[] Org.BouncyCastle.Math.EC.ECPoint::EMPTY_ZS
	ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475* ___EMPTY_ZS_0;
};

// Org.BouncyCastle.Math.EC.ECPoint

// Org.BouncyCastle.Utilities.Collections.EnumerableProxy

// Org.BouncyCastle.Utilities.Collections.EnumerableProxy

// Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers
struct GMObjectIdentifiers_t13F9571874C97A1CEB1C2CCEF5295838CF708CBD_StaticFields
{
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm_scheme
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm_scheme_0;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm6_ecb
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm6_ecb_1;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm6_cbc
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm6_cbc_2;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm6_ofb128
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm6_ofb128_3;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm6_cfb128
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm6_cfb128_4;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm1_ecb
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm1_ecb_5;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm1_cbc
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm1_cbc_6;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm1_ofb128
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm1_ofb128_7;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm1_cfb128
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm1_cfb128_8;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm1_cfb1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm1_cfb1_9;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm1_cfb8
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm1_cfb8_10;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::ssf33_ecb
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___ssf33_ecb_11;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::ssf33_cbc
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___ssf33_cbc_12;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::ssf33_ofb128
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___ssf33_ofb128_13;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::ssf33_cfb128
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___ssf33_cfb128_14;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::ssf33_cfb1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___ssf33_cfb1_15;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::ssf33_cfb8
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___ssf33_cfb8_16;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sms4_ecb
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sms4_ecb_17;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sms4_cbc
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sms4_cbc_18;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sms4_ofb128
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sms4_ofb128_19;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sms4_cfb128
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sms4_cfb128_20;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sms4_cfb1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sms4_cfb1_21;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sms4_cfb8
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sms4_cfb8_22;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sms4_ctr
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sms4_ctr_23;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sms4_gcm
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sms4_gcm_24;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sms4_ccm
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sms4_ccm_25;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sms4_xts
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sms4_xts_26;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sms4_wrap
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sms4_wrap_27;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sms4_wrap_pad
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sms4_wrap_pad_28;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sms4_ocb
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sms4_ocb_29;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm5
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm5_30;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm2p256v1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm2p256v1_31;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm2sign
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm2sign_32;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm2exchange
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm2exchange_33;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm2encrypt
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm2encrypt_34;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::wapip192v1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___wapip192v1_35;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm2encrypt_recommendedParameters
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm2encrypt_recommendedParameters_36;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm2encrypt_specifiedParameters
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm2encrypt_specifiedParameters_37;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm2encrypt_with_sm3
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm2encrypt_with_sm3_38;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm2encrypt_with_sha1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm2encrypt_with_sha1_39;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm2encrypt_with_sha224
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm2encrypt_with_sha224_40;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm2encrypt_with_sha256
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm2encrypt_with_sha256_41;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm2encrypt_with_sha384
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm2encrypt_with_sha384_42;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm2encrypt_with_sha512
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm2encrypt_with_sha512_43;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm2encrypt_with_rmd160
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm2encrypt_with_rmd160_44;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm2encrypt_with_whirlpool
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm2encrypt_with_whirlpool_45;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm2encrypt_with_blake2b512
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm2encrypt_with_blake2b512_46;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm2encrypt_with_blake2s256
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm2encrypt_with_blake2s256_47;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm2encrypt_with_md5
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm2encrypt_with_md5_48;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::id_sm9PublicKey
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___id_sm9PublicKey_49;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm9sign
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm9sign_50;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm9keyagreement
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm9keyagreement_51;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm9encrypt
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm9encrypt_52;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm3
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm3_53;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::hmac_sm3
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___hmac_sm3_54;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm2sign_with_sm3
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm2sign_with_sm3_55;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm2sign_with_sha1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm2sign_with_sha1_56;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm2sign_with_sha256
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm2sign_with_sha256_57;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm2sign_with_sha512
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm2sign_with_sha512_58;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm2sign_with_sha224
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm2sign_with_sha224_59;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm2sign_with_sha384
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm2sign_with_sha384_60;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm2sign_with_rmd160
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm2sign_with_rmd160_61;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm2sign_with_whirlpool
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm2sign_with_whirlpool_62;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm2sign_with_blake2b512
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm2sign_with_blake2b512_63;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers::sm2sign_with_blake2s256
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___sm2sign_with_blake2s256_64;
};

// Org.BouncyCastle.Asn1.GM.GMObjectIdentifiers

// Org.BouncyCastle.Math.EC.Endo.GlvTypeBEndomorphism

// Org.BouncyCastle.Math.EC.Endo.GlvTypeBEndomorphism

// Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters

// Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters

// Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding
struct ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_StaticFields
{
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::Sixteen
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___Sixteen_0;
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::Six
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___Six_1;
	// System.Byte[] Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::shadows
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___shadows_2;
	// System.Byte[] Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::inverse
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inverse_3;
};

// Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding

// Org.BouncyCastle.Crypto.Parameters.KeyParameter

// Org.BouncyCastle.Crypto.Parameters.KeyParameter

// Org.BouncyCastle.Crypto.Encodings.OaepEncoding

// Org.BouncyCastle.Crypto.Encodings.OaepEncoding

// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV

// Org.BouncyCastle.Crypto.Parameters.ParametersWithIV

// Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom

// Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom

// Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding
struct Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8_StaticFields
{
	// System.Boolean[] Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::strictLengthEnabled
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___strictLengthEnabled_2;
};

// Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
};

// Org.BouncyCastle.Crypto.Engines.Salsa20Engine
struct Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4_StaticFields
{
	// System.Int32 Org.BouncyCastle.Crypto.Engines.Salsa20Engine::DEFAULT_ROUNDS
	int32_t ___DEFAULT_ROUNDS_0;
	// System.UInt32[] Org.BouncyCastle.Crypto.Engines.Salsa20Engine::TAU_SIGMA
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___TAU_SIGMA_2;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.Salsa20Engine::sigma
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___sigma_3;
	// System.Byte[] Org.BouncyCastle.Crypto.Engines.Salsa20Engine::tau
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___tau_4;
};

// Org.BouncyCastle.Crypto.Engines.Salsa20Engine

// Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers
struct SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields
{
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::EllipticCurve
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___EllipticCurve_0;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecT163k1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecT163k1_1;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecT163r1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecT163r1_2;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecT239k1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecT239k1_3;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecT113r1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecT113r1_4;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecT113r2
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecT113r2_5;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecP112r1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecP112r1_6;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecP112r2
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecP112r2_7;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecP160r1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecP160r1_8;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecP160k1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecP160k1_9;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecP256k1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecP256k1_10;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecT163r2
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecT163r2_11;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecT283k1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecT283k1_12;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecT283r1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecT283r1_13;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecT131r1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecT131r1_14;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecT131r2
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecT131r2_15;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecT193r1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecT193r1_16;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecT193r2
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecT193r2_17;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecT233k1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecT233k1_18;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecT233r1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecT233r1_19;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecP128r1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecP128r1_20;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecP128r2
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecP128r2_21;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecP160r2
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecP160r2_22;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecP192k1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecP192k1_23;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecP224k1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecP224k1_24;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecP224r1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecP224r1_25;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecP384r1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecP384r1_26;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecP521r1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecP521r1_27;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecT409k1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecT409k1_28;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecT409r1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecT409r1_29;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecT571k1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecT571k1_30;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecT571r1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecT571r1_31;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecP192r1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecP192r1_32;
	// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers::SecP256r1
	DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___SecP256r1_33;
};

// Org.BouncyCastle.Asn1.Sec.SecObjectIdentifiers

// Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
struct SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_StaticFields
{
	// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::BlockSize
	int32_t ___BlockSize_0;
};

// Org.BouncyCastle.Crypto.Engines.SerpentEngineBase

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Org.BouncyCastle.Crypto.Engines.ThreefishEngine
struct ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_StaticFields
{
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.ThreefishEngine::MOD9
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MOD9_10;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.ThreefishEngine::MOD17
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MOD17_11;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.ThreefishEngine::MOD5
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MOD5_12;
	// System.Int32[] Org.BouncyCastle.Crypto.Engines.ThreefishEngine::MOD3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___MOD3_13;
};

// Org.BouncyCastle.Crypto.Engines.ThreefishEngine

// Org.BouncyCastle.Crypto.Engines.TwofishEngine
struct TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields
{
	// System.Byte[,] Org.BouncyCastle.Crypto.Engines.TwofishEngine::P
	ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* ___P_0;
};

// Org.BouncyCastle.Crypto.Engines.TwofishEngine

// Org.BouncyCastle.Crypto.Engines.VmpcEngine

// Org.BouncyCastle.Crypto.Engines.VmpcEngine

// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder

// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder

// Org.BouncyCastle.Crypto.Engines.XteaEngine

// Org.BouncyCastle.Crypto.Engines.XteaEngine

// Org.BouncyCastle.Math.EC.ECCurve/Config

// Org.BouncyCastle.Math.EC.ECCurve/Config

// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher

// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher

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

// Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters
struct RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B_StaticFields
{
	// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters::SmallPrimesProduct
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___SmallPrimesProduct_1;
};

// Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters

// Org.BouncyCastle.Security.SecureRandom
struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_StaticFields
{
	// System.Int64 Org.BouncyCastle.Security.SecureRandom::counter
	int64_t ___counter_5;
	// System.Object Org.BouncyCastle.Security.SecureRandom::counterLock
	RuntimeObject* ___counterLock_6;
	// Org.BouncyCastle.Security.SecureRandom[] Org.BouncyCastle.Security.SecureRandom::master
	SecureRandomU5BU5D_t9CDCDE8DC35C008A2EDEA385E2A7FE78B9F9CFF6* ___master_7;
	// System.Double Org.BouncyCastle.Security.SecureRandom::DoubleScale
	double ___DoubleScale_9;
};

// Org.BouncyCastle.Security.SecureRandom

// Org.BouncyCastle.Crypto.Digests.Sha1Digest

// Org.BouncyCastle.Crypto.Digests.Sha1Digest

// Org.BouncyCastle.Crypto.Engines.TnepresEngine

// Org.BouncyCastle.Crypto.Engines.TnepresEngine

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// Org.BouncyCastle.Crypto.Engines.VmpcKsa3Engine

// Org.BouncyCastle.Crypto.Engines.VmpcKsa3Engine

// System.Void

// System.Void

// Org.BouncyCastle.Asn1.X9.X9ECParameters

// Org.BouncyCastle.Asn1.X9.X9ECParameters

// Org.BouncyCastle.Asn1.X9.X9ECPoint

// Org.BouncyCastle.Asn1.X9.X9ECPoint

// Org.BouncyCastle.Crypto.Engines.XSalsa20Engine

// Org.BouncyCastle.Crypto.Engines.XSalsa20Engine

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/Curve25519Holder
struct Curve25519Holder_tF39AA971A231CB4B4CC413DFD910BE7A9D6B92B7_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/Curve25519Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/Curve25519Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SM2P256V1Holder
struct SM2P256V1Holder_t485E648CA73ACBF012BAC2A3FB9185AAF291EE4B_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SM2P256V1Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SM2P256V1Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP128R1Holder
struct SecP128R1Holder_tA26EA6A7F7A8FB4774FC64750C08FAEFDD9AED9D_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP128R1Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP128R1Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP160K1Holder
struct SecP160K1Holder_t17AB4CB4A638430E69B7DEABAD836AFAEA99DA58_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP160K1Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP160K1Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP160R1Holder
struct SecP160R1Holder_t28F24C382550802EE80D38240B51B160F0673BF2_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP160R1Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP160R1Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP160R2Holder
struct SecP160R2Holder_t618B185F8B23E4518496A22BEBE5CF596AB09AF4_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP160R2Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP160R2Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP192K1Holder
struct SecP192K1Holder_tBF29D835BDE49D97B34171CCA93209150E059C20_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP192K1Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP192K1Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP192R1Holder
struct SecP192R1Holder_tC182C6696165A12F7271D5D4FD01B8FBB0E396A0_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP192R1Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP192R1Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP224K1Holder
struct SecP224K1Holder_t39350033689D077BDD1E2D04C47B1A0A3BEAD101_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP224K1Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP224K1Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP224R1Holder
struct SecP224R1Holder_tD102A567AC29704B9A9BCA9ED70E27FED1CC72CE_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP224R1Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP224R1Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP256K1Holder
struct SecP256K1Holder_t9F128F0E30C4420C583BF0A2953B1939E8865F00_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP256K1Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP256K1Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP256R1Holder
struct SecP256R1Holder_t39F733AB96E0C335A3D5E0C4249279E90BA5D77D_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP256R1Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP256R1Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP384R1Holder
struct SecP384R1Holder_t49D312BC73EAEC9F7E38EC859EF04D32F0A9102D_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP384R1Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP384R1Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP521R1Holder
struct SecP521R1Holder_tA0DCFED9DC7186346D0B1C1C603939F4A48835C8_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP521R1Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecP521R1Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT113R1Holder
struct SecT113R1Holder_t6BF6AC593665AE34156F631E30A610C546CF25FA_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT113R1Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT113R1Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT113R2Holder
struct SecT113R2Holder_t470C28BB2C7522C7F30267132861CC1817B7EF6E_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT113R2Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT113R2Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT131R1Holder
struct SecT131R1Holder_tD2DC2E3F0946730FC0064A1BE2BDDD1A031D40AC_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT131R1Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT131R1Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT131R2Holder
struct SecT131R2Holder_t1DCD22AC2C6E92A73AD9F174516DB11A1E33372C_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT131R2Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT131R2Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT163K1Holder
struct SecT163K1Holder_t2394C1DCF3CD497996820DC11A4F76654CF7ED90_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT163K1Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT163K1Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT163R1Holder
struct SecT163R1Holder_t8BC3DCEA44BA53C630FA2416A43FBB6D3FA2191C_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT163R1Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT163R1Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT163R2Holder
struct SecT163R2Holder_t77955560C48EF15E97EF7D76F23BAAEE93DE5CD1_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT163R2Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT163R2Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT193R1Holder
struct SecT193R1Holder_tA0CBD4683C1FEBE468B9AB1FDCF5D1A3C887BA12_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT193R1Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT193R1Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT193R2Holder
struct SecT193R2Holder_t479127B795F2927BCEE50E643E8AEE4DD57F1781_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT193R2Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT193R2Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT233K1Holder
struct SecT233K1Holder_tD8B6FE5965F7160EC7829DBA6A2D6D63B6DF5309_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT233K1Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT233K1Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT233R1Holder
struct SecT233R1Holder_t485B464B1C06FB829B23B6D9AF1F11921DCDCE54_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT233R1Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT233R1Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT239K1Holder
struct SecT239K1Holder_tE2B4C933670F696ED4E23FC4B4D54A053487063B_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT239K1Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT239K1Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT283K1Holder
struct SecT283K1Holder_tFF0B62B99828A0101433D8282426F36C360E739F_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT283K1Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT283K1Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT283R1Holder
struct SecT283R1Holder_t8015A02A2E52A52BCA84606F14469B1A1D2F8640_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT283R1Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT283R1Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT409K1Holder
struct SecT409K1Holder_tC8EE4A638C25C207D13D517C2AF89B7DB04E7359_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT409K1Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT409K1Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT409R1Holder
struct SecT409R1Holder_t44E628CFA24F1197D5FC34E865C467A69F791A8D_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT409R1Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT409R1Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT571K1Holder
struct SecT571K1Holder_t0BD1A2D2C8502E8153E4B11B49BDD0D9766D7BF0_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT571K1Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT571K1Holder

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT571R1Holder
struct SecT571R1Holder_tCD797766DDE48158A3A9172D9F509D2F9F4EC755_StaticFields
{
	// Org.BouncyCastle.Asn1.X9.X9ECParametersHolder Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT571R1Holder::Instance
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___Instance_1;
};

// Org.BouncyCastle.Crypto.EC.CustomNamedCurves/SecT571R1Holder

// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish1024Cipher

// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish1024Cipher

// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher

// Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher

// Org.BouncyCastle.Asn1.DerObjectIdentifier
struct DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC_StaticFields
{
	// Org.BouncyCastle.Asn1.DerObjectIdentifier[] Org.BouncyCastle.Asn1.DerObjectIdentifier::cache
	DerObjectIdentifierU5BU5D_t5D61227577C3BB3814DC6B7D30D7C415908301A8* ___cache_5;
};

// Org.BouncyCastle.Asn1.DerObjectIdentifier

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// System.ArgumentException

// System.ArgumentException

// Org.BouncyCastle.Crypto.InvalidCipherTextException

// Org.BouncyCastle.Crypto.InvalidCipherTextException

// System.InvalidOperationException

// System.InvalidOperationException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Byte[,]
struct ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638  : public RuntimeArray
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
	inline uint8_t GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, uint8_t value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, uint8_t value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
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
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};



// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/ThreefishCipher::.ctor(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreefishCipher__ctor_mDDBB9ED63AB053243A6C41346A724EC53DF5CCD8 (ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_kw, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_t, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, const RuntimeMethod* method) ;
// System.UInt64 Org.BouncyCastle.Crypto.Engines.ThreefishEngine::RotlXor(System.UInt64,System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740 (uint64_t ___0_x, int32_t ___1_n, uint64_t ___2_xor, const RuntimeMethod* method) ;
// System.UInt64 Org.BouncyCastle.Crypto.Engines.ThreefishEngine::XorRotr(System.UInt64,System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F (uint64_t ___0_x, int32_t ___1_n, uint64_t ___2_xor, const RuntimeMethod* method) ;
// System.UInt32 Org.BouncyCastle.Crypto.Utilities.Pack::BE_To_UInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Pack_BE_To_UInt32_m6FD7E3B8014FC134F0CE2EA18C7DCD8C9EF64B63 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::RotateLeft(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerpentEngineBase_RotateLeft_mE5C5CC37CFAFB57348B330016E1D31E60B8ACD3B (int32_t ___0_x, int32_t ___1_bits, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb3(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb2(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb1(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb0(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb7(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb6(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb5(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Sb4(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::LT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::UInt32_To_BE(System.UInt32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib7(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib7_m6B2AB088F95B2EEF54B03E336C4383C2F2F7D7DE (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::InverseLT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib6(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib6_m6DCB2D99D27AFF9D5030B0246689B85D45ABC3CF (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib5(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib5_mAA323198D76223543EA0094192073F4EF5FFA10B (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib4(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib4_mFE882C69812FD0C52080011F618B5582712A9BD4 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib3(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib3_m6A77BC5E68598F99FF5658ADEBB942A84B0760A4 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib2(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib2_m2E0C9313D9B611D876F4465FD619529188EAE427 (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib1(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib1_mDC3913F6B595A528CCBFD76EB5892F2570A8C32F (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::Ib0(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase_Ib0_m8791AD1CC7476D8717B7D9CFE3C3FDAD0D2DDFBB (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, int32_t ___0_a, int32_t ___1_b, int32_t ___2_c, int32_t ___3_d, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.SerpentEngineBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerpentEngineBase__ctor_mFF5148CD3B1F13851825B130B3DE227A3E658C3B (SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Mx_X(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Mx_X_m276A1D7929299F6AC4BD0DBED757AAF90640EE1C (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_x, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Mx_Y(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Mx_Y_m106DF2D7847CEDE451E9DE9E0CCC39BBD4F81539 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_x, const RuntimeMethod* method) ;
// System.String Org.BouncyCastle.Utilities.Platform::GetTypeName(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_GetTypeName_m9B04679202710BC6A96803803882849D0C5001FB (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.KeyParameter::GetKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16 (KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::SetKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_SetKey_mE272A8D0083032E411423BB5EC140A1A77BD1A05 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Check::DataLength(System.Byte[],System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Check_DataLength_m4BEA4E45985CDB8967A7C3C71799B9036DDCC991 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buf, int32_t ___1_off, int32_t ___2_len, String_t* ___3_msg, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Check::OutputLength(System.Byte[],System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Check_OutputLength_mFBD480CE544E8B2C4EFAD3A12D1E105DC36FFA68 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buf, int32_t ___1_off, int32_t ___2_len, String_t* ___3_msg, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_EncryptBlock_m162417EC0C4C2D907359EB77B48192B8B9369C78 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_src, int32_t ___1_srcIndex, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_dst, int32_t ___3_dstIndex, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_DecryptBlock_m6EDB102D5D9EDDDA6B2D06578DC66C479FD7950C (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_src, int32_t ___1_srcIndex, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_dst, int32_t ___3_dstIndex, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::BytesTo32Bits(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_BytesTo32Bits_m58D51745F99B9350EBCD139204F678D805143E2E (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_b, int32_t ___1_p, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::RS_MDS_Encode(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_RS_MDS_Encode_m809B372A5B000880AD98DC48FD80EE585DE142FA (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_k0, int32_t ___1_k1, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::F32(System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_F32_m50255B31B086CB03ADF1F32B90BFA847ED2F348E (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_k32, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b0_mCA2EF69DA6A621D6F861777A0C043DB2F7CBCD16 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_x, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b1_mFAF886CAB10C9E84889934EB8D78455E8159DB8F (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_x, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b2_mA209CAADF896E142106239B72E68E5FBBE63B0CE (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_x, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b3_mA5580BE58EAF0E4B2BC7C6C071FE75A1598798EE (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_x, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Fe32_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Fe32_0_m9C275C5A14FCD831789EFAE4E80F94ED366220CB (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_x, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Fe32_3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Fe32_3_m72DB29FA4222BEA880C9913CE095E41994C7390C (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_x, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::Bits32ToBytes(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_Bits32ToBytes_m47C33872DAA2B10E8F86B10604F344119BF40C23 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_inData, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_b, int32_t ___2_offset, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::RS_rem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_RS_rem_mED9611C84C1559560AEA0AEF1B59C63423016018 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_x, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::LFSR2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_LFSR2_m944E26A3401C2A72441891A56910159D33EF20D8 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_x, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::LFSR1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_LFSR1_mF7196BF8D6C6A853EB8DB230F15B716A50DA6540 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_x, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* __this, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Parameters.ParametersWithIV::GetIV()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7 (ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.VmpcEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcEngine__ctor_m43337C0F13BBA8BDCB8959F009608B86FF0BC935 (VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.Salsa20Engine::SetKey(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Salsa20Engine_SetKey_m5A207350D464828EECE769D3778C7E6C5FB88075 (Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_keyBytes, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_ivBytes, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Utilities.Pack::LE_To_UInt32(System.Byte[],System.Int32,System.UInt32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pack_LE_To_UInt32_m59119A982E3E4FC20ADEA37F2CD9781D26237762 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_bOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_ns, int32_t ___3_nOff, int32_t ___4_count, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.Salsa20Engine::SalsaCore(System.Int32,System.UInt32[],System.UInt32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Salsa20Engine_SalsaCore_m5E6BFCF8DC6865F0B593D01E72DB23824383B246 (int32_t ___0_rounds, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_input, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_x, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.Salsa20Engine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Salsa20Engine__ctor_m6186F6D389AB34128725472CB335394AAD2504A5 (Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Engines.XteaEngine::setKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XteaEngine_setKey_m8BCBA67E34F08B18F2566802F6979118F628F5A2 (XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.XteaEngine::decryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XteaEngine_decryptBlock_m22FB75AAD4FB6D59D1BA53804B6A56A1CC554FE1 (XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inBytes, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_outBytes, int32_t ___3_outOff, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Engines.XteaEngine::encryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XteaEngine_encryptBlock_mFC8FF0B5F771AF8E873C34AED6659A7B25B0BBFD (XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inBytes, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_outBytes, int32_t ___3_outOff, const RuntimeMethod* method) ;
// Org.BouncyCastle.Crypto.ICipherParameters Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom::get_Parameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithRandom_get_Parameters_mFED49C45204261ACF08DC4617FC59E9025C5DA8E_inline (ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters::get_Modulus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* RsaKeyParameters_get_Modulus_m4DE7784F2CBD8201D9B01EDA3269965502AE5CAB_inline (RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Math.BigInteger::get_BitLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigInteger_get_BitLength_mC0BC0654110E120C54FC581C8F31284C226CDBDE (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::EncodeBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ISO9796d1Encoding_EncodeBlock_m0E88DD24EF7507028D5B538E90BEAC02EA8E11DB (ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_inLen, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::DecodeBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ISO9796d1Encoding_DecodeBlock_m6DCE0AC7024D29BD5656D486E9D8589A6DF08AC8 (ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_inLen, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.BigInteger::.ctor(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigInteger__ctor_m5DA4C1B40BD125805911D274F49DA04D1175A5BD (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, int32_t ___0_sign, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bytes, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Mod(Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* BigInteger_Mod_mB43D106CC9B09184498FF09EEB439A2790CE91F3 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___0_m, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::Subtract(Org.BouncyCastle.Math.BigInteger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* BigInteger_Subtract_mAF6078F797541D51F7E9D25D4C8A0F79DC8E9CEC (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___0_n, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.InvalidCipherTextException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6 (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Math.BigInteger::ToByteArrayUnsigned()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BigInteger_ToByteArrayUnsigned_m851F34EB4990FB95CAA13F23E16D1774E0B26FA6 (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* __this, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Math.BigInteger::ValueOf(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* BigInteger_ValueOf_mC471D30E47D935710EF0E6847A39ADD6F11D6680 (int64_t ___0_value, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Digests.Sha1Digest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha1Digest__ctor_mE459929BE81CC32F1177E9CBF41D2C585164444E (Sha1Digest_tC8861FE4F42B403ECE6991A7D168F82E0427C0DA* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Encodings.OaepEncoding::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher,Org.BouncyCastle.Crypto.IDigest,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OaepEncoding__ctor_m4F58AEBEE55EAE3C4B482FAD6AED218155D2907F (OaepEncoding_tA46EB59C382F7748F9052C3127712089E211D3D5* __this, RuntimeObject* ___0_cipher, RuntimeObject* ___1_hash, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_encodingParams, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Encodings.OaepEncoding::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher,Org.BouncyCastle.Crypto.IDigest,Org.BouncyCastle.Crypto.IDigest,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OaepEncoding__ctor_mE3844ED566CCDFDE119E0FE1A17754E2CDFA1B46 (OaepEncoding_tA46EB59C382F7748F9052C3127712089E211D3D5* __this, RuntimeObject* ___0_cipher, RuntimeObject* ___1_hash, RuntimeObject* ___2_mgf1Hash, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_encodingParams, const RuntimeMethod* method) ;
// Org.BouncyCastle.Security.SecureRandom Org.BouncyCastle.Crypto.Parameters.ParametersWithRandom::get_Random()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ParametersWithRandom_get_Random_m8BBD0BE6E5E963B33589571245F7869CD9E70AC0_inline (ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Security.SecureRandom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecureRandom__ctor_m1FB3C478CD5CC4CDF68C981D8F5F89FC8EF8CC68 (SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* __this, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.OaepEncoding::EncodeBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OaepEncoding_EncodeBlock_mD17D2D511D48430FFDB2B420B77A682991156E5F (OaepEncoding_tA46EB59C382F7748F9052C3127712089E211D3D5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inBytes, int32_t ___1_inOff, int32_t ___2_inLen, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.OaepEncoding::DecodeBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OaepEncoding_DecodeBlock_m61472386EDFD38AC64EBF377F2660A448249520A (OaepEncoding_tA46EB59C382F7748F9052C3127712089E211D3D5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inBytes, int32_t ___1_inOff, int32_t ___2_inLen, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Encodings.OaepEncoding::GetInputBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OaepEncoding_GetInputBlockSize_mE1F39B15A69CE5C6154B3578EDE46D44F98D94A8 (OaepEncoding_tA46EB59C382F7748F9052C3127712089E211D3D5* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Check::DataLength(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Check_DataLength_m2F2550C28CBC7D7B6045D7E5068AAC8E233713C4 (bool ___0_condition, String_t* ___1_msg, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Security.SecureRandom::GetNextBytes(Org.BouncyCastle.Security.SecureRandom,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SecureRandom_GetNextBytes_mA4EBDB5B2C50E1A6695DD9226B7B75ECD9861123 (SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___0_secureRandom, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.OaepEncoding::maskGeneratorFunction1(System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OaepEncoding_maskGeneratorFunction1_mDFB5C016A296FF8231A4FE40291038ECEBF7AB19 (OaepEncoding_tA46EB59C382F7748F9052C3127712089E211D3D5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_Z, int32_t ___1_zOff, int32_t ___2_zLen, int32_t ___3_length, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Arrays::Fill(System.Byte[],System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Arrays_Fill_mE21DFB2A97B1AE17AFE700D6A367141498048242 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buf, uint8_t ___1_b, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.Encodings.OaepEncoding::ItoOSP(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OaepEncoding_ItoOSP_mC610C469BFB6C059650C1899A8BB1EAA9E3D5D82 (OaepEncoding_tA46EB59C382F7748F9052C3127712089E211D3D5* __this, int32_t ___0_i, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_sp, const RuntimeMethod* method) ;
// System.String Org.BouncyCastle.Utilities.Platform::GetEnvironmentVariable(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_GetEnvironmentVariable_mD68593E58ED4923699EFEC4DD5C05B74A9DD59A7 (String_t* ___0_variable, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Utilities.Platform::EqualsIgnoreCase(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Platform_EqualsIgnoreCase_m810D36DB0BD9FBE45BD3772A0FC2B947D7D47CA7 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::get_StrictLengthEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pkcs1Encoding_get_StrictLengthEnabled_m7A488532CC7FF70A99E3878DAC9241C38EAC42DB (const RuntimeMethod* method) ;
// System.Boolean Org.BouncyCastle.Crypto.AsymmetricKeyParameter::get_IsPrivate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AsymmetricKeyParameter_get_IsPrivate_mA62181D04A9E29391B524D9BE8FE92AC3E75ADCE_inline (AsymmetricKeyParameter_tA5D2359A65E6D2862EC9B31F64730CA7A117109A* __this, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::DecodeBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Pkcs1Encoding_DecodeBlock_m503210F83A364B44C345EDE39A349C60ACB7E0F2 (Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_inLen, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::EncodeBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Pkcs1Encoding_EncodeBlock_m84AD4E676CB86AE6BD9A2B5407A2458DFCB29B7C (Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_inLen, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::GetInputBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pkcs1Encoding_GetInputBlockSize_m36270ED2DB0F2E04CDAD5E456969733A0C1364CA (Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::CheckPkcs1Encoding(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pkcs1Encoding_CheckPkcs1Encoding_m5283E1AC2A909828F1C42DCAE88B27BA52E05E16 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_encoded, int32_t ___1_pLen, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::DecodeBlockOrRandom(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Pkcs1Encoding_DecodeBlockOrRandom_m5779EEE26B9D654078F9B5B0FAC8E60D28A40EED (Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_inLen, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::GetOutputBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pkcs1Encoding_GetOutputBlockSize_mCF325C7147E6D7801320E691B8A753DE9E5376D2 (Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8* __this, const RuntimeMethod* method) ;
// System.Int32 Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::FindStart(System.Byte,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pkcs1Encoding_FindStart_mAEB38C180856C7CA14B056420D5CD2D5CD4A3A3B (Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8* __this, uint8_t ___0_type, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_block, const RuntimeMethod* method) ;
// System.Byte[] Org.BouncyCastle.Utilities.Encoders.Hex::DecodeStrict(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Hex_DecodeStrict_mBE650CF6A1009F02147648BB8A26152DDCDD6EC0 (String_t* ___0_str, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Asn1.X9.X9ECPoint::.ctor(Org.BouncyCastle.Math.EC.ECCurve,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X9ECPoint__ctor_m5E14905D726C4DB6468279655ABE08F4DB2A77CC (X9ECPoint_tE24AC28576C4C41CAA3A4373C00FB1486ACF83F4* __this, ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* ___0_c, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_encoding, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.EC.ECPoint Org.BouncyCastle.Asn1.X9.X9ECPoint::get_Point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* X9ECPoint_get_Point_m6528A5074A279106A841C863D2BD16C341D9254C (X9ECPoint_tE24AC28576C4C41CAA3A4373C00FB1486ACF83F4* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Multiplier.WNafUtilities::ConfigureBasepoint(Org.BouncyCastle.Math.EC.ECPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WNafUtilities_ConfigureBasepoint_m7E72E1E9C6275941FDE7215D09D732EB9DEFA8B3 (ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___0_p, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Math.EC.Endo.GlvTypeBEndomorphism::.ctor(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GlvTypeBEndomorphism__ctor_m3091F2F57C4B0CB499E927B16EFDE6F160BF135E (GlvTypeBEndomorphism_t1B1D78DB77BC16B0939641F401E31106099E52EC* __this, ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* ___0_curve, GlvTypeBParameters_tA2BFD2238E017AD101E59544E6EE92EC06179AEB* ___1_parameters, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.EC.ECCurve/Config Org.BouncyCastle.Math.EC.ECCurve/Config::SetEndomorphism(Org.BouncyCastle.Math.EC.Endo.ECEndomorphism)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Config_tD12AA93D54F452B9AFEA0D10600F2AA24691AE75* Config_SetEndomorphism_m0D7E8F65FB30ACCC4E5F396426BA84D16B82D7F4 (Config_tD12AA93D54F452B9AFEA0D10600F2AA24691AE75* __this, RuntimeObject* ___0_endomorphism, const RuntimeMethod* method) ;
// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Math.EC.ECCurve/Config::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* Config_Create_m1192E34A792DE4C8A09EEAD76B781652A5F45568 (Config_tD12AA93D54F452B9AFEA0D10600F2AA24691AE75* __this, const RuntimeMethod* method) ;
// System.String Org.BouncyCastle.Utilities.Platform::ToUpperInvariant(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Platform_ToUpperInvariant_m5361B66F6794091B867CD152FBCD26759D01DFDF (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
// System.Collections.IDictionary Org.BouncyCastle.Utilities.Platform::CreateHashtable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Platform_CreateHashtable_m2F6AEC9A10A15D2D33C82EB4818C6A2B7E4ECA29 (const RuntimeMethod* method) ;
// System.Collections.IList Org.BouncyCastle.Utilities.Platform::CreateArrayList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Platform_CreateArrayList_mF7A2D52167B208F9F6E15D9405F1D52723B94E9E (const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.EC.CustomNamedCurves::DefineCurve(System.String,Org.BouncyCastle.Asn1.X9.X9ECParametersHolder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomNamedCurves_DefineCurve_mFED06981F29D7C76E1020AA1308094AC1931F506 (String_t* ___0_name, X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___1_holder, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.EC.CustomNamedCurves::DefineCurveWithOid(System.String,Org.BouncyCastle.Asn1.DerObjectIdentifier,Org.BouncyCastle.Asn1.X9.X9ECParametersHolder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7 (String_t* ___0_name, DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___1_oid, X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___2_holder, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Crypto.EC.CustomNamedCurves::DefineCurveAlias(System.String,Org.BouncyCastle.Asn1.DerObjectIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomNamedCurves_DefineCurveAlias_m0BF0C0FBC57737045A632CE737D71797583F57A0 (String_t* ___0_name, DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___1_oid, const RuntimeMethod* method) ;
// Org.BouncyCastle.Asn1.X9.X9ECParameters Org.BouncyCastle.Asn1.X9.X9ECParametersHolder::get_Parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X9ECParameters_tA38EBA48073F91FDA9CF46ED605B02A1EB1F8B5A* X9ECParametersHolder_get_Parameters_m33A8C49E5ACEC57194C025DC6E533F1DBB841676 (X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* __this, const RuntimeMethod* method) ;
// System.Void Org.BouncyCastle.Utilities.Collections.EnumerableProxy::.ctor(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumerableProxy__ctor_m575DD70A90B3FE6E4D21BA247414EFA2599410E2 (EnumerableProxy_tF96BE797C0C85614DD7CA44F9F78BB8F09CCF3BE* __this, RuntimeObject* ___0_inner, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher::.ctor(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish512Cipher__ctor_m10C7119CE5A99F3F14942CFE468A1040D3DEBD53 (Threefish512Cipher_tE02AA413DEC2B3FA789F12AF89E596A009794B8D* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_kw, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_t, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_kw;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___1_t;
		ThreefishCipher__ctor_mDDBB9ED63AB053243A6C41346A724EC53DF5CCD8(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher::EncryptBlock(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish512Cipher_EncryptBlock_m64CDF8986D9CB209B4DAE4F040CE9DC8495D54FB (Threefish512Cipher_tE02AA413DEC2B3FA789F12AF89E596A009794B8D* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_block, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_outWords, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1*)__this)->___kw_1;
		V_0 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ((ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1*)__this)->___t_0;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var))->___MOD9_10;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var))->___MOD3_13;
		V_3 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)17))))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish512Cipher_EncryptBlock_m64CDF8986D9CB209B4DAE4F040CE9DC8495D54FB_RuntimeMethod_var)));
	}

IL_0027:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_1;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)5)))
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish512Cipher_EncryptBlock_m64CDF8986D9CB209B4DAE4F040CE9DC8495D54FB_RuntimeMethod_var)));
	}

IL_0033:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_block;
		NullCheck(L_8);
		int32_t L_9 = 0;
		int64_t L_10 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___0_block;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___0_block;
		NullCheck(L_14);
		int32_t L_15 = 2;
		int64_t L_16 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___0_block;
		NullCheck(L_17);
		int32_t L_18 = 3;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___0_block;
		NullCheck(L_20);
		int32_t L_21 = 4;
		int64_t L_22 = (int64_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_8 = L_22;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = ___0_block;
		NullCheck(L_23);
		int32_t L_24 = 5;
		int64_t L_25 = (int64_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = ___0_block;
		NullCheck(L_26);
		int32_t L_27 = 6;
		int64_t L_28 = (int64_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_10 = L_28;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = ___0_block;
		NullCheck(L_29);
		int32_t L_30 = 7;
		int64_t L_31 = (int64_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_11 = L_31;
		uint64_t L_32 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34 = 0;
		int64_t L_35 = (int64_t)(L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_32, L_35));
		uint64_t L_36 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_37 = V_0;
		NullCheck(L_37);
		int32_t L_38 = 1;
		int64_t L_39 = (int64_t)(L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_36, L_39));
		uint64_t L_40 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = V_0;
		NullCheck(L_41);
		int32_t L_42 = 2;
		int64_t L_43 = (int64_t)(L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_40, L_43));
		uint64_t L_44 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_45 = V_0;
		NullCheck(L_45);
		int32_t L_46 = 3;
		int64_t L_47 = (int64_t)(L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_44, L_47));
		uint64_t L_48 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_49 = V_0;
		NullCheck(L_49);
		int32_t L_50 = 4;
		int64_t L_51 = (int64_t)(L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_48, L_51));
		uint64_t L_52 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_53 = V_0;
		NullCheck(L_53);
		int32_t L_54 = 5;
		int64_t L_55 = (int64_t)(L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_56 = V_1;
		NullCheck(L_56);
		int32_t L_57 = 0;
		int64_t L_58 = (int64_t)(L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_52, ((int64_t)il2cpp_codegen_add(L_55, L_58))));
		uint64_t L_59 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_60 = V_0;
		NullCheck(L_60);
		int32_t L_61 = 6;
		int64_t L_62 = (int64_t)(L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_63 = V_1;
		NullCheck(L_63);
		int32_t L_64 = 1;
		int64_t L_65 = (int64_t)(L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_59, ((int64_t)il2cpp_codegen_add(L_62, L_65))));
		uint64_t L_66 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_67 = V_0;
		NullCheck(L_67);
		int32_t L_68 = 7;
		int64_t L_69 = (int64_t)(L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_66, L_69));
		V_12 = 1;
		goto IL_03ef;
	}

IL_00ab:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = V_2;
		int32_t L_71 = V_12;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		int32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_13 = L_73;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = V_3;
		int32_t L_75 = V_12;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		int32_t L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		V_14 = L_77;
		uint64_t L_78 = V_5;
		uint64_t L_79 = V_4;
		uint64_t L_80 = V_5;
		int64_t L_81 = ((int64_t)il2cpp_codegen_add((int64_t)L_79, (int64_t)L_80));
		V_4 = L_81;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var);
		uint64_t L_82;
		L_82 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_78, ((int32_t)46), L_81, NULL);
		V_5 = L_82;
		uint64_t L_83 = V_7;
		uint64_t L_84 = V_6;
		uint64_t L_85 = V_7;
		int64_t L_86 = ((int64_t)il2cpp_codegen_add((int64_t)L_84, (int64_t)L_85));
		V_6 = L_86;
		uint64_t L_87;
		L_87 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_83, ((int32_t)36), L_86, NULL);
		V_7 = L_87;
		uint64_t L_88 = V_9;
		uint64_t L_89 = V_8;
		uint64_t L_90 = V_9;
		int64_t L_91 = ((int64_t)il2cpp_codegen_add((int64_t)L_89, (int64_t)L_90));
		V_8 = L_91;
		uint64_t L_92;
		L_92 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_88, ((int32_t)19), L_91, NULL);
		V_9 = L_92;
		uint64_t L_93 = V_11;
		uint64_t L_94 = V_10;
		uint64_t L_95 = V_11;
		int64_t L_96 = ((int64_t)il2cpp_codegen_add((int64_t)L_94, (int64_t)L_95));
		V_10 = L_96;
		uint64_t L_97;
		L_97 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_93, ((int32_t)37), L_96, NULL);
		V_11 = L_97;
		uint64_t L_98 = V_5;
		uint64_t L_99 = V_6;
		uint64_t L_100 = V_5;
		int64_t L_101 = ((int64_t)il2cpp_codegen_add((int64_t)L_99, (int64_t)L_100));
		V_6 = L_101;
		uint64_t L_102;
		L_102 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_98, ((int32_t)33), L_101, NULL);
		V_5 = L_102;
		uint64_t L_103 = V_11;
		uint64_t L_104 = V_8;
		uint64_t L_105 = V_11;
		int64_t L_106 = ((int64_t)il2cpp_codegen_add((int64_t)L_104, (int64_t)L_105));
		V_8 = L_106;
		uint64_t L_107;
		L_107 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_103, ((int32_t)27), L_106, NULL);
		V_11 = L_107;
		uint64_t L_108 = V_9;
		uint64_t L_109 = V_10;
		uint64_t L_110 = V_9;
		int64_t L_111 = ((int64_t)il2cpp_codegen_add((int64_t)L_109, (int64_t)L_110));
		V_10 = L_111;
		uint64_t L_112;
		L_112 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_108, ((int32_t)14), L_111, NULL);
		V_9 = L_112;
		uint64_t L_113 = V_7;
		uint64_t L_114 = V_4;
		uint64_t L_115 = V_7;
		int64_t L_116 = ((int64_t)il2cpp_codegen_add((int64_t)L_114, (int64_t)L_115));
		V_4 = L_116;
		uint64_t L_117;
		L_117 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_113, ((int32_t)42), L_116, NULL);
		V_7 = L_117;
		uint64_t L_118 = V_5;
		uint64_t L_119 = V_8;
		uint64_t L_120 = V_5;
		int64_t L_121 = ((int64_t)il2cpp_codegen_add((int64_t)L_119, (int64_t)L_120));
		V_8 = L_121;
		uint64_t L_122;
		L_122 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_118, ((int32_t)17), L_121, NULL);
		V_5 = L_122;
		uint64_t L_123 = V_7;
		uint64_t L_124 = V_10;
		uint64_t L_125 = V_7;
		int64_t L_126 = ((int64_t)il2cpp_codegen_add((int64_t)L_124, (int64_t)L_125));
		V_10 = L_126;
		uint64_t L_127;
		L_127 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_123, ((int32_t)49), L_126, NULL);
		V_7 = L_127;
		uint64_t L_128 = V_9;
		uint64_t L_129 = V_4;
		uint64_t L_130 = V_9;
		int64_t L_131 = ((int64_t)il2cpp_codegen_add((int64_t)L_129, (int64_t)L_130));
		V_4 = L_131;
		uint64_t L_132;
		L_132 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_128, ((int32_t)36), L_131, NULL);
		V_9 = L_132;
		uint64_t L_133 = V_11;
		uint64_t L_134 = V_6;
		uint64_t L_135 = V_11;
		int64_t L_136 = ((int64_t)il2cpp_codegen_add((int64_t)L_134, (int64_t)L_135));
		V_6 = L_136;
		uint64_t L_137;
		L_137 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_133, ((int32_t)39), L_136, NULL);
		V_11 = L_137;
		uint64_t L_138 = V_5;
		uint64_t L_139 = V_10;
		uint64_t L_140 = V_5;
		int64_t L_141 = ((int64_t)il2cpp_codegen_add((int64_t)L_139, (int64_t)L_140));
		V_10 = L_141;
		uint64_t L_142;
		L_142 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_138, ((int32_t)44), L_141, NULL);
		V_5 = L_142;
		uint64_t L_143 = V_11;
		uint64_t L_144 = V_4;
		uint64_t L_145 = V_11;
		int64_t L_146 = ((int64_t)il2cpp_codegen_add((int64_t)L_144, (int64_t)L_145));
		V_4 = L_146;
		uint64_t L_147;
		L_147 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_143, ((int32_t)9), L_146, NULL);
		V_11 = L_147;
		uint64_t L_148 = V_9;
		uint64_t L_149 = V_6;
		uint64_t L_150 = V_9;
		int64_t L_151 = ((int64_t)il2cpp_codegen_add((int64_t)L_149, (int64_t)L_150));
		V_6 = L_151;
		uint64_t L_152;
		L_152 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_148, ((int32_t)54), L_151, NULL);
		V_9 = L_152;
		uint64_t L_153 = V_7;
		uint64_t L_154 = V_8;
		uint64_t L_155 = V_7;
		int64_t L_156 = ((int64_t)il2cpp_codegen_add((int64_t)L_154, (int64_t)L_155));
		V_8 = L_156;
		uint64_t L_157;
		L_157 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_153, ((int32_t)56), L_156, NULL);
		V_7 = L_157;
		uint64_t L_158 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_159 = V_0;
		int32_t L_160 = V_13;
		NullCheck(L_159);
		int32_t L_161 = L_160;
		int64_t L_162 = (int64_t)(L_159)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_158, L_162));
		uint64_t L_163 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_164 = V_0;
		int32_t L_165 = V_13;
		NullCheck(L_164);
		int32_t L_166 = ((int32_t)il2cpp_codegen_add(L_165, 1));
		int64_t L_167 = (int64_t)(L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_166));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_163, L_167));
		uint64_t L_168 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_169 = V_0;
		int32_t L_170 = V_13;
		NullCheck(L_169);
		int32_t L_171 = ((int32_t)il2cpp_codegen_add(L_170, 2));
		int64_t L_172 = (int64_t)(L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_168, L_172));
		uint64_t L_173 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_174 = V_0;
		int32_t L_175 = V_13;
		NullCheck(L_174);
		int32_t L_176 = ((int32_t)il2cpp_codegen_add(L_175, 3));
		int64_t L_177 = (int64_t)(L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_173, L_177));
		uint64_t L_178 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_179 = V_0;
		int32_t L_180 = V_13;
		NullCheck(L_179);
		int32_t L_181 = ((int32_t)il2cpp_codegen_add(L_180, 4));
		int64_t L_182 = (int64_t)(L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_178, L_182));
		uint64_t L_183 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_184 = V_0;
		int32_t L_185 = V_13;
		NullCheck(L_184);
		int32_t L_186 = ((int32_t)il2cpp_codegen_add(L_185, 5));
		int64_t L_187 = (int64_t)(L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_186));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_188 = V_1;
		int32_t L_189 = V_14;
		NullCheck(L_188);
		int32_t L_190 = L_189;
		int64_t L_191 = (int64_t)(L_188)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_183, ((int64_t)il2cpp_codegen_add(L_187, L_191))));
		uint64_t L_192 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_193 = V_0;
		int32_t L_194 = V_13;
		NullCheck(L_193);
		int32_t L_195 = ((int32_t)il2cpp_codegen_add(L_194, 6));
		int64_t L_196 = (int64_t)(L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_197 = V_1;
		int32_t L_198 = V_14;
		NullCheck(L_197);
		int32_t L_199 = ((int32_t)il2cpp_codegen_add(L_198, 1));
		int64_t L_200 = (int64_t)(L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_192, ((int64_t)il2cpp_codegen_add(L_196, L_200))));
		uint64_t L_201 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_202 = V_0;
		int32_t L_203 = V_13;
		NullCheck(L_202);
		int32_t L_204 = ((int32_t)il2cpp_codegen_add(L_203, 7));
		int64_t L_205 = (int64_t)(L_202)->GetAt(static_cast<il2cpp_array_size_t>(L_204));
		int32_t L_206 = V_12;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_201, ((int64_t)il2cpp_codegen_add(L_205, ((int64_t)(uint64_t)((uint32_t)L_206))))));
		uint64_t L_207 = V_5;
		uint64_t L_208 = V_4;
		uint64_t L_209 = V_5;
		int64_t L_210 = ((int64_t)il2cpp_codegen_add((int64_t)L_208, (int64_t)L_209));
		V_4 = L_210;
		uint64_t L_211;
		L_211 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_207, ((int32_t)39), L_210, NULL);
		V_5 = L_211;
		uint64_t L_212 = V_7;
		uint64_t L_213 = V_6;
		uint64_t L_214 = V_7;
		int64_t L_215 = ((int64_t)il2cpp_codegen_add((int64_t)L_213, (int64_t)L_214));
		V_6 = L_215;
		uint64_t L_216;
		L_216 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_212, ((int32_t)30), L_215, NULL);
		V_7 = L_216;
		uint64_t L_217 = V_9;
		uint64_t L_218 = V_8;
		uint64_t L_219 = V_9;
		int64_t L_220 = ((int64_t)il2cpp_codegen_add((int64_t)L_218, (int64_t)L_219));
		V_8 = L_220;
		uint64_t L_221;
		L_221 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_217, ((int32_t)34), L_220, NULL);
		V_9 = L_221;
		uint64_t L_222 = V_11;
		uint64_t L_223 = V_10;
		uint64_t L_224 = V_11;
		int64_t L_225 = ((int64_t)il2cpp_codegen_add((int64_t)L_223, (int64_t)L_224));
		V_10 = L_225;
		uint64_t L_226;
		L_226 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_222, ((int32_t)24), L_225, NULL);
		V_11 = L_226;
		uint64_t L_227 = V_5;
		uint64_t L_228 = V_6;
		uint64_t L_229 = V_5;
		int64_t L_230 = ((int64_t)il2cpp_codegen_add((int64_t)L_228, (int64_t)L_229));
		V_6 = L_230;
		uint64_t L_231;
		L_231 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_227, ((int32_t)13), L_230, NULL);
		V_5 = L_231;
		uint64_t L_232 = V_11;
		uint64_t L_233 = V_8;
		uint64_t L_234 = V_11;
		int64_t L_235 = ((int64_t)il2cpp_codegen_add((int64_t)L_233, (int64_t)L_234));
		V_8 = L_235;
		uint64_t L_236;
		L_236 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_232, ((int32_t)50), L_235, NULL);
		V_11 = L_236;
		uint64_t L_237 = V_9;
		uint64_t L_238 = V_10;
		uint64_t L_239 = V_9;
		int64_t L_240 = ((int64_t)il2cpp_codegen_add((int64_t)L_238, (int64_t)L_239));
		V_10 = L_240;
		uint64_t L_241;
		L_241 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_237, ((int32_t)10), L_240, NULL);
		V_9 = L_241;
		uint64_t L_242 = V_7;
		uint64_t L_243 = V_4;
		uint64_t L_244 = V_7;
		int64_t L_245 = ((int64_t)il2cpp_codegen_add((int64_t)L_243, (int64_t)L_244));
		V_4 = L_245;
		uint64_t L_246;
		L_246 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_242, ((int32_t)17), L_245, NULL);
		V_7 = L_246;
		uint64_t L_247 = V_5;
		uint64_t L_248 = V_8;
		uint64_t L_249 = V_5;
		int64_t L_250 = ((int64_t)il2cpp_codegen_add((int64_t)L_248, (int64_t)L_249));
		V_8 = L_250;
		uint64_t L_251;
		L_251 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_247, ((int32_t)25), L_250, NULL);
		V_5 = L_251;
		uint64_t L_252 = V_7;
		uint64_t L_253 = V_10;
		uint64_t L_254 = V_7;
		int64_t L_255 = ((int64_t)il2cpp_codegen_add((int64_t)L_253, (int64_t)L_254));
		V_10 = L_255;
		uint64_t L_256;
		L_256 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_252, ((int32_t)29), L_255, NULL);
		V_7 = L_256;
		uint64_t L_257 = V_9;
		uint64_t L_258 = V_4;
		uint64_t L_259 = V_9;
		int64_t L_260 = ((int64_t)il2cpp_codegen_add((int64_t)L_258, (int64_t)L_259));
		V_4 = L_260;
		uint64_t L_261;
		L_261 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_257, ((int32_t)39), L_260, NULL);
		V_9 = L_261;
		uint64_t L_262 = V_11;
		uint64_t L_263 = V_6;
		uint64_t L_264 = V_11;
		int64_t L_265 = ((int64_t)il2cpp_codegen_add((int64_t)L_263, (int64_t)L_264));
		V_6 = L_265;
		uint64_t L_266;
		L_266 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_262, ((int32_t)43), L_265, NULL);
		V_11 = L_266;
		uint64_t L_267 = V_5;
		uint64_t L_268 = V_10;
		uint64_t L_269 = V_5;
		int64_t L_270 = ((int64_t)il2cpp_codegen_add((int64_t)L_268, (int64_t)L_269));
		V_10 = L_270;
		uint64_t L_271;
		L_271 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_267, 8, L_270, NULL);
		V_5 = L_271;
		uint64_t L_272 = V_11;
		uint64_t L_273 = V_4;
		uint64_t L_274 = V_11;
		int64_t L_275 = ((int64_t)il2cpp_codegen_add((int64_t)L_273, (int64_t)L_274));
		V_4 = L_275;
		uint64_t L_276;
		L_276 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_272, ((int32_t)35), L_275, NULL);
		V_11 = L_276;
		uint64_t L_277 = V_9;
		uint64_t L_278 = V_6;
		uint64_t L_279 = V_9;
		int64_t L_280 = ((int64_t)il2cpp_codegen_add((int64_t)L_278, (int64_t)L_279));
		V_6 = L_280;
		uint64_t L_281;
		L_281 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_277, ((int32_t)56), L_280, NULL);
		V_9 = L_281;
		uint64_t L_282 = V_7;
		uint64_t L_283 = V_8;
		uint64_t L_284 = V_7;
		int64_t L_285 = ((int64_t)il2cpp_codegen_add((int64_t)L_283, (int64_t)L_284));
		V_8 = L_285;
		uint64_t L_286;
		L_286 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_282, ((int32_t)22), L_285, NULL);
		V_7 = L_286;
		uint64_t L_287 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_288 = V_0;
		int32_t L_289 = V_13;
		NullCheck(L_288);
		int32_t L_290 = ((int32_t)il2cpp_codegen_add(L_289, 1));
		int64_t L_291 = (int64_t)(L_288)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_287, L_291));
		uint64_t L_292 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_293 = V_0;
		int32_t L_294 = V_13;
		NullCheck(L_293);
		int32_t L_295 = ((int32_t)il2cpp_codegen_add(L_294, 2));
		int64_t L_296 = (int64_t)(L_293)->GetAt(static_cast<il2cpp_array_size_t>(L_295));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_292, L_296));
		uint64_t L_297 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_298 = V_0;
		int32_t L_299 = V_13;
		NullCheck(L_298);
		int32_t L_300 = ((int32_t)il2cpp_codegen_add(L_299, 3));
		int64_t L_301 = (int64_t)(L_298)->GetAt(static_cast<il2cpp_array_size_t>(L_300));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_297, L_301));
		uint64_t L_302 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_303 = V_0;
		int32_t L_304 = V_13;
		NullCheck(L_303);
		int32_t L_305 = ((int32_t)il2cpp_codegen_add(L_304, 4));
		int64_t L_306 = (int64_t)(L_303)->GetAt(static_cast<il2cpp_array_size_t>(L_305));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_302, L_306));
		uint64_t L_307 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_308 = V_0;
		int32_t L_309 = V_13;
		NullCheck(L_308);
		int32_t L_310 = ((int32_t)il2cpp_codegen_add(L_309, 5));
		int64_t L_311 = (int64_t)(L_308)->GetAt(static_cast<il2cpp_array_size_t>(L_310));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_307, L_311));
		uint64_t L_312 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_313 = V_0;
		int32_t L_314 = V_13;
		NullCheck(L_313);
		int32_t L_315 = ((int32_t)il2cpp_codegen_add(L_314, 6));
		int64_t L_316 = (int64_t)(L_313)->GetAt(static_cast<il2cpp_array_size_t>(L_315));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_317 = V_1;
		int32_t L_318 = V_14;
		NullCheck(L_317);
		int32_t L_319 = ((int32_t)il2cpp_codegen_add(L_318, 1));
		int64_t L_320 = (int64_t)(L_317)->GetAt(static_cast<il2cpp_array_size_t>(L_319));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_312, ((int64_t)il2cpp_codegen_add(L_316, L_320))));
		uint64_t L_321 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_322 = V_0;
		int32_t L_323 = V_13;
		NullCheck(L_322);
		int32_t L_324 = ((int32_t)il2cpp_codegen_add(L_323, 7));
		int64_t L_325 = (int64_t)(L_322)->GetAt(static_cast<il2cpp_array_size_t>(L_324));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_326 = V_1;
		int32_t L_327 = V_14;
		NullCheck(L_326);
		int32_t L_328 = ((int32_t)il2cpp_codegen_add(L_327, 2));
		int64_t L_329 = (int64_t)(L_326)->GetAt(static_cast<il2cpp_array_size_t>(L_328));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_321, ((int64_t)il2cpp_codegen_add(L_325, L_329))));
		uint64_t L_330 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_331 = V_0;
		int32_t L_332 = V_13;
		NullCheck(L_331);
		int32_t L_333 = ((int32_t)il2cpp_codegen_add(L_332, 8));
		int64_t L_334 = (int64_t)(L_331)->GetAt(static_cast<il2cpp_array_size_t>(L_333));
		int32_t L_335 = V_12;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_330, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_334, ((int64_t)(uint64_t)((uint32_t)L_335)))), ((int64_t)1)))));
		int32_t L_336 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_336, 2));
	}

IL_03ef:
	{
		int32_t L_337 = V_12;
		if ((((int32_t)L_337) < ((int32_t)((int32_t)18))))
		{
			goto IL_00ab;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_338 = ___1_outWords;
		uint64_t L_339 = V_4;
		NullCheck(L_338);
		(L_338)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_339);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_340 = ___1_outWords;
		uint64_t L_341 = V_5;
		NullCheck(L_340);
		(L_340)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_341);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_342 = ___1_outWords;
		uint64_t L_343 = V_6;
		NullCheck(L_342);
		(L_342)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_343);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_344 = ___1_outWords;
		uint64_t L_345 = V_7;
		NullCheck(L_344);
		(L_344)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_345);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_346 = ___1_outWords;
		uint64_t L_347 = V_8;
		NullCheck(L_346);
		(L_346)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_347);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_348 = ___1_outWords;
		uint64_t L_349 = V_9;
		NullCheck(L_348);
		(L_348)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_349);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_350 = ___1_outWords;
		uint64_t L_351 = V_10;
		NullCheck(L_350);
		(L_350)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_351);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_352 = ___1_outWords;
		uint64_t L_353 = V_11;
		NullCheck(L_352);
		(L_352)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_353);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish512Cipher::DecryptBlock(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish512Cipher_DecryptBlock_m16375AEF72B36D04FB1BDD9F9E888A36CD9952A7 (Threefish512Cipher_tE02AA413DEC2B3FA789F12AF89E596A009794B8D* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_block, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1*)__this)->___kw_1;
		V_0 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ((ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1*)__this)->___t_0;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var))->___MOD9_10;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var))->___MOD3_13;
		V_3 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)17))))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish512Cipher_DecryptBlock_m16375AEF72B36D04FB1BDD9F9E888A36CD9952A7_RuntimeMethod_var)));
	}

IL_0027:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_1;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)5)))
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish512Cipher_DecryptBlock_m16375AEF72B36D04FB1BDD9F9E888A36CD9952A7_RuntimeMethod_var)));
	}

IL_0033:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_block;
		NullCheck(L_8);
		int32_t L_9 = 0;
		int64_t L_10 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___0_block;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___0_block;
		NullCheck(L_14);
		int32_t L_15 = 2;
		int64_t L_16 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___0_block;
		NullCheck(L_17);
		int32_t L_18 = 3;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___0_block;
		NullCheck(L_20);
		int32_t L_21 = 4;
		int64_t L_22 = (int64_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_8 = L_22;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = ___0_block;
		NullCheck(L_23);
		int32_t L_24 = 5;
		int64_t L_25 = (int64_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = ___0_block;
		NullCheck(L_26);
		int32_t L_27 = 6;
		int64_t L_28 = (int64_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_10 = L_28;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = ___0_block;
		NullCheck(L_29);
		int32_t L_30 = 7;
		int64_t L_31 = (int64_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_11 = L_31;
		V_12 = ((int32_t)17);
		goto IL_03c8;
	}

IL_0064:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_2;
		int32_t L_33 = V_12;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_13 = L_35;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_3;
		int32_t L_37 = V_12;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		int32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_14 = L_39;
		uint64_t L_40 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = V_0;
		int32_t L_42 = V_13;
		NullCheck(L_41);
		int32_t L_43 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		int64_t L_44 = (int64_t)(L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_40, L_44));
		uint64_t L_45 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_46 = V_0;
		int32_t L_47 = V_13;
		NullCheck(L_46);
		int32_t L_48 = ((int32_t)il2cpp_codegen_add(L_47, 2));
		int64_t L_49 = (int64_t)(L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_45, L_49));
		uint64_t L_50 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_51 = V_0;
		int32_t L_52 = V_13;
		NullCheck(L_51);
		int32_t L_53 = ((int32_t)il2cpp_codegen_add(L_52, 3));
		int64_t L_54 = (int64_t)(L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_50, L_54));
		uint64_t L_55 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_56 = V_0;
		int32_t L_57 = V_13;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_add(L_57, 4));
		int64_t L_59 = (int64_t)(L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_55, L_59));
		uint64_t L_60 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_61 = V_0;
		int32_t L_62 = V_13;
		NullCheck(L_61);
		int32_t L_63 = ((int32_t)il2cpp_codegen_add(L_62, 5));
		int64_t L_64 = (int64_t)(L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_60, L_64));
		uint64_t L_65 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_66 = V_0;
		int32_t L_67 = V_13;
		NullCheck(L_66);
		int32_t L_68 = ((int32_t)il2cpp_codegen_add(L_67, 6));
		int64_t L_69 = (int64_t)(L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_70 = V_1;
		int32_t L_71 = V_14;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 1));
		int64_t L_73 = (int64_t)(L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_65, ((int64_t)il2cpp_codegen_add(L_69, L_73))));
		uint64_t L_74 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_75 = V_0;
		int32_t L_76 = V_13;
		NullCheck(L_75);
		int32_t L_77 = ((int32_t)il2cpp_codegen_add(L_76, 7));
		int64_t L_78 = (int64_t)(L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_79 = V_1;
		int32_t L_80 = V_14;
		NullCheck(L_79);
		int32_t L_81 = ((int32_t)il2cpp_codegen_add(L_80, 2));
		int64_t L_82 = (int64_t)(L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_74, ((int64_t)il2cpp_codegen_add(L_78, L_82))));
		uint64_t L_83 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_84 = V_0;
		int32_t L_85 = V_13;
		NullCheck(L_84);
		int32_t L_86 = ((int32_t)il2cpp_codegen_add(L_85, 8));
		int64_t L_87 = (int64_t)(L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		int32_t L_88 = V_12;
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_83, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_87, ((int64_t)(uint64_t)((uint32_t)L_88)))), ((int64_t)1)))));
		uint64_t L_89 = V_5;
		uint64_t L_90 = V_10;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var);
		uint64_t L_91;
		L_91 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_89, 8, L_90, NULL);
		V_5 = L_91;
		uint64_t L_92 = V_10;
		uint64_t L_93 = V_5;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_92, (int64_t)L_93));
		uint64_t L_94 = V_11;
		uint64_t L_95 = V_4;
		uint64_t L_96;
		L_96 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_94, ((int32_t)35), L_95, NULL);
		V_11 = L_96;
		uint64_t L_97 = V_4;
		uint64_t L_98 = V_11;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_97, (int64_t)L_98));
		uint64_t L_99 = V_9;
		uint64_t L_100 = V_6;
		uint64_t L_101;
		L_101 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_99, ((int32_t)56), L_100, NULL);
		V_9 = L_101;
		uint64_t L_102 = V_6;
		uint64_t L_103 = V_9;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_102, (int64_t)L_103));
		uint64_t L_104 = V_7;
		uint64_t L_105 = V_8;
		uint64_t L_106;
		L_106 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_104, ((int32_t)22), L_105, NULL);
		V_7 = L_106;
		uint64_t L_107 = V_8;
		uint64_t L_108 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_107, (int64_t)L_108));
		uint64_t L_109 = V_5;
		uint64_t L_110 = V_8;
		uint64_t L_111;
		L_111 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_109, ((int32_t)25), L_110, NULL);
		V_5 = L_111;
		uint64_t L_112 = V_8;
		uint64_t L_113 = V_5;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_112, (int64_t)L_113));
		uint64_t L_114 = V_7;
		uint64_t L_115 = V_10;
		uint64_t L_116;
		L_116 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_114, ((int32_t)29), L_115, NULL);
		V_7 = L_116;
		uint64_t L_117 = V_10;
		uint64_t L_118 = V_7;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_117, (int64_t)L_118));
		uint64_t L_119 = V_9;
		uint64_t L_120 = V_4;
		uint64_t L_121;
		L_121 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_119, ((int32_t)39), L_120, NULL);
		V_9 = L_121;
		uint64_t L_122 = V_4;
		uint64_t L_123 = V_9;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_122, (int64_t)L_123));
		uint64_t L_124 = V_11;
		uint64_t L_125 = V_6;
		uint64_t L_126;
		L_126 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_124, ((int32_t)43), L_125, NULL);
		V_11 = L_126;
		uint64_t L_127 = V_6;
		uint64_t L_128 = V_11;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_127, (int64_t)L_128));
		uint64_t L_129 = V_5;
		uint64_t L_130 = V_6;
		uint64_t L_131;
		L_131 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_129, ((int32_t)13), L_130, NULL);
		V_5 = L_131;
		uint64_t L_132 = V_6;
		uint64_t L_133 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_132, (int64_t)L_133));
		uint64_t L_134 = V_11;
		uint64_t L_135 = V_8;
		uint64_t L_136;
		L_136 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_134, ((int32_t)50), L_135, NULL);
		V_11 = L_136;
		uint64_t L_137 = V_8;
		uint64_t L_138 = V_11;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_137, (int64_t)L_138));
		uint64_t L_139 = V_9;
		uint64_t L_140 = V_10;
		uint64_t L_141;
		L_141 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_139, ((int32_t)10), L_140, NULL);
		V_9 = L_141;
		uint64_t L_142 = V_10;
		uint64_t L_143 = V_9;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_142, (int64_t)L_143));
		uint64_t L_144 = V_7;
		uint64_t L_145 = V_4;
		uint64_t L_146;
		L_146 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_144, ((int32_t)17), L_145, NULL);
		V_7 = L_146;
		uint64_t L_147 = V_4;
		uint64_t L_148 = V_7;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_147, (int64_t)L_148));
		uint64_t L_149 = V_5;
		uint64_t L_150 = V_4;
		uint64_t L_151;
		L_151 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_149, ((int32_t)39), L_150, NULL);
		V_5 = L_151;
		uint64_t L_152 = V_4;
		uint64_t L_153 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_152, (int64_t)L_153));
		uint64_t L_154 = V_7;
		uint64_t L_155 = V_6;
		uint64_t L_156;
		L_156 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_154, ((int32_t)30), L_155, NULL);
		V_7 = L_156;
		uint64_t L_157 = V_6;
		uint64_t L_158 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_157, (int64_t)L_158));
		uint64_t L_159 = V_9;
		uint64_t L_160 = V_8;
		uint64_t L_161;
		L_161 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_159, ((int32_t)34), L_160, NULL);
		V_9 = L_161;
		uint64_t L_162 = V_8;
		uint64_t L_163 = V_9;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_162, (int64_t)L_163));
		uint64_t L_164 = V_11;
		uint64_t L_165 = V_10;
		uint64_t L_166;
		L_166 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_164, ((int32_t)24), L_165, NULL);
		V_11 = L_166;
		uint64_t L_167 = V_10;
		uint64_t L_168 = V_11;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_167, (int64_t)L_168));
		uint64_t L_169 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_170 = V_0;
		int32_t L_171 = V_13;
		NullCheck(L_170);
		int32_t L_172 = L_171;
		int64_t L_173 = (int64_t)(L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_169, L_173));
		uint64_t L_174 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_175 = V_0;
		int32_t L_176 = V_13;
		NullCheck(L_175);
		int32_t L_177 = ((int32_t)il2cpp_codegen_add(L_176, 1));
		int64_t L_178 = (int64_t)(L_175)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_174, L_178));
		uint64_t L_179 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_180 = V_0;
		int32_t L_181 = V_13;
		NullCheck(L_180);
		int32_t L_182 = ((int32_t)il2cpp_codegen_add(L_181, 2));
		int64_t L_183 = (int64_t)(L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_179, L_183));
		uint64_t L_184 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_185 = V_0;
		int32_t L_186 = V_13;
		NullCheck(L_185);
		int32_t L_187 = ((int32_t)il2cpp_codegen_add(L_186, 3));
		int64_t L_188 = (int64_t)(L_185)->GetAt(static_cast<il2cpp_array_size_t>(L_187));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_184, L_188));
		uint64_t L_189 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_190 = V_0;
		int32_t L_191 = V_13;
		NullCheck(L_190);
		int32_t L_192 = ((int32_t)il2cpp_codegen_add(L_191, 4));
		int64_t L_193 = (int64_t)(L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_192));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_189, L_193));
		uint64_t L_194 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_195 = V_0;
		int32_t L_196 = V_13;
		NullCheck(L_195);
		int32_t L_197 = ((int32_t)il2cpp_codegen_add(L_196, 5));
		int64_t L_198 = (int64_t)(L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_199 = V_1;
		int32_t L_200 = V_14;
		NullCheck(L_199);
		int32_t L_201 = L_200;
		int64_t L_202 = (int64_t)(L_199)->GetAt(static_cast<il2cpp_array_size_t>(L_201));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_194, ((int64_t)il2cpp_codegen_add(L_198, L_202))));
		uint64_t L_203 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_204 = V_0;
		int32_t L_205 = V_13;
		NullCheck(L_204);
		int32_t L_206 = ((int32_t)il2cpp_codegen_add(L_205, 6));
		int64_t L_207 = (int64_t)(L_204)->GetAt(static_cast<il2cpp_array_size_t>(L_206));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_208 = V_1;
		int32_t L_209 = V_14;
		NullCheck(L_208);
		int32_t L_210 = ((int32_t)il2cpp_codegen_add(L_209, 1));
		int64_t L_211 = (int64_t)(L_208)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_203, ((int64_t)il2cpp_codegen_add(L_207, L_211))));
		uint64_t L_212 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_213 = V_0;
		int32_t L_214 = V_13;
		NullCheck(L_213);
		int32_t L_215 = ((int32_t)il2cpp_codegen_add(L_214, 7));
		int64_t L_216 = (int64_t)(L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_215));
		int32_t L_217 = V_12;
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_212, ((int64_t)il2cpp_codegen_add(L_216, ((int64_t)(uint64_t)((uint32_t)L_217))))));
		uint64_t L_218 = V_5;
		uint64_t L_219 = V_10;
		uint64_t L_220;
		L_220 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_218, ((int32_t)44), L_219, NULL);
		V_5 = L_220;
		uint64_t L_221 = V_10;
		uint64_t L_222 = V_5;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_221, (int64_t)L_222));
		uint64_t L_223 = V_11;
		uint64_t L_224 = V_4;
		uint64_t L_225;
		L_225 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_223, ((int32_t)9), L_224, NULL);
		V_11 = L_225;
		uint64_t L_226 = V_4;
		uint64_t L_227 = V_11;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_226, (int64_t)L_227));
		uint64_t L_228 = V_9;
		uint64_t L_229 = V_6;
		uint64_t L_230;
		L_230 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_228, ((int32_t)54), L_229, NULL);
		V_9 = L_230;
		uint64_t L_231 = V_6;
		uint64_t L_232 = V_9;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_231, (int64_t)L_232));
		uint64_t L_233 = V_7;
		uint64_t L_234 = V_8;
		uint64_t L_235;
		L_235 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_233, ((int32_t)56), L_234, NULL);
		V_7 = L_235;
		uint64_t L_236 = V_8;
		uint64_t L_237 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_236, (int64_t)L_237));
		uint64_t L_238 = V_5;
		uint64_t L_239 = V_8;
		uint64_t L_240;
		L_240 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_238, ((int32_t)17), L_239, NULL);
		V_5 = L_240;
		uint64_t L_241 = V_8;
		uint64_t L_242 = V_5;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_241, (int64_t)L_242));
		uint64_t L_243 = V_7;
		uint64_t L_244 = V_10;
		uint64_t L_245;
		L_245 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_243, ((int32_t)49), L_244, NULL);
		V_7 = L_245;
		uint64_t L_246 = V_10;
		uint64_t L_247 = V_7;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_246, (int64_t)L_247));
		uint64_t L_248 = V_9;
		uint64_t L_249 = V_4;
		uint64_t L_250;
		L_250 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_248, ((int32_t)36), L_249, NULL);
		V_9 = L_250;
		uint64_t L_251 = V_4;
		uint64_t L_252 = V_9;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_251, (int64_t)L_252));
		uint64_t L_253 = V_11;
		uint64_t L_254 = V_6;
		uint64_t L_255;
		L_255 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_253, ((int32_t)39), L_254, NULL);
		V_11 = L_255;
		uint64_t L_256 = V_6;
		uint64_t L_257 = V_11;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_256, (int64_t)L_257));
		uint64_t L_258 = V_5;
		uint64_t L_259 = V_6;
		uint64_t L_260;
		L_260 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_258, ((int32_t)33), L_259, NULL);
		V_5 = L_260;
		uint64_t L_261 = V_6;
		uint64_t L_262 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_261, (int64_t)L_262));
		uint64_t L_263 = V_11;
		uint64_t L_264 = V_8;
		uint64_t L_265;
		L_265 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_263, ((int32_t)27), L_264, NULL);
		V_11 = L_265;
		uint64_t L_266 = V_8;
		uint64_t L_267 = V_11;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_266, (int64_t)L_267));
		uint64_t L_268 = V_9;
		uint64_t L_269 = V_10;
		uint64_t L_270;
		L_270 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_268, ((int32_t)14), L_269, NULL);
		V_9 = L_270;
		uint64_t L_271 = V_10;
		uint64_t L_272 = V_9;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_271, (int64_t)L_272));
		uint64_t L_273 = V_7;
		uint64_t L_274 = V_4;
		uint64_t L_275;
		L_275 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_273, ((int32_t)42), L_274, NULL);
		V_7 = L_275;
		uint64_t L_276 = V_4;
		uint64_t L_277 = V_7;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_276, (int64_t)L_277));
		uint64_t L_278 = V_5;
		uint64_t L_279 = V_4;
		uint64_t L_280;
		L_280 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_278, ((int32_t)46), L_279, NULL);
		V_5 = L_280;
		uint64_t L_281 = V_4;
		uint64_t L_282 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_281, (int64_t)L_282));
		uint64_t L_283 = V_7;
		uint64_t L_284 = V_6;
		uint64_t L_285;
		L_285 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_283, ((int32_t)36), L_284, NULL);
		V_7 = L_285;
		uint64_t L_286 = V_6;
		uint64_t L_287 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_286, (int64_t)L_287));
		uint64_t L_288 = V_9;
		uint64_t L_289 = V_8;
		uint64_t L_290;
		L_290 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_288, ((int32_t)19), L_289, NULL);
		V_9 = L_290;
		uint64_t L_291 = V_8;
		uint64_t L_292 = V_9;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_291, (int64_t)L_292));
		uint64_t L_293 = V_11;
		uint64_t L_294 = V_10;
		uint64_t L_295;
		L_295 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_293, ((int32_t)37), L_294, NULL);
		V_11 = L_295;
		uint64_t L_296 = V_10;
		uint64_t L_297 = V_11;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_296, (int64_t)L_297));
		int32_t L_298 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_subtract(L_298, 2));
	}

IL_03c8:
	{
		int32_t L_299 = V_12;
		if ((((int32_t)L_299) >= ((int32_t)1)))
		{
			goto IL_0064;
		}
	}
	{
		uint64_t L_300 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_301 = V_0;
		NullCheck(L_301);
		int32_t L_302 = 0;
		int64_t L_303 = (int64_t)(L_301)->GetAt(static_cast<il2cpp_array_size_t>(L_302));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_300, L_303));
		uint64_t L_304 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_305 = V_0;
		NullCheck(L_305);
		int32_t L_306 = 1;
		int64_t L_307 = (int64_t)(L_305)->GetAt(static_cast<il2cpp_array_size_t>(L_306));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_304, L_307));
		uint64_t L_308 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_309 = V_0;
		NullCheck(L_309);
		int32_t L_310 = 2;
		int64_t L_311 = (int64_t)(L_309)->GetAt(static_cast<il2cpp_array_size_t>(L_310));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_308, L_311));
		uint64_t L_312 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_313 = V_0;
		NullCheck(L_313);
		int32_t L_314 = 3;
		int64_t L_315 = (int64_t)(L_313)->GetAt(static_cast<il2cpp_array_size_t>(L_314));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_312, L_315));
		uint64_t L_316 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_317 = V_0;
		NullCheck(L_317);
		int32_t L_318 = 4;
		int64_t L_319 = (int64_t)(L_317)->GetAt(static_cast<il2cpp_array_size_t>(L_318));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_316, L_319));
		uint64_t L_320 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_321 = V_0;
		NullCheck(L_321);
		int32_t L_322 = 5;
		int64_t L_323 = (int64_t)(L_321)->GetAt(static_cast<il2cpp_array_size_t>(L_322));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_324 = V_1;
		NullCheck(L_324);
		int32_t L_325 = 0;
		int64_t L_326 = (int64_t)(L_324)->GetAt(static_cast<il2cpp_array_size_t>(L_325));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_320, ((int64_t)il2cpp_codegen_add(L_323, L_326))));
		uint64_t L_327 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_328 = V_0;
		NullCheck(L_328);
		int32_t L_329 = 6;
		int64_t L_330 = (int64_t)(L_328)->GetAt(static_cast<il2cpp_array_size_t>(L_329));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_331 = V_1;
		NullCheck(L_331);
		int32_t L_332 = 1;
		int64_t L_333 = (int64_t)(L_331)->GetAt(static_cast<il2cpp_array_size_t>(L_332));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_327, ((int64_t)il2cpp_codegen_add(L_330, L_333))));
		uint64_t L_334 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_335 = V_0;
		NullCheck(L_335);
		int32_t L_336 = 7;
		int64_t L_337 = (int64_t)(L_335)->GetAt(static_cast<il2cpp_array_size_t>(L_336));
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_334, L_337));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_338 = ___1_state;
		uint64_t L_339 = V_4;
		NullCheck(L_338);
		(L_338)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_339);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_340 = ___1_state;
		uint64_t L_341 = V_5;
		NullCheck(L_340);
		(L_340)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_341);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_342 = ___1_state;
		uint64_t L_343 = V_6;
		NullCheck(L_342);
		(L_342)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_343);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_344 = ___1_state;
		uint64_t L_345 = V_7;
		NullCheck(L_344);
		(L_344)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_345);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_346 = ___1_state;
		uint64_t L_347 = V_8;
		NullCheck(L_346);
		(L_346)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_347);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_348 = ___1_state;
		uint64_t L_349 = V_9;
		NullCheck(L_348);
		(L_348)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_349);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_350 = ___1_state;
		uint64_t L_351 = V_10;
		NullCheck(L_350);
		(L_350)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_351);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_352 = ___1_state;
		uint64_t L_353 = V_11;
		NullCheck(L_352);
		(L_352)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_353);
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
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish1024Cipher::.ctor(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish1024Cipher__ctor_m9FDAE71F7FDA7B82A23D1AB80FFF68EEEF3CF7C8 (Threefish1024Cipher_t56D2C1AB2ED3A65A7E1F23EAE08F5EF51E25CC0E* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_kw, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_t, const RuntimeMethod* method) 
{
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ___0_kw;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ___1_t;
		ThreefishCipher__ctor_mDDBB9ED63AB053243A6C41346A724EC53DF5CCD8(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish1024Cipher::EncryptBlock(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish1024Cipher_EncryptBlock_m01621552A0885FD0F7F1326407DA9AE0CBD0181E (Threefish1024Cipher_t56D2C1AB2ED3A65A7E1F23EAE08F5EF51E25CC0E* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_block, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_outWords, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	uint64_t V_15 = 0;
	uint64_t V_16 = 0;
	uint64_t V_17 = 0;
	uint64_t V_18 = 0;
	uint64_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1*)__this)->___kw_1;
		V_0 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ((ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1*)__this)->___t_0;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var))->___MOD17_11;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var))->___MOD3_13;
		V_3 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)33))))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish1024Cipher_EncryptBlock_m01621552A0885FD0F7F1326407DA9AE0CBD0181E_RuntimeMethod_var)));
	}

IL_0027:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_1;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)5)))
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish1024Cipher_EncryptBlock_m01621552A0885FD0F7F1326407DA9AE0CBD0181E_RuntimeMethod_var)));
	}

IL_0033:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_block;
		NullCheck(L_8);
		int32_t L_9 = 0;
		int64_t L_10 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___0_block;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___0_block;
		NullCheck(L_14);
		int32_t L_15 = 2;
		int64_t L_16 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___0_block;
		NullCheck(L_17);
		int32_t L_18 = 3;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___0_block;
		NullCheck(L_20);
		int32_t L_21 = 4;
		int64_t L_22 = (int64_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_8 = L_22;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = ___0_block;
		NullCheck(L_23);
		int32_t L_24 = 5;
		int64_t L_25 = (int64_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = ___0_block;
		NullCheck(L_26);
		int32_t L_27 = 6;
		int64_t L_28 = (int64_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_10 = L_28;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = ___0_block;
		NullCheck(L_29);
		int32_t L_30 = 7;
		int64_t L_31 = (int64_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_11 = L_31;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = ___0_block;
		NullCheck(L_32);
		int32_t L_33 = 8;
		int64_t L_34 = (int64_t)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_12 = L_34;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_35 = ___0_block;
		NullCheck(L_35);
		int32_t L_36 = ((int32_t)9);
		int64_t L_37 = (int64_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_13 = L_37;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_38 = ___0_block;
		NullCheck(L_38);
		int32_t L_39 = ((int32_t)10);
		int64_t L_40 = (int64_t)(L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_14 = L_40;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = ___0_block;
		NullCheck(L_41);
		int32_t L_42 = ((int32_t)11);
		int64_t L_43 = (int64_t)(L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_15 = L_43;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_44 = ___0_block;
		NullCheck(L_44);
		int32_t L_45 = ((int32_t)12);
		int64_t L_46 = (int64_t)(L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_16 = L_46;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_47 = ___0_block;
		NullCheck(L_47);
		int32_t L_48 = ((int32_t)13);
		int64_t L_49 = (int64_t)(L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_17 = L_49;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_50 = ___0_block;
		NullCheck(L_50);
		int32_t L_51 = ((int32_t)14);
		int64_t L_52 = (int64_t)(L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_18 = L_52;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_53 = ___0_block;
		NullCheck(L_53);
		int32_t L_54 = ((int32_t)15);
		int64_t L_55 = (int64_t)(L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_19 = L_55;
		uint64_t L_56 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_57 = V_0;
		NullCheck(L_57);
		int32_t L_58 = 0;
		int64_t L_59 = (int64_t)(L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_56, L_59));
		uint64_t L_60 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_61 = V_0;
		NullCheck(L_61);
		int32_t L_62 = 1;
		int64_t L_63 = (int64_t)(L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_60, L_63));
		uint64_t L_64 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_65 = V_0;
		NullCheck(L_65);
		int32_t L_66 = 2;
		int64_t L_67 = (int64_t)(L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_64, L_67));
		uint64_t L_68 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_69 = V_0;
		NullCheck(L_69);
		int32_t L_70 = 3;
		int64_t L_71 = (int64_t)(L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_68, L_71));
		uint64_t L_72 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_73 = V_0;
		NullCheck(L_73);
		int32_t L_74 = 4;
		int64_t L_75 = (int64_t)(L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_72, L_75));
		uint64_t L_76 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_77 = V_0;
		NullCheck(L_77);
		int32_t L_78 = 5;
		int64_t L_79 = (int64_t)(L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_76, L_79));
		uint64_t L_80 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_81 = V_0;
		NullCheck(L_81);
		int32_t L_82 = 6;
		int64_t L_83 = (int64_t)(L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_80, L_83));
		uint64_t L_84 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_85 = V_0;
		NullCheck(L_85);
		int32_t L_86 = 7;
		int64_t L_87 = (int64_t)(L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_84, L_87));
		uint64_t L_88 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_89 = V_0;
		NullCheck(L_89);
		int32_t L_90 = 8;
		int64_t L_91 = (int64_t)(L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_88, L_91));
		uint64_t L_92 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_93 = V_0;
		NullCheck(L_93);
		int32_t L_94 = ((int32_t)9);
		int64_t L_95 = (int64_t)(L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_92, L_95));
		uint64_t L_96 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_97 = V_0;
		NullCheck(L_97);
		int32_t L_98 = ((int32_t)10);
		int64_t L_99 = (int64_t)(L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_96, L_99));
		uint64_t L_100 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_101 = V_0;
		NullCheck(L_101);
		int32_t L_102 = ((int32_t)11);
		int64_t L_103 = (int64_t)(L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_100, L_103));
		uint64_t L_104 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_105 = V_0;
		NullCheck(L_105);
		int32_t L_106 = ((int32_t)12);
		int64_t L_107 = (int64_t)(L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_104, L_107));
		uint64_t L_108 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_109 = V_0;
		NullCheck(L_109);
		int32_t L_110 = ((int32_t)13);
		int64_t L_111 = (int64_t)(L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_112 = V_1;
		NullCheck(L_112);
		int32_t L_113 = 0;
		int64_t L_114 = (int64_t)(L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_108, ((int64_t)il2cpp_codegen_add(L_111, L_114))));
		uint64_t L_115 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_116 = V_0;
		NullCheck(L_116);
		int32_t L_117 = ((int32_t)14);
		int64_t L_118 = (int64_t)(L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_119 = V_1;
		NullCheck(L_119);
		int32_t L_120 = 1;
		int64_t L_121 = (int64_t)(L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_115, ((int64_t)il2cpp_codegen_add(L_118, L_121))));
		uint64_t L_122 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124 = ((int32_t)15);
		int64_t L_125 = (int64_t)(L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_122, L_125));
		V_20 = 1;
		goto IL_0780;
	}

IL_0121:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_126 = V_2;
		int32_t L_127 = V_20;
		NullCheck(L_126);
		int32_t L_128 = L_127;
		int32_t L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		V_21 = L_129;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_130 = V_3;
		int32_t L_131 = V_20;
		NullCheck(L_130);
		int32_t L_132 = L_131;
		int32_t L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		V_22 = L_133;
		uint64_t L_134 = V_5;
		uint64_t L_135 = V_4;
		uint64_t L_136 = V_5;
		int64_t L_137 = ((int64_t)il2cpp_codegen_add((int64_t)L_135, (int64_t)L_136));
		V_4 = L_137;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var);
		uint64_t L_138;
		L_138 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_134, ((int32_t)24), L_137, NULL);
		V_5 = L_138;
		uint64_t L_139 = V_7;
		uint64_t L_140 = V_6;
		uint64_t L_141 = V_7;
		int64_t L_142 = ((int64_t)il2cpp_codegen_add((int64_t)L_140, (int64_t)L_141));
		V_6 = L_142;
		uint64_t L_143;
		L_143 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_139, ((int32_t)13), L_142, NULL);
		V_7 = L_143;
		uint64_t L_144 = V_9;
		uint64_t L_145 = V_8;
		uint64_t L_146 = V_9;
		int64_t L_147 = ((int64_t)il2cpp_codegen_add((int64_t)L_145, (int64_t)L_146));
		V_8 = L_147;
		uint64_t L_148;
		L_148 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_144, 8, L_147, NULL);
		V_9 = L_148;
		uint64_t L_149 = V_11;
		uint64_t L_150 = V_10;
		uint64_t L_151 = V_11;
		int64_t L_152 = ((int64_t)il2cpp_codegen_add((int64_t)L_150, (int64_t)L_151));
		V_10 = L_152;
		uint64_t L_153;
		L_153 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_149, ((int32_t)47), L_152, NULL);
		V_11 = L_153;
		uint64_t L_154 = V_13;
		uint64_t L_155 = V_12;
		uint64_t L_156 = V_13;
		int64_t L_157 = ((int64_t)il2cpp_codegen_add((int64_t)L_155, (int64_t)L_156));
		V_12 = L_157;
		uint64_t L_158;
		L_158 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_154, 8, L_157, NULL);
		V_13 = L_158;
		uint64_t L_159 = V_15;
		uint64_t L_160 = V_14;
		uint64_t L_161 = V_15;
		int64_t L_162 = ((int64_t)il2cpp_codegen_add((int64_t)L_160, (int64_t)L_161));
		V_14 = L_162;
		uint64_t L_163;
		L_163 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_159, ((int32_t)17), L_162, NULL);
		V_15 = L_163;
		uint64_t L_164 = V_17;
		uint64_t L_165 = V_16;
		uint64_t L_166 = V_17;
		int64_t L_167 = ((int64_t)il2cpp_codegen_add((int64_t)L_165, (int64_t)L_166));
		V_16 = L_167;
		uint64_t L_168;
		L_168 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_164, ((int32_t)22), L_167, NULL);
		V_17 = L_168;
		uint64_t L_169 = V_19;
		uint64_t L_170 = V_18;
		uint64_t L_171 = V_19;
		int64_t L_172 = ((int64_t)il2cpp_codegen_add((int64_t)L_170, (int64_t)L_171));
		V_18 = L_172;
		uint64_t L_173;
		L_173 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_169, ((int32_t)37), L_172, NULL);
		V_19 = L_173;
		uint64_t L_174 = V_13;
		uint64_t L_175 = V_4;
		uint64_t L_176 = V_13;
		int64_t L_177 = ((int64_t)il2cpp_codegen_add((int64_t)L_175, (int64_t)L_176));
		V_4 = L_177;
		uint64_t L_178;
		L_178 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_174, ((int32_t)38), L_177, NULL);
		V_13 = L_178;
		uint64_t L_179 = V_17;
		uint64_t L_180 = V_6;
		uint64_t L_181 = V_17;
		int64_t L_182 = ((int64_t)il2cpp_codegen_add((int64_t)L_180, (int64_t)L_181));
		V_6 = L_182;
		uint64_t L_183;
		L_183 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_179, ((int32_t)19), L_182, NULL);
		V_17 = L_183;
		uint64_t L_184 = V_15;
		uint64_t L_185 = V_10;
		uint64_t L_186 = V_15;
		int64_t L_187 = ((int64_t)il2cpp_codegen_add((int64_t)L_185, (int64_t)L_186));
		V_10 = L_187;
		uint64_t L_188;
		L_188 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_184, ((int32_t)10), L_187, NULL);
		V_15 = L_188;
		uint64_t L_189 = V_19;
		uint64_t L_190 = V_8;
		uint64_t L_191 = V_19;
		int64_t L_192 = ((int64_t)il2cpp_codegen_add((int64_t)L_190, (int64_t)L_191));
		V_8 = L_192;
		uint64_t L_193;
		L_193 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_189, ((int32_t)55), L_192, NULL);
		V_19 = L_193;
		uint64_t L_194 = V_11;
		uint64_t L_195 = V_14;
		uint64_t L_196 = V_11;
		int64_t L_197 = ((int64_t)il2cpp_codegen_add((int64_t)L_195, (int64_t)L_196));
		V_14 = L_197;
		uint64_t L_198;
		L_198 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_194, ((int32_t)49), L_197, NULL);
		V_11 = L_198;
		uint64_t L_199 = V_7;
		uint64_t L_200 = V_16;
		uint64_t L_201 = V_7;
		int64_t L_202 = ((int64_t)il2cpp_codegen_add((int64_t)L_200, (int64_t)L_201));
		V_16 = L_202;
		uint64_t L_203;
		L_203 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_199, ((int32_t)18), L_202, NULL);
		V_7 = L_203;
		uint64_t L_204 = V_9;
		uint64_t L_205 = V_18;
		uint64_t L_206 = V_9;
		int64_t L_207 = ((int64_t)il2cpp_codegen_add((int64_t)L_205, (int64_t)L_206));
		V_18 = L_207;
		uint64_t L_208;
		L_208 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_204, ((int32_t)23), L_207, NULL);
		V_9 = L_208;
		uint64_t L_209 = V_5;
		uint64_t L_210 = V_12;
		uint64_t L_211 = V_5;
		int64_t L_212 = ((int64_t)il2cpp_codegen_add((int64_t)L_210, (int64_t)L_211));
		V_12 = L_212;
		uint64_t L_213;
		L_213 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_209, ((int32_t)52), L_212, NULL);
		V_5 = L_213;
		uint64_t L_214 = V_11;
		uint64_t L_215 = V_4;
		uint64_t L_216 = V_11;
		int64_t L_217 = ((int64_t)il2cpp_codegen_add((int64_t)L_215, (int64_t)L_216));
		V_4 = L_217;
		uint64_t L_218;
		L_218 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_214, ((int32_t)33), L_217, NULL);
		V_11 = L_218;
		uint64_t L_219 = V_9;
		uint64_t L_220 = V_6;
		uint64_t L_221 = V_9;
		int64_t L_222 = ((int64_t)il2cpp_codegen_add((int64_t)L_220, (int64_t)L_221));
		V_6 = L_222;
		uint64_t L_223;
		L_223 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_219, 4, L_222, NULL);
		V_9 = L_223;
		uint64_t L_224 = V_7;
		uint64_t L_225 = V_8;
		uint64_t L_226 = V_7;
		int64_t L_227 = ((int64_t)il2cpp_codegen_add((int64_t)L_225, (int64_t)L_226));
		V_8 = L_227;
		uint64_t L_228;
		L_228 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_224, ((int32_t)51), L_227, NULL);
		V_7 = L_228;
		uint64_t L_229 = V_5;
		uint64_t L_230 = V_10;
		uint64_t L_231 = V_5;
		int64_t L_232 = ((int64_t)il2cpp_codegen_add((int64_t)L_230, (int64_t)L_231));
		V_10 = L_232;
		uint64_t L_233;
		L_233 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_229, ((int32_t)13), L_232, NULL);
		V_5 = L_233;
		uint64_t L_234 = V_19;
		uint64_t L_235 = V_16;
		uint64_t L_236 = V_19;
		int64_t L_237 = ((int64_t)il2cpp_codegen_add((int64_t)L_235, (int64_t)L_236));
		V_16 = L_237;
		uint64_t L_238;
		L_238 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_234, ((int32_t)34), L_237, NULL);
		V_19 = L_238;
		uint64_t L_239 = V_17;
		uint64_t L_240 = V_18;
		uint64_t L_241 = V_17;
		int64_t L_242 = ((int64_t)il2cpp_codegen_add((int64_t)L_240, (int64_t)L_241));
		V_18 = L_242;
		uint64_t L_243;
		L_243 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_239, ((int32_t)41), L_242, NULL);
		V_17 = L_243;
		uint64_t L_244 = V_15;
		uint64_t L_245 = V_12;
		uint64_t L_246 = V_15;
		int64_t L_247 = ((int64_t)il2cpp_codegen_add((int64_t)L_245, (int64_t)L_246));
		V_12 = L_247;
		uint64_t L_248;
		L_248 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_244, ((int32_t)59), L_247, NULL);
		V_15 = L_248;
		uint64_t L_249 = V_13;
		uint64_t L_250 = V_14;
		uint64_t L_251 = V_13;
		int64_t L_252 = ((int64_t)il2cpp_codegen_add((int64_t)L_250, (int64_t)L_251));
		V_14 = L_252;
		uint64_t L_253;
		L_253 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_249, ((int32_t)17), L_252, NULL);
		V_13 = L_253;
		uint64_t L_254 = V_19;
		uint64_t L_255 = V_4;
		uint64_t L_256 = V_19;
		int64_t L_257 = ((int64_t)il2cpp_codegen_add((int64_t)L_255, (int64_t)L_256));
		V_4 = L_257;
		uint64_t L_258;
		L_258 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_254, 5, L_257, NULL);
		V_19 = L_258;
		uint64_t L_259 = V_15;
		uint64_t L_260 = V_6;
		uint64_t L_261 = V_15;
		int64_t L_262 = ((int64_t)il2cpp_codegen_add((int64_t)L_260, (int64_t)L_261));
		V_6 = L_262;
		uint64_t L_263;
		L_263 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_259, ((int32_t)20), L_262, NULL);
		V_15 = L_263;
		uint64_t L_264 = V_17;
		uint64_t L_265 = V_10;
		uint64_t L_266 = V_17;
		int64_t L_267 = ((int64_t)il2cpp_codegen_add((int64_t)L_265, (int64_t)L_266));
		V_10 = L_267;
		uint64_t L_268;
		L_268 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_264, ((int32_t)48), L_267, NULL);
		V_17 = L_268;
		uint64_t L_269 = V_13;
		uint64_t L_270 = V_8;
		uint64_t L_271 = V_13;
		int64_t L_272 = ((int64_t)il2cpp_codegen_add((int64_t)L_270, (int64_t)L_271));
		V_8 = L_272;
		uint64_t L_273;
		L_273 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_269, ((int32_t)41), L_272, NULL);
		V_13 = L_273;
		uint64_t L_274 = V_5;
		uint64_t L_275 = V_18;
		uint64_t L_276 = V_5;
		int64_t L_277 = ((int64_t)il2cpp_codegen_add((int64_t)L_275, (int64_t)L_276));
		V_18 = L_277;
		uint64_t L_278;
		L_278 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_274, ((int32_t)47), L_277, NULL);
		V_5 = L_278;
		uint64_t L_279 = V_9;
		uint64_t L_280 = V_12;
		uint64_t L_281 = V_9;
		int64_t L_282 = ((int64_t)il2cpp_codegen_add((int64_t)L_280, (int64_t)L_281));
		V_12 = L_282;
		uint64_t L_283;
		L_283 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_279, ((int32_t)28), L_282, NULL);
		V_9 = L_283;
		uint64_t L_284 = V_7;
		uint64_t L_285 = V_14;
		uint64_t L_286 = V_7;
		int64_t L_287 = ((int64_t)il2cpp_codegen_add((int64_t)L_285, (int64_t)L_286));
		V_14 = L_287;
		uint64_t L_288;
		L_288 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_284, ((int32_t)16), L_287, NULL);
		V_7 = L_288;
		uint64_t L_289 = V_11;
		uint64_t L_290 = V_16;
		uint64_t L_291 = V_11;
		int64_t L_292 = ((int64_t)il2cpp_codegen_add((int64_t)L_290, (int64_t)L_291));
		V_16 = L_292;
		uint64_t L_293;
		L_293 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_289, ((int32_t)25), L_292, NULL);
		V_11 = L_293;
		uint64_t L_294 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_295 = V_0;
		int32_t L_296 = V_21;
		NullCheck(L_295);
		int32_t L_297 = L_296;
		int64_t L_298 = (int64_t)(L_295)->GetAt(static_cast<il2cpp_array_size_t>(L_297));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_294, L_298));
		uint64_t L_299 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_300 = V_0;
		int32_t L_301 = V_21;
		NullCheck(L_300);
		int32_t L_302 = ((int32_t)il2cpp_codegen_add(L_301, 1));
		int64_t L_303 = (int64_t)(L_300)->GetAt(static_cast<il2cpp_array_size_t>(L_302));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_299, L_303));
		uint64_t L_304 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_305 = V_0;
		int32_t L_306 = V_21;
		NullCheck(L_305);
		int32_t L_307 = ((int32_t)il2cpp_codegen_add(L_306, 2));
		int64_t L_308 = (int64_t)(L_305)->GetAt(static_cast<il2cpp_array_size_t>(L_307));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_304, L_308));
		uint64_t L_309 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_310 = V_0;
		int32_t L_311 = V_21;
		NullCheck(L_310);
		int32_t L_312 = ((int32_t)il2cpp_codegen_add(L_311, 3));
		int64_t L_313 = (int64_t)(L_310)->GetAt(static_cast<il2cpp_array_size_t>(L_312));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_309, L_313));
		uint64_t L_314 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_315 = V_0;
		int32_t L_316 = V_21;
		NullCheck(L_315);
		int32_t L_317 = ((int32_t)il2cpp_codegen_add(L_316, 4));
		int64_t L_318 = (int64_t)(L_315)->GetAt(static_cast<il2cpp_array_size_t>(L_317));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_314, L_318));
		uint64_t L_319 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_320 = V_0;
		int32_t L_321 = V_21;
		NullCheck(L_320);
		int32_t L_322 = ((int32_t)il2cpp_codegen_add(L_321, 5));
		int64_t L_323 = (int64_t)(L_320)->GetAt(static_cast<il2cpp_array_size_t>(L_322));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_319, L_323));
		uint64_t L_324 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_325 = V_0;
		int32_t L_326 = V_21;
		NullCheck(L_325);
		int32_t L_327 = ((int32_t)il2cpp_codegen_add(L_326, 6));
		int64_t L_328 = (int64_t)(L_325)->GetAt(static_cast<il2cpp_array_size_t>(L_327));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_324, L_328));
		uint64_t L_329 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_330 = V_0;
		int32_t L_331 = V_21;
		NullCheck(L_330);
		int32_t L_332 = ((int32_t)il2cpp_codegen_add(L_331, 7));
		int64_t L_333 = (int64_t)(L_330)->GetAt(static_cast<il2cpp_array_size_t>(L_332));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_329, L_333));
		uint64_t L_334 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_335 = V_0;
		int32_t L_336 = V_21;
		NullCheck(L_335);
		int32_t L_337 = ((int32_t)il2cpp_codegen_add(L_336, 8));
		int64_t L_338 = (int64_t)(L_335)->GetAt(static_cast<il2cpp_array_size_t>(L_337));
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_334, L_338));
		uint64_t L_339 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_340 = V_0;
		int32_t L_341 = V_21;
		NullCheck(L_340);
		int32_t L_342 = ((int32_t)il2cpp_codegen_add(L_341, ((int32_t)9)));
		int64_t L_343 = (int64_t)(L_340)->GetAt(static_cast<il2cpp_array_size_t>(L_342));
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_339, L_343));
		uint64_t L_344 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_345 = V_0;
		int32_t L_346 = V_21;
		NullCheck(L_345);
		int32_t L_347 = ((int32_t)il2cpp_codegen_add(L_346, ((int32_t)10)));
		int64_t L_348 = (int64_t)(L_345)->GetAt(static_cast<il2cpp_array_size_t>(L_347));
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_344, L_348));
		uint64_t L_349 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_350 = V_0;
		int32_t L_351 = V_21;
		NullCheck(L_350);
		int32_t L_352 = ((int32_t)il2cpp_codegen_add(L_351, ((int32_t)11)));
		int64_t L_353 = (int64_t)(L_350)->GetAt(static_cast<il2cpp_array_size_t>(L_352));
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_349, L_353));
		uint64_t L_354 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_355 = V_0;
		int32_t L_356 = V_21;
		NullCheck(L_355);
		int32_t L_357 = ((int32_t)il2cpp_codegen_add(L_356, ((int32_t)12)));
		int64_t L_358 = (int64_t)(L_355)->GetAt(static_cast<il2cpp_array_size_t>(L_357));
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_354, L_358));
		uint64_t L_359 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_360 = V_0;
		int32_t L_361 = V_21;
		NullCheck(L_360);
		int32_t L_362 = ((int32_t)il2cpp_codegen_add(L_361, ((int32_t)13)));
		int64_t L_363 = (int64_t)(L_360)->GetAt(static_cast<il2cpp_array_size_t>(L_362));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_364 = V_1;
		int32_t L_365 = V_22;
		NullCheck(L_364);
		int32_t L_366 = L_365;
		int64_t L_367 = (int64_t)(L_364)->GetAt(static_cast<il2cpp_array_size_t>(L_366));
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_359, ((int64_t)il2cpp_codegen_add(L_363, L_367))));
		uint64_t L_368 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_369 = V_0;
		int32_t L_370 = V_21;
		NullCheck(L_369);
		int32_t L_371 = ((int32_t)il2cpp_codegen_add(L_370, ((int32_t)14)));
		int64_t L_372 = (int64_t)(L_369)->GetAt(static_cast<il2cpp_array_size_t>(L_371));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_373 = V_1;
		int32_t L_374 = V_22;
		NullCheck(L_373);
		int32_t L_375 = ((int32_t)il2cpp_codegen_add(L_374, 1));
		int64_t L_376 = (int64_t)(L_373)->GetAt(static_cast<il2cpp_array_size_t>(L_375));
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_368, ((int64_t)il2cpp_codegen_add(L_372, L_376))));
		uint64_t L_377 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_378 = V_0;
		int32_t L_379 = V_21;
		NullCheck(L_378);
		int32_t L_380 = ((int32_t)il2cpp_codegen_add(L_379, ((int32_t)15)));
		int64_t L_381 = (int64_t)(L_378)->GetAt(static_cast<il2cpp_array_size_t>(L_380));
		int32_t L_382 = V_20;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_377, ((int64_t)il2cpp_codegen_add(L_381, ((int64_t)(uint64_t)((uint32_t)L_382))))));
		uint64_t L_383 = V_5;
		uint64_t L_384 = V_4;
		uint64_t L_385 = V_5;
		int64_t L_386 = ((int64_t)il2cpp_codegen_add((int64_t)L_384, (int64_t)L_385));
		V_4 = L_386;
		uint64_t L_387;
		L_387 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_383, ((int32_t)41), L_386, NULL);
		V_5 = L_387;
		uint64_t L_388 = V_7;
		uint64_t L_389 = V_6;
		uint64_t L_390 = V_7;
		int64_t L_391 = ((int64_t)il2cpp_codegen_add((int64_t)L_389, (int64_t)L_390));
		V_6 = L_391;
		uint64_t L_392;
		L_392 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_388, ((int32_t)9), L_391, NULL);
		V_7 = L_392;
		uint64_t L_393 = V_9;
		uint64_t L_394 = V_8;
		uint64_t L_395 = V_9;
		int64_t L_396 = ((int64_t)il2cpp_codegen_add((int64_t)L_394, (int64_t)L_395));
		V_8 = L_396;
		uint64_t L_397;
		L_397 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_393, ((int32_t)37), L_396, NULL);
		V_9 = L_397;
		uint64_t L_398 = V_11;
		uint64_t L_399 = V_10;
		uint64_t L_400 = V_11;
		int64_t L_401 = ((int64_t)il2cpp_codegen_add((int64_t)L_399, (int64_t)L_400));
		V_10 = L_401;
		uint64_t L_402;
		L_402 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_398, ((int32_t)31), L_401, NULL);
		V_11 = L_402;
		uint64_t L_403 = V_13;
		uint64_t L_404 = V_12;
		uint64_t L_405 = V_13;
		int64_t L_406 = ((int64_t)il2cpp_codegen_add((int64_t)L_404, (int64_t)L_405));
		V_12 = L_406;
		uint64_t L_407;
		L_407 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_403, ((int32_t)12), L_406, NULL);
		V_13 = L_407;
		uint64_t L_408 = V_15;
		uint64_t L_409 = V_14;
		uint64_t L_410 = V_15;
		int64_t L_411 = ((int64_t)il2cpp_codegen_add((int64_t)L_409, (int64_t)L_410));
		V_14 = L_411;
		uint64_t L_412;
		L_412 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_408, ((int32_t)47), L_411, NULL);
		V_15 = L_412;
		uint64_t L_413 = V_17;
		uint64_t L_414 = V_16;
		uint64_t L_415 = V_17;
		int64_t L_416 = ((int64_t)il2cpp_codegen_add((int64_t)L_414, (int64_t)L_415));
		V_16 = L_416;
		uint64_t L_417;
		L_417 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_413, ((int32_t)44), L_416, NULL);
		V_17 = L_417;
		uint64_t L_418 = V_19;
		uint64_t L_419 = V_18;
		uint64_t L_420 = V_19;
		int64_t L_421 = ((int64_t)il2cpp_codegen_add((int64_t)L_419, (int64_t)L_420));
		V_18 = L_421;
		uint64_t L_422;
		L_422 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_418, ((int32_t)30), L_421, NULL);
		V_19 = L_422;
		uint64_t L_423 = V_13;
		uint64_t L_424 = V_4;
		uint64_t L_425 = V_13;
		int64_t L_426 = ((int64_t)il2cpp_codegen_add((int64_t)L_424, (int64_t)L_425));
		V_4 = L_426;
		uint64_t L_427;
		L_427 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_423, ((int32_t)16), L_426, NULL);
		V_13 = L_427;
		uint64_t L_428 = V_17;
		uint64_t L_429 = V_6;
		uint64_t L_430 = V_17;
		int64_t L_431 = ((int64_t)il2cpp_codegen_add((int64_t)L_429, (int64_t)L_430));
		V_6 = L_431;
		uint64_t L_432;
		L_432 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_428, ((int32_t)34), L_431, NULL);
		V_17 = L_432;
		uint64_t L_433 = V_15;
		uint64_t L_434 = V_10;
		uint64_t L_435 = V_15;
		int64_t L_436 = ((int64_t)il2cpp_codegen_add((int64_t)L_434, (int64_t)L_435));
		V_10 = L_436;
		uint64_t L_437;
		L_437 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_433, ((int32_t)56), L_436, NULL);
		V_15 = L_437;
		uint64_t L_438 = V_19;
		uint64_t L_439 = V_8;
		uint64_t L_440 = V_19;
		int64_t L_441 = ((int64_t)il2cpp_codegen_add((int64_t)L_439, (int64_t)L_440));
		V_8 = L_441;
		uint64_t L_442;
		L_442 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_438, ((int32_t)51), L_441, NULL);
		V_19 = L_442;
		uint64_t L_443 = V_11;
		uint64_t L_444 = V_14;
		uint64_t L_445 = V_11;
		int64_t L_446 = ((int64_t)il2cpp_codegen_add((int64_t)L_444, (int64_t)L_445));
		V_14 = L_446;
		uint64_t L_447;
		L_447 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_443, 4, L_446, NULL);
		V_11 = L_447;
		uint64_t L_448 = V_7;
		uint64_t L_449 = V_16;
		uint64_t L_450 = V_7;
		int64_t L_451 = ((int64_t)il2cpp_codegen_add((int64_t)L_449, (int64_t)L_450));
		V_16 = L_451;
		uint64_t L_452;
		L_452 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_448, ((int32_t)53), L_451, NULL);
		V_7 = L_452;
		uint64_t L_453 = V_9;
		uint64_t L_454 = V_18;
		uint64_t L_455 = V_9;
		int64_t L_456 = ((int64_t)il2cpp_codegen_add((int64_t)L_454, (int64_t)L_455));
		V_18 = L_456;
		uint64_t L_457;
		L_457 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_453, ((int32_t)42), L_456, NULL);
		V_9 = L_457;
		uint64_t L_458 = V_5;
		uint64_t L_459 = V_12;
		uint64_t L_460 = V_5;
		int64_t L_461 = ((int64_t)il2cpp_codegen_add((int64_t)L_459, (int64_t)L_460));
		V_12 = L_461;
		uint64_t L_462;
		L_462 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_458, ((int32_t)41), L_461, NULL);
		V_5 = L_462;
		uint64_t L_463 = V_11;
		uint64_t L_464 = V_4;
		uint64_t L_465 = V_11;
		int64_t L_466 = ((int64_t)il2cpp_codegen_add((int64_t)L_464, (int64_t)L_465));
		V_4 = L_466;
		uint64_t L_467;
		L_467 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_463, ((int32_t)31), L_466, NULL);
		V_11 = L_467;
		uint64_t L_468 = V_9;
		uint64_t L_469 = V_6;
		uint64_t L_470 = V_9;
		int64_t L_471 = ((int64_t)il2cpp_codegen_add((int64_t)L_469, (int64_t)L_470));
		V_6 = L_471;
		uint64_t L_472;
		L_472 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_468, ((int32_t)44), L_471, NULL);
		V_9 = L_472;
		uint64_t L_473 = V_7;
		uint64_t L_474 = V_8;
		uint64_t L_475 = V_7;
		int64_t L_476 = ((int64_t)il2cpp_codegen_add((int64_t)L_474, (int64_t)L_475));
		V_8 = L_476;
		uint64_t L_477;
		L_477 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_473, ((int32_t)47), L_476, NULL);
		V_7 = L_477;
		uint64_t L_478 = V_5;
		uint64_t L_479 = V_10;
		uint64_t L_480 = V_5;
		int64_t L_481 = ((int64_t)il2cpp_codegen_add((int64_t)L_479, (int64_t)L_480));
		V_10 = L_481;
		uint64_t L_482;
		L_482 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_478, ((int32_t)46), L_481, NULL);
		V_5 = L_482;
		uint64_t L_483 = V_19;
		uint64_t L_484 = V_16;
		uint64_t L_485 = V_19;
		int64_t L_486 = ((int64_t)il2cpp_codegen_add((int64_t)L_484, (int64_t)L_485));
		V_16 = L_486;
		uint64_t L_487;
		L_487 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_483, ((int32_t)19), L_486, NULL);
		V_19 = L_487;
		uint64_t L_488 = V_17;
		uint64_t L_489 = V_18;
		uint64_t L_490 = V_17;
		int64_t L_491 = ((int64_t)il2cpp_codegen_add((int64_t)L_489, (int64_t)L_490));
		V_18 = L_491;
		uint64_t L_492;
		L_492 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_488, ((int32_t)42), L_491, NULL);
		V_17 = L_492;
		uint64_t L_493 = V_15;
		uint64_t L_494 = V_12;
		uint64_t L_495 = V_15;
		int64_t L_496 = ((int64_t)il2cpp_codegen_add((int64_t)L_494, (int64_t)L_495));
		V_12 = L_496;
		uint64_t L_497;
		L_497 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_493, ((int32_t)44), L_496, NULL);
		V_15 = L_497;
		uint64_t L_498 = V_13;
		uint64_t L_499 = V_14;
		uint64_t L_500 = V_13;
		int64_t L_501 = ((int64_t)il2cpp_codegen_add((int64_t)L_499, (int64_t)L_500));
		V_14 = L_501;
		uint64_t L_502;
		L_502 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_498, ((int32_t)25), L_501, NULL);
		V_13 = L_502;
		uint64_t L_503 = V_19;
		uint64_t L_504 = V_4;
		uint64_t L_505 = V_19;
		int64_t L_506 = ((int64_t)il2cpp_codegen_add((int64_t)L_504, (int64_t)L_505));
		V_4 = L_506;
		uint64_t L_507;
		L_507 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_503, ((int32_t)9), L_506, NULL);
		V_19 = L_507;
		uint64_t L_508 = V_15;
		uint64_t L_509 = V_6;
		uint64_t L_510 = V_15;
		int64_t L_511 = ((int64_t)il2cpp_codegen_add((int64_t)L_509, (int64_t)L_510));
		V_6 = L_511;
		uint64_t L_512;
		L_512 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_508, ((int32_t)48), L_511, NULL);
		V_15 = L_512;
		uint64_t L_513 = V_17;
		uint64_t L_514 = V_10;
		uint64_t L_515 = V_17;
		int64_t L_516 = ((int64_t)il2cpp_codegen_add((int64_t)L_514, (int64_t)L_515));
		V_10 = L_516;
		uint64_t L_517;
		L_517 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_513, ((int32_t)35), L_516, NULL);
		V_17 = L_517;
		uint64_t L_518 = V_13;
		uint64_t L_519 = V_8;
		uint64_t L_520 = V_13;
		int64_t L_521 = ((int64_t)il2cpp_codegen_add((int64_t)L_519, (int64_t)L_520));
		V_8 = L_521;
		uint64_t L_522;
		L_522 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_518, ((int32_t)52), L_521, NULL);
		V_13 = L_522;
		uint64_t L_523 = V_5;
		uint64_t L_524 = V_18;
		uint64_t L_525 = V_5;
		int64_t L_526 = ((int64_t)il2cpp_codegen_add((int64_t)L_524, (int64_t)L_525));
		V_18 = L_526;
		uint64_t L_527;
		L_527 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_523, ((int32_t)23), L_526, NULL);
		V_5 = L_527;
		uint64_t L_528 = V_9;
		uint64_t L_529 = V_12;
		uint64_t L_530 = V_9;
		int64_t L_531 = ((int64_t)il2cpp_codegen_add((int64_t)L_529, (int64_t)L_530));
		V_12 = L_531;
		uint64_t L_532;
		L_532 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_528, ((int32_t)31), L_531, NULL);
		V_9 = L_532;
		uint64_t L_533 = V_7;
		uint64_t L_534 = V_14;
		uint64_t L_535 = V_7;
		int64_t L_536 = ((int64_t)il2cpp_codegen_add((int64_t)L_534, (int64_t)L_535));
		V_14 = L_536;
		uint64_t L_537;
		L_537 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_533, ((int32_t)37), L_536, NULL);
		V_7 = L_537;
		uint64_t L_538 = V_11;
		uint64_t L_539 = V_16;
		uint64_t L_540 = V_11;
		int64_t L_541 = ((int64_t)il2cpp_codegen_add((int64_t)L_539, (int64_t)L_540));
		V_16 = L_541;
		uint64_t L_542;
		L_542 = ThreefishEngine_RotlXor_m69CBD6C1DF9D249D542A4AC02511DA74355DA740(L_538, ((int32_t)20), L_541, NULL);
		V_11 = L_542;
		uint64_t L_543 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_544 = V_0;
		int32_t L_545 = V_21;
		NullCheck(L_544);
		int32_t L_546 = ((int32_t)il2cpp_codegen_add(L_545, 1));
		int64_t L_547 = (int64_t)(L_544)->GetAt(static_cast<il2cpp_array_size_t>(L_546));
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_543, L_547));
		uint64_t L_548 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_549 = V_0;
		int32_t L_550 = V_21;
		NullCheck(L_549);
		int32_t L_551 = ((int32_t)il2cpp_codegen_add(L_550, 2));
		int64_t L_552 = (int64_t)(L_549)->GetAt(static_cast<il2cpp_array_size_t>(L_551));
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_548, L_552));
		uint64_t L_553 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_554 = V_0;
		int32_t L_555 = V_21;
		NullCheck(L_554);
		int32_t L_556 = ((int32_t)il2cpp_codegen_add(L_555, 3));
		int64_t L_557 = (int64_t)(L_554)->GetAt(static_cast<il2cpp_array_size_t>(L_556));
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_553, L_557));
		uint64_t L_558 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_559 = V_0;
		int32_t L_560 = V_21;
		NullCheck(L_559);
		int32_t L_561 = ((int32_t)il2cpp_codegen_add(L_560, 4));
		int64_t L_562 = (int64_t)(L_559)->GetAt(static_cast<il2cpp_array_size_t>(L_561));
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_558, L_562));
		uint64_t L_563 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_564 = V_0;
		int32_t L_565 = V_21;
		NullCheck(L_564);
		int32_t L_566 = ((int32_t)il2cpp_codegen_add(L_565, 5));
		int64_t L_567 = (int64_t)(L_564)->GetAt(static_cast<il2cpp_array_size_t>(L_566));
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_563, L_567));
		uint64_t L_568 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_569 = V_0;
		int32_t L_570 = V_21;
		NullCheck(L_569);
		int32_t L_571 = ((int32_t)il2cpp_codegen_add(L_570, 6));
		int64_t L_572 = (int64_t)(L_569)->GetAt(static_cast<il2cpp_array_size_t>(L_571));
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_568, L_572));
		uint64_t L_573 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_574 = V_0;
		int32_t L_575 = V_21;
		NullCheck(L_574);
		int32_t L_576 = ((int32_t)il2cpp_codegen_add(L_575, 7));
		int64_t L_577 = (int64_t)(L_574)->GetAt(static_cast<il2cpp_array_size_t>(L_576));
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_573, L_577));
		uint64_t L_578 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_579 = V_0;
		int32_t L_580 = V_21;
		NullCheck(L_579);
		int32_t L_581 = ((int32_t)il2cpp_codegen_add(L_580, 8));
		int64_t L_582 = (int64_t)(L_579)->GetAt(static_cast<il2cpp_array_size_t>(L_581));
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_578, L_582));
		uint64_t L_583 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_584 = V_0;
		int32_t L_585 = V_21;
		NullCheck(L_584);
		int32_t L_586 = ((int32_t)il2cpp_codegen_add(L_585, ((int32_t)9)));
		int64_t L_587 = (int64_t)(L_584)->GetAt(static_cast<il2cpp_array_size_t>(L_586));
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_583, L_587));
		uint64_t L_588 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_589 = V_0;
		int32_t L_590 = V_21;
		NullCheck(L_589);
		int32_t L_591 = ((int32_t)il2cpp_codegen_add(L_590, ((int32_t)10)));
		int64_t L_592 = (int64_t)(L_589)->GetAt(static_cast<il2cpp_array_size_t>(L_591));
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_588, L_592));
		uint64_t L_593 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_594 = V_0;
		int32_t L_595 = V_21;
		NullCheck(L_594);
		int32_t L_596 = ((int32_t)il2cpp_codegen_add(L_595, ((int32_t)11)));
		int64_t L_597 = (int64_t)(L_594)->GetAt(static_cast<il2cpp_array_size_t>(L_596));
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_593, L_597));
		uint64_t L_598 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_599 = V_0;
		int32_t L_600 = V_21;
		NullCheck(L_599);
		int32_t L_601 = ((int32_t)il2cpp_codegen_add(L_600, ((int32_t)12)));
		int64_t L_602 = (int64_t)(L_599)->GetAt(static_cast<il2cpp_array_size_t>(L_601));
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_598, L_602));
		uint64_t L_603 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_604 = V_0;
		int32_t L_605 = V_21;
		NullCheck(L_604);
		int32_t L_606 = ((int32_t)il2cpp_codegen_add(L_605, ((int32_t)13)));
		int64_t L_607 = (int64_t)(L_604)->GetAt(static_cast<il2cpp_array_size_t>(L_606));
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_603, L_607));
		uint64_t L_608 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_609 = V_0;
		int32_t L_610 = V_21;
		NullCheck(L_609);
		int32_t L_611 = ((int32_t)il2cpp_codegen_add(L_610, ((int32_t)14)));
		int64_t L_612 = (int64_t)(L_609)->GetAt(static_cast<il2cpp_array_size_t>(L_611));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_613 = V_1;
		int32_t L_614 = V_22;
		NullCheck(L_613);
		int32_t L_615 = ((int32_t)il2cpp_codegen_add(L_614, 1));
		int64_t L_616 = (int64_t)(L_613)->GetAt(static_cast<il2cpp_array_size_t>(L_615));
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_608, ((int64_t)il2cpp_codegen_add(L_612, L_616))));
		uint64_t L_617 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_618 = V_0;
		int32_t L_619 = V_21;
		NullCheck(L_618);
		int32_t L_620 = ((int32_t)il2cpp_codegen_add(L_619, ((int32_t)15)));
		int64_t L_621 = (int64_t)(L_618)->GetAt(static_cast<il2cpp_array_size_t>(L_620));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_622 = V_1;
		int32_t L_623 = V_22;
		NullCheck(L_622);
		int32_t L_624 = ((int32_t)il2cpp_codegen_add(L_623, 2));
		int64_t L_625 = (int64_t)(L_622)->GetAt(static_cast<il2cpp_array_size_t>(L_624));
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_617, ((int64_t)il2cpp_codegen_add(L_621, L_625))));
		uint64_t L_626 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_627 = V_0;
		int32_t L_628 = V_21;
		NullCheck(L_627);
		int32_t L_629 = ((int32_t)il2cpp_codegen_add(L_628, ((int32_t)16)));
		int64_t L_630 = (int64_t)(L_627)->GetAt(static_cast<il2cpp_array_size_t>(L_629));
		int32_t L_631 = V_20;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_626, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_630, ((int64_t)(uint64_t)((uint32_t)L_631)))), ((int64_t)1)))));
		int32_t L_632 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_632, 2));
	}

IL_0780:
	{
		int32_t L_633 = V_20;
		if ((((int32_t)L_633) < ((int32_t)((int32_t)20))))
		{
			goto IL_0121;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_634 = ___1_outWords;
		uint64_t L_635 = V_4;
		NullCheck(L_634);
		(L_634)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_635);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_636 = ___1_outWords;
		uint64_t L_637 = V_5;
		NullCheck(L_636);
		(L_636)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_637);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_638 = ___1_outWords;
		uint64_t L_639 = V_6;
		NullCheck(L_638);
		(L_638)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_639);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_640 = ___1_outWords;
		uint64_t L_641 = V_7;
		NullCheck(L_640);
		(L_640)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_641);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_642 = ___1_outWords;
		uint64_t L_643 = V_8;
		NullCheck(L_642);
		(L_642)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_643);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_644 = ___1_outWords;
		uint64_t L_645 = V_9;
		NullCheck(L_644);
		(L_644)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_645);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_646 = ___1_outWords;
		uint64_t L_647 = V_10;
		NullCheck(L_646);
		(L_646)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_647);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_648 = ___1_outWords;
		uint64_t L_649 = V_11;
		NullCheck(L_648);
		(L_648)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_649);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_650 = ___1_outWords;
		uint64_t L_651 = V_12;
		NullCheck(L_650);
		(L_650)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint64_t)L_651);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_652 = ___1_outWords;
		uint64_t L_653 = V_13;
		NullCheck(L_652);
		(L_652)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint64_t)L_653);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_654 = ___1_outWords;
		uint64_t L_655 = V_14;
		NullCheck(L_654);
		(L_654)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint64_t)L_655);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_656 = ___1_outWords;
		uint64_t L_657 = V_15;
		NullCheck(L_656);
		(L_656)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint64_t)L_657);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_658 = ___1_outWords;
		uint64_t L_659 = V_16;
		NullCheck(L_658);
		(L_658)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint64_t)L_659);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_660 = ___1_outWords;
		uint64_t L_661 = V_17;
		NullCheck(L_660);
		(L_660)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint64_t)L_661);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_662 = ___1_outWords;
		uint64_t L_663 = V_18;
		NullCheck(L_662);
		(L_662)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint64_t)L_663);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_664 = ___1_outWords;
		uint64_t L_665 = V_19;
		NullCheck(L_664);
		(L_664)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint64_t)L_665);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.ThreefishEngine/Threefish1024Cipher::DecryptBlock(System.UInt64[],System.UInt64[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Threefish1024Cipher_DecryptBlock_m525CF0E616C29474935EB564D2C40F4160C6FF73 (Threefish1024Cipher_t56D2C1AB2ED3A65A7E1F23EAE08F5EF51E25CC0E* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_block, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_0 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	uint64_t V_9 = 0;
	uint64_t V_10 = 0;
	uint64_t V_11 = 0;
	uint64_t V_12 = 0;
	uint64_t V_13 = 0;
	uint64_t V_14 = 0;
	uint64_t V_15 = 0;
	uint64_t V_16 = 0;
	uint64_t V_17 = 0;
	uint64_t V_18 = 0;
	uint64_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = ((ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1*)__this)->___kw_1;
		V_0 = L_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = ((ThreefishCipher_t1A45644B84DB894CD4DD613522BF7AF4FE8A90D1*)__this)->___t_0;
		V_1 = L_1;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ((ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var))->___MOD17_11;
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ((ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_StaticFields*)il2cpp_codegen_static_fields_for(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var))->___MOD3_13;
		V_3 = L_3;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)33))))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish1024Cipher_DecryptBlock_m525CF0E616C29474935EB564D2C40F4160C6FF73_RuntimeMethod_var)));
	}

IL_0027:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = V_1;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)5)))
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m34A925BA55EC4CE4253404E363B5F6A53EB51CA3(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Threefish1024Cipher_DecryptBlock_m525CF0E616C29474935EB564D2C40F4160C6FF73_RuntimeMethod_var)));
	}

IL_0033:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_block;
		NullCheck(L_8);
		int32_t L_9 = 0;
		int64_t L_10 = (int64_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_11 = ___0_block;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int64_t L_13 = (int64_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = ___0_block;
		NullCheck(L_14);
		int32_t L_15 = 2;
		int64_t L_16 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_17 = ___0_block;
		NullCheck(L_17);
		int32_t L_18 = 3;
		int64_t L_19 = (int64_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_20 = ___0_block;
		NullCheck(L_20);
		int32_t L_21 = 4;
		int64_t L_22 = (int64_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_8 = L_22;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = ___0_block;
		NullCheck(L_23);
		int32_t L_24 = 5;
		int64_t L_25 = (int64_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		V_9 = L_25;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = ___0_block;
		NullCheck(L_26);
		int32_t L_27 = 6;
		int64_t L_28 = (int64_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		V_10 = L_28;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_29 = ___0_block;
		NullCheck(L_29);
		int32_t L_30 = 7;
		int64_t L_31 = (int64_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_11 = L_31;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_32 = ___0_block;
		NullCheck(L_32);
		int32_t L_33 = 8;
		int64_t L_34 = (int64_t)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_12 = L_34;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_35 = ___0_block;
		NullCheck(L_35);
		int32_t L_36 = ((int32_t)9);
		int64_t L_37 = (int64_t)(L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_13 = L_37;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_38 = ___0_block;
		NullCheck(L_38);
		int32_t L_39 = ((int32_t)10);
		int64_t L_40 = (int64_t)(L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_14 = L_40;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_41 = ___0_block;
		NullCheck(L_41);
		int32_t L_42 = ((int32_t)11);
		int64_t L_43 = (int64_t)(L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_15 = L_43;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_44 = ___0_block;
		NullCheck(L_44);
		int32_t L_45 = ((int32_t)12);
		int64_t L_46 = (int64_t)(L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_16 = L_46;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_47 = ___0_block;
		NullCheck(L_47);
		int32_t L_48 = ((int32_t)13);
		int64_t L_49 = (int64_t)(L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_17 = L_49;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_50 = ___0_block;
		NullCheck(L_50);
		int32_t L_51 = ((int32_t)14);
		int64_t L_52 = (int64_t)(L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_18 = L_52;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_53 = ___0_block;
		NullCheck(L_53);
		int32_t L_54 = ((int32_t)15);
		int64_t L_55 = (int64_t)(L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_19 = L_55;
		V_20 = ((int32_t)19);
		goto IL_0732;
	}

IL_0093:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_2;
		int32_t L_57 = V_20;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		int32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_21 = L_59;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_3;
		int32_t L_61 = V_20;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		int32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		V_22 = L_63;
		uint64_t L_64 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_65 = V_0;
		int32_t L_66 = V_21;
		NullCheck(L_65);
		int32_t L_67 = ((int32_t)il2cpp_codegen_add(L_66, 1));
		int64_t L_68 = (int64_t)(L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_64, L_68));
		uint64_t L_69 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_70 = V_0;
		int32_t L_71 = V_21;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_add(L_71, 2));
		int64_t L_73 = (int64_t)(L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_69, L_73));
		uint64_t L_74 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_75 = V_0;
		int32_t L_76 = V_21;
		NullCheck(L_75);
		int32_t L_77 = ((int32_t)il2cpp_codegen_add(L_76, 3));
		int64_t L_78 = (int64_t)(L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_74, L_78));
		uint64_t L_79 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_80 = V_0;
		int32_t L_81 = V_21;
		NullCheck(L_80);
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_81, 4));
		int64_t L_83 = (int64_t)(L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_79, L_83));
		uint64_t L_84 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_85 = V_0;
		int32_t L_86 = V_21;
		NullCheck(L_85);
		int32_t L_87 = ((int32_t)il2cpp_codegen_add(L_86, 5));
		int64_t L_88 = (int64_t)(L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_84, L_88));
		uint64_t L_89 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_90 = V_0;
		int32_t L_91 = V_21;
		NullCheck(L_90);
		int32_t L_92 = ((int32_t)il2cpp_codegen_add(L_91, 6));
		int64_t L_93 = (int64_t)(L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_89, L_93));
		uint64_t L_94 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_95 = V_0;
		int32_t L_96 = V_21;
		NullCheck(L_95);
		int32_t L_97 = ((int32_t)il2cpp_codegen_add(L_96, 7));
		int64_t L_98 = (int64_t)(L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_94, L_98));
		uint64_t L_99 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_100 = V_0;
		int32_t L_101 = V_21;
		NullCheck(L_100);
		int32_t L_102 = ((int32_t)il2cpp_codegen_add(L_101, 8));
		int64_t L_103 = (int64_t)(L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_99, L_103));
		uint64_t L_104 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_105 = V_0;
		int32_t L_106 = V_21;
		NullCheck(L_105);
		int32_t L_107 = ((int32_t)il2cpp_codegen_add(L_106, ((int32_t)9)));
		int64_t L_108 = (int64_t)(L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_104, L_108));
		uint64_t L_109 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_110 = V_0;
		int32_t L_111 = V_21;
		NullCheck(L_110);
		int32_t L_112 = ((int32_t)il2cpp_codegen_add(L_111, ((int32_t)10)));
		int64_t L_113 = (int64_t)(L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		V_13 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_109, L_113));
		uint64_t L_114 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_115 = V_0;
		int32_t L_116 = V_21;
		NullCheck(L_115);
		int32_t L_117 = ((int32_t)il2cpp_codegen_add(L_116, ((int32_t)11)));
		int64_t L_118 = (int64_t)(L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_114, L_118));
		uint64_t L_119 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_120 = V_0;
		int32_t L_121 = V_21;
		NullCheck(L_120);
		int32_t L_122 = ((int32_t)il2cpp_codegen_add(L_121, ((int32_t)12)));
		int64_t L_123 = (int64_t)(L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		V_15 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_119, L_123));
		uint64_t L_124 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_125 = V_0;
		int32_t L_126 = V_21;
		NullCheck(L_125);
		int32_t L_127 = ((int32_t)il2cpp_codegen_add(L_126, ((int32_t)13)));
		int64_t L_128 = (int64_t)(L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_124, L_128));
		uint64_t L_129 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_130 = V_0;
		int32_t L_131 = V_21;
		NullCheck(L_130);
		int32_t L_132 = ((int32_t)il2cpp_codegen_add(L_131, ((int32_t)14)));
		int64_t L_133 = (int64_t)(L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_134 = V_1;
		int32_t L_135 = V_22;
		NullCheck(L_134);
		int32_t L_136 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		int64_t L_137 = (int64_t)(L_134)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		V_17 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_129, ((int64_t)il2cpp_codegen_add(L_133, L_137))));
		uint64_t L_138 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_139 = V_0;
		int32_t L_140 = V_21;
		NullCheck(L_139);
		int32_t L_141 = ((int32_t)il2cpp_codegen_add(L_140, ((int32_t)15)));
		int64_t L_142 = (int64_t)(L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_143 = V_1;
		int32_t L_144 = V_22;
		NullCheck(L_143);
		int32_t L_145 = ((int32_t)il2cpp_codegen_add(L_144, 2));
		int64_t L_146 = (int64_t)(L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_138, ((int64_t)il2cpp_codegen_add(L_142, L_146))));
		uint64_t L_147 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_148 = V_0;
		int32_t L_149 = V_21;
		NullCheck(L_148);
		int32_t L_150 = ((int32_t)il2cpp_codegen_add(L_149, ((int32_t)16)));
		int64_t L_151 = (int64_t)(L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		int32_t L_152 = V_20;
		V_19 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_147, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_151, ((int64_t)(uint64_t)((uint32_t)L_152)))), ((int64_t)1)))));
		uint64_t L_153 = V_19;
		uint64_t L_154 = V_4;
		il2cpp_codegen_runtime_class_init_inline(ThreefishEngine_t6EB891CC81C2E5A4E4C52866E4F68B6167BD819C_il2cpp_TypeInfo_var);
		uint64_t L_155;
		L_155 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_153, ((int32_t)9), L_154, NULL);
		V_19 = L_155;
		uint64_t L_156 = V_4;
		uint64_t L_157 = V_19;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_156, (int64_t)L_157));
		uint64_t L_158 = V_15;
		uint64_t L_159 = V_6;
		uint64_t L_160;
		L_160 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_158, ((int32_t)48), L_159, NULL);
		V_15 = L_160;
		uint64_t L_161 = V_6;
		uint64_t L_162 = V_15;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_161, (int64_t)L_162));
		uint64_t L_163 = V_17;
		uint64_t L_164 = V_10;
		uint64_t L_165;
		L_165 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_163, ((int32_t)35), L_164, NULL);
		V_17 = L_165;
		uint64_t L_166 = V_10;
		uint64_t L_167 = V_17;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_166, (int64_t)L_167));
		uint64_t L_168 = V_13;
		uint64_t L_169 = V_8;
		uint64_t L_170;
		L_170 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_168, ((int32_t)52), L_169, NULL);
		V_13 = L_170;
		uint64_t L_171 = V_8;
		uint64_t L_172 = V_13;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_171, (int64_t)L_172));
		uint64_t L_173 = V_5;
		uint64_t L_174 = V_18;
		uint64_t L_175;
		L_175 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_173, ((int32_t)23), L_174, NULL);
		V_5 = L_175;
		uint64_t L_176 = V_18;
		uint64_t L_177 = V_5;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_176, (int64_t)L_177));
		uint64_t L_178 = V_9;
		uint64_t L_179 = V_12;
		uint64_t L_180;
		L_180 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_178, ((int32_t)31), L_179, NULL);
		V_9 = L_180;
		uint64_t L_181 = V_12;
		uint64_t L_182 = V_9;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_181, (int64_t)L_182));
		uint64_t L_183 = V_7;
		uint64_t L_184 = V_14;
		uint64_t L_185;
		L_185 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_183, ((int32_t)37), L_184, NULL);
		V_7 = L_185;
		uint64_t L_186 = V_14;
		uint64_t L_187 = V_7;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_186, (int64_t)L_187));
		uint64_t L_188 = V_11;
		uint64_t L_189 = V_16;
		uint64_t L_190;
		L_190 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_188, ((int32_t)20), L_189, NULL);
		V_11 = L_190;
		uint64_t L_191 = V_16;
		uint64_t L_192 = V_11;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_191, (int64_t)L_192));
		uint64_t L_193 = V_11;
		uint64_t L_194 = V_4;
		uint64_t L_195;
		L_195 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_193, ((int32_t)31), L_194, NULL);
		V_11 = L_195;
		uint64_t L_196 = V_4;
		uint64_t L_197 = V_11;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_196, (int64_t)L_197));
		uint64_t L_198 = V_9;
		uint64_t L_199 = V_6;
		uint64_t L_200;
		L_200 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_198, ((int32_t)44), L_199, NULL);
		V_9 = L_200;
		uint64_t L_201 = V_6;
		uint64_t L_202 = V_9;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_201, (int64_t)L_202));
		uint64_t L_203 = V_7;
		uint64_t L_204 = V_8;
		uint64_t L_205;
		L_205 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_203, ((int32_t)47), L_204, NULL);
		V_7 = L_205;
		uint64_t L_206 = V_8;
		uint64_t L_207 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_206, (int64_t)L_207));
		uint64_t L_208 = V_5;
		uint64_t L_209 = V_10;
		uint64_t L_210;
		L_210 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_208, ((int32_t)46), L_209, NULL);
		V_5 = L_210;
		uint64_t L_211 = V_10;
		uint64_t L_212 = V_5;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_211, (int64_t)L_212));
		uint64_t L_213 = V_19;
		uint64_t L_214 = V_16;
		uint64_t L_215;
		L_215 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_213, ((int32_t)19), L_214, NULL);
		V_19 = L_215;
		uint64_t L_216 = V_16;
		uint64_t L_217 = V_19;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_216, (int64_t)L_217));
		uint64_t L_218 = V_17;
		uint64_t L_219 = V_18;
		uint64_t L_220;
		L_220 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_218, ((int32_t)42), L_219, NULL);
		V_17 = L_220;
		uint64_t L_221 = V_18;
		uint64_t L_222 = V_17;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_221, (int64_t)L_222));
		uint64_t L_223 = V_15;
		uint64_t L_224 = V_12;
		uint64_t L_225;
		L_225 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_223, ((int32_t)44), L_224, NULL);
		V_15 = L_225;
		uint64_t L_226 = V_12;
		uint64_t L_227 = V_15;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_226, (int64_t)L_227));
		uint64_t L_228 = V_13;
		uint64_t L_229 = V_14;
		uint64_t L_230;
		L_230 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_228, ((int32_t)25), L_229, NULL);
		V_13 = L_230;
		uint64_t L_231 = V_14;
		uint64_t L_232 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_231, (int64_t)L_232));
		uint64_t L_233 = V_13;
		uint64_t L_234 = V_4;
		uint64_t L_235;
		L_235 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_233, ((int32_t)16), L_234, NULL);
		V_13 = L_235;
		uint64_t L_236 = V_4;
		uint64_t L_237 = V_13;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_236, (int64_t)L_237));
		uint64_t L_238 = V_17;
		uint64_t L_239 = V_6;
		uint64_t L_240;
		L_240 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_238, ((int32_t)34), L_239, NULL);
		V_17 = L_240;
		uint64_t L_241 = V_6;
		uint64_t L_242 = V_17;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_241, (int64_t)L_242));
		uint64_t L_243 = V_15;
		uint64_t L_244 = V_10;
		uint64_t L_245;
		L_245 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_243, ((int32_t)56), L_244, NULL);
		V_15 = L_245;
		uint64_t L_246 = V_10;
		uint64_t L_247 = V_15;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_246, (int64_t)L_247));
		uint64_t L_248 = V_19;
		uint64_t L_249 = V_8;
		uint64_t L_250;
		L_250 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_248, ((int32_t)51), L_249, NULL);
		V_19 = L_250;
		uint64_t L_251 = V_8;
		uint64_t L_252 = V_19;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_251, (int64_t)L_252));
		uint64_t L_253 = V_11;
		uint64_t L_254 = V_14;
		uint64_t L_255;
		L_255 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_253, 4, L_254, NULL);
		V_11 = L_255;
		uint64_t L_256 = V_14;
		uint64_t L_257 = V_11;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_256, (int64_t)L_257));
		uint64_t L_258 = V_7;
		uint64_t L_259 = V_16;
		uint64_t L_260;
		L_260 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_258, ((int32_t)53), L_259, NULL);
		V_7 = L_260;
		uint64_t L_261 = V_16;
		uint64_t L_262 = V_7;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_261, (int64_t)L_262));
		uint64_t L_263 = V_9;
		uint64_t L_264 = V_18;
		uint64_t L_265;
		L_265 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_263, ((int32_t)42), L_264, NULL);
		V_9 = L_265;
		uint64_t L_266 = V_18;
		uint64_t L_267 = V_9;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_266, (int64_t)L_267));
		uint64_t L_268 = V_5;
		uint64_t L_269 = V_12;
		uint64_t L_270;
		L_270 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_268, ((int32_t)41), L_269, NULL);
		V_5 = L_270;
		uint64_t L_271 = V_12;
		uint64_t L_272 = V_5;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_271, (int64_t)L_272));
		uint64_t L_273 = V_5;
		uint64_t L_274 = V_4;
		uint64_t L_275;
		L_275 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_273, ((int32_t)41), L_274, NULL);
		V_5 = L_275;
		uint64_t L_276 = V_4;
		uint64_t L_277 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_276, (int64_t)L_277));
		uint64_t L_278 = V_7;
		uint64_t L_279 = V_6;
		uint64_t L_280;
		L_280 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_278, ((int32_t)9), L_279, NULL);
		V_7 = L_280;
		uint64_t L_281 = V_6;
		uint64_t L_282 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_281, (int64_t)L_282));
		uint64_t L_283 = V_9;
		uint64_t L_284 = V_8;
		uint64_t L_285;
		L_285 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_283, ((int32_t)37), L_284, NULL);
		V_9 = L_285;
		uint64_t L_286 = V_8;
		uint64_t L_287 = V_9;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_286, (int64_t)L_287));
		uint64_t L_288 = V_11;
		uint64_t L_289 = V_10;
		uint64_t L_290;
		L_290 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_288, ((int32_t)31), L_289, NULL);
		V_11 = L_290;
		uint64_t L_291 = V_10;
		uint64_t L_292 = V_11;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_291, (int64_t)L_292));
		uint64_t L_293 = V_13;
		uint64_t L_294 = V_12;
		uint64_t L_295;
		L_295 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_293, ((int32_t)12), L_294, NULL);
		V_13 = L_295;
		uint64_t L_296 = V_12;
		uint64_t L_297 = V_13;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_296, (int64_t)L_297));
		uint64_t L_298 = V_15;
		uint64_t L_299 = V_14;
		uint64_t L_300;
		L_300 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_298, ((int32_t)47), L_299, NULL);
		V_15 = L_300;
		uint64_t L_301 = V_14;
		uint64_t L_302 = V_15;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_301, (int64_t)L_302));
		uint64_t L_303 = V_17;
		uint64_t L_304 = V_16;
		uint64_t L_305;
		L_305 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_303, ((int32_t)44), L_304, NULL);
		V_17 = L_305;
		uint64_t L_306 = V_16;
		uint64_t L_307 = V_17;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_306, (int64_t)L_307));
		uint64_t L_308 = V_19;
		uint64_t L_309 = V_18;
		uint64_t L_310;
		L_310 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_308, ((int32_t)30), L_309, NULL);
		V_19 = L_310;
		uint64_t L_311 = V_18;
		uint64_t L_312 = V_19;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_311, (int64_t)L_312));
		uint64_t L_313 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_314 = V_0;
		int32_t L_315 = V_21;
		NullCheck(L_314);
		int32_t L_316 = L_315;
		int64_t L_317 = (int64_t)(L_314)->GetAt(static_cast<il2cpp_array_size_t>(L_316));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_313, L_317));
		uint64_t L_318 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_319 = V_0;
		int32_t L_320 = V_21;
		NullCheck(L_319);
		int32_t L_321 = ((int32_t)il2cpp_codegen_add(L_320, 1));
		int64_t L_322 = (int64_t)(L_319)->GetAt(static_cast<il2cpp_array_size_t>(L_321));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_318, L_322));
		uint64_t L_323 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_324 = V_0;
		int32_t L_325 = V_21;
		NullCheck(L_324);
		int32_t L_326 = ((int32_t)il2cpp_codegen_add(L_325, 2));
		int64_t L_327 = (int64_t)(L_324)->GetAt(static_cast<il2cpp_array_size_t>(L_326));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_323, L_327));
		uint64_t L_328 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_329 = V_0;
		int32_t L_330 = V_21;
		NullCheck(L_329);
		int32_t L_331 = ((int32_t)il2cpp_codegen_add(L_330, 3));
		int64_t L_332 = (int64_t)(L_329)->GetAt(static_cast<il2cpp_array_size_t>(L_331));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_328, L_332));
		uint64_t L_333 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_334 = V_0;
		int32_t L_335 = V_21;
		NullCheck(L_334);
		int32_t L_336 = ((int32_t)il2cpp_codegen_add(L_335, 4));
		int64_t L_337 = (int64_t)(L_334)->GetAt(static_cast<il2cpp_array_size_t>(L_336));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_333, L_337));
		uint64_t L_338 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_339 = V_0;
		int32_t L_340 = V_21;
		NullCheck(L_339);
		int32_t L_341 = ((int32_t)il2cpp_codegen_add(L_340, 5));
		int64_t L_342 = (int64_t)(L_339)->GetAt(static_cast<il2cpp_array_size_t>(L_341));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_338, L_342));
		uint64_t L_343 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_344 = V_0;
		int32_t L_345 = V_21;
		NullCheck(L_344);
		int32_t L_346 = ((int32_t)il2cpp_codegen_add(L_345, 6));
		int64_t L_347 = (int64_t)(L_344)->GetAt(static_cast<il2cpp_array_size_t>(L_346));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_343, L_347));
		uint64_t L_348 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_349 = V_0;
		int32_t L_350 = V_21;
		NullCheck(L_349);
		int32_t L_351 = ((int32_t)il2cpp_codegen_add(L_350, 7));
		int64_t L_352 = (int64_t)(L_349)->GetAt(static_cast<il2cpp_array_size_t>(L_351));
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_348, L_352));
		uint64_t L_353 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_354 = V_0;
		int32_t L_355 = V_21;
		NullCheck(L_354);
		int32_t L_356 = ((int32_t)il2cpp_codegen_add(L_355, 8));
		int64_t L_357 = (int64_t)(L_354)->GetAt(static_cast<il2cpp_array_size_t>(L_356));
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_353, L_357));
		uint64_t L_358 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_359 = V_0;
		int32_t L_360 = V_21;
		NullCheck(L_359);
		int32_t L_361 = ((int32_t)il2cpp_codegen_add(L_360, ((int32_t)9)));
		int64_t L_362 = (int64_t)(L_359)->GetAt(static_cast<il2cpp_array_size_t>(L_361));
		V_13 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_358, L_362));
		uint64_t L_363 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_364 = V_0;
		int32_t L_365 = V_21;
		NullCheck(L_364);
		int32_t L_366 = ((int32_t)il2cpp_codegen_add(L_365, ((int32_t)10)));
		int64_t L_367 = (int64_t)(L_364)->GetAt(static_cast<il2cpp_array_size_t>(L_366));
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_363, L_367));
		uint64_t L_368 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_369 = V_0;
		int32_t L_370 = V_21;
		NullCheck(L_369);
		int32_t L_371 = ((int32_t)il2cpp_codegen_add(L_370, ((int32_t)11)));
		int64_t L_372 = (int64_t)(L_369)->GetAt(static_cast<il2cpp_array_size_t>(L_371));
		V_15 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_368, L_372));
		uint64_t L_373 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_374 = V_0;
		int32_t L_375 = V_21;
		NullCheck(L_374);
		int32_t L_376 = ((int32_t)il2cpp_codegen_add(L_375, ((int32_t)12)));
		int64_t L_377 = (int64_t)(L_374)->GetAt(static_cast<il2cpp_array_size_t>(L_376));
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_373, L_377));
		uint64_t L_378 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_379 = V_0;
		int32_t L_380 = V_21;
		NullCheck(L_379);
		int32_t L_381 = ((int32_t)il2cpp_codegen_add(L_380, ((int32_t)13)));
		int64_t L_382 = (int64_t)(L_379)->GetAt(static_cast<il2cpp_array_size_t>(L_381));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_383 = V_1;
		int32_t L_384 = V_22;
		NullCheck(L_383);
		int32_t L_385 = L_384;
		int64_t L_386 = (int64_t)(L_383)->GetAt(static_cast<il2cpp_array_size_t>(L_385));
		V_17 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_378, ((int64_t)il2cpp_codegen_add(L_382, L_386))));
		uint64_t L_387 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_388 = V_0;
		int32_t L_389 = V_21;
		NullCheck(L_388);
		int32_t L_390 = ((int32_t)il2cpp_codegen_add(L_389, ((int32_t)14)));
		int64_t L_391 = (int64_t)(L_388)->GetAt(static_cast<il2cpp_array_size_t>(L_390));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_392 = V_1;
		int32_t L_393 = V_22;
		NullCheck(L_392);
		int32_t L_394 = ((int32_t)il2cpp_codegen_add(L_393, 1));
		int64_t L_395 = (int64_t)(L_392)->GetAt(static_cast<il2cpp_array_size_t>(L_394));
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_387, ((int64_t)il2cpp_codegen_add(L_391, L_395))));
		uint64_t L_396 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_397 = V_0;
		int32_t L_398 = V_21;
		NullCheck(L_397);
		int32_t L_399 = ((int32_t)il2cpp_codegen_add(L_398, ((int32_t)15)));
		int64_t L_400 = (int64_t)(L_397)->GetAt(static_cast<il2cpp_array_size_t>(L_399));
		int32_t L_401 = V_20;
		V_19 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_396, ((int64_t)il2cpp_codegen_add(L_400, ((int64_t)(uint64_t)((uint32_t)L_401))))));
		uint64_t L_402 = V_19;
		uint64_t L_403 = V_4;
		uint64_t L_404;
		L_404 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_402, 5, L_403, NULL);
		V_19 = L_404;
		uint64_t L_405 = V_4;
		uint64_t L_406 = V_19;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_405, (int64_t)L_406));
		uint64_t L_407 = V_15;
		uint64_t L_408 = V_6;
		uint64_t L_409;
		L_409 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_407, ((int32_t)20), L_408, NULL);
		V_15 = L_409;
		uint64_t L_410 = V_6;
		uint64_t L_411 = V_15;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_410, (int64_t)L_411));
		uint64_t L_412 = V_17;
		uint64_t L_413 = V_10;
		uint64_t L_414;
		L_414 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_412, ((int32_t)48), L_413, NULL);
		V_17 = L_414;
		uint64_t L_415 = V_10;
		uint64_t L_416 = V_17;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_415, (int64_t)L_416));
		uint64_t L_417 = V_13;
		uint64_t L_418 = V_8;
		uint64_t L_419;
		L_419 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_417, ((int32_t)41), L_418, NULL);
		V_13 = L_419;
		uint64_t L_420 = V_8;
		uint64_t L_421 = V_13;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_420, (int64_t)L_421));
		uint64_t L_422 = V_5;
		uint64_t L_423 = V_18;
		uint64_t L_424;
		L_424 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_422, ((int32_t)47), L_423, NULL);
		V_5 = L_424;
		uint64_t L_425 = V_18;
		uint64_t L_426 = V_5;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_425, (int64_t)L_426));
		uint64_t L_427 = V_9;
		uint64_t L_428 = V_12;
		uint64_t L_429;
		L_429 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_427, ((int32_t)28), L_428, NULL);
		V_9 = L_429;
		uint64_t L_430 = V_12;
		uint64_t L_431 = V_9;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_430, (int64_t)L_431));
		uint64_t L_432 = V_7;
		uint64_t L_433 = V_14;
		uint64_t L_434;
		L_434 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_432, ((int32_t)16), L_433, NULL);
		V_7 = L_434;
		uint64_t L_435 = V_14;
		uint64_t L_436 = V_7;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_435, (int64_t)L_436));
		uint64_t L_437 = V_11;
		uint64_t L_438 = V_16;
		uint64_t L_439;
		L_439 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_437, ((int32_t)25), L_438, NULL);
		V_11 = L_439;
		uint64_t L_440 = V_16;
		uint64_t L_441 = V_11;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_440, (int64_t)L_441));
		uint64_t L_442 = V_11;
		uint64_t L_443 = V_4;
		uint64_t L_444;
		L_444 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_442, ((int32_t)33), L_443, NULL);
		V_11 = L_444;
		uint64_t L_445 = V_4;
		uint64_t L_446 = V_11;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_445, (int64_t)L_446));
		uint64_t L_447 = V_9;
		uint64_t L_448 = V_6;
		uint64_t L_449;
		L_449 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_447, 4, L_448, NULL);
		V_9 = L_449;
		uint64_t L_450 = V_6;
		uint64_t L_451 = V_9;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_450, (int64_t)L_451));
		uint64_t L_452 = V_7;
		uint64_t L_453 = V_8;
		uint64_t L_454;
		L_454 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_452, ((int32_t)51), L_453, NULL);
		V_7 = L_454;
		uint64_t L_455 = V_8;
		uint64_t L_456 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_455, (int64_t)L_456));
		uint64_t L_457 = V_5;
		uint64_t L_458 = V_10;
		uint64_t L_459;
		L_459 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_457, ((int32_t)13), L_458, NULL);
		V_5 = L_459;
		uint64_t L_460 = V_10;
		uint64_t L_461 = V_5;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_460, (int64_t)L_461));
		uint64_t L_462 = V_19;
		uint64_t L_463 = V_16;
		uint64_t L_464;
		L_464 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_462, ((int32_t)34), L_463, NULL);
		V_19 = L_464;
		uint64_t L_465 = V_16;
		uint64_t L_466 = V_19;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_465, (int64_t)L_466));
		uint64_t L_467 = V_17;
		uint64_t L_468 = V_18;
		uint64_t L_469;
		L_469 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_467, ((int32_t)41), L_468, NULL);
		V_17 = L_469;
		uint64_t L_470 = V_18;
		uint64_t L_471 = V_17;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_470, (int64_t)L_471));
		uint64_t L_472 = V_15;
		uint64_t L_473 = V_12;
		uint64_t L_474;
		L_474 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_472, ((int32_t)59), L_473, NULL);
		V_15 = L_474;
		uint64_t L_475 = V_12;
		uint64_t L_476 = V_15;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_475, (int64_t)L_476));
		uint64_t L_477 = V_13;
		uint64_t L_478 = V_14;
		uint64_t L_479;
		L_479 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_477, ((int32_t)17), L_478, NULL);
		V_13 = L_479;
		uint64_t L_480 = V_14;
		uint64_t L_481 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_480, (int64_t)L_481));
		uint64_t L_482 = V_13;
		uint64_t L_483 = V_4;
		uint64_t L_484;
		L_484 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_482, ((int32_t)38), L_483, NULL);
		V_13 = L_484;
		uint64_t L_485 = V_4;
		uint64_t L_486 = V_13;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_485, (int64_t)L_486));
		uint64_t L_487 = V_17;
		uint64_t L_488 = V_6;
		uint64_t L_489;
		L_489 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_487, ((int32_t)19), L_488, NULL);
		V_17 = L_489;
		uint64_t L_490 = V_6;
		uint64_t L_491 = V_17;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_490, (int64_t)L_491));
		uint64_t L_492 = V_15;
		uint64_t L_493 = V_10;
		uint64_t L_494;
		L_494 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_492, ((int32_t)10), L_493, NULL);
		V_15 = L_494;
		uint64_t L_495 = V_10;
		uint64_t L_496 = V_15;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_495, (int64_t)L_496));
		uint64_t L_497 = V_19;
		uint64_t L_498 = V_8;
		uint64_t L_499;
		L_499 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_497, ((int32_t)55), L_498, NULL);
		V_19 = L_499;
		uint64_t L_500 = V_8;
		uint64_t L_501 = V_19;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_500, (int64_t)L_501));
		uint64_t L_502 = V_11;
		uint64_t L_503 = V_14;
		uint64_t L_504;
		L_504 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_502, ((int32_t)49), L_503, NULL);
		V_11 = L_504;
		uint64_t L_505 = V_14;
		uint64_t L_506 = V_11;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_505, (int64_t)L_506));
		uint64_t L_507 = V_7;
		uint64_t L_508 = V_16;
		uint64_t L_509;
		L_509 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_507, ((int32_t)18), L_508, NULL);
		V_7 = L_509;
		uint64_t L_510 = V_16;
		uint64_t L_511 = V_7;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_510, (int64_t)L_511));
		uint64_t L_512 = V_9;
		uint64_t L_513 = V_18;
		uint64_t L_514;
		L_514 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_512, ((int32_t)23), L_513, NULL);
		V_9 = L_514;
		uint64_t L_515 = V_18;
		uint64_t L_516 = V_9;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_515, (int64_t)L_516));
		uint64_t L_517 = V_5;
		uint64_t L_518 = V_12;
		uint64_t L_519;
		L_519 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_517, ((int32_t)52), L_518, NULL);
		V_5 = L_519;
		uint64_t L_520 = V_12;
		uint64_t L_521 = V_5;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_520, (int64_t)L_521));
		uint64_t L_522 = V_5;
		uint64_t L_523 = V_4;
		uint64_t L_524;
		L_524 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_522, ((int32_t)24), L_523, NULL);
		V_5 = L_524;
		uint64_t L_525 = V_4;
		uint64_t L_526 = V_5;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_525, (int64_t)L_526));
		uint64_t L_527 = V_7;
		uint64_t L_528 = V_6;
		uint64_t L_529;
		L_529 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_527, ((int32_t)13), L_528, NULL);
		V_7 = L_529;
		uint64_t L_530 = V_6;
		uint64_t L_531 = V_7;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_530, (int64_t)L_531));
		uint64_t L_532 = V_9;
		uint64_t L_533 = V_8;
		uint64_t L_534;
		L_534 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_532, 8, L_533, NULL);
		V_9 = L_534;
		uint64_t L_535 = V_8;
		uint64_t L_536 = V_9;
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_535, (int64_t)L_536));
		uint64_t L_537 = V_11;
		uint64_t L_538 = V_10;
		uint64_t L_539;
		L_539 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_537, ((int32_t)47), L_538, NULL);
		V_11 = L_539;
		uint64_t L_540 = V_10;
		uint64_t L_541 = V_11;
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_540, (int64_t)L_541));
		uint64_t L_542 = V_13;
		uint64_t L_543 = V_12;
		uint64_t L_544;
		L_544 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_542, 8, L_543, NULL);
		V_13 = L_544;
		uint64_t L_545 = V_12;
		uint64_t L_546 = V_13;
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_545, (int64_t)L_546));
		uint64_t L_547 = V_15;
		uint64_t L_548 = V_14;
		uint64_t L_549;
		L_549 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_547, ((int32_t)17), L_548, NULL);
		V_15 = L_549;
		uint64_t L_550 = V_14;
		uint64_t L_551 = V_15;
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_550, (int64_t)L_551));
		uint64_t L_552 = V_17;
		uint64_t L_553 = V_16;
		uint64_t L_554;
		L_554 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_552, ((int32_t)22), L_553, NULL);
		V_17 = L_554;
		uint64_t L_555 = V_16;
		uint64_t L_556 = V_17;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_555, (int64_t)L_556));
		uint64_t L_557 = V_19;
		uint64_t L_558 = V_18;
		uint64_t L_559;
		L_559 = ThreefishEngine_XorRotr_mEE1FD2C46BC11FCE43ACDC49F1D7157B2E9F6B4F(L_557, ((int32_t)37), L_558, NULL);
		V_19 = L_559;
		uint64_t L_560 = V_18;
		uint64_t L_561 = V_19;
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_560, (int64_t)L_561));
		int32_t L_562 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_subtract(L_562, 2));
	}

IL_0732:
	{
		int32_t L_563 = V_20;
		if ((((int32_t)L_563) >= ((int32_t)1)))
		{
			goto IL_0093;
		}
	}
	{
		uint64_t L_564 = V_4;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_565 = V_0;
		NullCheck(L_565);
		int32_t L_566 = 0;
		int64_t L_567 = (int64_t)(L_565)->GetAt(static_cast<il2cpp_array_size_t>(L_566));
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_564, L_567));
		uint64_t L_568 = V_5;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_569 = V_0;
		NullCheck(L_569);
		int32_t L_570 = 1;
		int64_t L_571 = (int64_t)(L_569)->GetAt(static_cast<il2cpp_array_size_t>(L_570));
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_568, L_571));
		uint64_t L_572 = V_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_573 = V_0;
		NullCheck(L_573);
		int32_t L_574 = 2;
		int64_t L_575 = (int64_t)(L_573)->GetAt(static_cast<il2cpp_array_size_t>(L_574));
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_572, L_575));
		uint64_t L_576 = V_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_577 = V_0;
		NullCheck(L_577);
		int32_t L_578 = 3;
		int64_t L_579 = (int64_t)(L_577)->GetAt(static_cast<il2cpp_array_size_t>(L_578));
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_576, L_579));
		uint64_t L_580 = V_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_581 = V_0;
		NullCheck(L_581);
		int32_t L_582 = 4;
		int64_t L_583 = (int64_t)(L_581)->GetAt(static_cast<il2cpp_array_size_t>(L_582));
		V_8 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_580, L_583));
		uint64_t L_584 = V_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_585 = V_0;
		NullCheck(L_585);
		int32_t L_586 = 5;
		int64_t L_587 = (int64_t)(L_585)->GetAt(static_cast<il2cpp_array_size_t>(L_586));
		V_9 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_584, L_587));
		uint64_t L_588 = V_10;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_589 = V_0;
		NullCheck(L_589);
		int32_t L_590 = 6;
		int64_t L_591 = (int64_t)(L_589)->GetAt(static_cast<il2cpp_array_size_t>(L_590));
		V_10 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_588, L_591));
		uint64_t L_592 = V_11;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_593 = V_0;
		NullCheck(L_593);
		int32_t L_594 = 7;
		int64_t L_595 = (int64_t)(L_593)->GetAt(static_cast<il2cpp_array_size_t>(L_594));
		V_11 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_592, L_595));
		uint64_t L_596 = V_12;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_597 = V_0;
		NullCheck(L_597);
		int32_t L_598 = 8;
		int64_t L_599 = (int64_t)(L_597)->GetAt(static_cast<il2cpp_array_size_t>(L_598));
		V_12 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_596, L_599));
		uint64_t L_600 = V_13;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_601 = V_0;
		NullCheck(L_601);
		int32_t L_602 = ((int32_t)9);
		int64_t L_603 = (int64_t)(L_601)->GetAt(static_cast<il2cpp_array_size_t>(L_602));
		V_13 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_600, L_603));
		uint64_t L_604 = V_14;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_605 = V_0;
		NullCheck(L_605);
		int32_t L_606 = ((int32_t)10);
		int64_t L_607 = (int64_t)(L_605)->GetAt(static_cast<il2cpp_array_size_t>(L_606));
		V_14 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_604, L_607));
		uint64_t L_608 = V_15;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_609 = V_0;
		NullCheck(L_609);
		int32_t L_610 = ((int32_t)11);
		int64_t L_611 = (int64_t)(L_609)->GetAt(static_cast<il2cpp_array_size_t>(L_610));
		V_15 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_608, L_611));
		uint64_t L_612 = V_16;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_613 = V_0;
		NullCheck(L_613);
		int32_t L_614 = ((int32_t)12);
		int64_t L_615 = (int64_t)(L_613)->GetAt(static_cast<il2cpp_array_size_t>(L_614));
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_612, L_615));
		uint64_t L_616 = V_17;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_617 = V_0;
		NullCheck(L_617);
		int32_t L_618 = ((int32_t)13);
		int64_t L_619 = (int64_t)(L_617)->GetAt(static_cast<il2cpp_array_size_t>(L_618));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_620 = V_1;
		NullCheck(L_620);
		int32_t L_621 = 0;
		int64_t L_622 = (int64_t)(L_620)->GetAt(static_cast<il2cpp_array_size_t>(L_621));
		V_17 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_616, ((int64_t)il2cpp_codegen_add(L_619, L_622))));
		uint64_t L_623 = V_18;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_624 = V_0;
		NullCheck(L_624);
		int32_t L_625 = ((int32_t)14);
		int64_t L_626 = (int64_t)(L_624)->GetAt(static_cast<il2cpp_array_size_t>(L_625));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_627 = V_1;
		NullCheck(L_627);
		int32_t L_628 = 1;
		int64_t L_629 = (int64_t)(L_627)->GetAt(static_cast<il2cpp_array_size_t>(L_628));
		V_18 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_623, ((int64_t)il2cpp_codegen_add(L_626, L_629))));
		uint64_t L_630 = V_19;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_631 = V_0;
		NullCheck(L_631);
		int32_t L_632 = ((int32_t)15);
		int64_t L_633 = (int64_t)(L_631)->GetAt(static_cast<il2cpp_array_size_t>(L_632));
		V_19 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_630, L_633));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_634 = ___1_state;
		uint64_t L_635 = V_4;
		NullCheck(L_634);
		(L_634)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint64_t)L_635);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_636 = ___1_state;
		uint64_t L_637 = V_5;
		NullCheck(L_636);
		(L_636)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint64_t)L_637);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_638 = ___1_state;
		uint64_t L_639 = V_6;
		NullCheck(L_638);
		(L_638)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint64_t)L_639);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_640 = ___1_state;
		uint64_t L_641 = V_7;
		NullCheck(L_640);
		(L_640)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint64_t)L_641);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_642 = ___1_state;
		uint64_t L_643 = V_8;
		NullCheck(L_642);
		(L_642)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint64_t)L_643);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_644 = ___1_state;
		uint64_t L_645 = V_9;
		NullCheck(L_644);
		(L_644)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint64_t)L_645);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_646 = ___1_state;
		uint64_t L_647 = V_10;
		NullCheck(L_646);
		(L_646)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint64_t)L_647);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_648 = ___1_state;
		uint64_t L_649 = V_11;
		NullCheck(L_648);
		(L_648)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint64_t)L_649);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_650 = ___1_state;
		uint64_t L_651 = V_12;
		NullCheck(L_650);
		(L_650)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint64_t)L_651);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_652 = ___1_state;
		uint64_t L_653 = V_13;
		NullCheck(L_652);
		(L_652)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint64_t)L_653);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_654 = ___1_state;
		uint64_t L_655 = V_14;
		NullCheck(L_654);
		(L_654)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint64_t)L_655);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_656 = ___1_state;
		uint64_t L_657 = V_15;
		NullCheck(L_656);
		(L_656)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint64_t)L_657);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_658 = ___1_state;
		uint64_t L_659 = V_16;
		NullCheck(L_658);
		(L_658)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint64_t)L_659);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_660 = ___1_state;
		uint64_t L_661 = V_17;
		NullCheck(L_660);
		(L_660)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint64_t)L_661);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_662 = ___1_state;
		uint64_t L_663 = V_18;
		NullCheck(L_662);
		(L_662)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint64_t)L_663);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_664 = ___1_state;
		uint64_t L_665 = V_19;
		NullCheck(L_664);
		(L_664)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint64_t)L_665);
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
// System.String Org.BouncyCastle.Crypto.Engines.TnepresEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TnepresEngine_get_AlgorithmName_m1B80BB58136E3D964EE8FAA8478D4B0C5585D420 (TnepresEngine_tB2063E257FDB18D464780C832450C7244D433DFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FE897253FBE41D1812A828E7F9FBC1C263A7EBE);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral6FE897253FBE41D1812A828E7F9FBC1C263A7EBE;
	}
}
// System.Int32[] Org.BouncyCastle.Crypto.Engines.TnepresEngine::MakeWorkingKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* TnepresEngine_MakeWorkingKey_m04D37ACB002CEAF725D20DACFCED267EC5FD4425 (TnepresEngine_tB2063E257FDB18D464780C832450C7244D433DFC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		V_1 = 0;
		V_2 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_key;
		NullCheck(L_1);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 4));
		goto IL_0026;
	}

IL_0014:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = V_0;
		int32_t L_3 = V_2;
		int32_t L_4 = L_3;
		V_2 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_key;
		int32_t L_6 = V_1;
		uint32_t L_7;
		L_7 = Pack_BE_To_UInt32_m6FD7E3B8014FC134F0CE2EA18C7DCD8C9EF64B63(L_5, L_6, NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_8, 4));
	}

IL_0026:
	{
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) > ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_10 = V_1;
		if (L_10)
		{
			goto IL_0045;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_0;
		int32_t L_12 = V_2;
		int32_t L_13 = L_12;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_key;
		uint32_t L_15;
		L_15 = Pack_BE_To_UInt32_m6FD7E3B8014FC134F0CE2EA18C7DCD8C9EF64B63(L_14, 0, NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (int32_t)L_15);
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) >= ((int32_t)8)))
		{
			goto IL_0050;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_0;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (int32_t)1);
		goto IL_0050;
	}

IL_0045:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral47D20EC1D621302B327F8DA26CCC5372F970DFB8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TnepresEngine_MakeWorkingKey_m04D37ACB002CEAF725D20DACFCED267EC5FD4425_RuntimeMethod_var)));
	}

IL_0050:
	{
		V_3 = ((int32_t)132);
		int32_t L_20 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_20);
		V_4 = L_21;
		V_5 = 8;
		goto IL_009a;
	}

IL_0063:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_0;
		int32_t L_23 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_0;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)il2cpp_codegen_subtract(L_25, 8));
		int32_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_0;
		int32_t L_29 = V_5;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_subtract(L_29, 5));
		int32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_0;
		int32_t L_33 = V_5;
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_subtract(L_33, 3));
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_0;
		int32_t L_37 = V_5;
		NullCheck(L_36);
		int32_t L_38 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		int32_t L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		int32_t L_40 = V_5;
		il2cpp_codegen_runtime_class_init_inline(SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var);
		int32_t L_41;
		L_41 = SerpentEngineBase_RotateLeft_mE5C5CC37CFAFB57348B330016E1D31E60B8ACD3B(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_27^L_31))^L_35))^L_39))^((int32_t)-1640531527)))^((int32_t)il2cpp_codegen_subtract(L_40, 8)))), ((int32_t)11), NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (int32_t)L_41);
		int32_t L_42 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_009a:
	{
		int32_t L_43 = V_5;
		if ((((int32_t)L_43) < ((int32_t)((int32_t)16))))
		{
			goto IL_0063;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_4;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_44, 8, (RuntimeArray*)L_45, 0, 8, NULL);
		V_6 = 8;
		goto IL_00ea;
	}

IL_00b0:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_4;
		int32_t L_47 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_4;
		int32_t L_49 = V_6;
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)il2cpp_codegen_subtract(L_49, 8));
		int32_t L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = V_4;
		int32_t L_53 = V_6;
		NullCheck(L_52);
		int32_t L_54 = ((int32_t)il2cpp_codegen_subtract(L_53, 5));
		int32_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_4;
		int32_t L_57 = V_6;
		NullCheck(L_56);
		int32_t L_58 = ((int32_t)il2cpp_codegen_subtract(L_57, 3));
		int32_t L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_4;
		int32_t L_61 = V_6;
		NullCheck(L_60);
		int32_t L_62 = ((int32_t)il2cpp_codegen_subtract(L_61, 1));
		int32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		int32_t L_64 = V_6;
		il2cpp_codegen_runtime_class_init_inline(SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var);
		int32_t L_65;
		L_65 = SerpentEngineBase_RotateLeft_mE5C5CC37CFAFB57348B330016E1D31E60B8ACD3B(((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_51^L_55))^L_59))^L_63))^((int32_t)-1640531527)))^L_64)), ((int32_t)11), NULL);
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_47), (int32_t)L_65);
		int32_t L_66 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_66, 1));
	}

IL_00ea:
	{
		int32_t L_67 = V_6;
		int32_t L_68 = V_3;
		if ((((int32_t)L_67) < ((int32_t)L_68)))
		{
			goto IL_00b0;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = V_4;
		NullCheck(L_69);
		int32_t L_70 = 0;
		int32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = V_4;
		NullCheck(L_72);
		int32_t L_73 = 1;
		int32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = V_4;
		NullCheck(L_75);
		int32_t L_76 = 2;
		int32_t L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_78 = V_4;
		NullCheck(L_78);
		int32_t L_79 = 3;
		int32_t L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD(__this, L_71, L_74, L_77, L_80, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = V_4;
		int32_t L_82 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_81);
		(L_81)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_82);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = V_4;
		int32_t L_84 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_84);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = V_4;
		int32_t L_86 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_86);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = V_4;
		int32_t L_88 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)L_88);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = V_4;
		NullCheck(L_89);
		int32_t L_90 = 4;
		int32_t L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = V_4;
		NullCheck(L_92);
		int32_t L_93 = 5;
		int32_t L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_95 = V_4;
		NullCheck(L_95);
		int32_t L_96 = 6;
		int32_t L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = V_4;
		NullCheck(L_98);
		int32_t L_99 = 7;
		int32_t L_100 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03(__this, L_91, L_94, L_97, L_100, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = V_4;
		int32_t L_102 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)L_102);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_103 = V_4;
		int32_t L_104 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_103);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)L_104);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = V_4;
		int32_t L_106 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(6), (int32_t)L_106);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_107 = V_4;
		int32_t L_108 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_107);
		(L_107)->SetAt(static_cast<il2cpp_array_size_t>(7), (int32_t)L_108);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = V_4;
		NullCheck(L_109);
		int32_t L_110 = 8;
		int32_t L_111 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_112 = V_4;
		NullCheck(L_112);
		int32_t L_113 = ((int32_t)9);
		int32_t L_114 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_115 = V_4;
		NullCheck(L_115);
		int32_t L_116 = ((int32_t)10);
		int32_t L_117 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_118 = V_4;
		NullCheck(L_118);
		int32_t L_119 = ((int32_t)11);
		int32_t L_120 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC(__this, L_111, L_114, L_117, L_120, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_121 = V_4;
		int32_t L_122 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(8), (int32_t)L_122);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_123 = V_4;
		int32_t L_124 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_123);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (int32_t)L_124);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_125 = V_4;
		int32_t L_126 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_125);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (int32_t)L_126);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_127 = V_4;
		int32_t L_128 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_127);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (int32_t)L_128);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_129 = V_4;
		NullCheck(L_129);
		int32_t L_130 = ((int32_t)12);
		int32_t L_131 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_132 = V_4;
		NullCheck(L_132);
		int32_t L_133 = ((int32_t)13);
		int32_t L_134 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_135 = V_4;
		NullCheck(L_135);
		int32_t L_136 = ((int32_t)14);
		int32_t L_137 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_136));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_138 = V_4;
		NullCheck(L_138);
		int32_t L_139 = ((int32_t)15);
		int32_t L_140 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB(__this, L_131, L_134, L_137, L_140, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_141 = V_4;
		int32_t L_142 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (int32_t)L_142);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_143 = V_4;
		int32_t L_144 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (int32_t)L_144);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_145 = V_4;
		int32_t L_146 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_145);
		(L_145)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (int32_t)L_146);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_147 = V_4;
		int32_t L_148 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_147);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (int32_t)L_148);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_149 = V_4;
		NullCheck(L_149);
		int32_t L_150 = ((int32_t)16);
		int32_t L_151 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_152 = V_4;
		NullCheck(L_152);
		int32_t L_153 = ((int32_t)17);
		int32_t L_154 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_155 = V_4;
		NullCheck(L_155);
		int32_t L_156 = ((int32_t)18);
		int32_t L_157 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_158 = V_4;
		NullCheck(L_158);
		int32_t L_159 = ((int32_t)19);
		int32_t L_160 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F(__this, L_151, L_154, L_157, L_160, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_161 = V_4;
		int32_t L_162 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_161);
		(L_161)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (int32_t)L_162);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_163 = V_4;
		int32_t L_164 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_163);
		(L_163)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (int32_t)L_164);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_165 = V_4;
		int32_t L_166 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_165);
		(L_165)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (int32_t)L_166);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_167 = V_4;
		int32_t L_168 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_167);
		(L_167)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (int32_t)L_168);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_169 = V_4;
		NullCheck(L_169);
		int32_t L_170 = ((int32_t)20);
		int32_t L_171 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_172 = V_4;
		NullCheck(L_172);
		int32_t L_173 = ((int32_t)21);
		int32_t L_174 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_175 = V_4;
		NullCheck(L_175);
		int32_t L_176 = ((int32_t)22);
		int32_t L_177 = (L_175)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_178 = V_4;
		NullCheck(L_178);
		int32_t L_179 = ((int32_t)23);
		int32_t L_180 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_179));
		SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B(__this, L_171, L_174, L_177, L_180, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_181 = V_4;
		int32_t L_182 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_181);
		(L_181)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (int32_t)L_182);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_183 = V_4;
		int32_t L_184 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_183);
		(L_183)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (int32_t)L_184);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_185 = V_4;
		int32_t L_186 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_185);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (int32_t)L_186);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_187 = V_4;
		int32_t L_188 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_187);
		(L_187)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (int32_t)L_188);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_189 = V_4;
		NullCheck(L_189);
		int32_t L_190 = ((int32_t)24);
		int32_t L_191 = (L_189)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_192 = V_4;
		NullCheck(L_192);
		int32_t L_193 = ((int32_t)25);
		int32_t L_194 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_195 = V_4;
		NullCheck(L_195);
		int32_t L_196 = ((int32_t)26);
		int32_t L_197 = (L_195)->GetAt(static_cast<il2cpp_array_size_t>(L_196));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_198 = V_4;
		NullCheck(L_198);
		int32_t L_199 = ((int32_t)27);
		int32_t L_200 = (L_198)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408(__this, L_191, L_194, L_197, L_200, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_201 = V_4;
		int32_t L_202 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_201);
		(L_201)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (int32_t)L_202);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_203 = V_4;
		int32_t L_204 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_203);
		(L_203)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (int32_t)L_204);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_205 = V_4;
		int32_t L_206 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_205);
		(L_205)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (int32_t)L_206);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_207 = V_4;
		int32_t L_208 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_207);
		(L_207)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (int32_t)L_208);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_209 = V_4;
		NullCheck(L_209);
		int32_t L_210 = ((int32_t)28);
		int32_t L_211 = (L_209)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_212 = V_4;
		NullCheck(L_212);
		int32_t L_213 = ((int32_t)29);
		int32_t L_214 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_215 = V_4;
		NullCheck(L_215);
		int32_t L_216 = ((int32_t)30);
		int32_t L_217 = (L_215)->GetAt(static_cast<il2cpp_array_size_t>(L_216));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_218 = V_4;
		NullCheck(L_218);
		int32_t L_219 = ((int32_t)31);
		int32_t L_220 = (L_218)->GetAt(static_cast<il2cpp_array_size_t>(L_219));
		SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5(__this, L_211, L_214, L_217, L_220, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_221 = V_4;
		int32_t L_222 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_221);
		(L_221)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)28)), (int32_t)L_222);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_223 = V_4;
		int32_t L_224 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_223);
		(L_223)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)29)), (int32_t)L_224);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_225 = V_4;
		int32_t L_226 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_225);
		(L_225)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)30)), (int32_t)L_226);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_227 = V_4;
		int32_t L_228 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_227);
		(L_227)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)31)), (int32_t)L_228);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_229 = V_4;
		NullCheck(L_229);
		int32_t L_230 = ((int32_t)32);
		int32_t L_231 = (L_229)->GetAt(static_cast<il2cpp_array_size_t>(L_230));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_232 = V_4;
		NullCheck(L_232);
		int32_t L_233 = ((int32_t)33);
		int32_t L_234 = (L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_233));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_235 = V_4;
		NullCheck(L_235);
		int32_t L_236 = ((int32_t)34);
		int32_t L_237 = (L_235)->GetAt(static_cast<il2cpp_array_size_t>(L_236));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_238 = V_4;
		NullCheck(L_238);
		int32_t L_239 = ((int32_t)35);
		int32_t L_240 = (L_238)->GetAt(static_cast<il2cpp_array_size_t>(L_239));
		SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD(__this, L_231, L_234, L_237, L_240, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_241 = V_4;
		int32_t L_242 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_241);
		(L_241)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)32)), (int32_t)L_242);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_243 = V_4;
		int32_t L_244 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_243);
		(L_243)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)33)), (int32_t)L_244);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_245 = V_4;
		int32_t L_246 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_245);
		(L_245)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)34)), (int32_t)L_246);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_247 = V_4;
		int32_t L_248 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_247);
		(L_247)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)35)), (int32_t)L_248);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_249 = V_4;
		NullCheck(L_249);
		int32_t L_250 = ((int32_t)36);
		int32_t L_251 = (L_249)->GetAt(static_cast<il2cpp_array_size_t>(L_250));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_252 = V_4;
		NullCheck(L_252);
		int32_t L_253 = ((int32_t)37);
		int32_t L_254 = (L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_253));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_255 = V_4;
		NullCheck(L_255);
		int32_t L_256 = ((int32_t)38);
		int32_t L_257 = (L_255)->GetAt(static_cast<il2cpp_array_size_t>(L_256));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_258 = V_4;
		NullCheck(L_258);
		int32_t L_259 = ((int32_t)39);
		int32_t L_260 = (L_258)->GetAt(static_cast<il2cpp_array_size_t>(L_259));
		SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03(__this, L_251, L_254, L_257, L_260, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_261 = V_4;
		int32_t L_262 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_261);
		(L_261)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)36)), (int32_t)L_262);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_263 = V_4;
		int32_t L_264 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_263);
		(L_263)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)37)), (int32_t)L_264);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_265 = V_4;
		int32_t L_266 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_265);
		(L_265)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)38)), (int32_t)L_266);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_267 = V_4;
		int32_t L_268 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_267);
		(L_267)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)39)), (int32_t)L_268);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_269 = V_4;
		NullCheck(L_269);
		int32_t L_270 = ((int32_t)40);
		int32_t L_271 = (L_269)->GetAt(static_cast<il2cpp_array_size_t>(L_270));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_272 = V_4;
		NullCheck(L_272);
		int32_t L_273 = ((int32_t)41);
		int32_t L_274 = (L_272)->GetAt(static_cast<il2cpp_array_size_t>(L_273));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_275 = V_4;
		NullCheck(L_275);
		int32_t L_276 = ((int32_t)42);
		int32_t L_277 = (L_275)->GetAt(static_cast<il2cpp_array_size_t>(L_276));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_278 = V_4;
		NullCheck(L_278);
		int32_t L_279 = ((int32_t)43);
		int32_t L_280 = (L_278)->GetAt(static_cast<il2cpp_array_size_t>(L_279));
		SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC(__this, L_271, L_274, L_277, L_280, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_281 = V_4;
		int32_t L_282 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_281);
		(L_281)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)40)), (int32_t)L_282);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_283 = V_4;
		int32_t L_284 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_283);
		(L_283)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)41)), (int32_t)L_284);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_285 = V_4;
		int32_t L_286 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_285);
		(L_285)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)42)), (int32_t)L_286);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_287 = V_4;
		int32_t L_288 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_287);
		(L_287)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)43)), (int32_t)L_288);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_289 = V_4;
		NullCheck(L_289);
		int32_t L_290 = ((int32_t)44);
		int32_t L_291 = (L_289)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_292 = V_4;
		NullCheck(L_292);
		int32_t L_293 = ((int32_t)45);
		int32_t L_294 = (L_292)->GetAt(static_cast<il2cpp_array_size_t>(L_293));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_295 = V_4;
		NullCheck(L_295);
		int32_t L_296 = ((int32_t)46);
		int32_t L_297 = (L_295)->GetAt(static_cast<il2cpp_array_size_t>(L_296));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_298 = V_4;
		NullCheck(L_298);
		int32_t L_299 = ((int32_t)47);
		int32_t L_300 = (L_298)->GetAt(static_cast<il2cpp_array_size_t>(L_299));
		SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB(__this, L_291, L_294, L_297, L_300, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_301 = V_4;
		int32_t L_302 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_301);
		(L_301)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)44)), (int32_t)L_302);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_303 = V_4;
		int32_t L_304 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_303);
		(L_303)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)45)), (int32_t)L_304);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_305 = V_4;
		int32_t L_306 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_305);
		(L_305)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)46)), (int32_t)L_306);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_307 = V_4;
		int32_t L_308 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_307);
		(L_307)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)47)), (int32_t)L_308);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_309 = V_4;
		NullCheck(L_309);
		int32_t L_310 = ((int32_t)48);
		int32_t L_311 = (L_309)->GetAt(static_cast<il2cpp_array_size_t>(L_310));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_312 = V_4;
		NullCheck(L_312);
		int32_t L_313 = ((int32_t)49);
		int32_t L_314 = (L_312)->GetAt(static_cast<il2cpp_array_size_t>(L_313));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_315 = V_4;
		NullCheck(L_315);
		int32_t L_316 = ((int32_t)50);
		int32_t L_317 = (L_315)->GetAt(static_cast<il2cpp_array_size_t>(L_316));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_318 = V_4;
		NullCheck(L_318);
		int32_t L_319 = ((int32_t)51);
		int32_t L_320 = (L_318)->GetAt(static_cast<il2cpp_array_size_t>(L_319));
		SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F(__this, L_311, L_314, L_317, L_320, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_321 = V_4;
		int32_t L_322 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_321);
		(L_321)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)48)), (int32_t)L_322);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_323 = V_4;
		int32_t L_324 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_323);
		(L_323)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)49)), (int32_t)L_324);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_325 = V_4;
		int32_t L_326 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_325);
		(L_325)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)50)), (int32_t)L_326);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_327 = V_4;
		int32_t L_328 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_327);
		(L_327)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)51)), (int32_t)L_328);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_329 = V_4;
		NullCheck(L_329);
		int32_t L_330 = ((int32_t)52);
		int32_t L_331 = (L_329)->GetAt(static_cast<il2cpp_array_size_t>(L_330));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_332 = V_4;
		NullCheck(L_332);
		int32_t L_333 = ((int32_t)53);
		int32_t L_334 = (L_332)->GetAt(static_cast<il2cpp_array_size_t>(L_333));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_335 = V_4;
		NullCheck(L_335);
		int32_t L_336 = ((int32_t)54);
		int32_t L_337 = (L_335)->GetAt(static_cast<il2cpp_array_size_t>(L_336));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_338 = V_4;
		NullCheck(L_338);
		int32_t L_339 = ((int32_t)55);
		int32_t L_340 = (L_338)->GetAt(static_cast<il2cpp_array_size_t>(L_339));
		SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B(__this, L_331, L_334, L_337, L_340, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_341 = V_4;
		int32_t L_342 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_341);
		(L_341)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)52)), (int32_t)L_342);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_343 = V_4;
		int32_t L_344 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_343);
		(L_343)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)53)), (int32_t)L_344);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_345 = V_4;
		int32_t L_346 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_345);
		(L_345)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)54)), (int32_t)L_346);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_347 = V_4;
		int32_t L_348 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_347);
		(L_347)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)55)), (int32_t)L_348);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_349 = V_4;
		NullCheck(L_349);
		int32_t L_350 = ((int32_t)56);
		int32_t L_351 = (L_349)->GetAt(static_cast<il2cpp_array_size_t>(L_350));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_352 = V_4;
		NullCheck(L_352);
		int32_t L_353 = ((int32_t)57);
		int32_t L_354 = (L_352)->GetAt(static_cast<il2cpp_array_size_t>(L_353));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_355 = V_4;
		NullCheck(L_355);
		int32_t L_356 = ((int32_t)58);
		int32_t L_357 = (L_355)->GetAt(static_cast<il2cpp_array_size_t>(L_356));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_358 = V_4;
		NullCheck(L_358);
		int32_t L_359 = ((int32_t)59);
		int32_t L_360 = (L_358)->GetAt(static_cast<il2cpp_array_size_t>(L_359));
		SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408(__this, L_351, L_354, L_357, L_360, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_361 = V_4;
		int32_t L_362 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_361);
		(L_361)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)56)), (int32_t)L_362);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_363 = V_4;
		int32_t L_364 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_363);
		(L_363)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)57)), (int32_t)L_364);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_365 = V_4;
		int32_t L_366 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_365);
		(L_365)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)58)), (int32_t)L_366);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_367 = V_4;
		int32_t L_368 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_367);
		(L_367)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)59)), (int32_t)L_368);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_369 = V_4;
		NullCheck(L_369);
		int32_t L_370 = ((int32_t)60);
		int32_t L_371 = (L_369)->GetAt(static_cast<il2cpp_array_size_t>(L_370));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_372 = V_4;
		NullCheck(L_372);
		int32_t L_373 = ((int32_t)61);
		int32_t L_374 = (L_372)->GetAt(static_cast<il2cpp_array_size_t>(L_373));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_375 = V_4;
		NullCheck(L_375);
		int32_t L_376 = ((int32_t)62);
		int32_t L_377 = (L_375)->GetAt(static_cast<il2cpp_array_size_t>(L_376));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_378 = V_4;
		NullCheck(L_378);
		int32_t L_379 = ((int32_t)63);
		int32_t L_380 = (L_378)->GetAt(static_cast<il2cpp_array_size_t>(L_379));
		SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5(__this, L_371, L_374, L_377, L_380, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_381 = V_4;
		int32_t L_382 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_381);
		(L_381)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)60)), (int32_t)L_382);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_383 = V_4;
		int32_t L_384 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_383);
		(L_383)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)61)), (int32_t)L_384);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_385 = V_4;
		int32_t L_386 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_385);
		(L_385)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)62)), (int32_t)L_386);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_387 = V_4;
		int32_t L_388 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_387);
		(L_387)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)63)), (int32_t)L_388);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_389 = V_4;
		NullCheck(L_389);
		int32_t L_390 = ((int32_t)64);
		int32_t L_391 = (L_389)->GetAt(static_cast<il2cpp_array_size_t>(L_390));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_392 = V_4;
		NullCheck(L_392);
		int32_t L_393 = ((int32_t)65);
		int32_t L_394 = (L_392)->GetAt(static_cast<il2cpp_array_size_t>(L_393));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_395 = V_4;
		NullCheck(L_395);
		int32_t L_396 = ((int32_t)66);
		int32_t L_397 = (L_395)->GetAt(static_cast<il2cpp_array_size_t>(L_396));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_398 = V_4;
		NullCheck(L_398);
		int32_t L_399 = ((int32_t)67);
		int32_t L_400 = (L_398)->GetAt(static_cast<il2cpp_array_size_t>(L_399));
		SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD(__this, L_391, L_394, L_397, L_400, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_401 = V_4;
		int32_t L_402 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_401);
		(L_401)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)64)), (int32_t)L_402);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_403 = V_4;
		int32_t L_404 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_403);
		(L_403)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)65)), (int32_t)L_404);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_405 = V_4;
		int32_t L_406 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_405);
		(L_405)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)66)), (int32_t)L_406);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_407 = V_4;
		int32_t L_408 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_407);
		(L_407)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)67)), (int32_t)L_408);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_409 = V_4;
		NullCheck(L_409);
		int32_t L_410 = ((int32_t)68);
		int32_t L_411 = (L_409)->GetAt(static_cast<il2cpp_array_size_t>(L_410));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_412 = V_4;
		NullCheck(L_412);
		int32_t L_413 = ((int32_t)69);
		int32_t L_414 = (L_412)->GetAt(static_cast<il2cpp_array_size_t>(L_413));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_415 = V_4;
		NullCheck(L_415);
		int32_t L_416 = ((int32_t)70);
		int32_t L_417 = (L_415)->GetAt(static_cast<il2cpp_array_size_t>(L_416));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_418 = V_4;
		NullCheck(L_418);
		int32_t L_419 = ((int32_t)71);
		int32_t L_420 = (L_418)->GetAt(static_cast<il2cpp_array_size_t>(L_419));
		SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03(__this, L_411, L_414, L_417, L_420, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_421 = V_4;
		int32_t L_422 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_421);
		(L_421)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)68)), (int32_t)L_422);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_423 = V_4;
		int32_t L_424 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_423);
		(L_423)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)69)), (int32_t)L_424);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_425 = V_4;
		int32_t L_426 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_425);
		(L_425)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)70)), (int32_t)L_426);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_427 = V_4;
		int32_t L_428 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_427);
		(L_427)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)71)), (int32_t)L_428);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_429 = V_4;
		NullCheck(L_429);
		int32_t L_430 = ((int32_t)72);
		int32_t L_431 = (L_429)->GetAt(static_cast<il2cpp_array_size_t>(L_430));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_432 = V_4;
		NullCheck(L_432);
		int32_t L_433 = ((int32_t)73);
		int32_t L_434 = (L_432)->GetAt(static_cast<il2cpp_array_size_t>(L_433));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_435 = V_4;
		NullCheck(L_435);
		int32_t L_436 = ((int32_t)74);
		int32_t L_437 = (L_435)->GetAt(static_cast<il2cpp_array_size_t>(L_436));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_438 = V_4;
		NullCheck(L_438);
		int32_t L_439 = ((int32_t)75);
		int32_t L_440 = (L_438)->GetAt(static_cast<il2cpp_array_size_t>(L_439));
		SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC(__this, L_431, L_434, L_437, L_440, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_441 = V_4;
		int32_t L_442 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_441);
		(L_441)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)72)), (int32_t)L_442);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_443 = V_4;
		int32_t L_444 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_443);
		(L_443)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)73)), (int32_t)L_444);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_445 = V_4;
		int32_t L_446 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_445);
		(L_445)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)74)), (int32_t)L_446);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_447 = V_4;
		int32_t L_448 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_447);
		(L_447)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)75)), (int32_t)L_448);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_449 = V_4;
		NullCheck(L_449);
		int32_t L_450 = ((int32_t)76);
		int32_t L_451 = (L_449)->GetAt(static_cast<il2cpp_array_size_t>(L_450));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_452 = V_4;
		NullCheck(L_452);
		int32_t L_453 = ((int32_t)77);
		int32_t L_454 = (L_452)->GetAt(static_cast<il2cpp_array_size_t>(L_453));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_455 = V_4;
		NullCheck(L_455);
		int32_t L_456 = ((int32_t)78);
		int32_t L_457 = (L_455)->GetAt(static_cast<il2cpp_array_size_t>(L_456));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_458 = V_4;
		NullCheck(L_458);
		int32_t L_459 = ((int32_t)79);
		int32_t L_460 = (L_458)->GetAt(static_cast<il2cpp_array_size_t>(L_459));
		SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB(__this, L_451, L_454, L_457, L_460, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_461 = V_4;
		int32_t L_462 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_461);
		(L_461)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)76)), (int32_t)L_462);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_463 = V_4;
		int32_t L_464 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_463);
		(L_463)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)77)), (int32_t)L_464);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_465 = V_4;
		int32_t L_466 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_465);
		(L_465)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)78)), (int32_t)L_466);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_467 = V_4;
		int32_t L_468 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_467);
		(L_467)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)79)), (int32_t)L_468);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_469 = V_4;
		NullCheck(L_469);
		int32_t L_470 = ((int32_t)80);
		int32_t L_471 = (L_469)->GetAt(static_cast<il2cpp_array_size_t>(L_470));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_472 = V_4;
		NullCheck(L_472);
		int32_t L_473 = ((int32_t)81);
		int32_t L_474 = (L_472)->GetAt(static_cast<il2cpp_array_size_t>(L_473));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_475 = V_4;
		NullCheck(L_475);
		int32_t L_476 = ((int32_t)82);
		int32_t L_477 = (L_475)->GetAt(static_cast<il2cpp_array_size_t>(L_476));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_478 = V_4;
		NullCheck(L_478);
		int32_t L_479 = ((int32_t)83);
		int32_t L_480 = (L_478)->GetAt(static_cast<il2cpp_array_size_t>(L_479));
		SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F(__this, L_471, L_474, L_477, L_480, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_481 = V_4;
		int32_t L_482 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_481);
		(L_481)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)80)), (int32_t)L_482);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_483 = V_4;
		int32_t L_484 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_483);
		(L_483)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)81)), (int32_t)L_484);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_485 = V_4;
		int32_t L_486 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_485);
		(L_485)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)82)), (int32_t)L_486);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_487 = V_4;
		int32_t L_488 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_487);
		(L_487)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)83)), (int32_t)L_488);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_489 = V_4;
		NullCheck(L_489);
		int32_t L_490 = ((int32_t)84);
		int32_t L_491 = (L_489)->GetAt(static_cast<il2cpp_array_size_t>(L_490));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_492 = V_4;
		NullCheck(L_492);
		int32_t L_493 = ((int32_t)85);
		int32_t L_494 = (L_492)->GetAt(static_cast<il2cpp_array_size_t>(L_493));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_495 = V_4;
		NullCheck(L_495);
		int32_t L_496 = ((int32_t)86);
		int32_t L_497 = (L_495)->GetAt(static_cast<il2cpp_array_size_t>(L_496));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_498 = V_4;
		NullCheck(L_498);
		int32_t L_499 = ((int32_t)87);
		int32_t L_500 = (L_498)->GetAt(static_cast<il2cpp_array_size_t>(L_499));
		SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B(__this, L_491, L_494, L_497, L_500, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_501 = V_4;
		int32_t L_502 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_501);
		(L_501)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)84)), (int32_t)L_502);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_503 = V_4;
		int32_t L_504 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_503);
		(L_503)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)85)), (int32_t)L_504);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_505 = V_4;
		int32_t L_506 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_505);
		(L_505)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)86)), (int32_t)L_506);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_507 = V_4;
		int32_t L_508 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_507);
		(L_507)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)87)), (int32_t)L_508);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_509 = V_4;
		NullCheck(L_509);
		int32_t L_510 = ((int32_t)88);
		int32_t L_511 = (L_509)->GetAt(static_cast<il2cpp_array_size_t>(L_510));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_512 = V_4;
		NullCheck(L_512);
		int32_t L_513 = ((int32_t)89);
		int32_t L_514 = (L_512)->GetAt(static_cast<il2cpp_array_size_t>(L_513));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_515 = V_4;
		NullCheck(L_515);
		int32_t L_516 = ((int32_t)90);
		int32_t L_517 = (L_515)->GetAt(static_cast<il2cpp_array_size_t>(L_516));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_518 = V_4;
		NullCheck(L_518);
		int32_t L_519 = ((int32_t)91);
		int32_t L_520 = (L_518)->GetAt(static_cast<il2cpp_array_size_t>(L_519));
		SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408(__this, L_511, L_514, L_517, L_520, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_521 = V_4;
		int32_t L_522 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_521);
		(L_521)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)88)), (int32_t)L_522);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_523 = V_4;
		int32_t L_524 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_523);
		(L_523)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)89)), (int32_t)L_524);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_525 = V_4;
		int32_t L_526 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_525);
		(L_525)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)90)), (int32_t)L_526);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_527 = V_4;
		int32_t L_528 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_527);
		(L_527)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)91)), (int32_t)L_528);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_529 = V_4;
		NullCheck(L_529);
		int32_t L_530 = ((int32_t)92);
		int32_t L_531 = (L_529)->GetAt(static_cast<il2cpp_array_size_t>(L_530));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_532 = V_4;
		NullCheck(L_532);
		int32_t L_533 = ((int32_t)93);
		int32_t L_534 = (L_532)->GetAt(static_cast<il2cpp_array_size_t>(L_533));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_535 = V_4;
		NullCheck(L_535);
		int32_t L_536 = ((int32_t)94);
		int32_t L_537 = (L_535)->GetAt(static_cast<il2cpp_array_size_t>(L_536));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_538 = V_4;
		NullCheck(L_538);
		int32_t L_539 = ((int32_t)95);
		int32_t L_540 = (L_538)->GetAt(static_cast<il2cpp_array_size_t>(L_539));
		SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5(__this, L_531, L_534, L_537, L_540, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_541 = V_4;
		int32_t L_542 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_541);
		(L_541)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)92)), (int32_t)L_542);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_543 = V_4;
		int32_t L_544 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_543);
		(L_543)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)93)), (int32_t)L_544);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_545 = V_4;
		int32_t L_546 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_545);
		(L_545)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)94)), (int32_t)L_546);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_547 = V_4;
		int32_t L_548 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_547);
		(L_547)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)95)), (int32_t)L_548);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_549 = V_4;
		NullCheck(L_549);
		int32_t L_550 = ((int32_t)96);
		int32_t L_551 = (L_549)->GetAt(static_cast<il2cpp_array_size_t>(L_550));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_552 = V_4;
		NullCheck(L_552);
		int32_t L_553 = ((int32_t)97);
		int32_t L_554 = (L_552)->GetAt(static_cast<il2cpp_array_size_t>(L_553));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_555 = V_4;
		NullCheck(L_555);
		int32_t L_556 = ((int32_t)98);
		int32_t L_557 = (L_555)->GetAt(static_cast<il2cpp_array_size_t>(L_556));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_558 = V_4;
		NullCheck(L_558);
		int32_t L_559 = ((int32_t)99);
		int32_t L_560 = (L_558)->GetAt(static_cast<il2cpp_array_size_t>(L_559));
		SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD(__this, L_551, L_554, L_557, L_560, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_561 = V_4;
		int32_t L_562 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_561);
		(L_561)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)96)), (int32_t)L_562);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_563 = V_4;
		int32_t L_564 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_563);
		(L_563)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)97)), (int32_t)L_564);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_565 = V_4;
		int32_t L_566 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_565);
		(L_565)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)98)), (int32_t)L_566);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_567 = V_4;
		int32_t L_568 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_567);
		(L_567)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)99)), (int32_t)L_568);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_569 = V_4;
		NullCheck(L_569);
		int32_t L_570 = ((int32_t)100);
		int32_t L_571 = (L_569)->GetAt(static_cast<il2cpp_array_size_t>(L_570));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_572 = V_4;
		NullCheck(L_572);
		int32_t L_573 = ((int32_t)101);
		int32_t L_574 = (L_572)->GetAt(static_cast<il2cpp_array_size_t>(L_573));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_575 = V_4;
		NullCheck(L_575);
		int32_t L_576 = ((int32_t)102);
		int32_t L_577 = (L_575)->GetAt(static_cast<il2cpp_array_size_t>(L_576));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_578 = V_4;
		NullCheck(L_578);
		int32_t L_579 = ((int32_t)103);
		int32_t L_580 = (L_578)->GetAt(static_cast<il2cpp_array_size_t>(L_579));
		SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03(__this, L_571, L_574, L_577, L_580, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_581 = V_4;
		int32_t L_582 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_581);
		(L_581)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)100)), (int32_t)L_582);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_583 = V_4;
		int32_t L_584 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_583);
		(L_583)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)101)), (int32_t)L_584);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_585 = V_4;
		int32_t L_586 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_585);
		(L_585)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)102)), (int32_t)L_586);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_587 = V_4;
		int32_t L_588 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_587);
		(L_587)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)103)), (int32_t)L_588);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_589 = V_4;
		NullCheck(L_589);
		int32_t L_590 = ((int32_t)104);
		int32_t L_591 = (L_589)->GetAt(static_cast<il2cpp_array_size_t>(L_590));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_592 = V_4;
		NullCheck(L_592);
		int32_t L_593 = ((int32_t)105);
		int32_t L_594 = (L_592)->GetAt(static_cast<il2cpp_array_size_t>(L_593));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_595 = V_4;
		NullCheck(L_595);
		int32_t L_596 = ((int32_t)106);
		int32_t L_597 = (L_595)->GetAt(static_cast<il2cpp_array_size_t>(L_596));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_598 = V_4;
		NullCheck(L_598);
		int32_t L_599 = ((int32_t)107);
		int32_t L_600 = (L_598)->GetAt(static_cast<il2cpp_array_size_t>(L_599));
		SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC(__this, L_591, L_594, L_597, L_600, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_601 = V_4;
		int32_t L_602 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_601);
		(L_601)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)104)), (int32_t)L_602);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_603 = V_4;
		int32_t L_604 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_603);
		(L_603)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)105)), (int32_t)L_604);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_605 = V_4;
		int32_t L_606 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_605);
		(L_605)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)106)), (int32_t)L_606);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_607 = V_4;
		int32_t L_608 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_607);
		(L_607)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)107)), (int32_t)L_608);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_609 = V_4;
		NullCheck(L_609);
		int32_t L_610 = ((int32_t)108);
		int32_t L_611 = (L_609)->GetAt(static_cast<il2cpp_array_size_t>(L_610));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_612 = V_4;
		NullCheck(L_612);
		int32_t L_613 = ((int32_t)109);
		int32_t L_614 = (L_612)->GetAt(static_cast<il2cpp_array_size_t>(L_613));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_615 = V_4;
		NullCheck(L_615);
		int32_t L_616 = ((int32_t)110);
		int32_t L_617 = (L_615)->GetAt(static_cast<il2cpp_array_size_t>(L_616));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_618 = V_4;
		NullCheck(L_618);
		int32_t L_619 = ((int32_t)111);
		int32_t L_620 = (L_618)->GetAt(static_cast<il2cpp_array_size_t>(L_619));
		SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB(__this, L_611, L_614, L_617, L_620, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_621 = V_4;
		int32_t L_622 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_621);
		(L_621)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)108)), (int32_t)L_622);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_623 = V_4;
		int32_t L_624 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_623);
		(L_623)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)109)), (int32_t)L_624);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_625 = V_4;
		int32_t L_626 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_625);
		(L_625)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)110)), (int32_t)L_626);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_627 = V_4;
		int32_t L_628 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_627);
		(L_627)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)111)), (int32_t)L_628);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_629 = V_4;
		NullCheck(L_629);
		int32_t L_630 = ((int32_t)112);
		int32_t L_631 = (L_629)->GetAt(static_cast<il2cpp_array_size_t>(L_630));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_632 = V_4;
		NullCheck(L_632);
		int32_t L_633 = ((int32_t)113);
		int32_t L_634 = (L_632)->GetAt(static_cast<il2cpp_array_size_t>(L_633));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_635 = V_4;
		NullCheck(L_635);
		int32_t L_636 = ((int32_t)114);
		int32_t L_637 = (L_635)->GetAt(static_cast<il2cpp_array_size_t>(L_636));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_638 = V_4;
		NullCheck(L_638);
		int32_t L_639 = ((int32_t)115);
		int32_t L_640 = (L_638)->GetAt(static_cast<il2cpp_array_size_t>(L_639));
		SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F(__this, L_631, L_634, L_637, L_640, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_641 = V_4;
		int32_t L_642 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_641);
		(L_641)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)112)), (int32_t)L_642);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_643 = V_4;
		int32_t L_644 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_643);
		(L_643)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)113)), (int32_t)L_644);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_645 = V_4;
		int32_t L_646 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_645);
		(L_645)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)114)), (int32_t)L_646);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_647 = V_4;
		int32_t L_648 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_647);
		(L_647)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)115)), (int32_t)L_648);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_649 = V_4;
		NullCheck(L_649);
		int32_t L_650 = ((int32_t)116);
		int32_t L_651 = (L_649)->GetAt(static_cast<il2cpp_array_size_t>(L_650));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_652 = V_4;
		NullCheck(L_652);
		int32_t L_653 = ((int32_t)117);
		int32_t L_654 = (L_652)->GetAt(static_cast<il2cpp_array_size_t>(L_653));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_655 = V_4;
		NullCheck(L_655);
		int32_t L_656 = ((int32_t)118);
		int32_t L_657 = (L_655)->GetAt(static_cast<il2cpp_array_size_t>(L_656));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_658 = V_4;
		NullCheck(L_658);
		int32_t L_659 = ((int32_t)119);
		int32_t L_660 = (L_658)->GetAt(static_cast<il2cpp_array_size_t>(L_659));
		SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B(__this, L_651, L_654, L_657, L_660, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_661 = V_4;
		int32_t L_662 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_661);
		(L_661)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)116)), (int32_t)L_662);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_663 = V_4;
		int32_t L_664 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_663);
		(L_663)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)117)), (int32_t)L_664);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_665 = V_4;
		int32_t L_666 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_665);
		(L_665)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)118)), (int32_t)L_666);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_667 = V_4;
		int32_t L_668 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_667);
		(L_667)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)119)), (int32_t)L_668);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_669 = V_4;
		NullCheck(L_669);
		int32_t L_670 = ((int32_t)120);
		int32_t L_671 = (L_669)->GetAt(static_cast<il2cpp_array_size_t>(L_670));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_672 = V_4;
		NullCheck(L_672);
		int32_t L_673 = ((int32_t)121);
		int32_t L_674 = (L_672)->GetAt(static_cast<il2cpp_array_size_t>(L_673));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_675 = V_4;
		NullCheck(L_675);
		int32_t L_676 = ((int32_t)122);
		int32_t L_677 = (L_675)->GetAt(static_cast<il2cpp_array_size_t>(L_676));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_678 = V_4;
		NullCheck(L_678);
		int32_t L_679 = ((int32_t)123);
		int32_t L_680 = (L_678)->GetAt(static_cast<il2cpp_array_size_t>(L_679));
		SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408(__this, L_671, L_674, L_677, L_680, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_681 = V_4;
		int32_t L_682 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_681);
		(L_681)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)120)), (int32_t)L_682);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_683 = V_4;
		int32_t L_684 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_683);
		(L_683)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)121)), (int32_t)L_684);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_685 = V_4;
		int32_t L_686 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_685);
		(L_685)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)122)), (int32_t)L_686);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_687 = V_4;
		int32_t L_688 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_687);
		(L_687)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)123)), (int32_t)L_688);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_689 = V_4;
		NullCheck(L_689);
		int32_t L_690 = ((int32_t)124);
		int32_t L_691 = (L_689)->GetAt(static_cast<il2cpp_array_size_t>(L_690));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_692 = V_4;
		NullCheck(L_692);
		int32_t L_693 = ((int32_t)125);
		int32_t L_694 = (L_692)->GetAt(static_cast<il2cpp_array_size_t>(L_693));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_695 = V_4;
		NullCheck(L_695);
		int32_t L_696 = ((int32_t)126);
		int32_t L_697 = (L_695)->GetAt(static_cast<il2cpp_array_size_t>(L_696));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_698 = V_4;
		NullCheck(L_698);
		int32_t L_699 = ((int32_t)127);
		int32_t L_700 = (L_698)->GetAt(static_cast<il2cpp_array_size_t>(L_699));
		SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5(__this, L_691, L_694, L_697, L_700, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_701 = V_4;
		int32_t L_702 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_701);
		(L_701)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)124)), (int32_t)L_702);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_703 = V_4;
		int32_t L_704 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_703);
		(L_703)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)125)), (int32_t)L_704);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_705 = V_4;
		int32_t L_706 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_705);
		(L_705)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)126)), (int32_t)L_706);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_707 = V_4;
		int32_t L_708 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_707);
		(L_707)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)127)), (int32_t)L_708);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_709 = V_4;
		NullCheck(L_709);
		int32_t L_710 = ((int32_t)128);
		int32_t L_711 = (L_709)->GetAt(static_cast<il2cpp_array_size_t>(L_710));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_712 = V_4;
		NullCheck(L_712);
		int32_t L_713 = ((int32_t)129);
		int32_t L_714 = (L_712)->GetAt(static_cast<il2cpp_array_size_t>(L_713));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_715 = V_4;
		NullCheck(L_715);
		int32_t L_716 = ((int32_t)130);
		int32_t L_717 = (L_715)->GetAt(static_cast<il2cpp_array_size_t>(L_716));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_718 = V_4;
		NullCheck(L_718);
		int32_t L_719 = ((int32_t)131);
		int32_t L_720 = (L_718)->GetAt(static_cast<il2cpp_array_size_t>(L_719));
		SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD(__this, L_711, L_714, L_717, L_720, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_721 = V_4;
		int32_t L_722 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		NullCheck(L_721);
		(L_721)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)128)), (int32_t)L_722);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_723 = V_4;
		int32_t L_724 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		NullCheck(L_723);
		(L_723)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)129)), (int32_t)L_724);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_725 = V_4;
		int32_t L_726 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		NullCheck(L_725);
		(L_725)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)130)), (int32_t)L_726);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_727 = V_4;
		int32_t L_728 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		NullCheck(L_727);
		(L_727)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)131)), (int32_t)L_728);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_729 = V_4;
		return L_729;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TnepresEngine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TnepresEngine_EncryptBlock_m924CA000E934C457C40AE31295D86C3B54421F58 (TnepresEngine_tB2063E257FDB18D464780C832450C7244D433DFC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_output, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_input;
		int32_t L_1 = ___1_inOff;
		uint32_t L_2;
		L_2 = Pack_BE_To_UInt32_m6FD7E3B8014FC134F0CE2EA18C7DCD8C9EF64B63(L_0, L_1, NULL);
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_input;
		int32_t L_4 = ___1_inOff;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_m6FD7E3B8014FC134F0CE2EA18C7DCD8C9EF64B63(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_input;
		int32_t L_7 = ___1_inOff;
		uint32_t L_8;
		L_8 = Pack_BE_To_UInt32_m6FD7E3B8014FC134F0CE2EA18C7DCD8C9EF64B63(L_6, ((int32_t)il2cpp_codegen_add(L_7, 8)), NULL);
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_input;
		int32_t L_10 = ___1_inOff;
		uint32_t L_11;
		L_11 = Pack_BE_To_UInt32_m6FD7E3B8014FC134F0CE2EA18C7DCD8C9EF64B63(L_9, ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)12))), NULL);
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_12);
		int32_t L_13 = 0;
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		int32_t L_15 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_16);
		int32_t L_17 = 1;
		int32_t L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_20);
		int32_t L_21 = 2;
		int32_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		int32_t L_23 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_24);
		int32_t L_25 = 3;
		int32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		int32_t L_27 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB(__this, ((int32_t)(L_14^L_15)), ((int32_t)(L_18^L_19)), ((int32_t)(L_22^L_23)), ((int32_t)(L_26^L_27)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_28);
		int32_t L_29 = 4;
		int32_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_32);
		int32_t L_33 = 5;
		int32_t L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_36);
		int32_t L_37 = 6;
		int32_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		int32_t L_39 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_40);
		int32_t L_41 = 7;
		int32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		int32_t L_43 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC(__this, ((int32_t)(L_30^L_31)), ((int32_t)(L_34^L_35)), ((int32_t)(L_38^L_39)), ((int32_t)(L_42^L_43)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_44);
		int32_t L_45 = 8;
		int32_t L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_48);
		int32_t L_49 = ((int32_t)9);
		int32_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		int32_t L_51 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_52);
		int32_t L_53 = ((int32_t)10);
		int32_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		int32_t L_55 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_56);
		int32_t L_57 = ((int32_t)11);
		int32_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		int32_t L_59 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03(__this, ((int32_t)(L_46^L_47)), ((int32_t)(L_50^L_51)), ((int32_t)(L_54^L_55)), ((int32_t)(L_58^L_59)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_60);
		int32_t L_61 = ((int32_t)12);
		int32_t L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		int32_t L_63 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_64);
		int32_t L_65 = ((int32_t)13);
		int32_t L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		int32_t L_67 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_68);
		int32_t L_69 = ((int32_t)14);
		int32_t L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		int32_t L_71 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_72);
		int32_t L_73 = ((int32_t)15);
		int32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		int32_t L_75 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD(__this, ((int32_t)(L_62^L_63)), ((int32_t)(L_66^L_67)), ((int32_t)(L_70^L_71)), ((int32_t)(L_74^L_75)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_76);
		int32_t L_77 = ((int32_t)16);
		int32_t L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		int32_t L_79 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_80);
		int32_t L_81 = ((int32_t)17);
		int32_t L_82 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		int32_t L_83 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_84);
		int32_t L_85 = ((int32_t)18);
		int32_t L_86 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		int32_t L_87 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_88);
		int32_t L_89 = ((int32_t)19);
		int32_t L_90 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		int32_t L_91 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5(__this, ((int32_t)(L_78^L_79)), ((int32_t)(L_82^L_83)), ((int32_t)(L_86^L_87)), ((int32_t)(L_90^L_91)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_92);
		int32_t L_93 = ((int32_t)20);
		int32_t L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		int32_t L_95 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_96 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_96);
		int32_t L_97 = ((int32_t)21);
		int32_t L_98 = (L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		int32_t L_99 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_100 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_100);
		int32_t L_101 = ((int32_t)22);
		int32_t L_102 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		int32_t L_103 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_104);
		int32_t L_105 = ((int32_t)23);
		int32_t L_106 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		int32_t L_107 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408(__this, ((int32_t)(L_94^L_95)), ((int32_t)(L_98^L_99)), ((int32_t)(L_102^L_103)), ((int32_t)(L_106^L_107)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_108);
		int32_t L_109 = ((int32_t)24);
		int32_t L_110 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		int32_t L_111 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_112 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_112);
		int32_t L_113 = ((int32_t)25);
		int32_t L_114 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		int32_t L_115 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_116 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_116);
		int32_t L_117 = ((int32_t)26);
		int32_t L_118 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		int32_t L_119 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_120 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_120);
		int32_t L_121 = ((int32_t)27);
		int32_t L_122 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		int32_t L_123 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B(__this, ((int32_t)(L_110^L_111)), ((int32_t)(L_114^L_115)), ((int32_t)(L_118^L_119)), ((int32_t)(L_122^L_123)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_124 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_124);
		int32_t L_125 = ((int32_t)28);
		int32_t L_126 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		int32_t L_127 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_128 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_128);
		int32_t L_129 = ((int32_t)29);
		int32_t L_130 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		int32_t L_131 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_132 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_132);
		int32_t L_133 = ((int32_t)30);
		int32_t L_134 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		int32_t L_135 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_136 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_136);
		int32_t L_137 = ((int32_t)31);
		int32_t L_138 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		int32_t L_139 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F(__this, ((int32_t)(L_126^L_127)), ((int32_t)(L_130^L_131)), ((int32_t)(L_134^L_135)), ((int32_t)(L_138^L_139)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_140 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_140);
		int32_t L_141 = ((int32_t)32);
		int32_t L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		int32_t L_143 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_144 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_144);
		int32_t L_145 = ((int32_t)33);
		int32_t L_146 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		int32_t L_147 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_148 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_148);
		int32_t L_149 = ((int32_t)34);
		int32_t L_150 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		int32_t L_151 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_152 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_152);
		int32_t L_153 = ((int32_t)35);
		int32_t L_154 = (L_152)->GetAt(static_cast<il2cpp_array_size_t>(L_153));
		int32_t L_155 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB(__this, ((int32_t)(L_142^L_143)), ((int32_t)(L_146^L_147)), ((int32_t)(L_150^L_151)), ((int32_t)(L_154^L_155)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_156 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_156);
		int32_t L_157 = ((int32_t)36);
		int32_t L_158 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		int32_t L_159 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_160 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_160);
		int32_t L_161 = ((int32_t)37);
		int32_t L_162 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_161));
		int32_t L_163 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_164 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_164);
		int32_t L_165 = ((int32_t)38);
		int32_t L_166 = (L_164)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		int32_t L_167 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_168 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_168);
		int32_t L_169 = ((int32_t)39);
		int32_t L_170 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		int32_t L_171 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC(__this, ((int32_t)(L_158^L_159)), ((int32_t)(L_162^L_163)), ((int32_t)(L_166^L_167)), ((int32_t)(L_170^L_171)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_172 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_172);
		int32_t L_173 = ((int32_t)40);
		int32_t L_174 = (L_172)->GetAt(static_cast<il2cpp_array_size_t>(L_173));
		int32_t L_175 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_176 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_176);
		int32_t L_177 = ((int32_t)41);
		int32_t L_178 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		int32_t L_179 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_180 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_180);
		int32_t L_181 = ((int32_t)42);
		int32_t L_182 = (L_180)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		int32_t L_183 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_184 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_184);
		int32_t L_185 = ((int32_t)43);
		int32_t L_186 = (L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		int32_t L_187 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03(__this, ((int32_t)(L_174^L_175)), ((int32_t)(L_178^L_179)), ((int32_t)(L_182^L_183)), ((int32_t)(L_186^L_187)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_188 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_188);
		int32_t L_189 = ((int32_t)44);
		int32_t L_190 = (L_188)->GetAt(static_cast<il2cpp_array_size_t>(L_189));
		int32_t L_191 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_192 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_192);
		int32_t L_193 = ((int32_t)45);
		int32_t L_194 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		int32_t L_195 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_196 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_196);
		int32_t L_197 = ((int32_t)46);
		int32_t L_198 = (L_196)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
		int32_t L_199 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_200 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_200);
		int32_t L_201 = ((int32_t)47);
		int32_t L_202 = (L_200)->GetAt(static_cast<il2cpp_array_size_t>(L_201));
		int32_t L_203 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD(__this, ((int32_t)(L_190^L_191)), ((int32_t)(L_194^L_195)), ((int32_t)(L_198^L_199)), ((int32_t)(L_202^L_203)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_204 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_204);
		int32_t L_205 = ((int32_t)48);
		int32_t L_206 = (L_204)->GetAt(static_cast<il2cpp_array_size_t>(L_205));
		int32_t L_207 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_208 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_208);
		int32_t L_209 = ((int32_t)49);
		int32_t L_210 = (L_208)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		int32_t L_211 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_212 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_212);
		int32_t L_213 = ((int32_t)50);
		int32_t L_214 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		int32_t L_215 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_216 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_216);
		int32_t L_217 = ((int32_t)51);
		int32_t L_218 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		int32_t L_219 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5(__this, ((int32_t)(L_206^L_207)), ((int32_t)(L_210^L_211)), ((int32_t)(L_214^L_215)), ((int32_t)(L_218^L_219)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_220 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_220);
		int32_t L_221 = ((int32_t)52);
		int32_t L_222 = (L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_221));
		int32_t L_223 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_224 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_224);
		int32_t L_225 = ((int32_t)53);
		int32_t L_226 = (L_224)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		int32_t L_227 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_228 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_228);
		int32_t L_229 = ((int32_t)54);
		int32_t L_230 = (L_228)->GetAt(static_cast<il2cpp_array_size_t>(L_229));
		int32_t L_231 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_232 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_232);
		int32_t L_233 = ((int32_t)55);
		int32_t L_234 = (L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_233));
		int32_t L_235 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408(__this, ((int32_t)(L_222^L_223)), ((int32_t)(L_226^L_227)), ((int32_t)(L_230^L_231)), ((int32_t)(L_234^L_235)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_236 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_236);
		int32_t L_237 = ((int32_t)56);
		int32_t L_238 = (L_236)->GetAt(static_cast<il2cpp_array_size_t>(L_237));
		int32_t L_239 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_240 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_240);
		int32_t L_241 = ((int32_t)57);
		int32_t L_242 = (L_240)->GetAt(static_cast<il2cpp_array_size_t>(L_241));
		int32_t L_243 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_244 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_244);
		int32_t L_245 = ((int32_t)58);
		int32_t L_246 = (L_244)->GetAt(static_cast<il2cpp_array_size_t>(L_245));
		int32_t L_247 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_248 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_248);
		int32_t L_249 = ((int32_t)59);
		int32_t L_250 = (L_248)->GetAt(static_cast<il2cpp_array_size_t>(L_249));
		int32_t L_251 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B(__this, ((int32_t)(L_238^L_239)), ((int32_t)(L_242^L_243)), ((int32_t)(L_246^L_247)), ((int32_t)(L_250^L_251)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_252 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_252);
		int32_t L_253 = ((int32_t)60);
		int32_t L_254 = (L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_253));
		int32_t L_255 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_256 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_256);
		int32_t L_257 = ((int32_t)61);
		int32_t L_258 = (L_256)->GetAt(static_cast<il2cpp_array_size_t>(L_257));
		int32_t L_259 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_260 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_260);
		int32_t L_261 = ((int32_t)62);
		int32_t L_262 = (L_260)->GetAt(static_cast<il2cpp_array_size_t>(L_261));
		int32_t L_263 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_264 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_264);
		int32_t L_265 = ((int32_t)63);
		int32_t L_266 = (L_264)->GetAt(static_cast<il2cpp_array_size_t>(L_265));
		int32_t L_267 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F(__this, ((int32_t)(L_254^L_255)), ((int32_t)(L_258^L_259)), ((int32_t)(L_262^L_263)), ((int32_t)(L_266^L_267)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_268 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_268);
		int32_t L_269 = ((int32_t)64);
		int32_t L_270 = (L_268)->GetAt(static_cast<il2cpp_array_size_t>(L_269));
		int32_t L_271 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_272 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_272);
		int32_t L_273 = ((int32_t)65);
		int32_t L_274 = (L_272)->GetAt(static_cast<il2cpp_array_size_t>(L_273));
		int32_t L_275 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_276 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_276);
		int32_t L_277 = ((int32_t)66);
		int32_t L_278 = (L_276)->GetAt(static_cast<il2cpp_array_size_t>(L_277));
		int32_t L_279 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_280 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_280);
		int32_t L_281 = ((int32_t)67);
		int32_t L_282 = (L_280)->GetAt(static_cast<il2cpp_array_size_t>(L_281));
		int32_t L_283 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB(__this, ((int32_t)(L_270^L_271)), ((int32_t)(L_274^L_275)), ((int32_t)(L_278^L_279)), ((int32_t)(L_282^L_283)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_284 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_284);
		int32_t L_285 = ((int32_t)68);
		int32_t L_286 = (L_284)->GetAt(static_cast<il2cpp_array_size_t>(L_285));
		int32_t L_287 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_288 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_288);
		int32_t L_289 = ((int32_t)69);
		int32_t L_290 = (L_288)->GetAt(static_cast<il2cpp_array_size_t>(L_289));
		int32_t L_291 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_292 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_292);
		int32_t L_293 = ((int32_t)70);
		int32_t L_294 = (L_292)->GetAt(static_cast<il2cpp_array_size_t>(L_293));
		int32_t L_295 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_296 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_296);
		int32_t L_297 = ((int32_t)71);
		int32_t L_298 = (L_296)->GetAt(static_cast<il2cpp_array_size_t>(L_297));
		int32_t L_299 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC(__this, ((int32_t)(L_286^L_287)), ((int32_t)(L_290^L_291)), ((int32_t)(L_294^L_295)), ((int32_t)(L_298^L_299)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_300 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_300);
		int32_t L_301 = ((int32_t)72);
		int32_t L_302 = (L_300)->GetAt(static_cast<il2cpp_array_size_t>(L_301));
		int32_t L_303 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_304 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_304);
		int32_t L_305 = ((int32_t)73);
		int32_t L_306 = (L_304)->GetAt(static_cast<il2cpp_array_size_t>(L_305));
		int32_t L_307 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_308 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_308);
		int32_t L_309 = ((int32_t)74);
		int32_t L_310 = (L_308)->GetAt(static_cast<il2cpp_array_size_t>(L_309));
		int32_t L_311 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_312 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_312);
		int32_t L_313 = ((int32_t)75);
		int32_t L_314 = (L_312)->GetAt(static_cast<il2cpp_array_size_t>(L_313));
		int32_t L_315 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03(__this, ((int32_t)(L_302^L_303)), ((int32_t)(L_306^L_307)), ((int32_t)(L_310^L_311)), ((int32_t)(L_314^L_315)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_316 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_316);
		int32_t L_317 = ((int32_t)76);
		int32_t L_318 = (L_316)->GetAt(static_cast<il2cpp_array_size_t>(L_317));
		int32_t L_319 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_320 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_320);
		int32_t L_321 = ((int32_t)77);
		int32_t L_322 = (L_320)->GetAt(static_cast<il2cpp_array_size_t>(L_321));
		int32_t L_323 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_324 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_324);
		int32_t L_325 = ((int32_t)78);
		int32_t L_326 = (L_324)->GetAt(static_cast<il2cpp_array_size_t>(L_325));
		int32_t L_327 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_328 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_328);
		int32_t L_329 = ((int32_t)79);
		int32_t L_330 = (L_328)->GetAt(static_cast<il2cpp_array_size_t>(L_329));
		int32_t L_331 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD(__this, ((int32_t)(L_318^L_319)), ((int32_t)(L_322^L_323)), ((int32_t)(L_326^L_327)), ((int32_t)(L_330^L_331)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_332 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_332);
		int32_t L_333 = ((int32_t)80);
		int32_t L_334 = (L_332)->GetAt(static_cast<il2cpp_array_size_t>(L_333));
		int32_t L_335 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_336 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_336);
		int32_t L_337 = ((int32_t)81);
		int32_t L_338 = (L_336)->GetAt(static_cast<il2cpp_array_size_t>(L_337));
		int32_t L_339 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_340 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_340);
		int32_t L_341 = ((int32_t)82);
		int32_t L_342 = (L_340)->GetAt(static_cast<il2cpp_array_size_t>(L_341));
		int32_t L_343 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_344 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_344);
		int32_t L_345 = ((int32_t)83);
		int32_t L_346 = (L_344)->GetAt(static_cast<il2cpp_array_size_t>(L_345));
		int32_t L_347 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5(__this, ((int32_t)(L_334^L_335)), ((int32_t)(L_338^L_339)), ((int32_t)(L_342^L_343)), ((int32_t)(L_346^L_347)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_348 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_348);
		int32_t L_349 = ((int32_t)84);
		int32_t L_350 = (L_348)->GetAt(static_cast<il2cpp_array_size_t>(L_349));
		int32_t L_351 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_352 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_352);
		int32_t L_353 = ((int32_t)85);
		int32_t L_354 = (L_352)->GetAt(static_cast<il2cpp_array_size_t>(L_353));
		int32_t L_355 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_356 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_356);
		int32_t L_357 = ((int32_t)86);
		int32_t L_358 = (L_356)->GetAt(static_cast<il2cpp_array_size_t>(L_357));
		int32_t L_359 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_360 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_360);
		int32_t L_361 = ((int32_t)87);
		int32_t L_362 = (L_360)->GetAt(static_cast<il2cpp_array_size_t>(L_361));
		int32_t L_363 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408(__this, ((int32_t)(L_350^L_351)), ((int32_t)(L_354^L_355)), ((int32_t)(L_358^L_359)), ((int32_t)(L_362^L_363)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_364 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_364);
		int32_t L_365 = ((int32_t)88);
		int32_t L_366 = (L_364)->GetAt(static_cast<il2cpp_array_size_t>(L_365));
		int32_t L_367 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_368 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_368);
		int32_t L_369 = ((int32_t)89);
		int32_t L_370 = (L_368)->GetAt(static_cast<il2cpp_array_size_t>(L_369));
		int32_t L_371 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_372 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_372);
		int32_t L_373 = ((int32_t)90);
		int32_t L_374 = (L_372)->GetAt(static_cast<il2cpp_array_size_t>(L_373));
		int32_t L_375 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_376 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_376);
		int32_t L_377 = ((int32_t)91);
		int32_t L_378 = (L_376)->GetAt(static_cast<il2cpp_array_size_t>(L_377));
		int32_t L_379 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B(__this, ((int32_t)(L_366^L_367)), ((int32_t)(L_370^L_371)), ((int32_t)(L_374^L_375)), ((int32_t)(L_378^L_379)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_380 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_380);
		int32_t L_381 = ((int32_t)92);
		int32_t L_382 = (L_380)->GetAt(static_cast<il2cpp_array_size_t>(L_381));
		int32_t L_383 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_384 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_384);
		int32_t L_385 = ((int32_t)93);
		int32_t L_386 = (L_384)->GetAt(static_cast<il2cpp_array_size_t>(L_385));
		int32_t L_387 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_388 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_388);
		int32_t L_389 = ((int32_t)94);
		int32_t L_390 = (L_388)->GetAt(static_cast<il2cpp_array_size_t>(L_389));
		int32_t L_391 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_392 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_392);
		int32_t L_393 = ((int32_t)95);
		int32_t L_394 = (L_392)->GetAt(static_cast<il2cpp_array_size_t>(L_393));
		int32_t L_395 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F(__this, ((int32_t)(L_382^L_383)), ((int32_t)(L_386^L_387)), ((int32_t)(L_390^L_391)), ((int32_t)(L_394^L_395)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_396 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_396);
		int32_t L_397 = ((int32_t)96);
		int32_t L_398 = (L_396)->GetAt(static_cast<il2cpp_array_size_t>(L_397));
		int32_t L_399 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_400 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_400);
		int32_t L_401 = ((int32_t)97);
		int32_t L_402 = (L_400)->GetAt(static_cast<il2cpp_array_size_t>(L_401));
		int32_t L_403 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_404 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_404);
		int32_t L_405 = ((int32_t)98);
		int32_t L_406 = (L_404)->GetAt(static_cast<il2cpp_array_size_t>(L_405));
		int32_t L_407 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_408 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_408);
		int32_t L_409 = ((int32_t)99);
		int32_t L_410 = (L_408)->GetAt(static_cast<il2cpp_array_size_t>(L_409));
		int32_t L_411 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb0_mD077AA16B6A14B9BBD75A6919FFC2F41F972BBCB(__this, ((int32_t)(L_398^L_399)), ((int32_t)(L_402^L_403)), ((int32_t)(L_406^L_407)), ((int32_t)(L_410^L_411)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_412 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_412);
		int32_t L_413 = ((int32_t)100);
		int32_t L_414 = (L_412)->GetAt(static_cast<il2cpp_array_size_t>(L_413));
		int32_t L_415 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_416 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_416);
		int32_t L_417 = ((int32_t)101);
		int32_t L_418 = (L_416)->GetAt(static_cast<il2cpp_array_size_t>(L_417));
		int32_t L_419 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_420 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_420);
		int32_t L_421 = ((int32_t)102);
		int32_t L_422 = (L_420)->GetAt(static_cast<il2cpp_array_size_t>(L_421));
		int32_t L_423 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_424 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_424);
		int32_t L_425 = ((int32_t)103);
		int32_t L_426 = (L_424)->GetAt(static_cast<il2cpp_array_size_t>(L_425));
		int32_t L_427 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb1_mE5D66C55CF4A7CE24D9DD4EAB73715CFC6ADC5BC(__this, ((int32_t)(L_414^L_415)), ((int32_t)(L_418^L_419)), ((int32_t)(L_422^L_423)), ((int32_t)(L_426^L_427)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_428 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_428);
		int32_t L_429 = ((int32_t)104);
		int32_t L_430 = (L_428)->GetAt(static_cast<il2cpp_array_size_t>(L_429));
		int32_t L_431 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_432 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_432);
		int32_t L_433 = ((int32_t)105);
		int32_t L_434 = (L_432)->GetAt(static_cast<il2cpp_array_size_t>(L_433));
		int32_t L_435 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_436 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_436);
		int32_t L_437 = ((int32_t)106);
		int32_t L_438 = (L_436)->GetAt(static_cast<il2cpp_array_size_t>(L_437));
		int32_t L_439 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_440 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_440);
		int32_t L_441 = ((int32_t)107);
		int32_t L_442 = (L_440)->GetAt(static_cast<il2cpp_array_size_t>(L_441));
		int32_t L_443 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb2_m558108E1676988EF96BCE37229E80C245FD14D03(__this, ((int32_t)(L_430^L_431)), ((int32_t)(L_434^L_435)), ((int32_t)(L_438^L_439)), ((int32_t)(L_442^L_443)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_444 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_444);
		int32_t L_445 = ((int32_t)108);
		int32_t L_446 = (L_444)->GetAt(static_cast<il2cpp_array_size_t>(L_445));
		int32_t L_447 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_448 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_448);
		int32_t L_449 = ((int32_t)109);
		int32_t L_450 = (L_448)->GetAt(static_cast<il2cpp_array_size_t>(L_449));
		int32_t L_451 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_452 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_452);
		int32_t L_453 = ((int32_t)110);
		int32_t L_454 = (L_452)->GetAt(static_cast<il2cpp_array_size_t>(L_453));
		int32_t L_455 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_456 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_456);
		int32_t L_457 = ((int32_t)111);
		int32_t L_458 = (L_456)->GetAt(static_cast<il2cpp_array_size_t>(L_457));
		int32_t L_459 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb3_m059BAA141F52D6A1EB7B9B61175B213AB3378EDD(__this, ((int32_t)(L_446^L_447)), ((int32_t)(L_450^L_451)), ((int32_t)(L_454^L_455)), ((int32_t)(L_458^L_459)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_460 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_460);
		int32_t L_461 = ((int32_t)112);
		int32_t L_462 = (L_460)->GetAt(static_cast<il2cpp_array_size_t>(L_461));
		int32_t L_463 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_464 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_464);
		int32_t L_465 = ((int32_t)113);
		int32_t L_466 = (L_464)->GetAt(static_cast<il2cpp_array_size_t>(L_465));
		int32_t L_467 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_468 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_468);
		int32_t L_469 = ((int32_t)114);
		int32_t L_470 = (L_468)->GetAt(static_cast<il2cpp_array_size_t>(L_469));
		int32_t L_471 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_472 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_472);
		int32_t L_473 = ((int32_t)115);
		int32_t L_474 = (L_472)->GetAt(static_cast<il2cpp_array_size_t>(L_473));
		int32_t L_475 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb4_m52875EC67E6A8C03AECDE9FE726C3B0BF7473EF5(__this, ((int32_t)(L_462^L_463)), ((int32_t)(L_466^L_467)), ((int32_t)(L_470^L_471)), ((int32_t)(L_474^L_475)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_476 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_476);
		int32_t L_477 = ((int32_t)116);
		int32_t L_478 = (L_476)->GetAt(static_cast<il2cpp_array_size_t>(L_477));
		int32_t L_479 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_480 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_480);
		int32_t L_481 = ((int32_t)117);
		int32_t L_482 = (L_480)->GetAt(static_cast<il2cpp_array_size_t>(L_481));
		int32_t L_483 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_484 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_484);
		int32_t L_485 = ((int32_t)118);
		int32_t L_486 = (L_484)->GetAt(static_cast<il2cpp_array_size_t>(L_485));
		int32_t L_487 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_488 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_488);
		int32_t L_489 = ((int32_t)119);
		int32_t L_490 = (L_488)->GetAt(static_cast<il2cpp_array_size_t>(L_489));
		int32_t L_491 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb5_m0EE2B7EC1F71E315388300D9791A1160610D9408(__this, ((int32_t)(L_478^L_479)), ((int32_t)(L_482^L_483)), ((int32_t)(L_486^L_487)), ((int32_t)(L_490^L_491)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_492 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_492);
		int32_t L_493 = ((int32_t)120);
		int32_t L_494 = (L_492)->GetAt(static_cast<il2cpp_array_size_t>(L_493));
		int32_t L_495 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_496 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_496);
		int32_t L_497 = ((int32_t)121);
		int32_t L_498 = (L_496)->GetAt(static_cast<il2cpp_array_size_t>(L_497));
		int32_t L_499 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_500 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_500);
		int32_t L_501 = ((int32_t)122);
		int32_t L_502 = (L_500)->GetAt(static_cast<il2cpp_array_size_t>(L_501));
		int32_t L_503 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_504 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_504);
		int32_t L_505 = ((int32_t)123);
		int32_t L_506 = (L_504)->GetAt(static_cast<il2cpp_array_size_t>(L_505));
		int32_t L_507 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb6_m8A4E7E646947F79FF283043C7F9CC5CF8B7E6A1B(__this, ((int32_t)(L_494^L_495)), ((int32_t)(L_498^L_499)), ((int32_t)(L_502^L_503)), ((int32_t)(L_506^L_507)), NULL);
		SerpentEngineBase_LT_m4D34F2F8507D6EF121E3B401F750AA8D847B7051(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_508 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_508);
		int32_t L_509 = ((int32_t)124);
		int32_t L_510 = (L_508)->GetAt(static_cast<il2cpp_array_size_t>(L_509));
		int32_t L_511 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_512 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_512);
		int32_t L_513 = ((int32_t)125);
		int32_t L_514 = (L_512)->GetAt(static_cast<il2cpp_array_size_t>(L_513));
		int32_t L_515 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_516 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_516);
		int32_t L_517 = ((int32_t)126);
		int32_t L_518 = (L_516)->GetAt(static_cast<il2cpp_array_size_t>(L_517));
		int32_t L_519 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_520 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_520);
		int32_t L_521 = ((int32_t)127);
		int32_t L_522 = (L_520)->GetAt(static_cast<il2cpp_array_size_t>(L_521));
		int32_t L_523 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Sb7_m57B22C5C909D1916B5BA173B784D912D710AB97F(__this, ((int32_t)(L_510^L_511)), ((int32_t)(L_514^L_515)), ((int32_t)(L_518^L_519)), ((int32_t)(L_522^L_523)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_524 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_524);
		int32_t L_525 = ((int32_t)131);
		int32_t L_526 = (L_524)->GetAt(static_cast<il2cpp_array_size_t>(L_525));
		int32_t L_527 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_528 = ___2_output;
		int32_t L_529 = ___3_outOff;
		Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB(((int32_t)(L_526^L_527)), L_528, L_529, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_530 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_530);
		int32_t L_531 = ((int32_t)130);
		int32_t L_532 = (L_530)->GetAt(static_cast<il2cpp_array_size_t>(L_531));
		int32_t L_533 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_534 = ___2_output;
		int32_t L_535 = ___3_outOff;
		Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB(((int32_t)(L_532^L_533)), L_534, ((int32_t)il2cpp_codegen_add(L_535, 4)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_536 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_536);
		int32_t L_537 = ((int32_t)129);
		int32_t L_538 = (L_536)->GetAt(static_cast<il2cpp_array_size_t>(L_537));
		int32_t L_539 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_540 = ___2_output;
		int32_t L_541 = ___3_outOff;
		Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB(((int32_t)(L_538^L_539)), L_540, ((int32_t)il2cpp_codegen_add(L_541, 8)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_542 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_542);
		int32_t L_543 = ((int32_t)128);
		int32_t L_544 = (L_542)->GetAt(static_cast<il2cpp_array_size_t>(L_543));
		int32_t L_545 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_546 = ___2_output;
		int32_t L_547 = ___3_outOff;
		Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB(((int32_t)(L_544^L_545)), L_546, ((int32_t)il2cpp_codegen_add(L_547, ((int32_t)12))), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TnepresEngine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TnepresEngine_DecryptBlock_m0C3C768C982F73D3642654D8404408F20A364433 (TnepresEngine_tB2063E257FDB18D464780C832450C7244D433DFC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_output, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_0);
		int32_t L_1 = ((int32_t)131);
		int32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_input;
		int32_t L_4 = ___1_inOff;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_m6FD7E3B8014FC134F0CE2EA18C7DCD8C9EF64B63(L_3, L_4, NULL);
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_2^(int32_t)L_5));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_6);
		int32_t L_7 = ((int32_t)130);
		int32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_input;
		int32_t L_10 = ___1_inOff;
		uint32_t L_11;
		L_11 = Pack_BE_To_UInt32_m6FD7E3B8014FC134F0CE2EA18C7DCD8C9EF64B63(L_9, ((int32_t)il2cpp_codegen_add(L_10, 4)), NULL);
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_8^(int32_t)L_11));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_12);
		int32_t L_13 = ((int32_t)129);
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_input;
		int32_t L_16 = ___1_inOff;
		uint32_t L_17;
		L_17 = Pack_BE_To_UInt32_m6FD7E3B8014FC134F0CE2EA18C7DCD8C9EF64B63(L_15, ((int32_t)il2cpp_codegen_add(L_16, 8)), NULL);
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_14^(int32_t)L_17));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_18);
		int32_t L_19 = ((int32_t)128);
		int32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_input;
		int32_t L_22 = ___1_inOff;
		uint32_t L_23;
		L_23 = Pack_BE_To_UInt32_m6FD7E3B8014FC134F0CE2EA18C7DCD8C9EF64B63(L_21, ((int32_t)il2cpp_codegen_add(L_22, ((int32_t)12))), NULL);
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_20^(int32_t)L_23));
		int32_t L_24 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_25 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_26 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_27 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib7_m6B2AB088F95B2EEF54B03E336C4383C2F2F7D7DE(__this, L_24, L_25, L_26, L_27, NULL);
		int32_t L_28 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_29);
		int32_t L_30 = ((int32_t)124);
		int32_t L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_28^L_31));
		int32_t L_32 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_33);
		int32_t L_34 = ((int32_t)125);
		int32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_32^L_35));
		int32_t L_36 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_37);
		int32_t L_38 = ((int32_t)126);
		int32_t L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_36^L_39));
		int32_t L_40 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_41);
		int32_t L_42 = ((int32_t)127);
		int32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_40^L_43));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_44 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_45 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_46 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_47 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib6_m6DCB2D99D27AFF9D5030B0246689B85D45ABC3CF(__this, L_44, L_45, L_46, L_47, NULL);
		int32_t L_48 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_49);
		int32_t L_50 = ((int32_t)120);
		int32_t L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_48^L_51));
		int32_t L_52 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_53);
		int32_t L_54 = ((int32_t)121);
		int32_t L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_52^L_55));
		int32_t L_56 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_57);
		int32_t L_58 = ((int32_t)122);
		int32_t L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_56^L_59));
		int32_t L_60 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_61);
		int32_t L_62 = ((int32_t)123);
		int32_t L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_60^L_63));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_64 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_65 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_66 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_67 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib5_mAA323198D76223543EA0094192073F4EF5FFA10B(__this, L_64, L_65, L_66, L_67, NULL);
		int32_t L_68 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_69);
		int32_t L_70 = ((int32_t)116);
		int32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_68^L_71));
		int32_t L_72 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_73);
		int32_t L_74 = ((int32_t)117);
		int32_t L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_72^L_75));
		int32_t L_76 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_77 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_77);
		int32_t L_78 = ((int32_t)118);
		int32_t L_79 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_76^L_79));
		int32_t L_80 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_81);
		int32_t L_82 = ((int32_t)119);
		int32_t L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_80^L_83));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_84 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_85 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_86 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_87 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib4_mFE882C69812FD0C52080011F618B5582712A9BD4(__this, L_84, L_85, L_86, L_87, NULL);
		int32_t L_88 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_89);
		int32_t L_90 = ((int32_t)112);
		int32_t L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_88^L_91));
		int32_t L_92 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_93 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_93);
		int32_t L_94 = ((int32_t)113);
		int32_t L_95 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_92^L_95));
		int32_t L_96 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_97);
		int32_t L_98 = ((int32_t)114);
		int32_t L_99 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_96^L_99));
		int32_t L_100 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_101);
		int32_t L_102 = ((int32_t)115);
		int32_t L_103 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_100^L_103));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_104 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_105 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_106 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_107 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib3_m6A77BC5E68598F99FF5658ADEBB942A84B0760A4(__this, L_104, L_105, L_106, L_107, NULL);
		int32_t L_108 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_109);
		int32_t L_110 = ((int32_t)108);
		int32_t L_111 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_108^L_111));
		int32_t L_112 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_113 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_113);
		int32_t L_114 = ((int32_t)109);
		int32_t L_115 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_112^L_115));
		int32_t L_116 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_117 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_117);
		int32_t L_118 = ((int32_t)110);
		int32_t L_119 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_116^L_119));
		int32_t L_120 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_121 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_121);
		int32_t L_122 = ((int32_t)111);
		int32_t L_123 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_120^L_123));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_124 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_125 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_126 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_127 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib2_m2E0C9313D9B611D876F4465FD619529188EAE427(__this, L_124, L_125, L_126, L_127, NULL);
		int32_t L_128 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_129 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_129);
		int32_t L_130 = ((int32_t)104);
		int32_t L_131 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_128^L_131));
		int32_t L_132 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_133 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_133);
		int32_t L_134 = ((int32_t)105);
		int32_t L_135 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_132^L_135));
		int32_t L_136 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_137 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_137);
		int32_t L_138 = ((int32_t)106);
		int32_t L_139 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_136^L_139));
		int32_t L_140 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_141 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_141);
		int32_t L_142 = ((int32_t)107);
		int32_t L_143 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_140^L_143));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_144 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_145 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_146 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_147 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib1_mDC3913F6B595A528CCBFD76EB5892F2570A8C32F(__this, L_144, L_145, L_146, L_147, NULL);
		int32_t L_148 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_149 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_149);
		int32_t L_150 = ((int32_t)100);
		int32_t L_151 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_148^L_151));
		int32_t L_152 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_153 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_153);
		int32_t L_154 = ((int32_t)101);
		int32_t L_155 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_154));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_152^L_155));
		int32_t L_156 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_157 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_157);
		int32_t L_158 = ((int32_t)102);
		int32_t L_159 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_156^L_159));
		int32_t L_160 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_161 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_161);
		int32_t L_162 = ((int32_t)103);
		int32_t L_163 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_160^L_163));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_164 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_165 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_166 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_167 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib0_m8791AD1CC7476D8717B7D9CFE3C3FDAD0D2DDFBB(__this, L_164, L_165, L_166, L_167, NULL);
		int32_t L_168 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_169 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_169);
		int32_t L_170 = ((int32_t)96);
		int32_t L_171 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_168^L_171));
		int32_t L_172 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_173 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_173);
		int32_t L_174 = ((int32_t)97);
		int32_t L_175 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_172^L_175));
		int32_t L_176 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_177 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_177);
		int32_t L_178 = ((int32_t)98);
		int32_t L_179 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_176^L_179));
		int32_t L_180 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_181 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_181);
		int32_t L_182 = ((int32_t)99);
		int32_t L_183 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_180^L_183));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_184 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_185 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_186 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_187 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib7_m6B2AB088F95B2EEF54B03E336C4383C2F2F7D7DE(__this, L_184, L_185, L_186, L_187, NULL);
		int32_t L_188 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_189 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_189);
		int32_t L_190 = ((int32_t)92);
		int32_t L_191 = (L_189)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_188^L_191));
		int32_t L_192 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_193 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_193);
		int32_t L_194 = ((int32_t)93);
		int32_t L_195 = (L_193)->GetAt(static_cast<il2cpp_array_size_t>(L_194));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_192^L_195));
		int32_t L_196 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_197 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_197);
		int32_t L_198 = ((int32_t)94);
		int32_t L_199 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_198));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_196^L_199));
		int32_t L_200 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_201 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_201);
		int32_t L_202 = ((int32_t)95);
		int32_t L_203 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_202));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_200^L_203));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_204 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_205 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_206 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_207 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib6_m6DCB2D99D27AFF9D5030B0246689B85D45ABC3CF(__this, L_204, L_205, L_206, L_207, NULL);
		int32_t L_208 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_209 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_209);
		int32_t L_210 = ((int32_t)88);
		int32_t L_211 = (L_209)->GetAt(static_cast<il2cpp_array_size_t>(L_210));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_208^L_211));
		int32_t L_212 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_213 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_213);
		int32_t L_214 = ((int32_t)89);
		int32_t L_215 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_214));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_212^L_215));
		int32_t L_216 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_217 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_217);
		int32_t L_218 = ((int32_t)90);
		int32_t L_219 = (L_217)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_216^L_219));
		int32_t L_220 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_221 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_221);
		int32_t L_222 = ((int32_t)91);
		int32_t L_223 = (L_221)->GetAt(static_cast<il2cpp_array_size_t>(L_222));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_220^L_223));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_224 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_225 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_226 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_227 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib5_mAA323198D76223543EA0094192073F4EF5FFA10B(__this, L_224, L_225, L_226, L_227, NULL);
		int32_t L_228 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_229 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_229);
		int32_t L_230 = ((int32_t)84);
		int32_t L_231 = (L_229)->GetAt(static_cast<il2cpp_array_size_t>(L_230));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_228^L_231));
		int32_t L_232 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_233 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_233);
		int32_t L_234 = ((int32_t)85);
		int32_t L_235 = (L_233)->GetAt(static_cast<il2cpp_array_size_t>(L_234));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_232^L_235));
		int32_t L_236 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_237 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_237);
		int32_t L_238 = ((int32_t)86);
		int32_t L_239 = (L_237)->GetAt(static_cast<il2cpp_array_size_t>(L_238));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_236^L_239));
		int32_t L_240 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_241 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_241);
		int32_t L_242 = ((int32_t)87);
		int32_t L_243 = (L_241)->GetAt(static_cast<il2cpp_array_size_t>(L_242));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_240^L_243));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_244 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_245 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_246 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_247 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib4_mFE882C69812FD0C52080011F618B5582712A9BD4(__this, L_244, L_245, L_246, L_247, NULL);
		int32_t L_248 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_249 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_249);
		int32_t L_250 = ((int32_t)80);
		int32_t L_251 = (L_249)->GetAt(static_cast<il2cpp_array_size_t>(L_250));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_248^L_251));
		int32_t L_252 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_253 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_253);
		int32_t L_254 = ((int32_t)81);
		int32_t L_255 = (L_253)->GetAt(static_cast<il2cpp_array_size_t>(L_254));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_252^L_255));
		int32_t L_256 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_257 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_257);
		int32_t L_258 = ((int32_t)82);
		int32_t L_259 = (L_257)->GetAt(static_cast<il2cpp_array_size_t>(L_258));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_256^L_259));
		int32_t L_260 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_261 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_261);
		int32_t L_262 = ((int32_t)83);
		int32_t L_263 = (L_261)->GetAt(static_cast<il2cpp_array_size_t>(L_262));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_260^L_263));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_264 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_265 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_266 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_267 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib3_m6A77BC5E68598F99FF5658ADEBB942A84B0760A4(__this, L_264, L_265, L_266, L_267, NULL);
		int32_t L_268 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_269 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_269);
		int32_t L_270 = ((int32_t)76);
		int32_t L_271 = (L_269)->GetAt(static_cast<il2cpp_array_size_t>(L_270));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_268^L_271));
		int32_t L_272 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_273 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_273);
		int32_t L_274 = ((int32_t)77);
		int32_t L_275 = (L_273)->GetAt(static_cast<il2cpp_array_size_t>(L_274));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_272^L_275));
		int32_t L_276 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_277 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_277);
		int32_t L_278 = ((int32_t)78);
		int32_t L_279 = (L_277)->GetAt(static_cast<il2cpp_array_size_t>(L_278));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_276^L_279));
		int32_t L_280 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_281 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_281);
		int32_t L_282 = ((int32_t)79);
		int32_t L_283 = (L_281)->GetAt(static_cast<il2cpp_array_size_t>(L_282));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_280^L_283));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_284 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_285 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_286 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_287 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib2_m2E0C9313D9B611D876F4465FD619529188EAE427(__this, L_284, L_285, L_286, L_287, NULL);
		int32_t L_288 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_289 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_289);
		int32_t L_290 = ((int32_t)72);
		int32_t L_291 = (L_289)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_288^L_291));
		int32_t L_292 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_293 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_293);
		int32_t L_294 = ((int32_t)73);
		int32_t L_295 = (L_293)->GetAt(static_cast<il2cpp_array_size_t>(L_294));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_292^L_295));
		int32_t L_296 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_297 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_297);
		int32_t L_298 = ((int32_t)74);
		int32_t L_299 = (L_297)->GetAt(static_cast<il2cpp_array_size_t>(L_298));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_296^L_299));
		int32_t L_300 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_301 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_301);
		int32_t L_302 = ((int32_t)75);
		int32_t L_303 = (L_301)->GetAt(static_cast<il2cpp_array_size_t>(L_302));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_300^L_303));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_304 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_305 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_306 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_307 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib1_mDC3913F6B595A528CCBFD76EB5892F2570A8C32F(__this, L_304, L_305, L_306, L_307, NULL);
		int32_t L_308 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_309 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_309);
		int32_t L_310 = ((int32_t)68);
		int32_t L_311 = (L_309)->GetAt(static_cast<il2cpp_array_size_t>(L_310));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_308^L_311));
		int32_t L_312 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_313 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_313);
		int32_t L_314 = ((int32_t)69);
		int32_t L_315 = (L_313)->GetAt(static_cast<il2cpp_array_size_t>(L_314));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_312^L_315));
		int32_t L_316 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_317 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_317);
		int32_t L_318 = ((int32_t)70);
		int32_t L_319 = (L_317)->GetAt(static_cast<il2cpp_array_size_t>(L_318));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_316^L_319));
		int32_t L_320 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_321 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_321);
		int32_t L_322 = ((int32_t)71);
		int32_t L_323 = (L_321)->GetAt(static_cast<il2cpp_array_size_t>(L_322));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_320^L_323));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_324 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_325 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_326 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_327 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib0_m8791AD1CC7476D8717B7D9CFE3C3FDAD0D2DDFBB(__this, L_324, L_325, L_326, L_327, NULL);
		int32_t L_328 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_329 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_329);
		int32_t L_330 = ((int32_t)64);
		int32_t L_331 = (L_329)->GetAt(static_cast<il2cpp_array_size_t>(L_330));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_328^L_331));
		int32_t L_332 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_333 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_333);
		int32_t L_334 = ((int32_t)65);
		int32_t L_335 = (L_333)->GetAt(static_cast<il2cpp_array_size_t>(L_334));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_332^L_335));
		int32_t L_336 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_337 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_337);
		int32_t L_338 = ((int32_t)66);
		int32_t L_339 = (L_337)->GetAt(static_cast<il2cpp_array_size_t>(L_338));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_336^L_339));
		int32_t L_340 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_341 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_341);
		int32_t L_342 = ((int32_t)67);
		int32_t L_343 = (L_341)->GetAt(static_cast<il2cpp_array_size_t>(L_342));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_340^L_343));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_344 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_345 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_346 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_347 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib7_m6B2AB088F95B2EEF54B03E336C4383C2F2F7D7DE(__this, L_344, L_345, L_346, L_347, NULL);
		int32_t L_348 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_349 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_349);
		int32_t L_350 = ((int32_t)60);
		int32_t L_351 = (L_349)->GetAt(static_cast<il2cpp_array_size_t>(L_350));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_348^L_351));
		int32_t L_352 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_353 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_353);
		int32_t L_354 = ((int32_t)61);
		int32_t L_355 = (L_353)->GetAt(static_cast<il2cpp_array_size_t>(L_354));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_352^L_355));
		int32_t L_356 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_357 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_357);
		int32_t L_358 = ((int32_t)62);
		int32_t L_359 = (L_357)->GetAt(static_cast<il2cpp_array_size_t>(L_358));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_356^L_359));
		int32_t L_360 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_361 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_361);
		int32_t L_362 = ((int32_t)63);
		int32_t L_363 = (L_361)->GetAt(static_cast<il2cpp_array_size_t>(L_362));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_360^L_363));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_364 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_365 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_366 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_367 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib6_m6DCB2D99D27AFF9D5030B0246689B85D45ABC3CF(__this, L_364, L_365, L_366, L_367, NULL);
		int32_t L_368 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_369 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_369);
		int32_t L_370 = ((int32_t)56);
		int32_t L_371 = (L_369)->GetAt(static_cast<il2cpp_array_size_t>(L_370));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_368^L_371));
		int32_t L_372 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_373 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_373);
		int32_t L_374 = ((int32_t)57);
		int32_t L_375 = (L_373)->GetAt(static_cast<il2cpp_array_size_t>(L_374));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_372^L_375));
		int32_t L_376 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_377 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_377);
		int32_t L_378 = ((int32_t)58);
		int32_t L_379 = (L_377)->GetAt(static_cast<il2cpp_array_size_t>(L_378));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_376^L_379));
		int32_t L_380 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_381 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_381);
		int32_t L_382 = ((int32_t)59);
		int32_t L_383 = (L_381)->GetAt(static_cast<il2cpp_array_size_t>(L_382));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_380^L_383));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_384 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_385 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_386 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_387 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib5_mAA323198D76223543EA0094192073F4EF5FFA10B(__this, L_384, L_385, L_386, L_387, NULL);
		int32_t L_388 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_389 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_389);
		int32_t L_390 = ((int32_t)52);
		int32_t L_391 = (L_389)->GetAt(static_cast<il2cpp_array_size_t>(L_390));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_388^L_391));
		int32_t L_392 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_393 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_393);
		int32_t L_394 = ((int32_t)53);
		int32_t L_395 = (L_393)->GetAt(static_cast<il2cpp_array_size_t>(L_394));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_392^L_395));
		int32_t L_396 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_397 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_397);
		int32_t L_398 = ((int32_t)54);
		int32_t L_399 = (L_397)->GetAt(static_cast<il2cpp_array_size_t>(L_398));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_396^L_399));
		int32_t L_400 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_401 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_401);
		int32_t L_402 = ((int32_t)55);
		int32_t L_403 = (L_401)->GetAt(static_cast<il2cpp_array_size_t>(L_402));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_400^L_403));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_404 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_405 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_406 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_407 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib4_mFE882C69812FD0C52080011F618B5582712A9BD4(__this, L_404, L_405, L_406, L_407, NULL);
		int32_t L_408 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_409 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_409);
		int32_t L_410 = ((int32_t)48);
		int32_t L_411 = (L_409)->GetAt(static_cast<il2cpp_array_size_t>(L_410));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_408^L_411));
		int32_t L_412 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_413 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_413);
		int32_t L_414 = ((int32_t)49);
		int32_t L_415 = (L_413)->GetAt(static_cast<il2cpp_array_size_t>(L_414));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_412^L_415));
		int32_t L_416 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_417 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_417);
		int32_t L_418 = ((int32_t)50);
		int32_t L_419 = (L_417)->GetAt(static_cast<il2cpp_array_size_t>(L_418));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_416^L_419));
		int32_t L_420 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_421 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_421);
		int32_t L_422 = ((int32_t)51);
		int32_t L_423 = (L_421)->GetAt(static_cast<il2cpp_array_size_t>(L_422));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_420^L_423));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_424 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_425 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_426 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_427 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib3_m6A77BC5E68598F99FF5658ADEBB942A84B0760A4(__this, L_424, L_425, L_426, L_427, NULL);
		int32_t L_428 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_429 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_429);
		int32_t L_430 = ((int32_t)44);
		int32_t L_431 = (L_429)->GetAt(static_cast<il2cpp_array_size_t>(L_430));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_428^L_431));
		int32_t L_432 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_433 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_433);
		int32_t L_434 = ((int32_t)45);
		int32_t L_435 = (L_433)->GetAt(static_cast<il2cpp_array_size_t>(L_434));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_432^L_435));
		int32_t L_436 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_437 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_437);
		int32_t L_438 = ((int32_t)46);
		int32_t L_439 = (L_437)->GetAt(static_cast<il2cpp_array_size_t>(L_438));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_436^L_439));
		int32_t L_440 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_441 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_441);
		int32_t L_442 = ((int32_t)47);
		int32_t L_443 = (L_441)->GetAt(static_cast<il2cpp_array_size_t>(L_442));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_440^L_443));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_444 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_445 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_446 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_447 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib2_m2E0C9313D9B611D876F4465FD619529188EAE427(__this, L_444, L_445, L_446, L_447, NULL);
		int32_t L_448 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_449 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_449);
		int32_t L_450 = ((int32_t)40);
		int32_t L_451 = (L_449)->GetAt(static_cast<il2cpp_array_size_t>(L_450));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_448^L_451));
		int32_t L_452 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_453 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_453);
		int32_t L_454 = ((int32_t)41);
		int32_t L_455 = (L_453)->GetAt(static_cast<il2cpp_array_size_t>(L_454));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_452^L_455));
		int32_t L_456 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_457 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_457);
		int32_t L_458 = ((int32_t)42);
		int32_t L_459 = (L_457)->GetAt(static_cast<il2cpp_array_size_t>(L_458));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_456^L_459));
		int32_t L_460 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_461 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_461);
		int32_t L_462 = ((int32_t)43);
		int32_t L_463 = (L_461)->GetAt(static_cast<il2cpp_array_size_t>(L_462));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_460^L_463));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_464 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_465 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_466 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_467 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib1_mDC3913F6B595A528CCBFD76EB5892F2570A8C32F(__this, L_464, L_465, L_466, L_467, NULL);
		int32_t L_468 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_469 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_469);
		int32_t L_470 = ((int32_t)36);
		int32_t L_471 = (L_469)->GetAt(static_cast<il2cpp_array_size_t>(L_470));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_468^L_471));
		int32_t L_472 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_473 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_473);
		int32_t L_474 = ((int32_t)37);
		int32_t L_475 = (L_473)->GetAt(static_cast<il2cpp_array_size_t>(L_474));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_472^L_475));
		int32_t L_476 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_477 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_477);
		int32_t L_478 = ((int32_t)38);
		int32_t L_479 = (L_477)->GetAt(static_cast<il2cpp_array_size_t>(L_478));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_476^L_479));
		int32_t L_480 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_481 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_481);
		int32_t L_482 = ((int32_t)39);
		int32_t L_483 = (L_481)->GetAt(static_cast<il2cpp_array_size_t>(L_482));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_480^L_483));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_484 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_485 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_486 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_487 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib0_m8791AD1CC7476D8717B7D9CFE3C3FDAD0D2DDFBB(__this, L_484, L_485, L_486, L_487, NULL);
		int32_t L_488 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_489 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_489);
		int32_t L_490 = ((int32_t)32);
		int32_t L_491 = (L_489)->GetAt(static_cast<il2cpp_array_size_t>(L_490));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_488^L_491));
		int32_t L_492 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_493 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_493);
		int32_t L_494 = ((int32_t)33);
		int32_t L_495 = (L_493)->GetAt(static_cast<il2cpp_array_size_t>(L_494));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_492^L_495));
		int32_t L_496 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_497 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_497);
		int32_t L_498 = ((int32_t)34);
		int32_t L_499 = (L_497)->GetAt(static_cast<il2cpp_array_size_t>(L_498));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_496^L_499));
		int32_t L_500 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_501 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_501);
		int32_t L_502 = ((int32_t)35);
		int32_t L_503 = (L_501)->GetAt(static_cast<il2cpp_array_size_t>(L_502));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_500^L_503));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_504 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_505 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_506 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_507 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib7_m6B2AB088F95B2EEF54B03E336C4383C2F2F7D7DE(__this, L_504, L_505, L_506, L_507, NULL);
		int32_t L_508 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_509 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_509);
		int32_t L_510 = ((int32_t)28);
		int32_t L_511 = (L_509)->GetAt(static_cast<il2cpp_array_size_t>(L_510));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_508^L_511));
		int32_t L_512 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_513 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_513);
		int32_t L_514 = ((int32_t)29);
		int32_t L_515 = (L_513)->GetAt(static_cast<il2cpp_array_size_t>(L_514));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_512^L_515));
		int32_t L_516 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_517 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_517);
		int32_t L_518 = ((int32_t)30);
		int32_t L_519 = (L_517)->GetAt(static_cast<il2cpp_array_size_t>(L_518));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_516^L_519));
		int32_t L_520 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_521 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_521);
		int32_t L_522 = ((int32_t)31);
		int32_t L_523 = (L_521)->GetAt(static_cast<il2cpp_array_size_t>(L_522));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_520^L_523));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_524 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_525 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_526 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_527 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib6_m6DCB2D99D27AFF9D5030B0246689B85D45ABC3CF(__this, L_524, L_525, L_526, L_527, NULL);
		int32_t L_528 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_529 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_529);
		int32_t L_530 = ((int32_t)24);
		int32_t L_531 = (L_529)->GetAt(static_cast<il2cpp_array_size_t>(L_530));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_528^L_531));
		int32_t L_532 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_533 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_533);
		int32_t L_534 = ((int32_t)25);
		int32_t L_535 = (L_533)->GetAt(static_cast<il2cpp_array_size_t>(L_534));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_532^L_535));
		int32_t L_536 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_537 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_537);
		int32_t L_538 = ((int32_t)26);
		int32_t L_539 = (L_537)->GetAt(static_cast<il2cpp_array_size_t>(L_538));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_536^L_539));
		int32_t L_540 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_541 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_541);
		int32_t L_542 = ((int32_t)27);
		int32_t L_543 = (L_541)->GetAt(static_cast<il2cpp_array_size_t>(L_542));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_540^L_543));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_544 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_545 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_546 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_547 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib5_mAA323198D76223543EA0094192073F4EF5FFA10B(__this, L_544, L_545, L_546, L_547, NULL);
		int32_t L_548 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_549 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_549);
		int32_t L_550 = ((int32_t)20);
		int32_t L_551 = (L_549)->GetAt(static_cast<il2cpp_array_size_t>(L_550));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_548^L_551));
		int32_t L_552 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_553 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_553);
		int32_t L_554 = ((int32_t)21);
		int32_t L_555 = (L_553)->GetAt(static_cast<il2cpp_array_size_t>(L_554));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_552^L_555));
		int32_t L_556 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_557 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_557);
		int32_t L_558 = ((int32_t)22);
		int32_t L_559 = (L_557)->GetAt(static_cast<il2cpp_array_size_t>(L_558));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_556^L_559));
		int32_t L_560 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_561 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_561);
		int32_t L_562 = ((int32_t)23);
		int32_t L_563 = (L_561)->GetAt(static_cast<il2cpp_array_size_t>(L_562));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_560^L_563));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_564 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_565 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_566 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_567 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib4_mFE882C69812FD0C52080011F618B5582712A9BD4(__this, L_564, L_565, L_566, L_567, NULL);
		int32_t L_568 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_569 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_569);
		int32_t L_570 = ((int32_t)16);
		int32_t L_571 = (L_569)->GetAt(static_cast<il2cpp_array_size_t>(L_570));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_568^L_571));
		int32_t L_572 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_573 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_573);
		int32_t L_574 = ((int32_t)17);
		int32_t L_575 = (L_573)->GetAt(static_cast<il2cpp_array_size_t>(L_574));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_572^L_575));
		int32_t L_576 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_577 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_577);
		int32_t L_578 = ((int32_t)18);
		int32_t L_579 = (L_577)->GetAt(static_cast<il2cpp_array_size_t>(L_578));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_576^L_579));
		int32_t L_580 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_581 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_581);
		int32_t L_582 = ((int32_t)19);
		int32_t L_583 = (L_581)->GetAt(static_cast<il2cpp_array_size_t>(L_582));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_580^L_583));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_584 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_585 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_586 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_587 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib3_m6A77BC5E68598F99FF5658ADEBB942A84B0760A4(__this, L_584, L_585, L_586, L_587, NULL);
		int32_t L_588 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_589 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_589);
		int32_t L_590 = ((int32_t)12);
		int32_t L_591 = (L_589)->GetAt(static_cast<il2cpp_array_size_t>(L_590));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_588^L_591));
		int32_t L_592 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_593 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_593);
		int32_t L_594 = ((int32_t)13);
		int32_t L_595 = (L_593)->GetAt(static_cast<il2cpp_array_size_t>(L_594));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_592^L_595));
		int32_t L_596 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_597 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_597);
		int32_t L_598 = ((int32_t)14);
		int32_t L_599 = (L_597)->GetAt(static_cast<il2cpp_array_size_t>(L_598));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_596^L_599));
		int32_t L_600 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_601 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_601);
		int32_t L_602 = ((int32_t)15);
		int32_t L_603 = (L_601)->GetAt(static_cast<il2cpp_array_size_t>(L_602));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_600^L_603));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_604 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_605 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_606 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_607 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib2_m2E0C9313D9B611D876F4465FD619529188EAE427(__this, L_604, L_605, L_606, L_607, NULL);
		int32_t L_608 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_609 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_609);
		int32_t L_610 = 8;
		int32_t L_611 = (L_609)->GetAt(static_cast<il2cpp_array_size_t>(L_610));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_608^L_611));
		int32_t L_612 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_613 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_613);
		int32_t L_614 = ((int32_t)9);
		int32_t L_615 = (L_613)->GetAt(static_cast<il2cpp_array_size_t>(L_614));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_612^L_615));
		int32_t L_616 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_617 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_617);
		int32_t L_618 = ((int32_t)10);
		int32_t L_619 = (L_617)->GetAt(static_cast<il2cpp_array_size_t>(L_618));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_616^L_619));
		int32_t L_620 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_621 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_621);
		int32_t L_622 = ((int32_t)11);
		int32_t L_623 = (L_621)->GetAt(static_cast<il2cpp_array_size_t>(L_622));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_620^L_623));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_624 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_625 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_626 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_627 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib1_mDC3913F6B595A528CCBFD76EB5892F2570A8C32F(__this, L_624, L_625, L_626, L_627, NULL);
		int32_t L_628 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_629 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_629);
		int32_t L_630 = 4;
		int32_t L_631 = (L_629)->GetAt(static_cast<il2cpp_array_size_t>(L_630));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5 = ((int32_t)(L_628^L_631));
		int32_t L_632 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_633 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_633);
		int32_t L_634 = 5;
		int32_t L_635 = (L_633)->GetAt(static_cast<il2cpp_array_size_t>(L_634));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6 = ((int32_t)(L_632^L_635));
		int32_t L_636 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_637 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_637);
		int32_t L_638 = 6;
		int32_t L_639 = (L_637)->GetAt(static_cast<il2cpp_array_size_t>(L_638));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7 = ((int32_t)(L_636^L_639));
		int32_t L_640 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_641 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_641);
		int32_t L_642 = 7;
		int32_t L_643 = (L_641)->GetAt(static_cast<il2cpp_array_size_t>(L_642));
		((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8 = ((int32_t)(L_640^L_643));
		SerpentEngineBase_InverseLT_m8261DFBD928100510633B9BC1989D35DCB5FADAB(__this, NULL);
		int32_t L_644 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		int32_t L_645 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		int32_t L_646 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		int32_t L_647 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		SerpentEngineBase_Ib0_m8791AD1CC7476D8717B7D9CFE3C3FDAD0D2DDFBB(__this, L_644, L_645, L_646, L_647, NULL);
		int32_t L_648 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X3_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_649 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_649);
		int32_t L_650 = 3;
		int32_t L_651 = (L_649)->GetAt(static_cast<il2cpp_array_size_t>(L_650));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_652 = ___2_output;
		int32_t L_653 = ___3_outOff;
		Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB(((int32_t)(L_648^L_651)), L_652, L_653, NULL);
		int32_t L_654 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X2_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_655 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_655);
		int32_t L_656 = 2;
		int32_t L_657 = (L_655)->GetAt(static_cast<il2cpp_array_size_t>(L_656));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_658 = ___2_output;
		int32_t L_659 = ___3_outOff;
		Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB(((int32_t)(L_654^L_657)), L_658, ((int32_t)il2cpp_codegen_add(L_659, 4)), NULL);
		int32_t L_660 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X1_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_661 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_661);
		int32_t L_662 = 1;
		int32_t L_663 = (L_661)->GetAt(static_cast<il2cpp_array_size_t>(L_662));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_664 = ___2_output;
		int32_t L_665 = ___3_outOff;
		Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB(((int32_t)(L_660^L_663)), L_664, ((int32_t)il2cpp_codegen_add(L_665, 8)), NULL);
		int32_t L_666 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___X0_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_667 = ((SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0*)__this)->___wKey_4;
		NullCheck(L_667);
		int32_t L_668 = 0;
		int32_t L_669 = (L_667)->GetAt(static_cast<il2cpp_array_size_t>(L_668));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_670 = ___2_output;
		int32_t L_671 = ___3_outOff;
		Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB(((int32_t)(L_666^L_669)), L_670, ((int32_t)il2cpp_codegen_add(L_671, ((int32_t)12))), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TnepresEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TnepresEngine__ctor_m81669BFD1A3FB1F9CFAE56A255EB9C7935E44D6F (TnepresEngine_tB2063E257FDB18D464780C832450C7244D433DFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(SerpentEngineBase_tA5BBDB02FBA929CFE399670EBC0812BB07B6D5E0_il2cpp_TypeInfo_var);
		SerpentEngineBase__ctor_mFF5148CD3B1F13851825B130B3DE227A3E658C3B(__this, NULL);
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
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine__ctor_mC8BBF45788DE1690B4A0872DFB2E3B14F4B73170 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___gMDS0_37 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gMDS0_37), (void*)L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___gMDS1_38 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gMDS1_38), (void*)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___gMDS2_39 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gMDS2_39), (void*)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___gMDS3_40 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gMDS3_40), (void*)L_3);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		V_1 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		V_2 = L_6;
		V_4 = 0;
		goto IL_0159;
	}

IL_0063:
	{
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_7 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		uint8_t L_9;
		L_9 = (L_7)->GetAt(0, L_8);
		V_3 = ((int32_t)((int32_t)L_9&((int32_t)255)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_0;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_1;
		int32_t L_13 = V_3;
		int32_t L_14;
		L_14 = TwofishEngine_Mx_X_m276A1D7929299F6AC4BD0DBED757AAF90640EE1C(__this, L_13, NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)(L_14&((int32_t)255))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_2;
		int32_t L_16 = V_3;
		int32_t L_17;
		L_17 = TwofishEngine_Mx_Y_m106DF2D7847CEDE451E9DE9E0CCC39BBD4F81539(__this, L_16, NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)(L_17&((int32_t)255))));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_18 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		uint8_t L_20;
		L_20 = (L_18)->GetAt(1, L_19);
		V_3 = ((int32_t)((int32_t)L_20&((int32_t)255)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_0;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_22);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_1;
		int32_t L_24 = V_3;
		int32_t L_25;
		L_25 = TwofishEngine_Mx_X_m276A1D7929299F6AC4BD0DBED757AAF90640EE1C(__this, L_24, NULL);
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)(L_25&((int32_t)255))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_2;
		int32_t L_27 = V_3;
		int32_t L_28;
		L_28 = TwofishEngine_Mx_Y_m106DF2D7847CEDE451E9DE9E0CCC39BBD4F81539(__this, L_27, NULL);
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)(L_28&((int32_t)255))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->___gMDS0_37;
		int32_t L_30 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = 1;
		int32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		NullCheck(L_34);
		int32_t L_35 = 1;
		int32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_2;
		NullCheck(L_37);
		int32_t L_38 = 1;
		int32_t L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_2;
		NullCheck(L_40);
		int32_t L_41 = 1;
		int32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (int32_t)((int32_t)(((int32_t)(((int32_t)(L_33|((int32_t)(L_36<<8))))|((int32_t)(L_39<<((int32_t)16)))))|((int32_t)(L_42<<((int32_t)24))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = __this->___gMDS1_38;
		int32_t L_44 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_2;
		NullCheck(L_45);
		int32_t L_46 = 0;
		int32_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_2;
		NullCheck(L_48);
		int32_t L_49 = 0;
		int32_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = V_1;
		NullCheck(L_51);
		int32_t L_52 = 0;
		int32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = V_0;
		NullCheck(L_54);
		int32_t L_55 = 0;
		int32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (int32_t)((int32_t)(((int32_t)(((int32_t)(L_47|((int32_t)(L_50<<8))))|((int32_t)(L_53<<((int32_t)16)))))|((int32_t)(L_56<<((int32_t)24))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = __this->___gMDS2_39;
		int32_t L_58 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = V_1;
		NullCheck(L_59);
		int32_t L_60 = 1;
		int32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = V_2;
		NullCheck(L_62);
		int32_t L_63 = 1;
		int32_t L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = V_0;
		NullCheck(L_65);
		int32_t L_66 = 1;
		int32_t L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = V_2;
		NullCheck(L_68);
		int32_t L_69 = 1;
		int32_t L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (int32_t)((int32_t)(((int32_t)(((int32_t)(L_61|((int32_t)(L_64<<8))))|((int32_t)(L_67<<((int32_t)16)))))|((int32_t)(L_70<<((int32_t)24))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_71 = __this->___gMDS3_40;
		int32_t L_72 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = V_1;
		NullCheck(L_73);
		int32_t L_74 = 0;
		int32_t L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = V_0;
		NullCheck(L_76);
		int32_t L_77 = 0;
		int32_t L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = V_2;
		NullCheck(L_79);
		int32_t L_80 = 0;
		int32_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = V_1;
		NullCheck(L_82);
		int32_t L_83 = 0;
		int32_t L_84 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (int32_t)((int32_t)(((int32_t)(((int32_t)(L_75|((int32_t)(L_78<<8))))|((int32_t)(L_81<<((int32_t)16)))))|((int32_t)(L_84<<((int32_t)24))))));
		int32_t L_85 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_85, 1));
	}

IL_0159:
	{
		int32_t L_86 = V_4;
		if ((((int32_t)L_86) < ((int32_t)((int32_t)256))))
		{
			goto IL_0063;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_Init_mDFCA39C40CD778FDE3C80054A7DD3515E55A6406 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, bool ___0_forEncryption, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___1_parameters;
		if (((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_0, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_1 = ___1_parameters;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var)));
		String_t* L_2;
		L_2 = Platform_GetTypeName_m9B04679202710BC6A96803803882849D0C5001FB(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral601CCA376E46978BDEF3632F3CF3209C7891C382)), L_2, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TwofishEngine_Init_mDFCA39C40CD778FDE3C80054A7DD3515E55A6406_RuntimeMethod_var)));
	}

IL_001e:
	{
		bool L_5 = ___0_forEncryption;
		__this->___encrypting_36 = L_5;
		RuntimeObject* L_6 = ___1_parameters;
		NullCheck(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_6, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_6, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)), NULL);
		__this->___workingKey_44 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___workingKey_44), (void*)L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___workingKey_44;
		NullCheck(L_8);
		__this->___k64Cnt_43 = ((int32_t)(((int32_t)(((RuntimeArray*)L_8)->max_length))/8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___workingKey_44;
		TwofishEngine_SetKey_mE272A8D0083032E411423BB5EC140A1A77BD1A05(__this, L_9, NULL);
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Engines.TwofishEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TwofishEngine_get_AlgorithmName_m1DC9D531790CB5584625335C679AE1D93C5ABD81 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC639AC33D2C568FE3314FD6510EE9F098A831841);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralC639AC33D2C568FE3314FD6510EE9F098A831841;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Engines.TwofishEngine::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TwofishEngine_get_IsPartialBlockOkay_m63347234DC482EC4B422342F3D742A07373FAAF7 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_ProcessBlock_m79AEAA7D729BB7F743AD5CE452C1EC6757D8BDB6 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_output, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___workingKey_44;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECAD71D2A48AFE84D642BA9E2C90621A70C4A478)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TwofishEngine_ProcessBlock_m79AEAA7D729BB7F743AD5CE452C1EC6757D8BDB6_RuntimeMethod_var)));
	}

IL_0013:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_input;
		int32_t L_3 = ___1_inOff;
		Check_DataLength_m4BEA4E45985CDB8967A7C3C71799B9036DDCC991(L_2, L_3, ((int32_t)16), _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___2_output;
		int32_t L_5 = ___3_outOff;
		Check_OutputLength_mFBD480CE544E8B2C4EFAD3A12D1E105DC36FFA68(L_4, L_5, ((int32_t)16), _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		bool L_6 = __this->___encrypting_36;
		if (!L_6)
		{
			goto IL_0045;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_input;
		int32_t L_8 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___2_output;
		int32_t L_10 = ___3_outOff;
		TwofishEngine_EncryptBlock_m162417EC0C4C2D907359EB77B48192B8B9369C78(__this, L_7, L_8, L_9, L_10, NULL);
		goto IL_0050;
	}

IL_0045:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_input;
		int32_t L_12 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___2_output;
		int32_t L_14 = ___3_outOff;
		TwofishEngine_DecryptBlock_m6EDB102D5D9EDDDA6B2D06578DC66C479FD7950C(__this, L_11, L_12, L_13, L_14, NULL);
	}

IL_0050:
	{
		return ((int32_t)16);
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_Reset_m659D8CDC305752672B6D55E25A0EA8D7FFE6D164 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___workingKey_44;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___workingKey_44;
		TwofishEngine_SetKey_mE272A8D0083032E411423BB5EC140A1A77BD1A05(__this, L_1, NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_GetBlockSize_m437AD9B11EC7A71A42DB5AAC7D75116926D2419A (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)16);
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::SetKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_SetKey_mE272A8D0083032E411423BB5EC140A1A77BD1A05 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)40));
		__this->___gSubKeys_41 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gSubKeys_41), (void*)L_3);
		int32_t L_4 = __this->___k64Cnt_43;
		if ((((int32_t)L_4) >= ((int32_t)1)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral14CEE6733903CF095F0E2144576E08E2EABC9277)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TwofishEngine_SetKey_mE272A8D0083032E411423BB5EC140A1A77BD1A05_RuntimeMethod_var)));
	}

IL_0036:
	{
		int32_t L_6 = __this->___k64Cnt_43;
		if ((((int32_t)L_6) <= ((int32_t)4)))
		{
			goto IL_004a;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4690523A3F07C01F5A658C98771DE79551536F47)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TwofishEngine_SetKey_mE272A8D0083032E411423BB5EC140A1A77BD1A05_RuntimeMethod_var)));
	}

IL_004a:
	{
		V_14 = 0;
		V_15 = 0;
		goto IL_0095;
	}

IL_0052:
	{
		int32_t L_8 = V_14;
		V_15 = ((int32_t)il2cpp_codegen_multiply(L_8, 8));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_0;
		int32_t L_10 = V_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___0_key;
		int32_t L_12 = V_15;
		int32_t L_13;
		L_13 = TwofishEngine_BytesTo32Bits_m58D51745F99B9350EBCD139204F678D805143E2E(__this, L_11, L_12, NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (int32_t)L_13);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___0_key;
		int32_t L_17 = V_15;
		int32_t L_18;
		L_18 = TwofishEngine_BytesTo32Bits_m58D51745F99B9350EBCD139204F678D805143E2E(__this, L_16, ((int32_t)il2cpp_codegen_add(L_17, 4)), NULL);
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (int32_t)L_18);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_2;
		int32_t L_20 = __this->___k64Cnt_43;
		int32_t L_21 = V_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_0;
		int32_t L_23 = V_14;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		int32_t L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_1;
		int32_t L_27 = V_14;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int32_t L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		int32_t L_30;
		L_30 = TwofishEngine_RS_MDS_Encode_m809B372A5B000880AD98DC48FD80EE585DE142FA(__this, L_25, L_29, NULL);
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_20, 1)), L_21))), (int32_t)L_30);
		int32_t L_31 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0095:
	{
		int32_t L_32 = V_14;
		int32_t L_33 = __this->___k64Cnt_43;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0052;
		}
	}
	{
		V_16 = 0;
		goto IL_010c;
	}

IL_00a4:
	{
		int32_t L_34 = V_16;
		V_3 = ((int32_t)il2cpp_codegen_multiply(L_34, ((int32_t)33686018)));
		int32_t L_35 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_0;
		int32_t L_37;
		L_37 = TwofishEngine_F32_m50255B31B086CB03ADF1F32B90BFA847ED2F348E(__this, L_35, L_36, NULL);
		V_4 = L_37;
		int32_t L_38 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_1;
		int32_t L_40;
		L_40 = TwofishEngine_F32_m50255B31B086CB03ADF1F32B90BFA847ED2F348E(__this, ((int32_t)il2cpp_codegen_add(L_38, ((int32_t)16843009))), L_39, NULL);
		V_5 = L_40;
		int32_t L_41 = V_5;
		int32_t L_42 = V_5;
		V_5 = ((int32_t)(((int32_t)(L_41<<8))|((int32_t)((uint32_t)L_42>>((int32_t)24)))));
		int32_t L_43 = V_4;
		int32_t L_44 = V_5;
		V_4 = ((int32_t)il2cpp_codegen_add(L_43, L_44));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = __this->___gSubKeys_41;
		int32_t L_46 = V_16;
		int32_t L_47 = V_4;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_46, 2))), (int32_t)L_47);
		int32_t L_48 = V_4;
		int32_t L_49 = V_5;
		V_4 = ((int32_t)il2cpp_codegen_add(L_48, L_49));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = __this->___gSubKeys_41;
		int32_t L_51 = V_16;
		int32_t L_52 = V_4;
		int32_t L_53 = V_4;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_51, 2)), 1))), (int32_t)((int32_t)(((int32_t)(L_52<<((int32_t)9)))|((int32_t)((uint32_t)L_53>>((int32_t)23))))));
		int32_t L_54 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_010c:
	{
		int32_t L_55 = V_16;
		if ((((int32_t)L_55) < ((int32_t)((int32_t)20))))
		{
			goto IL_00a4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_2;
		NullCheck(L_56);
		int32_t L_57 = 0;
		int32_t L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_6 = L_58;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = V_2;
		NullCheck(L_59);
		int32_t L_60 = 1;
		int32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		V_7 = L_61;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = V_2;
		NullCheck(L_62);
		int32_t L_63 = 2;
		int32_t L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		V_8 = L_64;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = V_2;
		NullCheck(L_65);
		int32_t L_66 = 3;
		int32_t L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_9 = L_67;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		__this->___gSBox_42 = L_68;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gSBox_42), (void*)L_68);
		V_17 = 0;
		goto IL_0460;
	}

IL_013e:
	{
		int32_t L_69 = V_17;
		int32_t L_70 = L_69;
		V_13 = L_70;
		int32_t L_71 = L_70;
		V_12 = L_71;
		int32_t L_72 = L_71;
		V_11 = L_72;
		V_10 = L_72;
		int32_t L_73 = __this->___k64Cnt_43;
		V_18 = ((int32_t)(L_73&3));
		int32_t L_74 = V_18;
		switch (L_74)
		{
			case 0:
			{
				goto IL_023c;
			}
			case 1:
			{
				goto IL_0171;
			}
			case 2:
			{
				goto IL_032c;
			}
			case 3:
			{
				goto IL_02b4;
			}
		}
	}
	{
		goto IL_045a;
	}

IL_0171:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = __this->___gSBox_42;
		int32_t L_76 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_77 = __this->___gMDS0_37;
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_78 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_79 = V_10;
		NullCheck(L_78);
		uint8_t L_80;
		L_80 = (L_78)->GetAt(0, L_79);
		int32_t L_81 = V_6;
		int32_t L_82;
		L_82 = TwofishEngine_M_b0_mCA2EF69DA6A621D6F861777A0C043DB2F7CBCD16(__this, L_81, NULL);
		NullCheck(L_77);
		int32_t L_83 = ((int32_t)(((int32_t)((int32_t)L_80&((int32_t)255)))^L_82));
		int32_t L_84 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_76, 2))), (int32_t)L_84);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = __this->___gSBox_42;
		int32_t L_86 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = __this->___gMDS1_38;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_88 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_89 = V_11;
		NullCheck(L_88);
		uint8_t L_90;
		L_90 = (L_88)->GetAt(0, L_89);
		int32_t L_91 = V_6;
		int32_t L_92;
		L_92 = TwofishEngine_M_b1_mFAF886CAB10C9E84889934EB8D78455E8159DB8F(__this, L_91, NULL);
		NullCheck(L_87);
		int32_t L_93 = ((int32_t)(((int32_t)((int32_t)L_90&((int32_t)255)))^L_92));
		int32_t L_94 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_86, 2)), 1))), (int32_t)L_94);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_95 = __this->___gSBox_42;
		int32_t L_96 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = __this->___gMDS2_39;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_98 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_99 = V_12;
		NullCheck(L_98);
		uint8_t L_100;
		L_100 = (L_98)->GetAt(1, L_99);
		int32_t L_101 = V_6;
		int32_t L_102;
		L_102 = TwofishEngine_M_b2_mA209CAADF896E142106239B72E68E5FBBE63B0CE(__this, L_101, NULL);
		NullCheck(L_97);
		int32_t L_103 = ((int32_t)(((int32_t)((int32_t)L_100&((int32_t)255)))^L_102));
		int32_t L_104 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_96, 2)), ((int32_t)512)))), (int32_t)L_104);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_105 = __this->___gSBox_42;
		int32_t L_106 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_107 = __this->___gMDS3_40;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_108 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_109 = V_13;
		NullCheck(L_108);
		uint8_t L_110;
		L_110 = (L_108)->GetAt(1, L_109);
		int32_t L_111 = V_6;
		int32_t L_112;
		L_112 = TwofishEngine_M_b3_mA5580BE58EAF0E4B2BC7C6C071FE75A1598798EE(__this, L_111, NULL);
		NullCheck(L_107);
		int32_t L_113 = ((int32_t)(((int32_t)((int32_t)L_110&((int32_t)255)))^L_112));
		int32_t L_114 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_106, 2)), ((int32_t)513)))), (int32_t)L_114);
		goto IL_045a;
	}

IL_023c:
	{
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_115 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_116 = V_10;
		NullCheck(L_115);
		uint8_t L_117;
		L_117 = (L_115)->GetAt(1, L_116);
		int32_t L_118 = V_9;
		int32_t L_119;
		L_119 = TwofishEngine_M_b0_mCA2EF69DA6A621D6F861777A0C043DB2F7CBCD16(__this, L_118, NULL);
		V_10 = ((int32_t)(((int32_t)((int32_t)L_117&((int32_t)255)))^L_119));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_120 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_121 = V_11;
		NullCheck(L_120);
		uint8_t L_122;
		L_122 = (L_120)->GetAt(0, L_121);
		int32_t L_123 = V_9;
		int32_t L_124;
		L_124 = TwofishEngine_M_b1_mFAF886CAB10C9E84889934EB8D78455E8159DB8F(__this, L_123, NULL);
		V_11 = ((int32_t)(((int32_t)((int32_t)L_122&((int32_t)255)))^L_124));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_125 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_126 = V_12;
		NullCheck(L_125);
		uint8_t L_127;
		L_127 = (L_125)->GetAt(0, L_126);
		int32_t L_128 = V_9;
		int32_t L_129;
		L_129 = TwofishEngine_M_b2_mA209CAADF896E142106239B72E68E5FBBE63B0CE(__this, L_128, NULL);
		V_12 = ((int32_t)(((int32_t)((int32_t)L_127&((int32_t)255)))^L_129));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_130 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_131 = V_13;
		NullCheck(L_130);
		uint8_t L_132;
		L_132 = (L_130)->GetAt(1, L_131);
		int32_t L_133 = V_9;
		int32_t L_134;
		L_134 = TwofishEngine_M_b3_mA5580BE58EAF0E4B2BC7C6C071FE75A1598798EE(__this, L_133, NULL);
		V_13 = ((int32_t)(((int32_t)((int32_t)L_132&((int32_t)255)))^L_134));
	}

IL_02b4:
	{
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_135 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_136 = V_10;
		NullCheck(L_135);
		uint8_t L_137;
		L_137 = (L_135)->GetAt(1, L_136);
		int32_t L_138 = V_8;
		int32_t L_139;
		L_139 = TwofishEngine_M_b0_mCA2EF69DA6A621D6F861777A0C043DB2F7CBCD16(__this, L_138, NULL);
		V_10 = ((int32_t)(((int32_t)((int32_t)L_137&((int32_t)255)))^L_139));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_140 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_141 = V_11;
		NullCheck(L_140);
		uint8_t L_142;
		L_142 = (L_140)->GetAt(1, L_141);
		int32_t L_143 = V_8;
		int32_t L_144;
		L_144 = TwofishEngine_M_b1_mFAF886CAB10C9E84889934EB8D78455E8159DB8F(__this, L_143, NULL);
		V_11 = ((int32_t)(((int32_t)((int32_t)L_142&((int32_t)255)))^L_144));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_145 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_146 = V_12;
		NullCheck(L_145);
		uint8_t L_147;
		L_147 = (L_145)->GetAt(0, L_146);
		int32_t L_148 = V_8;
		int32_t L_149;
		L_149 = TwofishEngine_M_b2_mA209CAADF896E142106239B72E68E5FBBE63B0CE(__this, L_148, NULL);
		V_12 = ((int32_t)(((int32_t)((int32_t)L_147&((int32_t)255)))^L_149));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_150 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_151 = V_13;
		NullCheck(L_150);
		uint8_t L_152;
		L_152 = (L_150)->GetAt(0, L_151);
		int32_t L_153 = V_8;
		int32_t L_154;
		L_154 = TwofishEngine_M_b3_mA5580BE58EAF0E4B2BC7C6C071FE75A1598798EE(__this, L_153, NULL);
		V_13 = ((int32_t)(((int32_t)((int32_t)L_152&((int32_t)255)))^L_154));
	}

IL_032c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_155 = __this->___gSBox_42;
		int32_t L_156 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_157 = __this->___gMDS0_37;
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_158 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_159 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_160 = V_10;
		NullCheck(L_159);
		uint8_t L_161;
		L_161 = (L_159)->GetAt(0, L_160);
		int32_t L_162 = V_7;
		int32_t L_163;
		L_163 = TwofishEngine_M_b0_mCA2EF69DA6A621D6F861777A0C043DB2F7CBCD16(__this, L_162, NULL);
		NullCheck(L_158);
		uint8_t L_164;
		L_164 = (L_158)->GetAt(0, ((int32_t)(((int32_t)((int32_t)L_161&((int32_t)255)))^L_163)));
		int32_t L_165 = V_6;
		int32_t L_166;
		L_166 = TwofishEngine_M_b0_mCA2EF69DA6A621D6F861777A0C043DB2F7CBCD16(__this, L_165, NULL);
		NullCheck(L_157);
		int32_t L_167 = ((int32_t)(((int32_t)((int32_t)L_164&((int32_t)255)))^L_166));
		int32_t L_168 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		NullCheck(L_155);
		(L_155)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_156, 2))), (int32_t)L_168);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_169 = __this->___gSBox_42;
		int32_t L_170 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_171 = __this->___gMDS1_38;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_172 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_173 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_174 = V_11;
		NullCheck(L_173);
		uint8_t L_175;
		L_175 = (L_173)->GetAt(1, L_174);
		int32_t L_176 = V_7;
		int32_t L_177;
		L_177 = TwofishEngine_M_b1_mFAF886CAB10C9E84889934EB8D78455E8159DB8F(__this, L_176, NULL);
		NullCheck(L_172);
		uint8_t L_178;
		L_178 = (L_172)->GetAt(0, ((int32_t)(((int32_t)((int32_t)L_175&((int32_t)255)))^L_177)));
		int32_t L_179 = V_6;
		int32_t L_180;
		L_180 = TwofishEngine_M_b1_mFAF886CAB10C9E84889934EB8D78455E8159DB8F(__this, L_179, NULL);
		NullCheck(L_171);
		int32_t L_181 = ((int32_t)(((int32_t)((int32_t)L_178&((int32_t)255)))^L_180));
		int32_t L_182 = (L_171)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		NullCheck(L_169);
		(L_169)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_170, 2)), 1))), (int32_t)L_182);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_183 = __this->___gSBox_42;
		int32_t L_184 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_185 = __this->___gMDS2_39;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_186 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_187 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_188 = V_12;
		NullCheck(L_187);
		uint8_t L_189;
		L_189 = (L_187)->GetAt(0, L_188);
		int32_t L_190 = V_7;
		int32_t L_191;
		L_191 = TwofishEngine_M_b2_mA209CAADF896E142106239B72E68E5FBBE63B0CE(__this, L_190, NULL);
		NullCheck(L_186);
		uint8_t L_192;
		L_192 = (L_186)->GetAt(1, ((int32_t)(((int32_t)((int32_t)L_189&((int32_t)255)))^L_191)));
		int32_t L_193 = V_6;
		int32_t L_194;
		L_194 = TwofishEngine_M_b2_mA209CAADF896E142106239B72E68E5FBBE63B0CE(__this, L_193, NULL);
		NullCheck(L_185);
		int32_t L_195 = ((int32_t)(((int32_t)((int32_t)L_192&((int32_t)255)))^L_194));
		int32_t L_196 = (L_185)->GetAt(static_cast<il2cpp_array_size_t>(L_195));
		NullCheck(L_183);
		(L_183)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_184, 2)), ((int32_t)512)))), (int32_t)L_196);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_197 = __this->___gSBox_42;
		int32_t L_198 = V_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_199 = __this->___gMDS3_40;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_200 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_201 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_202 = V_13;
		NullCheck(L_201);
		uint8_t L_203;
		L_203 = (L_201)->GetAt(1, L_202);
		int32_t L_204 = V_7;
		int32_t L_205;
		L_205 = TwofishEngine_M_b3_mA5580BE58EAF0E4B2BC7C6C071FE75A1598798EE(__this, L_204, NULL);
		NullCheck(L_200);
		uint8_t L_206;
		L_206 = (L_200)->GetAt(1, ((int32_t)(((int32_t)((int32_t)L_203&((int32_t)255)))^L_205)));
		int32_t L_207 = V_6;
		int32_t L_208;
		L_208 = TwofishEngine_M_b3_mA5580BE58EAF0E4B2BC7C6C071FE75A1598798EE(__this, L_207, NULL);
		NullCheck(L_199);
		int32_t L_209 = ((int32_t)(((int32_t)((int32_t)L_206&((int32_t)255)))^L_208));
		int32_t L_210 = (L_199)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		NullCheck(L_197);
		(L_197)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_198, 2)), ((int32_t)513)))), (int32_t)L_210);
	}

IL_045a:
	{
		int32_t L_211 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_211, 1));
	}

IL_0460:
	{
		int32_t L_212 = V_17;
		if ((((int32_t)L_212) < ((int32_t)((int32_t)256))))
		{
			goto IL_013e;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::EncryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_EncryptBlock_m162417EC0C4C2D907359EB77B48192B8B9369C78 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_src, int32_t ___1_srcIndex, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_dst, int32_t ___3_dstIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_src;
		int32_t L_1 = ___1_srcIndex;
		int32_t L_2;
		L_2 = TwofishEngine_BytesTo32Bits_m58D51745F99B9350EBCD139204F678D805143E2E(__this, L_0, L_1, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___gSubKeys_41;
		NullCheck(L_3);
		int32_t L_4 = 0;
		int32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)(L_2^L_5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_src;
		int32_t L_7 = ___1_srcIndex;
		int32_t L_8;
		L_8 = TwofishEngine_BytesTo32Bits_m58D51745F99B9350EBCD139204F678D805143E2E(__this, L_6, ((int32_t)il2cpp_codegen_add(L_7, 4)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___gSubKeys_41;
		NullCheck(L_9);
		int32_t L_10 = 1;
		int32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = ((int32_t)(L_8^L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_src;
		int32_t L_13 = ___1_srcIndex;
		int32_t L_14;
		L_14 = TwofishEngine_BytesTo32Bits_m58D51745F99B9350EBCD139204F678D805143E2E(__this, L_12, ((int32_t)il2cpp_codegen_add(L_13, 8)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___gSubKeys_41;
		NullCheck(L_15);
		int32_t L_16 = 2;
		int32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_2 = ((int32_t)(L_14^L_17));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___0_src;
		int32_t L_19 = ___1_srcIndex;
		int32_t L_20;
		L_20 = TwofishEngine_BytesTo32Bits_m58D51745F99B9350EBCD139204F678D805143E2E(__this, L_18, ((int32_t)il2cpp_codegen_add(L_19, ((int32_t)12))), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->___gSubKeys_41;
		NullCheck(L_21);
		int32_t L_22 = 3;
		int32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_3 = ((int32_t)(L_20^L_23));
		V_4 = 8;
		V_7 = 0;
		goto IL_0104;
	}

IL_005a:
	{
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = TwofishEngine_Fe32_0_m9C275C5A14FCD831789EFAE4E80F94ED366220CB(__this, L_24, NULL);
		V_5 = L_25;
		int32_t L_26 = V_1;
		int32_t L_27;
		L_27 = TwofishEngine_Fe32_3_m72DB29FA4222BEA880C9913CE095E41994C7390C(__this, L_26, NULL);
		V_6 = L_27;
		int32_t L_28 = V_2;
		int32_t L_29 = V_5;
		int32_t L_30 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->___gSubKeys_41;
		int32_t L_32 = V_4;
		int32_t L_33 = L_32;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		NullCheck(L_31);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_2 = ((int32_t)(L_28^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, L_30)), L_35))));
		int32_t L_36 = V_2;
		int32_t L_37 = V_2;
		V_2 = ((int32_t)(((int32_t)((uint32_t)L_36>>1))|((int32_t)(L_37<<((int32_t)31)))));
		int32_t L_38 = V_3;
		int32_t L_39 = V_3;
		int32_t L_40 = V_5;
		int32_t L_41 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = __this->___gSubKeys_41;
		int32_t L_43 = V_4;
		int32_t L_44 = L_43;
		V_4 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		NullCheck(L_42);
		int32_t L_45 = L_44;
		int32_t L_46 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_3 = ((int32_t)(((int32_t)(((int32_t)(L_38<<1))|((int32_t)((uint32_t)L_39>>((int32_t)31)))))^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_40, ((int32_t)il2cpp_codegen_multiply(2, L_41)))), L_46))));
		int32_t L_47 = V_2;
		int32_t L_48;
		L_48 = TwofishEngine_Fe32_0_m9C275C5A14FCD831789EFAE4E80F94ED366220CB(__this, L_47, NULL);
		V_5 = L_48;
		int32_t L_49 = V_3;
		int32_t L_50;
		L_50 = TwofishEngine_Fe32_3_m72DB29FA4222BEA880C9913CE095E41994C7390C(__this, L_49, NULL);
		V_6 = L_50;
		int32_t L_51 = V_0;
		int32_t L_52 = V_5;
		int32_t L_53 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = __this->___gSubKeys_41;
		int32_t L_55 = V_4;
		int32_t L_56 = L_55;
		V_4 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		NullCheck(L_54);
		int32_t L_57 = L_56;
		int32_t L_58 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_0 = ((int32_t)(L_51^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_52, L_53)), L_58))));
		int32_t L_59 = V_0;
		int32_t L_60 = V_0;
		V_0 = ((int32_t)(((int32_t)((uint32_t)L_59>>1))|((int32_t)(L_60<<((int32_t)31)))));
		int32_t L_61 = V_1;
		int32_t L_62 = V_1;
		int32_t L_63 = V_5;
		int32_t L_64 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = __this->___gSubKeys_41;
		int32_t L_66 = V_4;
		int32_t L_67 = L_66;
		V_4 = ((int32_t)il2cpp_codegen_add(L_67, 1));
		NullCheck(L_65);
		int32_t L_68 = L_67;
		int32_t L_69 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_1 = ((int32_t)(((int32_t)(((int32_t)(L_61<<1))|((int32_t)((uint32_t)L_62>>((int32_t)31)))))^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_63, ((int32_t)il2cpp_codegen_multiply(2, L_64)))), L_69))));
		int32_t L_70 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_70, 2));
	}

IL_0104:
	{
		int32_t L_71 = V_7;
		if ((((int32_t)L_71) < ((int32_t)((int32_t)16))))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_72 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = __this->___gSubKeys_41;
		NullCheck(L_73);
		int32_t L_74 = 4;
		int32_t L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = ___2_dst;
		int32_t L_77 = ___3_dstIndex;
		TwofishEngine_Bits32ToBytes_m47C33872DAA2B10E8F86B10604F344119BF40C23(__this, ((int32_t)(L_72^L_75)), L_76, L_77, NULL);
		int32_t L_78 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = __this->___gSubKeys_41;
		NullCheck(L_79);
		int32_t L_80 = 5;
		int32_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = ___2_dst;
		int32_t L_83 = ___3_dstIndex;
		TwofishEngine_Bits32ToBytes_m47C33872DAA2B10E8F86B10604F344119BF40C23(__this, ((int32_t)(L_78^L_81)), L_82, ((int32_t)il2cpp_codegen_add(L_83, 4)), NULL);
		int32_t L_84 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = __this->___gSubKeys_41;
		NullCheck(L_85);
		int32_t L_86 = 6;
		int32_t L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = ___2_dst;
		int32_t L_89 = ___3_dstIndex;
		TwofishEngine_Bits32ToBytes_m47C33872DAA2B10E8F86B10604F344119BF40C23(__this, ((int32_t)(L_84^L_87)), L_88, ((int32_t)il2cpp_codegen_add(L_89, 8)), NULL);
		int32_t L_90 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = __this->___gSubKeys_41;
		NullCheck(L_91);
		int32_t L_92 = 7;
		int32_t L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = ___2_dst;
		int32_t L_95 = ___3_dstIndex;
		TwofishEngine_Bits32ToBytes_m47C33872DAA2B10E8F86B10604F344119BF40C23(__this, ((int32_t)(L_90^L_93)), L_94, ((int32_t)il2cpp_codegen_add(L_95, ((int32_t)12))), NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::DecryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_DecryptBlock_m6EDB102D5D9EDDDA6B2D06578DC66C479FD7950C (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_src, int32_t ___1_srcIndex, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_dst, int32_t ___3_dstIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_src;
		int32_t L_1 = ___1_srcIndex;
		int32_t L_2;
		L_2 = TwofishEngine_BytesTo32Bits_m58D51745F99B9350EBCD139204F678D805143E2E(__this, L_0, L_1, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___gSubKeys_41;
		NullCheck(L_3);
		int32_t L_4 = 4;
		int32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = ((int32_t)(L_2^L_5));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_src;
		int32_t L_7 = ___1_srcIndex;
		int32_t L_8;
		L_8 = TwofishEngine_BytesTo32Bits_m58D51745F99B9350EBCD139204F678D805143E2E(__this, L_6, ((int32_t)il2cpp_codegen_add(L_7, 4)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___gSubKeys_41;
		NullCheck(L_9);
		int32_t L_10 = 5;
		int32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = ((int32_t)(L_8^L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_src;
		int32_t L_13 = ___1_srcIndex;
		int32_t L_14;
		L_14 = TwofishEngine_BytesTo32Bits_m58D51745F99B9350EBCD139204F678D805143E2E(__this, L_12, ((int32_t)il2cpp_codegen_add(L_13, 8)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->___gSubKeys_41;
		NullCheck(L_15);
		int32_t L_16 = 6;
		int32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_2 = ((int32_t)(L_14^L_17));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___0_src;
		int32_t L_19 = ___1_srcIndex;
		int32_t L_20;
		L_20 = TwofishEngine_BytesTo32Bits_m58D51745F99B9350EBCD139204F678D805143E2E(__this, L_18, ((int32_t)il2cpp_codegen_add(L_19, ((int32_t)12))), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->___gSubKeys_41;
		NullCheck(L_21);
		int32_t L_22 = 7;
		int32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_3 = ((int32_t)(L_20^L_23));
		V_4 = ((int32_t)39);
		V_7 = 0;
		goto IL_0105;
	}

IL_005b:
	{
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = TwofishEngine_Fe32_0_m9C275C5A14FCD831789EFAE4E80F94ED366220CB(__this, L_24, NULL);
		V_5 = L_25;
		int32_t L_26 = V_1;
		int32_t L_27;
		L_27 = TwofishEngine_Fe32_3_m72DB29FA4222BEA880C9913CE095E41994C7390C(__this, L_26, NULL);
		V_6 = L_27;
		int32_t L_28 = V_3;
		int32_t L_29 = V_5;
		int32_t L_30 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->___gSubKeys_41;
		int32_t L_32 = V_4;
		int32_t L_33 = L_32;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_33, 1));
		NullCheck(L_31);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_3 = ((int32_t)(L_28^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_29, ((int32_t)il2cpp_codegen_multiply(2, L_30)))), L_35))));
		int32_t L_36 = V_2;
		int32_t L_37 = V_2;
		int32_t L_38 = V_5;
		int32_t L_39 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = __this->___gSubKeys_41;
		int32_t L_41 = V_4;
		int32_t L_42 = L_41;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		NullCheck(L_40);
		int32_t L_43 = L_42;
		int32_t L_44 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_2 = ((int32_t)(((int32_t)(((int32_t)(L_36<<1))|((int32_t)((uint32_t)L_37>>((int32_t)31)))))^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_38, L_39)), L_44))));
		int32_t L_45 = V_3;
		int32_t L_46 = V_3;
		V_3 = ((int32_t)(((int32_t)((uint32_t)L_45>>1))|((int32_t)(L_46<<((int32_t)31)))));
		int32_t L_47 = V_2;
		int32_t L_48;
		L_48 = TwofishEngine_Fe32_0_m9C275C5A14FCD831789EFAE4E80F94ED366220CB(__this, L_47, NULL);
		V_5 = L_48;
		int32_t L_49 = V_3;
		int32_t L_50;
		L_50 = TwofishEngine_Fe32_3_m72DB29FA4222BEA880C9913CE095E41994C7390C(__this, L_49, NULL);
		V_6 = L_50;
		int32_t L_51 = V_1;
		int32_t L_52 = V_5;
		int32_t L_53 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = __this->___gSubKeys_41;
		int32_t L_55 = V_4;
		int32_t L_56 = L_55;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		NullCheck(L_54);
		int32_t L_57 = L_56;
		int32_t L_58 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		V_1 = ((int32_t)(L_51^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_52, ((int32_t)il2cpp_codegen_multiply(2, L_53)))), L_58))));
		int32_t L_59 = V_0;
		int32_t L_60 = V_0;
		int32_t L_61 = V_5;
		int32_t L_62 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = __this->___gSubKeys_41;
		int32_t L_64 = V_4;
		int32_t L_65 = L_64;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_65, 1));
		NullCheck(L_63);
		int32_t L_66 = L_65;
		int32_t L_67 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		V_0 = ((int32_t)(((int32_t)(((int32_t)(L_59<<1))|((int32_t)((uint32_t)L_60>>((int32_t)31)))))^((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_61, L_62)), L_67))));
		int32_t L_68 = V_1;
		int32_t L_69 = V_1;
		V_1 = ((int32_t)(((int32_t)((uint32_t)L_68>>1))|((int32_t)(L_69<<((int32_t)31)))));
		int32_t L_70 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_70, 2));
	}

IL_0105:
	{
		int32_t L_71 = V_7;
		if ((((int32_t)L_71) < ((int32_t)((int32_t)16))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_72 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = __this->___gSubKeys_41;
		NullCheck(L_73);
		int32_t L_74 = 0;
		int32_t L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = ___2_dst;
		int32_t L_77 = ___3_dstIndex;
		TwofishEngine_Bits32ToBytes_m47C33872DAA2B10E8F86B10604F344119BF40C23(__this, ((int32_t)(L_72^L_75)), L_76, L_77, NULL);
		int32_t L_78 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = __this->___gSubKeys_41;
		NullCheck(L_79);
		int32_t L_80 = 1;
		int32_t L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = ___2_dst;
		int32_t L_83 = ___3_dstIndex;
		TwofishEngine_Bits32ToBytes_m47C33872DAA2B10E8F86B10604F344119BF40C23(__this, ((int32_t)(L_78^L_81)), L_82, ((int32_t)il2cpp_codegen_add(L_83, 4)), NULL);
		int32_t L_84 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = __this->___gSubKeys_41;
		NullCheck(L_85);
		int32_t L_86 = 2;
		int32_t L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = ___2_dst;
		int32_t L_89 = ___3_dstIndex;
		TwofishEngine_Bits32ToBytes_m47C33872DAA2B10E8F86B10604F344119BF40C23(__this, ((int32_t)(L_84^L_87)), L_88, ((int32_t)il2cpp_codegen_add(L_89, 8)), NULL);
		int32_t L_90 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = __this->___gSubKeys_41;
		NullCheck(L_91);
		int32_t L_92 = 3;
		int32_t L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = ___2_dst;
		int32_t L_95 = ___3_dstIndex;
		TwofishEngine_Bits32ToBytes_m47C33872DAA2B10E8F86B10604F344119BF40C23(__this, ((int32_t)(L_90^L_93)), L_94, ((int32_t)il2cpp_codegen_add(L_95, ((int32_t)12))), NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::F32(System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_F32_m50255B31B086CB03ADF1F32B90BFA847ED2F348E (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_k32, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		int32_t L_0 = ___0_x;
		int32_t L_1;
		L_1 = TwofishEngine_M_b0_mCA2EF69DA6A621D6F861777A0C043DB2F7CBCD16(__this, L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = ___0_x;
		int32_t L_3;
		L_3 = TwofishEngine_M_b1_mFAF886CAB10C9E84889934EB8D78455E8159DB8F(__this, L_2, NULL);
		V_1 = L_3;
		int32_t L_4 = ___0_x;
		int32_t L_5;
		L_5 = TwofishEngine_M_b2_mA209CAADF896E142106239B72E68E5FBBE63B0CE(__this, L_4, NULL);
		V_2 = L_5;
		int32_t L_6 = ___0_x;
		int32_t L_7;
		L_7 = TwofishEngine_M_b3_mA5580BE58EAF0E4B2BC7C6C071FE75A1598798EE(__this, L_6, NULL);
		V_3 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___1_k32;
		NullCheck(L_8);
		int32_t L_9 = 0;
		int32_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ___1_k32;
		NullCheck(L_11);
		int32_t L_12 = 1;
		int32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = ___1_k32;
		NullCheck(L_14);
		int32_t L_15 = 2;
		int32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_6 = L_16;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___1_k32;
		NullCheck(L_17);
		int32_t L_18 = 3;
		int32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_7 = L_19;
		V_8 = 0;
		int32_t L_20 = __this->___k64Cnt_43;
		V_9 = ((int32_t)(L_20&3));
		int32_t L_21 = V_9;
		switch (L_21)
		{
			case 0:
			{
				goto IL_00ef;
			}
			case 1:
			{
				goto IL_005d;
			}
			case 2:
			{
				goto IL_01cf;
			}
			case 3:
			{
				goto IL_015f;
			}
		}
	}
	{
		goto IL_02c4;
	}

IL_005d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = __this->___gMDS0_37;
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_23 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		uint8_t L_25;
		L_25 = (L_23)->GetAt(0, L_24);
		int32_t L_26 = V_4;
		int32_t L_27;
		L_27 = TwofishEngine_M_b0_mCA2EF69DA6A621D6F861777A0C043DB2F7CBCD16(__this, L_26, NULL);
		NullCheck(L_22);
		int32_t L_28 = ((int32_t)(((int32_t)((int32_t)L_25&((int32_t)255)))^L_27));
		int32_t L_29 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->___gMDS1_38;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_31 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		uint8_t L_33;
		L_33 = (L_31)->GetAt(0, L_32);
		int32_t L_34 = V_4;
		int32_t L_35;
		L_35 = TwofishEngine_M_b1_mFAF886CAB10C9E84889934EB8D78455E8159DB8F(__this, L_34, NULL);
		NullCheck(L_30);
		int32_t L_36 = ((int32_t)(((int32_t)((int32_t)L_33&((int32_t)255)))^L_35));
		int32_t L_37 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->___gMDS2_39;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_39 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		uint8_t L_41;
		L_41 = (L_39)->GetAt(1, L_40);
		int32_t L_42 = V_4;
		int32_t L_43;
		L_43 = TwofishEngine_M_b2_mA209CAADF896E142106239B72E68E5FBBE63B0CE(__this, L_42, NULL);
		NullCheck(L_38);
		int32_t L_44 = ((int32_t)(((int32_t)((int32_t)L_41&((int32_t)255)))^L_43));
		int32_t L_45 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = __this->___gMDS3_40;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_47 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_48 = V_3;
		NullCheck(L_47);
		uint8_t L_49;
		L_49 = (L_47)->GetAt(1, L_48);
		int32_t L_50 = V_4;
		int32_t L_51;
		L_51 = TwofishEngine_M_b3_mA5580BE58EAF0E4B2BC7C6C071FE75A1598798EE(__this, L_50, NULL);
		NullCheck(L_46);
		int32_t L_52 = ((int32_t)(((int32_t)((int32_t)L_49&((int32_t)255)))^L_51));
		int32_t L_53 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_8 = ((int32_t)(((int32_t)(((int32_t)(L_29^L_37))^L_45))^L_53));
		goto IL_02c4;
	}

IL_00ef:
	{
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_54 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_55 = V_0;
		NullCheck(L_54);
		uint8_t L_56;
		L_56 = (L_54)->GetAt(1, L_55);
		int32_t L_57 = V_7;
		int32_t L_58;
		L_58 = TwofishEngine_M_b0_mCA2EF69DA6A621D6F861777A0C043DB2F7CBCD16(__this, L_57, NULL);
		V_0 = ((int32_t)(((int32_t)((int32_t)L_56&((int32_t)255)))^L_58));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_59 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_60 = V_1;
		NullCheck(L_59);
		uint8_t L_61;
		L_61 = (L_59)->GetAt(0, L_60);
		int32_t L_62 = V_7;
		int32_t L_63;
		L_63 = TwofishEngine_M_b1_mFAF886CAB10C9E84889934EB8D78455E8159DB8F(__this, L_62, NULL);
		V_1 = ((int32_t)(((int32_t)((int32_t)L_61&((int32_t)255)))^L_63));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_64 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_65 = V_2;
		NullCheck(L_64);
		uint8_t L_66;
		L_66 = (L_64)->GetAt(0, L_65);
		int32_t L_67 = V_7;
		int32_t L_68;
		L_68 = TwofishEngine_M_b2_mA209CAADF896E142106239B72E68E5FBBE63B0CE(__this, L_67, NULL);
		V_2 = ((int32_t)(((int32_t)((int32_t)L_66&((int32_t)255)))^L_68));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_69 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_70 = V_3;
		NullCheck(L_69);
		uint8_t L_71;
		L_71 = (L_69)->GetAt(1, L_70);
		int32_t L_72 = V_7;
		int32_t L_73;
		L_73 = TwofishEngine_M_b3_mA5580BE58EAF0E4B2BC7C6C071FE75A1598798EE(__this, L_72, NULL);
		V_3 = ((int32_t)(((int32_t)((int32_t)L_71&((int32_t)255)))^L_73));
	}

IL_015f:
	{
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_74 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_75 = V_0;
		NullCheck(L_74);
		uint8_t L_76;
		L_76 = (L_74)->GetAt(1, L_75);
		int32_t L_77 = V_6;
		int32_t L_78;
		L_78 = TwofishEngine_M_b0_mCA2EF69DA6A621D6F861777A0C043DB2F7CBCD16(__this, L_77, NULL);
		V_0 = ((int32_t)(((int32_t)((int32_t)L_76&((int32_t)255)))^L_78));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_79 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_80 = V_1;
		NullCheck(L_79);
		uint8_t L_81;
		L_81 = (L_79)->GetAt(1, L_80);
		int32_t L_82 = V_6;
		int32_t L_83;
		L_83 = TwofishEngine_M_b1_mFAF886CAB10C9E84889934EB8D78455E8159DB8F(__this, L_82, NULL);
		V_1 = ((int32_t)(((int32_t)((int32_t)L_81&((int32_t)255)))^L_83));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_84 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_85 = V_2;
		NullCheck(L_84);
		uint8_t L_86;
		L_86 = (L_84)->GetAt(0, L_85);
		int32_t L_87 = V_6;
		int32_t L_88;
		L_88 = TwofishEngine_M_b2_mA209CAADF896E142106239B72E68E5FBBE63B0CE(__this, L_87, NULL);
		V_2 = ((int32_t)(((int32_t)((int32_t)L_86&((int32_t)255)))^L_88));
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_89 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_90 = V_3;
		NullCheck(L_89);
		uint8_t L_91;
		L_91 = (L_89)->GetAt(0, L_90);
		int32_t L_92 = V_6;
		int32_t L_93;
		L_93 = TwofishEngine_M_b3_mA5580BE58EAF0E4B2BC7C6C071FE75A1598798EE(__this, L_92, NULL);
		V_3 = ((int32_t)(((int32_t)((int32_t)L_91&((int32_t)255)))^L_93));
	}

IL_01cf:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_94 = __this->___gMDS0_37;
		il2cpp_codegen_runtime_class_init_inline(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_95 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_96 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_97 = V_0;
		NullCheck(L_96);
		uint8_t L_98;
		L_98 = (L_96)->GetAt(0, L_97);
		int32_t L_99 = V_5;
		int32_t L_100;
		L_100 = TwofishEngine_M_b0_mCA2EF69DA6A621D6F861777A0C043DB2F7CBCD16(__this, L_99, NULL);
		NullCheck(L_95);
		uint8_t L_101;
		L_101 = (L_95)->GetAt(0, ((int32_t)(((int32_t)((int32_t)L_98&((int32_t)255)))^L_100)));
		int32_t L_102 = V_4;
		int32_t L_103;
		L_103 = TwofishEngine_M_b0_mCA2EF69DA6A621D6F861777A0C043DB2F7CBCD16(__this, L_102, NULL);
		NullCheck(L_94);
		int32_t L_104 = ((int32_t)(((int32_t)((int32_t)L_101&((int32_t)255)))^L_103));
		int32_t L_105 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_106 = __this->___gMDS1_38;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_107 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_108 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_109 = V_1;
		NullCheck(L_108);
		uint8_t L_110;
		L_110 = (L_108)->GetAt(1, L_109);
		int32_t L_111 = V_5;
		int32_t L_112;
		L_112 = TwofishEngine_M_b1_mFAF886CAB10C9E84889934EB8D78455E8159DB8F(__this, L_111, NULL);
		NullCheck(L_107);
		uint8_t L_113;
		L_113 = (L_107)->GetAt(0, ((int32_t)(((int32_t)((int32_t)L_110&((int32_t)255)))^L_112)));
		int32_t L_114 = V_4;
		int32_t L_115;
		L_115 = TwofishEngine_M_b1_mFAF886CAB10C9E84889934EB8D78455E8159DB8F(__this, L_114, NULL);
		NullCheck(L_106);
		int32_t L_116 = ((int32_t)(((int32_t)((int32_t)L_113&((int32_t)255)))^L_115));
		int32_t L_117 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_118 = __this->___gMDS2_39;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_119 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_120 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_121 = V_2;
		NullCheck(L_120);
		uint8_t L_122;
		L_122 = (L_120)->GetAt(0, L_121);
		int32_t L_123 = V_5;
		int32_t L_124;
		L_124 = TwofishEngine_M_b2_mA209CAADF896E142106239B72E68E5FBBE63B0CE(__this, L_123, NULL);
		NullCheck(L_119);
		uint8_t L_125;
		L_125 = (L_119)->GetAt(1, ((int32_t)(((int32_t)((int32_t)L_122&((int32_t)255)))^L_124)));
		int32_t L_126 = V_4;
		int32_t L_127;
		L_127 = TwofishEngine_M_b2_mA209CAADF896E142106239B72E68E5FBBE63B0CE(__this, L_126, NULL);
		NullCheck(L_118);
		int32_t L_128 = ((int32_t)(((int32_t)((int32_t)L_125&((int32_t)255)))^L_127));
		int32_t L_129 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_130 = __this->___gMDS3_40;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_131 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_132 = ((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0;
		int32_t L_133 = V_3;
		NullCheck(L_132);
		uint8_t L_134;
		L_134 = (L_132)->GetAt(1, L_133);
		int32_t L_135 = V_5;
		int32_t L_136;
		L_136 = TwofishEngine_M_b3_mA5580BE58EAF0E4B2BC7C6C071FE75A1598798EE(__this, L_135, NULL);
		NullCheck(L_131);
		uint8_t L_137;
		L_137 = (L_131)->GetAt(1, ((int32_t)(((int32_t)((int32_t)L_134&((int32_t)255)))^L_136)));
		int32_t L_138 = V_4;
		int32_t L_139;
		L_139 = TwofishEngine_M_b3_mA5580BE58EAF0E4B2BC7C6C071FE75A1598798EE(__this, L_138, NULL);
		NullCheck(L_130);
		int32_t L_140 = ((int32_t)(((int32_t)((int32_t)L_137&((int32_t)255)))^L_139));
		int32_t L_141 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		V_8 = ((int32_t)(((int32_t)(((int32_t)(L_105^L_117))^L_129))^L_141));
	}

IL_02c4:
	{
		int32_t L_142 = V_8;
		return L_142;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::RS_MDS_Encode(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_RS_MDS_Encode_m809B372A5B000880AD98DC48FD80EE585DE142FA (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_k0, int32_t ___1_k1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___1_k1;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0012;
	}

IL_0006:
	{
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = TwofishEngine_RS_rem_mED9611C84C1559560AEA0AEF1B59C63423016018(__this, L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0012:
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) < ((int32_t)4)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_k0;
		V_0 = ((int32_t)(L_5^L_6));
		V_2 = 0;
		goto IL_002a;
	}

IL_001e:
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = TwofishEngine_RS_rem_mED9611C84C1559560AEA0AEF1B59C63423016018(__this, L_7, NULL);
		V_0 = L_8;
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002a:
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::RS_rem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_RS_rem_mED9611C84C1559560AEA0AEF1B59C63423016018 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		int32_t L_0 = ___0_x;
		V_0 = ((int32_t)(((int32_t)((uint32_t)L_0>>((int32_t)24)))&((int32_t)255)));
		int32_t L_1 = V_0;
		int32_t L_2 = V_0;
		G_B1_0 = ((int32_t)(L_1<<1));
		if (((int32_t)(L_2&((int32_t)128))))
		{
			G_B2_0 = ((int32_t)(L_1<<1));
			goto IL_001a;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_001f;
	}

IL_001a:
	{
		G_B3_0 = ((int32_t)333);
		G_B3_1 = G_B2_0;
	}

IL_001f:
	{
		V_1 = ((int32_t)(((int32_t)(G_B3_1^G_B3_0))&((int32_t)255)));
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		G_B4_0 = ((int32_t)((uint32_t)L_3>>1));
		if (((int32_t)(L_4&1)))
		{
			G_B5_0 = ((int32_t)((uint32_t)L_3>>1));
			goto IL_0032;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0037;
	}

IL_0032:
	{
		G_B6_0 = ((int32_t)166);
		G_B6_1 = G_B5_0;
	}

IL_0037:
	{
		int32_t L_5 = V_1;
		V_2 = ((int32_t)(((int32_t)(G_B6_1^G_B6_0))^L_5));
		int32_t L_6 = ___0_x;
		int32_t L_7 = V_2;
		int32_t L_8 = V_1;
		int32_t L_9 = V_2;
		int32_t L_10 = V_0;
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_6<<8))^((int32_t)(L_7<<((int32_t)24)))))^((int32_t)(L_8<<((int32_t)16)))))^((int32_t)(L_9<<8))))^L_10));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::LFSR1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_LFSR1_mF7196BF8D6C6A853EB8DB230F15B716A50DA6540 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___0_x;
		G_B1_0 = ((int32_t)(L_0>>1));
		if (((int32_t)(L_1&1)))
		{
			G_B2_0 = ((int32_t)(L_0>>1));
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000b:
	{
		G_B3_0 = ((int32_t)180);
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		return ((int32_t)(G_B3_1^G_B3_0));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::LFSR2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_LFSR2_m944E26A3401C2A72441891A56910159D33EF20D8 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___0_x;
		G_B1_0 = ((int32_t)(L_0>>2));
		if (((int32_t)(L_1&2)))
		{
			G_B2_0 = ((int32_t)(L_0>>2));
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0010;
	}

IL_000b:
	{
		G_B3_0 = ((int32_t)180);
		G_B3_1 = G_B2_0;
	}

IL_0010:
	{
		int32_t L_2 = ___0_x;
		G_B4_0 = ((int32_t)(G_B3_1^G_B3_0));
		if (((int32_t)(L_2&1)))
		{
			G_B5_0 = ((int32_t)(G_B3_1^G_B3_0));
			goto IL_0019;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_001b;
	}

IL_0019:
	{
		G_B6_0 = ((int32_t)90);
		G_B6_1 = G_B5_0;
	}

IL_001b:
	{
		return ((int32_t)(G_B6_1^G_B6_0));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Mx_X(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Mx_X_m276A1D7929299F6AC4BD0DBED757AAF90640EE1C (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___0_x;
		int32_t L_2;
		L_2 = TwofishEngine_LFSR2_m944E26A3401C2A72441891A56910159D33EF20D8(__this, L_1, NULL);
		return ((int32_t)(L_0^L_2));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Mx_Y(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Mx_Y_m106DF2D7847CEDE451E9DE9E0CCC39BBD4F81539 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___0_x;
		int32_t L_2;
		L_2 = TwofishEngine_LFSR1_mF7196BF8D6C6A853EB8DB230F15B716A50DA6540(__this, L_1, NULL);
		int32_t L_3 = ___0_x;
		int32_t L_4;
		L_4 = TwofishEngine_LFSR2_m944E26A3401C2A72441891A56910159D33EF20D8(__this, L_3, NULL);
		return ((int32_t)(((int32_t)(L_0^L_2))^L_4));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b0_mCA2EF69DA6A621D6F861777A0C043DB2F7CBCD16 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		return ((int32_t)(L_0&((int32_t)255)));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b1_mFAF886CAB10C9E84889934EB8D78455E8159DB8F (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		return ((int32_t)(((int32_t)((uint32_t)L_0>>8))&((int32_t)255)));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b2_mA209CAADF896E142106239B72E68E5FBBE63B0CE (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		return ((int32_t)(((int32_t)((uint32_t)L_0>>((int32_t)16)))&((int32_t)255)));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::M_b3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_M_b3_mA5580BE58EAF0E4B2BC7C6C071FE75A1598798EE (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		return ((int32_t)(((int32_t)((uint32_t)L_0>>((int32_t)24)))&((int32_t)255)));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Fe32_0(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Fe32_0_m9C275C5A14FCD831789EFAE4E80F94ED366220CB (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___gSBox_42;
		int32_t L_1 = ___0_x;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(L_1&((int32_t)255)))));
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___gSBox_42;
		int32_t L_5 = ___0_x;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(1, ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_5>>8))&((int32_t)255)))))));
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___gSBox_42;
		int32_t L_9 = ___0_x;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(((int32_t)512), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_9>>((int32_t)16)))&((int32_t)255)))))));
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___gSBox_42;
		int32_t L_13 = ___0_x;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(((int32_t)513), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_13>>((int32_t)24)))&((int32_t)255)))))));
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)(((int32_t)(((int32_t)(L_3^L_7))^L_11))^L_15));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::Fe32_3(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_Fe32_3_m72DB29FA4222BEA880C9913CE095E41994C7390C (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___gSBox_42;
		int32_t L_1 = ___0_x;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_1>>((int32_t)24)))&((int32_t)255)))));
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___gSBox_42;
		int32_t L_5 = ___0_x;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(1, ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(L_5&((int32_t)255)))))));
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___gSBox_42;
		int32_t L_9 = ___0_x;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(((int32_t)512), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_9>>8))&((int32_t)255)))))));
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->___gSBox_42;
		int32_t L_13 = ___0_x;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(((int32_t)513), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((int32_t)((uint32_t)L_13>>((int32_t)16)))&((int32_t)255)))))));
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)(((int32_t)(((int32_t)(L_3^L_7))^L_11))^L_15));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.TwofishEngine::BytesTo32Bits(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TwofishEngine_BytesTo32Bits_m58D51745F99B9350EBCD139204F678D805143E2E (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_b, int32_t ___1_p, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_b;
		int32_t L_1 = ___1_p;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_b;
		int32_t L_5 = ___1_p;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_b;
		int32_t L_9 = ___1_p;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_b;
		int32_t L_13 = ___1_p;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		uint8_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		return ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_3&((int32_t)255)))|((int32_t)(((int32_t)((int32_t)L_7&((int32_t)255)))<<8))))|((int32_t)(((int32_t)((int32_t)L_11&((int32_t)255)))<<((int32_t)16)))))|((int32_t)(((int32_t)((int32_t)L_15&((int32_t)255)))<<((int32_t)24)))));
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::Bits32ToBytes(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine_Bits32ToBytes_m47C33872DAA2B10E8F86B10604F344119BF40C23 (TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C* __this, int32_t ___0_inData, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_b, int32_t ___2_offset, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_b;
		int32_t L_1 = ___2_offset;
		int32_t L_2 = ___0_inData;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_b;
		int32_t L_4 = ___2_offset;
		int32_t L_5 = ___0_inData;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_5>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_b;
		int32_t L_7 = ___2_offset;
		int32_t L_8 = ___0_inData;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 2))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_8>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___1_b;
		int32_t L_10 = ___2_offset;
		int32_t L_11 = ___0_inData;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_10, 3))), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_11>>((int32_t)24)))));
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.TwofishEngine::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TwofishEngine__cctor_m085FE26A8A600EAFCBF2F3C6DA05E1C09F239820 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____7919EF601386C08FC5EFB981B4A1E478D8413596173FC159B15739E87EE1BA50_130_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)2, (il2cpp_array_size_t)((int32_t)256) };
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_0 = (ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638*)GenArrayNew(ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638_il2cpp_TypeInfo_var, L_1);
		ByteU5BU2CU5D_tFF0F8305C018904B90DCD1740962BABBC458B638* L_2 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____7919EF601386C08FC5EFB981B4A1E478D8413596173FC159B15739E87EE1BA50_130_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_2, L_3, NULL);
		((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_StaticFields*)il2cpp_codegen_static_fields_for(TwofishEngine_t44DD9DA51DAE0686ED2A727287829F21DD6EE84C_il2cpp_TypeInfo_var))->___P_0), (void*)L_2);
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
// System.String Org.BouncyCastle.Crypto.Engines.VmpcEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VmpcEngine_get_AlgorithmName_mD86A7B63582CB0AC31551C58A6C24E79F5ECA9EF (VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1599555C091EE02EB53958FBBB14EE6BC93EB040);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral1599555C091EE02EB53958FBBB14EE6BC93EB040;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.VmpcEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcEngine_Init_mEDF99BE009C242F3F95B9A8E7E57CCC98F8003A7 (VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF* __this, bool ___0_forEncryption, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
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
		RuntimeObject* L_0 = ___1_parameters;
		if (((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)IsInstClass((RuntimeObject*)L_0, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral101B3C75A51196AFDCA86EB43BB5855E80AA199D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VmpcEngine_Init_mEDF99BE009C242F3F95B9A8E7E57CCC98F8003A7_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = ___1_parameters;
		V_0 = ((ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1*)CastclassClass((RuntimeObject*)L_2, ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1_il2cpp_TypeInfo_var));
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_3, NULL);
		if (((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_4, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)))
		{
			goto IL_0032;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE61A524EA8F45BE850EE16F02879615EBF327FD4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VmpcEngine_Init_mEDF99BE009C242F3F95B9A8E7E57CCC98F8003A7_RuntimeMethod_var)));
	}

IL_0032:
	{
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ParametersWithIV_get_Parameters_m1C266D636DF89799E587EBAA0EDCB73952A3F3FB_inline(L_6, NULL);
		V_1 = ((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_7, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var));
		ParametersWithIV_t2E5636D4660FEE6667CF7F4A8E6C7C655377F9F1* L_8 = V_0;
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = ParametersWithIV_GetIV_m421678228FDCD287BAC1CBF0CFB930295CE1D3F7(L_8, NULL);
		__this->___workingIV_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___workingIV_3), (void*)L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___workingIV_3;
		if (!L_10)
		{
			goto IL_006c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___workingIV_3;
		NullCheck(L_11);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))) < ((int32_t)1)))
		{
			goto IL_006c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___workingIV_3;
		NullCheck(L_12);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) <= ((int32_t)((int32_t)768))))
		{
			goto IL_0077;
		}
	}

IL_006c:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00731C2C86C2D15B58ED9A20890E494DBD2AC58B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VmpcEngine_Init_mEDF99BE009C242F3F95B9A8E7E57CCC98F8003A7_RuntimeMethod_var)));
	}

IL_0077:
	{
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_14 = V_1;
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15;
		L_15 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(L_14, NULL);
		__this->___workingKey_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___workingKey_4), (void*)L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___workingKey_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___workingIV_3;
		VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Void Org.BouncyCastle.Crypto.Engines.VmpcEngine::InitKey(System.Byte[],System.Byte[]) */, __this, L_16, L_17);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.VmpcEngine::InitKey(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcEngine_InitKey_mA62AC30E0CC5A0F7E848934B310D2C7F76133E2F (VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_keyBytes, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_ivBytes, const RuntimeMethod* method) 
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
		__this->___s_2 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		__this->___P_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___P_1), (void*)L_0);
		V_0 = 0;
		goto IL_0029;
	}

IL_001b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___P_1;
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
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___P_1;
		uint8_t L_7 = __this->___s_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___P_1;
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
		__this->___s_2 = L_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___P_1;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)(L_20&((int32_t)255)));
		uint8_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_2 = L_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___P_1;
		int32_t L_24 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = __this->___P_1;
		uint8_t L_26 = __this->___s_2;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)((int32_t)L_26&((int32_t)255)));
		uint8_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_24&((int32_t)255)))), (uint8_t)L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = __this->___P_1;
		uint8_t L_30 = __this->___s_2;
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
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___P_1;
		uint8_t L_35 = __this->___s_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___P_1;
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
		__this->___s_2 = L_46;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = __this->___P_1;
		int32_t L_48 = V_3;
		NullCheck(L_47);
		int32_t L_49 = ((int32_t)(L_48&((int32_t)255)));
		uint8_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_4 = L_50;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = __this->___P_1;
		int32_t L_52 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = __this->___P_1;
		uint8_t L_54 = __this->___s_2;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)((int32_t)L_54&((int32_t)255)));
		uint8_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_52&((int32_t)255)))), (uint8_t)L_56);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = __this->___P_1;
		uint8_t L_58 = __this->___s_2;
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
		__this->___n_0 = (uint8_t)0;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.VmpcEngine::ProcessBytes(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcEngine_ProcessBytes_m036D7D9759AE7697E8EB3EFCBA612FB1BE9594D2 (VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_len, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_output, int32_t ___4_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	uint8_t V_2 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_input;
		int32_t L_1 = ___1_inOff;
		int32_t L_2 = ___2_len;
		Check_DataLength_m4BEA4E45985CDB8967A7C3C71799B9036DDCC991(L_0, L_1, L_2, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___3_output;
		int32_t L_4 = ___4_outOff;
		int32_t L_5 = ___2_len;
		Check_OutputLength_mFBD480CE544E8B2C4EFAD3A12D1E105DC36FFA68(L_3, L_4, L_5, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		V_0 = 0;
		goto IL_00f6;
	}

IL_0023:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___P_1;
		uint8_t L_7 = __this->___s_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___P_1;
		uint8_t L_9 = __this->___n_0;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)((int32_t)L_9&((int32_t)255)));
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		int32_t L_12 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_11))&((int32_t)255)));
		uint8_t L_13 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		__this->___s_2 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___P_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___P_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___P_1;
		uint8_t L_17 = __this->___s_2;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)((int32_t)L_17&((int32_t)255)));
		uint8_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_15);
		int32_t L_20 = ((int32_t)((int32_t)L_19&((int32_t)255)));
		uint8_t L_21 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_14);
		int32_t L_22 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_21, 1))&((int32_t)255)));
		uint8_t L_23 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_1 = L_23;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___P_1;
		uint8_t L_25 = __this->___n_0;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)((int32_t)L_25&((int32_t)255)));
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_2 = L_27;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->___P_1;
		uint8_t L_29 = __this->___n_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->___P_1;
		uint8_t L_31 = __this->___s_2;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)((int32_t)L_31&((int32_t)255)));
		uint8_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_29&((int32_t)255)))), (uint8_t)L_33);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = __this->___P_1;
		uint8_t L_35 = __this->___s_2;
		uint8_t L_36 = V_2;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_35&((int32_t)255)))), (uint8_t)L_36);
		uint8_t L_37 = __this->___n_0;
		__this->___n_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_37, 1))&((int32_t)255))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___3_output;
		int32_t L_39 = V_0;
		int32_t L_40 = ___4_outOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = ___0_input;
		int32_t L_42 = V_0;
		int32_t L_43 = ___1_inOff;
		NullCheck(L_41);
		int32_t L_44 = ((int32_t)il2cpp_codegen_add(L_42, L_43));
		uint8_t L_45 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		uint8_t L_46 = V_1;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_39, L_40))), (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_45^(int32_t)L_46))));
		int32_t L_47 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00f6:
	{
		int32_t L_48 = V_0;
		int32_t L_49 = ___2_len;
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_0023;
		}
	}
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.VmpcEngine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcEngine_Reset_m726E23621AEAD861340916222B3DC133ED29E8BA (VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___workingKey_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___workingIV_3;
		VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Void Org.BouncyCastle.Crypto.Engines.VmpcEngine::InitKey(System.Byte[],System.Byte[]) */, __this, L_0, L_1);
		return;
	}
}
// System.Byte Org.BouncyCastle.Crypto.Engines.VmpcEngine::ReturnByte(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t VmpcEngine_ReturnByte_m9C5D418351931D98AF2EABD55AFDA5C44DB5B382 (VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF* __this, uint8_t ___0_input, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	uint8_t V_1 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___P_1;
		uint8_t L_1 = __this->___s_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___P_1;
		uint8_t L_3 = __this->___n_0;
		NullCheck(L_2);
		int32_t L_4 = ((int32_t)((int32_t)L_3&((int32_t)255)));
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		int32_t L_6 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_5))&((int32_t)255)));
		uint8_t L_7 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		__this->___s_2 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___P_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___P_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___P_1;
		uint8_t L_11 = __this->___s_2;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)((int32_t)L_11&((int32_t)255)));
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		int32_t L_14 = ((int32_t)((int32_t)L_13&((int32_t)255)));
		uint8_t L_15 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_8);
		int32_t L_16 = ((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_15, 1))&((int32_t)255)));
		uint8_t L_17 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_0 = L_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___P_1;
		uint8_t L_19 = __this->___n_0;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)((int32_t)L_19&((int32_t)255)));
		uint8_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_1 = L_21;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = __this->___P_1;
		uint8_t L_23 = __this->___n_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___P_1;
		uint8_t L_25 = __this->___s_2;
		NullCheck(L_24);
		int32_t L_26 = ((int32_t)((int32_t)L_25&((int32_t)255)));
		uint8_t L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_23&((int32_t)255)))), (uint8_t)L_27);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = __this->___P_1;
		uint8_t L_29 = __this->___s_2;
		uint8_t L_30 = V_1;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_29&((int32_t)255)))), (uint8_t)L_30);
		uint8_t L_31 = __this->___n_0;
		__this->___n_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_add((int32_t)L_31, 1))&((int32_t)255))));
		uint8_t L_32 = ___0_input;
		uint8_t L_33 = V_0;
		return (uint8_t)((int32_t)(uint8_t)((int32_t)((int32_t)L_32^(int32_t)L_33)));
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.VmpcEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcEngine__ctor_m43337C0F13BBA8BDCB8959F009608B86FF0BC935 (VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF* __this, const RuntimeMethod* method) 
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
// System.String Org.BouncyCastle.Crypto.Engines.VmpcKsa3Engine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VmpcKsa3Engine_get_AlgorithmName_m08112AC1CBA4B1BD0ED210AA53F728A50DF6D187 (VmpcKsa3Engine_t6B40A255ABBC4585FD23E3EB9A16329F6CB62C76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB879F2EF65B4665A454CC69D72CFC0D331A9EB0);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralCB879F2EF65B4665A454CC69D72CFC0D331A9EB0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.VmpcKsa3Engine::InitKey(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcKsa3Engine_InitKey_mE16B14035B27D59D5590F8895A0B4E370A970C31 (VmpcKsa3Engine_t6B40A255ABBC4585FD23E3EB9A16329F6CB62C76* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_keyBytes, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_ivBytes, const RuntimeMethod* method) 
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
	int32_t V_5 = 0;
	uint8_t V_6 = 0x0;
	{
		((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___s_2 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1), (void*)L_0);
		V_0 = 0;
		goto IL_0029;
	}

IL_001b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
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
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		uint8_t L_7 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___s_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
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
		((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___s_2 = L_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = ((int32_t)(L_20&((int32_t)255)));
		uint8_t L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_2 = L_22;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		int32_t L_24 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		uint8_t L_26 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___s_2;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)((int32_t)L_26&((int32_t)255)));
		uint8_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_24&((int32_t)255)))), (uint8_t)L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		uint8_t L_30 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___s_2;
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
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		uint8_t L_35 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___s_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
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
		((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___s_2 = L_46;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		int32_t L_48 = V_3;
		NullCheck(L_47);
		int32_t L_49 = ((int32_t)(L_48&((int32_t)255)));
		uint8_t L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_4 = L_50;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		int32_t L_52 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		uint8_t L_54 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___s_2;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)((int32_t)L_54&((int32_t)255)));
		uint8_t L_56 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_52&((int32_t)255)))), (uint8_t)L_56);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		uint8_t L_58 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___s_2;
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
		V_5 = 0;
		goto IL_01c6;
	}

IL_0146:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		uint8_t L_63 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___s_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)(L_65&((int32_t)255)));
		uint8_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = ___0_keyBytes;
		int32_t L_69 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_70 = ___0_keyBytes;
		NullCheck(L_70);
		NullCheck(L_68);
		int32_t L_71 = ((int32_t)(L_69%((int32_t)(((RuntimeArray*)L_70)->max_length))));
		uint8_t L_72 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_62);
		int32_t L_73 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)L_67)), (int32_t)L_72))&((int32_t)255)));
		uint8_t L_74 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___s_2 = L_74;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		int32_t L_76 = V_5;
		NullCheck(L_75);
		int32_t L_77 = ((int32_t)(L_76&((int32_t)255)));
		uint8_t L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		V_6 = L_78;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_79 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		int32_t L_80 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		uint8_t L_82 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___s_2;
		NullCheck(L_81);
		int32_t L_83 = ((int32_t)((int32_t)L_82&((int32_t)255)));
		uint8_t L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_80&((int32_t)255)))), (uint8_t)L_84);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___P_1;
		uint8_t L_86 = ((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___s_2;
		uint8_t L_87 = V_6;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_86&((int32_t)255)))), (uint8_t)L_87);
		int32_t L_88 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_88, 1));
	}

IL_01c6:
	{
		int32_t L_89 = V_5;
		if ((((int32_t)L_89) < ((int32_t)((int32_t)768))))
		{
			goto IL_0146;
		}
	}
	{
		((VmpcEngine_t4ECDA57150BC0F903F0BA36D017BBAA342F3E2AF*)__this)->___n_0 = (uint8_t)0;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.VmpcKsa3Engine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VmpcKsa3Engine__ctor_m63554DF05DFACB133C69A07AD96CCA052C92352E (VmpcKsa3Engine_t6B40A255ABBC4585FD23E3EB9A16329F6CB62C76* __this, const RuntimeMethod* method) 
{
	{
		VmpcEngine__ctor_m43337C0F13BBA8BDCB8959F009608B86FF0BC935(__this, NULL);
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
// System.String Org.BouncyCastle.Crypto.Engines.XSalsa20Engine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XSalsa20Engine_get_AlgorithmName_m904176A0283A0DA8D9EF8939FE3CE749CD17D5FA (XSalsa20Engine_tDF36BD3BD165A1B1D6E28DFE5D17C69A072F5EDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC89858D824AC4A3F2216B74EEFEA4A867D131078);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralC89858D824AC4A3F2216B74EEFEA4A867D131078;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.XSalsa20Engine::get_NonceSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XSalsa20Engine_get_NonceSize_mE8D9F8157BB82FD57A4F20EB58A9F3704C38A023 (XSalsa20Engine_tDF36BD3BD165A1B1D6E28DFE5D17C69A072F5EDD* __this, const RuntimeMethod* method) 
{
	{
		return ((int32_t)24);
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.XSalsa20Engine::SetKey(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XSalsa20Engine_SetKey_mC4921500383B53B0CC5C3E9B7E0BE0EE67C271FB (XSalsa20Engine_tDF36BD3BD165A1B1D6E28DFE5D17C69A072F5EDD* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_keyBytes, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_ivBytes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_keyBytes;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String Org.BouncyCastle.Crypto.Engines.Salsa20Engine::get_AlgorithmName() */, __this);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5F1F4A58853B31A2075544F5A704FD9361EB7986)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XSalsa20Engine_SetKey_mC4921500383B53B0CC5C3E9B7E0BE0EE67C271FB_RuntimeMethod_var)));
	}

IL_0019:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_keyBytes;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)((int32_t)32))))
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(11 /* System.String Org.BouncyCastle.Crypto.Engines.Salsa20Engine::get_AlgorithmName() */, __this);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral83298FB9C35B736FC1AE3C68DC4C4157F50AD0C4)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XSalsa20Engine_SetKey_mC4921500383B53B0CC5C3E9B7E0BE0EE67C271FB_RuntimeMethod_var)));
	}

IL_0036:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_keyBytes;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___1_ivBytes;
		Salsa20Engine_SetKey_m5A207350D464828EECE769D3778C7E6C5FB88075(__this, L_8, L_9, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___1_ivBytes;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		Pack_LE_To_UInt32_m59119A982E3E4FC20ADEA37F2CD9781D26237762(L_10, 8, L_11, 8, 2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		NullCheck(L_12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)));
		V_0 = L_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4_il2cpp_TypeInfo_var);
		Salsa20Engine_SalsaCore_m5E6BFCF8DC6865F0B593D01E72DB23824383B246(((int32_t)20), L_14, L_15, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = 0;
		uint32_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		NullCheck(L_20);
		int32_t L_21 = 0;
		uint32_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)L_22)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25 = 5;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		NullCheck(L_27);
		int32_t L_28 = 5;
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)L_29)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = ((int32_t)10);
		uint32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		NullCheck(L_34);
		int32_t L_35 = ((int32_t)10);
		uint32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)L_36)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = V_0;
		NullCheck(L_38);
		int32_t L_39 = ((int32_t)15);
		uint32_t L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		NullCheck(L_41);
		int32_t L_42 = ((int32_t)15);
		uint32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)L_43)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = V_0;
		NullCheck(L_45);
		int32_t L_46 = 6;
		uint32_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		NullCheck(L_48);
		int32_t L_49 = 6;
		uint32_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_47, (int32_t)L_50)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_0;
		NullCheck(L_52);
		int32_t L_53 = 7;
		uint32_t L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		NullCheck(L_55);
		int32_t L_56 = 7;
		uint32_t L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_54, (int32_t)L_57)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = V_0;
		NullCheck(L_59);
		int32_t L_60 = 8;
		uint32_t L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		NullCheck(L_62);
		int32_t L_63 = 8;
		uint32_t L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_61, (int32_t)L_64)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = V_0;
		NullCheck(L_66);
		int32_t L_67 = ((int32_t)9);
		uint32_t L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		NullCheck(L_69);
		int32_t L_70 = ((int32_t)9);
		uint32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_68, (int32_t)L_71)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_72 = ___1_ivBytes;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = ((Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4*)__this)->___engineState_7;
		Pack_LE_To_UInt32_m59119A982E3E4FC20ADEA37F2CD9781D26237762(L_72, ((int32_t)16), L_73, 6, 2, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.XSalsa20Engine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XSalsa20Engine__ctor_mD2E588306D1C006ADACE29A82A90281DC887552E (XSalsa20Engine_tDF36BD3BD165A1B1D6E28DFE5D17C69A072F5EDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Salsa20Engine_t825CE724137A567266E1D520C73EEB6D1326A3A4_il2cpp_TypeInfo_var);
		Salsa20Engine__ctor_m6186F6D389AB34128725472CB335394AAD2504A5(__this, NULL);
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
// System.Void Org.BouncyCastle.Crypto.Engines.XteaEngine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XteaEngine__ctor_m37569EF08021FAF999D373BD5240A003A7D1D365 (XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->____S_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____S_3), (void*)L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->____sum0_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sum0_4), (void*)L_1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		__this->____sum1_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____sum1_5), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->____initialised_6 = (bool)0;
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Engines.XteaEngine::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XteaEngine_get_AlgorithmName_mE5D0CE5AA2E393BB9124D1FB51CC03FFE7617C35 (XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78DCF8BE751904E2F2302AEBBAF7BA625943E2EB);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral78DCF8BE751904E2F2302AEBBAF7BA625943E2EB;
	}
}
// System.Boolean Org.BouncyCastle.Crypto.Engines.XteaEngine::get_IsPartialBlockOkay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XteaEngine_get_IsPartialBlockOkay_m44889DE9BA389A840E5ADC60B41A60C34A1F1E26 (XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.XteaEngine::GetBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XteaEngine_GetBlockSize_m442C9752D80977A56FCE879EB85E803EF93AD2D3 (XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1* __this, const RuntimeMethod* method) 
{
	{
		return 8;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.XteaEngine::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XteaEngine_Init_mEA7D4FE490AAB2C0510ADC42F12DC53D153150F8 (XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1* __this, bool ___0_forEncryption, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___1_parameters;
		if (((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)IsInstClass((RuntimeObject*)L_0, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		RuntimeObject* L_1 = ___1_parameters;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var)));
		String_t* L_2;
		L_2 = Platform_GetTypeName_m9B04679202710BC6A96803803882849D0C5001FB(L_1, NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD187D665853B8D7EA2432DDF6CBF2E65DC3BA81D)), L_2, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XteaEngine_Init_mEA7D4FE490AAB2C0510ADC42F12DC53D153150F8_RuntimeMethod_var)));
	}

IL_001e:
	{
		bool L_5 = ___0_forEncryption;
		__this->____forEncryption_7 = L_5;
		__this->____initialised_6 = (bool)1;
		RuntimeObject* L_6 = ___1_parameters;
		V_0 = ((KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC*)CastclassClass((RuntimeObject*)L_6, KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC_il2cpp_TypeInfo_var));
		KeyParameter_t7D587C2F307143922D40A45566DDA5FAF8368BEC* L_7 = V_0;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = KeyParameter_GetKey_m18BD6A45C96A3E256777932CC593D65046B64B16(L_7, NULL);
		XteaEngine_setKey_m8BCBA67E34F08B18F2566802F6979118F628F5A2(__this, L_8, NULL);
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.XteaEngine::ProcessBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XteaEngine_ProcessBlock_mA56C7529E825AE5B9D3E8B955CCC39A6AEB8939E (XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inBytes, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_outBytes, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____initialised_6;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(10 /* System.String Org.BouncyCastle.Crypto.Engines.XteaEngine::get_AlgorithmName() */, __this);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF54C61EA654A453F853B81CE072DEC048FBB4991)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XteaEngine_ProcessBlock_mA56C7529E825AE5B9D3E8B955CCC39A6AEB8939E_RuntimeMethod_var)));
	}

IL_001e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_inBytes;
		int32_t L_5 = ___1_inOff;
		Check_DataLength_m4BEA4E45985CDB8967A7C3C71799B9036DDCC991(L_4, L_5, 8, _stringLiteralB4B7C0DD1031D01D1D525A2AFE11B0C544BA74ED, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___2_outBytes;
		int32_t L_7 = ___3_outOff;
		Check_OutputLength_mFBD480CE544E8B2C4EFAD3A12D1E105DC36FFA68(L_6, L_7, 8, _stringLiteral2F851A80AFDF46DB1A689F30C8AD9B5960FA47F2, NULL);
		bool L_8 = __this->____forEncryption_7;
		if (L_8)
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_inBytes;
		int32_t L_10 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___2_outBytes;
		int32_t L_12 = ___3_outOff;
		int32_t L_13;
		L_13 = XteaEngine_decryptBlock_m22FB75AAD4FB6D59D1BA53804B6A56A1CC554FE1(__this, L_9, L_10, L_11, L_12, NULL);
		return L_13;
	}

IL_004d:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_inBytes;
		int32_t L_15 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___2_outBytes;
		int32_t L_17 = ___3_outOff;
		int32_t L_18;
		L_18 = XteaEngine_encryptBlock_mFC8FF0B5F771AF8E873C34AED6659A7B25B0BBFD(__this, L_14, L_15, L_16, L_17, NULL);
		return L_18;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.XteaEngine::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XteaEngine_Reset_m20D0C9AE6988941EA5DF059BC8148A86AB052EBD (XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Engines.XteaEngine::setKey(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XteaEngine_setKey_m8BCBA67E34F08B18F2566802F6979118F628F5A2 (XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = 0;
		V_1 = L_0;
		V_0 = L_0;
		goto IL_001d;
	}

IL_0006:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = __this->____S_3;
		int32_t L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_key;
		int32_t L_4 = V_1;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_m6FD7E3B8014FC134F0CE2EA18C7DCD8C9EF64B63(L_3, L_4, NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint32_t)L_5);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 4));
	}

IL_001d:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)4)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_9 = 0;
		V_1 = L_9;
		V_0 = L_9;
		goto IL_005e;
	}

IL_0027:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->____sum0_4;
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = __this->____S_3;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)(L_14&3));
		uint32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (uint32_t)((int32_t)il2cpp_codegen_add(L_12, (int32_t)L_16)));
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, ((int32_t)-1640531527)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = __this->____sum1_5;
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = __this->____S_3;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)(((int32_t)(L_22>>((int32_t)11)))&3));
		uint32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (uint32_t)((int32_t)il2cpp_codegen_add(L_20, (int32_t)L_24)));
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_005e:
	{
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) < ((int32_t)((int32_t)32))))
		{
			goto IL_0027;
		}
	}
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.XteaEngine::encryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XteaEngine_encryptBlock_mFC8FF0B5F771AF8E873C34AED6659A7B25B0BBFD (XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inBytes, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_outBytes, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_inBytes;
		int32_t L_1 = ___1_inOff;
		uint32_t L_2;
		L_2 = Pack_BE_To_UInt32_m6FD7E3B8014FC134F0CE2EA18C7DCD8C9EF64B63(L_0, L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_inBytes;
		int32_t L_4 = ___1_inOff;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_m6FD7E3B8014FC134F0CE2EA18C7DCD8C9EF64B63(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		V_1 = L_5;
		V_2 = 0;
		goto IL_0044;
	}

IL_0016:
	{
		uint32_t L_6 = V_0;
		uint32_t L_7 = V_1;
		uint32_t L_8 = V_1;
		uint32_t L_9 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->____sum0_4;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_7<<4))^((int32_t)((uint32_t)L_8>>5)))), (int32_t)L_9))^(int32_t)L_13))));
		uint32_t L_14 = V_1;
		uint32_t L_15 = V_0;
		uint32_t L_16 = V_0;
		uint32_t L_17 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = __this->____sum1_5;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_15<<4))^((int32_t)((uint32_t)L_16>>5)))), (int32_t)L_17))^(int32_t)L_21))));
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0044:
	{
		int32_t L_23 = V_2;
		if ((((int32_t)L_23) < ((int32_t)((int32_t)32))))
		{
			goto IL_0016;
		}
	}
	{
		uint32_t L_24 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___2_outBytes;
		int32_t L_26 = ___3_outOff;
		Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB(L_24, L_25, L_26, NULL);
		uint32_t L_27 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___2_outBytes;
		int32_t L_29 = ___3_outOff;
		Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB(L_27, L_28, ((int32_t)il2cpp_codegen_add(L_29, 4)), NULL);
		return 8;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Engines.XteaEngine::decryptBlock(System.Byte[],System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XteaEngine_decryptBlock_m22FB75AAD4FB6D59D1BA53804B6A56A1CC554FE1 (XteaEngine_tAF4331F71956D81367CFFAB154698EB341245AB1* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inBytes, int32_t ___1_inOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_outBytes, int32_t ___3_outOff, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_inBytes;
		int32_t L_1 = ___1_inOff;
		uint32_t L_2;
		L_2 = Pack_BE_To_UInt32_m6FD7E3B8014FC134F0CE2EA18C7DCD8C9EF64B63(L_0, L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_inBytes;
		int32_t L_4 = ___1_inOff;
		uint32_t L_5;
		L_5 = Pack_BE_To_UInt32_m6FD7E3B8014FC134F0CE2EA18C7DCD8C9EF64B63(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		V_1 = L_5;
		V_2 = ((int32_t)31);
		goto IL_0045;
	}

IL_0017:
	{
		uint32_t L_6 = V_1;
		uint32_t L_7 = V_0;
		uint32_t L_8 = V_0;
		uint32_t L_9 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = __this->____sum1_5;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint32_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_7<<4))^((int32_t)((uint32_t)L_8>>5)))), (int32_t)L_9))^(int32_t)L_13))));
		uint32_t L_14 = V_0;
		uint32_t L_15 = V_1;
		uint32_t L_16 = V_1;
		uint32_t L_17 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = __this->____sum0_4;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		uint32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)((int32_t)L_15<<4))^((int32_t)((uint32_t)L_16>>5)))), (int32_t)L_17))^(int32_t)L_21))));
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
	}

IL_0045:
	{
		int32_t L_23 = V_2;
		if ((((int32_t)L_23) >= ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		uint32_t L_24 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___2_outBytes;
		int32_t L_26 = ___3_outOff;
		Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB(L_24, L_25, L_26, NULL);
		uint32_t L_27 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___2_outBytes;
		int32_t L_29 = ___3_outOff;
		Pack_UInt32_To_BE_m647154FFADA03F6C9EEAE9A94480729B9757EFAB(L_27, L_28, ((int32_t)il2cpp_codegen_add(L_29, 4)), NULL);
		return 8;
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
// System.Void Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO9796d1Encoding__ctor_m4B1313770B13C66D5E593E4CC93BCEB25D5366D6 (ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC* __this, RuntimeObject* ___0_cipher, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_cipher;
		__this->___engine_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___engine_4), (void*)L_0);
		return;
	}
}
// System.String Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ISO9796d1Encoding_get_AlgorithmName_m17CE34880972AAD17E919A3501AA7FF4CAD4204A (ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FF13600614C606C2C24DA56CFA5376483D30C59);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___engine_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IAsymmetricBlockCipher::get_AlgorithmName() */, IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteral7FF13600614C606C2C24DA56CFA5376483D30C59, NULL);
		return L_2;
	}
}
// Org.BouncyCastle.Crypto.IAsymmetricBlockCipher Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::GetUnderlyingCipher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ISO9796d1Encoding_GetUnderlyingCipher_mEEB0739959FF0867CB8077F1E427831D415B4772 (ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___engine_4;
		return L_0;
	}
}
// System.Void Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO9796d1Encoding_Init_mF1A3DA3BD9A52ACDA9DB9D571A2A71E5A08642F4 (ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC* __this, bool ___0_forEncryption, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___1_parameters;
		if (!((ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5*)IsInstClass((RuntimeObject*)L_0, ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var)))
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = ___1_parameters;
		NullCheck(((ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5*)CastclassClass((RuntimeObject*)L_1, ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var)));
		RuntimeObject* L_2;
		L_2 = ParametersWithRandom_get_Parameters_mFED49C45204261ACF08DC4617FC59E9025C5DA8E_inline(((ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5*)CastclassClass((RuntimeObject*)L_1, ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var)), NULL);
		V_0 = ((RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B*)CastclassClass((RuntimeObject*)L_2, RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B_il2cpp_TypeInfo_var));
		goto IL_0022;
	}

IL_001b:
	{
		RuntimeObject* L_3 = ___1_parameters;
		V_0 = ((RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B*)CastclassClass((RuntimeObject*)L_3, RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B_il2cpp_TypeInfo_var));
	}

IL_0022:
	{
		RuntimeObject* L_4 = __this->___engine_4;
		bool L_5 = ___0_forEncryption;
		RuntimeObject* L_6 = ___1_parameters;
		NullCheck(L_4);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IAsymmetricBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var, L_4, L_5, L_6);
		RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* L_7 = V_0;
		NullCheck(L_7);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_8;
		L_8 = RsaKeyParameters_get_Modulus_m4DE7784F2CBD8201D9B01EDA3269965502AE5CAB_inline(L_7, NULL);
		__this->___modulus_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___modulus_8), (void*)L_8);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_9 = __this->___modulus_8;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = BigInteger_get_BitLength_mC0BC0654110E120C54FC581C8F31284C226CDBDE(L_9, NULL);
		__this->___bitSize_6 = L_10;
		bool L_11 = ___0_forEncryption;
		__this->___forEncryption_5 = L_11;
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::GetInputBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO9796d1Encoding_GetInputBlockSize_mE2BC4E912C417DEB50AECE396E365B069C75313E (ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->___engine_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IAsymmetricBlockCipher::GetInputBlockSize() */, IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		bool L_2 = __this->___forEncryption_5;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		return ((int32_t)(((int32_t)il2cpp_codegen_add(L_3, 1))/2));
	}

IL_001a:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::GetOutputBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO9796d1Encoding_GetOutputBlockSize_m4C628D258326D638B1C59DA9C345A419476879AF (ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->___engine_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Org.BouncyCastle.Crypto.IAsymmetricBlockCipher::GetOutputBlockSize() */, IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		bool L_2 = __this->___forEncryption_5;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		return L_3;
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		return ((int32_t)(((int32_t)il2cpp_codegen_add(L_4, 1))/2));
	}
}
// System.Void Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::SetPadBits(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO9796d1Encoding_SetPadBits_m7A8D8B05BF8F4A64EC2EE395BB3D3944DE0EA0F4 (ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC* __this, int32_t ___0_padBits, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_padBits;
		if ((((int32_t)L_0) <= ((int32_t)7)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBA7BCF9AE5E78AB0B6EC8121BFF8B61517C067E0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISO9796d1Encoding_SetPadBits_m7A8D8B05BF8F4A64EC2EE395BB3D3944DE0EA0F4_RuntimeMethod_var)));
	}

IL_000f:
	{
		int32_t L_2 = ___0_padBits;
		__this->___padBits_7 = L_2;
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::GetPadBits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ISO9796d1Encoding_GetPadBits_mBA1CC97C94D80C874048299B47FEC34FEF140B9D (ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___padBits_7;
		return L_0;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::ProcessBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ISO9796d1Encoding_ProcessBlock_m79794984A6D4ED8977061D02B78DE845924E4C91 (ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___forEncryption_5;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_input;
		int32_t L_2 = ___1_inOff;
		int32_t L_3 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = ISO9796d1Encoding_EncodeBlock_m0E88DD24EF7507028D5B538E90BEAC02EA8E11DB(__this, L_1, L_2, L_3, NULL);
		return L_4;
	}

IL_0012:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_input;
		int32_t L_6 = ___1_inOff;
		int32_t L_7 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = ISO9796d1Encoding_DecodeBlock_m6DCE0AC7024D29BD5656D486E9D8589A6DF08AC8(__this, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::EncodeBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ISO9796d1Encoding_EncodeBlock_m0E88DD24EF7507028D5B538E90BEAC02EA8E11DB (ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_inLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	uint8_t V_8 = 0x0;
	{
		int32_t L_0 = __this->___bitSize_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_add(L_0, 7))/8)));
		V_0 = L_1;
		int32_t L_2 = __this->___padBits_7;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = ___2_inLen;
		V_2 = L_3;
		int32_t L_4 = __this->___bitSize_6;
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_4, ((int32_t)13)))/((int32_t)16)));
		V_6 = 0;
		goto IL_0065;
	}

IL_002d:
	{
		int32_t L_5 = V_6;
		int32_t L_6 = V_3;
		int32_t L_7 = V_2;
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7)))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_input;
		int32_t L_9 = ___1_inOff;
		int32_t L_10 = ___2_inLen;
		int32_t L_11 = V_3;
		int32_t L_12 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = V_3;
		int32_t L_16 = V_3;
		int32_t L_17 = V_6;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_9, L_10)), ((int32_t)il2cpp_codegen_subtract(L_11, L_12)))), (RuntimeArray*)L_13, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_14)->max_length)), L_15)), ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
		goto IL_005f;
	}

IL_004e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___0_input;
		int32_t L_19 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = V_6;
		int32_t L_23 = V_2;
		int32_t L_24 = V_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_18, L_19, (RuntimeArray*)L_20, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_21)->max_length)), ((int32_t)il2cpp_codegen_add(L_22, L_23)))), L_24, NULL);
	}

IL_005f:
	{
		int32_t L_25 = V_6;
		int32_t L_26 = V_2;
		V_6 = ((int32_t)il2cpp_codegen_add(L_25, L_26));
	}

IL_0065:
	{
		int32_t L_27 = V_6;
		int32_t L_28 = V_3;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_002d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = V_3;
		V_7 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_29)->max_length)), ((int32_t)il2cpp_codegen_multiply(2, L_30))));
		goto IL_00b4;
	}

IL_0075:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33 = V_3;
		int32_t L_34 = V_7;
		NullCheck(L_31);
		int32_t L_35 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_32)->max_length)), L_33)), ((int32_t)(L_34/2))));
		uint8_t L_36 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_8 = L_36;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_0;
		int32_t L_38 = V_7;
		il2cpp_codegen_runtime_class_init_inline(ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = ((ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_StaticFields*)il2cpp_codegen_static_fields_for(ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var))->___shadows_2;
		uint8_t L_40 = V_8;
		NullCheck(L_39);
		int32_t L_41 = ((int32_t)((uint32_t)((int32_t)((int32_t)L_40&((int32_t)255)))>>4));
		uint8_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = ((ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_StaticFields*)il2cpp_codegen_static_fields_for(ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var))->___shadows_2;
		uint8_t L_44 = V_8;
		NullCheck(L_43);
		int32_t L_45 = ((int32_t)((int32_t)L_44&((int32_t)15)));
		uint8_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_42<<4))|(int32_t)L_46))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = V_0;
		int32_t L_48 = V_7;
		uint8_t L_49 = V_8;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_48, 1))), (uint8_t)L_49);
		int32_t L_50 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_50, 2));
	}

IL_00b4:
	{
		int32_t L_51 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_0;
		NullCheck(L_52);
		if ((!(((uint32_t)L_51) == ((uint32_t)((int32_t)(((RuntimeArray*)L_52)->max_length))))))
		{
			goto IL_0075;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_0;
		NullCheck(L_54);
		int32_t L_55 = V_2;
		NullCheck(L_53);
		uint8_t* L_56 = ((L_53)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_54)->max_length)), ((int32_t)il2cpp_codegen_multiply(2, L_55)))))));
		int32_t L_57 = *((uint8_t*)L_56);
		int32_t L_58 = V_1;
		*((int8_t*)L_56) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_57^((int32_t)(uint8_t)L_58))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = V_0;
		NullCheck(L_60);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = V_0;
		NullCheck(L_62);
		NullCheck(L_61);
		int32_t L_63 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_62)->max_length)), 1));
		uint8_t L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_60)->max_length)), 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_64<<4))|6))));
		int32_t L_65 = __this->___bitSize_6;
		V_4 = ((int32_t)il2cpp_codegen_subtract(8, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_65, 1))%8))));
		V_5 = 0;
		int32_t L_66 = V_4;
		if ((((int32_t)L_66) == ((int32_t)8)))
		{
			goto IL_012a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = V_0;
		NullCheck(L_67);
		uint8_t* L_68 = ((L_67)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_69 = *((uint8_t*)L_68);
		int32_t L_70 = V_4;
		*((int8_t*)L_68) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_69&((int32_t)(uint8_t)((int32_t)(((int32_t)255)>>((int32_t)(L_70&((int32_t)31)))))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = V_0;
		NullCheck(L_71);
		uint8_t* L_72 = ((L_71)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_73 = *((uint8_t*)L_72);
		int32_t L_74 = V_4;
		*((int8_t*)L_72) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_73|((int32_t)(uint8_t)((int32_t)(((int32_t)128)>>((int32_t)(L_74&((int32_t)31)))))))));
		goto IL_0142;
	}

IL_012a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_75 = V_0;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_76 = V_0;
		NullCheck(L_76);
		uint8_t* L_77 = ((L_76)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)));
		int32_t L_78 = *((uint8_t*)L_77);
		*((int8_t*)L_77) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_78|((int32_t)128))));
		V_5 = 1;
	}

IL_0142:
	{
		RuntimeObject* L_79 = __this->___engine_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = V_0;
		int32_t L_81 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_82 = V_0;
		NullCheck(L_82);
		int32_t L_83 = V_5;
		NullCheck(L_79);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_84;
		L_84 = InterfaceFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Byte[] Org.BouncyCastle.Crypto.IAsymmetricBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Int32) */, IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var, L_79, L_80, L_81, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_82)->max_length)), L_83)));
		return L_84;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::DecodeBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ISO9796d1Encoding_DecodeBlock_m6DCE0AC7024D29BD5656D486E9D8589A6DF08AC8 (ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_inLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_3 = NULL;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		RuntimeObject* L_0 = __this->___engine_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_input;
		int32_t L_2 = ___1_inOff;
		int32_t L_3 = ___2_inLen;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = InterfaceFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Byte[] Org.BouncyCastle.Crypto.IAsymmetricBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Int32) */, IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		V_0 = L_4;
		V_1 = 1;
		int32_t L_5 = __this->___bitSize_6;
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_5, ((int32_t)13)))/((int32_t)16)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_7 = (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)il2cpp_codegen_object_new(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		BigInteger__ctor_m5DA4C1B40BD125805911D274F49DA04D1175A5BD(L_7, 1, L_6, NULL);
		V_3 = L_7;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_8 = V_3;
		il2cpp_codegen_runtime_class_init_inline(ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_9 = ((ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_StaticFields*)il2cpp_codegen_static_fields_for(ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var))->___Sixteen_0;
		NullCheck(L_8);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_10;
		L_10 = BigInteger_Mod_mB43D106CC9B09184498FF09EEB439A2790CE91F3(L_8, L_9, NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_11 = ((ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_StaticFields*)il2cpp_codegen_static_fields_for(ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var))->___Six_1;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_10, L_11);
		if (!L_12)
		{
			goto IL_0042;
		}
	}
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_13 = V_3;
		V_4 = L_13;
		goto IL_0073;
	}

IL_0042:
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_14 = __this->___modulus_8;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_15 = V_3;
		NullCheck(L_14);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_16;
		L_16 = BigInteger_Subtract_mAF6078F797541D51F7E9D25D4C8A0F79DC8E9CEC(L_14, L_15, NULL);
		V_4 = L_16;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_17 = V_4;
		il2cpp_codegen_runtime_class_init_inline(ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_18 = ((ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_StaticFields*)il2cpp_codegen_static_fields_for(ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var))->___Sixteen_0;
		NullCheck(L_17);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_19;
		L_19 = BigInteger_Mod_mB43D106CC9B09184498FF09EEB439A2790CE91F3(L_17, L_18, NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_20 = ((ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_StaticFields*)il2cpp_codegen_static_fields_for(ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var))->___Six_1;
		NullCheck(L_19);
		bool L_21;
		L_21 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_19, L_20);
		if (L_21)
		{
			goto IL_0073;
		}
	}
	{
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_22 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1901531392D4D06B4EAE345EA607F19497305607)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISO9796d1Encoding_DecodeBlock_m6DCE0AC7024D29BD5656D486E9D8589A6DF08AC8_RuntimeMethod_var)));
	}

IL_0073:
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_23 = V_4;
		NullCheck(L_23);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = BigInteger_ToByteArrayUnsigned_m851F34EB4990FB95CAA13F23E16D1774E0B26FA6(L_23, NULL);
		V_0 = L_24;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_0;
		NullCheck(L_26);
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_26)->max_length)), 1));
		uint8_t L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		if ((((int32_t)((int32_t)((int32_t)L_28&((int32_t)15)))) == ((int32_t)6)))
		{
			goto IL_0093;
		}
	}
	{
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_29 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		NullCheck(L_29);
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_29, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC0C69B3D70DB13EA1E9F81C663CDCE39841EEDDC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISO9796d1Encoding_DecodeBlock_m6DCE0AC7024D29BD5656D486E9D8589A6DF08AC8_RuntimeMethod_var)));
	}

IL_0093:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_0;
		NullCheck(L_31);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_0;
		NullCheck(L_33);
		NullCheck(L_32);
		int32_t L_34 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_33)->max_length)), 1));
		uint8_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		il2cpp_codegen_runtime_class_init_inline(ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ((ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_StaticFields*)il2cpp_codegen_static_fields_for(ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var))->___inverse_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_0;
		NullCheck(L_38);
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_38)->max_length)), 2));
		uint8_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		NullCheck(L_36);
		int32_t L_41 = ((int32_t)(((int32_t)((int32_t)L_40&((int32_t)255)))>>4));
		uint8_t L_42 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_31)->max_length)), 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)(((int32_t)(uint16_t)((int32_t)((int32_t)L_35&((int32_t)255))))>>4))|((int32_t)((int32_t)L_42<<4))))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = ((ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_StaticFields*)il2cpp_codegen_static_fields_for(ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var))->___shadows_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_0;
		NullCheck(L_45);
		int32_t L_46 = 1;
		uint8_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_44);
		int32_t L_48 = ((int32_t)((uint32_t)((int32_t)((int32_t)L_47&((int32_t)255)))>>4));
		uint8_t L_49 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ((ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_StaticFields*)il2cpp_codegen_static_fields_for(ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var))->___shadows_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_51 = V_0;
		NullCheck(L_51);
		int32_t L_52 = 1;
		uint8_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_50);
		int32_t L_54 = ((int32_t)((int32_t)L_53&((int32_t)15)));
		uint8_t L_55 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_49<<4))|(int32_t)L_55))));
		V_5 = (bool)0;
		V_6 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_0;
		NullCheck(L_56);
		V_8 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_56)->max_length)), 1));
		goto IL_015b;
	}

IL_00f6:
	{
		il2cpp_codegen_runtime_class_init_inline(ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = ((ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_StaticFields*)il2cpp_codegen_static_fields_for(ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var))->___shadows_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = V_0;
		int32_t L_59 = V_8;
		NullCheck(L_58);
		int32_t L_60 = L_59;
		uint8_t L_61 = (L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		NullCheck(L_57);
		int32_t L_62 = ((int32_t)((uint32_t)((int32_t)((int32_t)L_61&((int32_t)255)))>>4));
		uint8_t L_63 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = ((ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_StaticFields*)il2cpp_codegen_static_fields_for(ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var))->___shadows_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = V_0;
		int32_t L_66 = V_8;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		uint8_t L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		NullCheck(L_64);
		int32_t L_69 = ((int32_t)((int32_t)L_68&((int32_t)15)));
		uint8_t L_70 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		V_9 = ((int32_t)(((int32_t)((int32_t)L_63<<4))|(int32_t)L_70));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = V_0;
		int32_t L_72 = V_8;
		NullCheck(L_71);
		int32_t L_73 = ((int32_t)il2cpp_codegen_subtract(L_72, 1));
		uint8_t L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		int32_t L_75 = V_9;
		if (!((int32_t)(((int32_t)((int32_t)L_74^L_75))&((int32_t)255))))
		{
			goto IL_0155;
		}
	}
	{
		bool L_76 = V_5;
		if (L_76)
		{
			goto IL_014a;
		}
	}
	{
		V_5 = (bool)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_77 = V_0;
		int32_t L_78 = V_8;
		NullCheck(L_77);
		int32_t L_79 = ((int32_t)il2cpp_codegen_subtract(L_78, 1));
		uint8_t L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		int32_t L_81 = V_9;
		V_1 = ((int32_t)(((int32_t)((int32_t)L_80^L_81))&((int32_t)255)));
		int32_t L_82 = V_8;
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_82, 1));
		goto IL_0155;
	}

IL_014a:
	{
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_83 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		NullCheck(L_83);
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_83, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral33C188DAF3C5E4DE065FAE37222A765402587199)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_83, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ISO9796d1Encoding_DecodeBlock_m6DCE0AC7024D29BD5656D486E9D8589A6DF08AC8_RuntimeMethod_var)));
	}

IL_0155:
	{
		int32_t L_84 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_84, 2));
	}

IL_015b:
	{
		int32_t L_85 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_86 = V_0;
		NullCheck(L_86);
		int32_t L_87 = V_2;
		if ((((int32_t)L_85) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_86)->max_length)), ((int32_t)il2cpp_codegen_multiply(2, L_87)))))))
		{
			goto IL_00f6;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = V_0;
		int32_t L_89 = V_6;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(L_89), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = V_0;
		NullCheck(L_90);
		int32_t L_91 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_92 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_90)->max_length)), L_91))/2)));
		V_7 = L_92;
		V_10 = 0;
		goto IL_0195;
	}

IL_017f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = V_7;
		int32_t L_94 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = V_0;
		int32_t L_96 = V_10;
		int32_t L_97 = V_6;
		NullCheck(L_95);
		int32_t L_98 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, L_96)), L_97)), 1));
		uint8_t L_99 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		NullCheck(L_93);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(L_94), (uint8_t)L_99);
		int32_t L_100 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0195:
	{
		int32_t L_101 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_102 = V_7;
		NullCheck(L_102);
		if ((((int32_t)L_101) < ((int32_t)((int32_t)(((RuntimeArray*)L_102)->max_length)))))
		{
			goto IL_017f;
		}
	}
	{
		int32_t L_103 = V_1;
		__this->___padBits_7 = ((int32_t)il2cpp_codegen_subtract(L_103, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_104 = V_7;
		return L_104;
	}
}
// System.Void Org.BouncyCastle.Crypto.Encodings.ISO9796d1Encoding::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ISO9796d1Encoding__cctor_m38C8FAD02243CDF003C9316865E4ED35469D2A7B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____712618256BB5287925AAF70FA8EA2EBFFB72DF72B5D29A339CC9B8DB464EFC14_121_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____A80010A555E14F5B5B3D967E0F1621742AC2048F40EBF73EB76AD8991448EE21_185_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0;
		L_0 = BigInteger_ValueOf_mC471D30E47D935710EF0E6847A39ADD6F11D6680(((int64_t)((int32_t)16)), NULL);
		((ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_StaticFields*)il2cpp_codegen_static_fields_for(ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var))->___Sixteen_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_StaticFields*)il2cpp_codegen_static_fields_for(ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var))->___Sixteen_0), (void*)L_0);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_1;
		L_1 = BigInteger_ValueOf_mC471D30E47D935710EF0E6847A39ADD6F11D6680(((int64_t)6), NULL);
		((ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_StaticFields*)il2cpp_codegen_static_fields_for(ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var))->___Six_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_StaticFields*)il2cpp_codegen_static_fields_for(ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var))->___Six_1), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_4 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____712618256BB5287925AAF70FA8EA2EBFFB72DF72B5D29A339CC9B8DB464EFC14_121_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_3, L_4, NULL);
		((ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_StaticFields*)il2cpp_codegen_static_fields_for(ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var))->___shadows_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_StaticFields*)il2cpp_codegen_static_fields_for(ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var))->___shadows_2), (void*)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = L_5;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_7 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____A80010A555E14F5B5B3D967E0F1621742AC2048F40EBF73EB76AD8991448EE21_185_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_6, L_7, NULL);
		((ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_StaticFields*)il2cpp_codegen_static_fields_for(ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var))->___inverse_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_StaticFields*)il2cpp_codegen_static_fields_for(ISO9796d1Encoding_tBDE24EF2301DEC162436D03F3469807DDC1701EC_il2cpp_TypeInfo_var))->___inverse_3), (void*)L_6);
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
// System.Void Org.BouncyCastle.Crypto.Encodings.OaepEncoding::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OaepEncoding__ctor_m9A5F89901ABBF371DF7BD17F3C56C0110E902139 (OaepEncoding_tA46EB59C382F7748F9052C3127712089E211D3D5* __this, RuntimeObject* ___0_cipher, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha1Digest_tC8861FE4F42B403ECE6991A7D168F82E0427C0DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_cipher;
		Sha1Digest_tC8861FE4F42B403ECE6991A7D168F82E0427C0DA* L_1 = (Sha1Digest_tC8861FE4F42B403ECE6991A7D168F82E0427C0DA*)il2cpp_codegen_object_new(Sha1Digest_tC8861FE4F42B403ECE6991A7D168F82E0427C0DA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Sha1Digest__ctor_mE459929BE81CC32F1177E9CBF41D2C585164444E(L_1, NULL);
		OaepEncoding__ctor_m4F58AEBEE55EAE3C4B482FAD6AED218155D2907F(__this, L_0, L_1, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Encodings.OaepEncoding::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher,Org.BouncyCastle.Crypto.IDigest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OaepEncoding__ctor_m1781AAD12977A8D3F3227CE475921F774A7EAF9F (OaepEncoding_tA46EB59C382F7748F9052C3127712089E211D3D5* __this, RuntimeObject* ___0_cipher, RuntimeObject* ___1_hash, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_cipher;
		RuntimeObject* L_1 = ___1_hash;
		OaepEncoding__ctor_m4F58AEBEE55EAE3C4B482FAD6AED218155D2907F(__this, L_0, L_1, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Encodings.OaepEncoding::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher,Org.BouncyCastle.Crypto.IDigest,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OaepEncoding__ctor_m4F58AEBEE55EAE3C4B482FAD6AED218155D2907F (OaepEncoding_tA46EB59C382F7748F9052C3127712089E211D3D5* __this, RuntimeObject* ___0_cipher, RuntimeObject* ___1_hash, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_encodingParams, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_cipher;
		RuntimeObject* L_1 = ___1_hash;
		RuntimeObject* L_2 = ___1_hash;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___2_encodingParams;
		OaepEncoding__ctor_mE3844ED566CCDFDE119E0FE1A17754E2CDFA1B46(__this, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Encodings.OaepEncoding::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher,Org.BouncyCastle.Crypto.IDigest,Org.BouncyCastle.Crypto.IDigest,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OaepEncoding__ctor_mE3844ED566CCDFDE119E0FE1A17754E2CDFA1B46 (OaepEncoding_tA46EB59C382F7748F9052C3127712089E211D3D5* __this, RuntimeObject* ___0_cipher, RuntimeObject* ___1_hash, RuntimeObject* ___2_mgf1Hash, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_encodingParams, const RuntimeMethod* method) 
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
		RuntimeObject* L_0 = ___0_cipher;
		__this->___engine_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___engine_2), (void*)L_0);
		RuntimeObject* L_1 = ___2_mgf1Hash;
		__this->___mgf1Hash_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mgf1Hash_1), (void*)L_1);
		RuntimeObject* L_2 = ___1_hash;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::GetDigestSize() */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->___defHash_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___defHash_0), (void*)L_4);
		RuntimeObject* L_5 = ___1_hash;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(6 /* System.Void Org.BouncyCastle.Crypto.IDigest::Reset() */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___3_encodingParams;
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		RuntimeObject* L_7 = ___1_hash;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___3_encodingParams;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___3_encodingParams;
		NullCheck(L_9);
		NullCheck(L_7);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_7, L_8, 0, ((int32_t)(((RuntimeArray*)L_9)->max_length)));
	}

IL_003c:
	{
		RuntimeObject* L_10 = ___1_hash;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = __this->___defHash_0;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::DoFinal(System.Byte[],System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_10, L_11, 0);
		return;
	}
}
// Org.BouncyCastle.Crypto.IAsymmetricBlockCipher Org.BouncyCastle.Crypto.Encodings.OaepEncoding::GetUnderlyingCipher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OaepEncoding_GetUnderlyingCipher_m980EA24FCDC78B8AE0EF3B476150E4F7DA352774 (OaepEncoding_tA46EB59C382F7748F9052C3127712089E211D3D5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___engine_2;
		return L_0;
	}
}
// System.String Org.BouncyCastle.Crypto.Encodings.OaepEncoding::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OaepEncoding_get_AlgorithmName_m50F476E0D003C4AD6522B063BA053405FD0D78E8 (OaepEncoding_tA46EB59C382F7748F9052C3127712089E211D3D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5EACAA5F8AC837043324C9FFCB5A5E9941B2DEF);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___engine_2;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IAsymmetricBlockCipher::get_AlgorithmName() */, IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralA5EACAA5F8AC837043324C9FFCB5A5E9941B2DEF, NULL);
		return L_2;
	}
}
// System.Void Org.BouncyCastle.Crypto.Encodings.OaepEncoding::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OaepEncoding_Init_m5550713A1209BF32B521C744645CDBE3B7694A94 (OaepEncoding_tA46EB59C382F7748F9052C3127712089E211D3D5* __this, bool ___0_forEncryption, RuntimeObject* ___1_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___1_param;
		if (!((ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5*)IsInstClass((RuntimeObject*)L_0, ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var)))
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_1 = ___1_param;
		V_0 = ((ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5*)CastclassClass((RuntimeObject*)L_1, ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var));
		ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* L_2 = V_0;
		NullCheck(L_2);
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_3;
		L_3 = ParametersWithRandom_get_Random_m8BBD0BE6E5E963B33589571245F7869CD9E70AC0_inline(L_2, NULL);
		__this->___random_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___random_3), (void*)L_3);
		goto IL_0028;
	}

IL_001d:
	{
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_4 = (SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076*)il2cpp_codegen_object_new(SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SecureRandom__ctor_m1FB3C478CD5CC4CDF68C981D8F5F89FC8EF8CC68(L_4, NULL);
		__this->___random_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___random_3), (void*)L_4);
	}

IL_0028:
	{
		RuntimeObject* L_5 = __this->___engine_2;
		bool L_6 = ___0_forEncryption;
		RuntimeObject* L_7 = ___1_param;
		NullCheck(L_5);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IAsymmetricBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var, L_5, L_6, L_7);
		bool L_8 = ___0_forEncryption;
		__this->___forEncryption_4 = L_8;
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Encodings.OaepEncoding::GetInputBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OaepEncoding_GetInputBlockSize_mE1F39B15A69CE5C6154B3578EDE46D44F98D94A8 (OaepEncoding_tA46EB59C382F7748F9052C3127712089E211D3D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->___engine_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IAsymmetricBlockCipher::GetInputBlockSize() */, IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		bool L_2 = __this->___forEncryption_4;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->___defHash_0;
		NullCheck(L_4);
		return ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_3, 1)), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_4)->max_length))))));
	}

IL_0023:
	{
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Encodings.OaepEncoding::GetOutputBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OaepEncoding_GetOutputBlockSize_m3D7934145DBFE16C0E20556468E8B9984370A348 (OaepEncoding_tA46EB59C382F7748F9052C3127712089E211D3D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->___engine_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Org.BouncyCastle.Crypto.IAsymmetricBlockCipher::GetOutputBlockSize() */, IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		bool L_2 = __this->___forEncryption_4;
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		return L_3;
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = __this->___defHash_0;
		NullCheck(L_5);
		return ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_4, 1)), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_5)->max_length))))));
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.OaepEncoding::ProcessBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OaepEncoding_ProcessBlock_mD80CFA941C59967C84E3CFE80D40D5CDAE68158A (OaepEncoding_tA46EB59C382F7748F9052C3127712089E211D3D5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inBytes, int32_t ___1_inOff, int32_t ___2_inLen, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___forEncryption_4;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_inBytes;
		int32_t L_2 = ___1_inOff;
		int32_t L_3 = ___2_inLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = OaepEncoding_EncodeBlock_mD17D2D511D48430FFDB2B420B77A682991156E5F(__this, L_1, L_2, L_3, NULL);
		return L_4;
	}

IL_0012:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_inBytes;
		int32_t L_6 = ___1_inOff;
		int32_t L_7 = ___2_inLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = OaepEncoding_DecodeBlock_m61472386EDFD38AC64EBF377F2660A448249520A(__this, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.OaepEncoding::EncodeBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OaepEncoding_EncodeBlock_mD17D2D511D48430FFDB2B420B77A682991156E5F (OaepEncoding_tA46EB59C382F7748F9052C3127712089E211D3D5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inBytes, int32_t ___1_inOff, int32_t ___2_inLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E604500859D71B2446831C6C20E2386D5D259EF);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___2_inLen;
		int32_t L_1;
		L_1 = OaepEncoding_GetInputBlockSize_mE1F39B15A69CE5C6154B3578EDE46D44F98D94A8(__this, NULL);
		Check_DataLength_m2F2550C28CBC7D7B6045D7E5068AAC8E233713C4((bool)((((int32_t)L_0) > ((int32_t)L_1))? 1 : 0), _stringLiteral6E604500859D71B2446831C6C20E2386D5D259EF, NULL);
		int32_t L_2;
		L_2 = OaepEncoding_GetInputBlockSize_mE1F39B15A69CE5C6154B3578EDE46D44F98D94A8(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___defHash_0;
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_2, 1)), ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_3)->max_length)))))));
		V_0 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_inBytes;
		int32_t L_6 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = ___2_inLen;
		int32_t L_10 = ___2_inLen;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), L_10, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = ___2_inLen;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), 1))), (uint8_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___defHash_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___defHash_0;
		NullCheck(L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = __this->___defHash_0;
		NullCheck(L_17);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)(((RuntimeArray*)L_16)->max_length)), ((int32_t)(((RuntimeArray*)L_17)->max_length)), NULL);
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_18 = __this->___random_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = __this->___defHash_0;
		NullCheck(L_19);
		il2cpp_codegen_runtime_class_init_inline(SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = SecureRandom_GetNextBytes_mA4EBDB5B2C50E1A6695DD9226B7B75ECD9861123(L_18, ((int32_t)(((RuntimeArray*)L_19)->max_length)), NULL);
		V_1 = L_20;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_1;
		NullCheck(L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_0;
		NullCheck(L_23);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___defHash_0;
		NullCheck(L_24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = OaepEncoding_maskGeneratorFunction1_mDFB5C016A296FF8231A4FE40291038ECEBF7AB19(__this, L_21, 0, ((int32_t)(((RuntimeArray*)L_22)->max_length)), ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), ((int32_t)(((RuntimeArray*)L_24)->max_length)))), NULL);
		V_2 = L_25;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = __this->___defHash_0;
		NullCheck(L_26);
		V_3 = ((int32_t)(((RuntimeArray*)L_26)->max_length));
		goto IL_00b4;
	}

IL_0098:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_0;
		int32_t L_28 = V_3;
		NullCheck(L_27);
		uint8_t* L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)));
		int32_t L_30 = *((uint8_t*)L_29);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_2;
		int32_t L_32 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = __this->___defHash_0;
		NullCheck(L_33);
		NullCheck(L_31);
		int32_t L_34 = ((int32_t)il2cpp_codegen_subtract(L_32, ((int32_t)(((RuntimeArray*)L_33)->max_length))));
		uint8_t L_35 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		*((int8_t*)L_29) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_30^(int32_t)L_35)));
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b4:
	{
		int32_t L_37 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_0;
		NullCheck(L_38);
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)(((RuntimeArray*)L_38)->max_length))))))
		{
			goto IL_0098;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = __this->___defHash_0;
		NullCheck(L_41);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, (RuntimeArray*)L_40, 0, ((int32_t)(((RuntimeArray*)L_41)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = __this->___defHash_0;
		NullCheck(L_43);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = V_0;
		NullCheck(L_44);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = __this->___defHash_0;
		NullCheck(L_45);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = __this->___defHash_0;
		NullCheck(L_46);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47;
		L_47 = OaepEncoding_maskGeneratorFunction1_mDFB5C016A296FF8231A4FE40291038ECEBF7AB19(__this, L_42, ((int32_t)(((RuntimeArray*)L_43)->max_length)), ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_44)->max_length)), ((int32_t)(((RuntimeArray*)L_45)->max_length)))), ((int32_t)(((RuntimeArray*)L_46)->max_length)), NULL);
		V_2 = L_47;
		V_4 = 0;
		goto IL_010b;
	}

IL_00f4:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_0;
		int32_t L_49 = V_4;
		NullCheck(L_48);
		uint8_t* L_50 = ((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)));
		int32_t L_51 = *((uint8_t*)L_50);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_2;
		int32_t L_53 = V_4;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		uint8_t L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		*((int8_t*)L_50) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_51^(int32_t)L_55)));
		int32_t L_56 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_010b:
	{
		int32_t L_57 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = __this->___defHash_0;
		NullCheck(L_58);
		if ((!(((uint32_t)L_57) == ((uint32_t)((int32_t)(((RuntimeArray*)L_58)->max_length))))))
		{
			goto IL_00f4;
		}
	}
	{
		RuntimeObject* L_59 = __this->___engine_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_61 = V_0;
		NullCheck(L_61);
		NullCheck(L_59);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62;
		L_62 = InterfaceFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Byte[] Org.BouncyCastle.Crypto.IAsymmetricBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Int32) */, IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var, L_59, L_60, 0, ((int32_t)(((RuntimeArray*)L_61)->max_length)));
		return L_62;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.OaepEncoding::DecodeBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OaepEncoding_DecodeBlock_m61472386EDFD38AC64EBF377F2660A448249520A (OaepEncoding_tA46EB59C382F7748F9052C3127712089E211D3D5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_inBytes, int32_t ___1_inOff, int32_t ___2_inLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	bool V_2 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	{
		RuntimeObject* L_0 = __this->___engine_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_inBytes;
		int32_t L_2 = ___1_inOff;
		int32_t L_3 = ___2_inLen;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = InterfaceFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Byte[] Org.BouncyCastle.Crypto.IAsymmetricBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Int32) */, IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		V_0 = L_4;
		RuntimeObject* L_5 = __this->___engine_2;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Org.BouncyCastle.Crypto.IAsymmetricBlockCipher::GetOutputBlockSize() */, IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var, L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___defHash_0;
		NullCheck(L_9);
		V_2 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) < ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_9)->max_length)))), 1))))? 1 : 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))) > ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_004e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		NullCheck(L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		NullCheck(L_16);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_12, 0, (RuntimeArray*)L_13, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_14)->max_length)), ((int32_t)(((RuntimeArray*)L_15)->max_length)))), ((int32_t)(((RuntimeArray*)L_16)->max_length)), NULL);
		goto IL_005c;
	}

IL_004e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_1;
		NullCheck(L_19);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_17, 0, (RuntimeArray*)L_18, 0, ((int32_t)(((RuntimeArray*)L_19)->max_length)), NULL);
		V_2 = (bool)1;
	}

IL_005c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___defHash_0;
		NullCheck(L_21);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_1;
		NullCheck(L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->___defHash_0;
		NullCheck(L_23);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = __this->___defHash_0;
		NullCheck(L_24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = OaepEncoding_maskGeneratorFunction1_mDFB5C016A296FF8231A4FE40291038ECEBF7AB19(__this, L_20, ((int32_t)(((RuntimeArray*)L_21)->max_length)), ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_22)->max_length)), ((int32_t)(((RuntimeArray*)L_23)->max_length)))), ((int32_t)(((RuntimeArray*)L_24)->max_length)), NULL);
		V_3 = L_25;
		V_8 = 0;
		goto IL_009c;
	}

IL_0085:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_1;
		int32_t L_27 = V_8;
		NullCheck(L_26);
		uint8_t* L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)));
		int32_t L_29 = *((uint8_t*)L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_3;
		int32_t L_31 = V_8;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		uint8_t L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		*((int8_t*)L_28) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_29^(int32_t)L_33)));
		int32_t L_34 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_009c:
	{
		int32_t L_35 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = __this->___defHash_0;
		NullCheck(L_36);
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)(((RuntimeArray*)L_36)->max_length))))))
		{
			goto IL_0085;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = __this->___defHash_0;
		NullCheck(L_38);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_1;
		NullCheck(L_39);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = __this->___defHash_0;
		NullCheck(L_40);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41;
		L_41 = OaepEncoding_maskGeneratorFunction1_mDFB5C016A296FF8231A4FE40291038ECEBF7AB19(__this, L_37, 0, ((int32_t)(((RuntimeArray*)L_38)->max_length)), ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_39)->max_length)), ((int32_t)(((RuntimeArray*)L_40)->max_length)))), NULL);
		V_3 = L_41;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = __this->___defHash_0;
		NullCheck(L_42);
		V_9 = ((int32_t)(((RuntimeArray*)L_42)->max_length));
		goto IL_00f1;
	}

IL_00d1:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_1;
		int32_t L_44 = V_9;
		NullCheck(L_43);
		uint8_t* L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)));
		int32_t L_46 = *((uint8_t*)L_45);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = V_3;
		int32_t L_48 = V_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = __this->___defHash_0;
		NullCheck(L_49);
		NullCheck(L_47);
		int32_t L_50 = ((int32_t)il2cpp_codegen_subtract(L_48, ((int32_t)(((RuntimeArray*)L_49)->max_length))));
		uint8_t L_51 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		*((int8_t*)L_45) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_46^(int32_t)L_51)));
		int32_t L_52 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_00f1:
	{
		int32_t L_53 = V_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_1;
		NullCheck(L_54);
		if ((!(((uint32_t)L_53) == ((uint32_t)((int32_t)(((RuntimeArray*)L_54)->max_length))))))
		{
			goto IL_00d1;
		}
	}
	{
		V_4 = (bool)0;
		V_10 = 0;
		goto IL_0121;
	}

IL_0100:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = __this->___defHash_0;
		int32_t L_56 = V_10;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		uint8_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_59 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = __this->___defHash_0;
		NullCheck(L_60);
		int32_t L_61 = V_10;
		NullCheck(L_59);
		int32_t L_62 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_60)->max_length)), L_61));
		uint8_t L_63 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		if ((((int32_t)L_58) == ((int32_t)L_63)))
		{
			goto IL_011b;
		}
	}
	{
		V_4 = (bool)1;
	}

IL_011b:
	{
		int32_t L_64 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_0121:
	{
		int32_t L_65 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_66 = __this->___defHash_0;
		NullCheck(L_66);
		if ((!(((uint32_t)L_65) == ((uint32_t)((int32_t)(((RuntimeArray*)L_66)->max_length))))))
		{
			goto IL_0100;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_67 = V_1;
		NullCheck(L_67);
		V_5 = ((int32_t)(((RuntimeArray*)L_67)->max_length));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_68 = __this->___defHash_0;
		NullCheck(L_68);
		V_11 = ((int32_t)il2cpp_codegen_multiply(2, ((int32_t)(((RuntimeArray*)L_68)->max_length))));
		goto IL_015b;
	}

IL_0140:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_69 = V_1;
		int32_t L_70 = V_11;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		uint8_t L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		int32_t L_73 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = V_1;
		NullCheck(L_74);
		if (!((int32_t)(((!(((uint32_t)L_72) <= ((uint32_t)0)))? 1 : 0)&((((int32_t)L_73) == ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length))))? 1 : 0))))
		{
			goto IL_0155;
		}
	}
	{
		int32_t L_75 = V_11;
		V_5 = L_75;
	}

IL_0155:
	{
		int32_t L_76 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_015b:
	{
		int32_t L_77 = V_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = V_1;
		NullCheck(L_78);
		if ((!(((uint32_t)L_77) == ((uint32_t)((int32_t)(((RuntimeArray*)L_78)->max_length))))))
		{
			goto IL_0140;
		}
	}
	{
		int32_t L_79 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = V_1;
		NullCheck(L_80);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_81 = V_1;
		int32_t L_82 = V_5;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		uint8_t L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		V_6 = (bool)((int32_t)(((((int32_t)L_79) > ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_80)->max_length)), 1))))? 1 : 0)|((((int32_t)((((int32_t)L_84) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0)));
		int32_t L_85 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_85, 1));
		bool L_86 = V_4;
		bool L_87 = V_2;
		bool L_88 = V_6;
		if (!((int32_t)(((int32_t)((int32_t)L_86|(int32_t)L_87))|(int32_t)L_88)))
		{
			goto IL_0199;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_89 = V_1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var)));
		Arrays_Fill_mE21DFB2A97B1AE17AFE700D6A367141498048242(L_89, (uint8_t)0, NULL);
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_90 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		NullCheck(L_90);
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_90, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB60D7472B47218394A8509E3F4E1C6290B4A5CE2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_90, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OaepEncoding_DecodeBlock_m61472386EDFD38AC64EBF377F2660A448249520A_RuntimeMethod_var)));
	}

IL_0199:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_91 = V_1;
		NullCheck(L_91);
		int32_t L_92 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_93 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_91)->max_length)), L_92)));
		V_7 = L_93;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_94 = V_1;
		int32_t L_95 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_97 = V_7;
		NullCheck(L_97);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_94, L_95, (RuntimeArray*)L_96, 0, ((int32_t)(((RuntimeArray*)L_97)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98 = V_7;
		return L_98;
	}
}
// System.Void Org.BouncyCastle.Crypto.Encodings.OaepEncoding::ItoOSP(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OaepEncoding_ItoOSP_mC610C469BFB6C059650C1899A8BB1EAA9E3D5D82 (OaepEncoding_tA46EB59C382F7748F9052C3127712089E211D3D5* __this, int32_t ___0_i, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_sp, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_sp;
		int32_t L_1 = ___0_i;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_1>>((int32_t)24)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_sp;
		int32_t L_3 = ___0_i;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_3>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_sp;
		int32_t L_5 = ___0_i;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_5>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_sp;
		int32_t L_7 = ___0_i;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint8_t)((int32_t)(uint8_t)L_7));
		return;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.OaepEncoding::maskGeneratorFunction1(System.Byte[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* OaepEncoding_maskGeneratorFunction1_mDFB5C016A296FF8231A4FE40291038ECEBF7AB19 (OaepEncoding_tA46EB59C382F7748F9052C3127712089E211D3D5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_Z, int32_t ___1_zOff, int32_t ___2_zLen, int32_t ___3_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___3_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		RuntimeObject* L_2 = __this->___mgf1Hash_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::GetDigestSize() */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		V_2 = L_5;
		V_3 = 0;
		RuntimeObject* L_6 = __this->___mgf1Hash_1;
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(6 /* System.Void Org.BouncyCastle.Crypto.IDigest::Reset() */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_6);
		goto IL_0077;
	}

IL_002f:
	{
		int32_t L_7 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_2;
		OaepEncoding_ItoOSP_mC610C469BFB6C059650C1899A8BB1EAA9E3D5D82(__this, L_7, L_8, NULL);
		RuntimeObject* L_9 = __this->___mgf1Hash_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_Z;
		int32_t L_11 = ___1_zOff;
		int32_t L_12 = ___2_zLen;
		NullCheck(L_9);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_9, L_10, L_11, L_12);
		RuntimeObject* L_13 = __this->___mgf1Hash_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_2;
		NullCheck(L_15);
		NullCheck(L_13);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_13, L_14, 0, ((int32_t)(((RuntimeArray*)L_15)->max_length)));
		RuntimeObject* L_16 = __this->___mgf1Hash_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::DoFinal(System.Byte[],System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_16, L_17, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_0;
		int32_t L_21 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_1;
		NullCheck(L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_1;
		NullCheck(L_23);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_19, 0, (RuntimeArray*)L_20, ((int32_t)il2cpp_codegen_multiply(L_21, ((int32_t)(((RuntimeArray*)L_22)->max_length)))), ((int32_t)(((RuntimeArray*)L_23)->max_length)), NULL);
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0077:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = ___3_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_1;
		NullCheck(L_27);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(L_26/((int32_t)(((RuntimeArray*)L_27)->max_length)))))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_28 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_1;
		NullCheck(L_29);
		int32_t L_30 = ___3_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(L_28, ((int32_t)(((RuntimeArray*)L_29)->max_length))))) >= ((int32_t)L_30)))
		{
			goto IL_00d3;
		}
	}
	{
		int32_t L_31 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = V_2;
		OaepEncoding_ItoOSP_mC610C469BFB6C059650C1899A8BB1EAA9E3D5D82(__this, L_31, L_32, NULL);
		RuntimeObject* L_33 = __this->___mgf1Hash_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___0_Z;
		int32_t L_35 = ___1_zOff;
		int32_t L_36 = ___2_zLen;
		NullCheck(L_33);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_33, L_34, L_35, L_36);
		RuntimeObject* L_37 = __this->___mgf1Hash_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_2;
		NullCheck(L_39);
		NullCheck(L_37);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Void Org.BouncyCastle.Crypto.IDigest::BlockUpdate(System.Byte[],System.Int32,System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_37, L_38, 0, ((int32_t)(((RuntimeArray*)L_39)->max_length)));
		RuntimeObject* L_40 = __this->___mgf1Hash_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_1;
		NullCheck(L_40);
		int32_t L_42;
		L_42 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5 /* System.Int32 Org.BouncyCastle.Crypto.IDigest::DoFinal(System.Byte[],System.Int32) */, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_40, L_41, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = V_0;
		int32_t L_45 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = V_1;
		NullCheck(L_46);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_47 = V_0;
		NullCheck(L_47);
		int32_t L_48 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_49 = V_1;
		NullCheck(L_49);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_43, 0, (RuntimeArray*)L_44, ((int32_t)il2cpp_codegen_multiply(L_45, ((int32_t)(((RuntimeArray*)L_46)->max_length)))), ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_47)->max_length)), ((int32_t)il2cpp_codegen_multiply(L_48, ((int32_t)(((RuntimeArray*)L_49)->max_length)))))), NULL);
	}

IL_00d3:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = V_0;
		return L_50;
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
// System.Boolean Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::get_StrictLengthEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Pkcs1Encoding_get_StrictLengthEnabled_m7A488532CC7FF70A99E3878DAC9241C38EAC42DB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8_il2cpp_TypeInfo_var);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ((Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8_StaticFields*)il2cpp_codegen_static_fields_for(Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8_il2cpp_TypeInfo_var))->___strictLengthEnabled_2;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (uint8_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return (bool)L_2;
	}
}
// System.Void Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::set_StrictLengthEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pkcs1Encoding_set_StrictLengthEnabled_m1DDCDC02658DA45BDEC40A8008BFE38A14DE3B3C (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8_il2cpp_TypeInfo_var);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ((Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8_StaticFields*)il2cpp_codegen_static_fields_for(Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8_il2cpp_TypeInfo_var))->___strictLengthEnabled_2;
		bool L_1 = ___0_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (bool)L_1);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pkcs1Encoding__cctor_mD423E0660C0ACA32B070FBEC92856F4BB56858CE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC799D0BEAEC3053C515C6ECC0DAACA1AD760976D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t G_B2_0 = 0;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* G_B2_1 = NULL;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* G_B1_1 = NULL;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* G_B1_2 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* G_B3_2 = NULL;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* G_B3_3 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = Platform_GetEnvironmentVariable_mD68593E58ED4923699EFEC4DD5C05B74A9DD59A7(_stringLiteralC799D0BEAEC3053C515C6ECC0DAACA1AD760976D, NULL);
		V_0 = L_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)1);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = L_1;
		String_t* L_3 = V_0;
		G_B1_0 = 0;
		G_B1_1 = L_2;
		G_B1_2 = L_2;
		if (!L_3)
		{
			G_B2_0 = 0;
			G_B2_1 = L_2;
			G_B2_2 = L_2;
			goto IL_0023;
		}
	}
	{
		String_t* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Platform_EqualsIgnoreCase_m810D36DB0BD9FBE45BD3772A0FC2B947D7D47CA7(_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0024:
	{
		NullCheck(G_B3_2);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (bool)G_B3_0);
		((Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8_StaticFields*)il2cpp_codegen_static_fields_for(Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8_il2cpp_TypeInfo_var))->___strictLengthEnabled_2 = G_B3_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8_StaticFields*)il2cpp_codegen_static_fields_for(Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8_il2cpp_TypeInfo_var))->___strictLengthEnabled_2), (void*)G_B3_3);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pkcs1Encoding__ctor_m691105B9AE8AED14E5EEC5EA7220258B7F099824 (Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8* __this, RuntimeObject* ___0_cipher, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___pLen_8 = (-1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_cipher;
		__this->___engine_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___engine_4), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Pkcs1Encoding_get_StrictLengthEnabled_m7A488532CC7FF70A99E3878DAC9241C38EAC42DB(NULL);
		__this->___useStrictLength_7 = L_1;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pkcs1Encoding__ctor_m8AAA4D8EEA934AA7BA670079756BBD1C19EF169F (Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8* __this, RuntimeObject* ___0_cipher, int32_t ___1_pLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___pLen_8 = (-1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_cipher;
		__this->___engine_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___engine_4), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Pkcs1Encoding_get_StrictLengthEnabled_m7A488532CC7FF70A99E3878DAC9241C38EAC42DB(NULL);
		__this->___useStrictLength_7 = L_1;
		int32_t L_2 = ___1_pLen;
		__this->___pLen_8 = L_2;
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::.ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pkcs1Encoding__ctor_m9252A03988D8F2C75AF75C492D23EA17D90D5DB0 (Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8* __this, RuntimeObject* ___0_cipher, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_fallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___pLen_8 = (-1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_cipher;
		__this->___engine_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___engine_4), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Pkcs1Encoding_get_StrictLengthEnabled_m7A488532CC7FF70A99E3878DAC9241C38EAC42DB(NULL);
		__this->___useStrictLength_7 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_fallback;
		__this->___fallback_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fallback_9), (void*)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_fallback;
		NullCheck(L_3);
		__this->___pLen_8 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		return;
	}
}
// Org.BouncyCastle.Crypto.IAsymmetricBlockCipher Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::GetUnderlyingCipher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Pkcs1Encoding_GetUnderlyingCipher_m7A07788B0A8CE9603D5EA6AA29287C4C85FA9F75 (Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___engine_4;
		return L_0;
	}
}
// System.String Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::get_AlgorithmName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Pkcs1Encoding_get_AlgorithmName_m037141B3CC5CF6CC50B5622EE89BD39F4B8B1EA3 (Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD0541DDC28710D257FB999346ED7F8EA302E0A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___engine_4;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Org.BouncyCastle.Crypto.IAsymmetricBlockCipher::get_AlgorithmName() */, IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var, L_0);
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, _stringLiteralFD0541DDC28710D257FB999346ED7F8EA302E0A5, NULL);
		return L_2;
	}
}
// System.Void Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pkcs1Encoding_Init_mFC8027BEE643D1CAE7E261697D20568B1F000A06 (Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8* __this, bool ___0_forEncryption, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsymmetricKeyParameter_tA5D2359A65E6D2862EC9B31F64730CA7A117109A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AsymmetricKeyParameter_tA5D2359A65E6D2862EC9B31F64730CA7A117109A* V_0 = NULL;
	ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___1_parameters;
		if (!((ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5*)IsInstClass((RuntimeObject*)L_0, ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var)))
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_1 = ___1_parameters;
		V_1 = ((ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5*)CastclassClass((RuntimeObject*)L_1, ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5_il2cpp_TypeInfo_var));
		ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* L_2 = V_1;
		NullCheck(L_2);
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_3;
		L_3 = ParametersWithRandom_get_Random_m8BBD0BE6E5E963B33589571245F7869CD9E70AC0_inline(L_2, NULL);
		__this->___random_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___random_3), (void*)L_3);
		ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ParametersWithRandom_get_Parameters_mFED49C45204261ACF08DC4617FC59E9025C5DA8E_inline(L_4, NULL);
		V_0 = ((AsymmetricKeyParameter_tA5D2359A65E6D2862EC9B31F64730CA7A117109A*)CastclassClass((RuntimeObject*)L_5, AsymmetricKeyParameter_tA5D2359A65E6D2862EC9B31F64730CA7A117109A_il2cpp_TypeInfo_var));
		goto IL_003b;
	}

IL_0029:
	{
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_6 = (SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076*)il2cpp_codegen_object_new(SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		SecureRandom__ctor_m1FB3C478CD5CC4CDF68C981D8F5F89FC8EF8CC68(L_6, NULL);
		__this->___random_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___random_3), (void*)L_6);
		RuntimeObject* L_7 = ___1_parameters;
		V_0 = ((AsymmetricKeyParameter_tA5D2359A65E6D2862EC9B31F64730CA7A117109A*)CastclassClass((RuntimeObject*)L_7, AsymmetricKeyParameter_tA5D2359A65E6D2862EC9B31F64730CA7A117109A_il2cpp_TypeInfo_var));
	}

IL_003b:
	{
		RuntimeObject* L_8 = __this->___engine_4;
		bool L_9 = ___0_forEncryption;
		RuntimeObject* L_10 = ___1_parameters;
		NullCheck(L_8);
		InterfaceActionInvoker2< bool, RuntimeObject* >::Invoke(1 /* System.Void Org.BouncyCastle.Crypto.IAsymmetricBlockCipher::Init(System.Boolean,Org.BouncyCastle.Crypto.ICipherParameters) */, IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var, L_8, L_9, L_10);
		AsymmetricKeyParameter_tA5D2359A65E6D2862EC9B31F64730CA7A117109A* L_11 = V_0;
		NullCheck(L_11);
		bool L_12;
		L_12 = AsymmetricKeyParameter_get_IsPrivate_mA62181D04A9E29391B524D9BE8FE92AC3E75ADCE_inline(L_11, NULL);
		__this->___forPrivateKey_6 = L_12;
		bool L_13 = ___0_forEncryption;
		__this->___forEncryption_5 = L_13;
		RuntimeObject* L_14 = __this->___engine_4;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Org.BouncyCastle.Crypto.IAsymmetricBlockCipher::GetOutputBlockSize() */, IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var, L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_15);
		__this->___blockBuffer_10 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blockBuffer_10), (void*)L_16);
		int32_t L_17 = __this->___pLen_8;
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_0095;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___fallback_9;
		if (L_18)
		{
			goto IL_0095;
		}
	}
	{
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_19 = __this->___random_3;
		if (L_19)
		{
			goto IL_0095;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFECD8400D40388654726CCBD85C70BC0C92155FC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Pkcs1Encoding_Init_mFC8027BEE643D1CAE7E261697D20568B1F000A06_RuntimeMethod_var)));
	}

IL_0095:
	{
		return;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::GetInputBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pkcs1Encoding_GetInputBlockSize_m36270ED2DB0F2E04CDAD5E456969733A0C1364CA (Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->___engine_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IAsymmetricBlockCipher::GetInputBlockSize() */, IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		bool L_2 = __this->___forEncryption_5;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = V_0;
		return L_3;
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		return ((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)10)));
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::GetOutputBlockSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pkcs1Encoding_GetOutputBlockSize_mCF325C7147E6D7801320E691B8A753DE9E5376D2 (Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->___engine_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Org.BouncyCastle.Crypto.IAsymmetricBlockCipher::GetOutputBlockSize() */, IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		bool L_2 = __this->___forEncryption_5;
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_3 = V_0;
		return ((int32_t)il2cpp_codegen_subtract(L_3, ((int32_t)10)));
	}

IL_0019:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::ProcessBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Pkcs1Encoding_ProcessBlock_mF6B5D35A837ED91DCBA5ACA6E96F3130AF4AA379 (Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___forEncryption_5;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_input;
		int32_t L_2 = ___1_inOff;
		int32_t L_3 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = Pkcs1Encoding_DecodeBlock_m503210F83A364B44C345EDE39A349C60ACB7E0F2(__this, L_1, L_2, L_3, NULL);
		return L_4;
	}

IL_0012:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_input;
		int32_t L_6 = ___1_inOff;
		int32_t L_7 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = Pkcs1Encoding_EncodeBlock_m84AD4E676CB86AE6BD9A2B5407A2458DFCB29B7C(__this, L_5, L_6, L_7, NULL);
		return L_8;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::EncodeBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Pkcs1Encoding_EncodeBlock_m84AD4E676CB86AE6BD9A2B5407A2458DFCB29B7C (Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_inLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_inLen;
		int32_t L_1;
		L_1 = Pkcs1Encoding_GetInputBlockSize_m36270ED2DB0F2E04CDAD5E456969733A0C1364CA(__this, NULL);
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral28CFD4B42FAC205F7F948E0DAF4E1297B574750E)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6A8BA3A091AD02088C20BEFFA94C01D62506011C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Pkcs1Encoding_EncodeBlock_m84AD4E676CB86AE6BD9A2B5407A2458DFCB29B7C_RuntimeMethod_var)));
	}

IL_0019:
	{
		RuntimeObject* L_3 = __this->___engine_4;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Org.BouncyCastle.Crypto.IAsymmetricBlockCipher::GetInputBlockSize() */, IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var, L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_0 = L_5;
		bool L_6 = __this->___forPrivateKey_6;
		if (!L_6)
		{
			goto IL_0052;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)1);
		V_1 = 1;
		goto IL_0046;
	}

IL_003a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)255));
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0046:
	{
		int32_t L_11 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = ___2_inLen;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), 1))))))
		{
			goto IL_003a;
		}
	}
	{
		goto IL_0088;
	}

IL_0052:
	{
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_14 = __this->___random_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		NullCheck(L_14);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Void System.Random::NextBytes(System.Byte[]) */, L_14, L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)2);
		V_2 = 1;
		goto IL_007e;
	}

IL_0066:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_0;
		int32_t L_18 = V_2;
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_19 = __this->___random_3;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 Org.BouncyCastle.Security.SecureRandom::NextInt() */, L_19);
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (uint8_t)((int32_t)(uint8_t)L_20));
	}

IL_0075:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_0;
		int32_t L_22 = V_2;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		uint8_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		if (!L_24)
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_007e:
	{
		int32_t L_26 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = ___2_inLen;
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28)), 1))))))
		{
			goto IL_0075;
		}
	}

IL_0088:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_0;
		NullCheck(L_30);
		int32_t L_31 = ___2_inLen;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_30)->max_length)), L_31)), 1))), (uint8_t)0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___0_input;
		int32_t L_33 = ___1_inOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_0;
		NullCheck(L_35);
		int32_t L_36 = ___2_inLen;
		int32_t L_37 = ___2_inLen;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_32, L_33, (RuntimeArray*)L_34, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_35)->max_length)), L_36)), L_37, NULL);
		RuntimeObject* L_38 = __this->___engine_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_0;
		NullCheck(L_40);
		NullCheck(L_38);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41;
		L_41 = InterfaceFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Byte[] Org.BouncyCastle.Crypto.IAsymmetricBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Int32) */, IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var, L_38, L_39, 0, ((int32_t)(((RuntimeArray*)L_40)->max_length)));
		return L_41;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::CheckPkcs1Encoding(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pkcs1Encoding_CheckPkcs1Encoding_m5283E1AC2A909828F1C42DCAE88B27BA52E05E16 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_encoded, int32_t ___1_pLen, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_encoded;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = ((int32_t)(L_0|((int32_t)((int32_t)L_3^2))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_encoded;
		NullCheck(L_4);
		int32_t L_5 = ___1_pLen;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), ((int32_t)il2cpp_codegen_add(L_5, 1))));
		V_2 = 1;
		goto IL_0038;
	}

IL_0016:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_encoded;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		int32_t L_10 = V_3;
		int32_t L_11 = V_3;
		V_3 = ((int32_t)(L_10|((int32_t)(L_11>>1))));
		int32_t L_12 = V_3;
		int32_t L_13 = V_3;
		V_3 = ((int32_t)(L_12|((int32_t)(L_13>>2))));
		int32_t L_14 = V_3;
		int32_t L_15 = V_3;
		V_3 = ((int32_t)(L_14|((int32_t)(L_15>>4))));
		int32_t L_16 = V_0;
		int32_t L_17 = V_3;
		V_0 = ((int32_t)(L_16|((int32_t)il2cpp_codegen_subtract(((int32_t)(L_17&1)), 1))));
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0038:
	{
		int32_t L_19 = V_2;
		int32_t L_20 = V_1;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_21 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___0_encoded;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___0_encoded;
		NullCheck(L_23);
		int32_t L_24 = ___1_pLen;
		NullCheck(L_22);
		int32_t L_25 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), ((int32_t)il2cpp_codegen_add(L_24, 1))));
		uint8_t L_26 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_0 = ((int32_t)(L_21|(int32_t)L_26));
		int32_t L_27 = V_0;
		int32_t L_28 = V_0;
		V_0 = ((int32_t)(L_27|((int32_t)(L_28>>1))));
		int32_t L_29 = V_0;
		int32_t L_30 = V_0;
		V_0 = ((int32_t)(L_29|((int32_t)(L_30>>2))));
		int32_t L_31 = V_0;
		int32_t L_32 = V_0;
		V_0 = ((int32_t)(L_31|((int32_t)(L_32>>4))));
		int32_t L_33 = V_0;
		return ((~((int32_t)il2cpp_codegen_subtract(((int32_t)(L_33&1)), 1))));
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::DecodeBlockOrRandom(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Pkcs1Encoding_DecodeBlockOrRandom_m5779EEE26B9D654078F9B5B0FAC8E60D28A40EED (Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_inLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_4 = NULL;
	int32_t V_5 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B8_0 = NULL;
	{
		bool L_0 = __this->___forPrivateKey_6;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_1 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral293FFD890AB5C4872D2545D031F6CB01D4B06A77)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Pkcs1Encoding_DecodeBlockOrRandom_m5779EEE26B9D654078F9B5B0FAC8E60D28A40EED_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = __this->___engine_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_input;
		int32_t L_4 = ___1_inOff;
		int32_t L_5 = ___2_inLen;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = InterfaceFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Byte[] Org.BouncyCastle.Crypto.IAsymmetricBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Int32) */, IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		V_0 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___fallback_9;
		if (L_7)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_8 = __this->___pLen_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_1 = L_9;
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_10 = __this->___random_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_1;
		NullCheck(L_10);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Void System.Random::NextBytes(System.Byte[]) */, L_10, L_11);
		goto IL_004b;
	}

IL_0044:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___fallback_9;
		V_1 = L_12;
	}

IL_004b:
	{
		bool L_13 = __this->___useStrictLength_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		NullCheck(L_14);
		RuntimeObject* L_15 = __this->___engine_4;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Org.BouncyCastle.Crypto.IAsymmetricBlockCipher::GetOutputBlockSize() */, IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var, L_15);
		if (((int32_t)((int32_t)L_13&((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))) == ((int32_t)L_16))? 1 : 0)) == ((int32_t)0))? 1 : 0))))
		{
			goto IL_006a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_0;
		G_B8_0 = L_17;
		goto IL_0070;
	}

IL_006a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___blockBuffer_10;
		G_B8_0 = L_18;
	}

IL_0070:
	{
		V_2 = G_B8_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_2;
		int32_t L_20 = __this->___pLen_8;
		il2cpp_codegen_runtime_class_init_inline(Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8_il2cpp_TypeInfo_var);
		int32_t L_21;
		L_21 = Pkcs1Encoding_CheckPkcs1Encoding_m5283E1AC2A909828F1C42DCAE88B27BA52E05E16(L_19, L_20, NULL);
		V_3 = L_21;
		int32_t L_22 = __this->___pLen_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_22);
		V_4 = L_23;
		V_5 = 0;
		goto IL_00b5;
	}

IL_0090:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_4;
		int32_t L_25 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_2;
		int32_t L_27 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_2;
		NullCheck(L_28);
		int32_t L_29 = __this->___pLen_8;
		NullCheck(L_26);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add(L_27, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_28)->max_length)), L_29))));
		uint8_t L_31 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		int32_t L_32 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_1;
		int32_t L_34 = V_5;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		uint8_t L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		int32_t L_37 = V_3;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_31&((~L_32))))|((int32_t)((int32_t)L_36&L_37))))));
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b5:
	{
		int32_t L_39 = V_5;
		int32_t L_40 = __this->___pLen_8;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0090;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		Arrays_Fill_mE21DFB2A97B1AE17AFE700D6A367141498048242(L_41, (uint8_t)0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_4;
		return L_42;
	}
}
// System.Byte[] Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::DecodeBlock(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Pkcs1Encoding_DecodeBlock_m503210F83A364B44C345EDE39A349C60ACB7E0F2 (Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_input, int32_t ___1_inOff, int32_t ___2_inLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	int32_t V_4 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	bool G_B4_0 = false;
	bool G_B3_0 = false;
	bool G_B5_0 = false;
	bool G_B7_0 = false;
	bool G_B6_0 = false;
	int32_t G_B8_0 = 0;
	bool G_B8_1 = false;
	bool G_B10_0 = false;
	bool G_B9_0 = false;
	{
		int32_t L_0 = __this->___pLen_8;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0013;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_input;
		int32_t L_2 = ___1_inOff;
		int32_t L_3 = ___2_inLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = Pkcs1Encoding_DecodeBlockOrRandom_m5779EEE26B9D654078F9B5B0FAC8E60D28A40EED(__this, L_1, L_2, L_3, NULL);
		return L_4;
	}

IL_0013:
	{
		RuntimeObject* L_5 = __this->___engine_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_input;
		int32_t L_7 = ___1_inOff;
		int32_t L_8 = ___2_inLen;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = InterfaceFuncInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4 /* System.Byte[] Org.BouncyCastle.Crypto.IAsymmetricBlockCipher::ProcessBlock(System.Byte[],System.Int32,System.Int32) */, IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var, L_5, L_6, L_7, L_8);
		V_0 = L_9;
		bool L_10 = __this->___useStrictLength_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_11);
		RuntimeObject* L_12 = __this->___engine_4;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Org.BouncyCastle.Crypto.IAsymmetricBlockCipher::GetOutputBlockSize() */, IAsymmetricBlockCipher_t482A1CB9F01895A3F97BB526E93BF58CBB88F6BC_il2cpp_TypeInfo_var, L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Pkcs1Encoding_GetOutputBlockSize_mCF325C7147E6D7801320E691B8A753DE9E5376D2(__this, NULL);
		G_B3_0 = ((bool)(((int32_t)((int32_t)L_10&((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))) == ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0)))));
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))) >= ((int32_t)L_15)))
		{
			G_B4_0 = ((bool)(((int32_t)((int32_t)L_10&((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))) == ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0)))));
			goto IL_0050;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___blockBuffer_10;
		V_1 = L_16;
		G_B5_0 = G_B3_0;
		goto IL_0052;
	}

IL_0050:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_0;
		V_1 = L_17;
		G_B5_0 = G_B4_0;
	}

IL_0052:
	{
		bool L_18 = __this->___forPrivateKey_6;
		G_B6_0 = G_B5_0;
		if (L_18)
		{
			G_B7_0 = G_B5_0;
			goto IL_005d;
		}
	}
	{
		G_B8_0 = 1;
		G_B8_1 = G_B6_0;
		goto IL_005e;
	}

IL_005d:
	{
		G_B8_0 = 2;
		G_B8_1 = G_B7_0;
	}

IL_005e:
	{
		V_2 = (uint8_t)((int32_t)(uint8_t)G_B8_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = 0;
		uint8_t L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_3 = L_21;
		uint8_t L_22 = V_3;
		uint8_t L_23 = V_2;
		uint8_t L_24 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_1;
		int32_t L_26;
		L_26 = Pkcs1Encoding_FindStart_mAEB38C180856C7CA14B056420D5CD2D5CD4A3A3B(__this, L_24, L_25, NULL);
		V_4 = L_26;
		int32_t L_27 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		int32_t L_28 = V_4;
		G_B9_0 = G_B8_1;
		if (!((int32_t)(((((int32_t)((((int32_t)L_22) == ((int32_t)L_23))? 1 : 0)) == ((int32_t)0))? 1 : 0)|((((int32_t)L_28) < ((int32_t)((int32_t)10)))? 1 : 0))))
		{
			G_B10_0 = G_B8_1;
			goto IL_0096;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var)));
		Arrays_Fill_mE21DFB2A97B1AE17AFE700D6A367141498048242(L_29, (uint8_t)0, NULL);
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_30 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		NullCheck(L_30);
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_30, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral106CA6D4E30D25D2B2EAFADF9BE9BC07FDD3AF5A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Pkcs1Encoding_DecodeBlock_m503210F83A364B44C345EDE39A349C60ACB7E0F2_RuntimeMethod_var)));
	}

IL_0096:
	{
		if (!G_B10_0)
		{
			goto IL_00aa;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = V_1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var)));
		Arrays_Fill_mE21DFB2A97B1AE17AFE700D6A367141498048242(L_31, (uint8_t)0, NULL);
		InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB* L_32 = (InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCipherTextException_t7A41B73E78D6084BAC5E01176A4DACD158D0DAEB_il2cpp_TypeInfo_var)));
		NullCheck(L_32);
		InvalidCipherTextException__ctor_m5FFF28E1B79B44AFDE806E611468F8819ED82BD6(L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2748C15A306B030A614C7A2C0345FF6B7157B31)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Pkcs1Encoding_DecodeBlock_m503210F83A364B44C345EDE39A349C60ACB7E0F2_RuntimeMethod_var)));
	}

IL_00aa:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_1;
		NullCheck(L_33);
		int32_t L_34 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_33)->max_length)), L_34)));
		V_5 = L_35;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_1;
		int32_t L_37 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_5;
		NullCheck(L_39);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_36, L_37, (RuntimeArray*)L_38, 0, ((int32_t)(((RuntimeArray*)L_39)->max_length)), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_5;
		return L_40;
	}
}
// System.Int32 Org.BouncyCastle.Crypto.Encodings.Pkcs1Encoding::FindStart(System.Byte,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Pkcs1Encoding_FindStart_mAEB38C180856C7CA14B056420D5CD2D5CD4A3A3B (Pkcs1Encoding_tFD121B47DB50ECC57AC59AC0EC8E2008D56E27C8* __this, uint8_t ___0_type, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_block, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	{
		V_0 = (-1);
		V_1 = (bool)0;
		V_2 = 1;
		goto IL_0035;
	}

IL_0008:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_block;
		int32_t L_1 = V_2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_3 = L_3;
		uint8_t L_4 = V_3;
		int32_t L_5 = V_0;
		if (!((int32_t)(((((int32_t)L_4) == ((int32_t)0))? 1 : 0)&((((int32_t)L_5) < ((int32_t)0))? 1 : 0))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_6 = V_2;
		V_0 = L_6;
	}

IL_0019:
	{
		bool L_7 = V_1;
		uint8_t L_8 = ___0_type;
		int32_t L_9 = V_0;
		uint8_t L_10 = V_3;
		V_1 = (bool)((int32_t)((int32_t)L_7|((int32_t)(((int32_t)(((((int32_t)L_8) == ((int32_t)1))? 1 : 0)&((((int32_t)L_9) < ((int32_t)0))? 1 : 0)))&((((int32_t)((((int32_t)L_10) == ((int32_t)((int32_t)255)))? 1 : 0)) == ((int32_t)0))? 1 : 0)))));
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0035:
	{
		int32_t L_12 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___1_block;
		NullCheck(L_13);
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0008;
		}
	}
	{
		bool L_14 = V_1;
		if (L_14)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_15 = V_0;
		return L_15;
	}

IL_0040:
	{
		return (-1);
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
// System.Void Org.BouncyCastle.Crypto.EC.CustomNamedCurves::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomNamedCurves__ctor_mDFFE2362C63BFA808D8E5DFBFED3A7387A589134 (CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Org.BouncyCastle.Asn1.X9.X9ECPoint Org.BouncyCastle.Crypto.EC.CustomNamedCurves::ConfigureBasepoint(Org.BouncyCastle.Math.EC.ECCurve,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X9ECPoint_tE24AC28576C4C41CAA3A4373C00FB1486ACF83F4* CustomNamedCurves_ConfigureBasepoint_m73A6B78CBBCD5F505638428A7B7E2E0AFB22C3E6 (ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* ___0_curve, String_t* ___1_encoding, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hex_t7457F6D4DC900156C750BB04D59F8D3B4428F060_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WNafUtilities_t78832ACD19F88921A67F67B8B012C41794A27657_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X9ECPoint_tE24AC28576C4C41CAA3A4373C00FB1486ACF83F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* L_0 = ___0_curve;
		String_t* L_1 = ___1_encoding;
		il2cpp_codegen_runtime_class_init_inline(Hex_t7457F6D4DC900156C750BB04D59F8D3B4428F060_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = Hex_DecodeStrict_mBE650CF6A1009F02147648BB8A26152DDCDD6EC0(L_1, NULL);
		X9ECPoint_tE24AC28576C4C41CAA3A4373C00FB1486ACF83F4* L_3 = (X9ECPoint_tE24AC28576C4C41CAA3A4373C00FB1486ACF83F4*)il2cpp_codegen_object_new(X9ECPoint_tE24AC28576C4C41CAA3A4373C00FB1486ACF83F4_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		X9ECPoint__ctor_m5E14905D726C4DB6468279655ABE08F4DB2A77CC(L_3, L_0, L_2, NULL);
		X9ECPoint_tE24AC28576C4C41CAA3A4373C00FB1486ACF83F4* L_4 = L_3;
		NullCheck(L_4);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_5;
		L_5 = X9ECPoint_get_Point_m6528A5074A279106A841C863D2BD16C341D9254C(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(WNafUtilities_t78832ACD19F88921A67F67B8B012C41794A27657_il2cpp_TypeInfo_var);
		WNafUtilities_ConfigureBasepoint_m7E72E1E9C6275941FDE7215D09D732EB9DEFA8B3(L_5, NULL);
		return L_4;
	}
}
// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Crypto.EC.CustomNamedCurves::ConfigureCurve(Org.BouncyCastle.Math.EC.ECCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* CustomNamedCurves_ConfigureCurve_m92C21808F40275E6BE61D007883C5C2597481DDE (ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* ___0_curve, const RuntimeMethod* method) 
{
	{
		ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* L_0 = ___0_curve;
		return L_0;
	}
}
// Org.BouncyCastle.Math.EC.ECCurve Org.BouncyCastle.Crypto.EC.CustomNamedCurves::ConfigureCurveGlv(Org.BouncyCastle.Math.EC.ECCurve,Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* CustomNamedCurves_ConfigureCurveGlv_m2AA20C15E141BD138C1002253BC4385419D2A888 (ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* ___0_c, GlvTypeBParameters_tA2BFD2238E017AD101E59544E6EE92EC06179AEB* ___1_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlvTypeBEndomorphism_t1B1D78DB77BC16B0939641F401E31106099E52EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* L_0 = ___0_c;
		NullCheck(L_0);
		Config_tD12AA93D54F452B9AFEA0D10600F2AA24691AE75* L_1;
		L_1 = VirtualFuncInvoker0< Config_tD12AA93D54F452B9AFEA0D10600F2AA24691AE75* >::Invoke(7 /* Org.BouncyCastle.Math.EC.ECCurve/Config Org.BouncyCastle.Math.EC.ECCurve::Configure() */, L_0);
		ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* L_2 = ___0_c;
		GlvTypeBParameters_tA2BFD2238E017AD101E59544E6EE92EC06179AEB* L_3 = ___1_p;
		GlvTypeBEndomorphism_t1B1D78DB77BC16B0939641F401E31106099E52EC* L_4 = (GlvTypeBEndomorphism_t1B1D78DB77BC16B0939641F401E31106099E52EC*)il2cpp_codegen_object_new(GlvTypeBEndomorphism_t1B1D78DB77BC16B0939641F401E31106099E52EC_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		GlvTypeBEndomorphism__ctor_m3091F2F57C4B0CB499E927B16EFDE6F160BF135E(L_4, L_2, L_3, NULL);
		NullCheck(L_1);
		Config_tD12AA93D54F452B9AFEA0D10600F2AA24691AE75* L_5;
		L_5 = Config_SetEndomorphism_m0D7E8F65FB30ACCC4E5F396426BA84D16B82D7F4(L_1, L_4, NULL);
		NullCheck(L_5);
		ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* L_6;
		L_6 = Config_Create_m1192E34A792DE4C8A09EEAD76B781652A5F45568(L_5, NULL);
		return L_6;
	}
}
// Org.BouncyCastle.Math.BigInteger Org.BouncyCastle.Crypto.EC.CustomNamedCurves::FromHex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* CustomNamedCurves_FromHex_m32C78E230BCE285F943676EDA58A11F6C3E8D970 (String_t* ___0_hex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hex_t7457F6D4DC900156C750BB04D59F8D3B4428F060_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_hex;
		il2cpp_codegen_runtime_class_init_inline(Hex_t7457F6D4DC900156C750BB04D59F8D3B4428F060_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Hex_DecodeStrict_mBE650CF6A1009F02147648BB8A26152DDCDD6EC0(L_0, NULL);
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_2 = (BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12*)il2cpp_codegen_object_new(BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BigInteger__ctor_m5DA4C1B40BD125805911D274F49DA04D1175A5BD(L_2, 1, L_1, NULL);
		return L_2;
	}
}
// System.Void Org.BouncyCastle.Crypto.EC.CustomNamedCurves::DefineCurve(System.String,Org.BouncyCastle.Asn1.X9.X9ECParametersHolder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomNamedCurves_DefineCurve_mFED06981F29D7C76E1020AA1308094AC1931F506 (String_t* ___0_name, X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___1_holder, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_StaticFields*)il2cpp_codegen_static_fields_for(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var))->___names_4;
		String_t* L_1 = ___0_name;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		String_t* L_3 = ___0_name;
		il2cpp_codegen_runtime_class_init_inline(Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Platform_ToUpperInvariant_m5361B66F6794091B867CD152FBCD26759D01DFDF(L_3, NULL);
		___0_name = L_4;
		RuntimeObject* L_5 = ((CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_StaticFields*)il2cpp_codegen_static_fields_for(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var))->___nameToCurve_0;
		String_t* L_6 = ___0_name;
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_7 = ___1_holder;
		NullCheck(L_5);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void System.Collections.IDictionary::Add(System.Object,System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_5, L_6, L_7);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.EC.CustomNamedCurves::DefineCurveWithOid(System.String,Org.BouncyCastle.Asn1.DerObjectIdentifier,Org.BouncyCastle.Asn1.X9.X9ECParametersHolder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7 (String_t* ___0_name, DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___1_oid, X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* ___2_holder, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_StaticFields*)il2cpp_codegen_static_fields_for(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var))->___names_4;
		String_t* L_1 = ___0_name;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_3 = ((CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_StaticFields*)il2cpp_codegen_static_fields_for(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var))->___oidToName_3;
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_4 = ___1_oid;
		String_t* L_5 = ___0_name;
		NullCheck(L_3);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void System.Collections.IDictionary::Add(System.Object,System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_3, L_4, L_5);
		RuntimeObject* L_6 = ((CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_StaticFields*)il2cpp_codegen_static_fields_for(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var))->___oidToCurve_2;
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_7 = ___1_oid;
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_8 = ___2_holder;
		NullCheck(L_6);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void System.Collections.IDictionary::Add(System.Object,System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_6, L_7, L_8);
		String_t* L_9 = ___0_name;
		il2cpp_codegen_runtime_class_init_inline(Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = Platform_ToUpperInvariant_m5361B66F6794091B867CD152FBCD26759D01DFDF(L_9, NULL);
		___0_name = L_10;
		RuntimeObject* L_11 = ((CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_StaticFields*)il2cpp_codegen_static_fields_for(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var))->___nameToOid_1;
		String_t* L_12 = ___0_name;
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_13 = ___1_oid;
		NullCheck(L_11);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void System.Collections.IDictionary::Add(System.Object,System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_11, L_12, L_13);
		RuntimeObject* L_14 = ((CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_StaticFields*)il2cpp_codegen_static_fields_for(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var))->___nameToCurve_0;
		String_t* L_15 = ___0_name;
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_16 = ___2_holder;
		NullCheck(L_14);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void System.Collections.IDictionary::Add(System.Object,System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_14, L_15, L_16);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.EC.CustomNamedCurves::DefineCurveAlias(System.String,Org.BouncyCastle.Asn1.DerObjectIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomNamedCurves_DefineCurveAlias_m0BF0C0FBC57737045A632CE737D71797583F57A0 (String_t* ___0_name, DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___1_oid, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_StaticFields*)il2cpp_codegen_static_fields_for(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var))->___oidToCurve_2;
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_1 = ___1_oid;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		RuntimeObject* L_3 = V_0;
		if (L_3)
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CustomNamedCurves_DefineCurveAlias_m0BF0C0FBC57737045A632CE737D71797583F57A0_RuntimeMethod_var)));
	}

IL_0015:
	{
		String_t* L_5 = ___0_name;
		il2cpp_codegen_runtime_class_init_inline(Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var);
		String_t* L_6;
		L_6 = Platform_ToUpperInvariant_m5361B66F6794091B867CD152FBCD26759D01DFDF(L_5, NULL);
		___0_name = L_6;
		il2cpp_codegen_runtime_class_init_inline(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var);
		RuntimeObject* L_7 = ((CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_StaticFields*)il2cpp_codegen_static_fields_for(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var))->___nameToOid_1;
		String_t* L_8 = ___0_name;
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_9 = ___1_oid;
		NullCheck(L_7);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void System.Collections.IDictionary::Add(System.Object,System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_7, L_8, L_9);
		RuntimeObject* L_10 = ((CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_StaticFields*)il2cpp_codegen_static_fields_for(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var))->___nameToCurve_0;
		String_t* L_11 = ___0_name;
		RuntimeObject* L_12 = V_0;
		NullCheck(L_10);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void System.Collections.IDictionary::Add(System.Object,System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_10, L_11, L_12);
		return;
	}
}
// System.Void Org.BouncyCastle.Crypto.EC.CustomNamedCurves::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomNamedCurves__cctor_m457DFC9F060B89E875376C413EE05940DA0F7936 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Curve25519Holder_tF39AA971A231CB4B4CC413DFD910BE7A9D6B92B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GMObjectIdentifiers_t13F9571874C97A1CEB1C2CCEF5295838CF708CBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SM2P256V1Holder_t485E648CA73ACBF012BAC2A3FB9185AAF291EE4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecP128R1Holder_tA26EA6A7F7A8FB4774FC64750C08FAEFDD9AED9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecP160K1Holder_t17AB4CB4A638430E69B7DEABAD836AFAEA99DA58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecP160R1Holder_t28F24C382550802EE80D38240B51B160F0673BF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecP160R2Holder_t618B185F8B23E4518496A22BEBE5CF596AB09AF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecP192K1Holder_tBF29D835BDE49D97B34171CCA93209150E059C20_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecP192R1Holder_tC182C6696165A12F7271D5D4FD01B8FBB0E396A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecP224K1Holder_t39350033689D077BDD1E2D04C47B1A0A3BEAD101_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecP224R1Holder_tD102A567AC29704B9A9BCA9ED70E27FED1CC72CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecP256K1Holder_t9F128F0E30C4420C583BF0A2953B1939E8865F00_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecP256R1Holder_t39F733AB96E0C335A3D5E0C4249279E90BA5D77D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecP384R1Holder_t49D312BC73EAEC9F7E38EC859EF04D32F0A9102D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecP521R1Holder_tA0DCFED9DC7186346D0B1C1C603939F4A48835C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecT113R1Holder_t6BF6AC593665AE34156F631E30A610C546CF25FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecT113R2Holder_t470C28BB2C7522C7F30267132861CC1817B7EF6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecT131R1Holder_tD2DC2E3F0946730FC0064A1BE2BDDD1A031D40AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecT131R2Holder_t1DCD22AC2C6E92A73AD9F174516DB11A1E33372C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecT163K1Holder_t2394C1DCF3CD497996820DC11A4F76654CF7ED90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecT163R1Holder_t8BC3DCEA44BA53C630FA2416A43FBB6D3FA2191C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecT163R2Holder_t77955560C48EF15E97EF7D76F23BAAEE93DE5CD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecT193R1Holder_tA0CBD4683C1FEBE468B9AB1FDCF5D1A3C887BA12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecT193R2Holder_t479127B795F2927BCEE50E643E8AEE4DD57F1781_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecT233K1Holder_tD8B6FE5965F7160EC7829DBA6A2D6D63B6DF5309_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecT233R1Holder_t485B464B1C06FB829B23B6D9AF1F11921DCDCE54_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecT239K1Holder_tE2B4C933670F696ED4E23FC4B4D54A053487063B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecT283K1Holder_tFF0B62B99828A0101433D8282426F36C360E739F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecT283R1Holder_t8015A02A2E52A52BCA84606F14469B1A1D2F8640_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecT409K1Holder_tC8EE4A638C25C207D13D517C2AF89B7DB04E7359_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecT409R1Holder_t44E628CFA24F1197D5FC34E865C467A69F791A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecT571K1Holder_t0BD1A2D2C8502E8153E4B11B49BDD0D9766D7BF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecT571R1Holder_tCD797766DDE48158A3A9172D9F509D2F9F4EC755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral121C4C482521BAC60D9843CA1C2EC60228CD0E04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14B0A532250BF0860700A7A9315ACC3640CBADAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral190F59210696C8475CFA176585CFF1622879DBE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20F8D13FB02603A64C6EFA3BAB77505EA82A0329);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24A57AFC86DFC2F917FB3184B090926214BB2C69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral294687797ABDD257E21658BA5C1227138C09DD53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral295D64C15805E8B87DE6268E6C208DC097900D16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F7BF7401F3F7A3BA05C7AA32544809B4FB2BD98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral317820C53E8C96F3F3CB5EBCBC64786D3085C97D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B15D43C3C3CF7810D1DB4600E3558EA56F61F8D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral424361A636835E34F0B2F9CACA7AA037448A4A44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50A9CE486E3E9EFF76FBCA6538E018EA3EFFEE43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5532FE05AC1F9905E82EA8B3069C706903FBC6C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56D52AD282DBCFB2D99151E8DB5A2E4598834384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CF8F317A0F31BCFFA61870265D17E1F64F60FC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C5080960E62793E72538806C84DA62D6AA21637);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7187EE2A7EE264D8D5ED3324026616F1451B1256);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7456ED91E9BFF169E541673E536CBC66656AE3DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B6830563CB740F590BA73639EE340CD8924E7BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral884724CC95307DD596874FA08EE010892E4A183C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A935BC163FB7C550742399792C4D1966C3E2AF4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D4D325381C1A11D3538AD29D1B428BAF343DFF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral911B4A1FDE26660B4A0334FB33921AFC19DA7953);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9369C15741F567CCB187EBA6138866E39B755551);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C5C06DB877BD7B3274BB146538D0362FDA80644);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA344F15495B254FE3D4B9C07925DDD4CC039D78E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA345B47042D46E66AF27151C921F5ED266CD400D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6FA674D84149E00E1BD5050C2D218560759D2E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB30661A27320A92CF3AB0B7CB38F153F4CED107);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABB62B8930F03CF00DE8D94D913ACB908E73A303);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACB9A1832D3C353D963D539E4EC52CD3E7916B78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2CAB479468CF767096ACC4632C28817AA097913);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB49DFC1F57BC99FD5BB3C405A05DE58592B829CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6317D9BDEAB95DE0D033C96F2C144B408D15A4E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB864FA713E0DCD2132FFDF2E1F4113DC6243B5A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD8359A08BF3AE7D4D96436F5EBC8ABFC50B22EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF289442F665D0D89080A24EA187093A102B47B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA3EDAE8181D1A67857C59386CF03AAF007C8ABA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD70C4DD1CFCAE3F5B82091C96D28299660AAE0C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD744D02E9F69554C563F58496A5C08C4A6486D26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7E72730072DA8AB8DE547875E5CAA08AC56C08E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9A6748424872C8784852D78F7DD2DE942822C95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3707C5C43B4ABE6AA51AD5AAC5543F6F46FAFB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAE2B09CB631781CFCFCD552F2962F20F16EF79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDCB09D2C4DDB18CC9498045EEF5EB7E8BFC5A7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAC97F3CD7D12781406344C6B230BE7320057813);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFE75A95B7D3247C2BAC6EA44FC795138FB2A034);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Platform_CreateHashtable_m2F6AEC9A10A15D2D33C82EB4818C6A2B7E4ECA29(NULL);
		((CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_StaticFields*)il2cpp_codegen_static_fields_for(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var))->___nameToCurve_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_StaticFields*)il2cpp_codegen_static_fields_for(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var))->___nameToCurve_0), (void*)L_0);
		RuntimeObject* L_1;
		L_1 = Platform_CreateHashtable_m2F6AEC9A10A15D2D33C82EB4818C6A2B7E4ECA29(NULL);
		((CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_StaticFields*)il2cpp_codegen_static_fields_for(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var))->___nameToOid_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_StaticFields*)il2cpp_codegen_static_fields_for(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var))->___nameToOid_1), (void*)L_1);
		RuntimeObject* L_2;
		L_2 = Platform_CreateHashtable_m2F6AEC9A10A15D2D33C82EB4818C6A2B7E4ECA29(NULL);
		((CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_StaticFields*)il2cpp_codegen_static_fields_for(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var))->___oidToCurve_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_StaticFields*)il2cpp_codegen_static_fields_for(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var))->___oidToCurve_2), (void*)L_2);
		RuntimeObject* L_3;
		L_3 = Platform_CreateHashtable_m2F6AEC9A10A15D2D33C82EB4818C6A2B7E4ECA29(NULL);
		((CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_StaticFields*)il2cpp_codegen_static_fields_for(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var))->___oidToName_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_StaticFields*)il2cpp_codegen_static_fields_for(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var))->___oidToName_3), (void*)L_3);
		RuntimeObject* L_4;
		L_4 = Platform_CreateArrayList_mF7A2D52167B208F9F6E15D9405F1D52723B94E9E(NULL);
		((CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_StaticFields*)il2cpp_codegen_static_fields_for(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var))->___names_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_StaticFields*)il2cpp_codegen_static_fields_for(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var))->___names_4), (void*)L_4);
		il2cpp_codegen_runtime_class_init_inline(Curve25519Holder_tF39AA971A231CB4B4CC413DFD910BE7A9D6B92B7_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_5 = ((Curve25519Holder_tF39AA971A231CB4B4CC413DFD910BE7A9D6B92B7_StaticFields*)il2cpp_codegen_static_fields_for(Curve25519Holder_tF39AA971A231CB4B4CC413DFD910BE7A9D6B92B7_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurve_mFED06981F29D7C76E1020AA1308094AC1931F506(_stringLiteral7456ED91E9BFF169E541673E536CBC66656AE3DD, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_6 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecP128r1_20;
		il2cpp_codegen_runtime_class_init_inline(SecP128R1Holder_tA26EA6A7F7A8FB4774FC64750C08FAEFDD9AED9D_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_7 = ((SecP128R1Holder_tA26EA6A7F7A8FB4774FC64750C08FAEFDD9AED9D_StaticFields*)il2cpp_codegen_static_fields_for(SecP128R1Holder_tA26EA6A7F7A8FB4774FC64750C08FAEFDD9AED9D_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteralD7E72730072DA8AB8DE547875E5CAA08AC56C08E, L_6, L_7, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_8 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecP160k1_9;
		il2cpp_codegen_runtime_class_init_inline(SecP160K1Holder_t17AB4CB4A638430E69B7DEABAD836AFAEA99DA58_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_9 = ((SecP160K1Holder_t17AB4CB4A638430E69B7DEABAD836AFAEA99DA58_StaticFields*)il2cpp_codegen_static_fields_for(SecP160K1Holder_t17AB4CB4A638430E69B7DEABAD836AFAEA99DA58_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteral24A57AFC86DFC2F917FB3184B090926214BB2C69, L_8, L_9, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_10 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecP160r1_8;
		il2cpp_codegen_runtime_class_init_inline(SecP160R1Holder_t28F24C382550802EE80D38240B51B160F0673BF2_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_11 = ((SecP160R1Holder_t28F24C382550802EE80D38240B51B160F0673BF2_StaticFields*)il2cpp_codegen_static_fields_for(SecP160R1Holder_t28F24C382550802EE80D38240B51B160F0673BF2_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteralFAC97F3CD7D12781406344C6B230BE7320057813, L_10, L_11, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_12 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecP160r2_22;
		il2cpp_codegen_runtime_class_init_inline(SecP160R2Holder_t618B185F8B23E4518496A22BEBE5CF596AB09AF4_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_13 = ((SecP160R2Holder_t618B185F8B23E4518496A22BEBE5CF596AB09AF4_StaticFields*)il2cpp_codegen_static_fields_for(SecP160R2Holder_t618B185F8B23E4518496A22BEBE5CF596AB09AF4_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteral190F59210696C8475CFA176585CFF1622879DBE1, L_12, L_13, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_14 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecP192k1_23;
		il2cpp_codegen_runtime_class_init_inline(SecP192K1Holder_tBF29D835BDE49D97B34171CCA93209150E059C20_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_15 = ((SecP192K1Holder_tBF29D835BDE49D97B34171CCA93209150E059C20_StaticFields*)il2cpp_codegen_static_fields_for(SecP192K1Holder_tBF29D835BDE49D97B34171CCA93209150E059C20_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteral294687797ABDD257E21658BA5C1227138C09DD53, L_14, L_15, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_16 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecP192r1_32;
		il2cpp_codegen_runtime_class_init_inline(SecP192R1Holder_tC182C6696165A12F7271D5D4FD01B8FBB0E396A0_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_17 = ((SecP192R1Holder_tC182C6696165A12F7271D5D4FD01B8FBB0E396A0_StaticFields*)il2cpp_codegen_static_fields_for(SecP192R1Holder_tC182C6696165A12F7271D5D4FD01B8FBB0E396A0_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteralEDCB09D2C4DDB18CC9498045EEF5EB7E8BFC5A7C, L_16, L_17, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_18 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecP224k1_24;
		il2cpp_codegen_runtime_class_init_inline(SecP224K1Holder_t39350033689D077BDD1E2D04C47B1A0A3BEAD101_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_19 = ((SecP224K1Holder_t39350033689D077BDD1E2D04C47B1A0A3BEAD101_StaticFields*)il2cpp_codegen_static_fields_for(SecP224K1Holder_t39350033689D077BDD1E2D04C47B1A0A3BEAD101_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteralABB62B8930F03CF00DE8D94D913ACB908E73A303, L_18, L_19, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_20 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecP224r1_25;
		il2cpp_codegen_runtime_class_init_inline(SecP224R1Holder_tD102A567AC29704B9A9BCA9ED70E27FED1CC72CE_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_21 = ((SecP224R1Holder_tD102A567AC29704B9A9BCA9ED70E27FED1CC72CE_StaticFields*)il2cpp_codegen_static_fields_for(SecP224R1Holder_tD102A567AC29704B9A9BCA9ED70E27FED1CC72CE_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteral7187EE2A7EE264D8D5ED3324026616F1451B1256, L_20, L_21, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_22 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecP256k1_10;
		il2cpp_codegen_runtime_class_init_inline(SecP256K1Holder_t9F128F0E30C4420C583BF0A2953B1939E8865F00_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_23 = ((SecP256K1Holder_t9F128F0E30C4420C583BF0A2953B1939E8865F00_StaticFields*)il2cpp_codegen_static_fields_for(SecP256K1Holder_t9F128F0E30C4420C583BF0A2953B1939E8865F00_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteral9C5C06DB877BD7B3274BB146538D0362FDA80644, L_22, L_23, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_24 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecP256r1_33;
		il2cpp_codegen_runtime_class_init_inline(SecP256R1Holder_t39F733AB96E0C335A3D5E0C4249279E90BA5D77D_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_25 = ((SecP256R1Holder_t39F733AB96E0C335A3D5E0C4249279E90BA5D77D_StaticFields*)il2cpp_codegen_static_fields_for(SecP256R1Holder_t39F733AB96E0C335A3D5E0C4249279E90BA5D77D_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteralA345B47042D46E66AF27151C921F5ED266CD400D, L_24, L_25, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_26 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecP384r1_26;
		il2cpp_codegen_runtime_class_init_inline(SecP384R1Holder_t49D312BC73EAEC9F7E38EC859EF04D32F0A9102D_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_27 = ((SecP384R1Holder_t49D312BC73EAEC9F7E38EC859EF04D32F0A9102D_StaticFields*)il2cpp_codegen_static_fields_for(SecP384R1Holder_t49D312BC73EAEC9F7E38EC859EF04D32F0A9102D_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteralD744D02E9F69554C563F58496A5C08C4A6486D26, L_26, L_27, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_28 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecP521r1_27;
		il2cpp_codegen_runtime_class_init_inline(SecP521R1Holder_tA0DCFED9DC7186346D0B1C1C603939F4A48835C8_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_29 = ((SecP521R1Holder_tA0DCFED9DC7186346D0B1C1C603939F4A48835C8_StaticFields*)il2cpp_codegen_static_fields_for(SecP521R1Holder_tA0DCFED9DC7186346D0B1C1C603939F4A48835C8_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteralB6317D9BDEAB95DE0D033C96F2C144B408D15A4E, L_28, L_29, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_30 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT113r1_4;
		il2cpp_codegen_runtime_class_init_inline(SecT113R1Holder_t6BF6AC593665AE34156F631E30A610C546CF25FA_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_31 = ((SecT113R1Holder_t6BF6AC593665AE34156F631E30A610C546CF25FA_StaticFields*)il2cpp_codegen_static_fields_for(SecT113R1Holder_t6BF6AC593665AE34156F631E30A610C546CF25FA_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteralD70C4DD1CFCAE3F5B82091C96D28299660AAE0C9, L_30, L_31, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_32 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT113r2_5;
		il2cpp_codegen_runtime_class_init_inline(SecT113R2Holder_t470C28BB2C7522C7F30267132861CC1817B7EF6E_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_33 = ((SecT113R2Holder_t470C28BB2C7522C7F30267132861CC1817B7EF6E_StaticFields*)il2cpp_codegen_static_fields_for(SecT113R2Holder_t470C28BB2C7522C7F30267132861CC1817B7EF6E_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteralE3707C5C43B4ABE6AA51AD5AAC5543F6F46FAFB2, L_32, L_33, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_34 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT131r1_14;
		il2cpp_codegen_runtime_class_init_inline(SecT131R1Holder_tD2DC2E3F0946730FC0064A1BE2BDDD1A031D40AC_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_35 = ((SecT131R1Holder_tD2DC2E3F0946730FC0064A1BE2BDDD1A031D40AC_StaticFields*)il2cpp_codegen_static_fields_for(SecT131R1Holder_tD2DC2E3F0946730FC0064A1BE2BDDD1A031D40AC_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteralECAE2B09CB631781CFCFCD552F2962F20F16EF79, L_34, L_35, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_36 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT131r2_15;
		il2cpp_codegen_runtime_class_init_inline(SecT131R2Holder_t1DCD22AC2C6E92A73AD9F174516DB11A1E33372C_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_37 = ((SecT131R2Holder_t1DCD22AC2C6E92A73AD9F174516DB11A1E33372C_StaticFields*)il2cpp_codegen_static_fields_for(SecT131R2Holder_t1DCD22AC2C6E92A73AD9F174516DB11A1E33372C_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteralD9A6748424872C8784852D78F7DD2DE942822C95, L_36, L_37, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_38 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT163k1_1;
		il2cpp_codegen_runtime_class_init_inline(SecT163K1Holder_t2394C1DCF3CD497996820DC11A4F76654CF7ED90_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_39 = ((SecT163K1Holder_t2394C1DCF3CD497996820DC11A4F76654CF7ED90_StaticFields*)il2cpp_codegen_static_fields_for(SecT163K1Holder_t2394C1DCF3CD497996820DC11A4F76654CF7ED90_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteral5CF8F317A0F31BCFFA61870265D17E1F64F60FC4, L_38, L_39, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_40 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT163r1_2;
		il2cpp_codegen_runtime_class_init_inline(SecT163R1Holder_t8BC3DCEA44BA53C630FA2416A43FBB6D3FA2191C_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_41 = ((SecT163R1Holder_t8BC3DCEA44BA53C630FA2416A43FBB6D3FA2191C_StaticFields*)il2cpp_codegen_static_fields_for(SecT163R1Holder_t8BC3DCEA44BA53C630FA2416A43FBB6D3FA2191C_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteralFFE75A95B7D3247C2BAC6EA44FC795138FB2A034, L_40, L_41, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_42 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT163r2_11;
		il2cpp_codegen_runtime_class_init_inline(SecT163R2Holder_t77955560C48EF15E97EF7D76F23BAAEE93DE5CD1_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_43 = ((SecT163R2Holder_t77955560C48EF15E97EF7D76F23BAAEE93DE5CD1_StaticFields*)il2cpp_codegen_static_fields_for(SecT163R2Holder_t77955560C48EF15E97EF7D76F23BAAEE93DE5CD1_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteral7B6830563CB740F590BA73639EE340CD8924E7BC, L_42, L_43, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_44 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT193r1_16;
		il2cpp_codegen_runtime_class_init_inline(SecT193R1Holder_tA0CBD4683C1FEBE468B9AB1FDCF5D1A3C887BA12_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_45 = ((SecT193R1Holder_tA0CBD4683C1FEBE468B9AB1FDCF5D1A3C887BA12_StaticFields*)il2cpp_codegen_static_fields_for(SecT193R1Holder_tA0CBD4683C1FEBE468B9AB1FDCF5D1A3C887BA12_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteralB49DFC1F57BC99FD5BB3C405A05DE58592B829CD, L_44, L_45, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_46 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT193r2_17;
		il2cpp_codegen_runtime_class_init_inline(SecT193R2Holder_t479127B795F2927BCEE50E643E8AEE4DD57F1781_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_47 = ((SecT193R2Holder_t479127B795F2927BCEE50E643E8AEE4DD57F1781_StaticFields*)il2cpp_codegen_static_fields_for(SecT193R2Holder_t479127B795F2927BCEE50E643E8AEE4DD57F1781_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteral3B15D43C3C3CF7810D1DB4600E3558EA56F61F8D, L_46, L_47, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_48 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT233k1_18;
		il2cpp_codegen_runtime_class_init_inline(SecT233K1Holder_tD8B6FE5965F7160EC7829DBA6A2D6D63B6DF5309_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_49 = ((SecT233K1Holder_tD8B6FE5965F7160EC7829DBA6A2D6D63B6DF5309_StaticFields*)il2cpp_codegen_static_fields_for(SecT233K1Holder_tD8B6FE5965F7160EC7829DBA6A2D6D63B6DF5309_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteralB864FA713E0DCD2132FFDF2E1F4113DC6243B5A5, L_48, L_49, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_50 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT233r1_19;
		il2cpp_codegen_runtime_class_init_inline(SecT233R1Holder_t485B464B1C06FB829B23B6D9AF1F11921DCDCE54_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_51 = ((SecT233R1Holder_t485B464B1C06FB829B23B6D9AF1F11921DCDCE54_StaticFields*)il2cpp_codegen_static_fields_for(SecT233R1Holder_t485B464B1C06FB829B23B6D9AF1F11921DCDCE54_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteral884724CC95307DD596874FA08EE010892E4A183C, L_50, L_51, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_52 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT239k1_3;
		il2cpp_codegen_runtime_class_init_inline(SecT239K1Holder_tE2B4C933670F696ED4E23FC4B4D54A053487063B_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_53 = ((SecT239K1Holder_tE2B4C933670F696ED4E23FC4B4D54A053487063B_StaticFields*)il2cpp_codegen_static_fields_for(SecT239K1Holder_tE2B4C933670F696ED4E23FC4B4D54A053487063B_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteralA344F15495B254FE3D4B9C07925DDD4CC039D78E, L_52, L_53, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_54 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT283k1_12;
		il2cpp_codegen_runtime_class_init_inline(SecT283K1Holder_tFF0B62B99828A0101433D8282426F36C360E739F_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_55 = ((SecT283K1Holder_tFF0B62B99828A0101433D8282426F36C360E739F_StaticFields*)il2cpp_codegen_static_fields_for(SecT283K1Holder_tFF0B62B99828A0101433D8282426F36C360E739F_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteralACB9A1832D3C353D963D539E4EC52CD3E7916B78, L_54, L_55, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_56 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT283r1_13;
		il2cpp_codegen_runtime_class_init_inline(SecT283R1Holder_t8015A02A2E52A52BCA84606F14469B1A1D2F8640_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_57 = ((SecT283R1Holder_t8015A02A2E52A52BCA84606F14469B1A1D2F8640_StaticFields*)il2cpp_codegen_static_fields_for(SecT283R1Holder_t8015A02A2E52A52BCA84606F14469B1A1D2F8640_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteralB2CAB479468CF767096ACC4632C28817AA097913, L_56, L_57, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_58 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT409k1_28;
		il2cpp_codegen_runtime_class_init_inline(SecT409K1Holder_tC8EE4A638C25C207D13D517C2AF89B7DB04E7359_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_59 = ((SecT409K1Holder_tC8EE4A638C25C207D13D517C2AF89B7DB04E7359_StaticFields*)il2cpp_codegen_static_fields_for(SecT409K1Holder_tC8EE4A638C25C207D13D517C2AF89B7DB04E7359_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteral50A9CE486E3E9EFF76FBCA6538E018EA3EFFEE43, L_58, L_59, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_60 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT409r1_29;
		il2cpp_codegen_runtime_class_init_inline(SecT409R1Holder_t44E628CFA24F1197D5FC34E865C467A69F791A8D_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_61 = ((SecT409R1Holder_t44E628CFA24F1197D5FC34E865C467A69F791A8D_StaticFields*)il2cpp_codegen_static_fields_for(SecT409R1Holder_t44E628CFA24F1197D5FC34E865C467A69F791A8D_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteral14B0A532250BF0860700A7A9315ACC3640CBADAE, L_60, L_61, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_62 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT571k1_30;
		il2cpp_codegen_runtime_class_init_inline(SecT571K1Holder_t0BD1A2D2C8502E8153E4B11B49BDD0D9766D7BF0_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_63 = ((SecT571K1Holder_t0BD1A2D2C8502E8153E4B11B49BDD0D9766D7BF0_StaticFields*)il2cpp_codegen_static_fields_for(SecT571K1Holder_t0BD1A2D2C8502E8153E4B11B49BDD0D9766D7BF0_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteral8A935BC163FB7C550742399792C4D1966C3E2AF4, L_62, L_63, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_64 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT571r1_31;
		il2cpp_codegen_runtime_class_init_inline(SecT571R1Holder_tCD797766DDE48158A3A9172D9F509D2F9F4EC755_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_65 = ((SecT571R1Holder_tCD797766DDE48158A3A9172D9F509D2F9F4EC755_StaticFields*)il2cpp_codegen_static_fields_for(SecT571R1Holder_tCD797766DDE48158A3A9172D9F509D2F9F4EC755_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteral2F7BF7401F3F7A3BA05C7AA32544809B4FB2BD98, L_64, L_65, NULL);
		il2cpp_codegen_runtime_class_init_inline(GMObjectIdentifiers_t13F9571874C97A1CEB1C2CCEF5295838CF708CBD_il2cpp_TypeInfo_var);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_66 = ((GMObjectIdentifiers_t13F9571874C97A1CEB1C2CCEF5295838CF708CBD_StaticFields*)il2cpp_codegen_static_fields_for(GMObjectIdentifiers_t13F9571874C97A1CEB1C2CCEF5295838CF708CBD_il2cpp_TypeInfo_var))->___sm2p256v1_31;
		il2cpp_codegen_runtime_class_init_inline(SM2P256V1Holder_t485E648CA73ACBF012BAC2A3FB9185AAF291EE4B_il2cpp_TypeInfo_var);
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_67 = ((SM2P256V1Holder_t485E648CA73ACBF012BAC2A3FB9185AAF291EE4B_StaticFields*)il2cpp_codegen_static_fields_for(SM2P256V1Holder_t485E648CA73ACBF012BAC2A3FB9185AAF291EE4B_il2cpp_TypeInfo_var))->___Instance_1;
		CustomNamedCurves_DefineCurveWithOid_m8ECD3B898136F0AF62A2EE7E47C4339B1B6549E7(_stringLiteral911B4A1FDE26660B4A0334FB33921AFC19DA7953, L_66, L_67, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_68 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT163r2_11;
		CustomNamedCurves_DefineCurveAlias_m0BF0C0FBC57737045A632CE737D71797583F57A0(_stringLiteralCA3EDAE8181D1A67857C59386CF03AAF007C8ABA, L_68, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_69 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT233r1_19;
		CustomNamedCurves_DefineCurveAlias_m0BF0C0FBC57737045A632CE737D71797583F57A0(_stringLiteral8D4D325381C1A11D3538AD29D1B428BAF343DFF1, L_69, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_70 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT283r1_13;
		CustomNamedCurves_DefineCurveAlias_m0BF0C0FBC57737045A632CE737D71797583F57A0(_stringLiteral20F8D13FB02603A64C6EFA3BAB77505EA82A0329, L_70, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_71 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT409r1_29;
		CustomNamedCurves_DefineCurveAlias_m0BF0C0FBC57737045A632CE737D71797583F57A0(_stringLiteral5532FE05AC1F9905E82EA8B3069C706903FBC6C7, L_71, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_72 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT571r1_31;
		CustomNamedCurves_DefineCurveAlias_m0BF0C0FBC57737045A632CE737D71797583F57A0(_stringLiteral295D64C15805E8B87DE6268E6C208DC097900D16, L_72, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_73 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT163k1_1;
		CustomNamedCurves_DefineCurveAlias_m0BF0C0FBC57737045A632CE737D71797583F57A0(_stringLiteralBF289442F665D0D89080A24EA187093A102B47B8, L_73, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_74 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT233k1_18;
		CustomNamedCurves_DefineCurveAlias_m0BF0C0FBC57737045A632CE737D71797583F57A0(_stringLiteral9369C15741F567CCB187EBA6138866E39B755551, L_74, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_75 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT283k1_12;
		CustomNamedCurves_DefineCurveAlias_m0BF0C0FBC57737045A632CE737D71797583F57A0(_stringLiteral317820C53E8C96F3F3CB5EBCBC64786D3085C97D, L_75, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_76 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT409k1_28;
		CustomNamedCurves_DefineCurveAlias_m0BF0C0FBC57737045A632CE737D71797583F57A0(_stringLiteral6C5080960E62793E72538806C84DA62D6AA21637, L_76, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_77 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecT571k1_30;
		CustomNamedCurves_DefineCurveAlias_m0BF0C0FBC57737045A632CE737D71797583F57A0(_stringLiteral424361A636835E34F0B2F9CACA7AA037448A4A44, L_77, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_78 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecP192r1_32;
		CustomNamedCurves_DefineCurveAlias_m0BF0C0FBC57737045A632CE737D71797583F57A0(_stringLiteralA6FA674D84149E00E1BD5050C2D218560759D2E2, L_78, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_79 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecP224r1_25;
		CustomNamedCurves_DefineCurveAlias_m0BF0C0FBC57737045A632CE737D71797583F57A0(_stringLiteral121C4C482521BAC60D9843CA1C2EC60228CD0E04, L_79, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_80 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecP256r1_33;
		CustomNamedCurves_DefineCurveAlias_m0BF0C0FBC57737045A632CE737D71797583F57A0(_stringLiteralAB30661A27320A92CF3AB0B7CB38F153F4CED107, L_80, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_81 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecP384r1_26;
		CustomNamedCurves_DefineCurveAlias_m0BF0C0FBC57737045A632CE737D71797583F57A0(_stringLiteralBD8359A08BF3AE7D4D96436F5EBC8ABFC50B22EA, L_81, NULL);
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_82 = ((SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_StaticFields*)il2cpp_codegen_static_fields_for(SecObjectIdentifiers_tECBBD2E395067526E695A886824D85C9C530574F_il2cpp_TypeInfo_var))->___SecP521r1_27;
		CustomNamedCurves_DefineCurveAlias_m0BF0C0FBC57737045A632CE737D71797583F57A0(_stringLiteral56D52AD282DBCFB2D99151E8DB5A2E4598834384, L_82, NULL);
		return;
	}
}
// Org.BouncyCastle.Asn1.X9.X9ECParameters Org.BouncyCastle.Crypto.EC.CustomNamedCurves::GetByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X9ECParameters_tA38EBA48073F91FDA9CF46ED605B02A1EB1F8B5A* CustomNamedCurves_GetByName_m7CA0E06DE50D0019993C6213E47803349E0952D5 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_StaticFields*)il2cpp_codegen_static_fields_for(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var))->___nameToCurve_0;
		String_t* L_1 = ___0_name;
		il2cpp_codegen_runtime_class_init_inline(Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Platform_ToUpperInvariant_m5361B66F6794091B867CD152FBCD26759D01DFDF(L_1, NULL);
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_0, L_2);
		V_0 = ((X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100*)CastclassClass((RuntimeObject*)L_3, X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100_il2cpp_TypeInfo_var));
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0020;
		}
	}
	{
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_5 = V_0;
		NullCheck(L_5);
		X9ECParameters_tA38EBA48073F91FDA9CF46ED605B02A1EB1F8B5A* L_6;
		L_6 = X9ECParametersHolder_get_Parameters_m33A8C49E5ACEC57194C025DC6E533F1DBB841676(L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		return (X9ECParameters_tA38EBA48073F91FDA9CF46ED605B02A1EB1F8B5A*)NULL;
	}
}
// Org.BouncyCastle.Asn1.X9.X9ECParameters Org.BouncyCastle.Crypto.EC.CustomNamedCurves::GetByOid(Org.BouncyCastle.Asn1.DerObjectIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X9ECParameters_tA38EBA48073F91FDA9CF46ED605B02A1EB1F8B5A* CustomNamedCurves_GetByOid_m39608DC276524D39D4B15CFC731F0C7155A99571 (DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___0_oid, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_StaticFields*)il2cpp_codegen_static_fields_for(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var))->___oidToCurve_2;
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_1 = ___0_oid;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = ((X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100*)CastclassClass((RuntimeObject*)L_2, X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100_il2cpp_TypeInfo_var));
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		X9ECParametersHolder_tF895D0C348F9743710EE2AE43855D0F8FC258100* L_4 = V_0;
		NullCheck(L_4);
		X9ECParameters_tA38EBA48073F91FDA9CF46ED605B02A1EB1F8B5A* L_5;
		L_5 = X9ECParametersHolder_get_Parameters_m33A8C49E5ACEC57194C025DC6E533F1DBB841676(L_4, NULL);
		return L_5;
	}

IL_001b:
	{
		return (X9ECParameters_tA38EBA48073F91FDA9CF46ED605B02A1EB1F8B5A*)NULL;
	}
}
// Org.BouncyCastle.Asn1.DerObjectIdentifier Org.BouncyCastle.Crypto.EC.CustomNamedCurves::GetOid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* CustomNamedCurves_GetOid_m4F33C28C383891FD6DAFD9E88A238128C7D99D06 (String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_StaticFields*)il2cpp_codegen_static_fields_for(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var))->___nameToOid_1;
		String_t* L_1 = ___0_name;
		il2cpp_codegen_runtime_class_init_inline(Platform_tB8BE26343314F0C376C0C419EB13968831F47C4F_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Platform_ToUpperInvariant_m5361B66F6794091B867CD152FBCD26759D01DFDF(L_1, NULL);
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_0, L_2);
		return ((DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC*)CastclassClass((RuntimeObject*)L_3, DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC_il2cpp_TypeInfo_var));
	}
}
// System.String Org.BouncyCastle.Crypto.EC.CustomNamedCurves::GetName(Org.BouncyCastle.Asn1.DerObjectIdentifier)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CustomNamedCurves_GetName_mB55BCD88E67CB8CA41B68FB0D893CECBB0E22349 (DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* ___0_oid, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_StaticFields*)il2cpp_codegen_static_fields_for(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var))->___oidToName_3;
		DerObjectIdentifier_tB8EAE64EBBA7A9C9F10E1DD92CA5B8700C6CA8AC* L_1 = ___0_oid;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_0, L_1);
		return ((String_t*)CastclassSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
	}
}
// System.Collections.IEnumerable Org.BouncyCastle.Crypto.EC.CustomNamedCurves::get_Names()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomNamedCurves_get_Names_mA3EDE31B4E18607BD28DD247ACADFF53AD31615C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumerableProxy_tF96BE797C0C85614DD7CA44F9F78BB8F09CCF3BE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_StaticFields*)il2cpp_codegen_static_fields_for(CustomNamedCurves_tA7EC0194766E41232B1020517C99088D5EA1BF96_il2cpp_TypeInfo_var))->___names_4;
		EnumerableProxy_tF96BE797C0C85614DD7CA44F9F78BB8F09CCF3BE* L_1 = (EnumerableProxy_tF96BE797C0C85614DD7CA44F9F78BB8F09CCF3BE*)il2cpp_codegen_object_new(EnumerableProxy_tF96BE797C0C85614DD7CA44F9F78BB8F09CCF3BE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EnumerableProxy__ctor_m575DD70A90B3FE6E4D21BA247414EFA2599410E2(L_1, L_0, NULL);
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ParametersWithRandom_get_Parameters_mFED49C45204261ACF08DC4617FC59E9025C5DA8E_inline (ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___parameters_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* RsaKeyParameters_get_Modulus_m4DE7784F2CBD8201D9B01EDA3269965502AE5CAB_inline (RsaKeyParameters_t23B0699A6205E8EAB5E737E82755715CEF09A40B* __this, const RuntimeMethod* method) 
{
	{
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_0 = __this->___modulus_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ParametersWithRandom_get_Random_m8BBD0BE6E5E963B33589571245F7869CD9E70AC0_inline (ParametersWithRandom_tF1E567C369EA7C838D2F730FDD72A9A4EADEF2C5* __this, const RuntimeMethod* method) 
{
	{
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_0 = __this->___random_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AsymmetricKeyParameter_get_IsPrivate_mA62181D04A9E29391B524D9BE8FE92AC3E75ADCE_inline (AsymmetricKeyParameter_tA5D2359A65E6D2862EC9B31F64730CA7A117109A* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___privateKey_0;
		return L_0;
	}
}
