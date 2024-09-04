#include "pch-cpp.hpp"





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

struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475;
struct ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SecureRandomU5BU5D_t9CDCDE8DC35C008A2EDEA385E2A7FE78B9F9CFF6;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E;
struct PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7;
struct AbstractECLookupTable_tD49EEC6E0BC98DBC97F6581BB4211C7DC7DF6D53;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12;
struct ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0;
struct ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F;
struct ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70;
struct Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E;
struct Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1;
struct IRandomGenerator_t50CA6B7268CF1B6ED0762EB5808373C32743C8F1;
struct IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScaleXNegateYPointMap_t63E3B8E633561D40E9BE7F67705486C0E67997F6;
struct ScaleXPointMap_tF1B81BDB0EE2532A25DD4A5A3414F7ABFC4D43EE;
struct ScaleYNegateXPointMap_t8F999DAE07ABD4397B7D281D3480326254AF7949;
struct ScaleYPointMap_tFB123433FF26470DBEA0E5E3D54D0DD2FD476C3C;
struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076;
struct Sha512Digest_tE91E268ACB5BECD3DBB22B6740A29D8DB468B674;
struct ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940;
struct SimpleLookupTable_t9ECCEB124D23824E4C38677FCD1A27109DF349EF;
struct String_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct X25519_t9D382833FD73D107C6463A8431850F172600F997;
struct X25519Field_t140C9A98182383D32387BD3259E304F952D5044B;
struct X448_tE3E7DA868EFB06A58B828DAB39D08493B6BA44FE;
struct X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A;
struct PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374;
struct PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1;
struct PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F;
struct PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D;
struct PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sha512Digest_tE91E268ACB5BECD3DBB22B6740A29D8DB468B674_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____0AEC099C87E7062A57D1C79734EDDD28A07A1684746EE8640132BB252E6BF5A1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____120918433B634757ADE589703127976B7C5C2009E8DB37632123F45FA2B87F2E_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____16599A4F9A12ECCBFC361B547840304B9E48CBC431F387243C6859C475427D16_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____3AF2ACD8D2D27336879BC958CFB6B4271FA89EC7C3EC62B7AD1E0E20B7AF303D_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____5BBB9265FCB4E834C68440328645B1A187F68D3275881FC46B21564B11326DA5_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____6965AC9D48CA477E9A17658D33A217051648138AD7024514DE014D8001B533C3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____97CAAC7D5BE7722352C1AB556BFE01D3F3CCA0F50B5A648195D6415006620C8F_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____BABB01CD1E2AD140F7D2AF35515DA38E8936F0BA0298BCF0245EB5692A3F69CC_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____BD6174A7C16E1AF07272966A9C071C8A3CF16B2726C50D672A09F60636B08901_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____D6380FB2FF2DD88C9290D88B81E78BCA13AAAB4BE827B103062AFBB1085B0793_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____E3B4E767F318263A8E7A64E1D61F6D3368A3B59AF34CBB94E657E7FCC58F5BA5_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____ECA151F23D399F9FE976255B143D0691D0BE043E033B0E2814C0A547336D6545_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062880938476E2B20298E6FC08CB87B48E5C7853;
IL2CPP_EXTERN_C String_t* _stringLiteral244DDD15B47825F82F417E249D4FFA669F1BE35C;
IL2CPP_EXTERN_C String_t* _stringLiteral777C88FC8E1B713E59061089D6CFB18EB75A109E;
IL2CPP_EXTERN_C String_t* _stringLiteralCA6E8DE812C20B70B9E93F176F4D555488AD06AC;
IL2CPP_EXTERN_C String_t* _stringLiteralF25DFE14753005E858F66583A1F6CC7A6AE3FCAC;
IL2CPP_EXTERN_C const RuntimeMethod* Ed25519_ImplSign_m5CDF91BF1789D5D3877BAE5E78D2D91B79EBB175_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed25519_ImplSign_mA92EB9E379E963AC49BB2CD5E195DEB84D012477_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed25519_ImplVerify_m8FBF7741296488BE35F38F5AA312F606283D4123_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed25519_ScalarMultBaseEncoded_mAB6EF691CEBB095D5D250B52A9D018C1B619E48D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed25519_ScalarMultBaseYZ_mE90C09BD92A2C957973B7D5321D60279FB28B7BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed25519_SignPrehash_m32C174A787FD4D7AAC18A1A458033EFE61B5B650_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed25519_SignPrehash_m523E6ED5B777B71028F9EEFB77B83F8B0C4265D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed25519_VerifyPrehash_m4F4427C3AF365882833BF88E9DC54A814C38B5C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed448_ImplSign_m2321B0D0756DA0B6582A2F9BF7225F4DCCB913D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed448_ImplSign_m6835855D576D6786D1CCE863EEDA49B06876C692_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed448_ImplVerify_mB7897E9ABF91E0DE3A03B8A6106B119CE93749C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed448_ScalarMultBaseEncoded_m604EF7DEB4822EB0F67CD3B671C52D492084977B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed448_ScalarMultBaseXY_mA45BD372C83D0681CDDF5CAC40699E679809BB49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed448_SignPrehash_m2ECB570548C7EF75FE6DC123CA1F1D6D5A825B25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed448_SignPrehash_m49B26FC07C3EA2CFC2BA859ADE076A0F15362D95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ed448_VerifyPrehash_mD8D48245C9E6A838EC3F172079D09889C02FD7FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleLookupTable_Lookup_m47C899F6C721B315EACE718CA0081A5EF98E72B4_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E;
struct PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct AbstractECLookupTable_tD49EEC6E0BC98DBC97F6581BB4211C7DC7DF6D53  : public RuntimeObject
{
};
struct BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___magnitude;
	int32_t ___sign;
	int32_t ___nBits;
	int32_t ___nBitLength;
	int32_t ___mQuote;
};
struct ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F  : public RuntimeObject
{
};
struct ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70  : public RuntimeObject
{
	ECCurve_t8FBD2E395BA95F5514A276068C34D519B12DA1A0* ___m_curve;
	ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* ___m_x;
	ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* ___m_y;
	ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475* ___m_zs;
	bool ___m_withCompression;
	RuntimeObject* ___m_preCompTable;
};
struct Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E  : public RuntimeObject
{
};
struct Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893  : public RuntimeObject
{
};
struct KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8  : public RuntimeObject
{
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___state;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___dataQueue;
	int32_t ___rate;
	int32_t ___bitsInQueue;
	int32_t ___fixedOutputLength;
	bool ___squeezing;
};
struct LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA  : public RuntimeObject
{
	int32_t ___MyByteLength;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___xBuf;
	int32_t ___xBufOff;
	int64_t ___byteCount1;
	int64_t ___byteCount2;
	uint64_t ___H1;
	uint64_t ___H2;
	uint64_t ___H3;
	uint64_t ___H4;
	uint64_t ___H5;
	uint64_t ___H6;
	uint64_t ___H7;
	uint64_t ___H8;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___W;
	int32_t ___wOff;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	int32_t ____inext;
	int32_t ____inextp;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray;
};
struct ScaleXNegateYPointMap_t63E3B8E633561D40E9BE7F67705486C0E67997F6  : public RuntimeObject
{
	ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* ___scale;
};
struct ScaleXPointMap_tF1B81BDB0EE2532A25DD4A5A3414F7ABFC4D43EE  : public RuntimeObject
{
	ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* ___scale;
};
struct ScaleYNegateXPointMap_t8F999DAE07ABD4397B7D281D3480326254AF7949  : public RuntimeObject
{
	ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* ___scale;
};
struct ScaleYPointMap_tFB123433FF26470DBEA0E5E3D54D0DD2FD476C3C  : public RuntimeObject
{
	ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* ___scale;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct X25519_t9D382833FD73D107C6463A8431850F172600F997  : public RuntimeObject
{
};
struct X25519Field_t140C9A98182383D32387BD3259E304F952D5044B  : public RuntimeObject
{
};
struct X448_tE3E7DA868EFB06A58B828DAB39D08493B6BA44FE  : public RuntimeObject
{
};
struct X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A  : public RuntimeObject
{
};
struct PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___y;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___u;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___v;
};
struct PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___x;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___y;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___z;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___t;
};
struct PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ypx_h;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ymx_h;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___xyd;
};
struct PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D  : public RuntimeObject
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___z;
};
struct PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E  : public RuntimeObject
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___x;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___y;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076  : public Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8
{
	RuntimeObject* ___generator;
};
struct Sha512Digest_tE91E268ACB5BECD3DBB22B6740A29D8DB468B674  : public LongDigest_t4A64C97D051ADA1FB0CF6551145A0B54173811DA
{
};
struct ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940  : public KeccakDigest_tFDED919F4A7F5F5B3BBF92844841AE90758CF9A8
{
};
struct SimpleLookupTable_t9ECCEB124D23824E4C38677FCD1A27109DF349EF  : public AbstractECLookupTable_tD49EEC6E0BC98DBC97F6581BB4211C7DC7DF6D53
{
	ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* ___points;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
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
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct Algorithm_tD18E9771BE2D646C2777B6FDC155C47D560832AD 
{
	int32_t ___value__;
};
struct Algorithm_tA0E18D6E28E34818E80441110463917144258D2F 
{
	int32_t ___value__;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12_StaticFields
{
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ___primeLists;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___primeProducts;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ZeroMagnitude;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___ZeroEncoding;
	BigIntegerU5BU5D_t71C3CA6C040A0DA1DF2F08947608838C666EB376* ___SMALL_CONSTANTS;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___Zero;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___One;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___Two;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___Three;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___Four;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___Ten;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___BitLengthTable;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix2;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix2E;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix8;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix8E;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix10;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix10E;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix16;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___radix16E;
	SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___RandomSource;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ExpWindowThresholds;
};
struct ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70_StaticFields
{
	ECFieldElementU5BU5D_t7EB3591892546AF0010AE6A2231A6305FCB8D475* ___EMPTY_ZS;
};
struct Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields
{
	int32_t ___PrehashSize;
	int32_t ___PublicKeySize;
	int32_t ___SecretKeySize;
	int32_t ___SignatureSize;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Dom2Prefix;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___P;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___L;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___B_x;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___B_y;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___C_d;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___C_d2;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___C_d4;
	RuntimeObject* ___precompLock;
	PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* ___precompBaseTable;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___precompBase;
};
struct Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields
{
	int32_t ___PrehashSize;
	int32_t ___PublicKeySize;
	int32_t ___SecretKeySize;
	int32_t ___SignatureSize;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Dom4Prefix;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___P;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___L;
	BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* ___N;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___B_x;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___B_y;
	RuntimeObject* ___precompLock;
	PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* ___precompBaseTable;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___precompBase;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom;
};
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___RootNegOne;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076_StaticFields
{
	int64_t ___counter;
	RuntimeObject* ___counterLock;
	SecureRandomU5BU5D_t9CDCDE8DC35C008A2EDEA385E2A7FE78B9F9CFF6* ___master;
	double ___DoubleScale;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44  : public RuntimeArray
{
	ALIGN_FIELD (8) ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* m_Items[1];

	inline ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
struct PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E  : public RuntimeArray
{
	ALIGN_FIELD (8) PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* m_Items[1];

	inline PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7  : public RuntimeArray
{
	ALIGN_FIELD (8) PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* m_Items[1];

	inline PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AbstractECLookupTable__ctor_mD310E8B45B57D68651FEA001D859AE5E4DAD60F8 (AbstractECLookupTable_tD49EEC6E0BC98DBC97F6581BB4211C7DC7DF6D53* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* SimpleLookupTable_Copy_m48AE3DD8FACE730D9A21F2682F8AB1F2D216E7D8 (ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* ___0_points, int32_t ___1_off, int32_t ___2_len, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_DecodeScalar_mF915991FC51CC1C531B99B3D87217E3E985156FC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat256_MulAddTo_m8B3C898A440E622C1272DCD8EB8227B1829414D2 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_zz, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Encode32_mA7B3CF555D61A36DA989FE6DC937A79E397271C2 (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed25519_ReduceScalar_mD780972496D8A1DA02CB3A7D463080942383134A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Sqr_mB15CC5A9D9BB357C43A061B60BD2E274903C2FB7 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_y, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Sub_m7A0E1334ECDDFC850F079F15D60D17CDF84313E6 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_y, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_AddOne_m8F5B49ECFC615CC1BE807805DABC3AE3C54843F0 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Normalize_mC463C8BA74C0B150F40EAD612A70018C755CE6F3 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X25519Field_IsZero_m8384BE3A2D74A8463872015C1F229DBD4F41C6A5 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Add_mE42245EE0D3016DCB819BF463F2580247E7FA54E (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_y, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Decode32_m53341C01183646B8891E645D87E8E33F7DB59522 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_bsOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_n, int32_t ___3_nOff, int32_t ___4_nLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat256_Gte_m7264B79F77188C4F0E44AC64F8258B3121EDB331 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sha512Digest__ctor_mB7BE1F624B4567BE9C60541257FB34CAFC2879FC (Sha512Digest_tE91E268ACB5BECD3DBB22B6740A29D8DB468B674* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Ed25519_CreateDigest_m042640B5880163387460A08AA43BC5E07DB7DCFF (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed25519_Decode32_mA8C3D424B894F778BB229542505243B2E8CA0212 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Arrays_CopyOfRange_mF6EEA7FA46A65BA424589A487A5A2141E81F0B7D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, int32_t ___1_from, int32_t ___2_to, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_CheckPointVar_m40621D5066C5B417FD9D99A44D0485D2CB24320E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Decode_m8FE40BFDE568A070AEC52DF8F87617C656DFA758 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_x, int32_t ___1_xOff, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_SubOne_m7E2C470874374F12F02DB9EC16302D45FBB4CCF1 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X25519Field_SqrtRatioVar_m0D5391A6E512FA9A8B59D73F260FE6ABFCE6FC9F (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_u, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_v, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X25519Field_IsZeroVar_mD08CBF5E1DD41999EF24651979F12D82861B6F40 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Negate_m079FDC9497D28C7EBF4089A99D06C82A9367B7FB (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointExtendXY_m9F293F80D166C5CAE889BC2D9767F71684D43B9C (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Encode24_mE7E8C0752A529CF1F940FEBE270EA1440D11A4C5 (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Inv_mC9A09236B1DCBCFE7255DEA4A0F25A774F96009A (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed25519_CheckPoint_mE798872B60DEA52A0A038DDAFE2623D61E869363 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Encode_m2B9C76CDD5B01A1661088FA691F5876A8FA0478A (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_z, int32_t ___2_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PruneScalar_m56CD8593C5CF468236F131617BF3EE0173E85229 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_n, int32_t ___1_nOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ScalarMultBaseEncoded_mAB6EF691CEBB095D5D250B52A9D018C1B619E48D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_r, int32_t ___2_rOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Dom2_mA68F2F9605FAE632890496912ED69B5D2881A25E (RuntimeObject* ___0_d, uint8_t ___1_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_ctx, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed25519_CalculateS_m1F93864972C7255B63A3DCC110C4A411425CEC00 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_r, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_k, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_CheckContextVar_mDFA025D09712B6075A3DC1D2768C1BFC77DFEFA7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_ctx, uint8_t ___1_phflag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ImplSign_m6926BA609DA40696A71295D208FE6B5BE907615E (RuntimeObject* ___0_d, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_h, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_s, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_pk, int32_t ___4_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_ctx, uint8_t ___6_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___7_m, int32_t ___8_mOff, int32_t ___9_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___10_sig, int32_t ___11_sigOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_CheckScalarVar_m58ADCB25E84844D275152B9E38C958B8597B7F76 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointExt__ctor_m541D13E5A98D087E319F54FAF37765C8DEEE5830 (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_DecodePointVar_m7DC3B2651AD7E79DE59116366433A2D476522D53 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, int32_t ___1_pOff, bool ___2_negate, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___3_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointAccum__ctor_m02F2BD460E06C5F956372EBC95EA93A876B563D0 (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ScalarMultStrausVar_m646C77407574C0F7FF0E8753FE230C79603DB457 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_nb, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_np, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___2_p, PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___3_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed25519_EncodePoint_mBEA6F4802D28DE1891472760C26573EF3EA278B9 (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___0_p, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_r, int32_t ___2_rOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_AreEqual_m93263147E08C039BD573B4D2A4921988053170B7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_a, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Apm_mED3BE5EB432FD54561DA0B00D84840E0C430FCD3 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_y, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_zp, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_zm, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Carry_m273213E66F2AA33F5C77CFD69C9E6D6F86E729F2 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Copy_mAF5DAED0CB27202F9F5E0E7EB8DEAE12F379F5CD (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, int32_t ___1_xOff, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_One_m1D6D371AFB78F2E955B7A3DD50CCB448114877FF (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_CMov_m274890DC42E9AFAD3A0287FBBF78399174C8B8FB (int32_t ___0_cond, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_x, int32_t ___2_xOff, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_z, int32_t ___4_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointAddVar_mFF31009E4CA505DEA7AE3B0CEFFE5F4C5029EA88 (bool ___0_negate, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___1_p, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___2_q, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___3_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* Ed25519_PointCopy_mB76A8BE8A053E8817D9D4DA5E8AF79A64EB0F813 (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Zero_mC1A8A4BC8E8988C33A0A4C4BDE7178C65773E545 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* Ed25519_PointPrecompVar_mF4B84C5A89BE61FBEEBD1340FE1B21EA8D88F66B (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___0_p, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointExtendXY_m48D88A83C26E9F8EBEAF6FEB2C9356DCBB0A4651 (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointSetNeutral_m29CF6C6C418CB4FB942FA35436B818B14ED166F9 (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* Ed25519_PointCopy_m4233FFB0A07E510EC78FC34FB64C1E01330B80A9 (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointDouble_m3926FE5EDD96367ACE0367B72AE2FE9A1F206342 (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___0_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointPrecomp__ctor_m66DA0C74BDD15D7C88DDAFF41BEEC059417DBC60 (PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed25519_Decode24_mBF5DB3EE18C815345127D7DB5D0AA1BC279B5AF9 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Encode56_m9F60EFA925B7E53778917E9728B6719B746E4EC5 (uint64_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Precompute_m169AF523C0ADDECB5E529B628BFEC72875662325 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointSetNeutral_m34793AAD0F939D88829A6BAC98966A23FFD05962 (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_CAdd_m6E497E6974AED75B020BE8C26449592FEEE12A4D (int32_t ___0_len, int32_t ___1_mask, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___4_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_ShiftDownBit_m3CE84243637D1040BEAA3950386F0923D09CC613 (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, uint32_t ___2_c, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Interleave_Shuffle2_mD9042F86AFE5D72683F9827BBA6B3B3B7607F9D1 (uint32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointLookup_mAF8F4CD3273C180B25F8AC9A54BAC55DA7637143 (int32_t ___0_block, int32_t ___1_index, PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* ___2_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_CSwap_mDBC8D645062A0E07EAFF97F6606E669FCFBB595E (int32_t ___0_swap, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_a, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_CNegate_m5357302A53AB2967D26307DA225025AFD2F04AA3 (int32_t ___0_negate, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointAddPrecomp_m0824C3E18BEFC8A02033DCD7C7DB9102A41EB769 (PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* ___0_p, PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___1_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ScalarMultBase_m28490C31C36B0BE402DC7E03F634DFD75C7FFAC4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___1_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed25519_CheckPoint_mDC127E7E8202E84EE8ACA5B9FEBB8B2E710F343F (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_y, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* Ed25519_GetWnafVar_m846DBBE656263E4852B3501258271417B924DF2F (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_n, int32_t ___1_width, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointAddVar_mB4434C7D7F45DA5BF0D580CC4F1A746069BBBEF0 (bool ___0_negate, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___1_p, PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___2_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ImplSign_mA92EB9E379E963AC49BB2CD5E195DEB84D012477 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_ctx, uint8_t ___3_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_m, int32_t ___5_mOff, int32_t ___6_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___7_sig, int32_t ___8_sigOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ImplSign_m5CDF91BF1789D5D3877BAE5E78D2D91B79EBB175 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, uint8_t ___5_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_m, int32_t ___7_mOff, int32_t ___8_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___9_sig, int32_t ___10_sigOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_ImplVerify_m8FBF7741296488BE35F38F5AA312F606283D4123 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sig, int32_t ___1_sigOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, uint8_t ___5_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_m, int32_t ___7_mOff, int32_t ___8_mLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Strings_ToByteArray_m75FA6151AA28B680E0C9DB857AC734483A308A63 (String_t* ___0_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_DecodeScalar_m545F13A8FD6DFBADE40B569CC47D7FDC0AEAD981 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Nat_MulAddTo_m6BFD4149F839F58A815479AF2EDCA11CC4F44BC4 (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_zz, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Encode32_m1DA3C6C6B6A16A8BBA98264C47914286616F2C14 (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed448_ReduceScalar_m54319A41543916403172AE7F20FEC21DD5AAE4EA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Add_mCFABA589F46545F656A1CCEAD2669A8BBC9C452A (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Mul_mC51EE78E9A520350193A2014FCC0403E597F2FE5 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, uint32_t ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_SubOne_mA0311031490735E0417201B0AE88EE8D7A10DAA3 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Normalize_mF473952189B87EBD9915C6D49F69511F3A056A34 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X448Field_IsZero_m46BADDCE7BC56E69F5E81490C58F0C1C5F7A6449 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Sub_mBFA894A2EA11C691607571A006356D308952945E (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Decode32_mBD688D89F0C5187AA44261A0F7164640AE484985 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_bsOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_n, int32_t ___3_nOff, int32_t ___4_nLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nat_Gte_m0AB9084A9A6D11BE869652D2FBCB3D24FC3F3135 (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Ed448_CreateXof_m502686A3D00CEACF0BD8605AEAD15D0A16A04934 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShakeDigest__ctor_m2B3B14BB44A9AD5C9CDBDD41EE6122B928CFC532 (ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940* __this, int32_t ___0_bitLength, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed448_Decode32_m159290D4C5D7A722FF1C898DDB419C8C1F591635 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_CheckPointVar_m1F8350197D7E4053DF5BD0D2A5352285D860EB40 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Decode_mB821749EAC11700BE5BD90446A8B3C370D8AEC69 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Negate_mBF98477D36756508975C89717D0F4F5ED7590956 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_AddOne_m1433ACFDABE593672910D354940A7211EAFCCA70 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X448Field_SqrtRatioVar_mD1C1C3854B0B8A83203458927A26521D15B8632A (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_u, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_v, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X448Field_IsZeroVar_m778F59C0FFAB3021A4B8B3BFEA328753407F039D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointExtendXY_m662064FF7F95758494BCB9C0D3E322C61A60675C (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Encode24_mB870B50A8B58650FD797666D051807FD942D1F9E (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Inv_mFB31775FD55C6B3D7374C0523C25D0D0B570783F (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed448_CheckPoint_m822CBA6037606DC9344575A094B7AFD21EAF52E6 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Encode_m9B96C1858895EC17068B864722F324DF9600E600 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_z, int32_t ___2_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PruneScalar_m0FBADCA509B824C09321682080565AF7C7BB3C25 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_n, int32_t ___1_nOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ScalarMultBaseEncoded_m604EF7DEB4822EB0F67CD3B671C52D492084977B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_r, int32_t ___2_rOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Dom4_m672480903703837361B9574439007118964C9883 (RuntimeObject* ___0_d, uint8_t ___1_x, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed448_CalculateS_mC7164CE5601E9078C4D27CAC86DB240091C06A3D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_r, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_k, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_CheckContextVar_m9CE191D7DBB025269FFB58C7A6898A55B5460821 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_ctx, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ImplSign_m11416C7647A15516DCD7BA5B05293B1157D88046 (RuntimeObject* ___0_d, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_h, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_s, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_pk, int32_t ___4_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_ctx, uint8_t ___6_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___7_m, int32_t ___8_mOff, int32_t ___9_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___10_sig, int32_t ___11_sigOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_CheckScalarVar_m017925602D6B1406D60F266E38582E882D86B846 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_s, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointExt__ctor_m97C9A86D0FB34EDB66C2E5A4EBFC4A99C4D14EA7 (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_DecodePointVar_m2AA0C45F69EB41E09CC10E807E57CB6501317613 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, int32_t ___1_pOff, bool ___2_negate, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___3_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ScalarMultStrausVar_m8841B106D7624F16097473A1A1909E8D094AC166 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_nb, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_np, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___2_p, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___3_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed448_EncodePoint_m3CFA6EC0A268BEF689B0E994153F7EA37A295E6A (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___0_p, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_r, int32_t ___2_rOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Carry_m5ABB04A0158406E10A444D4B875C7D1E769A5461 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Copy_m68F680AAB9014E095E873FE939DE740F5C9484CB (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_One_m39BF2AA4124E41CD828C54B977F7956073C7616C (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_CMov_mACE58C351958EDC9BCD1165A6EB550D180A0F858 (int32_t ___0_cond, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, int32_t ___2_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_z, int32_t ___4_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* Ed448_PointCopy_m1920398F7AFB9D1A01A1835018D1D03C07179EFF (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointDouble_m49FD2EC3B20EEBA39C5BB1F83A0E1395423D5D3A (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___0_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointAddVar_m43C18B554A4E39E9F9CF71C9634B60C5DB7B7604 (bool ___0_negate, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___1_p, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___2_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Zero_m05486C7731A9B64673D03E7C52177B5BCF68A0D6 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* Ed448_PointPrecompVar_m2A60BD4319E8B97F316A4FF42AF1C06201156248 (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___0_p, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointSetNeutral_m29E3031C9BF46C5C92ECE8F4352BB29C22BD52E5 (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___0_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed448_Decode24_mD5CE10B8704B6509EC76248CB962A87C758B18BC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed448_Decode16_m55E2D057A0C8D3C42857F72A1FBD2D160B238DDA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Encode56_mD071120F48E4C43F8F5BD7C588EB71F4F7DC3F1B (uint64_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Precompute_m8A35B0BAD0452897FD7AC0459ED016C3328BF230 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointPrecomp__ctor_m3B237EFDABECABABE666EC66DA1B9C243C0F0F6A (PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointLookup_m6636543B36FB21204D5B32F62118CFD05A4C474C (int32_t ___0_block, int32_t ___1_index, PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* ___2_p, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_CNegate_m7F86185A4985B8748F03AF3EBA5B932D37BFC930 (int32_t ___0_negate, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointAddPrecomp_m88F5C042045BE8BB4BAD911D910CBE8807727F8B (PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* ___0_p, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___1_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ScalarMultBase_m2D6652BE8542CE3C83F9CE4F4E0FD3DDF2F312B6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___1_r, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed448_CheckPoint_m6D277D2D5AE6D9C1F4D2D54A93BAA0EEE36644C3 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* Ed448_GetWnafVar_m04BC3C268B0D730FD1CD80ACF00A8940BA0AFD17 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_n, int32_t ___1_width, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ImplSign_m2321B0D0756DA0B6582A2F9BF7225F4DCCB913D3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_ctx, uint8_t ___3_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_m, int32_t ___5_mOff, int32_t ___6_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___7_sig, int32_t ___8_sigOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ImplSign_m6835855D576D6786D1CCE863EEDA49B06876C692 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, uint8_t ___5_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_m, int32_t ___7_mOff, int32_t ___8_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___9_sig, int32_t ___10_sigOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_ImplVerify_mB7897E9ABF91E0DE3A03B8A6106B119CE93749C4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sig, int32_t ___1_sigOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, uint8_t ___5_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_m, int32_t ___7_mOff, int32_t ___8_mLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* Nat_ToBigInteger_mBC1B7ABADB999C0D597C8989D1F974A8029F7B5C (int32_t ___0_len, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519_ScalarMult_mD1D258825B551FD0FABF718C1356BB1D9C266076 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_u, int32_t ___3_uOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_r, int32_t ___5_rOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Arrays_AreAllZeroes_m00EDC1A86815A2606AFBC1CDEEF443194E64A3B6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buf, int32_t ___1_off, int32_t ___2_len, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t X25519_Decode32_m461D780F4D502F115CCBC00A75FA5BEE0B38C30B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519_ScalarMultBase_mA340AF7921631C7515B38E5A536377725A319CB7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_r, int32_t ___3_rOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Mul_mFA884789DDB885762BA615284647CBFD5DB73338 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, int32_t ___1_y, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519_DecodeScalar_m54E16A3AFCA8DFA7AA85A9D1C79F02DF37B004D4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519_PointDouble_m0AF75B9E42787C3A36229DD1B078D7AC168C1659 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ScalarMultBaseYZ_mE90C09BD92A2C957973B7D5321D60279FB28B7BB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_y, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Decode128_mDA03236C56BA01D7F541A1EB1F3F06B31BACDDE2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t X25519Field_Decode32_mA07EE8A6AE8090C0DFBEED7305348C22B017733B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Encode128_m5E7109300D7A38491C55A529F44B32609B6773BD (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, int32_t ___1_xOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_bs, int32_t ___3_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Encode32_m85E4ECF05749041669F8C55862B917DE5162E6EF (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_PowPm5d8_mCAFE9FBEC6C78E9A249A5A95148A5A883D365ADD (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_rx2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_rz, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Sqr_mC9D04D6107FEA13858E92BD10BAAB68EF5B2A070 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, int32_t ___1_n, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Reduce_m8D5B6C58711997EF80851B436B5932AF6E27EF42 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_z, int32_t ___1_x, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448_ScalarMult_m93A90498F3CB938105111C02F3C9885721F24D31 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_u, int32_t ___3_uOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_r, int32_t ___5_rOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t X448_Decode32_m7C9BD99DD7BC8E0DBC49CDB68178C416774B54C5 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448_ScalarMultBase_mF21108463D61312674EC816D580B47F660FCFE98 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_r, int32_t ___3_rOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448_DecodeScalar_mF00D1642C8C841AB0009FB4783B48C706FE91E37 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_n, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_CSwap_mFDCBDAB247729A9691B6D38A031BA7F55B3071B7 (int32_t ___0_swap, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_a, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448_PointDouble_m8BC4AEABDEE68595B08442A67D161007F412DC9B (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ScalarMultBaseXY_mA45BD372C83D0681CDDF5CAC40699E679809BB49 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Decode56_m5821C0F20E3F9F798208DFAA49342A29398CB4EB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t X448Field_Decode32_m25113FA52AD31A20C4B59550A504D623108A4C47 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t X448Field_Decode24_m8F5333CFDB228809FDEB9B35B242E8A03F4D7AE9 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Encode56_m78ADF144536E23D1EDFC19CDB3CF4DF91E10FD4F (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_bs, int32_t ___3_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Encode32_m872DE9D39A53C5FC5559D590BD3EEAF2326C36DC (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Encode24_m01514F6F5A5AFF058105A98F2F5636CBE04F89A4 (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_PowPm3d4_m542F80EF0B4562CBC33DEC553D2EEEC507161CB0 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Sqr_m17DF280AD326A592C466FD195CDC57B87F7120C9 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_n, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Reduce_m55F5A199F9E88EB69C51FE10311E4ED37B200891 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_z, int32_t ___1_x, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleXNegateYPointMap__ctor_mB62967685C1461521E7A4A0BBCBFC4B68DD2E349 (ScaleXNegateYPointMap_t63E3B8E633561D40E9BE7F67705486C0E67997F6* __this, ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* ___0_scale, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* L_0 = ___0_scale;
		__this->___scale = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scale), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ScaleXNegateYPointMap_Map_mFDAD33FDCAE8922F1BDCA324ECEDC1895E4FD675 (ScaleXNegateYPointMap_t63E3B8E633561D40E9BE7F67705486C0E67997F6* __this, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___0_p, const RuntimeMethod* method) 
{
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_0 = ___0_p;
		ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* L_1 = __this->___scale;
		NullCheck(L_0);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_2;
		L_2 = VirtualFuncInvoker1< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* >::Invoke(21, L_0, L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleXPointMap__ctor_m32A66E4BD736EF29441FDBA3ECA4C208D6CADC87 (ScaleXPointMap_tF1B81BDB0EE2532A25DD4A5A3414F7ABFC4D43EE* __this, ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* ___0_scale, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* L_0 = ___0_scale;
		__this->___scale = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scale), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ScaleXPointMap_Map_mFBCF224B1305ADD4B2B5479801423D7E0AD984B2 (ScaleXPointMap_tF1B81BDB0EE2532A25DD4A5A3414F7ABFC4D43EE* __this, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___0_p, const RuntimeMethod* method) 
{
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_0 = ___0_p;
		ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* L_1 = __this->___scale;
		NullCheck(L_0);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_2;
		L_2 = VirtualFuncInvoker1< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* >::Invoke(20, L_0, L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleYNegateXPointMap__ctor_mA1CCD19F4AEC544972D90F73AA716D7192F26D8C (ScaleYNegateXPointMap_t8F999DAE07ABD4397B7D281D3480326254AF7949* __this, ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* ___0_scale, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* L_0 = ___0_scale;
		__this->___scale = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scale), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ScaleYNegateXPointMap_Map_m9CAACD2DADF8C508C3CCD0F30547BD3DCCF57726 (ScaleYNegateXPointMap_t8F999DAE07ABD4397B7D281D3480326254AF7949* __this, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___0_p, const RuntimeMethod* method) 
{
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_0 = ___0_p;
		ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* L_1 = __this->___scale;
		NullCheck(L_0);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_2;
		L_2 = VirtualFuncInvoker1< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* >::Invoke(23, L_0, L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleYPointMap__ctor_mB2731FCC6096F4D9BC8F98BD21FDD85D5554D2A5 (ScaleYPointMap_tFB123433FF26470DBEA0E5E3D54D0DD2FD476C3C* __this, ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* ___0_scale, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* L_0 = ___0_scale;
		__this->___scale = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scale), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ScaleYPointMap_Map_m3CBA8BDFC312ACC2381230BE222C765A9A53462D (ScaleYPointMap_tFB123433FF26470DBEA0E5E3D54D0DD2FD476C3C* __this, ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* ___0_p, const RuntimeMethod* method) 
{
	{
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_0 = ___0_p;
		ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* L_1 = __this->___scale;
		NullCheck(L_0);
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_2;
		L_2 = VirtualFuncInvoker1< ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*, ECFieldElement_tFDABB4546D507335606A3FE6582E58CE2E1CF72F* >::Invoke(22, L_0, L_1);
		return L_2;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* SimpleLookupTable_Copy_m48AE3DD8FACE730D9A21F2682F8AB1F2D216E7D8 (ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* ___0_points, int32_t ___1_off, int32_t ___2_len, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___2_len;
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_1 = (ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44*)(ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44*)SZArrayNew(ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0017;
	}

IL_000b:
	{
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_2 = V_0;
		int32_t L_3 = V_1;
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_4 = ___0_points;
		int32_t L_5 = ___1_off;
		int32_t L_6 = V_1;
		NullCheck(L_4);
		int32_t L_7 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_8);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70*)L_8);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0017:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = ___2_len;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_000b;
		}
	}
	{
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_12 = V_0;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleLookupTable__ctor_m4C6F21981C81DF2FBD0A4CE5DEBBA7B3BC6DD701 (SimpleLookupTable_t9ECCEB124D23824E4C38677FCD1A27109DF349EF* __this, ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* ___0_points, int32_t ___1_off, int32_t ___2_len, const RuntimeMethod* method) 
{
	{
		AbstractECLookupTable__ctor_mD310E8B45B57D68651FEA001D859AE5E4DAD60F8(__this, NULL);
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_0 = ___0_points;
		int32_t L_1 = ___1_off;
		int32_t L_2 = ___2_len;
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_3;
		L_3 = SimpleLookupTable_Copy_m48AE3DD8FACE730D9A21F2682F8AB1F2D216E7D8(L_0, L_1, L_2, NULL);
		__this->___points = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___points), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleLookupTable_get_Size_m4B392A02873C9CC5C96AEAC85020B3C2BF38EB2D (SimpleLookupTable_t9ECCEB124D23824E4C38677FCD1A27109DF349EF* __this, const RuntimeMethod* method) 
{
	{
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_0 = __this->___points;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* SimpleLookupTable_Lookup_m47C899F6C721B315EACE718CA0081A5EF98E72B4 (SimpleLookupTable_t9ECCEB124D23824E4C38677FCD1A27109DF349EF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral777C88FC8E1B713E59061089D6CFB18EB75A109E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SimpleLookupTable_Lookup_m47C899F6C721B315EACE718CA0081A5EF98E72B4_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* SimpleLookupTable_LookupVar_m45B96DE58EDA9386A458B4A8595FF21CF4F66C37 (SimpleLookupTable_t9ECCEB124D23824E4C38677FCD1A27109DF349EF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		ECPointU5BU5D_t9D317957BA54459FC0B18095D2E18CCDC6E14C44* L_0 = __this->___points;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ECPoint_tA362A9CF0100F9061D188BEEDE016117977F7F70* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed25519_CalculateS_m1F93864972C7255B63A3DCC110C4A411425CEC00 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_r, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_k, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_r;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_DecodeScalar_mF915991FC51CC1C531B99B3D87217E3E985156FC(L_1, 0, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		V_1 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_k;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_1;
		Ed25519_DecodeScalar_mF915991FC51CC1C531B99B3D87217E3E985156FC(L_4, 0, L_5, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		V_2 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___2_s;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_2;
		Ed25519_DecodeScalar_mF915991FC51CC1C531B99B3D87217E3E985156FC(L_7, 0, L_8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		uint32_t L_12;
		L_12 = Nat256_MulAddTo_m8B3C898A440E622C1272DCD8EB8227B1829414D2(L_9, L_10, L_11, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64));
		V_3 = L_13;
		V_4 = 0;
		goto IL_0058;
	}

IL_0044:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_3;
		int32_t L_19 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_Encode32_mA7B3CF555D61A36DA989FE6DC937A79E397271C2(L_17, L_18, ((int32_t)il2cpp_codegen_multiply(L_19, 4)), NULL);
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0058:
	{
		int32_t L_21 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0044;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = Ed25519_ReduceScalar_mD780972496D8A1DA02CB3A7D463080942383134A(L_23, NULL);
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_CheckContextVar_mDFA025D09712B6075A3DC1D2768C1BFC77DFEFA7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_ctx, uint8_t ___1_phflag, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_ctx;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		uint8_t L_1 = ___1_phflag;
		if (!L_1)
		{
			goto IL_0016;
		}
	}

IL_0006:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_ctx;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_ctx;
		NullCheck(L_3);
		return (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) < ((int32_t)((int32_t)256)))? 1 : 0);
	}

IL_0014:
	{
		return (bool)0;
	}

IL_0016:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed25519_CheckPoint_mE798872B60DEA52A0A038DDAFE2623D61E869363 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___0_x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_1;
		X25519Field_Sqr_mB15CC5A9D9BB357C43A061B60BD2E274903C2FB7(L_3, L_4, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___1_y;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_2;
		X25519Field_Sqr_mB15CC5A9D9BB357C43A061B60BD2E274903C2FB7(L_5, L_6, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_0;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_7, L_8, L_9, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_2;
		X25519Field_Sub_m7A0E1334ECDDFC850F079F15D60D17CDF84313E6(L_10, L_11, L_12, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___C_d;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_0;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_13, L_14, L_15, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_0;
		X25519Field_AddOne_m8F5B49ECFC615CC1BE807805DABC3AE3C54843F0(L_16, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_0;
		X25519Field_Sub_m7A0E1334ECDDFC850F079F15D60D17CDF84313E6(L_17, L_18, L_19, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_0;
		X25519Field_Normalize_mC463C8BA74C0B150F40EAD612A70018C755CE6F3(L_20, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_0;
		int32_t L_22;
		L_22 = X25519Field_IsZero_m8384BE3A2D74A8463872015C1F229DBD4F41C6A5(L_21, NULL);
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed25519_CheckPoint_mDC127E7E8202E84EE8ACA5B9FEBB8B2E710F343F (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_y, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_3 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___0_x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_1;
		X25519Field_Sqr_mB15CC5A9D9BB357C43A061B60BD2E274903C2FB7(L_4, L_5, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___1_y;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_2;
		X25519Field_Sqr_mB15CC5A9D9BB357C43A061B60BD2E274903C2FB7(L_6, L_7, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___2_z;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_3;
		X25519Field_Sqr_mB15CC5A9D9BB357C43A061B60BD2E274903C2FB7(L_8, L_9, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_0;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_10, L_11, L_12, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_2;
		X25519Field_Sub_m7A0E1334ECDDFC850F079F15D60D17CDF84313E6(L_13, L_14, L_15, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_2;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_16, L_17, L_18, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_3;
		X25519Field_Sqr_mB15CC5A9D9BB357C43A061B60BD2E274903C2FB7(L_19, L_20, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___C_d;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_0;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_21, L_22, L_23, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_0;
		X25519Field_Add_mE42245EE0D3016DCB819BF463F2580247E7FA54E(L_24, L_25, L_26, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = V_0;
		X25519Field_Sub_m7A0E1334ECDDFC850F079F15D60D17CDF84313E6(L_27, L_28, L_29, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = V_0;
		X25519Field_Normalize_mC463C8BA74C0B150F40EAD612A70018C755CE6F3(L_30, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		int32_t L_32;
		L_32 = X25519Field_IsZero_m8384BE3A2D74A8463872015C1F229DBD4F41C6A5(L_31, NULL);
		return L_32;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_CheckPointVar_m40621D5066C5B417FD9D99A44D0485D2CB24320E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_p;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_Decode32_m53341C01183646B8891E645D87E8E33F7DB59522(L_1, 0, L_2, 0, 8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		NullCheck(L_3);
		uint32_t* L_4 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(7)));
		int32_t L_5 = *((uint32_t*)L_4);
		*((int32_t*)L_4) = (int32_t)((int32_t)(L_5&((int32_t)2147483647LL)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___P;
		bool L_8;
		L_8 = Nat256_Gte_m7264B79F77188C4F0E44AC64F8258B3121EDB331(L_6, L_7, NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_CheckScalarVar_m58ADCB25E84844D275152B9E38C958B8597B7F76 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_s;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_DecodeScalar_mF915991FC51CC1C531B99B3D87217E3E985156FC(L_1, 0, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___L;
		bool L_5;
		L_5 = Nat256_Gte_m7264B79F77188C4F0E44AC64F8258B3121EDB331(L_3, L_4, NULL);
		return (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Ed25519_CreateDigest_m042640B5880163387460A08AA43BC5E07DB7DCFF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sha512Digest_tE91E268ACB5BECD3DBB22B6740A29D8DB468B674_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Sha512Digest_tE91E268ACB5BECD3DBB22B6740A29D8DB468B674* L_0 = (Sha512Digest_tE91E268ACB5BECD3DBB22B6740A29D8DB468B674*)il2cpp_codegen_object_new(Sha512Digest_tE91E268ACB5BECD3DBB22B6740A29D8DB468B674_il2cpp_TypeInfo_var);
		Sha512Digest__ctor_mB7BE1F624B4567BE9C60541257FB34CAFC2879FC(L_0, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Ed25519_CreatePrehash_m4CFB9B2F8B08D8ABDB92923412FDEC70A95CEABF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Ed25519_CreateDigest_m042640B5880163387460A08AA43BC5E07DB7DCFF(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed25519_Decode24_mBF5DB3EE18C815345127D7DB5D0AA1BC279B5AF9 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bs;
		int32_t L_1 = ___1_off;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_bs;
		int32_t L_5 = ___1_off;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		___1_off = L_6;
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_bs;
		int32_t L_10 = ___1_off;
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		___1_off = L_11;
		NullCheck(L_9);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		return ((int32_t)(((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_8<<8))))|((int32_t)((int32_t)L_13<<((int32_t)16)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed25519_Decode32_mA8C3D424B894F778BB229542505243B2E8CA0212 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bs;
		int32_t L_1 = ___1_off;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_bs;
		int32_t L_5 = ___1_off;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		___1_off = L_6;
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_bs;
		int32_t L_10 = ___1_off;
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		___1_off = L_11;
		NullCheck(L_9);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_bs;
		int32_t L_15 = ___1_off;
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		___1_off = L_16;
		NullCheck(L_14);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_8<<8))))|((int32_t)((int32_t)L_13<<((int32_t)16)))))|((int32_t)((int32_t)L_18<<((int32_t)24)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Decode32_m53341C01183646B8891E645D87E8E33F7DB59522 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_bsOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_n, int32_t ___3_nOff, int32_t ___4_nLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0018;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___2_n;
		int32_t L_1 = ___3_nOff;
		int32_t L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_bs;
		int32_t L_4 = ___1_bsOff;
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		uint32_t L_6;
		L_6 = Ed25519_Decode32_mA8C3D424B894F778BB229542505243B2E8CA0212(L_3, ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)il2cpp_codegen_multiply(L_5, 4)))), NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (uint32_t)L_6);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0018:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = ___4_nLen;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_DecodePointVar_m7DC3B2651AD7E79DE59116366433A2D476522D53 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, int32_t ___1_pOff, bool ___2_negate, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___3_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_p;
		int32_t L_1 = ___1_pOff;
		int32_t L_2 = ___1_pOff;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = Arrays_CopyOfRange_mF6EEA7FA46A65BA424589A487A5A2141E81F0B7D(L_0, L_1, ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)32))), NULL);
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Ed25519_CheckPointVar_m40621D5066C5B417FD9D99A44D0485D2CB24320E(L_4, NULL);
		if (L_5)
		{
			goto IL_0016;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = ((int32_t)31);
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = ((int32_t)(((int32_t)((int32_t)L_8&((int32_t)128)))>>7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		uint8_t* L_10 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)31))));
		int32_t L_11 = *((uint8_t*)L_10);
		*((int8_t*)L_10) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_11&((int32_t)127))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_13 = ___3_r;
		NullCheck(L_13);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = L_13->___y;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Decode_m8FE40BFDE568A070AEC52DF8F87617C656DFA758(L_12, 0, L_14, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15;
		L_15 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_2 = L_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16;
		L_16 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_3 = L_16;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_17 = ___3_r;
		NullCheck(L_17);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = L_17->___y;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_2;
		X25519Field_Sqr_mB15CC5A9D9BB357C43A061B60BD2E274903C2FB7(L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___C_d;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_3;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_20, L_21, L_22, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		X25519Field_SubOne_m7E2C470874374F12F02DB9EC16302D45FBB4CCF1(L_23, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_3;
		X25519Field_AddOne_m8F5B49ECFC615CC1BE807805DABC3AE3C54843F0(L_24, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_3;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_27 = ___3_r;
		NullCheck(L_27);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = L_27->___x;
		bool L_29;
		L_29 = X25519Field_SqrtRatioVar_m0D5391A6E512FA9A8B59D73F260FE6ABFCE6FC9F(L_25, L_26, L_28, NULL);
		if (L_29)
		{
			goto IL_0080;
		}
	}
	{
		return (bool)0;
	}

IL_0080:
	{
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_30 = ___3_r;
		NullCheck(L_30);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = L_30->___x;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Normalize_mC463C8BA74C0B150F40EAD612A70018C755CE6F3(L_31, NULL);
		int32_t L_32 = V_1;
		if ((!(((uint32_t)L_32) == ((uint32_t)1))))
		{
			goto IL_009e;
		}
	}
	{
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_33 = ___3_r;
		NullCheck(L_33);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = L_33->___x;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = X25519Field_IsZeroVar_mD08CBF5E1DD41999EF24651979F12D82861B6F40(L_34, NULL);
		if (!L_35)
		{
			goto IL_009e;
		}
	}
	{
		return (bool)0;
	}

IL_009e:
	{
		bool L_36 = ___2_negate;
		int32_t L_37 = V_1;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_38 = ___3_r;
		NullCheck(L_38);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = L_38->___x;
		NullCheck(L_39);
		int32_t L_40 = 0;
		int32_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		if (!((int32_t)((int32_t)L_36^((((int32_t)((((int32_t)L_37) == ((int32_t)((int32_t)(L_41&1))))? 1 : 0)) == ((int32_t)0))? 1 : 0))))
		{
			goto IL_00c3;
		}
	}
	{
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_42 = ___3_r;
		NullCheck(L_42);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = L_42->___x;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_44 = ___3_r;
		NullCheck(L_44);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = L_44->___x;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Negate_m079FDC9497D28C7EBF4089A99D06C82A9367B7FB(L_43, L_45, NULL);
	}

IL_00c3:
	{
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_46 = ___3_r;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_PointExtendXY_m9F293F80D166C5CAE889BC2D9767F71684D43B9C(L_46, NULL);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_DecodeScalar_mF915991FC51CC1C531B99B3D87217E3E985156FC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_k;
		int32_t L_1 = ___1_kOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___2_n;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_Decode32_m53341C01183646B8891E645D87E8E33F7DB59522(L_0, L_1, L_2, 0, 8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Dom2_mA68F2F9605FAE632890496912ED69B5D2881A25E (RuntimeObject* ___0_d, uint8_t ___1_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_ctx, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___2_ctx;
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeObject* L_1 = ___0_d;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___Dom2Prefix;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___Dom2Prefix;
		NullCheck(L_3);
		NullCheck(L_1);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_1, L_2, 0, ((int32_t)(((RuntimeArray*)L_3)->max_length)));
		RuntimeObject* L_4 = ___0_d;
		uint8_t L_5 = ___1_phflag;
		NullCheck(L_4);
		InterfaceActionInvoker1< uint8_t >::Invoke(3, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___2_ctx;
		NullCheck(L_7);
		NullCheck(L_6);
		InterfaceActionInvoker1< uint8_t >::Invoke(3, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_6, (uint8_t)((int32_t)(uint8_t)((int32_t)(((RuntimeArray*)L_7)->max_length))));
		RuntimeObject* L_8 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___2_ctx;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___2_ctx;
		NullCheck(L_10);
		NullCheck(L_8);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_8, L_9, 0, ((int32_t)(((RuntimeArray*)L_10)->max_length)));
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Encode24_mE7E8C0752A529CF1F940FEBE270EA1440D11A4C5 (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_bs;
		int32_t L_1 = ___2_off;
		uint32_t L_2 = ___0_n;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_bs;
		int32_t L_4 = ___2_off;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		___2_off = L_5;
		uint32_t L_6 = ___0_n;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_6>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___1_bs;
		int32_t L_8 = ___2_off;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		___2_off = L_9;
		uint32_t L_10 = ___0_n;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>((int32_t)16)))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Encode32_mA7B3CF555D61A36DA989FE6DC937A79E397271C2 (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_bs;
		int32_t L_1 = ___2_off;
		uint32_t L_2 = ___0_n;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_bs;
		int32_t L_4 = ___2_off;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		___2_off = L_5;
		uint32_t L_6 = ___0_n;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_6>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___1_bs;
		int32_t L_8 = ___2_off;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		___2_off = L_9;
		uint32_t L_10 = ___0_n;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___1_bs;
		int32_t L_12 = ___2_off;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		___2_off = L_13;
		uint32_t L_14 = ___0_n;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_14>>((int32_t)24)))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Encode56_m9F60EFA925B7E53778917E9728B6719B746E4EC5 (uint64_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0 = ___0_n;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_bs;
		int32_t L_2 = ___2_off;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_Encode32_mA7B3CF555D61A36DA989FE6DC937A79E397271C2(((int32_t)(uint32_t)L_0), L_1, L_2, NULL);
		uint64_t L_3 = ___0_n;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_bs;
		int32_t L_5 = ___2_off;
		Ed25519_Encode24_mE7E8C0752A529CF1F940FEBE270EA1440D11A4C5(((int32_t)(uint32_t)((int64_t)((uint64_t)L_3>>((int32_t)32)))), L_4, ((int32_t)il2cpp_codegen_add(L_5, 4)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed25519_EncodePoint_mBEA6F4802D28DE1891472760C26573EF3EA278B9 (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___0_p, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_r, int32_t ___2_rOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_1 = L_1;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_2 = ___0_p;
		NullCheck(L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->___z;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_1;
		X25519Field_Inv_mC9A09236B1DCBCFE7255DEA4A0F25A774F96009A(L_3, L_4, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_5 = ___0_p;
		NullCheck(L_5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = L_5->___x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_0;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_6, L_7, L_8, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_9 = ___0_p;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->___y;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_1;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_10, L_11, L_12, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_0;
		X25519Field_Normalize_mC463C8BA74C0B150F40EAD612A70018C755CE6F3(L_13, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		X25519Field_Normalize_mC463C8BA74C0B150F40EAD612A70018C755CE6F3(L_14, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		int32_t L_17;
		L_17 = Ed25519_CheckPoint_mE798872B60DEA52A0A038DDAFE2623D61E869363(L_15, L_16, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___1_r;
		int32_t L_20 = ___2_rOff;
		X25519Field_Encode_m2B9C76CDD5B01A1661088FA691F5876A8FA0478A(L_18, L_19, L_20, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___1_r;
		int32_t L_22 = ___2_rOff;
		NullCheck(L_21);
		uint8_t* L_23 = ((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_22, ((int32_t)32))), 1)))));
		int32_t L_24 = *((uint8_t*)L_23);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_0;
		NullCheck(L_25);
		int32_t L_26 = 0;
		int32_t L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		*((int8_t*)L_23) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_24|((int32_t)(uint8_t)((int32_t)(((int32_t)(L_27&1))<<7))))));
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_GeneratePrivateKey_mF60A4E5A119F73C089A6FCF31B1A168950394578 (SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___0_random, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_k, const RuntimeMethod* method) 
{
	{
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_0 = ___0_random;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_k;
		NullCheck(L_0);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_GeneratePublicKey_mA574110E2D15DF2C2D74934E6FB8D734B9A7FDE1 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Ed25519_CreateDigest_m042640B5880163387460A08AA43BC5E07DB7DCFF(NULL);
		RuntimeObject* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_0 = L_3;
		RuntimeObject* L_4 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_sk;
		int32_t L_6 = ___1_skOff;
		int32_t L_7 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___SecretKeySize;
		NullCheck(L_4);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		NullCheck(L_4);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_4, L_8, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_1 = L_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		Ed25519_PruneScalar_m56CD8593C5CF468236F131617BF3EE0173E85229(L_11, 0, L_12, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___2_pk;
		int32_t L_15 = ___3_pkOff;
		Ed25519_ScalarMultBaseEncoded_mAB6EF691CEBB095D5D250B52A9D018C1B619E48D(L_13, L_14, L_15, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* Ed25519_GetWnafVar_m846DBBE656263E4852B3501258271417B924DF2F (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_n, int32_t ___1_width, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint32_t V_9 = 0;
	int32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_0 = L_0;
		V_6 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = V_0;
		NullCheck(L_1);
		V_7 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		V_8 = 8;
		goto IL_003d;
	}

IL_0015:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_n;
		int32_t L_3 = V_8;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_9 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_0;
		int32_t L_7 = V_7;
		int32_t L_8 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		V_7 = L_8;
		uint32_t L_9 = V_9;
		uint32_t L_10 = V_6;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_9>>((int32_t)16)))|((int32_t)((int32_t)L_10<<((int32_t)16))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		int32_t L_12 = V_7;
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		V_7 = L_13;
		uint32_t L_14 = V_9;
		uint32_t L_15 = L_14;
		V_6 = L_15;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)L_15);
	}

IL_003d:
	{
		int32_t L_16 = V_8;
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		V_8 = L_17;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_18 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var, (uint32_t)((int32_t)253));
		V_1 = L_18;
		int32_t L_19 = ___1_width;
		int32_t L_20 = ((int32_t)(1<<((int32_t)(L_19&((int32_t)31)))));
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		V_3 = ((int32_t)((uint32_t)L_20>>1));
		V_4 = 0;
		V_5 = 0;
		V_10 = 0;
		goto IL_00d4;
	}

IL_006a:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_0;
		int32_t L_22 = V_10;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		uint32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_11 = L_24;
		goto IL_00c1;
	}

IL_0072:
	{
		uint32_t L_25 = V_11;
		int32_t L_26 = V_5;
		V_12 = ((int32_t)((uint32_t)L_25>>((int32_t)(L_26&((int32_t)31)))));
		uint32_t L_27 = V_12;
		uint32_t L_28 = V_4;
		if ((!(((uint32_t)((int32_t)((int32_t)L_27&1))) == ((uint32_t)L_28))))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_29 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		goto IL_00c1;
	}

IL_008c:
	{
		uint32_t L_30 = V_12;
		uint32_t L_31 = V_2;
		uint32_t L_32 = V_4;
		V_13 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_30&(int32_t)L_31)), (int32_t)L_32));
		uint32_t L_33 = V_13;
		uint32_t L_34 = V_3;
		V_4 = ((int32_t)((int32_t)L_33&(int32_t)L_34));
		uint32_t L_35 = V_13;
		uint32_t L_36 = V_4;
		V_13 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, ((int32_t)((int32_t)L_36<<1))));
		uint32_t L_37 = V_4;
		int32_t L_38 = ___1_width;
		V_4 = ((int32_t)((uint32_t)L_37>>((int32_t)(((int32_t)il2cpp_codegen_subtract(L_38, 1))&((int32_t)31)))));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_39 = V_1;
		int32_t L_40 = V_10;
		int32_t L_41 = V_5;
		uint32_t L_42 = V_13;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)(L_40<<4)), L_41))), (int8_t)((int8_t)L_42));
		int32_t L_43 = V_5;
		int32_t L_44 = ___1_width;
		V_5 = ((int32_t)il2cpp_codegen_add(L_43, L_44));
	}

IL_00c1:
	{
		int32_t L_45 = V_5;
		if ((((int32_t)L_45) < ((int32_t)((int32_t)16))))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_46 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_47, ((int32_t)16)));
	}

IL_00d4:
	{
		int32_t L_48 = V_10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = V_0;
		NullCheck(L_49);
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)))))
		{
			goto IL_006a;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_50 = V_1;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ImplSign_m6926BA609DA40696A71295D208FE6B5BE907615E (RuntimeObject* ___0_d, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_h, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_s, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_pk, int32_t ___4_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_ctx, uint8_t ___6_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___7_m, int32_t ___8_mOff, int32_t ___9_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___10_sig, int32_t ___11_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_d;
		uint8_t L_1 = ___6_phflag;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___5_ctx;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_Dom2_mA68F2F9605FAE632890496912ED69B5D2881A25E(L_0, L_1, L_2, NULL);
		RuntimeObject* L_3 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_h;
		NullCheck(L_3);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_3, L_4, ((int32_t)32), ((int32_t)32));
		RuntimeObject* L_5 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___7_m;
		int32_t L_7 = ___8_mOff;
		int32_t L_8 = ___9_mLen;
		NullCheck(L_5);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_5, L_6, L_7, L_8);
		RuntimeObject* L_9 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___1_h;
		NullCheck(L_9);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_9, L_10, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___1_h;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = Ed25519_ReduceScalar_mD780972496D8A1DA02CB3A7D463080942383134A(L_12, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_0 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		Ed25519_ScalarMultBaseEncoded_mAB6EF691CEBB095D5D250B52A9D018C1B619E48D(L_15, L_16, 0, NULL);
		RuntimeObject* L_17 = ___0_d;
		uint8_t L_18 = ___6_phflag;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___5_ctx;
		Ed25519_Dom2_mA68F2F9605FAE632890496912ED69B5D2881A25E(L_17, L_18, L_19, NULL);
		RuntimeObject* L_20 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_0;
		NullCheck(L_20);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_20, L_21, 0, ((int32_t)32));
		RuntimeObject* L_22 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___3_pk;
		int32_t L_24 = ___4_pkOff;
		NullCheck(L_22);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_22, L_23, L_24, ((int32_t)32));
		RuntimeObject* L_25 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___7_m;
		int32_t L_27 = ___8_mOff;
		int32_t L_28 = ___9_mLen;
		NullCheck(L_25);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_25, L_26, L_27, L_28);
		RuntimeObject* L_29 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___1_h;
		NullCheck(L_29);
		int32_t L_31;
		L_31 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_29, L_30, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___1_h;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33;
		L_33 = Ed25519_ReduceScalar_mD780972496D8A1DA02CB3A7D463080942383134A(L_32, NULL);
		V_1 = L_33;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ___2_s;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36;
		L_36 = Ed25519_CalculateS_m1F93864972C7255B63A3DCC110C4A411425CEC00(L_15, L_34, L_35, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___10_sig;
		int32_t L_39 = ___11_sigOff;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, (RuntimeArray*)L_38, L_39, ((int32_t)32), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___10_sig;
		int32_t L_41 = ___11_sigOff;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_36, 0, (RuntimeArray*)L_40, ((int32_t)il2cpp_codegen_add(L_41, ((int32_t)32))), ((int32_t)32), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ImplSign_mA92EB9E379E963AC49BB2CD5E195DEB84D012477 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_ctx, uint8_t ___3_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_m, int32_t ___5_mOff, int32_t ___6_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___7_sig, int32_t ___8_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___2_ctx;
		uint8_t L_1 = ___3_phflag;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Ed25519_CheckContextVar_mDFA025D09712B6075A3DC1D2768C1BFC77DFEFA7(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral062880938476E2B20298E6FC08CB87B48E5C7853)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed25519_ImplSign_mA92EB9E379E963AC49BB2CD5E195DEB84D012477_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Ed25519_CreateDigest_m042640B5880163387460A08AA43BC5E07DB7DCFF(NULL);
		RuntimeObject* L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_0 = L_7;
		RuntimeObject* L_8 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_sk;
		int32_t L_10 = ___1_skOff;
		int32_t L_11 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___SecretKeySize;
		NullCheck(L_8);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_8, L_9, L_10, L_11);
		RuntimeObject* L_12 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_12, L_13, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_1 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		Ed25519_PruneScalar_m56CD8593C5CF468236F131617BF3EE0173E85229(L_16, 0, L_17, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_2 = L_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_2;
		Ed25519_ScalarMultBaseEncoded_mAB6EF691CEBB095D5D250B52A9D018C1B619E48D(L_19, L_20, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___2_ctx;
		uint8_t L_25 = ___3_phflag;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___4_m;
		int32_t L_27 = ___5_mOff;
		int32_t L_28 = ___6_mLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___7_sig;
		int32_t L_30 = ___8_sigOff;
		Ed25519_ImplSign_m6926BA609DA40696A71295D208FE6B5BE907615E(L_12, L_21, L_22, L_23, 0, L_24, L_25, L_26, L_27, L_28, L_29, L_30, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ImplSign_m5CDF91BF1789D5D3877BAE5E78D2D91B79EBB175 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, uint8_t ___5_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_m, int32_t ___7_mOff, int32_t ___8_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___9_sig, int32_t ___10_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___4_ctx;
		uint8_t L_1 = ___5_phflag;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Ed25519_CheckContextVar_mDFA025D09712B6075A3DC1D2768C1BFC77DFEFA7(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral062880938476E2B20298E6FC08CB87B48E5C7853)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed25519_ImplSign_m5CDF91BF1789D5D3877BAE5E78D2D91B79EBB175_RuntimeMethod_var)));
	}

IL_0016:
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = Ed25519_CreateDigest_m042640B5880163387460A08AA43BC5E07DB7DCFF(NULL);
		RuntimeObject* L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_0 = L_7;
		RuntimeObject* L_8 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_sk;
		int32_t L_10 = ___1_skOff;
		int32_t L_11 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___SecretKeySize;
		NullCheck(L_8);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_8, L_9, L_10, L_11);
		RuntimeObject* L_12 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_12, L_13, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_1 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		Ed25519_PruneScalar_m56CD8593C5CF468236F131617BF3EE0173E85229(L_16, 0, L_17, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___2_pk;
		int32_t L_21 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___4_ctx;
		uint8_t L_23 = ___5_phflag;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___6_m;
		int32_t L_25 = ___7_mOff;
		int32_t L_26 = ___8_mLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___9_sig;
		int32_t L_28 = ___10_sigOff;
		Ed25519_ImplSign_m6926BA609DA40696A71295D208FE6B5BE907615E(L_12, L_18, L_19, L_20, L_21, L_22, L_23, L_24, L_25, L_26, L_27, L_28, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_ImplVerify_m8FBF7741296488BE35F38F5AA312F606283D4123 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sig, int32_t ___1_sigOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, uint8_t ___5_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_m, int32_t ___7_mOff, int32_t ___8_mLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___4_ctx;
		uint8_t L_1 = ___5_phflag;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Ed25519_CheckContextVar_mDFA025D09712B6075A3DC1D2768C1BFC77DFEFA7(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral062880938476E2B20298E6FC08CB87B48E5C7853)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed25519_ImplVerify_m8FBF7741296488BE35F38F5AA312F606283D4123_RuntimeMethod_var)));
	}

IL_0016:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_sig;
		int32_t L_5 = ___1_sigOff;
		int32_t L_6 = ___1_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = Arrays_CopyOfRange_mF6EEA7FA46A65BA424589A487A5A2141E81F0B7D(L_4, L_5, ((int32_t)il2cpp_codegen_add(L_6, ((int32_t)32))), NULL);
		V_0 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_sig;
		int32_t L_9 = ___1_sigOff;
		int32_t L_10 = ___1_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		int32_t L_11 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___SignatureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
		L_12 = Arrays_CopyOfRange_mF6EEA7FA46A65BA424589A487A5A2141E81F0B7D(L_8, ((int32_t)il2cpp_codegen_add(L_9, ((int32_t)32))), ((int32_t)il2cpp_codegen_add(L_10, L_11)), NULL);
		V_1 = L_12;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		bool L_14;
		L_14 = Ed25519_CheckPointVar_m40621D5066C5B417FD9D99A44D0485D2CB24320E(L_13, NULL);
		if (L_14)
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_003e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Ed25519_CheckScalarVar_m58ADCB25E84844D275152B9E38C958B8597B7F76(L_15, NULL);
		if (L_16)
		{
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0048:
	{
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_17 = (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1*)il2cpp_codegen_object_new(PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
		PointExt__ctor_m541D13E5A98D087E319F54FAF37765C8DEEE5830(L_17, NULL);
		V_2 = L_17;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___2_pk;
		int32_t L_19 = ___3_pkOff;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_20 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Ed25519_DecodePointVar_m7DC3B2651AD7E79DE59116366433A2D476522D53(L_18, L_19, (bool)1, L_20, NULL);
		if (L_21)
		{
			goto IL_005b;
		}
	}
	{
		return (bool)0;
	}

IL_005b:
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		RuntimeObject* L_22;
		L_22 = Ed25519_CreateDigest_m042640B5880163387460A08AA43BC5E07DB7DCFF(NULL);
		RuntimeObject* L_23 = L_22;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(1, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_23);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_24);
		V_3 = L_25;
		RuntimeObject* L_26 = L_23;
		uint8_t L_27 = ___5_phflag;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___4_ctx;
		Ed25519_Dom2_mA68F2F9605FAE632890496912ED69B5D2881A25E(L_26, L_27, L_28, NULL);
		RuntimeObject* L_29 = L_26;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_0;
		NullCheck(L_29);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_29, L_30, 0, ((int32_t)32));
		RuntimeObject* L_31 = L_29;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___2_pk;
		int32_t L_33 = ___3_pkOff;
		NullCheck(L_31);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_31, L_32, L_33, ((int32_t)32));
		RuntimeObject* L_34 = L_31;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = ___6_m;
		int32_t L_36 = ___7_mOff;
		int32_t L_37 = ___8_mLen;
		NullCheck(L_34);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_34, L_35, L_36, L_37);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_3;
		NullCheck(L_34);
		int32_t L_39;
		L_39 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_34, L_38, 0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41;
		L_41 = Ed25519_ReduceScalar_mD780972496D8A1DA02CB3A7D463080942383134A(L_40, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		V_4 = L_42;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_4;
		Ed25519_DecodeScalar_mF915991FC51CC1C531B99B3D87217E3E985156FC(L_43, 0, L_44, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		V_5 = L_45;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = V_5;
		Ed25519_DecodeScalar_mF915991FC51CC1C531B99B3D87217E3E985156FC(L_41, 0, L_46, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_47 = (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374*)il2cpp_codegen_object_new(PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374_il2cpp_TypeInfo_var);
		PointAccum__ctor_m02F2BD460E06C5F956372EBC95EA93A876B563D0(L_47, NULL);
		V_6 = L_47;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = V_5;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_50 = V_2;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_51 = V_6;
		Ed25519_ScalarMultStrausVar_m646C77407574C0F7FF0E8753FE230C79603DB457(L_48, L_49, L_50, L_51, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_7 = L_52;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_53 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_7;
		int32_t L_55;
		L_55 = Ed25519_EncodePoint_mBEA6F4802D28DE1891472760C26573EF3EA278B9(L_53, L_54, 0, NULL);
		if (!L_55)
		{
			goto IL_00f6;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_57 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_58;
		L_58 = Arrays_AreEqual_m93263147E08C039BD573B4D2A4921988053170B7(L_56, L_57, NULL);
		return L_58;
	}

IL_00f6:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointAddVar_mB4434C7D7F45DA5BF0D580CC4F1A746069BBBEF0 (bool ___0_negate, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___1_p, PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___2_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_7 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_8 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_9 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_10 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_11 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_3 = L_3;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_4 = ___2_r;
		NullCheck(L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___u;
		V_4 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6;
		L_6 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_5 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7;
		L_7 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_6 = L_7;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_8 = ___2_r;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->___v;
		V_7 = L_9;
		bool L_10 = ___0_negate;
		if (!L_10)
		{
			goto IL_0049;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_3;
		V_8 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_2;
		V_9 = L_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_6;
		V_10 = L_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_5;
		V_11 = L_14;
		goto IL_0057;
	}

IL_0049:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_2;
		V_8 = L_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_3;
		V_9 = L_16;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_5;
		V_10 = L_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_6;
		V_11 = L_18;
	}

IL_0057:
	{
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_19 = ___2_r;
		NullCheck(L_19);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = L_19->___y;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_21 = ___2_r;
		NullCheck(L_21);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = L_21->___x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_0;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Apm_mED3BE5EB432FD54561DA0B00D84840E0C430FCD3(L_20, L_22, L_23, L_24, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_25 = ___1_p;
		NullCheck(L_25);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = L_25->___y;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_27 = ___1_p;
		NullCheck(L_27);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = L_27->___x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = V_8;
		X25519Field_Apm_mED3BE5EB432FD54561DA0B00D84840E0C430FCD3(L_26, L_28, L_29, L_30, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_31, L_32, L_33, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_1;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_34, L_35, L_36, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_37 = ___2_r;
		NullCheck(L_37);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = L_37->___u;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_39 = ___2_r;
		NullCheck(L_39);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = L_39->___v;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_2;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_38, L_40, L_41, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_2;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_43 = ___1_p;
		NullCheck(L_43);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = L_43->___t;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_2;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_42, L_44, L_45, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___C_d2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_2;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_46, L_47, L_48, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_49 = ___2_r;
		NullCheck(L_49);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = L_49->___z;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_51 = ___1_p;
		NullCheck(L_51);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = L_51->___z;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_3;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_50, L_52, L_53, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_3;
		X25519Field_Add_mE42245EE0D3016DCB819BF463F2580247E7FA54E(L_54, L_55, L_56, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_4;
		X25519Field_Apm_mED3BE5EB432FD54561DA0B00D84840E0C430FCD3(L_57, L_58, L_59, L_60, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = V_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = V_10;
		X25519Field_Apm_mED3BE5EB432FD54561DA0B00D84840E0C430FCD3(L_61, L_62, L_63, L_64, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = V_11;
		X25519Field_Carry_m273213E66F2AA33F5C77CFD69C9E6D6F86E729F2(L_65, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_66 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = V_5;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_68 = ___2_r;
		NullCheck(L_68);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = L_68->___x;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_66, L_67, L_69, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_71 = V_7;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_72 = ___2_r;
		NullCheck(L_72);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = L_72->___y;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_70, L_71, L_73, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = V_6;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_76 = ___2_r;
		NullCheck(L_76);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_77 = L_76->___z;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_74, L_75, L_77, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointAddVar_mFF31009E4CA505DEA7AE3B0CEFFE5F4C5029EA88 (bool ___0_negate, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___1_p, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___2_q, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___3_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_7 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_8 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_9 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_10 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_11 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_2 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_3 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4;
		L_4 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_4 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5;
		L_5 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_5 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6;
		L_6 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_6 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7;
		L_7 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_7 = L_7;
		bool L_8 = ___0_negate;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_3;
		V_8 = L_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_2;
		V_9 = L_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_6;
		V_10 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_5;
		V_11 = L_12;
		goto IL_0055;
	}

IL_0047:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_2;
		V_8 = L_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_3;
		V_9 = L_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_5;
		V_10 = L_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_6;
		V_11 = L_16;
	}

IL_0055:
	{
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_17 = ___1_p;
		NullCheck(L_17);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = L_17->___y;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_19 = ___1_p;
		NullCheck(L_19);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = L_19->___x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_0;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Apm_mED3BE5EB432FD54561DA0B00D84840E0C430FCD3(L_18, L_20, L_21, L_22, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_23 = ___2_q;
		NullCheck(L_23);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = L_23->___y;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_25 = ___2_q;
		NullCheck(L_25);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = L_25->___x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_8;
		X25519Field_Apm_mED3BE5EB432FD54561DA0B00D84840E0C430FCD3(L_24, L_26, L_27, L_28, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_0;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_29, L_30, L_31, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_1;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_32, L_33, L_34, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_35 = ___1_p;
		NullCheck(L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = L_35->___t;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_37 = ___2_q;
		NullCheck(L_37);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = L_37->___t;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_2;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_36, L_38, L_39, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___C_d2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_2;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_40, L_41, L_42, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_43 = ___1_p;
		NullCheck(L_43);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = L_43->___z;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_45 = ___2_q;
		NullCheck(L_45);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = L_45->___z;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = V_3;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_44, L_46, L_47, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = V_3;
		X25519Field_Add_mE42245EE0D3016DCB819BF463F2580247E7FA54E(L_48, L_49, L_50, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = V_4;
		X25519Field_Apm_mED3BE5EB432FD54561DA0B00D84840E0C430FCD3(L_51, L_52, L_53, L_54, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = V_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_10;
		X25519Field_Apm_mED3BE5EB432FD54561DA0B00D84840E0C430FCD3(L_55, L_56, L_57, L_58, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = V_11;
		X25519Field_Carry_m273213E66F2AA33F5C77CFD69C9E6D6F86E729F2(L_59, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = V_5;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_62 = ___3_r;
		NullCheck(L_62);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = L_62->___x;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_60, L_61, L_63, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = V_7;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_66 = ___3_r;
		NullCheck(L_66);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_67 = L_66->___y;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_64, L_65, L_67, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_69 = V_6;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_70 = ___3_r;
		NullCheck(L_70);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_71 = L_70->___z;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_68, L_69, L_71, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = V_7;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_74 = ___3_r;
		NullCheck(L_74);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = L_74->___t;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_72, L_73, L_75, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointAddPrecomp_m0824C3E18BEFC8A02033DCD7C7DB9102A41EB769 (PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* ___0_p, PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___1_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_2 = L_2;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_3 = ___1_r;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->___u;
		V_3 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5;
		L_5 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_4 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6;
		L_6 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_5 = L_6;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_7 = ___1_r;
		NullCheck(L_7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->___v;
		V_6 = L_8;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_9 = ___1_r;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->___y;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_11 = ___1_r;
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = L_11->___x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_0;
		X25519Field_Apm_mED3BE5EB432FD54561DA0B00D84840E0C430FCD3(L_10, L_12, L_13, L_14, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_0;
		PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_16 = ___0_p;
		NullCheck(L_16);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = L_16->___ymx_h;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_0;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_15, L_17, L_18, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_1;
		PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_20 = ___0_p;
		NullCheck(L_20);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = L_20->___ypx_h;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_1;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_19, L_21, L_22, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_23 = ___1_r;
		NullCheck(L_23);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = L_23->___u;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_25 = ___1_r;
		NullCheck(L_25);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = L_25->___v;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_24, L_26, L_27, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_2;
		PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_29 = ___0_p;
		NullCheck(L_29);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = L_29->___xyd;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_2;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_28, L_30, L_31, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_3;
		X25519Field_Apm_mED3BE5EB432FD54561DA0B00D84840E0C430FCD3(L_32, L_33, L_34, L_35, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_36 = ___1_r;
		NullCheck(L_36);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = L_36->___z;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_4;
		X25519Field_Apm_mED3BE5EB432FD54561DA0B00D84840E0C430FCD3(L_37, L_38, L_39, L_40, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_5;
		X25519Field_Carry_m273213E66F2AA33F5C77CFD69C9E6D6F86E729F2(L_41, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_4;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_44 = ___1_r;
		NullCheck(L_44);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = L_44->___x;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_42, L_43, L_45, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = V_6;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_48 = ___1_r;
		NullCheck(L_48);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = L_48->___y;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_46, L_47, L_49, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = V_5;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_52 = ___1_r;
		NullCheck(L_52);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = L_52->___z;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_50, L_51, L_53, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* Ed25519_PointCopy_m4233FFB0A07E510EC78FC34FB64C1E01330B80A9 (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* V_0 = NULL;
	{
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_0 = (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1*)il2cpp_codegen_object_new(PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
		PointExt__ctor_m541D13E5A98D087E319F54FAF37765C8DEEE5830(L_0, NULL);
		V_0 = L_0;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_1 = ___0_p;
		NullCheck(L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = L_1->___x;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_3 = V_0;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->___x;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Copy_mAF5DAED0CB27202F9F5E0E7EB8DEAE12F379F5CD(L_2, 0, L_4, 0, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_5 = ___0_p;
		NullCheck(L_5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = L_5->___y;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_7 = V_0;
		NullCheck(L_7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->___y;
		X25519Field_Copy_mAF5DAED0CB27202F9F5E0E7EB8DEAE12F379F5CD(L_6, 0, L_8, 0, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_9 = ___0_p;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->___z;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_11 = V_0;
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = L_11->___z;
		X25519Field_Copy_mAF5DAED0CB27202F9F5E0E7EB8DEAE12F379F5CD(L_10, 0, L_12, 0, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_13 = ___0_p;
		NullCheck(L_13);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = L_13->___u;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_15 = ___0_p;
		NullCheck(L_15);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = L_15->___v;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_17 = V_0;
		NullCheck(L_17);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = L_17->___t;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_14, L_16, L_18, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_19 = V_0;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* Ed25519_PointCopy_mB76A8BE8A053E8817D9D4DA5E8AF79A64EB0F813 (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* V_0 = NULL;
	{
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_0 = (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1*)il2cpp_codegen_object_new(PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
		PointExt__ctor_m541D13E5A98D087E319F54FAF37765C8DEEE5830(L_0, NULL);
		V_0 = L_0;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_1 = ___0_p;
		NullCheck(L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = L_1->___x;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_3 = V_0;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->___x;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Copy_mAF5DAED0CB27202F9F5E0E7EB8DEAE12F379F5CD(L_2, 0, L_4, 0, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_5 = ___0_p;
		NullCheck(L_5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = L_5->___y;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_7 = V_0;
		NullCheck(L_7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->___y;
		X25519Field_Copy_mAF5DAED0CB27202F9F5E0E7EB8DEAE12F379F5CD(L_6, 0, L_8, 0, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_9 = ___0_p;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->___z;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_11 = V_0;
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = L_11->___z;
		X25519Field_Copy_mAF5DAED0CB27202F9F5E0E7EB8DEAE12F379F5CD(L_10, 0, L_12, 0, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_13 = ___0_p;
		NullCheck(L_13);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = L_13->___t;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_15 = V_0;
		NullCheck(L_15);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = L_15->___t;
		X25519Field_Copy_mAF5DAED0CB27202F9F5E0E7EB8DEAE12F379F5CD(L_14, 0, L_16, 0, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointDouble_m3926FE5EDD96367ACE0367B72AE2FE9A1F206342 (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___0_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_2 = L_2;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_3 = ___0_r;
		NullCheck(L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->___u;
		V_3 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5;
		L_5 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_4 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6;
		L_6 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_5 = L_6;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_7 = ___0_r;
		NullCheck(L_7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->___v;
		V_6 = L_8;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_9 = ___0_r;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->___x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_0;
		X25519Field_Sqr_mB15CC5A9D9BB357C43A061B60BD2E274903C2FB7(L_10, L_11, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_12 = ___0_r;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12->___y;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		X25519Field_Sqr_mB15CC5A9D9BB357C43A061B60BD2E274903C2FB7(L_13, L_14, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_15 = ___0_r;
		NullCheck(L_15);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = L_15->___z;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_2;
		X25519Field_Sqr_mB15CC5A9D9BB357C43A061B60BD2E274903C2FB7(L_16, L_17, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_2;
		X25519Field_Add_mE42245EE0D3016DCB819BF463F2580247E7FA54E(L_18, L_19, L_20, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_5;
		X25519Field_Apm_mED3BE5EB432FD54561DA0B00D84840E0C430FCD3(L_21, L_22, L_23, L_24, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_25 = ___0_r;
		NullCheck(L_25);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = L_25->___x;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_27 = ___0_r;
		NullCheck(L_27);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = L_27->___y;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = V_3;
		X25519Field_Add_mE42245EE0D3016DCB819BF463F2580247E7FA54E(L_26, L_28, L_29, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_3;
		X25519Field_Sqr_mB15CC5A9D9BB357C43A061B60BD2E274903C2FB7(L_30, L_31, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_3;
		X25519Field_Sub_m7A0E1334ECDDFC850F079F15D60D17CDF84313E6(L_32, L_33, L_34, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_4;
		X25519Field_Add_mE42245EE0D3016DCB819BF463F2580247E7FA54E(L_35, L_36, L_37, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = V_4;
		X25519Field_Carry_m273213E66F2AA33F5C77CFD69C9E6D6F86E729F2(L_38, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_4;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_41 = ___0_r;
		NullCheck(L_41);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = L_41->___x;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_39, L_40, L_42, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = V_6;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_45 = ___0_r;
		NullCheck(L_45);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = L_45->___y;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_43, L_44, L_46, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_5;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_49 = ___0_r;
		NullCheck(L_49);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = L_49->___z;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_47, L_48, L_50, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointExtendXY_m48D88A83C26E9F8EBEAF6FEB2C9356DCBB0A4651 (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_0 = ___0_p;
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0->___z;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_One_m1D6D371AFB78F2E955B7A3DD50CCB448114877FF(L_1, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_2 = ___0_p;
		NullCheck(L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->___x;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_4 = ___0_p;
		NullCheck(L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___u;
		X25519Field_Copy_mAF5DAED0CB27202F9F5E0E7EB8DEAE12F379F5CD(L_3, 0, L_5, 0, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_6 = ___0_p;
		NullCheck(L_6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->___y;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_8 = ___0_p;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->___v;
		X25519Field_Copy_mAF5DAED0CB27202F9F5E0E7EB8DEAE12F379F5CD(L_7, 0, L_9, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointExtendXY_m9F293F80D166C5CAE889BC2D9767F71684D43B9C (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_0 = ___0_p;
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0->___z;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_One_m1D6D371AFB78F2E955B7A3DD50CCB448114877FF(L_1, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_2 = ___0_p;
		NullCheck(L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->___x;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_4 = ___0_p;
		NullCheck(L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___y;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_6 = ___0_p;
		NullCheck(L_6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->___t;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_3, L_5, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointLookup_mAF8F4CD3273C180B25F8AC9A54BAC55DA7637143 (int32_t ___0_block, int32_t ___1_index, PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* ___2_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_block;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_0, 8)), 3)), ((int32_t)10)));
		V_1 = 0;
		goto IL_0060;
	}

IL_000d:
	{
		int32_t L_1 = V_1;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)(L_1^L_2)), 1))>>((int32_t)31)));
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBase;
		int32_t L_5 = V_0;
		PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_6 = ___2_p;
		NullCheck(L_6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->___ypx_h;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_CMov_m274890DC42E9AFAD3A0287FBBF78399174C8B8FB(L_3, L_4, L_5, L_7, 0, NULL);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)10)));
		int32_t L_9 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBase;
		int32_t L_11 = V_0;
		PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_12 = ___2_p;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = L_12->___ymx_h;
		X25519Field_CMov_m274890DC42E9AFAD3A0287FBBF78399174C8B8FB(L_9, L_10, L_11, L_13, 0, NULL);
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, ((int32_t)10)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBase;
		int32_t L_16 = V_0;
		PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_17 = ___2_p;
		NullCheck(L_17);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = L_17->___xyd;
		X25519Field_CMov_m274890DC42E9AFAD3A0287FBBF78399174C8B8FB(L_9, L_15, L_16, L_18, 0, NULL);
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, ((int32_t)10)));
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0060:
	{
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) < ((int32_t)8)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* Ed25519_PointPrecompVar_mF4B84C5A89BE61FBEEBD1340FE1B21EA8D88F66B (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___0_p, int32_t ___1_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* V_0 = NULL;
	PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* V_1 = NULL;
	int32_t V_2 = 0;
	PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* V_3 = NULL;
	{
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_0 = (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1*)il2cpp_codegen_object_new(PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
		PointExt__ctor_m541D13E5A98D087E319F54FAF37765C8DEEE5830(L_0, NULL);
		V_0 = L_0;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_1 = ___0_p;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_2 = ___0_p;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_PointAddVar_mFF31009E4CA505DEA7AE3B0CEFFE5F4C5029EA88((bool)0, L_1, L_2, L_3, NULL);
		int32_t L_4 = ___1_count;
		PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_5 = (PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E*)(PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E*)SZArrayNew(PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_1 = L_5;
		PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_6 = V_1;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_7 = ___0_p;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_8;
		L_8 = Ed25519_PointCopy_mB76A8BE8A053E8817D9D4DA5E8AF79A64EB0F813(L_7, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1*)L_8);
		V_2 = 1;
		goto IL_003e;
	}

IL_0023:
	{
		PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_13 = V_0;
		PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_14 = V_1;
		int32_t L_15 = V_2;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_16 = (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1*)il2cpp_codegen_object_new(PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
		PointExt__ctor_m541D13E5A98D087E319F54FAF37765C8DEEE5830(L_16, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_17 = L_16;
		V_3 = L_17;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1*)L_17);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_18 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_PointAddVar_mFF31009E4CA505DEA7AE3B0CEFFE5F4C5029EA88((bool)0, L_12, L_13, L_18, NULL);
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_003e:
	{
		int32_t L_20 = V_2;
		int32_t L_21 = ___1_count;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0023;
		}
	}
	{
		PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_22 = V_1;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointSetNeutral_m34793AAD0F939D88829A6BAC98966A23FFD05962 (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_0 = ___0_p;
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0->___x;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Zero_mC1A8A4BC8E8988C33A0A4C4BDE7178C65773E545(L_1, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_2 = ___0_p;
		NullCheck(L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->___y;
		X25519Field_One_m1D6D371AFB78F2E955B7A3DD50CCB448114877FF(L_3, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_4 = ___0_p;
		NullCheck(L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___z;
		X25519Field_One_m1D6D371AFB78F2E955B7A3DD50CCB448114877FF(L_5, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_6 = ___0_p;
		NullCheck(L_6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->___u;
		X25519Field_Zero_mC1A8A4BC8E8988C33A0A4C4BDE7178C65773E545(L_7, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_8 = ___0_p;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->___v;
		X25519Field_One_m1D6D371AFB78F2E955B7A3DD50CCB448114877FF(L_9, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PointSetNeutral_m29CF6C6C418CB4FB942FA35436B818B14ED166F9 (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_0 = ___0_p;
		NullCheck(L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0->___x;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Zero_mC1A8A4BC8E8988C33A0A4C4BDE7178C65773E545(L_1, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_2 = ___0_p;
		NullCheck(L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = L_2->___y;
		X25519Field_One_m1D6D371AFB78F2E955B7A3DD50CCB448114877FF(L_3, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_4 = ___0_p;
		NullCheck(L_4);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___z;
		X25519Field_One_m1D6D371AFB78F2E955B7A3DD50CCB448114877FF(L_5, NULL);
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_6 = ___0_p;
		NullCheck(L_6);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6->___t;
		X25519Field_Zero_mC1A8A4BC8E8988C33A0A4C4BDE7178C65773E545(L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Precompute_m169AF523C0ADDECB5E529B628BFEC72875662325 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* V_2 = NULL;
	int32_t V_3 = 0;
	PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* V_4 = NULL;
	int32_t V_5 = 0;
	PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* V_6 = NULL;
	PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* V_7 = NULL;
	PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* V_16 = NULL;
	int32_t V_17 = 0;
	PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* V_18 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_19 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_20 = NULL;
	PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* V_21 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompLock;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0299:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_02a2;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_02a2:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBase;
				if (!L_4)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_02a3;
			}

IL_001c_1:
			{
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_5 = (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1*)il2cpp_codegen_object_new(PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
				PointExt__ctor_m541D13E5A98D087E319F54FAF37765C8DEEE5830(L_5, NULL);
				V_4 = L_5;
				il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___B_x;
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_7 = V_4;
				NullCheck(L_7);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->___x;
				il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
				X25519Field_Copy_mAF5DAED0CB27202F9F5E0E7EB8DEAE12F379F5CD(L_6, 0, L_8, 0, NULL);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___B_y;
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_10 = V_4;
				NullCheck(L_10);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10->___y;
				X25519Field_Copy_mAF5DAED0CB27202F9F5E0E7EB8DEAE12F379F5CD(L_9, 0, L_11, 0, NULL);
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_12 = V_4;
				Ed25519_PointExtendXY_m9F293F80D166C5CAE889BC2D9767F71684D43B9C(L_12, NULL);
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_13 = V_4;
				PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_14;
				L_14 = Ed25519_PointPrecompVar_mF4B84C5A89BE61FBEEBD1340FE1B21EA8D88F66B(L_13, ((int32_t)32), NULL);
				((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBaseTable = L_14;
				Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBaseTable), (void*)L_14);
				PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_15 = (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374*)il2cpp_codegen_object_new(PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374_il2cpp_TypeInfo_var);
				PointAccum__ctor_m02F2BD460E06C5F956372EBC95EA93A876B563D0(L_15, NULL);
				V_2 = L_15;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___B_x;
				PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_17 = V_2;
				NullCheck(L_17);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = L_17->___x;
				X25519Field_Copy_mAF5DAED0CB27202F9F5E0E7EB8DEAE12F379F5CD(L_16, 0, L_18, 0, NULL);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___B_y;
				PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_20 = V_2;
				NullCheck(L_20);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = L_20->___y;
				X25519Field_Copy_mAF5DAED0CB27202F9F5E0E7EB8DEAE12F379F5CD(L_19, 0, L_21, 0, NULL);
				PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_22 = V_2;
				Ed25519_PointExtendXY_m48D88A83C26E9F8EBEAF6FEB2C9356DCBB0A4651(L_22, NULL);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1920));
				((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBase = L_23;
				Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBase), (void*)L_23);
				V_3 = 0;
				V_5 = 0;
				goto IL_028f_1;
			}

IL_00a7_1:
			{
				PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_24 = (PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E*)(PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E*)SZArrayNew(PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E_il2cpp_TypeInfo_var, (uint32_t)4);
				V_6 = L_24;
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_25 = (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1*)il2cpp_codegen_object_new(PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
				PointExt__ctor_m541D13E5A98D087E319F54FAF37765C8DEEE5830(L_25, NULL);
				V_7 = L_25;
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_26 = V_7;
				il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
				Ed25519_PointSetNeutral_m29CF6C6C418CB4FB942FA35436B818B14ED166F9(L_26, NULL);
				V_10 = 0;
				goto IL_010c_1;
			}

IL_00c2_1:
			{
				PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_27 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_28;
				L_28 = Ed25519_PointCopy_m4233FFB0A07E510EC78FC34FB64C1E01330B80A9(L_27, NULL);
				V_11 = L_28;
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_29 = V_7;
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_30 = V_11;
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_31 = V_7;
				Ed25519_PointAddVar_mFF31009E4CA505DEA7AE3B0CEFFE5F4C5029EA88((bool)1, L_29, L_30, L_31, NULL);
				PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_32 = V_2;
				Ed25519_PointDouble_m3926FE5EDD96367ACE0367B72AE2FE9A1F206342(L_32, NULL);
				PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_33 = V_6;
				int32_t L_34 = V_10;
				PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_35 = V_2;
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_36;
				L_36 = Ed25519_PointCopy_m4233FFB0A07E510EC78FC34FB64C1E01330B80A9(L_35, NULL);
				NullCheck(L_33);
				ArrayElementTypeCheck (L_33, L_36);
				(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1*)L_36);
				int32_t L_37 = V_5;
				int32_t L_38 = V_10;
				if ((((int32_t)((int32_t)il2cpp_codegen_add(L_37, L_38))) == ((int32_t)((int32_t)10))))
				{
					goto IL_0106_1;
				}
			}
			{
				V_12 = 1;
				goto IL_0101_1;
			}

IL_00f5_1:
			{
				PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_39 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
				Ed25519_PointDouble_m3926FE5EDD96367ACE0367B72AE2FE9A1F206342(L_39, NULL);
				int32_t L_40 = V_12;
				V_12 = ((int32_t)il2cpp_codegen_add(L_40, 1));
			}

IL_0101_1:
			{
				int32_t L_41 = V_12;
				if ((((int32_t)L_41) < ((int32_t)8)))
				{
					goto IL_00f5_1;
				}
			}

IL_0106_1:
			{
				int32_t L_42 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_42, 1));
			}

IL_010c_1:
			{
				int32_t L_43 = V_10;
				if ((((int32_t)L_43) < ((int32_t)4)))
				{
					goto IL_00c2_1;
				}
			}
			{
				PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_44 = (PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E*)(PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E*)SZArrayNew(PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E_il2cpp_TypeInfo_var, (uint32_t)8);
				V_8 = L_44;
				V_9 = 0;
				PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_45 = V_8;
				int32_t L_46 = V_9;
				int32_t L_47 = L_46;
				V_9 = ((int32_t)il2cpp_codegen_add(L_47, 1));
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_48 = V_7;
				NullCheck(L_45);
				ArrayElementTypeCheck (L_45, L_48);
				(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_47), (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1*)L_48);
				V_13 = 0;
				goto IL_0175_1;
			}

IL_012d_1:
			{
				int32_t L_49 = V_13;
				V_14 = ((int32_t)(1<<((int32_t)(L_49&((int32_t)31)))));
				V_15 = 0;
				goto IL_0169_1;
			}

IL_013b_1:
			{
				PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_50 = V_8;
				int32_t L_51 = V_9;
				int32_t L_52 = V_14;
				NullCheck(L_50);
				int32_t L_53 = ((int32_t)il2cpp_codegen_subtract(L_51, L_52));
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_54 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
				PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_55 = V_6;
				int32_t L_56 = V_13;
				NullCheck(L_55);
				int32_t L_57 = L_56;
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
				PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_59 = V_8;
				int32_t L_60 = V_9;
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_61 = (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1*)il2cpp_codegen_object_new(PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1_il2cpp_TypeInfo_var);
				PointExt__ctor_m541D13E5A98D087E319F54FAF37765C8DEEE5830(L_61, NULL);
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_62 = L_61;
				V_16 = L_62;
				NullCheck(L_59);
				ArrayElementTypeCheck (L_59, L_62);
				(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1*)L_62);
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_63 = V_16;
				il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
				Ed25519_PointAddVar_mFF31009E4CA505DEA7AE3B0CEFFE5F4C5029EA88((bool)0, L_54, L_58, L_63, NULL);
				int32_t L_64 = V_15;
				V_15 = ((int32_t)il2cpp_codegen_add(L_64, 1));
				int32_t L_65 = V_9;
				V_9 = ((int32_t)il2cpp_codegen_add(L_65, 1));
			}

IL_0169_1:
			{
				int32_t L_66 = V_15;
				int32_t L_67 = V_14;
				if ((((int32_t)L_66) < ((int32_t)L_67)))
				{
					goto IL_013b_1;
				}
			}
			{
				int32_t L_68 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_68, 1));
			}

IL_0175_1:
			{
				int32_t L_69 = V_13;
				if ((((int32_t)L_69) < ((int32_t)3)))
				{
					goto IL_012d_1;
				}
			}
			{
				V_17 = 0;
				goto IL_0281_1;
			}

IL_0182_1:
			{
				PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_70 = V_8;
				int32_t L_71 = V_17;
				NullCheck(L_70);
				int32_t L_72 = L_71;
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
				V_18 = L_73;
				il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74;
				L_74 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
				V_19 = L_74;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75;
				L_75 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
				V_20 = L_75;
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_76 = V_18;
				NullCheck(L_76);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_77 = L_76->___z;
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_78 = V_18;
				NullCheck(L_78);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = L_78->___z;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = V_19;
				X25519Field_Add_mE42245EE0D3016DCB819BF463F2580247E7FA54E(L_77, L_79, L_80, NULL);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_81 = V_19;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = V_20;
				X25519Field_Inv_mC9A09236B1DCBCFE7255DEA4A0F25A774F96009A(L_81, L_82, NULL);
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_83 = V_18;
				NullCheck(L_83);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = L_83->___x;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = V_20;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_86 = V_19;
				X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_84, L_85, L_86, NULL);
				PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_87 = V_18;
				NullCheck(L_87);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = L_87->___y;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = V_20;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_90 = V_20;
				X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_88, L_89, L_90, NULL);
				PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_91 = (PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F*)il2cpp_codegen_object_new(PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F_il2cpp_TypeInfo_var);
				PointPrecomp__ctor_m66DA0C74BDD15D7C88DDAFF41BEEC059417DBC60(L_91, NULL);
				V_21 = L_91;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = V_20;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_93 = V_19;
				PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_94 = V_21;
				NullCheck(L_94);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_95 = L_94->___ypx_h;
				PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_96 = V_21;
				NullCheck(L_96);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = L_96->___ymx_h;
				X25519Field_Apm_mED3BE5EB432FD54561DA0B00D84840E0C430FCD3(L_92, L_93, L_95, L_97, NULL);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_98 = V_19;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_99 = V_20;
				PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_100 = V_21;
				NullCheck(L_100);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_101 = L_100->___xyd;
				X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_98, L_99, L_101, NULL);
				PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_102 = V_21;
				NullCheck(L_102);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_103 = L_102->___xyd;
				il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_104 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___C_d4;
				PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_105 = V_21;
				NullCheck(L_105);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_106 = L_105->___xyd;
				X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_103, L_104, L_106, NULL);
				PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_107 = V_21;
				NullCheck(L_107);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = L_107->___ypx_h;
				X25519Field_Normalize_mC463C8BA74C0B150F40EAD612A70018C755CE6F3(L_108, NULL);
				PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_109 = V_21;
				NullCheck(L_109);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_110 = L_109->___ymx_h;
				X25519Field_Normalize_mC463C8BA74C0B150F40EAD612A70018C755CE6F3(L_110, NULL);
				PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_111 = V_21;
				NullCheck(L_111);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_112 = L_111->___ypx_h;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_113 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBase;
				int32_t L_114 = V_3;
				X25519Field_Copy_mAF5DAED0CB27202F9F5E0E7EB8DEAE12F379F5CD(L_112, 0, L_113, L_114, NULL);
				int32_t L_115 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_115, ((int32_t)10)));
				PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_116 = V_21;
				NullCheck(L_116);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_117 = L_116->___ymx_h;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_118 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBase;
				int32_t L_119 = V_3;
				X25519Field_Copy_mAF5DAED0CB27202F9F5E0E7EB8DEAE12F379F5CD(L_117, 0, L_118, L_119, NULL);
				int32_t L_120 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_120, ((int32_t)10)));
				PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_121 = V_21;
				NullCheck(L_121);
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_122 = L_121->___xyd;
				Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_123 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBase;
				int32_t L_124 = V_3;
				X25519Field_Copy_mAF5DAED0CB27202F9F5E0E7EB8DEAE12F379F5CD(L_122, 0, L_123, L_124, NULL);
				int32_t L_125 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_125, ((int32_t)10)));
				int32_t L_126 = V_17;
				V_17 = ((int32_t)il2cpp_codegen_add(L_126, 1));
			}

IL_0281_1:
			{
				int32_t L_127 = V_17;
				if ((((int32_t)L_127) < ((int32_t)8)))
				{
					goto IL_0182_1;
				}
			}
			{
				int32_t L_128 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_128, 1));
			}

IL_028f_1:
			{
				int32_t L_129 = V_5;
				if ((((int32_t)L_129) < ((int32_t)8)))
				{
					goto IL_00a7_1;
				}
			}
			{
				goto IL_02a3;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02a3:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_PruneScalar_m56CD8593C5CF468236F131617BF3EE0173E85229 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_n, int32_t ___1_nOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_r, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_n;
		int32_t L_1 = ___1_nOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_r;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, L_1, (RuntimeArray*)L_2, 0, ((int32_t)32), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___2_r;
		NullCheck(L_3);
		uint8_t* L_4 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_5 = *((uint8_t*)L_4);
		*((int8_t*)L_4) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_5&((int32_t)248))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___2_r;
		NullCheck(L_6);
		uint8_t* L_7 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)31))));
		int32_t L_8 = *((uint8_t*)L_7);
		*((int8_t*)L_7) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_8&((int32_t)127))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___2_r;
		NullCheck(L_9);
		uint8_t* L_10 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)31))));
		int32_t L_11 = *((uint8_t*)L_10);
		*((int8_t*)L_10) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_11|((int32_t)64))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed25519_ReduceScalar_mD780972496D8A1DA02CB3A7D463080942383134A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t V_4 = 0;
	int64_t V_5 = 0;
	int64_t V_6 = 0;
	int64_t V_7 = 0;
	int64_t V_8 = 0;
	int64_t V_9 = 0;
	int64_t V_10 = 0;
	int64_t V_11 = 0;
	int64_t V_12 = 0;
	int64_t V_13 = 0;
	int64_t V_14 = 0;
	int64_t V_15 = 0;
	int64_t V_16 = 0;
	int64_t V_17 = 0;
	int64_t V_18 = 0;
	int64_t V_19 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_20 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_n;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = Ed25519_Decode32_mA8C3D424B894F778BB229542505243B2E8CA0212(L_0, 0, NULL);
		V_0 = ((int64_t)(((int64_t)(uint64_t)L_1)&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_n;
		uint32_t L_3;
		L_3 = Ed25519_Decode24_mBF5DB3EE18C815345127D7DB5D0AA1BC279B5AF9(L_2, 4, NULL);
		V_1 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_3<<4))))&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_n;
		uint32_t L_5;
		L_5 = Ed25519_Decode32_mA8C3D424B894F778BB229542505243B2E8CA0212(L_4, 7, NULL);
		V_2 = ((int64_t)(((int64_t)(uint64_t)L_5)&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_n;
		uint32_t L_7;
		L_7 = Ed25519_Decode24_mBF5DB3EE18C815345127D7DB5D0AA1BC279B5AF9(L_6, ((int32_t)11), NULL);
		V_3 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_7<<4))))&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_n;
		uint32_t L_9;
		L_9 = Ed25519_Decode32_mA8C3D424B894F778BB229542505243B2E8CA0212(L_8, ((int32_t)14), NULL);
		V_4 = ((int64_t)(((int64_t)(uint64_t)L_9)&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_n;
		uint32_t L_11;
		L_11 = Ed25519_Decode24_mBF5DB3EE18C815345127D7DB5D0AA1BC279B5AF9(L_10, ((int32_t)18), NULL);
		V_5 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_11<<4))))&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_n;
		uint32_t L_13;
		L_13 = Ed25519_Decode32_mA8C3D424B894F778BB229542505243B2E8CA0212(L_12, ((int32_t)21), NULL);
		V_6 = ((int64_t)(((int64_t)(uint64_t)L_13)&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_n;
		uint32_t L_15;
		L_15 = Ed25519_Decode24_mBF5DB3EE18C815345127D7DB5D0AA1BC279B5AF9(L_14, ((int32_t)25), NULL);
		V_7 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_15<<4))))&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___0_n;
		uint32_t L_17;
		L_17 = Ed25519_Decode32_mA8C3D424B894F778BB229542505243B2E8CA0212(L_16, ((int32_t)28), NULL);
		V_8 = ((int64_t)(((int64_t)(uint64_t)L_17)&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___0_n;
		uint32_t L_19;
		L_19 = Ed25519_Decode24_mBF5DB3EE18C815345127D7DB5D0AA1BC279B5AF9(L_18, ((int32_t)32), NULL);
		V_9 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_19<<4))))&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___0_n;
		uint32_t L_21;
		L_21 = Ed25519_Decode32_mA8C3D424B894F778BB229542505243B2E8CA0212(L_20, ((int32_t)35), NULL);
		V_10 = ((int64_t)(((int64_t)(uint64_t)L_21)&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___0_n;
		uint32_t L_23;
		L_23 = Ed25519_Decode24_mBF5DB3EE18C815345127D7DB5D0AA1BC279B5AF9(L_22, ((int32_t)39), NULL);
		V_11 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_23<<4))))&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___0_n;
		uint32_t L_25;
		L_25 = Ed25519_Decode32_mA8C3D424B894F778BB229542505243B2E8CA0212(L_24, ((int32_t)42), NULL);
		V_12 = ((int64_t)(((int64_t)(uint64_t)L_25)&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___0_n;
		uint32_t L_27;
		L_27 = Ed25519_Decode24_mBF5DB3EE18C815345127D7DB5D0AA1BC279B5AF9(L_26, ((int32_t)46), NULL);
		V_13 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_27<<4))))&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___0_n;
		uint32_t L_29;
		L_29 = Ed25519_Decode32_mA8C3D424B894F778BB229542505243B2E8CA0212(L_28, ((int32_t)49), NULL);
		V_14 = ((int64_t)(((int64_t)(uint64_t)L_29)&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___0_n;
		uint32_t L_31;
		L_31 = Ed25519_Decode24_mBF5DB3EE18C815345127D7DB5D0AA1BC279B5AF9(L_30, ((int32_t)53), NULL);
		V_15 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_31<<4))))&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___0_n;
		uint32_t L_33;
		L_33 = Ed25519_Decode32_mA8C3D424B894F778BB229542505243B2E8CA0212(L_32, ((int32_t)56), NULL);
		V_16 = ((int64_t)(((int64_t)(uint64_t)L_33)&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___0_n;
		uint32_t L_35;
		L_35 = Ed25519_Decode24_mBF5DB3EE18C815345127D7DB5D0AA1BC279B5AF9(L_34, ((int32_t)60), NULL);
		V_17 = ((int64_t)(((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_35<<4))))&((int64_t)(uint64_t)((uint32_t)(-1)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___0_n;
		NullCheck(L_36);
		int32_t L_37 = ((int32_t)63);
		uint8_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_18 = ((int64_t)(((int64_t)(uint64_t)L_38)&((int64_t)((int32_t)255))));
		int64_t L_39 = V_9;
		int64_t L_40 = V_18;
		V_9 = ((int64_t)il2cpp_codegen_subtract(L_39, ((int64_t)il2cpp_codegen_multiply(L_40, ((int64_t)((int32_t)-50998291))))));
		int64_t L_41 = V_10;
		int64_t L_42 = V_18;
		V_10 = ((int64_t)il2cpp_codegen_subtract(L_41, ((int64_t)il2cpp_codegen_multiply(L_42, ((int64_t)((int32_t)19280294))))));
		int64_t L_43 = V_11;
		int64_t L_44 = V_18;
		V_11 = ((int64_t)il2cpp_codegen_subtract(L_43, ((int64_t)il2cpp_codegen_multiply(L_44, ((int64_t)((int32_t)127719000))))));
		int64_t L_45 = V_12;
		int64_t L_46 = V_18;
		V_12 = ((int64_t)il2cpp_codegen_subtract(L_45, ((int64_t)il2cpp_codegen_multiply(L_46, ((int64_t)((int32_t)-6428113))))));
		int64_t L_47 = V_13;
		int64_t L_48 = V_18;
		V_13 = ((int64_t)il2cpp_codegen_subtract(L_47, ((int64_t)il2cpp_codegen_multiply(L_48, ((int64_t)((int32_t)5343))))));
		int64_t L_49 = V_17;
		int64_t L_50 = V_16;
		V_17 = ((int64_t)il2cpp_codegen_add(L_49, ((int64_t)(L_50>>((int32_t)28)))));
		int64_t L_51 = V_16;
		V_16 = ((int64_t)(L_51&((int64_t)((int32_t)268435455))));
		int64_t L_52 = V_8;
		int64_t L_53 = V_17;
		V_8 = ((int64_t)il2cpp_codegen_subtract(L_52, ((int64_t)il2cpp_codegen_multiply(L_53, ((int64_t)((int32_t)-50998291))))));
		int64_t L_54 = V_9;
		int64_t L_55 = V_17;
		V_9 = ((int64_t)il2cpp_codegen_subtract(L_54, ((int64_t)il2cpp_codegen_multiply(L_55, ((int64_t)((int32_t)19280294))))));
		int64_t L_56 = V_10;
		int64_t L_57 = V_17;
		V_10 = ((int64_t)il2cpp_codegen_subtract(L_56, ((int64_t)il2cpp_codegen_multiply(L_57, ((int64_t)((int32_t)127719000))))));
		int64_t L_58 = V_11;
		int64_t L_59 = V_17;
		V_11 = ((int64_t)il2cpp_codegen_subtract(L_58, ((int64_t)il2cpp_codegen_multiply(L_59, ((int64_t)((int32_t)-6428113))))));
		int64_t L_60 = V_12;
		int64_t L_61 = V_17;
		V_12 = ((int64_t)il2cpp_codegen_subtract(L_60, ((int64_t)il2cpp_codegen_multiply(L_61, ((int64_t)((int32_t)5343))))));
		int64_t L_62 = V_7;
		int64_t L_63 = V_16;
		V_7 = ((int64_t)il2cpp_codegen_subtract(L_62, ((int64_t)il2cpp_codegen_multiply(L_63, ((int64_t)((int32_t)-50998291))))));
		int64_t L_64 = V_8;
		int64_t L_65 = V_16;
		V_8 = ((int64_t)il2cpp_codegen_subtract(L_64, ((int64_t)il2cpp_codegen_multiply(L_65, ((int64_t)((int32_t)19280294))))));
		int64_t L_66 = V_9;
		int64_t L_67 = V_16;
		V_9 = ((int64_t)il2cpp_codegen_subtract(L_66, ((int64_t)il2cpp_codegen_multiply(L_67, ((int64_t)((int32_t)127719000))))));
		int64_t L_68 = V_10;
		int64_t L_69 = V_16;
		V_10 = ((int64_t)il2cpp_codegen_subtract(L_68, ((int64_t)il2cpp_codegen_multiply(L_69, ((int64_t)((int32_t)-6428113))))));
		int64_t L_70 = V_11;
		int64_t L_71 = V_16;
		V_11 = ((int64_t)il2cpp_codegen_subtract(L_70, ((int64_t)il2cpp_codegen_multiply(L_71, ((int64_t)((int32_t)5343))))));
		int64_t L_72 = V_15;
		int64_t L_73 = V_14;
		V_15 = ((int64_t)il2cpp_codegen_add(L_72, ((int64_t)(L_73>>((int32_t)28)))));
		int64_t L_74 = V_14;
		V_14 = ((int64_t)(L_74&((int64_t)((int32_t)268435455))));
		int64_t L_75 = V_6;
		int64_t L_76 = V_15;
		V_6 = ((int64_t)il2cpp_codegen_subtract(L_75, ((int64_t)il2cpp_codegen_multiply(L_76, ((int64_t)((int32_t)-50998291))))));
		int64_t L_77 = V_7;
		int64_t L_78 = V_15;
		V_7 = ((int64_t)il2cpp_codegen_subtract(L_77, ((int64_t)il2cpp_codegen_multiply(L_78, ((int64_t)((int32_t)19280294))))));
		int64_t L_79 = V_8;
		int64_t L_80 = V_15;
		V_8 = ((int64_t)il2cpp_codegen_subtract(L_79, ((int64_t)il2cpp_codegen_multiply(L_80, ((int64_t)((int32_t)127719000))))));
		int64_t L_81 = V_9;
		int64_t L_82 = V_15;
		V_9 = ((int64_t)il2cpp_codegen_subtract(L_81, ((int64_t)il2cpp_codegen_multiply(L_82, ((int64_t)((int32_t)-6428113))))));
		int64_t L_83 = V_10;
		int64_t L_84 = V_15;
		V_10 = ((int64_t)il2cpp_codegen_subtract(L_83, ((int64_t)il2cpp_codegen_multiply(L_84, ((int64_t)((int32_t)5343))))));
		int64_t L_85 = V_5;
		int64_t L_86 = V_14;
		V_5 = ((int64_t)il2cpp_codegen_subtract(L_85, ((int64_t)il2cpp_codegen_multiply(L_86, ((int64_t)((int32_t)-50998291))))));
		int64_t L_87 = V_6;
		int64_t L_88 = V_14;
		V_6 = ((int64_t)il2cpp_codegen_subtract(L_87, ((int64_t)il2cpp_codegen_multiply(L_88, ((int64_t)((int32_t)19280294))))));
		int64_t L_89 = V_7;
		int64_t L_90 = V_14;
		V_7 = ((int64_t)il2cpp_codegen_subtract(L_89, ((int64_t)il2cpp_codegen_multiply(L_90, ((int64_t)((int32_t)127719000))))));
		int64_t L_91 = V_8;
		int64_t L_92 = V_14;
		V_8 = ((int64_t)il2cpp_codegen_subtract(L_91, ((int64_t)il2cpp_codegen_multiply(L_92, ((int64_t)((int32_t)-6428113))))));
		int64_t L_93 = V_9;
		int64_t L_94 = V_14;
		V_9 = ((int64_t)il2cpp_codegen_subtract(L_93, ((int64_t)il2cpp_codegen_multiply(L_94, ((int64_t)((int32_t)5343))))));
		int64_t L_95 = V_13;
		int64_t L_96 = V_12;
		V_13 = ((int64_t)il2cpp_codegen_add(L_95, ((int64_t)(L_96>>((int32_t)28)))));
		int64_t L_97 = V_12;
		V_12 = ((int64_t)(L_97&((int64_t)((int32_t)268435455))));
		int64_t L_98 = V_4;
		int64_t L_99 = V_13;
		V_4 = ((int64_t)il2cpp_codegen_subtract(L_98, ((int64_t)il2cpp_codegen_multiply(L_99, ((int64_t)((int32_t)-50998291))))));
		int64_t L_100 = V_5;
		int64_t L_101 = V_13;
		V_5 = ((int64_t)il2cpp_codegen_subtract(L_100, ((int64_t)il2cpp_codegen_multiply(L_101, ((int64_t)((int32_t)19280294))))));
		int64_t L_102 = V_6;
		int64_t L_103 = V_13;
		V_6 = ((int64_t)il2cpp_codegen_subtract(L_102, ((int64_t)il2cpp_codegen_multiply(L_103, ((int64_t)((int32_t)127719000))))));
		int64_t L_104 = V_7;
		int64_t L_105 = V_13;
		V_7 = ((int64_t)il2cpp_codegen_subtract(L_104, ((int64_t)il2cpp_codegen_multiply(L_105, ((int64_t)((int32_t)-6428113))))));
		int64_t L_106 = V_8;
		int64_t L_107 = V_13;
		V_8 = ((int64_t)il2cpp_codegen_subtract(L_106, ((int64_t)il2cpp_codegen_multiply(L_107, ((int64_t)((int32_t)5343))))));
		int64_t L_108 = V_12;
		int64_t L_109 = V_11;
		V_12 = ((int64_t)il2cpp_codegen_add(L_108, ((int64_t)(L_109>>((int32_t)28)))));
		int64_t L_110 = V_11;
		V_11 = ((int64_t)(L_110&((int64_t)((int32_t)268435455))));
		int64_t L_111 = V_3;
		int64_t L_112 = V_12;
		V_3 = ((int64_t)il2cpp_codegen_subtract(L_111, ((int64_t)il2cpp_codegen_multiply(L_112, ((int64_t)((int32_t)-50998291))))));
		int64_t L_113 = V_4;
		int64_t L_114 = V_12;
		V_4 = ((int64_t)il2cpp_codegen_subtract(L_113, ((int64_t)il2cpp_codegen_multiply(L_114, ((int64_t)((int32_t)19280294))))));
		int64_t L_115 = V_5;
		int64_t L_116 = V_12;
		V_5 = ((int64_t)il2cpp_codegen_subtract(L_115, ((int64_t)il2cpp_codegen_multiply(L_116, ((int64_t)((int32_t)127719000))))));
		int64_t L_117 = V_6;
		int64_t L_118 = V_12;
		V_6 = ((int64_t)il2cpp_codegen_subtract(L_117, ((int64_t)il2cpp_codegen_multiply(L_118, ((int64_t)((int32_t)-6428113))))));
		int64_t L_119 = V_7;
		int64_t L_120 = V_12;
		V_7 = ((int64_t)il2cpp_codegen_subtract(L_119, ((int64_t)il2cpp_codegen_multiply(L_120, ((int64_t)((int32_t)5343))))));
		int64_t L_121 = V_11;
		int64_t L_122 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add(L_121, ((int64_t)(L_122>>((int32_t)28)))));
		int64_t L_123 = V_10;
		V_10 = ((int64_t)(L_123&((int64_t)((int32_t)268435455))));
		int64_t L_124 = V_2;
		int64_t L_125 = V_11;
		V_2 = ((int64_t)il2cpp_codegen_subtract(L_124, ((int64_t)il2cpp_codegen_multiply(L_125, ((int64_t)((int32_t)-50998291))))));
		int64_t L_126 = V_3;
		int64_t L_127 = V_11;
		V_3 = ((int64_t)il2cpp_codegen_subtract(L_126, ((int64_t)il2cpp_codegen_multiply(L_127, ((int64_t)((int32_t)19280294))))));
		int64_t L_128 = V_4;
		int64_t L_129 = V_11;
		V_4 = ((int64_t)il2cpp_codegen_subtract(L_128, ((int64_t)il2cpp_codegen_multiply(L_129, ((int64_t)((int32_t)127719000))))));
		int64_t L_130 = V_5;
		int64_t L_131 = V_11;
		V_5 = ((int64_t)il2cpp_codegen_subtract(L_130, ((int64_t)il2cpp_codegen_multiply(L_131, ((int64_t)((int32_t)-6428113))))));
		int64_t L_132 = V_6;
		int64_t L_133 = V_11;
		V_6 = ((int64_t)il2cpp_codegen_subtract(L_132, ((int64_t)il2cpp_codegen_multiply(L_133, ((int64_t)((int32_t)5343))))));
		int64_t L_134 = V_10;
		int64_t L_135 = V_9;
		V_10 = ((int64_t)il2cpp_codegen_add(L_134, ((int64_t)(L_135>>((int32_t)28)))));
		int64_t L_136 = V_9;
		V_9 = ((int64_t)(L_136&((int64_t)((int32_t)268435455))));
		int64_t L_137 = V_1;
		int64_t L_138 = V_10;
		V_1 = ((int64_t)il2cpp_codegen_subtract(L_137, ((int64_t)il2cpp_codegen_multiply(L_138, ((int64_t)((int32_t)-50998291))))));
		int64_t L_139 = V_2;
		int64_t L_140 = V_10;
		V_2 = ((int64_t)il2cpp_codegen_subtract(L_139, ((int64_t)il2cpp_codegen_multiply(L_140, ((int64_t)((int32_t)19280294))))));
		int64_t L_141 = V_3;
		int64_t L_142 = V_10;
		V_3 = ((int64_t)il2cpp_codegen_subtract(L_141, ((int64_t)il2cpp_codegen_multiply(L_142, ((int64_t)((int32_t)127719000))))));
		int64_t L_143 = V_4;
		int64_t L_144 = V_10;
		V_4 = ((int64_t)il2cpp_codegen_subtract(L_143, ((int64_t)il2cpp_codegen_multiply(L_144, ((int64_t)((int32_t)-6428113))))));
		int64_t L_145 = V_5;
		int64_t L_146 = V_10;
		V_5 = ((int64_t)il2cpp_codegen_subtract(L_145, ((int64_t)il2cpp_codegen_multiply(L_146, ((int64_t)((int32_t)5343))))));
		int64_t L_147 = V_8;
		int64_t L_148 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add(L_147, ((int64_t)(L_148>>((int32_t)28)))));
		int64_t L_149 = V_7;
		V_7 = ((int64_t)(L_149&((int64_t)((int32_t)268435455))));
		int64_t L_150 = V_9;
		int64_t L_151 = V_8;
		V_9 = ((int64_t)il2cpp_codegen_add(L_150, ((int64_t)(L_151>>((int32_t)28)))));
		int64_t L_152 = V_8;
		V_8 = ((int64_t)(L_152&((int64_t)((int32_t)268435455))));
		int64_t L_153 = V_8;
		V_19 = ((int64_t)(((int64_t)(L_153>>((int32_t)27)))&((int64_t)1)));
		int64_t L_154 = V_9;
		int64_t L_155 = V_19;
		V_9 = ((int64_t)il2cpp_codegen_add(L_154, L_155));
		int64_t L_156 = V_0;
		int64_t L_157 = V_9;
		V_0 = ((int64_t)il2cpp_codegen_subtract(L_156, ((int64_t)il2cpp_codegen_multiply(L_157, ((int64_t)((int32_t)-50998291))))));
		int64_t L_158 = V_1;
		int64_t L_159 = V_9;
		V_1 = ((int64_t)il2cpp_codegen_subtract(L_158, ((int64_t)il2cpp_codegen_multiply(L_159, ((int64_t)((int32_t)19280294))))));
		int64_t L_160 = V_2;
		int64_t L_161 = V_9;
		V_2 = ((int64_t)il2cpp_codegen_subtract(L_160, ((int64_t)il2cpp_codegen_multiply(L_161, ((int64_t)((int32_t)127719000))))));
		int64_t L_162 = V_3;
		int64_t L_163 = V_9;
		V_3 = ((int64_t)il2cpp_codegen_subtract(L_162, ((int64_t)il2cpp_codegen_multiply(L_163, ((int64_t)((int32_t)-6428113))))));
		int64_t L_164 = V_4;
		int64_t L_165 = V_9;
		V_4 = ((int64_t)il2cpp_codegen_subtract(L_164, ((int64_t)il2cpp_codegen_multiply(L_165, ((int64_t)((int32_t)5343))))));
		int64_t L_166 = V_1;
		int64_t L_167 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add(L_166, ((int64_t)(L_167>>((int32_t)28)))));
		int64_t L_168 = V_0;
		V_0 = ((int64_t)(L_168&((int64_t)((int32_t)268435455))));
		int64_t L_169 = V_2;
		int64_t L_170 = V_1;
		V_2 = ((int64_t)il2cpp_codegen_add(L_169, ((int64_t)(L_170>>((int32_t)28)))));
		int64_t L_171 = V_1;
		V_1 = ((int64_t)(L_171&((int64_t)((int32_t)268435455))));
		int64_t L_172 = V_3;
		int64_t L_173 = V_2;
		V_3 = ((int64_t)il2cpp_codegen_add(L_172, ((int64_t)(L_173>>((int32_t)28)))));
		int64_t L_174 = V_2;
		V_2 = ((int64_t)(L_174&((int64_t)((int32_t)268435455))));
		int64_t L_175 = V_4;
		int64_t L_176 = V_3;
		V_4 = ((int64_t)il2cpp_codegen_add(L_175, ((int64_t)(L_176>>((int32_t)28)))));
		int64_t L_177 = V_3;
		V_3 = ((int64_t)(L_177&((int64_t)((int32_t)268435455))));
		int64_t L_178 = V_5;
		int64_t L_179 = V_4;
		V_5 = ((int64_t)il2cpp_codegen_add(L_178, ((int64_t)(L_179>>((int32_t)28)))));
		int64_t L_180 = V_4;
		V_4 = ((int64_t)(L_180&((int64_t)((int32_t)268435455))));
		int64_t L_181 = V_6;
		int64_t L_182 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_add(L_181, ((int64_t)(L_182>>((int32_t)28)))));
		int64_t L_183 = V_5;
		V_5 = ((int64_t)(L_183&((int64_t)((int32_t)268435455))));
		int64_t L_184 = V_7;
		int64_t L_185 = V_6;
		V_7 = ((int64_t)il2cpp_codegen_add(L_184, ((int64_t)(L_185>>((int32_t)28)))));
		int64_t L_186 = V_6;
		V_6 = ((int64_t)(L_186&((int64_t)((int32_t)268435455))));
		int64_t L_187 = V_8;
		int64_t L_188 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add(L_187, ((int64_t)(L_188>>((int32_t)28)))));
		int64_t L_189 = V_7;
		V_7 = ((int64_t)(L_189&((int64_t)((int32_t)268435455))));
		int64_t L_190 = V_8;
		V_9 = ((int64_t)(L_190>>((int32_t)28)));
		int64_t L_191 = V_8;
		V_8 = ((int64_t)(L_191&((int64_t)((int32_t)268435455))));
		int64_t L_192 = V_9;
		int64_t L_193 = V_19;
		V_9 = ((int64_t)il2cpp_codegen_subtract(L_192, L_193));
		int64_t L_194 = V_0;
		int64_t L_195 = V_9;
		V_0 = ((int64_t)il2cpp_codegen_add(L_194, ((int64_t)(L_195&((int64_t)((int32_t)-50998291))))));
		int64_t L_196 = V_1;
		int64_t L_197 = V_9;
		V_1 = ((int64_t)il2cpp_codegen_add(L_196, ((int64_t)(L_197&((int64_t)((int32_t)19280294))))));
		int64_t L_198 = V_2;
		int64_t L_199 = V_9;
		V_2 = ((int64_t)il2cpp_codegen_add(L_198, ((int64_t)(L_199&((int64_t)((int32_t)127719000))))));
		int64_t L_200 = V_3;
		int64_t L_201 = V_9;
		V_3 = ((int64_t)il2cpp_codegen_add(L_200, ((int64_t)(L_201&((int64_t)((int32_t)-6428113))))));
		int64_t L_202 = V_4;
		int64_t L_203 = V_9;
		V_4 = ((int64_t)il2cpp_codegen_add(L_202, ((int64_t)(L_203&((int64_t)((int32_t)5343))))));
		int64_t L_204 = V_1;
		int64_t L_205 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add(L_204, ((int64_t)(L_205>>((int32_t)28)))));
		int64_t L_206 = V_0;
		V_0 = ((int64_t)(L_206&((int64_t)((int32_t)268435455))));
		int64_t L_207 = V_2;
		int64_t L_208 = V_1;
		V_2 = ((int64_t)il2cpp_codegen_add(L_207, ((int64_t)(L_208>>((int32_t)28)))));
		int64_t L_209 = V_1;
		V_1 = ((int64_t)(L_209&((int64_t)((int32_t)268435455))));
		int64_t L_210 = V_3;
		int64_t L_211 = V_2;
		V_3 = ((int64_t)il2cpp_codegen_add(L_210, ((int64_t)(L_211>>((int32_t)28)))));
		int64_t L_212 = V_2;
		V_2 = ((int64_t)(L_212&((int64_t)((int32_t)268435455))));
		int64_t L_213 = V_4;
		int64_t L_214 = V_3;
		V_4 = ((int64_t)il2cpp_codegen_add(L_213, ((int64_t)(L_214>>((int32_t)28)))));
		int64_t L_215 = V_3;
		V_3 = ((int64_t)(L_215&((int64_t)((int32_t)268435455))));
		int64_t L_216 = V_5;
		int64_t L_217 = V_4;
		V_5 = ((int64_t)il2cpp_codegen_add(L_216, ((int64_t)(L_217>>((int32_t)28)))));
		int64_t L_218 = V_4;
		V_4 = ((int64_t)(L_218&((int64_t)((int32_t)268435455))));
		int64_t L_219 = V_6;
		int64_t L_220 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_add(L_219, ((int64_t)(L_220>>((int32_t)28)))));
		int64_t L_221 = V_5;
		V_5 = ((int64_t)(L_221&((int64_t)((int32_t)268435455))));
		int64_t L_222 = V_7;
		int64_t L_223 = V_6;
		V_7 = ((int64_t)il2cpp_codegen_add(L_222, ((int64_t)(L_223>>((int32_t)28)))));
		int64_t L_224 = V_6;
		V_6 = ((int64_t)(L_224&((int64_t)((int32_t)268435455))));
		int64_t L_225 = V_8;
		int64_t L_226 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add(L_225, ((int64_t)(L_226>>((int32_t)28)))));
		int64_t L_227 = V_7;
		V_7 = ((int64_t)(L_227&((int64_t)((int32_t)268435455))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_228 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_20 = L_228;
		int64_t L_229 = V_0;
		int64_t L_230 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_231 = V_20;
		Ed25519_Encode56_m9F60EFA925B7E53778917E9728B6719B746E4EC5(((int64_t)(L_229|((int64_t)(L_230<<((int32_t)28))))), L_231, 0, NULL);
		int64_t L_232 = V_2;
		int64_t L_233 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_234 = V_20;
		Ed25519_Encode56_m9F60EFA925B7E53778917E9728B6719B746E4EC5(((int64_t)(L_232|((int64_t)(L_233<<((int32_t)28))))), L_234, 7, NULL);
		int64_t L_235 = V_4;
		int64_t L_236 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_237 = V_20;
		Ed25519_Encode56_m9F60EFA925B7E53778917E9728B6719B746E4EC5(((int64_t)(L_235|((int64_t)(L_236<<((int32_t)28))))), L_237, ((int32_t)14), NULL);
		int64_t L_238 = V_6;
		int64_t L_239 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_240 = V_20;
		Ed25519_Encode56_m9F60EFA925B7E53778917E9728B6719B746E4EC5(((int64_t)(L_238|((int64_t)(L_239<<((int32_t)28))))), L_240, ((int32_t)21), NULL);
		int64_t L_241 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_242 = V_20;
		Ed25519_Encode32_mA7B3CF555D61A36DA989FE6DC937A79E397271C2(((int32_t)(uint32_t)L_241), L_242, ((int32_t)28), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_243 = V_20;
		return L_243;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ScalarMultBase_m28490C31C36B0BE402DC7E03F634DFD75C7FFAC4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___1_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_Precompute_m169AF523C0ADDECB5E529B628BFEC72875662325(NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_0 = ___1_r;
		Ed25519_PointSetNeutral_m34793AAD0F939D88829A6BAC98966A23FFD05962(L_0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_k;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		Ed25519_DecodeScalar_mF915991FC51CC1C531B99B3D87217E3E985156FC(L_2, 0, L_3, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = 0;
		uint32_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___L;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_0;
		uint32_t L_10;
		L_10 = Nat_CAdd_m6E497E6974AED75B020BE8C26449592FEEE12A4D(8, ((int32_t)(((~((int32_t)L_6)))&1)), L_7, L_8, L_9, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		uint32_t L_12;
		L_12 = Nat_ShiftDownBit_m3CE84243637D1040BEAA3950386F0923D09CC613(8, L_11, 1, NULL);
		V_3 = 0;
		goto IL_004a;
	}

IL_003b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_0;
		int32_t L_14 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_0;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		uint32_t L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		uint32_t L_19;
		L_19 = Interleave_Shuffle2_mD9042F86AFE5D72683F9827BBA6B3B3B7607F9D1(L_18, NULL);
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (uint32_t)L_19);
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_004a:
	{
		int32_t L_21 = V_3;
		if ((((int32_t)L_21) < ((int32_t)8)))
		{
			goto IL_003b;
		}
	}
	{
		PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_22 = (PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F*)il2cpp_codegen_object_new(PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F_il2cpp_TypeInfo_var);
		PointPrecomp__ctor_m66DA0C74BDD15D7C88DDAFF41BEEC059417DBC60(L_22, NULL);
		V_1 = L_22;
		V_2 = ((int32_t)28);
	}

IL_0057:
	{
		V_4 = 0;
		goto IL_00ab;
	}

IL_005c:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		uint32_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		int32_t L_27 = V_2;
		int32_t L_28 = ((int32_t)((uint32_t)L_26>>((int32_t)(L_27&((int32_t)31)))));
		V_5 = ((int32_t)(((int32_t)((uint32_t)L_28>>3))&1));
		int32_t L_29 = V_5;
		V_6 = ((int32_t)(((int32_t)(L_28^((-L_29))))&7));
		int32_t L_30 = V_4;
		int32_t L_31 = V_6;
		PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_32 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_PointLookup_mAF8F4CD3273C180B25F8AC9A54BAC55DA7637143(L_30, L_31, L_32, NULL);
		int32_t L_33 = V_5;
		PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_34 = V_1;
		NullCheck(L_34);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = L_34->___ypx_h;
		PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_36 = V_1;
		NullCheck(L_36);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = L_36->___ymx_h;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_CSwap_mDBC8D645062A0E07EAFF97F6606E669FCFBB595E(L_33, L_35, L_37, NULL);
		int32_t L_38 = V_5;
		PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_39 = V_1;
		NullCheck(L_39);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = L_39->___xyd;
		X25519Field_CNegate_m5357302A53AB2967D26307DA225025AFD2F04AA3(L_38, L_40, NULL);
		PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* L_41 = V_1;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_42 = ___1_r;
		Ed25519_PointAddPrecomp_m0824C3E18BEFC8A02033DCD7C7DB9102A41EB769(L_41, L_42, NULL);
		int32_t L_43 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00ab:
	{
		int32_t L_44 = V_4;
		if ((((int32_t)L_44) < ((int32_t)8)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_45 = V_2;
		int32_t L_46 = ((int32_t)il2cpp_codegen_subtract(L_45, 4));
		V_2 = L_46;
		if ((((int32_t)L_46) < ((int32_t)0)))
		{
			goto IL_00c0;
		}
	}
	{
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_47 = ___1_r;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_PointDouble_m3926FE5EDD96367ACE0367B72AE2FE9A1F206342(L_47, NULL);
		goto IL_0057;
	}

IL_00c0:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ScalarMultBaseEncoded_mAB6EF691CEBB095D5D250B52A9D018C1B619E48D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_r, int32_t ___2_rOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* V_0 = NULL;
	{
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_0 = (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374*)il2cpp_codegen_object_new(PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374_il2cpp_TypeInfo_var);
		PointAccum__ctor_m02F2BD460E06C5F956372EBC95EA93A876B563D0(L_0, NULL);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_k;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_ScalarMultBase_m28490C31C36B0BE402DC7E03F634DFD75C7FFAC4(L_1, L_2, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_r;
		int32_t L_5 = ___2_rOff;
		int32_t L_6;
		L_6 = Ed25519_EncodePoint_mBEA6F4802D28DE1891472760C26573EF3EA278B9(L_3, L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_001d;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed25519_ScalarMultBaseEncoded_mAB6EF691CEBB095D5D250B52A9D018C1B619E48D_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ScalarMultBaseYZ_mE90C09BD92A2C957973B7D5321D60279FB28B7BB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_y, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_z, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_k;
		int32_t L_2 = ___1_kOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_PruneScalar_m56CD8593C5CF468236F131617BF3EE0173E85229(L_1, L_2, L_3, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_4 = (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374*)il2cpp_codegen_object_new(PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374_il2cpp_TypeInfo_var);
		PointAccum__ctor_m02F2BD460E06C5F956372EBC95EA93A876B563D0(L_4, NULL);
		V_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_6 = V_1;
		Ed25519_ScalarMultBase_m28490C31C36B0BE402DC7E03F634DFD75C7FFAC4(L_5, L_6, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_7 = V_1;
		NullCheck(L_7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7->___x;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_9 = V_1;
		NullCheck(L_9);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9->___y;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_11 = V_1;
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = L_11->___z;
		int32_t L_13;
		L_13 = Ed25519_CheckPoint_mDC127E7E8202E84EE8ACA5B9FEBB8B2E710F343F(L_8, L_10, L_12, NULL);
		if (L_13)
		{
			goto IL_003c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed25519_ScalarMultBaseYZ_mE90C09BD92A2C957973B7D5321D60279FB28B7BB_RuntimeMethod_var)));
	}

IL_003c:
	{
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_15 = V_1;
		NullCheck(L_15);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = L_15->___y;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___2_y;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Copy_mAF5DAED0CB27202F9F5E0E7EB8DEAE12F379F5CD(L_16, 0, L_17, 0, NULL);
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_18 = V_1;
		NullCheck(L_18);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = L_18->___z;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = ___3_z;
		X25519Field_Copy_mAF5DAED0CB27202F9F5E0E7EB8DEAE12F379F5CD(L_19, 0, L_20, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_ScalarMultStrausVar_m646C77407574C0F7FF0E8753FE230C79603DB457 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_nb, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_np, PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* ___2_p, PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* ___3_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_1 = NULL;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_2 = NULL;
	PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_Precompute_m169AF523C0ADDECB5E529B628BFEC72875662325(NULL);
		V_0 = 5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_nb;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_1;
		L_1 = Ed25519_GetWnafVar_m846DBBE656263E4852B3501258271417B924DF2F(L_0, 7, NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___1_np;
		int32_t L_3 = V_0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_4;
		L_4 = Ed25519_GetWnafVar_m846DBBE656263E4852B3501258271417B924DF2F(L_2, L_3, NULL);
		V_2 = L_4;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_5 = ___2_p;
		int32_t L_6 = V_0;
		PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_7;
		L_7 = Ed25519_PointPrecompVar_mF4B84C5A89BE61FBEEBD1340FE1B21EA8D88F66B(L_5, ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_6, 2))&((int32_t)31))))), NULL);
		V_3 = L_7;
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_8 = ___3_r;
		Ed25519_PointSetNeutral_m34793AAD0F939D88829A6BAC98966A23FFD05962(L_8, NULL);
		V_4 = ((int32_t)252);
	}

IL_0033:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_9 = V_1;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_5 = L_12;
		int32_t L_13 = V_5;
		if (!L_13)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_14 = V_5;
		V_7 = ((int32_t)(L_14>>((int32_t)31)));
		int32_t L_15 = V_5;
		int32_t L_16 = V_7;
		V_8 = ((int32_t)(((int32_t)(L_15^L_16))>>1));
		int32_t L_17 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_18 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBaseTable;
		int32_t L_19 = V_8;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_22 = ___3_r;
		Ed25519_PointAddVar_mB4434C7D7F45DA5BF0D580CC4F1A746069BBBEF0((bool)((!(((uint32_t)L_17) <= ((uint32_t)0)))? 1 : 0), L_21, L_22, NULL);
	}

IL_0060:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_23 = V_2;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int8_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_6 = L_26;
		int32_t L_27 = V_6;
		if (!L_27)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_28 = V_6;
		V_9 = ((int32_t)(L_28>>((int32_t)31)));
		int32_t L_29 = V_6;
		int32_t L_30 = V_9;
		V_10 = ((int32_t)(((int32_t)(L_29^L_30))>>1));
		int32_t L_31 = V_9;
		PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E* L_32 = V_3;
		int32_t L_33 = V_10;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_36 = ___3_r;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_PointAddVar_mB4434C7D7F45DA5BF0D580CC4F1A746069BBBEF0((bool)((!(((uint32_t)L_31) <= ((uint32_t)0)))? 1 : 0), L_35, L_36, NULL);
	}

IL_0089:
	{
		int32_t L_37 = V_4;
		int32_t L_38 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		V_4 = L_38;
		if ((((int32_t)L_38) < ((int32_t)0)))
		{
			goto IL_009b;
		}
	}
	{
		PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* L_39 = ___3_r;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_PointDouble_m3926FE5EDD96367ACE0367B72AE2FE9A1F206342(L_39, NULL);
		goto IL_0033;
	}

IL_009b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Sign_m83692BDADFB5EEEDF5CBF7F0185DE768E9975E43 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_m, int32_t ___3_mOff, int32_t ___4_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_sig, int32_t ___6_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		V_1 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sk;
		int32_t L_1 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = V_0;
		uint8_t L_3 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___2_m;
		int32_t L_5 = ___3_mOff;
		int32_t L_6 = ___4_mLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___5_sig;
		int32_t L_8 = ___6_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_ImplSign_mA92EB9E379E963AC49BB2CD5E195DEB84D012477(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Sign_m7E5B897EF256F25E709DD9CD40DC84A7475A284B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_m, int32_t ___5_mOff, int32_t ___6_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___7_sig, int32_t ___8_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		V_1 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sk;
		int32_t L_1 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_pk;
		int32_t L_3 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		uint8_t L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___4_m;
		int32_t L_7 = ___5_mOff;
		int32_t L_8 = ___6_mLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___7_sig;
		int32_t L_10 = ___8_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_ImplSign_m5CDF91BF1789D5D3877BAE5E78D2D91B79EBB175(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Sign_m34EDD577026B93569286446207D354536DF9367E (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_ctx, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_m, int32_t ___4_mOff, int32_t ___5_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_sig, int32_t ___7_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sk;
		int32_t L_1 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_ctx;
		uint8_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___3_m;
		int32_t L_5 = ___4_mOff;
		int32_t L_6 = ___5_mLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___6_sig;
		int32_t L_8 = ___7_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_ImplSign_mA92EB9E379E963AC49BB2CD5E195DEB84D012477(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_Sign_m9C3CFE97A9B408592CE46197930AC0F84C5558AC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_m, int32_t ___6_mOff, int32_t ___7_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___8_sig, int32_t ___9_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sk;
		int32_t L_1 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_pk;
		int32_t L_3 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___4_ctx;
		uint8_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___5_m;
		int32_t L_7 = ___6_mOff;
		int32_t L_8 = ___7_mLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___8_sig;
		int32_t L_10 = ___9_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_ImplSign_m5CDF91BF1789D5D3877BAE5E78D2D91B79EBB175(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_SignPrehash_mF1D201B984AA474173E48177420F69DF2C3185E5 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_ctx, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_ph, int32_t ___4_phOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_sig, int32_t ___6_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sk;
		int32_t L_1 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_ctx;
		uint8_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___3_ph;
		int32_t L_5 = ___4_phOff;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___PrehashSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___5_sig;
		int32_t L_8 = ___6_sigOff;
		Ed25519_ImplSign_mA92EB9E379E963AC49BB2CD5E195DEB84D012477(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_SignPrehash_mED4E275BD3600C1A99627FCE3AACF0F97EF2ED9F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_ph, int32_t ___6_phOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___7_sig, int32_t ___8_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sk;
		int32_t L_1 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_pk;
		int32_t L_3 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___4_ctx;
		uint8_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___5_ph;
		int32_t L_7 = ___6_phOff;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		int32_t L_8 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___PrehashSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___7_sig;
		int32_t L_10 = ___8_sigOff;
		Ed25519_ImplSign_m5CDF91BF1789D5D3877BAE5E78D2D91B79EBB175(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_SignPrehash_m523E6ED5B777B71028F9EEFB77B83F8B0C4265D6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_ctx, RuntimeObject* ___3_ph, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_sig, int32_t ___5_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___PrehashSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___PrehashSize;
		RuntimeObject* L_3 = ___3_ph;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_3, L_4, 0);
		if ((((int32_t)L_2) == ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral244DDD15B47825F82F417E249D4FFA669F1BE35C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed25519_SignPrehash_m523E6ED5B777B71028F9EEFB77B83F8B0C4265D6_RuntimeMethod_var)));
	}

IL_0025:
	{
		V_1 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_sk;
		int32_t L_8 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___2_ctx;
		uint8_t L_10 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___4_sig;
		int32_t L_14 = ___5_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_ImplSign_mA92EB9E379E963AC49BB2CD5E195DEB84D012477(L_7, L_8, L_9, L_10, L_11, 0, ((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13, L_14, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519_SignPrehash_m32C174A787FD4D7AAC18A1A458033EFE61B5B650 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, RuntimeObject* ___5_ph, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_sig, int32_t ___7_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___PrehashSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___PrehashSize;
		RuntimeObject* L_3 = ___5_ph;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_3, L_4, 0);
		if ((((int32_t)L_2) == ((int32_t)L_5)))
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral244DDD15B47825F82F417E249D4FFA669F1BE35C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed25519_SignPrehash_m32C174A787FD4D7AAC18A1A458033EFE61B5B650_RuntimeMethod_var)));
	}

IL_0026:
	{
		V_1 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_sk;
		int32_t L_8 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___2_pk;
		int32_t L_10 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___4_ctx;
		uint8_t L_12 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___6_sig;
		int32_t L_16 = ___7_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_ImplSign_m5CDF91BF1789D5D3877BAE5E78D2D91B79EBB175(L_7, L_8, L_9, L_10, L_11, L_12, L_13, 0, ((int32_t)(((RuntimeArray*)L_14)->max_length)), L_15, L_16, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_Verify_m67BA2AF3811DA7F2E1E86489ACF78F2130C4F642 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sig, int32_t ___1_sigOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_m, int32_t ___5_mOff, int32_t ___6_mLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		V_1 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sig;
		int32_t L_1 = ___1_sigOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_pk;
		int32_t L_3 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		uint8_t L_5 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___4_m;
		int32_t L_7 = ___5_mOff;
		int32_t L_8 = ___6_mLen;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Ed25519_ImplVerify_m8FBF7741296488BE35F38F5AA312F606283D4123(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_Verify_m3F40D2841F2ECCA8D428580C84BC95BF51ABD995 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sig, int32_t ___1_sigOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_m, int32_t ___6_mOff, int32_t ___7_mLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sig;
		int32_t L_1 = ___1_sigOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_pk;
		int32_t L_3 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___4_ctx;
		uint8_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___5_m;
		int32_t L_7 = ___6_mOff;
		int32_t L_8 = ___7_mLen;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Ed25519_ImplVerify_m8FBF7741296488BE35F38F5AA312F606283D4123(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_VerifyPrehash_mF678989E21B755B4CDA040C8C34E56AB7E1826F6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sig, int32_t ___1_sigOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_ph, int32_t ___6_phOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sig;
		int32_t L_1 = ___1_sigOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_pk;
		int32_t L_3 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___4_ctx;
		uint8_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___5_ph;
		int32_t L_7 = ___6_phOff;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		int32_t L_8 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___PrehashSize;
		bool L_9;
		L_9 = Ed25519_ImplVerify_m8FBF7741296488BE35F38F5AA312F606283D4123(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed25519_VerifyPrehash_m4F4427C3AF365882833BF88E9DC54A814C38B5C8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sig, int32_t ___1_sigOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, RuntimeObject* ___5_ph, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___PrehashSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___PrehashSize;
		RuntimeObject* L_3 = ___5_ph;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker2< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(5, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_3, L_4, 0);
		if ((((int32_t)L_2) == ((int32_t)L_5)))
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral244DDD15B47825F82F417E249D4FFA669F1BE35C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed25519_VerifyPrehash_m4F4427C3AF365882833BF88E9DC54A814C38B5C8_RuntimeMethod_var)));
	}

IL_0026:
	{
		V_1 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_sig;
		int32_t L_8 = ___1_sigOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___2_pk;
		int32_t L_10 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___4_ctx;
		uint8_t L_12 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		NullCheck(L_14);
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Ed25519_ImplVerify_m8FBF7741296488BE35F38F5AA312F606283D4123(L_7, L_8, L_9, L_10, L_11, L_12, L_13, 0, ((int32_t)(((RuntimeArray*)L_14)->max_length)), NULL);
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519__ctor_mDBFE8FBFC7E2B91F5196A403B5567EB9F9760C46 (Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed25519__cctor_m66DB06141E6DD779E321FC907D1823D76E166124 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____5BBB9265FCB4E834C68440328645B1A187F68D3275881FC46B21564B11326DA5_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____6965AC9D48CA477E9A17658D33A217051648138AD7024514DE014D8001B533C3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____97CAAC7D5BE7722352C1AB556BFE01D3F3CCA0F50B5A648195D6415006620C8F_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____BABB01CD1E2AD140F7D2AF35515DA38E8936F0BA0298BCF0245EB5692A3F69CC_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____BD6174A7C16E1AF07272966A9C071C8A3CF16B2726C50D672A09F60636B08901_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____D6380FB2FF2DD88C9290D88B81E78BCA13AAAB4BE827B103062AFBB1085B0793_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____ECA151F23D399F9FE976255B143D0691D0BE043E033B0E2814C0A547336D6545_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA6E8DE812C20B70B9E93F176F4D555488AD06AC);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___PrehashSize = ((int32_t)64);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___PublicKeySize = ((int32_t)32);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___SecretKeySize = ((int32_t)32);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___SignatureSize = ((int32_t)64);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = Strings_ToByteArray_m75FA6151AA28B680E0C9DB857AC734483A308A63(_stringLiteralCA6E8DE812C20B70B9E93F176F4D555488AD06AC, NULL);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___Dom2Prefix = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___Dom2Prefix), (void*)L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = L_1;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____BD6174A7C16E1AF07272966A9C071C8A3CF16B2726C50D672A09F60636B08901_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_2, L_3, NULL);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___P = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___P), (void*)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_6 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____6965AC9D48CA477E9A17658D33A217051648138AD7024514DE014D8001B533C3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_5, L_6, NULL);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___L = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___L), (void*)L_5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = L_7;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_9 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____5BBB9265FCB4E834C68440328645B1A187F68D3275881FC46B21564B11326DA5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_8, L_9, NULL);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___B_x = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___B_x), (void*)L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_12 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____ECA151F23D399F9FE976255B143D0691D0BE043E033B0E2814C0A547336D6545_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_11, L_12, NULL);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___B_y = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___B_y), (void*)L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = L_13;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_15 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____D6380FB2FF2DD88C9290D88B81E78BCA13AAAB4BE827B103062AFBB1085B0793_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_14, L_15, NULL);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___C_d = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___C_d), (void*)L_14);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = L_16;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_18 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____97CAAC7D5BE7722352C1AB556BFE01D3F3CCA0F50B5A648195D6415006620C8F_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_17, L_18, NULL);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___C_d2 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___C_d2), (void*)L_17);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = L_19;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_21 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____BABB01CD1E2AD140F7D2AF35515DA38E8936F0BA0298BCF0245EB5692A3F69CC_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_20, L_21, NULL);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___C_d4 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___C_d4), (void*)L_20);
		RuntimeObject* L_22 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_22, NULL);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompLock = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompLock), (void*)L_22);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBaseTable = (PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBaseTable), (void*)(PointExtU5BU5D_t46790B0A3D233C1BBAEF8B0C39CDEEE510E0435E*)NULL);
		((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBase = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_StaticFields*)il2cpp_codegen_static_fields_for(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var))->___precompBase), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointAccum__ctor_m02F2BD460E06C5F956372EBC95EA93A876B563D0 (PointAccum_t1E21EBF6E8329006B0CBABA35C7CE26EE8BEF374* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		__this->___x = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x), (void*)L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		__this->___y = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___y), (void*)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		__this->___z = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___z), (void*)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		__this->___u = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___u), (void*)L_3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4;
		L_4 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		__this->___v = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___v), (void*)L_4);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointExt__ctor_m541D13E5A98D087E319F54FAF37765C8DEEE5830 (PointExt_t197E2F8F5038FB33198FB5D80B2177058984D9E1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		__this->___x = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x), (void*)L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		__this->___y = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___y), (void*)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		__this->___z = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___z), (void*)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3;
		L_3 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		__this->___t = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___t), (void*)L_3);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointPrecomp__ctor_m66DA0C74BDD15D7C88DDAFF41BEEC059417DBC60 (PointPrecomp_t6BE2578965F0162E28418938E49F12414BCA176F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		__this->___ypx_h = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ypx_h), (void*)L_0);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		__this->___ymx_h = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ymx_h), (void*)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2;
		L_2 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		__this->___xyd = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___xyd), (void*)L_2);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed448_CalculateS_mC7164CE5601E9078C4D27CAC86DB240091C06A3D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_r, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_k, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	int32_t V_4 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_r;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_DecodeScalar_m545F13A8FD6DFBADE40B569CC47D7FDC0AEAD981(L_1, 0, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		V_1 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_k;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_1;
		Ed448_DecodeScalar_m545F13A8FD6DFBADE40B569CC47D7FDC0AEAD981(L_4, 0, L_5, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		V_2 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___2_s;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_2;
		Ed448_DecodeScalar_m545F13A8FD6DFBADE40B569CC47D7FDC0AEAD981(L_7, 0, L_8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		uint32_t L_12;
		L_12 = Nat_MulAddTo_m6BFD4149F839F58A815479AF2EDCA11CC4F44BC4(((int32_t)14), L_9, L_10, L_11, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)114));
		V_3 = L_13;
		V_4 = 0;
		goto IL_005c;
	}

IL_0048:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		uint32_t L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_3;
		int32_t L_19 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_Encode32_m1DA3C6C6B6A16A8BBA98264C47914286616F2C14(L_17, L_18, ((int32_t)il2cpp_codegen_multiply(L_19, 4)), NULL);
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_005c:
	{
		int32_t L_21 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0048;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = Ed448_ReduceScalar_m54319A41543916403172AE7F20FEC21DD5AAE4EA(L_23, NULL);
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_CheckContextVar_m9CE191D7DBB025269FFB58C7A6898A55B5460821 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_ctx, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_ctx;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_ctx;
		NullCheck(L_1);
		return (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) < ((int32_t)((int32_t)256)))? 1 : 0);
	}

IL_000e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed448_CheckPoint_m822CBA6037606DC9344575A094B7AFD21EAF52E6 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2;
		L_2 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_2 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_1;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_3, L_4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___1_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_2;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_5, L_6, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_0;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_7, L_8, L_9, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_1;
		X448Field_Add_mCFABA589F46545F656A1CCEAD2669A8BBC9C452A(L_10, L_11, L_12, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_0;
		X448Field_Mul_mC51EE78E9A520350193A2014FCC0403E597F2FE5(L_13, ((int32_t)39081), L_14, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_0;
		X448Field_SubOne_mA0311031490735E0417201B0AE88EE8D7A10DAA3(L_15, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_0;
		X448Field_Add_mCFABA589F46545F656A1CCEAD2669A8BBC9C452A(L_16, L_17, L_18, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_0;
		X448Field_Normalize_mF473952189B87EBD9915C6D49F69511F3A056A34(L_19, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_0;
		int32_t L_21;
		L_21 = X448Field_IsZero_m46BADDCE7BC56E69F5E81490C58F0C1C5F7A6449(L_20, NULL);
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed448_CheckPoint_m6D277D2D5AE6D9C1F4D2D54A93BAA0EEE36644C3 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2;
		L_2 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_2 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3;
		L_3 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_3 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_1;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_4, L_5, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_2;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_6, L_7, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_3;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_8, L_9, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_10, L_11, L_12, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_1;
		X448Field_Add_mCFABA589F46545F656A1CCEAD2669A8BBC9C452A(L_13, L_14, L_15, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_1;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_16, L_17, L_18, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_3;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_19, L_20, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_0;
		X448Field_Mul_mC51EE78E9A520350193A2014FCC0403E597F2FE5(L_21, ((int32_t)39081), L_22, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_0;
		X448Field_Sub_mBFA894A2EA11C691607571A006356D308952945E(L_23, L_24, L_25, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = V_0;
		X448Field_Add_mCFABA589F46545F656A1CCEAD2669A8BBC9C452A(L_26, L_27, L_28, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_0;
		X448Field_Normalize_mF473952189B87EBD9915C6D49F69511F3A056A34(L_29, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_0;
		int32_t L_31;
		L_31 = X448Field_IsZero_m46BADDCE7BC56E69F5E81490C58F0C1C5F7A6449(L_30, NULL);
		return L_31;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_CheckPointVar_m1F8350197D7E4053DF5BD0D2A5352285D860EB40 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_p;
		NullCheck(L_0);
		int32_t L_1 = ((int32_t)56);
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if (!((int32_t)((int32_t)L_2&((int32_t)127))))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)0;
	}

IL_000b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_p;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_Decode32_mBD688D89F0C5187AA44261A0F7164640AE484985(L_4, 0, L_5, 0, ((int32_t)14), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___P;
		bool L_8;
		L_8 = Nat_Gte_m0AB9084A9A6D11BE869652D2FBCB3D24FC3F3135(((int32_t)14), L_6, L_7, NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_CheckScalarVar_m017925602D6B1406D60F266E38582E882D86B846 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_s;
		NullCheck(L_0);
		int32_t L_1 = ((int32_t)56);
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		if (!L_2)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_s;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_DecodeScalar_m545F13A8FD6DFBADE40B569CC47D7FDC0AEAD981(L_4, 0, L_5, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___L;
		bool L_8;
		L_8 = Nat_Gte_m0AB9084A9A6D11BE869652D2FBCB3D24FC3F3135(((int32_t)14), L_6, L_7, NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Ed448_CreatePrehash_mA08DEF5DAF2D67BB0172A19A5A218F38C92CBD5B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Ed448_CreateXof_m502686A3D00CEACF0BD8605AEAD15D0A16A04934(NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Ed448_CreateXof_m502686A3D00CEACF0BD8605AEAD15D0A16A04934 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940* L_0 = (ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940*)il2cpp_codegen_object_new(ShakeDigest_tFF1DF7827C407C025EB5581417DFD38B3A910940_il2cpp_TypeInfo_var);
		ShakeDigest__ctor_m2B3B14BB44A9AD5C9CDBDD41EE6122B928CFC532(L_0, ((int32_t)256), NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed448_Decode16_m55E2D057A0C8D3C42857F72A1FBD2D160B238DDA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bs;
		int32_t L_1 = ___1_off;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_bs;
		int32_t L_5 = ___1_off;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		___1_off = L_6;
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		return ((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_8<<8))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed448_Decode24_mD5CE10B8704B6509EC76248CB962A87C758B18BC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bs;
		int32_t L_1 = ___1_off;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_bs;
		int32_t L_5 = ___1_off;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		___1_off = L_6;
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_bs;
		int32_t L_10 = ___1_off;
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		___1_off = L_11;
		NullCheck(L_9);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		return ((int32_t)(((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_8<<8))))|((int32_t)((int32_t)L_13<<((int32_t)16)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Ed448_Decode32_m159290D4C5D7A722FF1C898DDB419C8C1F591635 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bs;
		int32_t L_1 = ___1_off;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_bs;
		int32_t L_5 = ___1_off;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		___1_off = L_6;
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_bs;
		int32_t L_10 = ___1_off;
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		___1_off = L_11;
		NullCheck(L_9);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_bs;
		int32_t L_15 = ___1_off;
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		___1_off = L_16;
		NullCheck(L_14);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_8<<8))))|((int32_t)((int32_t)L_13<<((int32_t)16)))))|((int32_t)((int32_t)L_18<<((int32_t)24)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Decode32_mBD688D89F0C5187AA44261A0F7164640AE484985 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_bsOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_n, int32_t ___3_nOff, int32_t ___4_nLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0018;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___2_n;
		int32_t L_1 = ___3_nOff;
		int32_t L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_bs;
		int32_t L_4 = ___1_bsOff;
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		uint32_t L_6;
		L_6 = Ed448_Decode32_m159290D4C5D7A722FF1C898DDB419C8C1F591635(L_3, ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)il2cpp_codegen_multiply(L_5, 4)))), NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (uint32_t)L_6);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0018:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = ___4_nLen;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_DecodePointVar_m2AA0C45F69EB41E09CC10E807E57CB6501317613 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, int32_t ___1_pOff, bool ___2_negate, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___3_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_p;
		int32_t L_1 = ___1_pOff;
		int32_t L_2 = ___1_pOff;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = Arrays_CopyOfRange_mF6EEA7FA46A65BA424589A487A5A2141E81F0B7D(L_0, L_1, ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)57))), NULL);
		V_0 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Ed448_CheckPointVar_m1F8350197D7E4053DF5BD0D2A5352285D860EB40(L_4, NULL);
		if (L_5)
		{
			goto IL_0016;
		}
	}
	{
		return (bool)0;
	}

IL_0016:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = ((int32_t)56);
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = ((int32_t)(((int32_t)((int32_t)L_8&((int32_t)128)))>>7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		uint8_t* L_10 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)56))));
		int32_t L_11 = *((uint8_t*)L_10);
		*((int8_t*)L_10) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_11&((int32_t)127))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_13 = ___3_r;
		NullCheck(L_13);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = L_13->___y;
		X448Field_Decode_mB821749EAC11700BE5BD90446A8B3C370D8AEC69(L_12, 0, L_14, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15;
		L_15 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_2 = L_15;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16;
		L_16 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_3 = L_16;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_17 = ___3_r;
		NullCheck(L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = L_17->___y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_2;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_18, L_19, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_3;
		X448Field_Mul_mC51EE78E9A520350193A2014FCC0403E597F2FE5(L_20, ((int32_t)39081), L_21, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_2;
		X448Field_Negate_mBF98477D36756508975C89717D0F4F5ED7590956(L_22, L_23, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_2;
		X448Field_AddOne_m1433ACFDABE593672910D354940A7211EAFCCA70(L_24, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_3;
		X448Field_AddOne_m1433ACFDABE593672910D354940A7211EAFCCA70(L_25, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_3;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_28 = ___3_r;
		NullCheck(L_28);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = L_28->___x;
		bool L_30;
		L_30 = X448Field_SqrtRatioVar_mD1C1C3854B0B8A83203458927A26521D15B8632A(L_26, L_27, L_29, NULL);
		if (L_30)
		{
			goto IL_0087;
		}
	}
	{
		return (bool)0;
	}

IL_0087:
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_31 = ___3_r;
		NullCheck(L_31);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = L_31->___x;
		X448Field_Normalize_mF473952189B87EBD9915C6D49F69511F3A056A34(L_32, NULL);
		int32_t L_33 = V_1;
		if ((!(((uint32_t)L_33) == ((uint32_t)1))))
		{
			goto IL_00a5;
		}
	}
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_34 = ___3_r;
		NullCheck(L_34);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = L_34->___x;
		bool L_36;
		L_36 = X448Field_IsZeroVar_m778F59C0FFAB3021A4B8B3BFEA328753407F039D(L_35, NULL);
		if (!L_36)
		{
			goto IL_00a5;
		}
	}
	{
		return (bool)0;
	}

IL_00a5:
	{
		bool L_37 = ___2_negate;
		int32_t L_38 = V_1;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_39 = ___3_r;
		NullCheck(L_39);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = L_39->___x;
		NullCheck(L_40);
		int32_t L_41 = 0;
		uint32_t L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		if (!((int32_t)((int32_t)L_37^((((int32_t)((((int64_t)((int64_t)L_38)) == ((int64_t)((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_42&1))))))? 1 : 0)) == ((int32_t)0))? 1 : 0))))
		{
			goto IL_00cc;
		}
	}
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_43 = ___3_r;
		NullCheck(L_43);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = L_43->___x;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_45 = ___3_r;
		NullCheck(L_45);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = L_45->___x;
		X448Field_Negate_mBF98477D36756508975C89717D0F4F5ED7590956(L_44, L_46, NULL);
	}

IL_00cc:
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_47 = ___3_r;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_PointExtendXY_m662064FF7F95758494BCB9C0D3E322C61A60675C(L_47, NULL);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_DecodeScalar_m545F13A8FD6DFBADE40B569CC47D7FDC0AEAD981 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_k;
		int32_t L_1 = ___1_kOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___2_n;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_Decode32_mBD688D89F0C5187AA44261A0F7164640AE484985(L_0, L_1, L_2, 0, ((int32_t)14), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Dom4_m672480903703837361B9574439007118964C9883 (RuntimeObject* ___0_d, uint8_t ___1_x, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_d;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___Dom4Prefix;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___Dom4Prefix;
		NullCheck(L_2);
		NullCheck(L_0);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_0, L_1, 0, ((int32_t)(((RuntimeArray*)L_2)->max_length)));
		RuntimeObject* L_3 = ___0_d;
		uint8_t L_4 = ___1_x;
		NullCheck(L_3);
		InterfaceActionInvoker1< uint8_t >::Invoke(3, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_3, L_4);
		RuntimeObject* L_5 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___2_y;
		NullCheck(L_6);
		NullCheck(L_5);
		InterfaceActionInvoker1< uint8_t >::Invoke(3, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_5, (uint8_t)((int32_t)(uint8_t)((int32_t)(((RuntimeArray*)L_6)->max_length))));
		RuntimeObject* L_7 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___2_y;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___2_y;
		NullCheck(L_9);
		NullCheck(L_7);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_7, L_8, 0, ((int32_t)(((RuntimeArray*)L_9)->max_length)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Encode24_mB870B50A8B58650FD797666D051807FD942D1F9E (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_bs;
		int32_t L_1 = ___2_off;
		uint32_t L_2 = ___0_n;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_bs;
		int32_t L_4 = ___2_off;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		___2_off = L_5;
		uint32_t L_6 = ___0_n;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_6>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___1_bs;
		int32_t L_8 = ___2_off;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		___2_off = L_9;
		uint32_t L_10 = ___0_n;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>((int32_t)16)))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Encode32_m1DA3C6C6B6A16A8BBA98264C47914286616F2C14 (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_bs;
		int32_t L_1 = ___2_off;
		uint32_t L_2 = ___0_n;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_bs;
		int32_t L_4 = ___2_off;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		___2_off = L_5;
		uint32_t L_6 = ___0_n;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_6>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___1_bs;
		int32_t L_8 = ___2_off;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		___2_off = L_9;
		uint32_t L_10 = ___0_n;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___1_bs;
		int32_t L_12 = ___2_off;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		___2_off = L_13;
		uint32_t L_14 = ___0_n;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_14>>((int32_t)24)))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Encode56_mD071120F48E4C43F8F5BD7C588EB71F4F7DC3F1B (uint64_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint64_t L_0 = ___0_n;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_bs;
		int32_t L_2 = ___2_off;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_Encode32_m1DA3C6C6B6A16A8BBA98264C47914286616F2C14(((int32_t)(uint32_t)L_0), L_1, L_2, NULL);
		uint64_t L_3 = ___0_n;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_bs;
		int32_t L_5 = ___2_off;
		Ed448_Encode24_mB870B50A8B58650FD797666D051807FD942D1F9E(((int32_t)(uint32_t)((int64_t)((uint64_t)L_3>>((int32_t)32)))), L_4, ((int32_t)il2cpp_codegen_add(L_5, 4)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Ed448_EncodePoint_m3CFA6EC0A268BEF689B0E994153F7EA37A295E6A (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___0_p, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_r, int32_t ___2_rOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_1 = L_1;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_2 = ___0_p;
		NullCheck(L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = L_2->___z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_1;
		X448Field_Inv_mFB31775FD55C6B3D7374C0523C25D0D0B570783F(L_3, L_4, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_5 = ___0_p;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_6, L_7, L_8, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_9 = ___0_p;
		NullCheck(L_9);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9->___y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_1;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_10, L_11, L_12, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_0;
		X448Field_Normalize_mF473952189B87EBD9915C6D49F69511F3A056A34(L_13, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_1;
		X448Field_Normalize_mF473952189B87EBD9915C6D49F69511F3A056A34(L_14, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		int32_t L_17;
		L_17 = Ed448_CheckPoint_m822CBA6037606DC9344575A094B7AFD21EAF52E6(L_15, L_16, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___1_r;
		int32_t L_20 = ___2_rOff;
		X448Field_Encode_m9B96C1858895EC17068B864722F324DF9600E600(L_18, L_19, L_20, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___1_r;
		int32_t L_22 = ___2_rOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_0;
		NullCheck(L_23);
		int32_t L_24 = 0;
		uint32_t L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_22, ((int32_t)57))), 1))), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_25&1))<<7))));
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_GeneratePrivateKey_m411F7E0D39348C1DB6613F8BDFA9976347C2D6B1 (SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___0_random, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_k, const RuntimeMethod* method) 
{
	{
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_0 = ___0_random;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_k;
		NullCheck(L_0);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_GeneratePublicKey_mE33ACD57E6A1650A587A0F01444D958931D1B474 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Ed448_CreateXof_m502686A3D00CEACF0BD8605AEAD15D0A16A04934(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)114));
		V_0 = L_1;
		RuntimeObject* L_2 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_sk;
		int32_t L_4 = ___1_skOff;
		int32_t L_5 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___SecretKeySize;
		NullCheck(L_2);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_2, L_3, L_4, L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_7);
		NullCheck(L_2);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var, L_2, L_6, 0, ((int32_t)(((RuntimeArray*)L_7)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)57));
		V_1 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_1;
		Ed448_PruneScalar_m0FBADCA509B824C09321682080565AF7C7BB3C25(L_10, 0, L_11, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___2_pk;
		int32_t L_14 = ___3_pkOff;
		Ed448_ScalarMultBaseEncoded_m604EF7DEB4822EB0F67CD3B671C52D492084977B(L_12, L_13, L_14, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* Ed448_GetWnafVar_m04BC3C268B0D730FD1CD80ACF00A8940BA0AFD17 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_n, int32_t ___1_width, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_1 = NULL;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	int32_t V_5 = 0;
	uint32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint32_t V_9 = 0;
	int32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		V_0 = L_0;
		V_6 = 0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = V_0;
		NullCheck(L_1);
		V_7 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		V_8 = ((int32_t)14);
		goto IL_003e;
	}

IL_0016:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_n;
		int32_t L_3 = V_8;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_9 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_0;
		int32_t L_7 = V_7;
		int32_t L_8 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		V_7 = L_8;
		uint32_t L_9 = V_9;
		uint32_t L_10 = V_6;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_9>>((int32_t)16)))|((int32_t)((int32_t)L_10<<((int32_t)16))))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		int32_t L_12 = V_7;
		int32_t L_13 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		V_7 = L_13;
		uint32_t L_14 = V_9;
		uint32_t L_15 = L_14;
		V_6 = L_15;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)L_15);
	}

IL_003e:
	{
		int32_t L_16 = V_8;
		int32_t L_17 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		V_8 = L_17;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_18 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913_il2cpp_TypeInfo_var, (uint32_t)((int32_t)447));
		V_1 = L_18;
		int32_t L_19 = ___1_width;
		int32_t L_20 = ((int32_t)(1<<((int32_t)(L_19&((int32_t)31)))));
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		V_3 = ((int32_t)((uint32_t)L_20>>1));
		V_4 = 0;
		V_5 = 0;
		V_10 = 0;
		goto IL_00d5;
	}

IL_006b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_0;
		int32_t L_22 = V_10;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		uint32_t L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_11 = L_24;
		goto IL_00c2;
	}

IL_0073:
	{
		uint32_t L_25 = V_11;
		int32_t L_26 = V_5;
		V_12 = ((int32_t)((uint32_t)L_25>>((int32_t)(L_26&((int32_t)31)))));
		uint32_t L_27 = V_12;
		uint32_t L_28 = V_4;
		if ((!(((uint32_t)((int32_t)((int32_t)L_27&1))) == ((uint32_t)L_28))))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_29 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		goto IL_00c2;
	}

IL_008d:
	{
		uint32_t L_30 = V_12;
		uint32_t L_31 = V_2;
		uint32_t L_32 = V_4;
		V_13 = ((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_30&(int32_t)L_31)), (int32_t)L_32));
		uint32_t L_33 = V_13;
		uint32_t L_34 = V_3;
		V_4 = ((int32_t)((int32_t)L_33&(int32_t)L_34));
		uint32_t L_35 = V_13;
		uint32_t L_36 = V_4;
		V_13 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, ((int32_t)((int32_t)L_36<<1))));
		uint32_t L_37 = V_4;
		int32_t L_38 = ___1_width;
		V_4 = ((int32_t)((uint32_t)L_37>>((int32_t)(((int32_t)il2cpp_codegen_subtract(L_38, 1))&((int32_t)31)))));
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_39 = V_1;
		int32_t L_40 = V_10;
		int32_t L_41 = V_5;
		uint32_t L_42 = V_13;
		NullCheck(L_39);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)(L_40<<4)), L_41))), (int8_t)((int8_t)L_42));
		int32_t L_43 = V_5;
		int32_t L_44 = ___1_width;
		V_5 = ((int32_t)il2cpp_codegen_add(L_43, L_44));
	}

IL_00c2:
	{
		int32_t L_45 = V_5;
		if ((((int32_t)L_45) < ((int32_t)((int32_t)16))))
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_46 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_47, ((int32_t)16)));
	}

IL_00d5:
	{
		int32_t L_48 = V_10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = V_0;
		NullCheck(L_49);
		if ((((int32_t)L_48) < ((int32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)))))
		{
			goto IL_006b;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_50 = V_1;
		return L_50;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ImplSign_m11416C7647A15516DCD7BA5B05293B1157D88046 (RuntimeObject* ___0_d, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_h, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_s, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_pk, int32_t ___4_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_ctx, uint8_t ___6_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___7_m, int32_t ___8_mOff, int32_t ___9_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___10_sig, int32_t ___11_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_d;
		uint8_t L_1 = ___6_phflag;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___5_ctx;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_Dom4_m672480903703837361B9574439007118964C9883(L_0, L_1, L_2, NULL);
		RuntimeObject* L_3 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_h;
		NullCheck(L_3);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_3, L_4, ((int32_t)57), ((int32_t)57));
		RuntimeObject* L_5 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___7_m;
		int32_t L_7 = ___8_mOff;
		int32_t L_8 = ___9_mLen;
		NullCheck(L_5);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_5, L_6, L_7, L_8);
		RuntimeObject* L_9 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___1_h;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___1_h;
		NullCheck(L_11);
		NullCheck(L_9);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var, L_9, L_10, 0, ((int32_t)(((RuntimeArray*)L_11)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___1_h;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = Ed448_ReduceScalar_m54319A41543916403172AE7F20FEC21DD5AAE4EA(L_13, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)57));
		V_0 = L_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_0;
		Ed448_ScalarMultBaseEncoded_m604EF7DEB4822EB0F67CD3B671C52D492084977B(L_16, L_17, 0, NULL);
		RuntimeObject* L_18 = ___0_d;
		uint8_t L_19 = ___6_phflag;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___5_ctx;
		Ed448_Dom4_m672480903703837361B9574439007118964C9883(L_18, L_19, L_20, NULL);
		RuntimeObject* L_21 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_0;
		NullCheck(L_21);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_21, L_22, 0, ((int32_t)57));
		RuntimeObject* L_23 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___3_pk;
		int32_t L_25 = ___4_pkOff;
		NullCheck(L_23);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_23, L_24, L_25, ((int32_t)57));
		RuntimeObject* L_26 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___7_m;
		int32_t L_28 = ___8_mOff;
		int32_t L_29 = ___9_mLen;
		NullCheck(L_26);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_26, L_27, L_28, L_29);
		RuntimeObject* L_30 = ___0_d;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31 = ___1_h;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___1_h;
		NullCheck(L_32);
		NullCheck(L_30);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var, L_30, L_31, 0, ((int32_t)(((RuntimeArray*)L_32)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___1_h;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35;
		L_35 = Ed448_ReduceScalar_m54319A41543916403172AE7F20FEC21DD5AAE4EA(L_34, NULL);
		V_1 = L_35;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = ___2_s;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38;
		L_38 = Ed448_CalculateS_mC7164CE5601E9078C4D27CAC86DB240091C06A3D(L_16, L_36, L_37, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___10_sig;
		int32_t L_41 = ___11_sigOff;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_39, 0, (RuntimeArray*)L_40, L_41, ((int32_t)57), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___10_sig;
		int32_t L_43 = ___11_sigOff;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_38, 0, (RuntimeArray*)L_42, ((int32_t)il2cpp_codegen_add(L_43, ((int32_t)57))), ((int32_t)57), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ImplSign_m2321B0D0756DA0B6582A2F9BF7225F4DCCB913D3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_ctx, uint8_t ___3_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_m, int32_t ___5_mOff, int32_t ___6_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___7_sig, int32_t ___8_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___2_ctx;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Ed448_CheckContextVar_m9CE191D7DBB025269FFB58C7A6898A55B5460821(L_0, NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral062880938476E2B20298E6FC08CB87B48E5C7853)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed448_ImplSign_m2321B0D0756DA0B6582A2F9BF7225F4DCCB913D3_RuntimeMethod_var)));
	}

IL_0013:
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = Ed448_CreateXof_m502686A3D00CEACF0BD8605AEAD15D0A16A04934(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)114));
		V_0 = L_4;
		RuntimeObject* L_5 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_sk;
		int32_t L_7 = ___1_skOff;
		int32_t L_8 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___SecretKeySize;
		NullCheck(L_5);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_5, L_6, L_7, L_8);
		RuntimeObject* L_9 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_11);
		NullCheck(L_9);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var, L_9, L_10, 0, ((int32_t)(((RuntimeArray*)L_11)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)57));
		V_1 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_1;
		Ed448_PruneScalar_m0FBADCA509B824C09321682080565AF7C7BB3C25(L_14, 0, L_15, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)57));
		V_2 = L_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_2;
		Ed448_ScalarMultBaseEncoded_m604EF7DEB4822EB0F67CD3B671C52D492084977B(L_17, L_18, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___2_ctx;
		uint8_t L_23 = ___3_phflag;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___4_m;
		int32_t L_25 = ___5_mOff;
		int32_t L_26 = ___6_mLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = ___7_sig;
		int32_t L_28 = ___8_sigOff;
		Ed448_ImplSign_m11416C7647A15516DCD7BA5B05293B1157D88046(L_9, L_19, L_20, L_21, 0, L_22, L_23, L_24, L_25, L_26, L_27, L_28, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ImplSign_m6835855D576D6786D1CCE863EEDA49B06876C692 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, uint8_t ___5_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_m, int32_t ___7_mOff, int32_t ___8_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___9_sig, int32_t ___10_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___4_ctx;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Ed448_CheckContextVar_m9CE191D7DBB025269FFB58C7A6898A55B5460821(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral062880938476E2B20298E6FC08CB87B48E5C7853)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed448_ImplSign_m6835855D576D6786D1CCE863EEDA49B06876C692_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = Ed448_CreateXof_m502686A3D00CEACF0BD8605AEAD15D0A16A04934(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)114));
		V_0 = L_4;
		RuntimeObject* L_5 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_sk;
		int32_t L_7 = ___1_skOff;
		int32_t L_8 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___SecretKeySize;
		NullCheck(L_5);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_5, L_6, L_7, L_8);
		RuntimeObject* L_9 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = V_0;
		NullCheck(L_11);
		NullCheck(L_9);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var, L_9, L_10, 0, ((int32_t)(((RuntimeArray*)L_11)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)57));
		V_1 = L_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_1;
		Ed448_PruneScalar_m0FBADCA509B824C09321682080565AF7C7BB3C25(L_14, 0, L_15, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___2_pk;
		int32_t L_19 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___4_ctx;
		uint8_t L_21 = ___5_phflag;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___6_m;
		int32_t L_23 = ___7_mOff;
		int32_t L_24 = ___8_mLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___9_sig;
		int32_t L_26 = ___10_sigOff;
		Ed448_ImplSign_m11416C7647A15516DCD7BA5B05293B1157D88046(L_9, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, L_25, L_26, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_ImplVerify_mB7897E9ABF91E0DE3A03B8A6106B119CE93749C4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sig, int32_t ___1_sigOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, uint8_t ___5_phflag, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_m, int32_t ___7_mOff, int32_t ___8_mLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* V_6 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___4_ctx;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Ed448_CheckContextVar_m9CE191D7DBB025269FFB58C7A6898A55B5460821(L_0, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral062880938476E2B20298E6FC08CB87B48E5C7853)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed448_ImplVerify_mB7897E9ABF91E0DE3A03B8A6106B119CE93749C4_RuntimeMethod_var)));
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_sig;
		int32_t L_4 = ___1_sigOff;
		int32_t L_5 = ___1_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = Arrays_CopyOfRange_mF6EEA7FA46A65BA424589A487A5A2141E81F0B7D(L_3, L_4, ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)57))), NULL);
		V_0 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___0_sig;
		int32_t L_8 = ___1_sigOff;
		int32_t L_9 = ___1_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		int32_t L_10 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___SignatureSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = Arrays_CopyOfRange_mF6EEA7FA46A65BA424589A487A5A2141E81F0B7D(L_7, ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)57))), ((int32_t)il2cpp_codegen_add(L_9, L_10)), NULL);
		V_1 = L_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		bool L_13;
		L_13 = Ed448_CheckPointVar_m1F8350197D7E4053DF5BD0D2A5352285D860EB40(L_12, NULL);
		if (L_13)
		{
			goto IL_003c;
		}
	}
	{
		return (bool)0;
	}

IL_003c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Ed448_CheckScalarVar_m017925602D6B1406D60F266E38582E882D86B846(L_14, NULL);
		if (L_15)
		{
			goto IL_0046;
		}
	}
	{
		return (bool)0;
	}

IL_0046:
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_16 = (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)il2cpp_codegen_object_new(PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
		PointExt__ctor_m97C9A86D0FB34EDB66C2E5A4EBFC4A99C4D14EA7(L_16, NULL);
		V_2 = L_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___2_pk;
		int32_t L_18 = ___3_pkOff;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_19 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Ed448_DecodePointVar_m2AA0C45F69EB41E09CC10E807E57CB6501317613(L_17, L_18, (bool)1, L_19, NULL);
		if (L_20)
		{
			goto IL_0059;
		}
	}
	{
		return (bool)0;
	}

IL_0059:
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		RuntimeObject* L_21;
		L_21 = Ed448_CreateXof_m502686A3D00CEACF0BD8605AEAD15D0A16A04934(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)114));
		V_3 = L_22;
		RuntimeObject* L_23 = L_21;
		uint8_t L_24 = ___5_phflag;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___4_ctx;
		Ed448_Dom4_m672480903703837361B9574439007118964C9883(L_23, L_24, L_25, NULL);
		RuntimeObject* L_26 = L_23;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_0;
		NullCheck(L_26);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_26, L_27, 0, ((int32_t)57));
		RuntimeObject* L_28 = L_26;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___2_pk;
		int32_t L_30 = ___3_pkOff;
		NullCheck(L_28);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_28, L_29, L_30, ((int32_t)57));
		RuntimeObject* L_31 = L_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___6_m;
		int32_t L_33 = ___7_mOff;
		int32_t L_34 = ___8_mLen;
		NullCheck(L_31);
		InterfaceActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(4, IDigest_t1B680F212C39BDB4B3407D25C8858A4678BB89F1_il2cpp_TypeInfo_var, L_31, L_32, L_33, L_34);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_3;
		NullCheck(L_36);
		NullCheck(L_31);
		int32_t L_37;
		L_37 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var, L_31, L_35, 0, ((int32_t)(((RuntimeArray*)L_36)->max_length)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39;
		L_39 = Ed448_ReduceScalar_m54319A41543916403172AE7F20FEC21DD5AAE4EA(L_38, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		V_4 = L_40;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_41 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = V_4;
		Ed448_DecodeScalar_m545F13A8FD6DFBADE40B569CC47D7FDC0AEAD981(L_41, 0, L_42, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		V_5 = L_43;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_5;
		Ed448_DecodeScalar_m545F13A8FD6DFBADE40B569CC47D7FDC0AEAD981(L_39, 0, L_44, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_45 = (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)il2cpp_codegen_object_new(PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
		PointExt__ctor_m97C9A86D0FB34EDB66C2E5A4EBFC4A99C4D14EA7(L_45, NULL);
		V_6 = L_45;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = V_5;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_48 = V_2;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_49 = V_6;
		Ed448_ScalarMultStrausVar_m8841B106D7624F16097473A1A1909E8D094AC166(L_46, L_47, L_48, L_49, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)57));
		V_7 = L_50;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_51 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = V_7;
		int32_t L_53;
		L_53 = Ed448_EncodePoint_m3CFA6EC0A268BEF689B0E994153F7EA37A295E6A(L_51, L_52, 0, NULL);
		if (!L_53)
		{
			goto IL_00f5;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_55 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = Arrays_AreEqual_m93263147E08C039BD573B4D2A4921988053170B7(L_54, L_55, NULL);
		return L_56;
	}

IL_00f5:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointAddVar_m43C18B554A4E39E9F9CF71C9634B60C5DB7B7604 (bool ___0_negate, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___1_p, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___2_r, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_6 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_7 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_8 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_9 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_10 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_11 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2;
		L_2 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_2 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3;
		L_3 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_3 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4;
		L_4 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_4 = L_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5;
		L_5 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_5 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6;
		L_6 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_6 = L_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7;
		L_7 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_7 = L_7;
		bool L_8 = ___0_negate;
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_4;
		V_8 = L_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_1;
		V_9 = L_10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_6;
		V_10 = L_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_5;
		V_11 = L_12;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_13 = ___1_p;
		NullCheck(L_13);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = L_13->___y;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_15 = ___1_p;
		NullCheck(L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = L_15->___x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_7;
		X448Field_Sub_mBFA894A2EA11C691607571A006356D308952945E(L_14, L_16, L_17, NULL);
		goto IL_007d;
	}

IL_005b:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_1;
		V_8 = L_18;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_4;
		V_9 = L_19;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_5;
		V_10 = L_20;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_6;
		V_11 = L_21;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_22 = ___1_p;
		NullCheck(L_22);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = L_22->___y;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_24 = ___1_p;
		NullCheck(L_24);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = L_24->___x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_7;
		X448Field_Add_mCFABA589F46545F656A1CCEAD2669A8BBC9C452A(L_23, L_25, L_26, NULL);
	}

IL_007d:
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_27 = ___1_p;
		NullCheck(L_27);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = L_27->___z;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_29 = ___2_r;
		NullCheck(L_29);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = L_29->___z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_0;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_28, L_30, L_31, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = V_1;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_32, L_33, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_34 = ___1_p;
		NullCheck(L_34);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = L_34->___x;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_36 = ___2_r;
		NullCheck(L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = L_36->___x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = V_2;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_35, L_37, L_38, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_39 = ___1_p;
		NullCheck(L_39);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = L_39->___y;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_41 = ___2_r;
		NullCheck(L_41);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = L_41->___y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = V_3;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_40, L_42, L_43, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = V_4;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_44, L_45, L_46, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = V_4;
		X448Field_Mul_mC51EE78E9A520350193A2014FCC0403E597F2FE5(L_47, ((int32_t)39081), L_48, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = V_10;
		X448Field_Add_mCFABA589F46545F656A1CCEAD2669A8BBC9C452A(L_49, L_50, L_51, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = V_11;
		X448Field_Sub_mBFA894A2EA11C691607571A006356D308952945E(L_52, L_53, L_54, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_55 = ___2_r;
		NullCheck(L_55);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = L_55->___x;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_57 = ___2_r;
		NullCheck(L_57);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = L_57->___y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = V_4;
		X448Field_Add_mCFABA589F46545F656A1CCEAD2669A8BBC9C452A(L_56, L_58, L_59, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = V_7;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_60, L_61, L_62, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = V_8;
		X448Field_Add_mCFABA589F46545F656A1CCEAD2669A8BBC9C452A(L_63, L_64, L_65, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = V_9;
		X448Field_Sub_mBFA894A2EA11C691607571A006356D308952945E(L_66, L_67, L_68, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = V_8;
		X448Field_Carry_m5ABB04A0158406E10A444D4B875C7D1E769A5461(L_69, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = V_7;
		X448Field_Sub_mBFA894A2EA11C691607571A006356D308952945E(L_70, L_71, L_72, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = V_7;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_73, L_74, L_75, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_77 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_78 = V_4;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_76, L_77, L_78, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = V_7;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_81 = ___2_r;
		NullCheck(L_81);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = L_81->___x;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_79, L_80, L_82, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = V_6;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_85 = ___2_r;
		NullCheck(L_85);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_86 = L_85->___y;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_83, L_84, L_86, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = V_6;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_89 = ___2_r;
		NullCheck(L_89);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = L_89->___z;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_87, L_88, L_90, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointAddPrecomp_m88F5C042045BE8BB4BAD911D910CBE8807727F8B (PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* ___0_p, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___1_r, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_6 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2;
		L_2 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_2 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3;
		L_3 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_3 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4;
		L_4 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_4 = L_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5;
		L_5 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_5 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6;
		L_6 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_6 = L_6;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_7 = ___1_r;
		NullCheck(L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = L_7->___z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_0;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_8, L_9, NULL);
		PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* L_10 = ___0_p;
		NullCheck(L_10);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = L_10->___x;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_12 = ___1_r;
		NullCheck(L_12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = L_12->___x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_1;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_11, L_13, L_14, NULL);
		PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* L_15 = ___0_p;
		NullCheck(L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = L_15->___y;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_17 = ___1_r;
		NullCheck(L_17);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = L_17->___y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_2;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_16, L_18, L_19, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_3;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_20, L_21, L_22, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_3;
		X448Field_Mul_mC51EE78E9A520350193A2014FCC0403E597F2FE5(L_23, ((int32_t)39081), L_24, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_4;
		X448Field_Add_mCFABA589F46545F656A1CCEAD2669A8BBC9C452A(L_25, L_26, L_27, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_5;
		X448Field_Sub_mBFA894A2EA11C691607571A006356D308952945E(L_28, L_29, L_30, NULL);
		PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* L_31 = ___0_p;
		NullCheck(L_31);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = L_31->___x;
		PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* L_33 = ___0_p;
		NullCheck(L_33);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = L_33->___y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = V_0;
		X448Field_Add_mCFABA589F46545F656A1CCEAD2669A8BBC9C452A(L_32, L_34, L_35, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_36 = ___1_r;
		NullCheck(L_36);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = L_36->___x;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_38 = ___1_r;
		NullCheck(L_38);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = L_38->___y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = V_3;
		X448Field_Add_mCFABA589F46545F656A1CCEAD2669A8BBC9C452A(L_37, L_39, L_40, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = V_6;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_41, L_42, L_43, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = V_0;
		X448Field_Add_mCFABA589F46545F656A1CCEAD2669A8BBC9C452A(L_44, L_45, L_46, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = V_3;
		X448Field_Sub_mBFA894A2EA11C691607571A006356D308952945E(L_47, L_48, L_49, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = V_0;
		X448Field_Carry_m5ABB04A0158406E10A444D4B875C7D1E769A5461(L_50, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = V_6;
		X448Field_Sub_mBFA894A2EA11C691607571A006356D308952945E(L_51, L_52, L_53, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = V_6;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_55 = ___1_r;
		NullCheck(L_55);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = L_55->___z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = V_6;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_54, L_56, L_57, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = V_3;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_59 = ___1_r;
		NullCheck(L_59);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = L_59->___z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = V_3;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_58, L_60, L_61, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = V_6;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_64 = ___1_r;
		NullCheck(L_64);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = L_64->___x;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_62, L_63, L_65, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = V_5;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_68 = ___1_r;
		NullCheck(L_68);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = L_68->___y;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_66, L_67, L_69, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = V_5;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_72 = ___1_r;
		NullCheck(L_72);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_73 = L_72->___z;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_70, L_71, L_73, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* Ed448_PointCopy_m1920398F7AFB9D1A01A1835018D1D03C07179EFF (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* V_0 = NULL;
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_0 = (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)il2cpp_codegen_object_new(PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
		PointExt__ctor_m97C9A86D0FB34EDB66C2E5A4EBFC4A99C4D14EA7(L_0, NULL);
		V_0 = L_0;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_1 = ___0_p;
		NullCheck(L_1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = L_1->___x;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_3 = V_0;
		NullCheck(L_3);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = L_3->___x;
		X448Field_Copy_m68F680AAB9014E095E873FE939DE740F5C9484CB(L_2, 0, L_4, 0, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_5 = ___0_p;
		NullCheck(L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = L_5->___y;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_7 = V_0;
		NullCheck(L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = L_7->___y;
		X448Field_Copy_m68F680AAB9014E095E873FE939DE740F5C9484CB(L_6, 0, L_8, 0, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_9 = ___0_p;
		NullCheck(L_9);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9->___z;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_11 = V_0;
		NullCheck(L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = L_11->___z;
		X448Field_Copy_m68F680AAB9014E095E873FE939DE740F5C9484CB(L_10, 0, L_12, 0, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_13 = V_0;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointDouble_m49FD2EC3B20EEBA39C5BB1F83A0E1395423D5D3A (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___0_r, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2;
		L_2 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_2 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3;
		L_3 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_3 = L_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4;
		L_4 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_4 = L_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5;
		L_5 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_5 = L_5;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_6 = ___0_r;
		NullCheck(L_6);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6->___x;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_8 = ___0_r;
		NullCheck(L_8);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = L_8->___y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_0;
		X448Field_Add_mCFABA589F46545F656A1CCEAD2669A8BBC9C452A(L_7, L_9, L_10, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_11, L_12, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_13 = ___0_r;
		NullCheck(L_13);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = L_13->___x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_1;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_14, L_15, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_16 = ___0_r;
		NullCheck(L_16);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = L_16->___y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_2;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_17, L_18, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_3;
		X448Field_Add_mCFABA589F46545F656A1CCEAD2669A8BBC9C452A(L_19, L_20, L_21, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_3;
		X448Field_Carry_m5ABB04A0158406E10A444D4B875C7D1E769A5461(L_22, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_23 = ___0_r;
		NullCheck(L_23);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = L_23->___z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_4;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_24, L_25, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = V_4;
		X448Field_Add_mCFABA589F46545F656A1CCEAD2669A8BBC9C452A(L_26, L_27, L_28, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_4;
		X448Field_Carry_m5ABB04A0158406E10A444D4B875C7D1E769A5461(L_29, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_5;
		X448Field_Sub_mBFA894A2EA11C691607571A006356D308952945E(L_30, L_31, L_32, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = V_0;
		X448Field_Sub_mBFA894A2EA11C691607571A006356D308952945E(L_33, L_34, L_35, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = V_1;
		X448Field_Sub_mBFA894A2EA11C691607571A006356D308952945E(L_36, L_37, L_38, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = V_5;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_41 = ___0_r;
		NullCheck(L_41);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = L_41->___x;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_39, L_40, L_42, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_1;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_45 = ___0_r;
		NullCheck(L_45);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = L_45->___y;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_43, L_44, L_46, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = V_5;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_49 = ___0_r;
		NullCheck(L_49);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = L_49->___z;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_47, L_48, L_50, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointExtendXY_m662064FF7F95758494BCB9C0D3E322C61A60675C (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___0_p, const RuntimeMethod* method) 
{
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_0 = ___0_p;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->___z;
		X448Field_One_m39BF2AA4124E41CD828C54B977F7956073C7616C(L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointLookup_m6636543B36FB21204D5B32F62118CFD05A4C474C (int32_t ___0_block, int32_t ___1_index, PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* ___2_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_block;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)16))), 2)), ((int32_t)16)));
		V_1 = 0;
		goto IL_0049;
	}

IL_000e:
	{
		int32_t L_1 = V_1;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)(L_1^L_2)), 1))>>((int32_t)31)));
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBase;
		int32_t L_5 = V_0;
		PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* L_6 = ___2_p;
		NullCheck(L_6);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = L_6->___x;
		X448Field_CMov_mACE58C351958EDC9BCD1165A6EB550D180A0F858(L_3, L_4, L_5, L_7, 0, NULL);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)16)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBase;
		int32_t L_10 = V_0;
		PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* L_11 = ___2_p;
		NullCheck(L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = L_11->___y;
		X448Field_CMov_mACE58C351958EDC9BCD1165A6EB550D180A0F858(L_3, L_9, L_10, L_12, 0, NULL);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)16)));
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0049:
	{
		int32_t L_15 = V_1;
		if ((((int32_t)L_15) < ((int32_t)((int32_t)16))))
		{
			goto IL_000e;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* Ed448_PointPrecompVar_m2A60BD4319E8B97F316A4FF42AF1C06201156248 (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___0_p, int32_t ___1_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* V_0 = NULL;
	PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* V_1 = NULL;
	int32_t V_2 = 0;
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_0 = ___0_p;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_1;
		L_1 = Ed448_PointCopy_m1920398F7AFB9D1A01A1835018D1D03C07179EFF(L_0, NULL);
		V_0 = L_1;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_2 = V_0;
		Ed448_PointDouble_m49FD2EC3B20EEBA39C5BB1F83A0E1395423D5D3A(L_2, NULL);
		int32_t L_3 = ___1_count;
		PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_4 = (PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7*)(PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7*)SZArrayNew(PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_5 = V_1;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_6 = ___0_p;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_7;
		L_7 = Ed448_PointCopy_m1920398F7AFB9D1A01A1835018D1D03C07179EFF(L_6, NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)L_7);
		V_2 = 1;
		goto IL_003c;
	}

IL_0021:
	{
		PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_8 = V_1;
		int32_t L_9 = V_2;
		PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_14;
		L_14 = Ed448_PointCopy_m1920398F7AFB9D1A01A1835018D1D03C07179EFF(L_13, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_14);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)L_14);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_15 = V_0;
		PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		Ed448_PointAddVar_m43C18B554A4E39E9F9CF71C9634B60C5DB7B7604((bool)0, L_15, L_19, NULL);
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_003c:
	{
		int32_t L_21 = V_2;
		int32_t L_22 = ___1_count;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0021;
		}
	}
	{
		PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_23 = V_1;
		return L_23;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PointSetNeutral_m29E3031C9BF46C5C92ECE8F4352BB29C22BD52E5 (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___0_p, const RuntimeMethod* method) 
{
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_0 = ___0_p;
		NullCheck(L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = L_0->___x;
		X448Field_Zero_m05486C7731A9B64673D03E7C52177B5BCF68A0D6(L_1, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_2 = ___0_p;
		NullCheck(L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = L_2->___y;
		X448Field_One_m39BF2AA4124E41CD828C54B977F7956073C7616C(L_3, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_4 = ___0_p;
		NullCheck(L_4);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4->___z;
		X448Field_One_m39BF2AA4124E41CD828C54B977F7956073C7616C(L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Precompute_m8A35B0BAD0452897FD7AC0459ED016C3328BF230 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* V_5 = NULL;
	PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* V_6 = NULL;
	PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* V_15 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompLock;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01e0:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_01e9;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_01e9:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBase;
				if (!L_4)
				{
					goto IL_001c_1;
				}
			}
			{
				goto IL_01ea;
			}

IL_001c_1:
			{
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_5 = (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)il2cpp_codegen_object_new(PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
				PointExt__ctor_m97C9A86D0FB34EDB66C2E5A4EBFC4A99C4D14EA7(L_5, NULL);
				V_2 = L_5;
				il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___B_x;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_7 = V_2;
				NullCheck(L_7);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = L_7->___x;
				X448Field_Copy_m68F680AAB9014E095E873FE939DE740F5C9484CB(L_6, 0, L_8, 0, NULL);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___B_y;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_10 = V_2;
				NullCheck(L_10);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = L_10->___y;
				X448Field_Copy_m68F680AAB9014E095E873FE939DE740F5C9484CB(L_9, 0, L_11, 0, NULL);
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_12 = V_2;
				Ed448_PointExtendXY_m662064FF7F95758494BCB9C0D3E322C61A60675C(L_12, NULL);
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_13 = V_2;
				PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_14;
				L_14 = Ed448_PointPrecompVar_m2A60BD4319E8B97F316A4FF42AF1C06201156248(L_13, ((int32_t)32), NULL);
				((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBaseTable = L_14;
				Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBaseTable), (void*)L_14);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)2560));
				((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBase = L_15;
				Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBase), (void*)L_15);
				V_3 = 0;
				V_4 = 0;
				goto IL_01d6_1;
			}

IL_0072_1:
			{
				PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_16 = (PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7*)(PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7*)SZArrayNew(PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7_il2cpp_TypeInfo_var, (uint32_t)5);
				V_5 = L_16;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_17 = (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)il2cpp_codegen_object_new(PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
				PointExt__ctor_m97C9A86D0FB34EDB66C2E5A4EBFC4A99C4D14EA7(L_17, NULL);
				V_6 = L_17;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_18 = V_6;
				il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
				Ed448_PointSetNeutral_m29E3031C9BF46C5C92ECE8F4352BB29C22BD52E5(L_18, NULL);
				V_9 = 0;
				goto IL_00cc_1;
			}

IL_008d_1:
			{
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_19 = V_2;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_20 = V_6;
				il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
				Ed448_PointAddVar_m43C18B554A4E39E9F9CF71C9634B60C5DB7B7604((bool)1, L_19, L_20, NULL);
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_21 = V_2;
				Ed448_PointDouble_m49FD2EC3B20EEBA39C5BB1F83A0E1395423D5D3A(L_21, NULL);
				PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_22 = V_5;
				int32_t L_23 = V_9;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_24 = V_2;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_25;
				L_25 = Ed448_PointCopy_m1920398F7AFB9D1A01A1835018D1D03C07179EFF(L_24, NULL);
				NullCheck(L_22);
				ArrayElementTypeCheck (L_22, L_25);
				(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)L_25);
				int32_t L_26 = V_4;
				int32_t L_27 = V_9;
				if ((((int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27))) == ((int32_t)8)))
				{
					goto IL_00c6_1;
				}
			}
			{
				V_10 = 1;
				goto IL_00c0_1;
			}

IL_00b4_1:
			{
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_28 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
				Ed448_PointDouble_m49FD2EC3B20EEBA39C5BB1F83A0E1395423D5D3A(L_28, NULL);
				int32_t L_29 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_29, 1));
			}

IL_00c0_1:
			{
				int32_t L_30 = V_10;
				if ((((int32_t)L_30) < ((int32_t)((int32_t)18))))
				{
					goto IL_00b4_1;
				}
			}

IL_00c6_1:
			{
				int32_t L_31 = V_9;
				V_9 = ((int32_t)il2cpp_codegen_add(L_31, 1));
			}

IL_00cc_1:
			{
				int32_t L_32 = V_9;
				if ((((int32_t)L_32) < ((int32_t)5)))
				{
					goto IL_008d_1;
				}
			}
			{
				PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_33 = (PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7*)(PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7*)SZArrayNew(PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
				V_7 = L_33;
				V_8 = 0;
				PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_34 = V_7;
				int32_t L_35 = V_8;
				int32_t L_36 = L_35;
				V_8 = ((int32_t)il2cpp_codegen_add(L_36, 1));
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_37 = V_6;
				NullCheck(L_34);
				ArrayElementTypeCheck (L_34, L_37);
				(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)L_37);
				V_11 = 0;
				goto IL_0136_1;
			}

IL_00ee_1:
			{
				int32_t L_38 = V_11;
				V_12 = ((int32_t)(1<<((int32_t)(L_38&((int32_t)31)))));
				V_13 = 0;
				goto IL_012a_1;
			}

IL_00fc_1:
			{
				PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_39 = V_7;
				int32_t L_40 = V_8;
				PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_41 = V_7;
				int32_t L_42 = V_8;
				int32_t L_43 = V_12;
				NullCheck(L_41);
				int32_t L_44 = ((int32_t)il2cpp_codegen_subtract(L_42, L_43));
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_45 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
				il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_46;
				L_46 = Ed448_PointCopy_m1920398F7AFB9D1A01A1835018D1D03C07179EFF(L_45, NULL);
				NullCheck(L_39);
				ArrayElementTypeCheck (L_39, L_46);
				(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)L_46);
				PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_47 = V_5;
				int32_t L_48 = V_11;
				NullCheck(L_47);
				int32_t L_49 = L_48;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
				PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_51 = V_7;
				int32_t L_52 = V_8;
				NullCheck(L_51);
				int32_t L_53 = L_52;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
				Ed448_PointAddVar_m43C18B554A4E39E9F9CF71C9634B60C5DB7B7604((bool)0, L_50, L_54, NULL);
				int32_t L_55 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_55, 1));
				int32_t L_56 = V_8;
				V_8 = ((int32_t)il2cpp_codegen_add(L_56, 1));
			}

IL_012a_1:
			{
				int32_t L_57 = V_13;
				int32_t L_58 = V_12;
				if ((((int32_t)L_57) < ((int32_t)L_58)))
				{
					goto IL_00fc_1;
				}
			}
			{
				int32_t L_59 = V_11;
				V_11 = ((int32_t)il2cpp_codegen_add(L_59, 1));
			}

IL_0136_1:
			{
				int32_t L_60 = V_11;
				if ((((int32_t)L_60) < ((int32_t)4)))
				{
					goto IL_00ee_1;
				}
			}
			{
				V_14 = 0;
				goto IL_01c7_1;
			}

IL_0143_1:
			{
				PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_61 = V_7;
				int32_t L_62 = V_14;
				NullCheck(L_61);
				int32_t L_63 = L_62;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
				V_15 = L_64;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_65 = V_15;
				NullCheck(L_65);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = L_65->___z;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_67 = V_15;
				NullCheck(L_67);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = L_67->___z;
				X448Field_Inv_mFB31775FD55C6B3D7374C0523C25D0D0B570783F(L_66, L_68, NULL);
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_69 = V_15;
				NullCheck(L_69);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = L_69->___x;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_71 = V_15;
				NullCheck(L_71);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = L_71->___z;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_73 = V_15;
				NullCheck(L_73);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_74 = L_73->___x;
				X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_70, L_72, L_74, NULL);
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_75 = V_15;
				NullCheck(L_75);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_76 = L_75->___y;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_77 = V_15;
				NullCheck(L_77);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_78 = L_77->___z;
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_79 = V_15;
				NullCheck(L_79);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_80 = L_79->___y;
				X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_76, L_78, L_80, NULL);
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_81 = V_15;
				NullCheck(L_81);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = L_81->___x;
				il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_83 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBase;
				int32_t L_84 = V_3;
				X448Field_Copy_m68F680AAB9014E095E873FE939DE740F5C9484CB(L_82, 0, L_83, L_84, NULL);
				int32_t L_85 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_85, ((int32_t)16)));
				PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_86 = V_15;
				NullCheck(L_86);
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = L_86->___y;
				UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_88 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBase;
				int32_t L_89 = V_3;
				X448Field_Copy_m68F680AAB9014E095E873FE939DE740F5C9484CB(L_87, 0, L_88, L_89, NULL);
				int32_t L_90 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_90, ((int32_t)16)));
				int32_t L_91 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add(L_91, 1));
			}

IL_01c7_1:
			{
				int32_t L_92 = V_14;
				if ((((int32_t)L_92) < ((int32_t)((int32_t)16))))
				{
					goto IL_0143_1;
				}
			}
			{
				int32_t L_93 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_93, 1));
			}

IL_01d6_1:
			{
				int32_t L_94 = V_4;
				if ((((int32_t)L_94) < ((int32_t)5)))
				{
					goto IL_0072_1;
				}
			}
			{
				goto IL_01ea;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01ea:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_PruneScalar_m0FBADCA509B824C09321682080565AF7C7BB3C25 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_n, int32_t ___1_nOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_r, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_n;
		int32_t L_1 = ___1_nOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_r;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, L_1, (RuntimeArray*)L_2, 0, ((int32_t)56), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___2_r;
		NullCheck(L_3);
		uint8_t* L_4 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_5 = *((uint8_t*)L_4);
		*((int8_t*)L_4) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_5&((int32_t)252))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___2_r;
		NullCheck(L_6);
		uint8_t* L_7 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)55))));
		int32_t L_8 = *((uint8_t*)L_7);
		*((int8_t*)L_7) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_8|((int32_t)128))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___2_r;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)56)), (uint8_t)0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Ed448_ReduceScalar_m54319A41543916403172AE7F20FEC21DD5AAE4EA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
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
	uint64_t V_20 = 0;
	uint64_t V_21 = 0;
	uint64_t V_22 = 0;
	uint64_t V_23 = 0;
	uint64_t V_24 = 0;
	uint64_t V_25 = 0;
	uint64_t V_26 = 0;
	uint64_t V_27 = 0;
	uint64_t V_28 = 0;
	uint64_t V_29 = 0;
	uint64_t V_30 = 0;
	uint64_t V_31 = 0;
	uint64_t V_32 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_33 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_n;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = Ed448_Decode32_m159290D4C5D7A722FF1C898DDB419C8C1F591635(L_0, 0, NULL);
		V_0 = ((int64_t)(uint64_t)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_n;
		uint32_t L_3;
		L_3 = Ed448_Decode24_mD5CE10B8704B6509EC76248CB962A87C758B18BC(L_2, 4, NULL);
		V_1 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_3<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_n;
		uint32_t L_5;
		L_5 = Ed448_Decode32_m159290D4C5D7A722FF1C898DDB419C8C1F591635(L_4, 7, NULL);
		V_2 = ((int64_t)(uint64_t)L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_n;
		uint32_t L_7;
		L_7 = Ed448_Decode24_mD5CE10B8704B6509EC76248CB962A87C758B18BC(L_6, ((int32_t)11), NULL);
		V_3 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_7<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_n;
		uint32_t L_9;
		L_9 = Ed448_Decode32_m159290D4C5D7A722FF1C898DDB419C8C1F591635(L_8, ((int32_t)14), NULL);
		V_4 = ((int64_t)(uint64_t)L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_n;
		uint32_t L_11;
		L_11 = Ed448_Decode24_mD5CE10B8704B6509EC76248CB962A87C758B18BC(L_10, ((int32_t)18), NULL);
		V_5 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_11<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_n;
		uint32_t L_13;
		L_13 = Ed448_Decode32_m159290D4C5D7A722FF1C898DDB419C8C1F591635(L_12, ((int32_t)21), NULL);
		V_6 = ((int64_t)(uint64_t)L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_n;
		uint32_t L_15;
		L_15 = Ed448_Decode24_mD5CE10B8704B6509EC76248CB962A87C758B18BC(L_14, ((int32_t)25), NULL);
		V_7 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_15<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___0_n;
		uint32_t L_17;
		L_17 = Ed448_Decode32_m159290D4C5D7A722FF1C898DDB419C8C1F591635(L_16, ((int32_t)28), NULL);
		V_8 = ((int64_t)(uint64_t)L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___0_n;
		uint32_t L_19;
		L_19 = Ed448_Decode24_mD5CE10B8704B6509EC76248CB962A87C758B18BC(L_18, ((int32_t)32), NULL);
		V_9 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_19<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___0_n;
		uint32_t L_21;
		L_21 = Ed448_Decode32_m159290D4C5D7A722FF1C898DDB419C8C1F591635(L_20, ((int32_t)35), NULL);
		V_10 = ((int64_t)(uint64_t)L_21);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___0_n;
		uint32_t L_23;
		L_23 = Ed448_Decode24_mD5CE10B8704B6509EC76248CB962A87C758B18BC(L_22, ((int32_t)39), NULL);
		V_11 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_23<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ___0_n;
		uint32_t L_25;
		L_25 = Ed448_Decode32_m159290D4C5D7A722FF1C898DDB419C8C1F591635(L_24, ((int32_t)42), NULL);
		V_12 = ((int64_t)(uint64_t)L_25);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = ___0_n;
		uint32_t L_27;
		L_27 = Ed448_Decode24_mD5CE10B8704B6509EC76248CB962A87C758B18BC(L_26, ((int32_t)46), NULL);
		V_13 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_27<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = ___0_n;
		uint32_t L_29;
		L_29 = Ed448_Decode32_m159290D4C5D7A722FF1C898DDB419C8C1F591635(L_28, ((int32_t)49), NULL);
		V_14 = ((int64_t)(uint64_t)L_29);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___0_n;
		uint32_t L_31;
		L_31 = Ed448_Decode24_mD5CE10B8704B6509EC76248CB962A87C758B18BC(L_30, ((int32_t)53), NULL);
		V_15 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_31<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ___0_n;
		uint32_t L_33;
		L_33 = Ed448_Decode32_m159290D4C5D7A722FF1C898DDB419C8C1F591635(L_32, ((int32_t)56), NULL);
		V_16 = ((int64_t)(uint64_t)L_33);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = ___0_n;
		uint32_t L_35;
		L_35 = Ed448_Decode24_mD5CE10B8704B6509EC76248CB962A87C758B18BC(L_34, ((int32_t)60), NULL);
		V_17 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_35<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = ___0_n;
		uint32_t L_37;
		L_37 = Ed448_Decode32_m159290D4C5D7A722FF1C898DDB419C8C1F591635(L_36, ((int32_t)63), NULL);
		V_18 = ((int64_t)(uint64_t)L_37);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = ___0_n;
		uint32_t L_39;
		L_39 = Ed448_Decode24_mD5CE10B8704B6509EC76248CB962A87C758B18BC(L_38, ((int32_t)67), NULL);
		V_19 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_39<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = ___0_n;
		uint32_t L_41;
		L_41 = Ed448_Decode32_m159290D4C5D7A722FF1C898DDB419C8C1F591635(L_40, ((int32_t)70), NULL);
		V_20 = ((int64_t)(uint64_t)L_41);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = ___0_n;
		uint32_t L_43;
		L_43 = Ed448_Decode24_mD5CE10B8704B6509EC76248CB962A87C758B18BC(L_42, ((int32_t)74), NULL);
		V_21 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_43<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_44 = ___0_n;
		uint32_t L_45;
		L_45 = Ed448_Decode32_m159290D4C5D7A722FF1C898DDB419C8C1F591635(L_44, ((int32_t)77), NULL);
		V_22 = ((int64_t)(uint64_t)L_45);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46 = ___0_n;
		uint32_t L_47;
		L_47 = Ed448_Decode24_mD5CE10B8704B6509EC76248CB962A87C758B18BC(L_46, ((int32_t)81), NULL);
		V_23 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_47<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = ___0_n;
		uint32_t L_49;
		L_49 = Ed448_Decode32_m159290D4C5D7A722FF1C898DDB419C8C1F591635(L_48, ((int32_t)84), NULL);
		V_24 = ((int64_t)(uint64_t)L_49);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50 = ___0_n;
		uint32_t L_51;
		L_51 = Ed448_Decode24_mD5CE10B8704B6509EC76248CB962A87C758B18BC(L_50, ((int32_t)88), NULL);
		V_25 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_51<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52 = ___0_n;
		uint32_t L_53;
		L_53 = Ed448_Decode32_m159290D4C5D7A722FF1C898DDB419C8C1F591635(L_52, ((int32_t)91), NULL);
		V_26 = ((int64_t)(uint64_t)L_53);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_54 = ___0_n;
		uint32_t L_55;
		L_55 = Ed448_Decode24_mD5CE10B8704B6509EC76248CB962A87C758B18BC(L_54, ((int32_t)95), NULL);
		V_27 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_55<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_56 = ___0_n;
		uint32_t L_57;
		L_57 = Ed448_Decode32_m159290D4C5D7A722FF1C898DDB419C8C1F591635(L_56, ((int32_t)98), NULL);
		V_28 = ((int64_t)(uint64_t)L_57);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_58 = ___0_n;
		uint32_t L_59;
		L_59 = Ed448_Decode24_mD5CE10B8704B6509EC76248CB962A87C758B18BC(L_58, ((int32_t)102), NULL);
		V_29 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_59<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = ___0_n;
		uint32_t L_61;
		L_61 = Ed448_Decode32_m159290D4C5D7A722FF1C898DDB419C8C1F591635(L_60, ((int32_t)105), NULL);
		V_30 = ((int64_t)(uint64_t)L_61);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_62 = ___0_n;
		uint32_t L_63;
		L_63 = Ed448_Decode24_mD5CE10B8704B6509EC76248CB962A87C758B18BC(L_62, ((int32_t)109), NULL);
		V_31 = ((int64_t)(uint64_t)((uint32_t)((int32_t)((int32_t)L_63<<4))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = ___0_n;
		uint32_t L_65;
		L_65 = Ed448_Decode16_m55E2D057A0C8D3C42857F72A1FBD2D160B238DDA(L_64, ((int32_t)112), NULL);
		V_32 = ((int64_t)(uint64_t)L_65);
		uint64_t L_66 = V_16;
		uint64_t L_67 = V_32;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_66, ((int64_t)il2cpp_codegen_multiply((int64_t)L_67, ((int64_t)((int32_t)43969588))))));
		uint64_t L_68 = V_17;
		uint64_t L_69 = V_32;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_68, ((int64_t)il2cpp_codegen_multiply((int64_t)L_69, ((int64_t)((int32_t)30366549))))));
		uint64_t L_70 = V_18;
		uint64_t L_71 = V_32;
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_70, ((int64_t)il2cpp_codegen_multiply((int64_t)L_71, ((int64_t)((int32_t)163752818))))));
		uint64_t L_72 = V_19;
		uint64_t L_73 = V_32;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_72, ((int64_t)il2cpp_codegen_multiply((int64_t)L_73, ((int64_t)((int32_t)258169998))))));
		uint64_t L_74 = V_20;
		uint64_t L_75 = V_32;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_74, ((int64_t)il2cpp_codegen_multiply((int64_t)L_75, ((int64_t)((int32_t)96434764))))));
		uint64_t L_76 = V_21;
		uint64_t L_77 = V_32;
		V_21 = ((int64_t)il2cpp_codegen_add((int64_t)L_76, ((int64_t)il2cpp_codegen_multiply((int64_t)L_77, ((int64_t)((int32_t)227822194))))));
		uint64_t L_78 = V_22;
		uint64_t L_79 = V_32;
		V_22 = ((int64_t)il2cpp_codegen_add((int64_t)L_78, ((int64_t)il2cpp_codegen_multiply((int64_t)L_79, ((int64_t)((int32_t)149865618))))));
		uint64_t L_80 = V_23;
		uint64_t L_81 = V_32;
		V_23 = ((int64_t)il2cpp_codegen_add((int64_t)L_80, ((int64_t)il2cpp_codegen_multiply((int64_t)L_81, ((int64_t)((int32_t)550336261))))));
		uint64_t L_82 = V_31;
		uint64_t L_83 = V_30;
		V_31 = ((int64_t)il2cpp_codegen_add((int64_t)L_82, ((int64_t)((uint64_t)L_83>>((int32_t)28)))));
		uint64_t L_84 = V_30;
		V_30 = ((int64_t)((int64_t)L_84&((int64_t)((int32_t)268435455))));
		uint64_t L_85 = V_15;
		uint64_t L_86 = V_31;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_85, ((int64_t)il2cpp_codegen_multiply((int64_t)L_86, ((int64_t)((int32_t)43969588))))));
		uint64_t L_87 = V_16;
		uint64_t L_88 = V_31;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_87, ((int64_t)il2cpp_codegen_multiply((int64_t)L_88, ((int64_t)((int32_t)30366549))))));
		uint64_t L_89 = V_17;
		uint64_t L_90 = V_31;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_89, ((int64_t)il2cpp_codegen_multiply((int64_t)L_90, ((int64_t)((int32_t)163752818))))));
		uint64_t L_91 = V_18;
		uint64_t L_92 = V_31;
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_91, ((int64_t)il2cpp_codegen_multiply((int64_t)L_92, ((int64_t)((int32_t)258169998))))));
		uint64_t L_93 = V_19;
		uint64_t L_94 = V_31;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_93, ((int64_t)il2cpp_codegen_multiply((int64_t)L_94, ((int64_t)((int32_t)96434764))))));
		uint64_t L_95 = V_20;
		uint64_t L_96 = V_31;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_95, ((int64_t)il2cpp_codegen_multiply((int64_t)L_96, ((int64_t)((int32_t)227822194))))));
		uint64_t L_97 = V_21;
		uint64_t L_98 = V_31;
		V_21 = ((int64_t)il2cpp_codegen_add((int64_t)L_97, ((int64_t)il2cpp_codegen_multiply((int64_t)L_98, ((int64_t)((int32_t)149865618))))));
		uint64_t L_99 = V_22;
		uint64_t L_100 = V_31;
		V_22 = ((int64_t)il2cpp_codegen_add((int64_t)L_99, ((int64_t)il2cpp_codegen_multiply((int64_t)L_100, ((int64_t)((int32_t)550336261))))));
		uint64_t L_101 = V_14;
		uint64_t L_102 = V_30;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_101, ((int64_t)il2cpp_codegen_multiply((int64_t)L_102, ((int64_t)((int32_t)43969588))))));
		uint64_t L_103 = V_15;
		uint64_t L_104 = V_30;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_103, ((int64_t)il2cpp_codegen_multiply((int64_t)L_104, ((int64_t)((int32_t)30366549))))));
		uint64_t L_105 = V_16;
		uint64_t L_106 = V_30;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_105, ((int64_t)il2cpp_codegen_multiply((int64_t)L_106, ((int64_t)((int32_t)163752818))))));
		uint64_t L_107 = V_17;
		uint64_t L_108 = V_30;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_107, ((int64_t)il2cpp_codegen_multiply((int64_t)L_108, ((int64_t)((int32_t)258169998))))));
		uint64_t L_109 = V_18;
		uint64_t L_110 = V_30;
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_109, ((int64_t)il2cpp_codegen_multiply((int64_t)L_110, ((int64_t)((int32_t)96434764))))));
		uint64_t L_111 = V_19;
		uint64_t L_112 = V_30;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_111, ((int64_t)il2cpp_codegen_multiply((int64_t)L_112, ((int64_t)((int32_t)227822194))))));
		uint64_t L_113 = V_20;
		uint64_t L_114 = V_30;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_113, ((int64_t)il2cpp_codegen_multiply((int64_t)L_114, ((int64_t)((int32_t)149865618))))));
		uint64_t L_115 = V_21;
		uint64_t L_116 = V_30;
		V_21 = ((int64_t)il2cpp_codegen_add((int64_t)L_115, ((int64_t)il2cpp_codegen_multiply((int64_t)L_116, ((int64_t)((int32_t)550336261))))));
		uint64_t L_117 = V_29;
		uint64_t L_118 = V_28;
		V_29 = ((int64_t)il2cpp_codegen_add((int64_t)L_117, ((int64_t)((uint64_t)L_118>>((int32_t)28)))));
		uint64_t L_119 = V_28;
		V_28 = ((int64_t)((int64_t)L_119&((int64_t)((int32_t)268435455))));
		uint64_t L_120 = V_13;
		uint64_t L_121 = V_29;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_120, ((int64_t)il2cpp_codegen_multiply((int64_t)L_121, ((int64_t)((int32_t)43969588))))));
		uint64_t L_122 = V_14;
		uint64_t L_123 = V_29;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_122, ((int64_t)il2cpp_codegen_multiply((int64_t)L_123, ((int64_t)((int32_t)30366549))))));
		uint64_t L_124 = V_15;
		uint64_t L_125 = V_29;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_124, ((int64_t)il2cpp_codegen_multiply((int64_t)L_125, ((int64_t)((int32_t)163752818))))));
		uint64_t L_126 = V_16;
		uint64_t L_127 = V_29;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_126, ((int64_t)il2cpp_codegen_multiply((int64_t)L_127, ((int64_t)((int32_t)258169998))))));
		uint64_t L_128 = V_17;
		uint64_t L_129 = V_29;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_128, ((int64_t)il2cpp_codegen_multiply((int64_t)L_129, ((int64_t)((int32_t)96434764))))));
		uint64_t L_130 = V_18;
		uint64_t L_131 = V_29;
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_130, ((int64_t)il2cpp_codegen_multiply((int64_t)L_131, ((int64_t)((int32_t)227822194))))));
		uint64_t L_132 = V_19;
		uint64_t L_133 = V_29;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_132, ((int64_t)il2cpp_codegen_multiply((int64_t)L_133, ((int64_t)((int32_t)149865618))))));
		uint64_t L_134 = V_20;
		uint64_t L_135 = V_29;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_134, ((int64_t)il2cpp_codegen_multiply((int64_t)L_135, ((int64_t)((int32_t)550336261))))));
		uint64_t L_136 = V_12;
		uint64_t L_137 = V_28;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_136, ((int64_t)il2cpp_codegen_multiply((int64_t)L_137, ((int64_t)((int32_t)43969588))))));
		uint64_t L_138 = V_13;
		uint64_t L_139 = V_28;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_138, ((int64_t)il2cpp_codegen_multiply((int64_t)L_139, ((int64_t)((int32_t)30366549))))));
		uint64_t L_140 = V_14;
		uint64_t L_141 = V_28;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_140, ((int64_t)il2cpp_codegen_multiply((int64_t)L_141, ((int64_t)((int32_t)163752818))))));
		uint64_t L_142 = V_15;
		uint64_t L_143 = V_28;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_142, ((int64_t)il2cpp_codegen_multiply((int64_t)L_143, ((int64_t)((int32_t)258169998))))));
		uint64_t L_144 = V_16;
		uint64_t L_145 = V_28;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_144, ((int64_t)il2cpp_codegen_multiply((int64_t)L_145, ((int64_t)((int32_t)96434764))))));
		uint64_t L_146 = V_17;
		uint64_t L_147 = V_28;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_146, ((int64_t)il2cpp_codegen_multiply((int64_t)L_147, ((int64_t)((int32_t)227822194))))));
		uint64_t L_148 = V_18;
		uint64_t L_149 = V_28;
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_148, ((int64_t)il2cpp_codegen_multiply((int64_t)L_149, ((int64_t)((int32_t)149865618))))));
		uint64_t L_150 = V_19;
		uint64_t L_151 = V_28;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_150, ((int64_t)il2cpp_codegen_multiply((int64_t)L_151, ((int64_t)((int32_t)550336261))))));
		uint64_t L_152 = V_27;
		uint64_t L_153 = V_26;
		V_27 = ((int64_t)il2cpp_codegen_add((int64_t)L_152, ((int64_t)((uint64_t)L_153>>((int32_t)28)))));
		uint64_t L_154 = V_26;
		V_26 = ((int64_t)((int64_t)L_154&((int64_t)((int32_t)268435455))));
		uint64_t L_155 = V_11;
		uint64_t L_156 = V_27;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_155, ((int64_t)il2cpp_codegen_multiply((int64_t)L_156, ((int64_t)((int32_t)43969588))))));
		uint64_t L_157 = V_12;
		uint64_t L_158 = V_27;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_157, ((int64_t)il2cpp_codegen_multiply((int64_t)L_158, ((int64_t)((int32_t)30366549))))));
		uint64_t L_159 = V_13;
		uint64_t L_160 = V_27;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_159, ((int64_t)il2cpp_codegen_multiply((int64_t)L_160, ((int64_t)((int32_t)163752818))))));
		uint64_t L_161 = V_14;
		uint64_t L_162 = V_27;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_161, ((int64_t)il2cpp_codegen_multiply((int64_t)L_162, ((int64_t)((int32_t)258169998))))));
		uint64_t L_163 = V_15;
		uint64_t L_164 = V_27;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_163, ((int64_t)il2cpp_codegen_multiply((int64_t)L_164, ((int64_t)((int32_t)96434764))))));
		uint64_t L_165 = V_16;
		uint64_t L_166 = V_27;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_165, ((int64_t)il2cpp_codegen_multiply((int64_t)L_166, ((int64_t)((int32_t)227822194))))));
		uint64_t L_167 = V_17;
		uint64_t L_168 = V_27;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_167, ((int64_t)il2cpp_codegen_multiply((int64_t)L_168, ((int64_t)((int32_t)149865618))))));
		uint64_t L_169 = V_18;
		uint64_t L_170 = V_27;
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_169, ((int64_t)il2cpp_codegen_multiply((int64_t)L_170, ((int64_t)((int32_t)550336261))))));
		uint64_t L_171 = V_10;
		uint64_t L_172 = V_26;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_171, ((int64_t)il2cpp_codegen_multiply((int64_t)L_172, ((int64_t)((int32_t)43969588))))));
		uint64_t L_173 = V_11;
		uint64_t L_174 = V_26;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_173, ((int64_t)il2cpp_codegen_multiply((int64_t)L_174, ((int64_t)((int32_t)30366549))))));
		uint64_t L_175 = V_12;
		uint64_t L_176 = V_26;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_175, ((int64_t)il2cpp_codegen_multiply((int64_t)L_176, ((int64_t)((int32_t)163752818))))));
		uint64_t L_177 = V_13;
		uint64_t L_178 = V_26;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_177, ((int64_t)il2cpp_codegen_multiply((int64_t)L_178, ((int64_t)((int32_t)258169998))))));
		uint64_t L_179 = V_14;
		uint64_t L_180 = V_26;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_179, ((int64_t)il2cpp_codegen_multiply((int64_t)L_180, ((int64_t)((int32_t)96434764))))));
		uint64_t L_181 = V_15;
		uint64_t L_182 = V_26;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_181, ((int64_t)il2cpp_codegen_multiply((int64_t)L_182, ((int64_t)((int32_t)227822194))))));
		uint64_t L_183 = V_16;
		uint64_t L_184 = V_26;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_183, ((int64_t)il2cpp_codegen_multiply((int64_t)L_184, ((int64_t)((int32_t)149865618))))));
		uint64_t L_185 = V_17;
		uint64_t L_186 = V_26;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_185, ((int64_t)il2cpp_codegen_multiply((int64_t)L_186, ((int64_t)((int32_t)550336261))))));
		uint64_t L_187 = V_25;
		uint64_t L_188 = V_24;
		V_25 = ((int64_t)il2cpp_codegen_add((int64_t)L_187, ((int64_t)((uint64_t)L_188>>((int32_t)28)))));
		uint64_t L_189 = V_24;
		V_24 = ((int64_t)((int64_t)L_189&((int64_t)((int32_t)268435455))));
		uint64_t L_190 = V_9;
		uint64_t L_191 = V_25;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_190, ((int64_t)il2cpp_codegen_multiply((int64_t)L_191, ((int64_t)((int32_t)43969588))))));
		uint64_t L_192 = V_10;
		uint64_t L_193 = V_25;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_192, ((int64_t)il2cpp_codegen_multiply((int64_t)L_193, ((int64_t)((int32_t)30366549))))));
		uint64_t L_194 = V_11;
		uint64_t L_195 = V_25;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_194, ((int64_t)il2cpp_codegen_multiply((int64_t)L_195, ((int64_t)((int32_t)163752818))))));
		uint64_t L_196 = V_12;
		uint64_t L_197 = V_25;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_196, ((int64_t)il2cpp_codegen_multiply((int64_t)L_197, ((int64_t)((int32_t)258169998))))));
		uint64_t L_198 = V_13;
		uint64_t L_199 = V_25;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_198, ((int64_t)il2cpp_codegen_multiply((int64_t)L_199, ((int64_t)((int32_t)96434764))))));
		uint64_t L_200 = V_14;
		uint64_t L_201 = V_25;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_200, ((int64_t)il2cpp_codegen_multiply((int64_t)L_201, ((int64_t)((int32_t)227822194))))));
		uint64_t L_202 = V_15;
		uint64_t L_203 = V_25;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_202, ((int64_t)il2cpp_codegen_multiply((int64_t)L_203, ((int64_t)((int32_t)149865618))))));
		uint64_t L_204 = V_16;
		uint64_t L_205 = V_25;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_204, ((int64_t)il2cpp_codegen_multiply((int64_t)L_205, ((int64_t)((int32_t)550336261))))));
		uint64_t L_206 = V_21;
		uint64_t L_207 = V_20;
		V_21 = ((int64_t)il2cpp_codegen_add((int64_t)L_206, ((int64_t)((uint64_t)L_207>>((int32_t)28)))));
		uint64_t L_208 = V_20;
		V_20 = ((int64_t)((int64_t)L_208&((int64_t)((int32_t)268435455))));
		uint64_t L_209 = V_22;
		uint64_t L_210 = V_21;
		V_22 = ((int64_t)il2cpp_codegen_add((int64_t)L_209, ((int64_t)((uint64_t)L_210>>((int32_t)28)))));
		uint64_t L_211 = V_21;
		V_21 = ((int64_t)((int64_t)L_211&((int64_t)((int32_t)268435455))));
		uint64_t L_212 = V_23;
		uint64_t L_213 = V_22;
		V_23 = ((int64_t)il2cpp_codegen_add((int64_t)L_212, ((int64_t)((uint64_t)L_213>>((int32_t)28)))));
		uint64_t L_214 = V_22;
		V_22 = ((int64_t)((int64_t)L_214&((int64_t)((int32_t)268435455))));
		uint64_t L_215 = V_24;
		uint64_t L_216 = V_23;
		V_24 = ((int64_t)il2cpp_codegen_add((int64_t)L_215, ((int64_t)((uint64_t)L_216>>((int32_t)28)))));
		uint64_t L_217 = V_23;
		V_23 = ((int64_t)((int64_t)L_217&((int64_t)((int32_t)268435455))));
		uint64_t L_218 = V_8;
		uint64_t L_219 = V_24;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_218, ((int64_t)il2cpp_codegen_multiply((int64_t)L_219, ((int64_t)((int32_t)43969588))))));
		uint64_t L_220 = V_9;
		uint64_t L_221 = V_24;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_220, ((int64_t)il2cpp_codegen_multiply((int64_t)L_221, ((int64_t)((int32_t)30366549))))));
		uint64_t L_222 = V_10;
		uint64_t L_223 = V_24;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_222, ((int64_t)il2cpp_codegen_multiply((int64_t)L_223, ((int64_t)((int32_t)163752818))))));
		uint64_t L_224 = V_11;
		uint64_t L_225 = V_24;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_224, ((int64_t)il2cpp_codegen_multiply((int64_t)L_225, ((int64_t)((int32_t)258169998))))));
		uint64_t L_226 = V_12;
		uint64_t L_227 = V_24;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_226, ((int64_t)il2cpp_codegen_multiply((int64_t)L_227, ((int64_t)((int32_t)96434764))))));
		uint64_t L_228 = V_13;
		uint64_t L_229 = V_24;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_228, ((int64_t)il2cpp_codegen_multiply((int64_t)L_229, ((int64_t)((int32_t)227822194))))));
		uint64_t L_230 = V_14;
		uint64_t L_231 = V_24;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_230, ((int64_t)il2cpp_codegen_multiply((int64_t)L_231, ((int64_t)((int32_t)149865618))))));
		uint64_t L_232 = V_15;
		uint64_t L_233 = V_24;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_232, ((int64_t)il2cpp_codegen_multiply((int64_t)L_233, ((int64_t)((int32_t)550336261))))));
		uint64_t L_234 = V_7;
		uint64_t L_235 = V_23;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_234, ((int64_t)il2cpp_codegen_multiply((int64_t)L_235, ((int64_t)((int32_t)43969588))))));
		uint64_t L_236 = V_8;
		uint64_t L_237 = V_23;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_236, ((int64_t)il2cpp_codegen_multiply((int64_t)L_237, ((int64_t)((int32_t)30366549))))));
		uint64_t L_238 = V_9;
		uint64_t L_239 = V_23;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_238, ((int64_t)il2cpp_codegen_multiply((int64_t)L_239, ((int64_t)((int32_t)163752818))))));
		uint64_t L_240 = V_10;
		uint64_t L_241 = V_23;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_240, ((int64_t)il2cpp_codegen_multiply((int64_t)L_241, ((int64_t)((int32_t)258169998))))));
		uint64_t L_242 = V_11;
		uint64_t L_243 = V_23;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_242, ((int64_t)il2cpp_codegen_multiply((int64_t)L_243, ((int64_t)((int32_t)96434764))))));
		uint64_t L_244 = V_12;
		uint64_t L_245 = V_23;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_244, ((int64_t)il2cpp_codegen_multiply((int64_t)L_245, ((int64_t)((int32_t)227822194))))));
		uint64_t L_246 = V_13;
		uint64_t L_247 = V_23;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_246, ((int64_t)il2cpp_codegen_multiply((int64_t)L_247, ((int64_t)((int32_t)149865618))))));
		uint64_t L_248 = V_14;
		uint64_t L_249 = V_23;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_248, ((int64_t)il2cpp_codegen_multiply((int64_t)L_249, ((int64_t)((int32_t)550336261))))));
		uint64_t L_250 = V_6;
		uint64_t L_251 = V_22;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_250, ((int64_t)il2cpp_codegen_multiply((int64_t)L_251, ((int64_t)((int32_t)43969588))))));
		uint64_t L_252 = V_7;
		uint64_t L_253 = V_22;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_252, ((int64_t)il2cpp_codegen_multiply((int64_t)L_253, ((int64_t)((int32_t)30366549))))));
		uint64_t L_254 = V_8;
		uint64_t L_255 = V_22;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_254, ((int64_t)il2cpp_codegen_multiply((int64_t)L_255, ((int64_t)((int32_t)163752818))))));
		uint64_t L_256 = V_9;
		uint64_t L_257 = V_22;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_256, ((int64_t)il2cpp_codegen_multiply((int64_t)L_257, ((int64_t)((int32_t)258169998))))));
		uint64_t L_258 = V_10;
		uint64_t L_259 = V_22;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_258, ((int64_t)il2cpp_codegen_multiply((int64_t)L_259, ((int64_t)((int32_t)96434764))))));
		uint64_t L_260 = V_11;
		uint64_t L_261 = V_22;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_260, ((int64_t)il2cpp_codegen_multiply((int64_t)L_261, ((int64_t)((int32_t)227822194))))));
		uint64_t L_262 = V_12;
		uint64_t L_263 = V_22;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_262, ((int64_t)il2cpp_codegen_multiply((int64_t)L_263, ((int64_t)((int32_t)149865618))))));
		uint64_t L_264 = V_13;
		uint64_t L_265 = V_22;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_264, ((int64_t)il2cpp_codegen_multiply((int64_t)L_265, ((int64_t)((int32_t)550336261))))));
		uint64_t L_266 = V_18;
		uint64_t L_267 = V_17;
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_266, ((int64_t)((uint64_t)L_267>>((int32_t)28)))));
		uint64_t L_268 = V_17;
		V_17 = ((int64_t)((int64_t)L_268&((int64_t)((int32_t)268435455))));
		uint64_t L_269 = V_19;
		uint64_t L_270 = V_18;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_269, ((int64_t)((uint64_t)L_270>>((int32_t)28)))));
		uint64_t L_271 = V_18;
		V_18 = ((int64_t)((int64_t)L_271&((int64_t)((int32_t)268435455))));
		uint64_t L_272 = V_20;
		uint64_t L_273 = V_19;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_272, ((int64_t)((uint64_t)L_273>>((int32_t)28)))));
		uint64_t L_274 = V_19;
		V_19 = ((int64_t)((int64_t)L_274&((int64_t)((int32_t)268435455))));
		uint64_t L_275 = V_21;
		uint64_t L_276 = V_20;
		V_21 = ((int64_t)il2cpp_codegen_add((int64_t)L_275, ((int64_t)((uint64_t)L_276>>((int32_t)28)))));
		uint64_t L_277 = V_20;
		V_20 = ((int64_t)((int64_t)L_277&((int64_t)((int32_t)268435455))));
		uint64_t L_278 = V_5;
		uint64_t L_279 = V_21;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_278, ((int64_t)il2cpp_codegen_multiply((int64_t)L_279, ((int64_t)((int32_t)43969588))))));
		uint64_t L_280 = V_6;
		uint64_t L_281 = V_21;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_280, ((int64_t)il2cpp_codegen_multiply((int64_t)L_281, ((int64_t)((int32_t)30366549))))));
		uint64_t L_282 = V_7;
		uint64_t L_283 = V_21;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_282, ((int64_t)il2cpp_codegen_multiply((int64_t)L_283, ((int64_t)((int32_t)163752818))))));
		uint64_t L_284 = V_8;
		uint64_t L_285 = V_21;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_284, ((int64_t)il2cpp_codegen_multiply((int64_t)L_285, ((int64_t)((int32_t)258169998))))));
		uint64_t L_286 = V_9;
		uint64_t L_287 = V_21;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_286, ((int64_t)il2cpp_codegen_multiply((int64_t)L_287, ((int64_t)((int32_t)96434764))))));
		uint64_t L_288 = V_10;
		uint64_t L_289 = V_21;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_288, ((int64_t)il2cpp_codegen_multiply((int64_t)L_289, ((int64_t)((int32_t)227822194))))));
		uint64_t L_290 = V_11;
		uint64_t L_291 = V_21;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_290, ((int64_t)il2cpp_codegen_multiply((int64_t)L_291, ((int64_t)((int32_t)149865618))))));
		uint64_t L_292 = V_12;
		uint64_t L_293 = V_21;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_292, ((int64_t)il2cpp_codegen_multiply((int64_t)L_293, ((int64_t)((int32_t)550336261))))));
		uint64_t L_294 = V_4;
		uint64_t L_295 = V_20;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_294, ((int64_t)il2cpp_codegen_multiply((int64_t)L_295, ((int64_t)((int32_t)43969588))))));
		uint64_t L_296 = V_5;
		uint64_t L_297 = V_20;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_296, ((int64_t)il2cpp_codegen_multiply((int64_t)L_297, ((int64_t)((int32_t)30366549))))));
		uint64_t L_298 = V_6;
		uint64_t L_299 = V_20;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_298, ((int64_t)il2cpp_codegen_multiply((int64_t)L_299, ((int64_t)((int32_t)163752818))))));
		uint64_t L_300 = V_7;
		uint64_t L_301 = V_20;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_300, ((int64_t)il2cpp_codegen_multiply((int64_t)L_301, ((int64_t)((int32_t)258169998))))));
		uint64_t L_302 = V_8;
		uint64_t L_303 = V_20;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_302, ((int64_t)il2cpp_codegen_multiply((int64_t)L_303, ((int64_t)((int32_t)96434764))))));
		uint64_t L_304 = V_9;
		uint64_t L_305 = V_20;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_304, ((int64_t)il2cpp_codegen_multiply((int64_t)L_305, ((int64_t)((int32_t)227822194))))));
		uint64_t L_306 = V_10;
		uint64_t L_307 = V_20;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_306, ((int64_t)il2cpp_codegen_multiply((int64_t)L_307, ((int64_t)((int32_t)149865618))))));
		uint64_t L_308 = V_11;
		uint64_t L_309 = V_20;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_308, ((int64_t)il2cpp_codegen_multiply((int64_t)L_309, ((int64_t)((int32_t)550336261))))));
		uint64_t L_310 = V_3;
		uint64_t L_311 = V_19;
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_310, ((int64_t)il2cpp_codegen_multiply((int64_t)L_311, ((int64_t)((int32_t)43969588))))));
		uint64_t L_312 = V_4;
		uint64_t L_313 = V_19;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_312, ((int64_t)il2cpp_codegen_multiply((int64_t)L_313, ((int64_t)((int32_t)30366549))))));
		uint64_t L_314 = V_5;
		uint64_t L_315 = V_19;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_314, ((int64_t)il2cpp_codegen_multiply((int64_t)L_315, ((int64_t)((int32_t)163752818))))));
		uint64_t L_316 = V_6;
		uint64_t L_317 = V_19;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_316, ((int64_t)il2cpp_codegen_multiply((int64_t)L_317, ((int64_t)((int32_t)258169998))))));
		uint64_t L_318 = V_7;
		uint64_t L_319 = V_19;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_318, ((int64_t)il2cpp_codegen_multiply((int64_t)L_319, ((int64_t)((int32_t)96434764))))));
		uint64_t L_320 = V_8;
		uint64_t L_321 = V_19;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_320, ((int64_t)il2cpp_codegen_multiply((int64_t)L_321, ((int64_t)((int32_t)227822194))))));
		uint64_t L_322 = V_9;
		uint64_t L_323 = V_19;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_322, ((int64_t)il2cpp_codegen_multiply((int64_t)L_323, ((int64_t)((int32_t)149865618))))));
		uint64_t L_324 = V_10;
		uint64_t L_325 = V_19;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_324, ((int64_t)il2cpp_codegen_multiply((int64_t)L_325, ((int64_t)((int32_t)550336261))))));
		uint64_t L_326 = V_15;
		uint64_t L_327 = V_14;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_326, ((int64_t)((uint64_t)L_327>>((int32_t)28)))));
		uint64_t L_328 = V_14;
		V_14 = ((int64_t)((int64_t)L_328&((int64_t)((int32_t)268435455))));
		uint64_t L_329 = V_16;
		uint64_t L_330 = V_15;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_329, ((int64_t)((uint64_t)L_330>>((int32_t)28)))));
		uint64_t L_331 = V_15;
		V_15 = ((int64_t)((int64_t)L_331&((int64_t)((int32_t)268435455))));
		uint64_t L_332 = V_17;
		uint64_t L_333 = V_16;
		V_17 = ((int64_t)il2cpp_codegen_add((int64_t)L_332, ((int64_t)((uint64_t)L_333>>((int32_t)28)))));
		uint64_t L_334 = V_16;
		V_16 = ((int64_t)((int64_t)L_334&((int64_t)((int32_t)268435455))));
		uint64_t L_335 = V_18;
		uint64_t L_336 = V_17;
		V_18 = ((int64_t)il2cpp_codegen_add((int64_t)L_335, ((int64_t)((uint64_t)L_336>>((int32_t)28)))));
		uint64_t L_337 = V_17;
		V_17 = ((int64_t)((int64_t)L_337&((int64_t)((int32_t)268435455))));
		uint64_t L_338 = V_2;
		uint64_t L_339 = V_18;
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_338, ((int64_t)il2cpp_codegen_multiply((int64_t)L_339, ((int64_t)((int32_t)43969588))))));
		uint64_t L_340 = V_3;
		uint64_t L_341 = V_18;
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_340, ((int64_t)il2cpp_codegen_multiply((int64_t)L_341, ((int64_t)((int32_t)30366549))))));
		uint64_t L_342 = V_4;
		uint64_t L_343 = V_18;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_342, ((int64_t)il2cpp_codegen_multiply((int64_t)L_343, ((int64_t)((int32_t)163752818))))));
		uint64_t L_344 = V_5;
		uint64_t L_345 = V_18;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_344, ((int64_t)il2cpp_codegen_multiply((int64_t)L_345, ((int64_t)((int32_t)258169998))))));
		uint64_t L_346 = V_6;
		uint64_t L_347 = V_18;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_346, ((int64_t)il2cpp_codegen_multiply((int64_t)L_347, ((int64_t)((int32_t)96434764))))));
		uint64_t L_348 = V_7;
		uint64_t L_349 = V_18;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_348, ((int64_t)il2cpp_codegen_multiply((int64_t)L_349, ((int64_t)((int32_t)227822194))))));
		uint64_t L_350 = V_8;
		uint64_t L_351 = V_18;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_350, ((int64_t)il2cpp_codegen_multiply((int64_t)L_351, ((int64_t)((int32_t)149865618))))));
		uint64_t L_352 = V_9;
		uint64_t L_353 = V_18;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_352, ((int64_t)il2cpp_codegen_multiply((int64_t)L_353, ((int64_t)((int32_t)550336261))))));
		uint64_t L_354 = V_1;
		uint64_t L_355 = V_17;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_354, ((int64_t)il2cpp_codegen_multiply((int64_t)L_355, ((int64_t)((int32_t)43969588))))));
		uint64_t L_356 = V_2;
		uint64_t L_357 = V_17;
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_356, ((int64_t)il2cpp_codegen_multiply((int64_t)L_357, ((int64_t)((int32_t)30366549))))));
		uint64_t L_358 = V_3;
		uint64_t L_359 = V_17;
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_358, ((int64_t)il2cpp_codegen_multiply((int64_t)L_359, ((int64_t)((int32_t)163752818))))));
		uint64_t L_360 = V_4;
		uint64_t L_361 = V_17;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_360, ((int64_t)il2cpp_codegen_multiply((int64_t)L_361, ((int64_t)((int32_t)258169998))))));
		uint64_t L_362 = V_5;
		uint64_t L_363 = V_17;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_362, ((int64_t)il2cpp_codegen_multiply((int64_t)L_363, ((int64_t)((int32_t)96434764))))));
		uint64_t L_364 = V_6;
		uint64_t L_365 = V_17;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_364, ((int64_t)il2cpp_codegen_multiply((int64_t)L_365, ((int64_t)((int32_t)227822194))))));
		uint64_t L_366 = V_7;
		uint64_t L_367 = V_17;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_366, ((int64_t)il2cpp_codegen_multiply((int64_t)L_367, ((int64_t)((int32_t)149865618))))));
		uint64_t L_368 = V_8;
		uint64_t L_369 = V_17;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_368, ((int64_t)il2cpp_codegen_multiply((int64_t)L_369, ((int64_t)((int32_t)550336261))))));
		uint64_t L_370 = V_16;
		V_16 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_370, ((int64_t)4)));
		uint64_t L_371 = V_16;
		uint64_t L_372 = V_15;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_371, ((int64_t)((uint64_t)L_372>>((int32_t)26)))));
		uint64_t L_373 = V_15;
		V_15 = ((int64_t)((int64_t)L_373&((int64_t)((int32_t)67108863))));
		uint64_t L_374 = V_16;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)L_374, ((int64_t)1)));
		uint64_t L_375 = V_0;
		uint64_t L_376 = V_16;
		V_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_375, ((int64_t)il2cpp_codegen_multiply((int64_t)L_376, ((int64_t)((int32_t)78101261))))));
		uint64_t L_377 = V_1;
		uint64_t L_378 = V_16;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_377, ((int64_t)il2cpp_codegen_multiply((int64_t)L_378, ((int64_t)((int32_t)141809365))))));
		uint64_t L_379 = V_2;
		uint64_t L_380 = V_16;
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_379, ((int64_t)il2cpp_codegen_multiply((int64_t)L_380, ((int64_t)((int32_t)175155932))))));
		uint64_t L_381 = V_3;
		uint64_t L_382 = V_16;
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_381, ((int64_t)il2cpp_codegen_multiply((int64_t)L_382, ((int64_t)((int32_t)64542499))))));
		uint64_t L_383 = V_4;
		uint64_t L_384 = V_16;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_383, ((int64_t)il2cpp_codegen_multiply((int64_t)L_384, ((int64_t)((int32_t)158326419))))));
		uint64_t L_385 = V_5;
		uint64_t L_386 = V_16;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_385, ((int64_t)il2cpp_codegen_multiply((int64_t)L_386, ((int64_t)((int32_t)191173276))))));
		uint64_t L_387 = V_6;
		uint64_t L_388 = V_16;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_387, ((int64_t)il2cpp_codegen_multiply((int64_t)L_388, ((int64_t)((int32_t)104575268))))));
		uint64_t L_389 = V_7;
		uint64_t L_390 = V_16;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_389, ((int64_t)il2cpp_codegen_multiply((int64_t)L_390, ((int64_t)((int32_t)137584065))))));
		uint64_t L_391 = V_1;
		uint64_t L_392 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_391, ((int64_t)((uint64_t)L_392>>((int32_t)28)))));
		uint64_t L_393 = V_0;
		V_0 = ((int64_t)((int64_t)L_393&((int64_t)((int32_t)268435455))));
		uint64_t L_394 = V_2;
		uint64_t L_395 = V_1;
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_394, ((int64_t)((uint64_t)L_395>>((int32_t)28)))));
		uint64_t L_396 = V_1;
		V_1 = ((int64_t)((int64_t)L_396&((int64_t)((int32_t)268435455))));
		uint64_t L_397 = V_3;
		uint64_t L_398 = V_2;
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_397, ((int64_t)((uint64_t)L_398>>((int32_t)28)))));
		uint64_t L_399 = V_2;
		V_2 = ((int64_t)((int64_t)L_399&((int64_t)((int32_t)268435455))));
		uint64_t L_400 = V_4;
		uint64_t L_401 = V_3;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_400, ((int64_t)((uint64_t)L_401>>((int32_t)28)))));
		uint64_t L_402 = V_3;
		V_3 = ((int64_t)((int64_t)L_402&((int64_t)((int32_t)268435455))));
		uint64_t L_403 = V_5;
		uint64_t L_404 = V_4;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_403, ((int64_t)((uint64_t)L_404>>((int32_t)28)))));
		uint64_t L_405 = V_4;
		V_4 = ((int64_t)((int64_t)L_405&((int64_t)((int32_t)268435455))));
		uint64_t L_406 = V_6;
		uint64_t L_407 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_406, ((int64_t)((uint64_t)L_407>>((int32_t)28)))));
		uint64_t L_408 = V_5;
		V_5 = ((int64_t)((int64_t)L_408&((int64_t)((int32_t)268435455))));
		uint64_t L_409 = V_7;
		uint64_t L_410 = V_6;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_409, ((int64_t)((uint64_t)L_410>>((int32_t)28)))));
		uint64_t L_411 = V_6;
		V_6 = ((int64_t)((int64_t)L_411&((int64_t)((int32_t)268435455))));
		uint64_t L_412 = V_8;
		uint64_t L_413 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_412, ((int64_t)((uint64_t)L_413>>((int32_t)28)))));
		uint64_t L_414 = V_7;
		V_7 = ((int64_t)((int64_t)L_414&((int64_t)((int32_t)268435455))));
		uint64_t L_415 = V_9;
		uint64_t L_416 = V_8;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_415, ((int64_t)((uint64_t)L_416>>((int32_t)28)))));
		uint64_t L_417 = V_8;
		V_8 = ((int64_t)((int64_t)L_417&((int64_t)((int32_t)268435455))));
		uint64_t L_418 = V_10;
		uint64_t L_419 = V_9;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_418, ((int64_t)((uint64_t)L_419>>((int32_t)28)))));
		uint64_t L_420 = V_9;
		V_9 = ((int64_t)((int64_t)L_420&((int64_t)((int32_t)268435455))));
		uint64_t L_421 = V_11;
		uint64_t L_422 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_421, ((int64_t)((uint64_t)L_422>>((int32_t)28)))));
		uint64_t L_423 = V_10;
		V_10 = ((int64_t)((int64_t)L_423&((int64_t)((int32_t)268435455))));
		uint64_t L_424 = V_12;
		uint64_t L_425 = V_11;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_424, ((int64_t)((uint64_t)L_425>>((int32_t)28)))));
		uint64_t L_426 = V_11;
		V_11 = ((int64_t)((int64_t)L_426&((int64_t)((int32_t)268435455))));
		uint64_t L_427 = V_13;
		uint64_t L_428 = V_12;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_427, ((int64_t)((uint64_t)L_428>>((int32_t)28)))));
		uint64_t L_429 = V_12;
		V_12 = ((int64_t)((int64_t)L_429&((int64_t)((int32_t)268435455))));
		uint64_t L_430 = V_14;
		uint64_t L_431 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_430, ((int64_t)((uint64_t)L_431>>((int32_t)28)))));
		uint64_t L_432 = V_13;
		V_13 = ((int64_t)((int64_t)L_432&((int64_t)((int32_t)268435455))));
		uint64_t L_433 = V_15;
		uint64_t L_434 = V_14;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_433, ((int64_t)((uint64_t)L_434>>((int32_t)28)))));
		uint64_t L_435 = V_14;
		V_14 = ((int64_t)((int64_t)L_435&((int64_t)((int32_t)268435455))));
		uint64_t L_436 = V_15;
		V_16 = ((int64_t)((uint64_t)L_436>>((int32_t)26)));
		uint64_t L_437 = V_15;
		V_15 = ((int64_t)((int64_t)L_437&((int64_t)((int32_t)67108863))));
		uint64_t L_438 = V_16;
		V_16 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_438, ((int64_t)1)));
		uint64_t L_439 = V_0;
		uint64_t L_440 = V_16;
		V_0 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_439, ((int64_t)((int64_t)L_440&((int64_t)((int32_t)78101261))))));
		uint64_t L_441 = V_1;
		uint64_t L_442 = V_16;
		V_1 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_441, ((int64_t)((int64_t)L_442&((int64_t)((int32_t)141809365))))));
		uint64_t L_443 = V_2;
		uint64_t L_444 = V_16;
		V_2 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_443, ((int64_t)((int64_t)L_444&((int64_t)((int32_t)175155932))))));
		uint64_t L_445 = V_3;
		uint64_t L_446 = V_16;
		V_3 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_445, ((int64_t)((int64_t)L_446&((int64_t)((int32_t)64542499))))));
		uint64_t L_447 = V_4;
		uint64_t L_448 = V_16;
		V_4 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_447, ((int64_t)((int64_t)L_448&((int64_t)((int32_t)158326419))))));
		uint64_t L_449 = V_5;
		uint64_t L_450 = V_16;
		V_5 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_449, ((int64_t)((int64_t)L_450&((int64_t)((int32_t)191173276))))));
		uint64_t L_451 = V_6;
		uint64_t L_452 = V_16;
		V_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_451, ((int64_t)((int64_t)L_452&((int64_t)((int32_t)104575268))))));
		uint64_t L_453 = V_7;
		uint64_t L_454 = V_16;
		V_7 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_453, ((int64_t)((int64_t)L_454&((int64_t)((int32_t)137584065))))));
		uint64_t L_455 = V_1;
		uint64_t L_456 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_455, ((int64_t)((int64_t)L_456>>((int32_t)28)))));
		uint64_t L_457 = V_0;
		V_0 = ((int64_t)((int64_t)L_457&((int64_t)((int32_t)268435455))));
		uint64_t L_458 = V_2;
		uint64_t L_459 = V_1;
		V_2 = ((int64_t)il2cpp_codegen_add((int64_t)L_458, ((int64_t)((int64_t)L_459>>((int32_t)28)))));
		uint64_t L_460 = V_1;
		V_1 = ((int64_t)((int64_t)L_460&((int64_t)((int32_t)268435455))));
		uint64_t L_461 = V_3;
		uint64_t L_462 = V_2;
		V_3 = ((int64_t)il2cpp_codegen_add((int64_t)L_461, ((int64_t)((int64_t)L_462>>((int32_t)28)))));
		uint64_t L_463 = V_2;
		V_2 = ((int64_t)((int64_t)L_463&((int64_t)((int32_t)268435455))));
		uint64_t L_464 = V_4;
		uint64_t L_465 = V_3;
		V_4 = ((int64_t)il2cpp_codegen_add((int64_t)L_464, ((int64_t)((int64_t)L_465>>((int32_t)28)))));
		uint64_t L_466 = V_3;
		V_3 = ((int64_t)((int64_t)L_466&((int64_t)((int32_t)268435455))));
		uint64_t L_467 = V_5;
		uint64_t L_468 = V_4;
		V_5 = ((int64_t)il2cpp_codegen_add((int64_t)L_467, ((int64_t)((int64_t)L_468>>((int32_t)28)))));
		uint64_t L_469 = V_4;
		V_4 = ((int64_t)((int64_t)L_469&((int64_t)((int32_t)268435455))));
		uint64_t L_470 = V_6;
		uint64_t L_471 = V_5;
		V_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_470, ((int64_t)((int64_t)L_471>>((int32_t)28)))));
		uint64_t L_472 = V_5;
		V_5 = ((int64_t)((int64_t)L_472&((int64_t)((int32_t)268435455))));
		uint64_t L_473 = V_7;
		uint64_t L_474 = V_6;
		V_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_473, ((int64_t)((int64_t)L_474>>((int32_t)28)))));
		uint64_t L_475 = V_6;
		V_6 = ((int64_t)((int64_t)L_475&((int64_t)((int32_t)268435455))));
		uint64_t L_476 = V_8;
		uint64_t L_477 = V_7;
		V_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_476, ((int64_t)((int64_t)L_477>>((int32_t)28)))));
		uint64_t L_478 = V_7;
		V_7 = ((int64_t)((int64_t)L_478&((int64_t)((int32_t)268435455))));
		uint64_t L_479 = V_9;
		uint64_t L_480 = V_8;
		V_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_479, ((int64_t)((int64_t)L_480>>((int32_t)28)))));
		uint64_t L_481 = V_8;
		V_8 = ((int64_t)((int64_t)L_481&((int64_t)((int32_t)268435455))));
		uint64_t L_482 = V_10;
		uint64_t L_483 = V_9;
		V_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_482, ((int64_t)((int64_t)L_483>>((int32_t)28)))));
		uint64_t L_484 = V_9;
		V_9 = ((int64_t)((int64_t)L_484&((int64_t)((int32_t)268435455))));
		uint64_t L_485 = V_11;
		uint64_t L_486 = V_10;
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_485, ((int64_t)((int64_t)L_486>>((int32_t)28)))));
		uint64_t L_487 = V_10;
		V_10 = ((int64_t)((int64_t)L_487&((int64_t)((int32_t)268435455))));
		uint64_t L_488 = V_12;
		uint64_t L_489 = V_11;
		V_12 = ((int64_t)il2cpp_codegen_add((int64_t)L_488, ((int64_t)((int64_t)L_489>>((int32_t)28)))));
		uint64_t L_490 = V_11;
		V_11 = ((int64_t)((int64_t)L_490&((int64_t)((int32_t)268435455))));
		uint64_t L_491 = V_13;
		uint64_t L_492 = V_12;
		V_13 = ((int64_t)il2cpp_codegen_add((int64_t)L_491, ((int64_t)((int64_t)L_492>>((int32_t)28)))));
		uint64_t L_493 = V_12;
		V_12 = ((int64_t)((int64_t)L_493&((int64_t)((int32_t)268435455))));
		uint64_t L_494 = V_14;
		uint64_t L_495 = V_13;
		V_14 = ((int64_t)il2cpp_codegen_add((int64_t)L_494, ((int64_t)((int64_t)L_495>>((int32_t)28)))));
		uint64_t L_496 = V_13;
		V_13 = ((int64_t)((int64_t)L_496&((int64_t)((int32_t)268435455))));
		uint64_t L_497 = V_15;
		uint64_t L_498 = V_14;
		V_15 = ((int64_t)il2cpp_codegen_add((int64_t)L_497, ((int64_t)((int64_t)L_498>>((int32_t)28)))));
		uint64_t L_499 = V_14;
		V_14 = ((int64_t)((int64_t)L_499&((int64_t)((int32_t)268435455))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_500 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)57));
		V_33 = L_500;
		uint64_t L_501 = V_0;
		uint64_t L_502 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_503 = V_33;
		Ed448_Encode56_mD071120F48E4C43F8F5BD7C588EB71F4F7DC3F1B(((int64_t)((int64_t)L_501|((int64_t)((int64_t)L_502<<((int32_t)28))))), L_503, 0, NULL);
		uint64_t L_504 = V_2;
		uint64_t L_505 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_506 = V_33;
		Ed448_Encode56_mD071120F48E4C43F8F5BD7C588EB71F4F7DC3F1B(((int64_t)((int64_t)L_504|((int64_t)((int64_t)L_505<<((int32_t)28))))), L_506, 7, NULL);
		uint64_t L_507 = V_4;
		uint64_t L_508 = V_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_509 = V_33;
		Ed448_Encode56_mD071120F48E4C43F8F5BD7C588EB71F4F7DC3F1B(((int64_t)((int64_t)L_507|((int64_t)((int64_t)L_508<<((int32_t)28))))), L_509, ((int32_t)14), NULL);
		uint64_t L_510 = V_6;
		uint64_t L_511 = V_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_512 = V_33;
		Ed448_Encode56_mD071120F48E4C43F8F5BD7C588EB71F4F7DC3F1B(((int64_t)((int64_t)L_510|((int64_t)((int64_t)L_511<<((int32_t)28))))), L_512, ((int32_t)21), NULL);
		uint64_t L_513 = V_8;
		uint64_t L_514 = V_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_515 = V_33;
		Ed448_Encode56_mD071120F48E4C43F8F5BD7C588EB71F4F7DC3F1B(((int64_t)((int64_t)L_513|((int64_t)((int64_t)L_514<<((int32_t)28))))), L_515, ((int32_t)28), NULL);
		uint64_t L_516 = V_10;
		uint64_t L_517 = V_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_518 = V_33;
		Ed448_Encode56_mD071120F48E4C43F8F5BD7C588EB71F4F7DC3F1B(((int64_t)((int64_t)L_516|((int64_t)((int64_t)L_517<<((int32_t)28))))), L_518, ((int32_t)35), NULL);
		uint64_t L_519 = V_12;
		uint64_t L_520 = V_13;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_521 = V_33;
		Ed448_Encode56_mD071120F48E4C43F8F5BD7C588EB71F4F7DC3F1B(((int64_t)((int64_t)L_519|((int64_t)((int64_t)L_520<<((int32_t)28))))), L_521, ((int32_t)42), NULL);
		uint64_t L_522 = V_14;
		uint64_t L_523 = V_15;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_524 = V_33;
		Ed448_Encode56_mD071120F48E4C43F8F5BD7C588EB71F4F7DC3F1B(((int64_t)((int64_t)L_522|((int64_t)((int64_t)L_523<<((int32_t)28))))), L_524, ((int32_t)49), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_525 = V_33;
		return L_525;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ScalarMultBase_m2D6652BE8542CE3C83F9CE4F4E0FD3DDF2F312B6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___1_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	uint32_t V_9 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_Precompute_m8A35B0BAD0452897FD7AC0459ED016C3328BF230(NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_0 = ___1_r;
		Ed448_PointSetNeutral_m29E3031C9BF46C5C92ECE8F4352BB29C22BD52E5(L_0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		V_0 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_k;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		Ed448_DecodeScalar_m545F13A8FD6DFBADE40B569CC47D7FDC0AEAD981(L_2, 0, L_3, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		uint32_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___L;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_0;
		uint32_t L_11;
		L_11 = Nat_CAdd_m6E497E6974AED75B020BE8C26449592FEEE12A4D(((int32_t)14), ((int32_t)(((~((int32_t)L_7)))&1)), L_8, L_9, L_10, NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint32_t)((int32_t)il2cpp_codegen_add(4, (int32_t)L_11)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		NullCheck(L_12);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_0;
		uint32_t L_14;
		L_14 = Nat_ShiftDownBit_m3CE84243637D1040BEAA3950386F0923D09CC613(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13, 0, NULL);
		PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* L_15 = (PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E*)il2cpp_codegen_object_new(PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E_il2cpp_TypeInfo_var);
		PointPrecomp__ctor_m3B237EFDABECABABE666EC66DA1B9C243C0F0F6A(L_15, NULL);
		V_1 = L_15;
		V_2 = ((int32_t)17);
	}

IL_0049:
	{
		int32_t L_16 = V_2;
		V_3 = L_16;
		V_4 = 0;
		goto IL_00c8;
	}

IL_0050:
	{
		V_5 = 0;
		V_8 = 0;
		goto IL_008c;
	}

IL_0058:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_0;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)(L_18>>5));
		uint32_t L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		int32_t L_21 = V_3;
		V_9 = ((int32_t)((uint32_t)L_20>>((int32_t)(((int32_t)(L_21&((int32_t)31)))&((int32_t)31)))));
		uint32_t L_22 = V_5;
		int32_t L_23 = V_8;
		V_5 = ((int32_t)((int32_t)L_22&((~((int32_t)(1<<((int32_t)(L_23&((int32_t)31)))))))));
		uint32_t L_24 = V_5;
		uint32_t L_25 = V_9;
		int32_t L_26 = V_8;
		V_5 = ((int32_t)((int32_t)L_24^((int32_t)((int32_t)L_25<<((int32_t)(L_26&((int32_t)31)))))));
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_27, ((int32_t)18)));
		int32_t L_28 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_008c:
	{
		int32_t L_29 = V_8;
		if ((((int32_t)L_29) < ((int32_t)5)))
		{
			goto IL_0058;
		}
	}
	{
		uint32_t L_30 = V_5;
		V_6 = ((int32_t)(((int32_t)((uint32_t)L_30>>4))&1));
		uint32_t L_31 = V_5;
		int32_t L_32 = V_6;
		V_7 = ((int32_t)(((int32_t)((int32_t)L_31^((-L_32))))&((int32_t)15)));
		int32_t L_33 = V_4;
		int32_t L_34 = V_7;
		PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* L_35 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_PointLookup_m6636543B36FB21204D5B32F62118CFD05A4C474C(L_33, L_34, L_35, NULL);
		int32_t L_36 = V_6;
		PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* L_37 = V_1;
		NullCheck(L_37);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = L_37->___x;
		X448Field_CNegate_m7F86185A4985B8748F03AF3EBA5B932D37BFC930(L_36, L_38, NULL);
		PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* L_39 = V_1;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_40 = ___1_r;
		Ed448_PointAddPrecomp_m88F5C042045BE8BB4BAD911D910CBE8807727F8B(L_39, L_40, NULL);
		int32_t L_41 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00c8:
	{
		int32_t L_42 = V_4;
		if ((((int32_t)L_42) < ((int32_t)5)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_43 = V_2;
		int32_t L_44 = ((int32_t)il2cpp_codegen_subtract(L_43, 1));
		V_2 = L_44;
		if ((((int32_t)L_44) < ((int32_t)0)))
		{
			goto IL_00e0;
		}
	}
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_45 = ___1_r;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_PointDouble_m49FD2EC3B20EEBA39C5BB1F83A0E1395423D5D3A(L_45, NULL);
		goto IL_0049;
	}

IL_00e0:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ScalarMultBaseEncoded_m604EF7DEB4822EB0F67CD3B671C52D492084977B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_r, int32_t ___2_rOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* V_0 = NULL;
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_0 = (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)il2cpp_codegen_object_new(PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
		PointExt__ctor_m97C9A86D0FB34EDB66C2E5A4EBFC4A99C4D14EA7(L_0, NULL);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_k;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_ScalarMultBase_m2D6652BE8542CE3C83F9CE4F4E0FD3DDF2F312B6(L_1, L_2, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_r;
		int32_t L_5 = ___2_rOff;
		int32_t L_6;
		L_6 = Ed448_EncodePoint_m3CFA6EC0A268BEF689B0E994153F7EA37A295E6A(L_3, L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_001d;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed448_ScalarMultBaseEncoded_m604EF7DEB4822EB0F67CD3B671C52D492084977B_RuntimeMethod_var)));
	}

IL_001d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ScalarMultBaseXY_mA45BD372C83D0681CDDF5CAC40699E679809BB49 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)57));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_k;
		int32_t L_2 = ___1_kOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_PruneScalar_m0FBADCA509B824C09321682080565AF7C7BB3C25(L_1, L_2, L_3, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_4 = (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D*)il2cpp_codegen_object_new(PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D_il2cpp_TypeInfo_var);
		PointExt__ctor_m97C9A86D0FB34EDB66C2E5A4EBFC4A99C4D14EA7(L_4, NULL);
		V_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_0;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_6 = V_1;
		Ed448_ScalarMultBase_m2D6652BE8542CE3C83F9CE4F4E0FD3DDF2F312B6(L_5, L_6, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_7 = V_1;
		NullCheck(L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = L_7->___x;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_9 = V_1;
		NullCheck(L_9);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = L_9->___y;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_11 = V_1;
		NullCheck(L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = L_11->___z;
		int32_t L_13;
		L_13 = Ed448_CheckPoint_m6D277D2D5AE6D9C1F4D2D54A93BAA0EEE36644C3(L_8, L_10, L_12, NULL);
		if (L_13)
		{
			goto IL_003c;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_14 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed448_ScalarMultBaseXY_mA45BD372C83D0681CDDF5CAC40699E679809BB49_RuntimeMethod_var)));
	}

IL_003c:
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_15 = V_1;
		NullCheck(L_15);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = L_15->___x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_x;
		X448Field_Copy_m68F680AAB9014E095E873FE939DE740F5C9484CB(L_16, 0, L_17, 0, NULL);
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_18 = V_1;
		NullCheck(L_18);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = L_18->___y;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___3_y;
		X448Field_Copy_m68F680AAB9014E095E873FE939DE740F5C9484CB(L_19, 0, L_20, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_ScalarMultStrausVar_m8841B106D7624F16097473A1A1909E8D094AC166 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_nb, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_np, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___2_p, PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* ___3_r, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_1 = NULL;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_2 = NULL;
	PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_Precompute_m8A35B0BAD0452897FD7AC0459ED016C3328BF230(NULL);
		V_0 = 5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_nb;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_1;
		L_1 = Ed448_GetWnafVar_m04BC3C268B0D730FD1CD80ACF00A8940BA0AFD17(L_0, 7, NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___1_np;
		int32_t L_3 = V_0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_4;
		L_4 = Ed448_GetWnafVar_m04BC3C268B0D730FD1CD80ACF00A8940BA0AFD17(L_2, L_3, NULL);
		V_2 = L_4;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_5 = ___2_p;
		int32_t L_6 = V_0;
		PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_7;
		L_7 = Ed448_PointPrecompVar_m2A60BD4319E8B97F316A4FF42AF1C06201156248(L_5, ((int32_t)(1<<((int32_t)(((int32_t)il2cpp_codegen_subtract(L_6, 2))&((int32_t)31))))), NULL);
		V_3 = L_7;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_8 = ___3_r;
		Ed448_PointSetNeutral_m29E3031C9BF46C5C92ECE8F4352BB29C22BD52E5(L_8, NULL);
		V_4 = ((int32_t)446);
	}

IL_0033:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_9 = V_1;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_5 = L_12;
		int32_t L_13 = V_5;
		if (!L_13)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_14 = V_5;
		V_7 = ((int32_t)(L_14>>((int32_t)31)));
		int32_t L_15 = V_5;
		int32_t L_16 = V_7;
		V_8 = ((int32_t)(((int32_t)(L_15^L_16))>>1));
		int32_t L_17 = V_7;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_18 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBaseTable;
		int32_t L_19 = V_8;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_22 = ___3_r;
		Ed448_PointAddVar_m43C18B554A4E39E9F9CF71C9634B60C5DB7B7604((bool)((!(((uint32_t)L_17) <= ((uint32_t)0)))? 1 : 0), L_21, L_22, NULL);
	}

IL_0060:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_23 = V_2;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int8_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_6 = L_26;
		int32_t L_27 = V_6;
		if (!L_27)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_28 = V_6;
		V_9 = ((int32_t)(L_28>>((int32_t)31)));
		int32_t L_29 = V_6;
		int32_t L_30 = V_9;
		V_10 = ((int32_t)(((int32_t)(L_29^L_30))>>1));
		int32_t L_31 = V_9;
		PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7* L_32 = V_3;
		int32_t L_33 = V_10;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_36 = ___3_r;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_PointAddVar_m43C18B554A4E39E9F9CF71C9634B60C5DB7B7604((bool)((!(((uint32_t)L_31) <= ((uint32_t)0)))? 1 : 0), L_35, L_36, NULL);
	}

IL_0089:
	{
		int32_t L_37 = V_4;
		int32_t L_38 = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		V_4 = L_38;
		if ((((int32_t)L_38) < ((int32_t)0)))
		{
			goto IL_009b;
		}
	}
	{
		PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* L_39 = ___3_r;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_PointDouble_m49FD2EC3B20EEBA39C5BB1F83A0E1395423D5D3A(L_39, NULL);
		goto IL_0033;
	}

IL_009b:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Sign_m870C51B1BC0D36B46CBA20FF5DDD289374C1F93C (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_ctx, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_m, int32_t ___4_mOff, int32_t ___5_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_sig, int32_t ___7_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sk;
		int32_t L_1 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_ctx;
		uint8_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___3_m;
		int32_t L_5 = ___4_mOff;
		int32_t L_6 = ___5_mLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___6_sig;
		int32_t L_8 = ___7_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_ImplSign_m2321B0D0756DA0B6582A2F9BF7225F4DCCB913D3(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_Sign_m24A89E557EE7EF0AEA3DF4EEA5ACBCD9E3D0F635 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_m, int32_t ___6_mOff, int32_t ___7_mLen, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___8_sig, int32_t ___9_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sk;
		int32_t L_1 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_pk;
		int32_t L_3 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___4_ctx;
		uint8_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___5_m;
		int32_t L_7 = ___6_mOff;
		int32_t L_8 = ___7_mLen;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___8_sig;
		int32_t L_10 = ___9_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_ImplSign_m6835855D576D6786D1CCE863EEDA49B06876C692(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_SignPrehash_m7C15F1EC464CA03DA4613E451BFA4FADA960D227 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_ctx, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_ph, int32_t ___4_phOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_sig, int32_t ___6_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sk;
		int32_t L_1 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_ctx;
		uint8_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___3_ph;
		int32_t L_5 = ___4_phOff;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		int32_t L_6 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PrehashSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___5_sig;
		int32_t L_8 = ___6_sigOff;
		Ed448_ImplSign_m2321B0D0756DA0B6582A2F9BF7225F4DCCB913D3(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_SignPrehash_m5CC582BA256BC92C52B1BF2B9E9A79FB675B51D0 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_ph, int32_t ___6_phOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___7_sig, int32_t ___8_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sk;
		int32_t L_1 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_pk;
		int32_t L_3 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___4_ctx;
		uint8_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___5_ph;
		int32_t L_7 = ___6_phOff;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		int32_t L_8 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PrehashSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___7_sig;
		int32_t L_10 = ___8_sigOff;
		Ed448_ImplSign_m6835855D576D6786D1CCE863EEDA49B06876C692(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_SignPrehash_m49B26FC07C3EA2CFC2BA859ADE076A0F15362D95 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_ctx, RuntimeObject* ___3_ph, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_sig, int32_t ___5_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PrehashSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PrehashSize;
		RuntimeObject* L_3 = ___3_ph;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		int32_t L_5 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PrehashSize;
		NullCheck(L_3);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var, L_3, L_4, 0, L_5);
		if ((((int32_t)L_2) == ((int32_t)L_6)))
		{
			goto IL_002a;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral244DDD15B47825F82F417E249D4FFA669F1BE35C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed448_SignPrehash_m49B26FC07C3EA2CFC2BA859ADE076A0F15362D95_RuntimeMethod_var)));
	}

IL_002a:
	{
		V_1 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_sk;
		int32_t L_9 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___2_ctx;
		uint8_t L_11 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = V_0;
		NullCheck(L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___4_sig;
		int32_t L_15 = ___5_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_ImplSign_m2321B0D0756DA0B6582A2F9BF7225F4DCCB913D3(L_8, L_9, L_10, L_11, L_12, 0, ((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14, L_15, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448_SignPrehash_m2ECB570548C7EF75FE6DC123CA1F1D6D5A825B25 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sk, int32_t ___1_skOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, RuntimeObject* ___5_ph, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___6_sig, int32_t ___7_sigOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PrehashSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PrehashSize;
		RuntimeObject* L_3 = ___5_ph;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		int32_t L_5 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PrehashSize;
		NullCheck(L_3);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var, L_3, L_4, 0, L_5);
		if ((((int32_t)L_2) == ((int32_t)L_6)))
		{
			goto IL_002b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral244DDD15B47825F82F417E249D4FFA669F1BE35C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed448_SignPrehash_m2ECB570548C7EF75FE6DC123CA1F1D6D5A825B25_RuntimeMethod_var)));
	}

IL_002b:
	{
		V_1 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_sk;
		int32_t L_9 = ___1_skOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___2_pk;
		int32_t L_11 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___4_ctx;
		uint8_t L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		NullCheck(L_15);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___6_sig;
		int32_t L_17 = ___7_sigOff;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_ImplSign_m6835855D576D6786D1CCE863EEDA49B06876C692(L_8, L_9, L_10, L_11, L_12, L_13, L_14, 0, ((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16, L_17, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_Verify_mFD72BB3A9CB6DD4BB78604AD96E8CAABC26053A6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sig, int32_t ___1_sigOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_m, int32_t ___6_mOff, int32_t ___7_mLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sig;
		int32_t L_1 = ___1_sigOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_pk;
		int32_t L_3 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___4_ctx;
		uint8_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___5_m;
		int32_t L_7 = ___6_mOff;
		int32_t L_8 = ___7_mLen;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Ed448_ImplVerify_mB7897E9ABF91E0DE3A03B8A6106B119CE93749C4(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_VerifyPrehash_m8559DC5ECEAFF3651EFBA032471B8437845BBEA6 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sig, int32_t ___1_sigOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_ph, int32_t ___6_phOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_sig;
		int32_t L_1 = ___1_sigOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_pk;
		int32_t L_3 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___4_ctx;
		uint8_t L_5 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___5_ph;
		int32_t L_7 = ___6_phOff;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		int32_t L_8 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PrehashSize;
		bool L_9;
		L_9 = Ed448_ImplVerify_mB7897E9ABF91E0DE3A03B8A6106B119CE93749C4(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Ed448_VerifyPrehash_mD8D48245C9E6A838EC3F172079D09889C02FD7FA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_sig, int32_t ___1_sigOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_pk, int32_t ___3_pkOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_ctx, RuntimeObject* ___5_ph, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	uint8_t V_1 = 0x0;
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PrehashSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PrehashSize;
		RuntimeObject* L_3 = ___5_ph;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_0;
		int32_t L_5 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PrehashSize;
		NullCheck(L_3);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(0, IXof_t5FBA18C90E9D7A6E9D991052440117D8D54A35CC_il2cpp_TypeInfo_var, L_3, L_4, 0, L_5);
		if ((((int32_t)L_2) == ((int32_t)L_6)))
		{
			goto IL_002b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral244DDD15B47825F82F417E249D4FFA669F1BE35C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Ed448_VerifyPrehash_mD8D48245C9E6A838EC3F172079D09889C02FD7FA_RuntimeMethod_var)));
	}

IL_002b:
	{
		V_1 = (uint8_t)1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_sig;
		int32_t L_9 = ___1_sigOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___2_pk;
		int32_t L_11 = ___3_pkOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___4_ctx;
		uint8_t L_13 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		NullCheck(L_15);
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Ed448_ImplVerify_mB7897E9ABF91E0DE3A03B8A6106B119CE93749C4(L_8, L_9, L_10, L_11, L_12, L_13, L_14, 0, ((int32_t)(((RuntimeArray*)L_15)->max_length)), NULL);
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448__ctor_mB3D144F2203902A5AC1A0778368F4CDEC629F3D5 (Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ed448__cctor_mC144383AB3691AF256D47DA5C6AEE9801A811CD7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____0AEC099C87E7062A57D1C79734EDDD28A07A1684746EE8640132BB252E6BF5A1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____120918433B634757ADE589703127976B7C5C2009E8DB37632123F45FA2B87F2E_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____16599A4F9A12ECCBFC361B547840304B9E48CBC431F387243C6859C475427D16_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____E3B4E767F318263A8E7A64E1D61F6D3368A3B59AF34CBB94E657E7FCC58F5BA5_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF25DFE14753005E858F66583A1F6CC7A6AE3FCAC);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PrehashSize = ((int32_t)64);
		((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___PublicKeySize = ((int32_t)57);
		((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___SecretKeySize = ((int32_t)57);
		((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___SignatureSize = ((int32_t)114);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0;
		L_0 = Strings_ToByteArray_m75FA6151AA28B680E0C9DB857AC734483A308A63(_stringLiteralF25DFE14753005E858F66583A1F6CC7A6AE3FCAC, NULL);
		((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___Dom4Prefix = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___Dom4Prefix), (void*)L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = L_1;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____0AEC099C87E7062A57D1C79734EDDD28A07A1684746EE8640132BB252E6BF5A1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_2, L_3, NULL);
		((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___P = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___P), (void*)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = L_4;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_6 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____16599A4F9A12ECCBFC361B547840304B9E48CBC431F387243C6859C475427D16_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_5, L_6, NULL);
		((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___L = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___L), (void*)L_5);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___L;
		NullCheck(L_7);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___L;
		BigInteger_tD3004FF5AC7AF0FD0BD7CCB0BCA092DD19453E12* L_9;
		L_9 = Nat_ToBigInteger_mBC1B7ABADB999C0D597C8989D1F974A8029F7B5C(((int32_t)(((RuntimeArray*)L_7)->max_length)), L_8, NULL);
		((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___N = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___N), (void*)L_9);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = L_10;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_12 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____E3B4E767F318263A8E7A64E1D61F6D3368A3B59AF34CBB94E657E7FCC58F5BA5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_11, L_12, NULL);
		((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___B_x = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___B_x), (void*)L_11);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = L_13;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_15 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____120918433B634757ADE589703127976B7C5C2009E8DB37632123F45FA2B87F2E_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_14, L_15, NULL);
		((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___B_y = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___B_y), (void*)L_14);
		RuntimeObject* L_16 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_16, NULL);
		((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompLock = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompLock), (void*)L_16);
		((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBaseTable = (PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBaseTable), (void*)(PointExtU5BU5D_tD13821DE7C1D84124FF7C8824E69938C5FEED5E7*)NULL);
		((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBase = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_StaticFields*)il2cpp_codegen_static_fields_for(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var))->___precompBase), (void*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointExt__ctor_m97C9A86D0FB34EDB66C2E5A4EBFC4A99C4D14EA7 (PointExt_t74359B6474559DBE09E7E709CE85F580EC93E79D* __this, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		__this->___x = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x), (void*)L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		__this->___y = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___y), (void*)L_1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2;
		L_2 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		__this->___z = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___z), (void*)L_2);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointPrecomp__ctor_m3B237EFDABECABABE666EC66DA1B9C243C0F0F6A (PointPrecomp_tD0620BA3983818CCC2B2B6FDAD42D09730CBE71E* __this, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		__this->___x = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___x), (void*)L_0);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		__this->___y = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___y), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X25519_CalculateAgreement_m197EB356886D0400570BE2496CF304403A3FC973 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_u, int32_t ___3_uOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_r, int32_t ___5_rOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_k;
		int32_t L_1 = ___1_kOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_u;
		int32_t L_3 = ___3_uOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___4_r;
		int32_t L_5 = ___5_rOff;
		X25519_ScalarMult_mD1D258825B551FD0FABF718C1356BB1D9C266076(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___4_r;
		int32_t L_7 = ___5_rOff;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Arrays_AreAllZeroes_m00EDC1A86815A2606AFBC1CDEEF443194E64A3B6(L_6, L_7, ((int32_t)32), NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t X25519_Decode32_m461D780F4D502F115CCBC00A75FA5BEE0B38C30B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bs;
		int32_t L_1 = ___1_off;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_bs;
		int32_t L_5 = ___1_off;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		___1_off = L_6;
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_bs;
		int32_t L_10 = ___1_off;
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		___1_off = L_11;
		NullCheck(L_9);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_bs;
		int32_t L_15 = ___1_off;
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		___1_off = L_16;
		NullCheck(L_14);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_8<<8))))|((int32_t)((int32_t)L_13<<((int32_t)16)))))|((int32_t)((int32_t)L_18<<((int32_t)24)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519_DecodeScalar_m54E16A3AFCA8DFA7AA85A9D1C79F02DF37B004D4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_n, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___2_n;
		int32_t L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_k;
		int32_t L_3 = ___1_kOff;
		int32_t L_4 = V_0;
		uint32_t L_5;
		L_5 = X25519_Decode32_m461D780F4D502F115CCBC00A75FA5BEE0B38C30B(L_2, ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)il2cpp_codegen_multiply(L_4, 4)))), NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)L_5);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0016:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)8)))
		{
			goto IL_0004;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_n;
		NullCheck(L_8);
		uint32_t* L_9 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_10 = *((uint32_t*)L_9);
		*((int32_t*)L_9) = (int32_t)((int32_t)(L_10&((int32_t)-8)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___2_n;
		NullCheck(L_11);
		uint32_t* L_12 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(7)));
		int32_t L_13 = *((uint32_t*)L_12);
		*((int32_t*)L_12) = (int32_t)((int32_t)(L_13&((int32_t)2147483647LL)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___2_n;
		NullCheck(L_14);
		uint32_t* L_15 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(7)));
		int32_t L_16 = *((uint32_t*)L_15);
		*((int32_t*)L_15) = (int32_t)((int32_t)(L_16|((int32_t)1073741824)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519_GeneratePrivateKey_mE0172D3CF0B43A8ECF113FECE283BB768DC96C7E (SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___0_random, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_k, const RuntimeMethod* method) 
{
	{
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_0 = ___0_random;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_k;
		NullCheck(L_0);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, L_0, L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_k;
		NullCheck(L_2);
		uint8_t* L_3 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_4 = *((uint8_t*)L_3);
		*((int8_t*)L_3) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_4&((int32_t)248))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___1_k;
		NullCheck(L_5);
		uint8_t* L_6 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)31))));
		int32_t L_7 = *((uint8_t*)L_6);
		*((int8_t*)L_6) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_7&((int32_t)127))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___1_k;
		NullCheck(L_8);
		uint8_t* L_9 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)31))));
		int32_t L_10 = *((uint8_t*)L_9);
		*((int8_t*)L_9) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_10|((int32_t)64))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519_GeneratePublicKey_m4F68545EEC487CBD41259CAD2ABB794DE35C079D (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_r, int32_t ___3_rOff, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_k;
		int32_t L_1 = ___1_kOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_r;
		int32_t L_3 = ___3_rOff;
		X25519_ScalarMultBase_mA340AF7921631C7515B38E5A536377725A319CB7(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519_PointDouble_m0AF75B9E42787C3A36229DD1B078D7AC168C1659 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_z, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___1_z;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_1;
		X25519Field_Apm_mED3BE5EB432FD54561DA0B00D84840E0C430FCD3(L_2, L_3, L_4, L_5, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		X25519Field_Sqr_mB15CC5A9D9BB357C43A061B60BD2E274903C2FB7(L_6, L_7, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		X25519Field_Sqr_mB15CC5A9D9BB357C43A061B60BD2E274903C2FB7(L_8, L_9, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___0_x;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_10, L_11, L_12, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_0;
		X25519Field_Sub_m7A0E1334ECDDFC850F079F15D60D17CDF84313E6(L_13, L_14, L_15, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = ___1_z;
		X25519Field_Mul_mFA884789DDB885762BA615284647CBFD5DB73338(L_16, ((int32_t)121666), L_17, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ___1_z;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = ___1_z;
		X25519Field_Add_mE42245EE0D3016DCB819BF463F2580247E7FA54E(L_18, L_19, L_20, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = ___1_z;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = ___1_z;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_21, L_22, L_23, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519_Precompute_m1653A2AC544C0B0C201CE373E5D99E0D9A022CB0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_Precompute_m169AF523C0ADDECB5E529B628BFEC72875662325(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519_ScalarMult_mD1D258825B551FD0FABF718C1356BB1D9C266076 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_u, int32_t ___3_uOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_r, int32_t ___5_rOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)8);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_k;
		int32_t L_2 = ___1_kOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		X25519_DecodeScalar_m54E16A3AFCA8DFA7AA85A9D1C79F02DF37B004D4(L_1, L_2, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4;
		L_4 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___2_u;
		int32_t L_6 = ___3_uOff;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		X25519Field_Decode_m8FE40BFDE568A070AEC52DF8F87617C656DFA758(L_5, L_6, L_7, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8;
		L_8 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_2 = L_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_2;
		X25519Field_Copy_mAF5DAED0CB27202F9F5E0E7EB8DEAE12F379F5CD(L_9, 0, L_10, 0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_3 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_3;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13;
		L_13 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_4 = L_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_4;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15;
		L_15 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_5 = L_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16;
		L_16 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_6 = L_16;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17;
		L_17 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_7 = L_17;
		V_8 = ((int32_t)254);
		V_9 = 1;
	}

IL_0061:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_4;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Apm_mED3BE5EB432FD54561DA0B00D84840E0C430FCD3(L_18, L_19, L_20, L_21, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_2;
		X25519Field_Apm_mED3BE5EB432FD54561DA0B00D84840E0C430FCD3(L_22, L_23, L_24, L_25, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_6;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_26, L_27, L_28, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_4;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_29, L_30, L_31, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_5;
		X25519Field_Sqr_mB15CC5A9D9BB357C43A061B60BD2E274903C2FB7(L_32, L_33, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_2;
		X25519Field_Sqr_mB15CC5A9D9BB357C43A061B60BD2E274903C2FB7(L_34, L_35, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = V_7;
		X25519Field_Sub_m7A0E1334ECDDFC850F079F15D60D17CDF84313E6(L_36, L_37, L_38, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_3;
		X25519Field_Mul_mFA884789DDB885762BA615284647CBFD5DB73338(L_39, ((int32_t)121666), L_40, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_3;
		X25519Field_Add_mE42245EE0D3016DCB819BF463F2580247E7FA54E(L_41, L_42, L_43, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_3;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_44, L_45, L_46, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = V_2;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_47, L_48, L_49, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_5;
		X25519Field_Apm_mED3BE5EB432FD54561DA0B00D84840E0C430FCD3(L_50, L_51, L_52, L_53, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_4;
		X25519Field_Sqr_mB15CC5A9D9BB357C43A061B60BD2E274903C2FB7(L_54, L_55, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = V_5;
		X25519Field_Sqr_mB15CC5A9D9BB357C43A061B60BD2E274903C2FB7(L_56, L_57, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_5;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_58, L_59, L_60, NULL);
		int32_t L_61 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_61, 1));
		int32_t L_62 = V_8;
		V_10 = ((int32_t)(L_62>>5));
		int32_t L_63 = V_8;
		V_11 = ((int32_t)(L_63&((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = V_0;
		int32_t L_65 = V_10;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		uint32_t L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		int32_t L_68 = V_11;
		V_12 = ((int32_t)(((int32_t)((uint32_t)L_67>>((int32_t)(L_68&((int32_t)31)))))&1));
		int32_t L_69 = V_9;
		int32_t L_70 = V_12;
		V_9 = ((int32_t)(L_69^L_70));
		int32_t L_71 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_73 = V_4;
		X25519Field_CSwap_mDBC8D645062A0E07EAFF97F6606E669FCFBB595E(L_71, L_72, L_73, NULL);
		int32_t L_74 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_75 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = V_5;
		X25519Field_CSwap_mDBC8D645062A0E07EAFF97F6606E669FCFBB595E(L_74, L_75, L_76, NULL);
		int32_t L_77 = V_12;
		V_9 = L_77;
		int32_t L_78 = V_8;
		if ((((int32_t)L_78) >= ((int32_t)3)))
		{
			goto IL_0061;
		}
	}
	{
		V_13 = 0;
		goto IL_0151;
	}

IL_0144:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = V_3;
		X25519_PointDouble_m0AF75B9E42787C3A36229DD1B078D7AC168C1659(L_79, L_80, NULL);
		int32_t L_81 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_81, 1));
	}

IL_0151:
	{
		int32_t L_82 = V_13;
		if ((((int32_t)L_82) < ((int32_t)3)))
		{
			goto IL_0144;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = V_3;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Inv_mC9A09236B1DCBCFE7255DEA4A0F25A774F96009A(L_83, L_84, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_85 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_86 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_87 = V_2;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_85, L_86, L_87, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = V_2;
		X25519Field_Normalize_mC463C8BA74C0B150F40EAD612A70018C755CE6F3(L_88, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = ___4_r;
		int32_t L_91 = ___5_rOff;
		X25519Field_Encode_m2B9C76CDD5B01A1661088FA691F5876A8FA0478A(L_89, L_90, L_91, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519_ScalarMultBase_mA340AF7921631C7515B38E5A536377725A319CB7 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_r, int32_t ___3_rOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_1 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_k;
		int32_t L_3 = ___1_kOff;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Ed25519_tD7C5BAEE3D0E2BEE0C397365E23C635BED90917E_il2cpp_TypeInfo_var);
		Ed25519_ScalarMultBaseYZ_mE90C09BD92A2C957973B7D5321D60279FB28B7BB(L_2, L_3, L_4, L_5, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_1;
		X25519Field_Apm_mED3BE5EB432FD54561DA0B00D84840E0C430FCD3(L_6, L_7, L_8, L_9, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_1;
		X25519Field_Inv_mC9A09236B1DCBCFE7255DEA4A0F25A774F96009A(L_10, L_11, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_0;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_12, L_13, L_14, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_0;
		X25519Field_Normalize_mC463C8BA74C0B150F40EAD612A70018C755CE6F3(L_15, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___2_r;
		int32_t L_18 = ___3_rOff;
		X25519Field_Encode_m2B9C76CDD5B01A1661088FA691F5876A8FA0478A(L_16, L_17, L_18, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519__ctor_mD5ACD2E31526CE92692C549AE1BD5141FA7AD129 (X25519_t9D382833FD73D107C6463A8431850F172600F997* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field__ctor_m9AF4BD4682613E4699C2117F3E8A9B4B7E2083CC (X25519Field_t140C9A98182383D32387BD3259E304F952D5044B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Add_mE42245EE0D3016DCB819BF463F2580247E7FA54E (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_y, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0012;
	}

IL_0004:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___2_z;
		int32_t L_1 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_x;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___1_y;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (int32_t)((int32_t)il2cpp_codegen_add(L_5, L_9)));
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0012:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)10))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_AddOne_m8F5B49ECFC615CC1BE807805DABC3AE3C54843F0 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_z, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_z;
		NullCheck(L_0);
		int32_t* L_1 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_2 = *((int32_t*)L_1);
		*((int32_t*)L_1) = (int32_t)((int32_t)il2cpp_codegen_add(L_2, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_AddOne_mEC702B52C3A0A1BEDB979795BD3DFFC94E94C0B0 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_z, int32_t ___1_zOff, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_z;
		int32_t L_1 = ___1_zOff;
		NullCheck(L_0);
		int32_t* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)));
		int32_t L_3 = *((int32_t*)L_2);
		*((int32_t*)L_2) = (int32_t)((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Apm_mED3BE5EB432FD54561DA0B00D84840E0C430FCD3 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_y, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_zp, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_zm, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		goto IL_001c;
	}

IL_0004:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_x;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_1 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___1_y;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___2_zp;
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (int32_t)((int32_t)il2cpp_codegen_add(L_10, L_11)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___3_zm;
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		int32_t L_15 = V_2;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (int32_t)((int32_t)il2cpp_codegen_subtract(L_14, L_15)));
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_001c:
	{
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)10))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Carry_m273213E66F2AA33F5C77CFD69C9E6D6F86E729F2 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_z, const RuntimeMethod* method) 
{
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
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_z;
		NullCheck(L_0);
		int32_t L_1 = 0;
		int32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___0_z;
		NullCheck(L_3);
		int32_t L_4 = 1;
		int32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___0_z;
		NullCheck(L_6);
		int32_t L_7 = 2;
		int32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___0_z;
		NullCheck(L_9);
		int32_t L_10 = 3;
		int32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___0_z;
		NullCheck(L_12);
		int32_t L_13 = 4;
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = ___0_z;
		NullCheck(L_15);
		int32_t L_16 = 5;
		int32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ___0_z;
		NullCheck(L_18);
		int32_t L_19 = 6;
		int32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = ___0_z;
		NullCheck(L_21);
		int32_t L_22 = 7;
		int32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_7 = L_23;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = ___0_z;
		NullCheck(L_24);
		int32_t L_25 = 8;
		int32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_8 = L_26;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = ___0_z;
		NullCheck(L_27);
		int32_t L_28 = ((int32_t)9);
		int32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_9 = L_29;
		int32_t L_30 = V_2;
		int32_t L_31 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_30, ((int32_t)(L_31>>((int32_t)26)))));
		int32_t L_32 = V_1;
		V_1 = ((int32_t)(L_32&((int32_t)67108863)));
		int32_t L_33 = V_4;
		int32_t L_34 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, ((int32_t)(L_34>>((int32_t)26)))));
		int32_t L_35 = V_3;
		V_3 = ((int32_t)(L_35&((int32_t)67108863)));
		int32_t L_36 = V_7;
		int32_t L_37 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_add(L_36, ((int32_t)(L_37>>((int32_t)26)))));
		int32_t L_38 = V_6;
		V_6 = ((int32_t)(L_38&((int32_t)67108863)));
		int32_t L_39 = V_9;
		int32_t L_40 = V_8;
		V_9 = ((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(L_40>>((int32_t)26)))));
		int32_t L_41 = V_8;
		V_8 = ((int32_t)(L_41&((int32_t)67108863)));
		int32_t L_42 = V_3;
		int32_t L_43 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_42, ((int32_t)(L_43>>((int32_t)25)))));
		int32_t L_44 = V_2;
		V_2 = ((int32_t)(L_44&((int32_t)33554431)));
		int32_t L_45 = V_5;
		int32_t L_46 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_add(L_45, ((int32_t)(L_46>>((int32_t)25)))));
		int32_t L_47 = V_4;
		V_4 = ((int32_t)(L_47&((int32_t)33554431)));
		int32_t L_48 = V_8;
		int32_t L_49 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_add(L_48, ((int32_t)(L_49>>((int32_t)25)))));
		int32_t L_50 = V_7;
		V_7 = ((int32_t)(L_50&((int32_t)33554431)));
		int32_t L_51 = V_0;
		int32_t L_52 = V_9;
		V_0 = ((int32_t)il2cpp_codegen_add(L_51, ((int32_t)il2cpp_codegen_multiply(((int32_t)(L_52>>((int32_t)25))), ((int32_t)38)))));
		int32_t L_53 = V_9;
		V_9 = ((int32_t)(L_53&((int32_t)33554431)));
		int32_t L_54 = V_1;
		int32_t L_55 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_54, ((int32_t)(L_55>>((int32_t)26)))));
		int32_t L_56 = V_0;
		V_0 = ((int32_t)(L_56&((int32_t)67108863)));
		int32_t L_57 = V_6;
		int32_t L_58 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add(L_57, ((int32_t)(L_58>>((int32_t)26)))));
		int32_t L_59 = V_5;
		V_5 = ((int32_t)(L_59&((int32_t)67108863)));
		int32_t L_60 = V_2;
		int32_t L_61 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_60, ((int32_t)(L_61>>((int32_t)26)))));
		int32_t L_62 = V_1;
		V_1 = ((int32_t)(L_62&((int32_t)67108863)));
		int32_t L_63 = V_4;
		int32_t L_64 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(L_63, ((int32_t)(L_64>>((int32_t)26)))));
		int32_t L_65 = V_3;
		V_3 = ((int32_t)(L_65&((int32_t)67108863)));
		int32_t L_66 = V_7;
		int32_t L_67 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_add(L_66, ((int32_t)(L_67>>((int32_t)26)))));
		int32_t L_68 = V_6;
		V_6 = ((int32_t)(L_68&((int32_t)67108863)));
		int32_t L_69 = V_9;
		int32_t L_70 = V_8;
		V_9 = ((int32_t)il2cpp_codegen_add(L_69, ((int32_t)(L_70>>((int32_t)26)))));
		int32_t L_71 = V_8;
		V_8 = ((int32_t)(L_71&((int32_t)67108863)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_72 = ___0_z;
		int32_t L_73 = V_0;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_73);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = ___0_z;
		int32_t L_75 = V_1;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_75);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_76 = ___0_z;
		int32_t L_77 = V_2;
		NullCheck(L_76);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_77);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_78 = ___0_z;
		int32_t L_79 = V_3;
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)L_79);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = ___0_z;
		int32_t L_81 = V_4;
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)L_81);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_82 = ___0_z;
		int32_t L_83 = V_5;
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)L_83);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = ___0_z;
		int32_t L_85 = V_6;
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(6), (int32_t)L_85);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_86 = ___0_z;
		int32_t L_87 = V_7;
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(7), (int32_t)L_87);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_88 = ___0_z;
		int32_t L_89 = V_8;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(8), (int32_t)L_89);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_90 = ___0_z;
		int32_t L_91 = V_9;
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (int32_t)L_91);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_CMov_m274890DC42E9AFAD3A0287FBBF78399174C8B8FB (int32_t ___0_cond, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_x, int32_t ___2_xOff, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___3_z, int32_t ___4_zOff, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		goto IL_0024;
	}

IL_0004:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___3_z;
		int32_t L_1 = ___4_zOff;
		int32_t L_2 = V_0;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		int32_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___1_x;
		int32_t L_7 = ___2_xOff;
		int32_t L_8 = V_0;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		int32_t L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = ((int32_t)(L_5^L_10));
		int32_t L_11 = V_1;
		int32_t L_12 = V_2;
		int32_t L_13 = ___0_cond;
		V_1 = ((int32_t)(L_11^((int32_t)(L_12&L_13))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = ___3_z;
		int32_t L_15 = ___4_zOff;
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_15, L_16))), (int32_t)L_17);
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0024:
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)10))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_CNegate_m5357302A53AB2967D26307DA225025AFD2F04AA3 (int32_t ___0_negate, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_z, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_negate;
		V_0 = ((int32_t)il2cpp_codegen_subtract(0, L_0));
		V_1 = 0;
		goto IL_0016;
	}

IL_0008:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___1_z;
		int32_t L_2 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___1_z;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7 = V_0;
		int32_t L_8 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(L_6^L_7)), L_8)));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0016:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)10))))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Copy_mAF5DAED0CB27202F9F5E0E7EB8DEAE12F379F5CD (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, int32_t ___1_xOff, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0012;
	}

IL_0004:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___2_z;
		int32_t L_1 = ___3_zOff;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___0_x;
		int32_t L_4 = ___1_xOff;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (int32_t)L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0012:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)10))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* X25519Field_CreateTable_m2DD0855EB5E62B41F414C3AF2D6A0A9484FCD594 (int32_t ___0_n, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_n;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)10), L_0)));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_CSwap_mDBC8D645062A0E07EAFF97F6606E669FCFBB595E (int32_t ___0_swap, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_a, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___0_swap;
		V_0 = ((int32_t)il2cpp_codegen_subtract(0, L_0));
		V_1 = 0;
		goto IL_0029;
	}

IL_0008:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___1_a;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___2_b;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		int32_t L_9 = V_0;
		int32_t L_10 = V_2;
		int32_t L_11 = V_3;
		V_4 = ((int32_t)(L_9&((int32_t)(L_10^L_11))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___1_a;
		int32_t L_13 = V_1;
		int32_t L_14 = V_2;
		int32_t L_15 = V_4;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (int32_t)((int32_t)(L_14^L_15)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ___2_b;
		int32_t L_17 = V_1;
		int32_t L_18 = V_3;
		int32_t L_19 = V_4;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (int32_t)((int32_t)(L_18^L_19)));
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0029:
	{
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)10))))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Decode_m8FE40BFDE568A070AEC52DF8F87617C656DFA758 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_x, int32_t ___1_xOff, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_x;
		int32_t L_1 = ___1_xOff;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___2_z;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Decode128_mDA03236C56BA01D7F541A1EB1F3F06B31BACDDE2(L_0, L_1, L_2, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_x;
		int32_t L_4 = ___1_xOff;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___2_z;
		X25519Field_Decode128_mDA03236C56BA01D7F541A1EB1F3F06B31BACDDE2(L_3, ((int32_t)il2cpp_codegen_add(L_4, ((int32_t)16))), L_5, 5, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___2_z;
		NullCheck(L_6);
		int32_t* L_7 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)9))));
		int32_t L_8 = *((int32_t*)L_7);
		*((int32_t*)L_7) = (int32_t)((int32_t)(L_8&((int32_t)16777215)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Decode128_mDA03236C56BA01D7F541A1EB1F3F06B31BACDDE2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bs;
		int32_t L_1 = ___1_off;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		uint32_t L_2;
		L_2 = X25519Field_Decode32_mA07EE8A6AE8090C0DFBEED7305348C22B017733B(L_0, L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_bs;
		int32_t L_4 = ___1_off;
		uint32_t L_5;
		L_5 = X25519Field_Decode32_mA07EE8A6AE8090C0DFBEED7305348C22B017733B(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		V_1 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_bs;
		int32_t L_7 = ___1_off;
		uint32_t L_8;
		L_8 = X25519Field_Decode32_mA07EE8A6AE8090C0DFBEED7305348C22B017733B(L_6, ((int32_t)il2cpp_codegen_add(L_7, 8)), NULL);
		V_2 = L_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_bs;
		int32_t L_10 = ___1_off;
		uint32_t L_11;
		L_11 = X25519Field_Decode32_mA07EE8A6AE8090C0DFBEED7305348C22B017733B(L_9, ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)12))), NULL);
		V_3 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___2_z;
		int32_t L_13 = ___3_zOff;
		uint32_t L_14 = V_0;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (int32_t)((int32_t)((int32_t)L_14&((int32_t)67108863))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = ___2_z;
		int32_t L_16 = ___3_zOff;
		uint32_t L_17 = V_1;
		uint32_t L_18 = V_0;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_16, 1))), (int32_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_17<<6))|((int32_t)((uint32_t)L_18>>((int32_t)26)))))&((int32_t)67108863))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = ___2_z;
		int32_t L_20 = ___3_zOff;
		uint32_t L_21 = V_2;
		uint32_t L_22 = V_1;
		NullCheck(L_19);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_20, 2))), (int32_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_21<<((int32_t)12)))|((int32_t)((uint32_t)L_22>>((int32_t)20)))))&((int32_t)33554431))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = ___2_z;
		int32_t L_24 = ___3_zOff;
		uint32_t L_25 = V_3;
		uint32_t L_26 = V_2;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_24, 3))), (int32_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_25<<((int32_t)19)))|((int32_t)((uint32_t)L_26>>((int32_t)13)))))&((int32_t)67108863))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = ___2_z;
		int32_t L_28 = ___3_zOff;
		uint32_t L_29 = V_3;
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_28, 4))), (int32_t)((int32_t)((uint32_t)L_29>>7)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t X25519Field_Decode32_mA07EE8A6AE8090C0DFBEED7305348C22B017733B (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bs;
		int32_t L_1 = ___1_off;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_bs;
		int32_t L_5 = ___1_off;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		___1_off = L_6;
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_bs;
		int32_t L_10 = ___1_off;
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		___1_off = L_11;
		NullCheck(L_9);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_bs;
		int32_t L_15 = ___1_off;
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		___1_off = L_16;
		NullCheck(L_14);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_8<<8))))|((int32_t)((int32_t)L_13<<((int32_t)16)))))|((int32_t)((int32_t)L_18<<((int32_t)24)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Encode_m2B9C76CDD5B01A1661088FA691F5876A8FA0478A (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_z, int32_t ___2_zOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_z;
		int32_t L_2 = ___2_zOff;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Encode128_m5E7109300D7A38491C55A529F44B32609B6773BD(L_0, 0, L_1, L_2, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___0_x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_z;
		int32_t L_5 = ___2_zOff;
		X25519Field_Encode128_m5E7109300D7A38491C55A529F44B32609B6773BD(L_3, 5, L_4, ((int32_t)il2cpp_codegen_add(L_5, ((int32_t)16))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Encode128_m5E7109300D7A38491C55A529F44B32609B6773BD (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, int32_t ___1_xOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_bs, int32_t ___3_off, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_x;
		int32_t L_1 = ___1_xOff;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___0_x;
		int32_t L_5 = ___1_xOff;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___0_x;
		int32_t L_9 = ___1_xOff;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 2));
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_1 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___0_x;
		int32_t L_13 = ___1_xOff;
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, 3));
		int32_t L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_2 = L_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ___0_x;
		int32_t L_17 = ___1_xOff;
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)il2cpp_codegen_add(L_17, 4));
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = L_19;
		uint32_t L_20 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___2_bs;
		int32_t L_22 = ___3_off;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Encode32_m85E4ECF05749041669F8C55862B917DE5162E6EF(((int32_t)(L_3|((int32_t)((int32_t)L_20<<((int32_t)26))))), L_21, L_22, NULL);
		uint32_t L_23 = V_0;
		uint32_t L_24 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ___2_bs;
		int32_t L_26 = ___3_off;
		X25519Field_Encode32_m85E4ECF05749041669F8C55862B917DE5162E6EF(((int32_t)(((int32_t)((uint32_t)L_23>>6))|((int32_t)((int32_t)L_24<<((int32_t)20))))), L_25, ((int32_t)il2cpp_codegen_add(L_26, 4)), NULL);
		uint32_t L_27 = V_1;
		uint32_t L_28 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = ___2_bs;
		int32_t L_30 = ___3_off;
		X25519Field_Encode32_m85E4ECF05749041669F8C55862B917DE5162E6EF(((int32_t)(((int32_t)((uint32_t)L_27>>((int32_t)12)))|((int32_t)((int32_t)L_28<<((int32_t)13))))), L_29, ((int32_t)il2cpp_codegen_add(L_30, 8)), NULL);
		uint32_t L_31 = V_2;
		uint32_t L_32 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = ___2_bs;
		int32_t L_34 = ___3_off;
		X25519Field_Encode32_m85E4ECF05749041669F8C55862B917DE5162E6EF(((int32_t)(((int32_t)((uint32_t)L_31>>((int32_t)19)))|((int32_t)((int32_t)L_32<<7)))), L_33, ((int32_t)il2cpp_codegen_add(L_34, ((int32_t)12))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Encode32_m85E4ECF05749041669F8C55862B917DE5162E6EF (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_bs;
		int32_t L_1 = ___2_off;
		uint32_t L_2 = ___0_n;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_bs;
		int32_t L_4 = ___2_off;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		___2_off = L_5;
		uint32_t L_6 = ___0_n;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_6>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___1_bs;
		int32_t L_8 = ___2_off;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		___2_off = L_9;
		uint32_t L_10 = ___0_n;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___1_bs;
		int32_t L_12 = ___2_off;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		___2_off = L_13;
		uint32_t L_14 = ___0_n;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_14>>((int32_t)24)))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Inv_mC9A09236B1DCBCFE7255DEA4A0F25A774F96009A (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_z, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_1;
		X25519Field_PowPm5d8_mCAFE9FBEC6C78E9A249A5A95148A5A883D365ADD(L_2, L_3, L_4, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_1;
		X25519Field_Sqr_mC9D04D6107FEA13858E92BD10BAAB68EF5B2A070(L_5, 3, L_6, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___1_z;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_7, L_8, L_9, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X25519Field_IsZero_m8384BE3A2D74A8463872015C1F229DBD4F41C6A5 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0010;
	}

IL_0006:
	{
		int32_t L_0 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___0_x;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = ((int32_t)(L_0|L_4));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0010:
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)10))))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_0;
		V_0 = ((int32_t)(L_7|((int32_t)(L_8>>((int32_t)16)))));
		int32_t L_9 = V_0;
		V_0 = ((int32_t)(L_9&((int32_t)65535)));
		int32_t L_10 = V_0;
		return ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_10, 1))>>((int32_t)31)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X25519Field_IsZeroVar_mD08CBF5E1DD41999EF24651979F12D82861B6F40 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_x;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = X25519Field_IsZero_m8384BE3A2D74A8463872015C1F229DBD4F41C6A5(L_0, NULL);
		return (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Mul_mFA884789DDB885762BA615284647CBFD5DB73338 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, int32_t ___1_y, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, const RuntimeMethod* method) 
{
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
	int64_t V_10 = 0;
	int64_t V_11 = 0;
	int64_t V_12 = 0;
	int64_t V_13 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		int32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___0_x;
		NullCheck(L_3);
		int32_t L_4 = 1;
		int32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___0_x;
		NullCheck(L_6);
		int32_t L_7 = 2;
		int32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___0_x;
		NullCheck(L_9);
		int32_t L_10 = 3;
		int32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___0_x;
		NullCheck(L_12);
		int32_t L_13 = 4;
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = ___0_x;
		NullCheck(L_15);
		int32_t L_16 = 5;
		int32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ___0_x;
		NullCheck(L_18);
		int32_t L_19 = 6;
		int32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 7;
		int32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_7 = L_23;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = ___0_x;
		NullCheck(L_24);
		int32_t L_25 = 8;
		int32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_8 = L_26;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = ___0_x;
		NullCheck(L_27);
		int32_t L_28 = ((int32_t)9);
		int32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_9 = L_29;
		int32_t L_30 = V_2;
		int32_t L_31 = ___1_y;
		V_10 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_30), ((int64_t)L_31)));
		int64_t L_32 = V_10;
		V_2 = ((int32_t)(((int32_t)L_32)&((int32_t)33554431)));
		int64_t L_33 = V_10;
		V_10 = ((int64_t)(L_33>>((int32_t)25)));
		int32_t L_34 = V_4;
		int32_t L_35 = ___1_y;
		V_11 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_34), ((int64_t)L_35)));
		int64_t L_36 = V_11;
		V_4 = ((int32_t)(((int32_t)L_36)&((int32_t)33554431)));
		int64_t L_37 = V_11;
		V_11 = ((int64_t)(L_37>>((int32_t)25)));
		int32_t L_38 = V_7;
		int32_t L_39 = ___1_y;
		V_12 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_38), ((int64_t)L_39)));
		int64_t L_40 = V_12;
		V_7 = ((int32_t)(((int32_t)L_40)&((int32_t)33554431)));
		int64_t L_41 = V_12;
		V_12 = ((int64_t)(L_41>>((int32_t)25)));
		int32_t L_42 = V_9;
		int32_t L_43 = ___1_y;
		V_13 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_42), ((int64_t)L_43)));
		int64_t L_44 = V_13;
		V_9 = ((int32_t)(((int32_t)L_44)&((int32_t)33554431)));
		int64_t L_45 = V_13;
		V_13 = ((int64_t)(L_45>>((int32_t)25)));
		int64_t L_46 = V_13;
		V_13 = ((int64_t)il2cpp_codegen_multiply(L_46, ((int64_t)((int32_t)38))));
		int64_t L_47 = V_13;
		int32_t L_48 = V_0;
		int32_t L_49 = ___1_y;
		V_13 = ((int64_t)il2cpp_codegen_add(L_47, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_48), ((int64_t)L_49)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = ___2_z;
		int64_t L_51 = V_13;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)(((int32_t)L_51)&((int32_t)67108863))));
		int64_t L_52 = V_13;
		V_13 = ((int64_t)(L_52>>((int32_t)26)));
		int64_t L_53 = V_11;
		int32_t L_54 = V_5;
		int32_t L_55 = ___1_y;
		V_11 = ((int64_t)il2cpp_codegen_add(L_53, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_54), ((int64_t)L_55)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = ___2_z;
		int64_t L_57 = V_11;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)((int32_t)(((int32_t)L_57)&((int32_t)67108863))));
		int64_t L_58 = V_11;
		V_11 = ((int64_t)(L_58>>((int32_t)26)));
		int64_t L_59 = V_13;
		int32_t L_60 = V_1;
		int32_t L_61 = ___1_y;
		V_13 = ((int64_t)il2cpp_codegen_add(L_59, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_60), ((int64_t)L_61)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = ___2_z;
		int64_t L_63 = V_13;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)(((int32_t)L_63)&((int32_t)67108863))));
		int64_t L_64 = V_13;
		V_13 = ((int64_t)(L_64>>((int32_t)26)));
		int64_t L_65 = V_10;
		int32_t L_66 = V_3;
		int32_t L_67 = ___1_y;
		V_10 = ((int64_t)il2cpp_codegen_add(L_65, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_66), ((int64_t)L_67)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = ___2_z;
		int64_t L_69 = V_10;
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)(((int32_t)L_69)&((int32_t)67108863))));
		int64_t L_70 = V_10;
		V_10 = ((int64_t)(L_70>>((int32_t)26)));
		int64_t L_71 = V_11;
		int32_t L_72 = V_6;
		int32_t L_73 = ___1_y;
		V_11 = ((int64_t)il2cpp_codegen_add(L_71, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_72), ((int64_t)L_73)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = ___2_z;
		int64_t L_75 = V_11;
		NullCheck(L_74);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(6), (int32_t)((int32_t)(((int32_t)L_75)&((int32_t)67108863))));
		int64_t L_76 = V_11;
		V_11 = ((int64_t)(L_76>>((int32_t)26)));
		int64_t L_77 = V_12;
		int32_t L_78 = V_8;
		int32_t L_79 = ___1_y;
		V_12 = ((int64_t)il2cpp_codegen_add(L_77, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_78), ((int64_t)L_79)))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_80 = ___2_z;
		int64_t L_81 = V_12;
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(8), (int32_t)((int32_t)(((int32_t)L_81)&((int32_t)67108863))));
		int64_t L_82 = V_12;
		V_12 = ((int64_t)(L_82>>((int32_t)26)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = ___2_z;
		int32_t L_84 = V_2;
		int64_t L_85 = V_13;
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)il2cpp_codegen_add(L_84, ((int32_t)L_85))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_86 = ___2_z;
		int32_t L_87 = V_4;
		int64_t L_88 = V_10;
		NullCheck(L_86);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)((int32_t)il2cpp_codegen_add(L_87, ((int32_t)L_88))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = ___2_z;
		int32_t L_90 = V_7;
		int64_t L_91 = V_11;
		NullCheck(L_89);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(7), (int32_t)((int32_t)il2cpp_codegen_add(L_90, ((int32_t)L_91))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = ___2_z;
		int32_t L_93 = V_9;
		int64_t L_94 = V_12;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (int32_t)((int32_t)il2cpp_codegen_add(L_93, ((int32_t)L_94))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_y, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, const RuntimeMethod* method) 
{
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
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int64_t V_20 = 0;
	int64_t V_21 = 0;
	int64_t V_22 = 0;
	int64_t V_23 = 0;
	int64_t V_24 = 0;
	int64_t V_25 = 0;
	int64_t V_26 = 0;
	int64_t V_27 = 0;
	int64_t V_28 = 0;
	int64_t V_29 = 0;
	int64_t V_30 = 0;
	int64_t V_31 = 0;
	int64_t V_32 = 0;
	int64_t V_33 = 0;
	int64_t V_34 = 0;
	int64_t V_35 = 0;
	int64_t V_36 = 0;
	int64_t V_37 = 0;
	int64_t V_38 = 0;
	int64_t V_39 = 0;
	int64_t V_40 = 0;
	int64_t V_41 = 0;
	int64_t V_42 = 0;
	int64_t V_43 = 0;
	int64_t V_44 = 0;
	int64_t V_45 = 0;
	int64_t V_46 = 0;
	int32_t V_47 = 0;
	int32_t V_48 = 0;
	int64_t V_49 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		int32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___1_y;
		NullCheck(L_3);
		int32_t L_4 = 0;
		int32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___0_x;
		NullCheck(L_6);
		int32_t L_7 = 1;
		int32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___1_y;
		NullCheck(L_9);
		int32_t L_10 = 1;
		int32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___0_x;
		NullCheck(L_12);
		int32_t L_13 = 2;
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = ___1_y;
		NullCheck(L_15);
		int32_t L_16 = 2;
		int32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ___0_x;
		NullCheck(L_18);
		int32_t L_19 = 3;
		int32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = ___1_y;
		NullCheck(L_21);
		int32_t L_22 = 3;
		int32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_7 = L_23;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = ___0_x;
		NullCheck(L_24);
		int32_t L_25 = 4;
		int32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_8 = L_26;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = ___1_y;
		NullCheck(L_27);
		int32_t L_28 = 4;
		int32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_9 = L_29;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = ___0_x;
		NullCheck(L_30);
		int32_t L_31 = 5;
		int32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_10 = L_32;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = ___1_y;
		NullCheck(L_33);
		int32_t L_34 = 5;
		int32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_11 = L_35;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = ___0_x;
		NullCheck(L_36);
		int32_t L_37 = 6;
		int32_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_12 = L_38;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = ___1_y;
		NullCheck(L_39);
		int32_t L_40 = 6;
		int32_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_13 = L_41;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = ___0_x;
		NullCheck(L_42);
		int32_t L_43 = 7;
		int32_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_14 = L_44;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = ___1_y;
		NullCheck(L_45);
		int32_t L_46 = 7;
		int32_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_15 = L_47;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = ___0_x;
		NullCheck(L_48);
		int32_t L_49 = 8;
		int32_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_16 = L_50;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = ___1_y;
		NullCheck(L_51);
		int32_t L_52 = 8;
		int32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_17 = L_53;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = ___0_x;
		NullCheck(L_54);
		int32_t L_55 = ((int32_t)9);
		int32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_18 = L_56;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = ___1_y;
		NullCheck(L_57);
		int32_t L_58 = ((int32_t)9);
		int32_t L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_19 = L_59;
		int32_t L_60 = V_0;
		int32_t L_61 = V_1;
		V_20 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_60), ((int64_t)L_61)));
		int32_t L_62 = V_0;
		int32_t L_63 = V_3;
		int32_t L_64 = V_2;
		int32_t L_65 = V_1;
		V_21 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_62), ((int64_t)L_63))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_64), ((int64_t)L_65)))));
		int32_t L_66 = V_0;
		int32_t L_67 = V_5;
		int32_t L_68 = V_2;
		int32_t L_69 = V_3;
		int32_t L_70 = V_4;
		int32_t L_71 = V_1;
		V_22 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_66), ((int64_t)L_67))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_68), ((int64_t)L_69))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_70), ((int64_t)L_71)))));
		int32_t L_72 = V_2;
		int32_t L_73 = V_5;
		int32_t L_74 = V_4;
		int32_t L_75 = V_3;
		V_23 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_72), ((int64_t)L_73))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_74), ((int64_t)L_75)))));
		int64_t L_76 = V_23;
		V_23 = ((int64_t)(L_76<<1));
		int64_t L_77 = V_23;
		int32_t L_78 = V_0;
		int32_t L_79 = V_7;
		int32_t L_80 = V_6;
		int32_t L_81 = V_1;
		V_23 = ((int64_t)il2cpp_codegen_add(L_77, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_78), ((int64_t)L_79))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_80), ((int64_t)L_81)))))));
		int32_t L_82 = V_4;
		int32_t L_83 = V_5;
		V_24 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_82), ((int64_t)L_83)));
		int64_t L_84 = V_24;
		V_24 = ((int64_t)(L_84<<1));
		int64_t L_85 = V_24;
		int32_t L_86 = V_0;
		int32_t L_87 = V_9;
		int32_t L_88 = V_2;
		int32_t L_89 = V_7;
		int32_t L_90 = V_6;
		int32_t L_91 = V_3;
		int32_t L_92 = V_8;
		int32_t L_93 = V_1;
		V_24 = ((int64_t)il2cpp_codegen_add(L_85, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_86), ((int64_t)L_87))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_88), ((int64_t)L_89))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_90), ((int64_t)L_91))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_92), ((int64_t)L_93)))))));
		int32_t L_94 = V_2;
		int32_t L_95 = V_9;
		int32_t L_96 = V_4;
		int32_t L_97 = V_7;
		int32_t L_98 = V_6;
		int32_t L_99 = V_5;
		int32_t L_100 = V_8;
		int32_t L_101 = V_3;
		V_25 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_94), ((int64_t)L_95))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_96), ((int64_t)L_97))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_98), ((int64_t)L_99))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_100), ((int64_t)L_101)))));
		int64_t L_102 = V_25;
		V_25 = ((int64_t)(L_102<<1));
		int32_t L_103 = V_4;
		int32_t L_104 = V_9;
		int32_t L_105 = V_8;
		int32_t L_106 = V_5;
		V_26 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_103), ((int64_t)L_104))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_105), ((int64_t)L_106)))));
		int64_t L_107 = V_26;
		V_26 = ((int64_t)(L_107<<1));
		int64_t L_108 = V_26;
		int32_t L_109 = V_6;
		int32_t L_110 = V_7;
		V_26 = ((int64_t)il2cpp_codegen_add(L_108, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_109), ((int64_t)L_110)))));
		int32_t L_111 = V_6;
		int32_t L_112 = V_9;
		int32_t L_113 = V_8;
		int32_t L_114 = V_7;
		V_27 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_111), ((int64_t)L_112))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_113), ((int64_t)L_114)))));
		int32_t L_115 = V_8;
		int32_t L_116 = V_9;
		V_28 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_115), ((int64_t)L_116)));
		int64_t L_117 = V_28;
		V_28 = ((int64_t)(L_117<<1));
		int32_t L_118 = V_10;
		int32_t L_119 = V_11;
		V_29 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_118), ((int64_t)L_119)));
		int32_t L_120 = V_10;
		int32_t L_121 = V_13;
		int32_t L_122 = V_12;
		int32_t L_123 = V_11;
		V_30 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_120), ((int64_t)L_121))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_122), ((int64_t)L_123)))));
		int32_t L_124 = V_10;
		int32_t L_125 = V_15;
		int32_t L_126 = V_12;
		int32_t L_127 = V_13;
		int32_t L_128 = V_14;
		int32_t L_129 = V_11;
		V_31 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_124), ((int64_t)L_125))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_126), ((int64_t)L_127))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_128), ((int64_t)L_129)))));
		int32_t L_130 = V_12;
		int32_t L_131 = V_15;
		int32_t L_132 = V_14;
		int32_t L_133 = V_13;
		V_32 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_130), ((int64_t)L_131))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_132), ((int64_t)L_133)))));
		int64_t L_134 = V_32;
		V_32 = ((int64_t)(L_134<<1));
		int64_t L_135 = V_32;
		int32_t L_136 = V_10;
		int32_t L_137 = V_17;
		int32_t L_138 = V_16;
		int32_t L_139 = V_11;
		V_32 = ((int64_t)il2cpp_codegen_add(L_135, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_136), ((int64_t)L_137))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_138), ((int64_t)L_139)))))));
		int32_t L_140 = V_14;
		int32_t L_141 = V_15;
		V_33 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_140), ((int64_t)L_141)));
		int64_t L_142 = V_33;
		V_33 = ((int64_t)(L_142<<1));
		int64_t L_143 = V_33;
		int32_t L_144 = V_10;
		int32_t L_145 = V_19;
		int32_t L_146 = V_12;
		int32_t L_147 = V_17;
		int32_t L_148 = V_16;
		int32_t L_149 = V_13;
		int32_t L_150 = V_18;
		int32_t L_151 = V_11;
		V_33 = ((int64_t)il2cpp_codegen_add(L_143, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_144), ((int64_t)L_145))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_146), ((int64_t)L_147))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_148), ((int64_t)L_149))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_150), ((int64_t)L_151)))))));
		int32_t L_152 = V_12;
		int32_t L_153 = V_19;
		int32_t L_154 = V_14;
		int32_t L_155 = V_17;
		int32_t L_156 = V_16;
		int32_t L_157 = V_15;
		int32_t L_158 = V_18;
		int32_t L_159 = V_13;
		V_34 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_152), ((int64_t)L_153))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_154), ((int64_t)L_155))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_156), ((int64_t)L_157))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_158), ((int64_t)L_159)))));
		int32_t L_160 = V_14;
		int32_t L_161 = V_19;
		int32_t L_162 = V_18;
		int32_t L_163 = V_15;
		V_35 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_160), ((int64_t)L_161))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_162), ((int64_t)L_163)))));
		int64_t L_164 = V_35;
		V_35 = ((int64_t)(L_164<<1));
		int64_t L_165 = V_35;
		int32_t L_166 = V_16;
		int32_t L_167 = V_17;
		V_35 = ((int64_t)il2cpp_codegen_add(L_165, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_166), ((int64_t)L_167)))));
		int32_t L_168 = V_16;
		int32_t L_169 = V_19;
		int32_t L_170 = V_18;
		int32_t L_171 = V_17;
		V_36 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_168), ((int64_t)L_169))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_170), ((int64_t)L_171)))));
		int32_t L_172 = V_18;
		int32_t L_173 = V_19;
		V_37 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_172), ((int64_t)L_173)));
		int64_t L_174 = V_20;
		int64_t L_175 = V_34;
		V_20 = ((int64_t)il2cpp_codegen_subtract(L_174, ((int64_t)il2cpp_codegen_multiply(L_175, ((int64_t)((int32_t)76))))));
		int64_t L_176 = V_21;
		int64_t L_177 = V_35;
		V_21 = ((int64_t)il2cpp_codegen_subtract(L_176, ((int64_t)il2cpp_codegen_multiply(L_177, ((int64_t)((int32_t)38))))));
		int64_t L_178 = V_22;
		int64_t L_179 = V_36;
		V_22 = ((int64_t)il2cpp_codegen_subtract(L_178, ((int64_t)il2cpp_codegen_multiply(L_179, ((int64_t)((int32_t)38))))));
		int64_t L_180 = V_23;
		int64_t L_181 = V_37;
		V_23 = ((int64_t)il2cpp_codegen_subtract(L_180, ((int64_t)il2cpp_codegen_multiply(L_181, ((int64_t)((int32_t)76))))));
		int64_t L_182 = V_25;
		int64_t L_183 = V_29;
		V_25 = ((int64_t)il2cpp_codegen_subtract(L_182, L_183));
		int64_t L_184 = V_26;
		int64_t L_185 = V_30;
		V_26 = ((int64_t)il2cpp_codegen_subtract(L_184, L_185));
		int64_t L_186 = V_27;
		int64_t L_187 = V_31;
		V_27 = ((int64_t)il2cpp_codegen_subtract(L_186, L_187));
		int64_t L_188 = V_28;
		int64_t L_189 = V_32;
		V_28 = ((int64_t)il2cpp_codegen_subtract(L_188, L_189));
		int32_t L_190 = V_0;
		int32_t L_191 = V_10;
		V_0 = ((int32_t)il2cpp_codegen_add(L_190, L_191));
		int32_t L_192 = V_1;
		int32_t L_193 = V_11;
		V_1 = ((int32_t)il2cpp_codegen_add(L_192, L_193));
		int32_t L_194 = V_2;
		int32_t L_195 = V_12;
		V_2 = ((int32_t)il2cpp_codegen_add(L_194, L_195));
		int32_t L_196 = V_3;
		int32_t L_197 = V_13;
		V_3 = ((int32_t)il2cpp_codegen_add(L_196, L_197));
		int32_t L_198 = V_4;
		int32_t L_199 = V_14;
		V_4 = ((int32_t)il2cpp_codegen_add(L_198, L_199));
		int32_t L_200 = V_5;
		int32_t L_201 = V_15;
		V_5 = ((int32_t)il2cpp_codegen_add(L_200, L_201));
		int32_t L_202 = V_6;
		int32_t L_203 = V_16;
		V_6 = ((int32_t)il2cpp_codegen_add(L_202, L_203));
		int32_t L_204 = V_7;
		int32_t L_205 = V_17;
		V_7 = ((int32_t)il2cpp_codegen_add(L_204, L_205));
		int32_t L_206 = V_8;
		int32_t L_207 = V_18;
		V_8 = ((int32_t)il2cpp_codegen_add(L_206, L_207));
		int32_t L_208 = V_9;
		int32_t L_209 = V_19;
		V_9 = ((int32_t)il2cpp_codegen_add(L_208, L_209));
		int32_t L_210 = V_0;
		int32_t L_211 = V_1;
		V_38 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_210), ((int64_t)L_211)));
		int32_t L_212 = V_0;
		int32_t L_213 = V_3;
		int32_t L_214 = V_2;
		int32_t L_215 = V_1;
		V_39 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_212), ((int64_t)L_213))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_214), ((int64_t)L_215)))));
		int32_t L_216 = V_0;
		int32_t L_217 = V_5;
		int32_t L_218 = V_2;
		int32_t L_219 = V_3;
		int32_t L_220 = V_4;
		int32_t L_221 = V_1;
		V_40 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_216), ((int64_t)L_217))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_218), ((int64_t)L_219))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_220), ((int64_t)L_221)))));
		int32_t L_222 = V_2;
		int32_t L_223 = V_5;
		int32_t L_224 = V_4;
		int32_t L_225 = V_3;
		V_41 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_222), ((int64_t)L_223))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_224), ((int64_t)L_225)))));
		int64_t L_226 = V_41;
		V_41 = ((int64_t)(L_226<<1));
		int64_t L_227 = V_41;
		int32_t L_228 = V_0;
		int32_t L_229 = V_7;
		int32_t L_230 = V_6;
		int32_t L_231 = V_1;
		V_41 = ((int64_t)il2cpp_codegen_add(L_227, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_228), ((int64_t)L_229))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_230), ((int64_t)L_231)))))));
		int32_t L_232 = V_4;
		int32_t L_233 = V_5;
		V_42 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_232), ((int64_t)L_233)));
		int64_t L_234 = V_42;
		V_42 = ((int64_t)(L_234<<1));
		int64_t L_235 = V_42;
		int32_t L_236 = V_0;
		int32_t L_237 = V_9;
		int32_t L_238 = V_2;
		int32_t L_239 = V_7;
		int32_t L_240 = V_6;
		int32_t L_241 = V_3;
		int32_t L_242 = V_8;
		int32_t L_243 = V_1;
		V_42 = ((int64_t)il2cpp_codegen_add(L_235, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_236), ((int64_t)L_237))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_238), ((int64_t)L_239))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_240), ((int64_t)L_241))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_242), ((int64_t)L_243)))))));
		int32_t L_244 = V_2;
		int32_t L_245 = V_9;
		int32_t L_246 = V_4;
		int32_t L_247 = V_7;
		int32_t L_248 = V_6;
		int32_t L_249 = V_5;
		int32_t L_250 = V_8;
		int32_t L_251 = V_3;
		V_43 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_244), ((int64_t)L_245))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_246), ((int64_t)L_247))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_248), ((int64_t)L_249))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_250), ((int64_t)L_251)))));
		int64_t L_252 = V_43;
		V_43 = ((int64_t)(L_252<<1));
		int32_t L_253 = V_4;
		int32_t L_254 = V_9;
		int32_t L_255 = V_8;
		int32_t L_256 = V_5;
		V_44 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_253), ((int64_t)L_254))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_255), ((int64_t)L_256)))));
		int64_t L_257 = V_44;
		V_44 = ((int64_t)(L_257<<1));
		int64_t L_258 = V_44;
		int32_t L_259 = V_6;
		int32_t L_260 = V_7;
		V_44 = ((int64_t)il2cpp_codegen_add(L_258, ((int64_t)il2cpp_codegen_multiply(((int64_t)L_259), ((int64_t)L_260)))));
		int32_t L_261 = V_6;
		int32_t L_262 = V_9;
		int32_t L_263 = V_8;
		int32_t L_264 = V_7;
		V_45 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_261), ((int64_t)L_262))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_263), ((int64_t)L_264)))));
		int32_t L_265 = V_8;
		int32_t L_266 = V_9;
		V_46 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_265), ((int64_t)L_266)));
		int64_t L_267 = V_46;
		V_46 = ((int64_t)(L_267<<1));
		int64_t L_268 = V_28;
		int64_t L_269 = V_41;
		int64_t L_270 = V_23;
		V_49 = ((int64_t)il2cpp_codegen_add(L_268, ((int64_t)il2cpp_codegen_subtract(L_269, L_270))));
		int64_t L_271 = V_49;
		V_47 = ((int32_t)(((int32_t)L_271)&((int32_t)67108863)));
		int64_t L_272 = V_49;
		V_49 = ((int64_t)(L_272>>((int32_t)26)));
		int64_t L_273 = V_49;
		int64_t L_274 = V_42;
		int64_t L_275 = V_24;
		int64_t L_276 = V_33;
		V_49 = ((int64_t)il2cpp_codegen_add(L_273, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(L_274, L_275)), L_276))));
		int64_t L_277 = V_49;
		V_48 = ((int32_t)(((int32_t)L_277)&((int32_t)33554431)));
		int64_t L_278 = V_49;
		V_49 = ((int64_t)(L_278>>((int32_t)25)));
		int64_t L_279 = V_20;
		int64_t L_280 = V_49;
		int64_t L_281 = V_43;
		int64_t L_282 = V_25;
		V_49 = ((int64_t)il2cpp_codegen_add(L_279, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(L_280, L_281)), L_282)), ((int64_t)((int32_t)38))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_283 = ___2_z;
		int64_t L_284 = V_49;
		NullCheck(L_283);
		(L_283)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)(((int32_t)L_284)&((int32_t)67108863))));
		int64_t L_285 = V_49;
		V_49 = ((int64_t)(L_285>>((int32_t)26)));
		int64_t L_286 = V_49;
		int64_t L_287 = V_21;
		int64_t L_288 = V_44;
		int64_t L_289 = V_26;
		V_49 = ((int64_t)il2cpp_codegen_add(L_286, ((int64_t)il2cpp_codegen_add(L_287, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_subtract(L_288, L_289)), ((int64_t)((int32_t)38))))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_290 = ___2_z;
		int64_t L_291 = V_49;
		NullCheck(L_290);
		(L_290)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)(((int32_t)L_291)&((int32_t)67108863))));
		int64_t L_292 = V_49;
		V_49 = ((int64_t)(L_292>>((int32_t)26)));
		int64_t L_293 = V_49;
		int64_t L_294 = V_22;
		int64_t L_295 = V_45;
		int64_t L_296 = V_27;
		V_49 = ((int64_t)il2cpp_codegen_add(L_293, ((int64_t)il2cpp_codegen_add(L_294, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_subtract(L_295, L_296)), ((int64_t)((int32_t)38))))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_297 = ___2_z;
		int64_t L_298 = V_49;
		NullCheck(L_297);
		(L_297)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)(((int32_t)L_298)&((int32_t)33554431))));
		int64_t L_299 = V_49;
		V_49 = ((int64_t)(L_299>>((int32_t)25)));
		int64_t L_300 = V_49;
		int64_t L_301 = V_23;
		int64_t L_302 = V_46;
		int64_t L_303 = V_28;
		V_49 = ((int64_t)il2cpp_codegen_add(L_300, ((int64_t)il2cpp_codegen_add(L_301, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_subtract(L_302, L_303)), ((int64_t)((int32_t)38))))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_304 = ___2_z;
		int64_t L_305 = V_49;
		NullCheck(L_304);
		(L_304)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)(((int32_t)L_305)&((int32_t)67108863))));
		int64_t L_306 = V_49;
		V_49 = ((int64_t)(L_306>>((int32_t)26)));
		int64_t L_307 = V_49;
		int64_t L_308 = V_24;
		int64_t L_309 = V_33;
		V_49 = ((int64_t)il2cpp_codegen_add(L_307, ((int64_t)il2cpp_codegen_add(L_308, ((int64_t)il2cpp_codegen_multiply(L_309, ((int64_t)((int32_t)38))))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_310 = ___2_z;
		int64_t L_311 = V_49;
		NullCheck(L_310);
		(L_310)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)((int32_t)(((int32_t)L_311)&((int32_t)33554431))));
		int64_t L_312 = V_49;
		V_49 = ((int64_t)(L_312>>((int32_t)25)));
		int64_t L_313 = V_49;
		int64_t L_314 = V_25;
		int64_t L_315 = V_38;
		int64_t L_316 = V_20;
		V_49 = ((int64_t)il2cpp_codegen_add(L_313, ((int64_t)il2cpp_codegen_add(L_314, ((int64_t)il2cpp_codegen_subtract(L_315, L_316))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_317 = ___2_z;
		int64_t L_318 = V_49;
		NullCheck(L_317);
		(L_317)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)((int32_t)(((int32_t)L_318)&((int32_t)67108863))));
		int64_t L_319 = V_49;
		V_49 = ((int64_t)(L_319>>((int32_t)26)));
		int64_t L_320 = V_49;
		int64_t L_321 = V_26;
		int64_t L_322 = V_39;
		int64_t L_323 = V_21;
		V_49 = ((int64_t)il2cpp_codegen_add(L_320, ((int64_t)il2cpp_codegen_add(L_321, ((int64_t)il2cpp_codegen_subtract(L_322, L_323))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_324 = ___2_z;
		int64_t L_325 = V_49;
		NullCheck(L_324);
		(L_324)->SetAt(static_cast<il2cpp_array_size_t>(6), (int32_t)((int32_t)(((int32_t)L_325)&((int32_t)67108863))));
		int64_t L_326 = V_49;
		V_49 = ((int64_t)(L_326>>((int32_t)26)));
		int64_t L_327 = V_49;
		int64_t L_328 = V_27;
		int64_t L_329 = V_40;
		int64_t L_330 = V_22;
		V_49 = ((int64_t)il2cpp_codegen_add(L_327, ((int64_t)il2cpp_codegen_add(L_328, ((int64_t)il2cpp_codegen_subtract(L_329, L_330))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_331 = ___2_z;
		int64_t L_332 = V_49;
		NullCheck(L_331);
		(L_331)->SetAt(static_cast<il2cpp_array_size_t>(7), (int32_t)((int32_t)(((int32_t)L_332)&((int32_t)33554431))));
		int64_t L_333 = V_49;
		V_49 = ((int64_t)(L_333>>((int32_t)25)));
		int64_t L_334 = V_49;
		int32_t L_335 = V_47;
		V_49 = ((int64_t)il2cpp_codegen_add(L_334, ((int64_t)L_335)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_336 = ___2_z;
		int64_t L_337 = V_49;
		NullCheck(L_336);
		(L_336)->SetAt(static_cast<il2cpp_array_size_t>(8), (int32_t)((int32_t)(((int32_t)L_337)&((int32_t)67108863))));
		int64_t L_338 = V_49;
		V_49 = ((int64_t)(L_338>>((int32_t)26)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_339 = ___2_z;
		int32_t L_340 = V_48;
		int64_t L_341 = V_49;
		NullCheck(L_339);
		(L_339)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (int32_t)((int32_t)il2cpp_codegen_add(L_340, ((int32_t)L_341))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Negate_m079FDC9497D28C7EBF4089A99D06C82A9367B7FB (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_z, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000f;
	}

IL_0004:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___1_z;
		int32_t L_1 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_x;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (int32_t)((-L_5)));
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_000f:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)10))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Normalize_mC463C8BA74C0B150F40EAD612A70018C755CE6F3 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_z, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_z;
		NullCheck(L_0);
		int32_t L_1 = ((int32_t)9);
		int32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = ((int32_t)(((int32_t)(L_2>>((int32_t)23)))&1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___0_z;
		int32_t L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Reduce_m8D5B6C58711997EF80851B436B5932AF6E27EF42(L_3, L_4, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___0_z;
		int32_t L_6 = V_0;
		X25519Field_Reduce_m8D5B6C58711997EF80851B436B5932AF6E27EF42(L_5, ((-L_6)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_One_m1D6D371AFB78F2E955B7A3DD50CCB448114877FF (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_z, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_z;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		V_0 = 1;
		goto IL_0010;
	}

IL_0008:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___0_z;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (int32_t)0);
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0010:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)10))))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_PowPm5d8_mCAFE9FBEC6C78E9A249A5A95148A5A883D365ADD (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_rx2, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_rz, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_5 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_6 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_7 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_8 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_9 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_10 = NULL;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___1_rx2;
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___0_x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Sqr_mB15CC5A9D9BB357C43A061B60BD2E274903C2FB7(L_1, L_2, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___0_x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_0;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_3, L_4, L_5, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6;
		L_6 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_1 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_1;
		X25519Field_Sqr_mB15CC5A9D9BB357C43A061B60BD2E274903C2FB7(L_7, L_8, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___0_x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_1;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_9, L_10, L_11, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_1;
		V_2 = L_12;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_2;
		X25519Field_Sqr_mC9D04D6107FEA13858E92BD10BAAB68EF5B2A070(L_13, 2, L_14, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_2;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_15, L_16, L_17, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18;
		L_18 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_3 = L_18;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_3;
		X25519Field_Sqr_mC9D04D6107FEA13858E92BD10BAAB68EF5B2A070(L_19, 5, L_20, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_3;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_21, L_22, L_23, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24;
		L_24 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_4 = L_24;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_4;
		X25519Field_Sqr_mC9D04D6107FEA13858E92BD10BAAB68EF5B2A070(L_25, 5, L_26, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = V_4;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_27, L_28, L_29, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = V_2;
		V_5 = L_30;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_5;
		X25519Field_Sqr_mC9D04D6107FEA13858E92BD10BAAB68EF5B2A070(L_31, ((int32_t)10), L_32, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_5;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_33, L_34, L_35, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_3;
		V_6 = L_36;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = V_6;
		X25519Field_Sqr_mC9D04D6107FEA13858E92BD10BAAB68EF5B2A070(L_37, ((int32_t)25), L_38, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_6;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_39, L_40, L_41, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = V_4;
		V_7 = L_42;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = V_7;
		X25519Field_Sqr_mC9D04D6107FEA13858E92BD10BAAB68EF5B2A070(L_43, ((int32_t)25), L_44, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_46 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = V_7;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_45, L_46, L_47, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = V_5;
		V_8 = L_48;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = V_8;
		X25519Field_Sqr_mC9D04D6107FEA13858E92BD10BAAB68EF5B2A070(L_49, ((int32_t)50), L_50, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = V_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = V_8;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_51, L_52, L_53, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = V_6;
		V_9 = L_54;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_56 = V_9;
		X25519Field_Sqr_mC9D04D6107FEA13858E92BD10BAAB68EF5B2A070(L_55, ((int32_t)125), L_56, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = V_8;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = V_9;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_57, L_58, L_59, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_8;
		V_10 = L_60;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = V_9;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = V_10;
		X25519Field_Sqr_mC9D04D6107FEA13858E92BD10BAAB68EF5B2A070(L_61, 2, L_62, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_63 = V_10;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = ___0_x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = ___2_rz;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_63, L_64, L_65, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Reduce_m8D5B6C58711997EF80851B436B5932AF6E27EF42 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_z, int32_t ___1_x, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_z;
		NullCheck(L_0);
		int32_t L_1 = ((int32_t)9);
		int32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		int32_t L_3 = L_2;
		V_0 = ((int32_t)(L_3&((int32_t)16777215)));
		int32_t L_4 = ___1_x;
		V_1 = ((int64_t)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)(L_3>>((int32_t)24))), L_4)), ((int32_t)19))));
		int64_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___0_z;
		NullCheck(L_6);
		int32_t L_7 = 0;
		int32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = ((int64_t)il2cpp_codegen_add(L_5, ((int64_t)L_8)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___0_z;
		int64_t L_10 = V_1;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)(((int32_t)L_10)&((int32_t)67108863))));
		int64_t L_11 = V_1;
		V_1 = ((int64_t)(L_11>>((int32_t)26)));
		int64_t L_12 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = ___0_z;
		NullCheck(L_13);
		int32_t L_14 = 1;
		int32_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_1 = ((int64_t)il2cpp_codegen_add(L_12, ((int64_t)L_15)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = ___0_z;
		int64_t L_17 = V_1;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)(((int32_t)L_17)&((int32_t)67108863))));
		int64_t L_18 = V_1;
		V_1 = ((int64_t)(L_18>>((int32_t)26)));
		int64_t L_19 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = ___0_z;
		NullCheck(L_20);
		int32_t L_21 = 2;
		int32_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_1 = ((int64_t)il2cpp_codegen_add(L_19, ((int64_t)L_22)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = ___0_z;
		int64_t L_24 = V_1;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)(((int32_t)L_24)&((int32_t)33554431))));
		int64_t L_25 = V_1;
		V_1 = ((int64_t)(L_25>>((int32_t)25)));
		int64_t L_26 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = ___0_z;
		NullCheck(L_27);
		int32_t L_28 = 3;
		int32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_1 = ((int64_t)il2cpp_codegen_add(L_26, ((int64_t)L_29)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = ___0_z;
		int64_t L_31 = V_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)(((int32_t)L_31)&((int32_t)67108863))));
		int64_t L_32 = V_1;
		V_1 = ((int64_t)(L_32>>((int32_t)26)));
		int64_t L_33 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = ___0_z;
		NullCheck(L_34);
		int32_t L_35 = 4;
		int32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_1 = ((int64_t)il2cpp_codegen_add(L_33, ((int64_t)L_36)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = ___0_z;
		int64_t L_38 = V_1;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)((int32_t)(((int32_t)L_38)&((int32_t)33554431))));
		int64_t L_39 = V_1;
		V_1 = ((int64_t)(L_39>>((int32_t)25)));
		int64_t L_40 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = ___0_z;
		NullCheck(L_41);
		int32_t L_42 = 5;
		int32_t L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_1 = ((int64_t)il2cpp_codegen_add(L_40, ((int64_t)L_43)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = ___0_z;
		int64_t L_45 = V_1;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)((int32_t)(((int32_t)L_45)&((int32_t)67108863))));
		int64_t L_46 = V_1;
		V_1 = ((int64_t)(L_46>>((int32_t)26)));
		int64_t L_47 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_48 = ___0_z;
		NullCheck(L_48);
		int32_t L_49 = 6;
		int32_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_1 = ((int64_t)il2cpp_codegen_add(L_47, ((int64_t)L_50)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_51 = ___0_z;
		int64_t L_52 = V_1;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(6), (int32_t)((int32_t)(((int32_t)L_52)&((int32_t)67108863))));
		int64_t L_53 = V_1;
		V_1 = ((int64_t)(L_53>>((int32_t)26)));
		int64_t L_54 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = ___0_z;
		NullCheck(L_55);
		int32_t L_56 = 7;
		int32_t L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		V_1 = ((int64_t)il2cpp_codegen_add(L_54, ((int64_t)L_57)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = ___0_z;
		int64_t L_59 = V_1;
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(7), (int32_t)((int32_t)(((int32_t)L_59)&((int32_t)33554431))));
		int64_t L_60 = V_1;
		V_1 = ((int64_t)(L_60>>((int32_t)25)));
		int64_t L_61 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_62 = ___0_z;
		NullCheck(L_62);
		int32_t L_63 = 8;
		int32_t L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		V_1 = ((int64_t)il2cpp_codegen_add(L_61, ((int64_t)L_64)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_65 = ___0_z;
		int64_t L_66 = V_1;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(8), (int32_t)((int32_t)(((int32_t)L_66)&((int32_t)67108863))));
		int64_t L_67 = V_1;
		V_1 = ((int64_t)(L_67>>((int32_t)26)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_68 = ___0_z;
		int32_t L_69 = V_0;
		int64_t L_70 = V_1;
		NullCheck(L_68);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (int32_t)((int32_t)il2cpp_codegen_add(L_69, ((int32_t)L_70))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Sqr_mB15CC5A9D9BB357C43A061B60BD2E274903C2FB7 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_z, const RuntimeMethod* method) 
{
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
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int64_t V_13 = 0;
	int64_t V_14 = 0;
	int64_t V_15 = 0;
	int64_t V_16 = 0;
	int64_t V_17 = 0;
	int64_t V_18 = 0;
	int64_t V_19 = 0;
	int64_t V_20 = 0;
	int64_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int64_t V_26 = 0;
	int64_t V_27 = 0;
	int64_t V_28 = 0;
	int64_t V_29 = 0;
	int64_t V_30 = 0;
	int64_t V_31 = 0;
	int64_t V_32 = 0;
	int64_t V_33 = 0;
	int64_t V_34 = 0;
	int64_t V_35 = 0;
	int64_t V_36 = 0;
	int64_t V_37 = 0;
	int64_t V_38 = 0;
	int64_t V_39 = 0;
	int64_t V_40 = 0;
	int64_t V_41 = 0;
	int64_t V_42 = 0;
	int64_t V_43 = 0;
	int32_t V_44 = 0;
	int32_t V_45 = 0;
	int64_t V_46 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		int32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___0_x;
		NullCheck(L_3);
		int32_t L_4 = 1;
		int32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___0_x;
		NullCheck(L_6);
		int32_t L_7 = 2;
		int32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = ___0_x;
		NullCheck(L_9);
		int32_t L_10 = 3;
		int32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = L_11;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = ___0_x;
		NullCheck(L_12);
		int32_t L_13 = 4;
		int32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = L_14;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = ___0_x;
		NullCheck(L_15);
		int32_t L_16 = 5;
		int32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_4 = L_17;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = ___0_x;
		NullCheck(L_18);
		int32_t L_19 = 6;
		int32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_5 = L_20;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 7;
		int32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_6 = L_23;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = ___0_x;
		NullCheck(L_24);
		int32_t L_25 = 8;
		int32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_7 = L_26;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = ___0_x;
		NullCheck(L_27);
		int32_t L_28 = ((int32_t)9);
		int32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_8 = L_29;
		int32_t L_30 = V_1;
		V_9 = ((int32_t)il2cpp_codegen_multiply(L_30, 2));
		int32_t L_31 = L_8;
		V_10 = ((int32_t)il2cpp_codegen_multiply(L_31, 2));
		int32_t L_32 = V_2;
		V_11 = ((int32_t)il2cpp_codegen_multiply(L_32, 2));
		int32_t L_33 = V_3;
		V_12 = ((int32_t)il2cpp_codegen_multiply(L_33, 2));
		int32_t L_34 = V_0;
		int32_t L_35 = V_0;
		V_13 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_34), ((int64_t)L_35)));
		int32_t L_36 = V_0;
		int32_t L_37 = V_9;
		V_14 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_36), ((int64_t)L_37)));
		int32_t L_38 = V_0;
		int32_t L_39 = V_10;
		int32_t L_40 = V_1;
		int32_t L_41 = V_1;
		V_15 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_38), ((int64_t)L_39))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_40), ((int64_t)L_41)))));
		int32_t L_42 = V_9;
		int32_t L_43 = V_10;
		int32_t L_44 = V_0;
		int32_t L_45 = V_11;
		V_16 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_42), ((int64_t)L_43))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_44), ((int64_t)L_45)))));
		int32_t L_46 = L_31;
		int32_t L_47 = V_10;
		int32_t L_48 = V_0;
		int32_t L_49 = V_12;
		int32_t L_50 = V_1;
		int32_t L_51 = V_11;
		V_17 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_46), ((int64_t)L_47))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_48), ((int64_t)L_49))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_50), ((int64_t)L_51)))));
		int32_t L_52 = V_9;
		int32_t L_53 = V_12;
		int32_t L_54 = V_10;
		int32_t L_55 = V_11;
		V_18 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_52), ((int64_t)L_53))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_54), ((int64_t)L_55)))));
		int32_t L_56 = V_10;
		int32_t L_57 = V_12;
		int32_t L_58 = V_2;
		int32_t L_59 = V_2;
		V_19 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_56), ((int64_t)L_57))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_58), ((int64_t)L_59)))));
		int32_t L_60 = V_2;
		int32_t L_61 = V_12;
		V_20 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_60), ((int64_t)L_61)));
		int32_t L_62 = V_3;
		int32_t L_63 = V_12;
		V_21 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_62), ((int64_t)L_63)));
		int32_t L_64 = V_5;
		V_22 = ((int32_t)il2cpp_codegen_multiply(L_64, 2));
		int32_t L_65 = V_6;
		V_23 = ((int32_t)il2cpp_codegen_multiply(L_65, 2));
		int32_t L_66 = V_7;
		V_24 = ((int32_t)il2cpp_codegen_multiply(L_66, 2));
		int32_t L_67 = V_8;
		V_25 = ((int32_t)il2cpp_codegen_multiply(L_67, 2));
		int32_t L_68 = V_4;
		int32_t L_69 = V_4;
		V_26 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_68), ((int64_t)L_69)));
		int32_t L_70 = V_4;
		int32_t L_71 = V_22;
		V_27 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_70), ((int64_t)L_71)));
		int32_t L_72 = V_4;
		int32_t L_73 = V_23;
		int32_t L_74 = V_5;
		int32_t L_75 = V_5;
		V_28 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_72), ((int64_t)L_73))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_74), ((int64_t)L_75)))));
		int32_t L_76 = V_22;
		int32_t L_77 = V_23;
		int32_t L_78 = V_4;
		int32_t L_79 = V_24;
		V_29 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_76), ((int64_t)L_77))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_78), ((int64_t)L_79)))));
		int32_t L_80 = V_6;
		int32_t L_81 = V_23;
		int32_t L_82 = V_4;
		int32_t L_83 = V_25;
		int32_t L_84 = V_5;
		int32_t L_85 = V_24;
		V_30 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_80), ((int64_t)L_81))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_82), ((int64_t)L_83))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_84), ((int64_t)L_85)))));
		int32_t L_86 = V_22;
		int32_t L_87 = V_25;
		int32_t L_88 = V_23;
		int32_t L_89 = V_24;
		V_31 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_86), ((int64_t)L_87))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_88), ((int64_t)L_89)))));
		int32_t L_90 = V_23;
		int32_t L_91 = V_25;
		int32_t L_92 = V_7;
		int32_t L_93 = V_7;
		V_32 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_90), ((int64_t)L_91))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_92), ((int64_t)L_93)))));
		int32_t L_94 = V_7;
		int32_t L_95 = V_25;
		V_33 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_94), ((int64_t)L_95)));
		int32_t L_96 = V_8;
		int32_t L_97 = V_25;
		V_34 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_96), ((int64_t)L_97)));
		int64_t L_98 = V_13;
		int64_t L_99 = V_31;
		V_13 = ((int64_t)il2cpp_codegen_subtract(L_98, ((int64_t)il2cpp_codegen_multiply(L_99, ((int64_t)((int32_t)38))))));
		int64_t L_100 = V_14;
		int64_t L_101 = V_32;
		V_14 = ((int64_t)il2cpp_codegen_subtract(L_100, ((int64_t)il2cpp_codegen_multiply(L_101, ((int64_t)((int32_t)38))))));
		int64_t L_102 = V_15;
		int64_t L_103 = V_33;
		V_15 = ((int64_t)il2cpp_codegen_subtract(L_102, ((int64_t)il2cpp_codegen_multiply(L_103, ((int64_t)((int32_t)38))))));
		int64_t L_104 = V_16;
		int64_t L_105 = V_34;
		V_16 = ((int64_t)il2cpp_codegen_subtract(L_104, ((int64_t)il2cpp_codegen_multiply(L_105, ((int64_t)((int32_t)38))))));
		int64_t L_106 = V_18;
		int64_t L_107 = V_26;
		V_18 = ((int64_t)il2cpp_codegen_subtract(L_106, L_107));
		int64_t L_108 = V_19;
		int64_t L_109 = V_27;
		V_19 = ((int64_t)il2cpp_codegen_subtract(L_108, L_109));
		int64_t L_110 = V_20;
		int64_t L_111 = V_28;
		V_20 = ((int64_t)il2cpp_codegen_subtract(L_110, L_111));
		int64_t L_112 = V_21;
		int64_t L_113 = V_29;
		V_21 = ((int64_t)il2cpp_codegen_subtract(L_112, L_113));
		int32_t L_114 = V_0;
		int32_t L_115 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(L_114, L_115));
		int32_t L_116 = V_1;
		int32_t L_117 = V_5;
		V_1 = ((int32_t)il2cpp_codegen_add(L_116, L_117));
		int32_t L_118 = V_6;
		int32_t L_119 = V_2;
		int32_t L_120 = V_7;
		V_2 = ((int32_t)il2cpp_codegen_add(L_119, L_120));
		int32_t L_121 = V_3;
		int32_t L_122 = V_8;
		V_3 = ((int32_t)il2cpp_codegen_add(L_121, L_122));
		int32_t L_123 = V_1;
		V_9 = ((int32_t)il2cpp_codegen_multiply(L_123, 2));
		int32_t L_124 = ((int32_t)il2cpp_codegen_add(L_46, L_118));
		V_10 = ((int32_t)il2cpp_codegen_multiply(L_124, 2));
		int32_t L_125 = V_2;
		V_11 = ((int32_t)il2cpp_codegen_multiply(L_125, 2));
		int32_t L_126 = V_3;
		V_12 = ((int32_t)il2cpp_codegen_multiply(L_126, 2));
		int32_t L_127 = V_0;
		int32_t L_128 = V_0;
		V_35 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_127), ((int64_t)L_128)));
		int32_t L_129 = V_0;
		int32_t L_130 = V_9;
		V_36 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_129), ((int64_t)L_130)));
		int32_t L_131 = V_0;
		int32_t L_132 = V_10;
		int32_t L_133 = V_1;
		int32_t L_134 = V_1;
		V_37 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_131), ((int64_t)L_132))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_133), ((int64_t)L_134)))));
		int32_t L_135 = V_9;
		int32_t L_136 = V_10;
		int32_t L_137 = V_0;
		int32_t L_138 = V_11;
		V_38 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_135), ((int64_t)L_136))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_137), ((int64_t)L_138)))));
		int32_t L_139 = V_10;
		int32_t L_140 = V_0;
		int32_t L_141 = V_12;
		int32_t L_142 = V_1;
		int32_t L_143 = V_11;
		V_39 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_124), ((int64_t)L_139))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_140), ((int64_t)L_141))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_142), ((int64_t)L_143)))));
		int32_t L_144 = V_9;
		int32_t L_145 = V_12;
		int32_t L_146 = V_10;
		int32_t L_147 = V_11;
		V_40 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_144), ((int64_t)L_145))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_146), ((int64_t)L_147)))));
		int32_t L_148 = V_10;
		int32_t L_149 = V_12;
		int32_t L_150 = V_2;
		int32_t L_151 = V_2;
		V_41 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)L_148), ((int64_t)L_149))), ((int64_t)il2cpp_codegen_multiply(((int64_t)L_150), ((int64_t)L_151)))));
		int32_t L_152 = V_2;
		int32_t L_153 = V_12;
		V_42 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_152), ((int64_t)L_153)));
		int32_t L_154 = V_3;
		int32_t L_155 = V_12;
		V_43 = ((int64_t)il2cpp_codegen_multiply(((int64_t)L_154), ((int64_t)L_155)));
		int64_t L_156 = V_21;
		int64_t L_157 = V_38;
		int64_t L_158 = V_16;
		V_46 = ((int64_t)il2cpp_codegen_add(L_156, ((int64_t)il2cpp_codegen_subtract(L_157, L_158))));
		int64_t L_159 = V_46;
		V_44 = ((int32_t)(((int32_t)L_159)&((int32_t)67108863)));
		int64_t L_160 = V_46;
		V_46 = ((int64_t)(L_160>>((int32_t)26)));
		int64_t L_161 = V_46;
		int64_t L_162 = V_39;
		int64_t L_163 = V_17;
		int64_t L_164 = V_30;
		V_46 = ((int64_t)il2cpp_codegen_add(L_161, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_subtract(L_162, L_163)), L_164))));
		int64_t L_165 = V_46;
		V_45 = ((int32_t)(((int32_t)L_165)&((int32_t)33554431)));
		int64_t L_166 = V_46;
		V_46 = ((int64_t)(L_166>>((int32_t)25)));
		int64_t L_167 = V_13;
		int64_t L_168 = V_46;
		int64_t L_169 = V_40;
		int64_t L_170 = V_18;
		V_46 = ((int64_t)il2cpp_codegen_add(L_167, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(L_168, L_169)), L_170)), ((int64_t)((int32_t)38))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_171 = ___1_z;
		int64_t L_172 = V_46;
		NullCheck(L_171);
		(L_171)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)(((int32_t)L_172)&((int32_t)67108863))));
		int64_t L_173 = V_46;
		V_46 = ((int64_t)(L_173>>((int32_t)26)));
		int64_t L_174 = V_46;
		int64_t L_175 = V_14;
		int64_t L_176 = V_41;
		int64_t L_177 = V_19;
		V_46 = ((int64_t)il2cpp_codegen_add(L_174, ((int64_t)il2cpp_codegen_add(L_175, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_subtract(L_176, L_177)), ((int64_t)((int32_t)38))))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_178 = ___1_z;
		int64_t L_179 = V_46;
		NullCheck(L_178);
		(L_178)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)(((int32_t)L_179)&((int32_t)67108863))));
		int64_t L_180 = V_46;
		V_46 = ((int64_t)(L_180>>((int32_t)26)));
		int64_t L_181 = V_46;
		int64_t L_182 = V_15;
		int64_t L_183 = V_42;
		int64_t L_184 = V_20;
		V_46 = ((int64_t)il2cpp_codegen_add(L_181, ((int64_t)il2cpp_codegen_add(L_182, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_subtract(L_183, L_184)), ((int64_t)((int32_t)38))))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_185 = ___1_z;
		int64_t L_186 = V_46;
		NullCheck(L_185);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)((int32_t)(((int32_t)L_186)&((int32_t)33554431))));
		int64_t L_187 = V_46;
		V_46 = ((int64_t)(L_187>>((int32_t)25)));
		int64_t L_188 = V_46;
		int64_t L_189 = V_16;
		int64_t L_190 = V_43;
		int64_t L_191 = V_21;
		V_46 = ((int64_t)il2cpp_codegen_add(L_188, ((int64_t)il2cpp_codegen_add(L_189, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_subtract(L_190, L_191)), ((int64_t)((int32_t)38))))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_192 = ___1_z;
		int64_t L_193 = V_46;
		NullCheck(L_192);
		(L_192)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)((int32_t)(((int32_t)L_193)&((int32_t)67108863))));
		int64_t L_194 = V_46;
		V_46 = ((int64_t)(L_194>>((int32_t)26)));
		int64_t L_195 = V_46;
		int64_t L_196 = V_17;
		int64_t L_197 = V_30;
		V_46 = ((int64_t)il2cpp_codegen_add(L_195, ((int64_t)il2cpp_codegen_add(L_196, ((int64_t)il2cpp_codegen_multiply(L_197, ((int64_t)((int32_t)38))))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_198 = ___1_z;
		int64_t L_199 = V_46;
		NullCheck(L_198);
		(L_198)->SetAt(static_cast<il2cpp_array_size_t>(4), (int32_t)((int32_t)(((int32_t)L_199)&((int32_t)33554431))));
		int64_t L_200 = V_46;
		V_46 = ((int64_t)(L_200>>((int32_t)25)));
		int64_t L_201 = V_46;
		int64_t L_202 = V_18;
		int64_t L_203 = V_35;
		int64_t L_204 = V_13;
		V_46 = ((int64_t)il2cpp_codegen_add(L_201, ((int64_t)il2cpp_codegen_add(L_202, ((int64_t)il2cpp_codegen_subtract(L_203, L_204))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_205 = ___1_z;
		int64_t L_206 = V_46;
		NullCheck(L_205);
		(L_205)->SetAt(static_cast<il2cpp_array_size_t>(5), (int32_t)((int32_t)(((int32_t)L_206)&((int32_t)67108863))));
		int64_t L_207 = V_46;
		V_46 = ((int64_t)(L_207>>((int32_t)26)));
		int64_t L_208 = V_46;
		int64_t L_209 = V_19;
		int64_t L_210 = V_36;
		int64_t L_211 = V_14;
		V_46 = ((int64_t)il2cpp_codegen_add(L_208, ((int64_t)il2cpp_codegen_add(L_209, ((int64_t)il2cpp_codegen_subtract(L_210, L_211))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_212 = ___1_z;
		int64_t L_213 = V_46;
		NullCheck(L_212);
		(L_212)->SetAt(static_cast<il2cpp_array_size_t>(6), (int32_t)((int32_t)(((int32_t)L_213)&((int32_t)67108863))));
		int64_t L_214 = V_46;
		V_46 = ((int64_t)(L_214>>((int32_t)26)));
		int64_t L_215 = V_46;
		int64_t L_216 = V_20;
		int64_t L_217 = V_37;
		int64_t L_218 = V_15;
		V_46 = ((int64_t)il2cpp_codegen_add(L_215, ((int64_t)il2cpp_codegen_add(L_216, ((int64_t)il2cpp_codegen_subtract(L_217, L_218))))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_219 = ___1_z;
		int64_t L_220 = V_46;
		NullCheck(L_219);
		(L_219)->SetAt(static_cast<il2cpp_array_size_t>(7), (int32_t)((int32_t)(((int32_t)L_220)&((int32_t)33554431))));
		int64_t L_221 = V_46;
		V_46 = ((int64_t)(L_221>>((int32_t)25)));
		int64_t L_222 = V_46;
		int32_t L_223 = V_44;
		V_46 = ((int64_t)il2cpp_codegen_add(L_222, ((int64_t)L_223)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_224 = ___1_z;
		int64_t L_225 = V_46;
		NullCheck(L_224);
		(L_224)->SetAt(static_cast<il2cpp_array_size_t>(8), (int32_t)((int32_t)(((int32_t)L_225)&((int32_t)67108863))));
		int64_t L_226 = V_46;
		V_46 = ((int64_t)(L_226>>((int32_t)26)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_227 = ___1_z;
		int32_t L_228 = V_45;
		int64_t L_229 = V_46;
		NullCheck(L_227);
		(L_227)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (int32_t)((int32_t)il2cpp_codegen_add(L_228, ((int32_t)L_229))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Sqr_mC9D04D6107FEA13858E92BD10BAAB68EF5B2A070 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, int32_t ___1_n, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_x;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = ___2_z;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Sqr_mB15CC5A9D9BB357C43A061B60BD2E274903C2FB7(L_0, L_1, NULL);
		goto IL_0010;
	}

IL_0009:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___2_z;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___2_z;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Sqr_mB15CC5A9D9BB357C43A061B60BD2E274903C2FB7(L_2, L_3, NULL);
	}

IL_0010:
	{
		int32_t L_4 = ___1_n;
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		___1_n = L_5;
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X25519Field_SqrtRatioVar_m0D5391A6E512FA9A8B59D73F260FE6ABFCE6FC9F (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_u, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_v, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_1 = L_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_u;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = ___1_v;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = V_0;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_2, L_3, L_4, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___1_v;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = V_1;
		X25519Field_Sqr_mB15CC5A9D9BB357C43A061B60BD2E274903C2FB7(L_5, L_6, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_0;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_7, L_8, L_9, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_1;
		X25519Field_Sqr_mB15CC5A9D9BB357C43A061B60BD2E274903C2FB7(L_10, L_11, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_12, L_13, L_14, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15;
		L_15 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_2 = L_15;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16;
		L_16 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_3 = L_16;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_3;
		X25519Field_PowPm5d8_mCAFE9FBEC6C78E9A249A5A95148A5A883D365ADD(L_17, L_18, L_19, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = V_3;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_20, L_21, L_22, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23;
		L_23 = X25519Field_Create_m1763CE093DC3620DFD03526EF1419CE4966B95A3(NULL);
		V_4 = L_23;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_4;
		X25519Field_Sqr_mB15CC5A9D9BB357C43A061B60BD2E274903C2FB7(L_24, L_25, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = ___1_v;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = V_4;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_26, L_27, L_28, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = ___0_u;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = V_2;
		X25519Field_Sub_m7A0E1334ECDDFC850F079F15D60D17CDF84313E6(L_29, L_30, L_31, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = V_2;
		X25519Field_Normalize_mC463C8BA74C0B150F40EAD612A70018C755CE6F3(L_32, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_2;
		bool L_34;
		L_34 = X25519Field_IsZeroVar_mD08CBF5E1DD41999EF24651979F12D82861B6F40(L_33, NULL);
		if (!L_34)
		{
			goto IL_0089;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = ___2_z;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Copy_mAF5DAED0CB27202F9F5E0E7EB8DEAE12F379F5CD(L_35, 0, L_36, 0, NULL);
		return (bool)1;
	}

IL_0089:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = ___0_u;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = V_2;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		X25519Field_Add_mE42245EE0D3016DCB819BF463F2580247E7FA54E(L_37, L_38, L_39, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = V_2;
		X25519Field_Normalize_mC463C8BA74C0B150F40EAD612A70018C755CE6F3(L_40, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = V_2;
		bool L_42;
		L_42 = X25519Field_IsZeroVar_mD08CBF5E1DD41999EF24651979F12D82861B6F40(L_41, NULL);
		if (!L_42)
		{
			goto IL_00ae;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = V_3;
		il2cpp_codegen_runtime_class_init_inline(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = ((X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_StaticFields*)il2cpp_codegen_static_fields_for(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var))->___RootNegOne;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_45 = ___2_z;
		X25519Field_Mul_m03FF88DBA9E46B62F9B6C8467189005DC0BCED86(L_43, L_44, L_45, NULL);
		return (bool)1;
	}

IL_00ae:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Sub_m7A0E1334ECDDFC850F079F15D60D17CDF84313E6 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_x, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___1_y, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___2_z, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0012;
	}

IL_0004:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___2_z;
		int32_t L_1 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = ___0_x;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = ___1_y;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_9)));
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0012:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)10))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_SubOne_m7E2C470874374F12F02DB9EC16302D45FBB4CCF1 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_z, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_z;
		NullCheck(L_0);
		int32_t* L_1 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_2 = *((int32_t*)L_1);
		*((int32_t*)L_1) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field_Zero_mC1A8A4BC8E8988C33A0A4C4BDE7178C65773E545 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_z, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000c;
	}

IL_0004:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_z;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (int32_t)0);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)10))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X25519Field__cctor_m75D5111C45949015A582A1A26ACE2D1F6B472F20 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____3AF2ACD8D2D27336879BC958CFB6B4271FA89EC7C3EC62B7AD1E0E20B7AF303D_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBD91A616D66ED01189010CC1A60DFEF5B8ED9146____3AF2ACD8D2D27336879BC958CFB6B4271FA89EC7C3EC62B7AD1E0E20B7AF303D_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_StaticFields*)il2cpp_codegen_static_fields_for(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var))->___RootNegOne = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_StaticFields*)il2cpp_codegen_static_fields_for(X25519Field_t140C9A98182383D32387BD3259E304F952D5044B_il2cpp_TypeInfo_var))->___RootNegOne), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X448_CalculateAgreement_mD7219020922DE0DF4C8A55540557898D23894BC8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_u, int32_t ___3_uOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_r, int32_t ___5_rOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_k;
		int32_t L_1 = ___1_kOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_u;
		int32_t L_3 = ___3_uOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___4_r;
		int32_t L_5 = ___5_rOff;
		X448_ScalarMult_m93A90498F3CB938105111C02F3C9885721F24D31(L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___4_r;
		int32_t L_7 = ___5_rOff;
		il2cpp_codegen_runtime_class_init_inline(Arrays_t606231EB85FD8A448869943E287E37F646E9990E_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Arrays_AreAllZeroes_m00EDC1A86815A2606AFBC1CDEEF443194E64A3B6(L_6, L_7, ((int32_t)56), NULL);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t X448_Decode32_m7C9BD99DD7BC8E0DBC49CDB68178C416774B54C5 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bs;
		int32_t L_1 = ___1_off;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_bs;
		int32_t L_5 = ___1_off;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		___1_off = L_6;
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_bs;
		int32_t L_10 = ___1_off;
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		___1_off = L_11;
		NullCheck(L_9);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_bs;
		int32_t L_15 = ___1_off;
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		___1_off = L_16;
		NullCheck(L_14);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_8<<8))))|((int32_t)((int32_t)L_13<<((int32_t)16)))))|((int32_t)((int32_t)L_18<<((int32_t)24)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448_DecodeScalar_mF00D1642C8C841AB0009FB4783B48C706FE91E37 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_n, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___2_n;
		int32_t L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_k;
		int32_t L_3 = ___1_kOff;
		int32_t L_4 = V_0;
		uint32_t L_5;
		L_5 = X448_Decode32_m7C9BD99DD7BC8E0DBC49CDB68178C416774B54C5(L_2, ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)il2cpp_codegen_multiply(L_4, 4)))), NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)L_5);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0016:
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)14))))
		{
			goto IL_0004;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_n;
		NullCheck(L_8);
		uint32_t* L_9 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_10 = *((uint32_t*)L_9);
		*((int32_t*)L_9) = (int32_t)((int32_t)(L_10&((int32_t)-4)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___2_n;
		NullCheck(L_11);
		uint32_t* L_12 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)13))));
		int32_t L_13 = *((uint32_t*)L_12);
		*((int32_t*)L_12) = (int32_t)((int32_t)(L_13|((int32_t)-2147483648LL)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448_GeneratePrivateKey_m35C13BD472C2BF7ECF0E5EA05330F5259F1988E6 (SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* ___0_random, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_k, const RuntimeMethod* method) 
{
	{
		SecureRandom_tBF5FEDF46DC08AF928159066688C4868ECE54076* L_0 = ___0_random;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_k;
		NullCheck(L_0);
		VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9, L_0, L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___1_k;
		NullCheck(L_2);
		uint8_t* L_3 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_4 = *((uint8_t*)L_3);
		*((int8_t*)L_3) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_4&((int32_t)252))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___1_k;
		NullCheck(L_5);
		uint8_t* L_6 = ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)55))));
		int32_t L_7 = *((uint8_t*)L_6);
		*((int8_t*)L_6) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_7|((int32_t)128))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448_GeneratePublicKey_m05ADCC2272EE165BC011F5B653E5F5D8FFAC05D3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_r, int32_t ___3_rOff, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_k;
		int32_t L_1 = ___1_kOff;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_r;
		int32_t L_3 = ___3_rOff;
		X448_ScalarMultBase_mF21108463D61312674EC816D580B47F660FCFE98(L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448_PointDouble_m8BC4AEABDEE68595B08442A67D161007F412DC9B (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		X448Field_Add_mCFABA589F46545F656A1CCEAD2669A8BBC9C452A(L_2, L_3, L_4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_1;
		X448Field_Sub_mBFA894A2EA11C691607571A006356D308952945E(L_5, L_6, L_7, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_0;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_8, L_9, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_1;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_10, L_11, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___0_x;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_12, L_13, L_14, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_0;
		X448Field_Sub_mBFA894A2EA11C691607571A006356D308952945E(L_15, L_16, L_17, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = ___1_z;
		X448Field_Mul_mC51EE78E9A520350193A2014FCC0403E597F2FE5(L_18, ((int32_t)39082), L_19, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = ___1_z;
		X448Field_Add_mCFABA589F46545F656A1CCEAD2669A8BBC9C452A(L_20, L_21, L_22, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = ___1_z;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_23, L_24, L_25, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448_Precompute_m606030FF0F2D23F98489218E5581CC609E7AA449 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_Precompute_m8A35B0BAD0452897FD7AC0459ED016C3328BF230(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448_ScalarMult_m93A90498F3CB938105111C02F3C9885721F24D31 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_u, int32_t ___3_uOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_r, int32_t ___5_rOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_6 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)14));
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_k;
		int32_t L_2 = ___1_kOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		X448_DecodeScalar_mF00D1642C8C841AB0009FB4783B48C706FE91E37(L_1, L_2, L_3, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4;
		L_4 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_1 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___2_u;
		int32_t L_6 = ___3_uOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_1;
		X448Field_Decode_mB821749EAC11700BE5BD90446A8B3C370D8AEC69(L_5, L_6, L_7, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8;
		L_8 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_2 = L_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_2;
		X448Field_Copy_m68F680AAB9014E095E873FE939DE740F5C9484CB(L_9, 0, L_10, 0, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11;
		L_11 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_3 = L_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_3;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13;
		L_13 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_4 = L_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_4;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15;
		L_15 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_5 = L_15;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16;
		L_16 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_6 = L_16;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17;
		L_17 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_7 = L_17;
		V_8 = ((int32_t)447);
		V_9 = 1;
	}

IL_0062:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_6;
		X448Field_Add_mCFABA589F46545F656A1CCEAD2669A8BBC9C452A(L_18, L_19, L_20, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_4;
		X448Field_Sub_mBFA894A2EA11C691607571A006356D308952945E(L_21, L_22, L_23, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_5;
		X448Field_Add_mCFABA589F46545F656A1CCEAD2669A8BBC9C452A(L_24, L_25, L_26, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_2;
		X448Field_Sub_mBFA894A2EA11C691607571A006356D308952945E(L_27, L_28, L_29, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_6;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_30, L_31, L_32, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = V_4;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_33, L_34, L_35, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = V_5;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_36, L_37, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = V_2;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_38, L_39, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = V_7;
		X448Field_Sub_mBFA894A2EA11C691607571A006356D308952945E(L_40, L_41, L_42, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_3;
		X448Field_Mul_mC51EE78E9A520350193A2014FCC0403E597F2FE5(L_43, ((int32_t)39082), L_44, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = V_3;
		X448Field_Add_mCFABA589F46545F656A1CCEAD2669A8BBC9C452A(L_45, L_46, L_47, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = V_3;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_48, L_49, L_50, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = V_2;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_51, L_52, L_53, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = V_5;
		X448Field_Sub_mBFA894A2EA11C691607571A006356D308952945E(L_54, L_55, L_56, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = V_4;
		X448Field_Add_mCFABA589F46545F656A1CCEAD2669A8BBC9C452A(L_57, L_58, L_59, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = V_4;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_60, L_61, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = V_5;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_62, L_63, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = V_5;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_64, L_65, L_66, NULL);
		int32_t L_67 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_67, 1));
		int32_t L_68 = V_8;
		V_10 = ((int32_t)(L_68>>5));
		int32_t L_69 = V_8;
		V_11 = ((int32_t)(L_69&((int32_t)31)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = V_0;
		int32_t L_71 = V_10;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		uint32_t L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		int32_t L_74 = V_11;
		V_12 = ((int32_t)(((int32_t)((uint32_t)L_73>>((int32_t)(L_74&((int32_t)31)))))&1));
		int32_t L_75 = V_9;
		int32_t L_76 = V_12;
		V_9 = ((int32_t)(L_75^L_76));
		int32_t L_77 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_78 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_79 = V_4;
		X448Field_CSwap_mFDCBDAB247729A9691B6D38A031BA7F55B3071B7(L_77, L_78, L_79, NULL);
		int32_t L_80 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_82 = V_5;
		X448Field_CSwap_mFDCBDAB247729A9691B6D38A031BA7F55B3071B7(L_80, L_81, L_82, NULL);
		int32_t L_83 = V_12;
		V_9 = L_83;
		int32_t L_84 = V_8;
		if ((((int32_t)L_84) >= ((int32_t)2)))
		{
			goto IL_0062;
		}
	}
	{
		V_13 = 0;
		goto IL_016b;
	}

IL_015e:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_85 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_86 = V_3;
		X448_PointDouble_m8BC4AEABDEE68595B08442A67D161007F412DC9B(L_85, L_86, NULL);
		int32_t L_87 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_87, 1));
	}

IL_016b:
	{
		int32_t L_88 = V_13;
		if ((((int32_t)L_88) < ((int32_t)2)))
		{
			goto IL_015e;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_89 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = V_3;
		X448Field_Inv_mFB31775FD55C6B3D7374C0523C25D0D0B570783F(L_89, L_90, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_91 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_92 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_93 = V_2;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_91, L_92, L_93, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_94 = V_2;
		X448Field_Normalize_mF473952189B87EBD9915C6D49F69511F3A056A34(L_94, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_95 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = ___4_r;
		int32_t L_97 = ___5_rOff;
		X448Field_Encode_m9B96C1858895EC17068B864722F324DF9600E600(L_95, L_96, L_97, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448_ScalarMultBase_mF21108463D61312674EC816D580B47F660FCFE98 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_k, int32_t ___1_kOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_r, int32_t ___3_rOff, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_1 = L_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_k;
		int32_t L_3 = ___1_kOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Ed448_tE197095EB62E8ADEBF2B3E33079CEAD927C04893_il2cpp_TypeInfo_var);
		Ed448_ScalarMultBaseXY_mA45BD372C83D0681CDDF5CAC40699E679809BB49(L_2, L_3, L_4, L_5, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_0;
		X448Field_Inv_mFB31775FD55C6B3D7374C0523C25D0D0B570783F(L_6, L_7, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_0;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_8, L_9, L_10, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_0;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_11, L_12, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_0;
		X448Field_Normalize_mF473952189B87EBD9915C6D49F69511F3A056A34(L_13, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___2_r;
		int32_t L_16 = ___3_rOff;
		X448Field_Encode_m9B96C1858895EC17068B864722F324DF9600E600(L_14, L_15, L_16, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448__ctor_mA9FDC5716F639B235994E706E9D91271B9315AA5 (X448_tE3E7DA868EFB06A58B828DAB39D08493B6BA44FE* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field__ctor_m521045A8454096E2973621CA88F3CEFFF2E8214A (X448Field_t13EF18771A92115991BFED713F36D91910DC7B9A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Add_mCFABA589F46545F656A1CCEAD2669A8BBC9C452A (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0012;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___2_z;
		int32_t L_1 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_x;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_y;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_9)));
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0012:
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)16))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_AddOne_m1433ACFDABE593672910D354940A7211EAFCCA70 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_z, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_z;
		NullCheck(L_0);
		uint32_t* L_1 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		int32_t L_2 = *((uint32_t*)L_1);
		*((int32_t*)L_1) = (int32_t)((int32_t)il2cpp_codegen_add(L_2, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_AddOne_mDBE8129746B7F98F06D60D45ED7976ED5273819D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_z, int32_t ___1_zOff, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_z;
		int32_t L_1 = ___1_zOff;
		NullCheck(L_0);
		uint32_t* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)));
		int32_t L_3 = *((uint32_t*)L_2);
		*((int32_t*)L_2) = (int32_t)((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Carry_m5ABB04A0158406E10A444D4B875C7D1E769A5461 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_z, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	uint32_t V_16 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_z;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		V_0 = L_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_z;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___0_z;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___0_z;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___0_z;
		NullCheck(L_12);
		int32_t L_13 = 4;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___0_z;
		NullCheck(L_15);
		int32_t L_16 = 5;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___0_z;
		NullCheck(L_18);
		int32_t L_19 = 6;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_z;
		NullCheck(L_21);
		int32_t L_22 = 7;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_7 = L_23;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___0_z;
		NullCheck(L_24);
		int32_t L_25 = 8;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_8 = L_26;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_z;
		NullCheck(L_27);
		int32_t L_28 = ((int32_t)9);
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_9 = L_29;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___0_z;
		NullCheck(L_30);
		int32_t L_31 = ((int32_t)10);
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_10 = L_32;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___0_z;
		NullCheck(L_33);
		int32_t L_34 = ((int32_t)11);
		uint32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_11 = L_35;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___0_z;
		NullCheck(L_36);
		int32_t L_37 = ((int32_t)12);
		uint32_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_12 = L_38;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___0_z;
		NullCheck(L_39);
		int32_t L_40 = ((int32_t)13);
		uint32_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_13 = L_41;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ___0_z;
		NullCheck(L_42);
		int32_t L_43 = ((int32_t)14);
		uint32_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_14 = L_44;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___0_z;
		NullCheck(L_45);
		int32_t L_46 = ((int32_t)15);
		uint32_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_15 = L_47;
		uint32_t L_48 = V_1;
		uint32_t L_49 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, ((int32_t)((uint32_t)L_49>>((int32_t)28)))));
		uint32_t L_50 = V_0;
		V_0 = ((int32_t)((int32_t)L_50&((int32_t)268435455)));
		uint32_t L_51 = V_5;
		uint32_t L_52 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, ((int32_t)((uint32_t)L_52>>((int32_t)28)))));
		uint32_t L_53 = V_4;
		V_4 = ((int32_t)((int32_t)L_53&((int32_t)268435455)));
		uint32_t L_54 = V_9;
		uint32_t L_55 = V_8;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, ((int32_t)((uint32_t)L_55>>((int32_t)28)))));
		uint32_t L_56 = V_8;
		V_8 = ((int32_t)((int32_t)L_56&((int32_t)268435455)));
		uint32_t L_57 = V_13;
		uint32_t L_58 = V_12;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, ((int32_t)((uint32_t)L_58>>((int32_t)28)))));
		uint32_t L_59 = V_12;
		V_12 = ((int32_t)((int32_t)L_59&((int32_t)268435455)));
		uint32_t L_60 = V_2;
		uint32_t L_61 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, ((int32_t)((uint32_t)L_61>>((int32_t)28)))));
		uint32_t L_62 = V_1;
		V_1 = ((int32_t)((int32_t)L_62&((int32_t)268435455)));
		uint32_t L_63 = V_6;
		uint32_t L_64 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, ((int32_t)((uint32_t)L_64>>((int32_t)28)))));
		uint32_t L_65 = V_5;
		V_5 = ((int32_t)((int32_t)L_65&((int32_t)268435455)));
		uint32_t L_66 = V_10;
		uint32_t L_67 = V_9;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, ((int32_t)((uint32_t)L_67>>((int32_t)28)))));
		uint32_t L_68 = V_9;
		V_9 = ((int32_t)((int32_t)L_68&((int32_t)268435455)));
		uint32_t L_69 = V_14;
		uint32_t L_70 = V_13;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_69, ((int32_t)((uint32_t)L_70>>((int32_t)28)))));
		uint32_t L_71 = V_13;
		V_13 = ((int32_t)((int32_t)L_71&((int32_t)268435455)));
		uint32_t L_72 = V_3;
		uint32_t L_73 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, ((int32_t)((uint32_t)L_73>>((int32_t)28)))));
		uint32_t L_74 = V_2;
		V_2 = ((int32_t)((int32_t)L_74&((int32_t)268435455)));
		uint32_t L_75 = V_7;
		uint32_t L_76 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_75, ((int32_t)((uint32_t)L_76>>((int32_t)28)))));
		uint32_t L_77 = V_6;
		V_6 = ((int32_t)((int32_t)L_77&((int32_t)268435455)));
		uint32_t L_78 = V_11;
		uint32_t L_79 = V_10;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, ((int32_t)((uint32_t)L_79>>((int32_t)28)))));
		uint32_t L_80 = V_10;
		V_10 = ((int32_t)((int32_t)L_80&((int32_t)268435455)));
		uint32_t L_81 = V_15;
		uint32_t L_82 = V_14;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_81, ((int32_t)((uint32_t)L_82>>((int32_t)28)))));
		uint32_t L_83 = V_14;
		V_14 = ((int32_t)((int32_t)L_83&((int32_t)268435455)));
		uint32_t L_84 = V_15;
		V_16 = ((int32_t)((uint32_t)L_84>>((int32_t)28)));
		uint32_t L_85 = V_15;
		V_15 = ((int32_t)((int32_t)L_85&((int32_t)268435455)));
		uint32_t L_86 = V_0;
		uint32_t L_87 = V_16;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)L_87));
		uint32_t L_88 = V_8;
		uint32_t L_89 = V_16;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)L_89));
		uint32_t L_90 = V_4;
		uint32_t L_91 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_90, ((int32_t)((uint32_t)L_91>>((int32_t)28)))));
		uint32_t L_92 = V_3;
		V_3 = ((int32_t)((int32_t)L_92&((int32_t)268435455)));
		uint32_t L_93 = V_8;
		uint32_t L_94 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, ((int32_t)((uint32_t)L_94>>((int32_t)28)))));
		uint32_t L_95 = V_7;
		V_7 = ((int32_t)((int32_t)L_95&((int32_t)268435455)));
		uint32_t L_96 = V_12;
		uint32_t L_97 = V_11;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, ((int32_t)((uint32_t)L_97>>((int32_t)28)))));
		uint32_t L_98 = V_11;
		V_11 = ((int32_t)((int32_t)L_98&((int32_t)268435455)));
		uint32_t L_99 = V_1;
		uint32_t L_100 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_99, ((int32_t)((uint32_t)L_100>>((int32_t)28)))));
		uint32_t L_101 = V_0;
		V_0 = ((int32_t)((int32_t)L_101&((int32_t)268435455)));
		uint32_t L_102 = V_5;
		uint32_t L_103 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_102, ((int32_t)((uint32_t)L_103>>((int32_t)28)))));
		uint32_t L_104 = V_4;
		V_4 = ((int32_t)((int32_t)L_104&((int32_t)268435455)));
		uint32_t L_105 = V_9;
		uint32_t L_106 = V_8;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_105, ((int32_t)((uint32_t)L_106>>((int32_t)28)))));
		uint32_t L_107 = V_8;
		V_8 = ((int32_t)((int32_t)L_107&((int32_t)268435455)));
		uint32_t L_108 = V_13;
		uint32_t L_109 = V_12;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_108, ((int32_t)((uint32_t)L_109>>((int32_t)28)))));
		uint32_t L_110 = V_12;
		V_12 = ((int32_t)((int32_t)L_110&((int32_t)268435455)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_111 = ___0_z;
		uint32_t L_112 = V_0;
		NullCheck(L_111);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_112);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_113 = ___0_z;
		uint32_t L_114 = V_1;
		NullCheck(L_113);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_114);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_115 = ___0_z;
		uint32_t L_116 = V_2;
		NullCheck(L_115);
		(L_115)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_116);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_117 = ___0_z;
		uint32_t L_118 = V_3;
		NullCheck(L_117);
		(L_117)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_118);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_119 = ___0_z;
		uint32_t L_120 = V_4;
		NullCheck(L_119);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)L_120);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_121 = ___0_z;
		uint32_t L_122 = V_5;
		NullCheck(L_121);
		(L_121)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)L_122);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_123 = ___0_z;
		uint32_t L_124 = V_6;
		NullCheck(L_123);
		(L_123)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)L_124);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_125 = ___0_z;
		uint32_t L_126 = V_7;
		NullCheck(L_125);
		(L_125)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)L_126);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_127 = ___0_z;
		uint32_t L_128 = V_8;
		NullCheck(L_127);
		(L_127)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint32_t)L_128);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_129 = ___0_z;
		uint32_t L_130 = V_9;
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint32_t)L_130);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_131 = ___0_z;
		uint32_t L_132 = V_10;
		NullCheck(L_131);
		(L_131)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint32_t)L_132);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_133 = ___0_z;
		uint32_t L_134 = V_11;
		NullCheck(L_133);
		(L_133)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint32_t)L_134);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_135 = ___0_z;
		uint32_t L_136 = V_12;
		NullCheck(L_135);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint32_t)L_136);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_137 = ___0_z;
		uint32_t L_138 = V_13;
		NullCheck(L_137);
		(L_137)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint32_t)L_138);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_139 = ___0_z;
		uint32_t L_140 = V_14;
		NullCheck(L_139);
		(L_139)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint32_t)L_140);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_141 = ___0_z;
		uint32_t L_142 = V_15;
		NullCheck(L_141);
		(L_141)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint32_t)L_142);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_CMov_mACE58C351958EDC9BCD1165A6EB550D180A0F858 (int32_t ___0_cond, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_x, int32_t ___2_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___3_z, int32_t ___4_zOff, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		int32_t L_0 = ___0_cond;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0026;
	}

IL_0006:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___3_z;
		int32_t L_2 = ___4_zOff;
		int32_t L_3 = V_1;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		uint32_t L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		uint32_t L_6 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___1_x;
		int32_t L_8 = ___2_xOff;
		int32_t L_9 = V_1;
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_8, L_9));
		uint32_t L_11 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = ((int32_t)((int32_t)L_6^(int32_t)L_11));
		uint32_t L_12 = V_2;
		uint32_t L_13 = V_3;
		uint32_t L_14 = V_0;
		V_2 = ((int32_t)((int32_t)L_12^((int32_t)((int32_t)L_13&(int32_t)L_14))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___3_z;
		int32_t L_16 = ___4_zOff;
		int32_t L_17 = V_1;
		uint32_t L_18 = V_2;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_16, L_17))), (uint32_t)L_18);
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0026:
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)16))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_CNegate_m7F86185A4985B8748F03AF3EBA5B932D37BFC930 (int32_t ___0_negate, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___1_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		X448Field_Sub_mBFA894A2EA11C691607571A006356D308952945E(L_1, L_2, L_3, NULL);
		int32_t L_4 = ___0_negate;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___1_z;
		X448Field_CMov_mACE58C351958EDC9BCD1165A6EB550D180A0F858(((-L_4)), L_5, 0, L_6, 0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Copy_m68F680AAB9014E095E873FE939DE740F5C9484CB (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0012;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___2_z;
		int32_t L_1 = ___3_zOff;
		int32_t L_2 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		int32_t L_4 = ___1_xOff;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		uint32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (uint32_t)L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0012:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)16))))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_CSwap_mFDCBDAB247729A9691B6D38A031BA7F55B3071B7 (int32_t ___0_swap, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_a, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_b, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	{
		int32_t L_0 = ___0_swap;
		V_0 = ((int32_t)il2cpp_codegen_subtract(0, L_0));
		V_1 = 0;
		goto IL_0029;
	}

IL_0008:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___1_a;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_b;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		uint32_t L_9 = V_0;
		uint32_t L_10 = V_2;
		uint32_t L_11 = V_3;
		V_4 = ((int32_t)((int32_t)L_9&((int32_t)((int32_t)L_10^(int32_t)L_11))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___1_a;
		int32_t L_13 = V_1;
		uint32_t L_14 = V_2;
		uint32_t L_15 = V_4;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint32_t)((int32_t)((int32_t)L_14^(int32_t)L_15)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___2_b;
		int32_t L_17 = V_1;
		uint32_t L_18 = V_3;
		uint32_t L_19 = V_4;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint32_t)((int32_t)((int32_t)L_18^(int32_t)L_19)));
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0029:
	{
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)16))))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Decode_mB821749EAC11700BE5BD90446A8B3C370D8AEC69 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_x, int32_t ___1_xOff, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_x;
		int32_t L_1 = ___1_xOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___2_z;
		X448Field_Decode56_m5821C0F20E3F9F798208DFAA49342A29398CB4EB(L_0, L_1, L_2, 0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_x;
		int32_t L_4 = ___1_xOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___2_z;
		X448Field_Decode56_m5821C0F20E3F9F798208DFAA49342A29398CB4EB(L_3, ((int32_t)il2cpp_codegen_add(L_4, 7)), L_5, 2, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_x;
		int32_t L_7 = ___1_xOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___2_z;
		X448Field_Decode56_m5821C0F20E3F9F798208DFAA49342A29398CB4EB(L_6, ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)14))), L_8, 4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_x;
		int32_t L_10 = ___1_xOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___2_z;
		X448Field_Decode56_m5821C0F20E3F9F798208DFAA49342A29398CB4EB(L_9, ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)21))), L_11, 6, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_x;
		int32_t L_13 = ___1_xOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = ___2_z;
		X448Field_Decode56_m5821C0F20E3F9F798208DFAA49342A29398CB4EB(L_12, ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)28))), L_14, 8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_x;
		int32_t L_16 = ___1_xOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = ___2_z;
		X448Field_Decode56_m5821C0F20E3F9F798208DFAA49342A29398CB4EB(L_15, ((int32_t)il2cpp_codegen_add(L_16, ((int32_t)35))), L_17, ((int32_t)10), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___0_x;
		int32_t L_19 = ___1_xOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___2_z;
		X448Field_Decode56_m5821C0F20E3F9F798208DFAA49342A29398CB4EB(L_18, ((int32_t)il2cpp_codegen_add(L_19, ((int32_t)42))), L_20, ((int32_t)12), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___0_x;
		int32_t L_22 = ___1_xOff;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = ___2_z;
		X448Field_Decode56_m5821C0F20E3F9F798208DFAA49342A29398CB4EB(L_21, ((int32_t)il2cpp_codegen_add(L_22, ((int32_t)49))), L_23, ((int32_t)14), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t X448Field_Decode24_m8F5333CFDB228809FDEB9B35B242E8A03F4D7AE9 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bs;
		int32_t L_1 = ___1_off;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_bs;
		int32_t L_5 = ___1_off;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		___1_off = L_6;
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_bs;
		int32_t L_10 = ___1_off;
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		___1_off = L_11;
		NullCheck(L_9);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		return ((int32_t)(((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_8<<8))))|((int32_t)((int32_t)L_13<<((int32_t)16)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t X448Field_Decode32_m25113FA52AD31A20C4B59550A504D623108A4C47 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bs;
		int32_t L_1 = ___1_off;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_bs;
		int32_t L_5 = ___1_off;
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		___1_off = L_6;
		NullCheck(L_4);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___0_bs;
		int32_t L_10 = ___1_off;
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		___1_off = L_11;
		NullCheck(L_9);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_bs;
		int32_t L_15 = ___1_off;
		int32_t L_16 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		___1_off = L_16;
		NullCheck(L_14);
		int32_t L_17 = L_16;
		uint8_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		return ((int32_t)(((int32_t)(((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_8<<8))))|((int32_t)((int32_t)L_13<<((int32_t)16)))))|((int32_t)((int32_t)L_18<<((int32_t)24)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Decode56_m5821C0F20E3F9F798208DFAA49342A29398CB4EB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bs, int32_t ___1_off, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, int32_t ___3_zOff, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_bs;
		int32_t L_1 = ___1_off;
		uint32_t L_2;
		L_2 = X448Field_Decode32_m25113FA52AD31A20C4B59550A504D623108A4C47(L_0, L_1, NULL);
		V_0 = L_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_bs;
		int32_t L_4 = ___1_off;
		uint32_t L_5;
		L_5 = X448Field_Decode24_m8F5333CFDB228809FDEB9B35B242E8A03F4D7AE9(L_3, ((int32_t)il2cpp_codegen_add(L_4, 4)), NULL);
		V_1 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___2_z;
		int32_t L_7 = ___3_zOff;
		uint32_t L_8 = V_0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint32_t)((int32_t)((int32_t)L_8&((int32_t)268435455))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___2_z;
		int32_t L_10 = ___3_zOff;
		uint32_t L_11 = V_0;
		uint32_t L_12 = V_1;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_10, 1))), (uint32_t)((int32_t)(((int32_t)((uint32_t)L_11>>((int32_t)28)))|((int32_t)((int32_t)L_12<<4)))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Encode_m9B96C1858895EC17068B864722F324DF9600E600 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_z, int32_t ___2_zOff, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_z;
		int32_t L_2 = ___2_zOff;
		X448Field_Encode56_m78ADF144536E23D1EDFC19CDB3CF4DF91E10FD4F(L_0, 0, L_1, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_z;
		int32_t L_5 = ___2_zOff;
		X448Field_Encode56_m78ADF144536E23D1EDFC19CDB3CF4DF91E10FD4F(L_3, 2, L_4, ((int32_t)il2cpp_codegen_add(L_5, 7)), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___0_x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___1_z;
		int32_t L_8 = ___2_zOff;
		X448Field_Encode56_m78ADF144536E23D1EDFC19CDB3CF4DF91E10FD4F(L_6, 4, L_7, ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)14))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___0_x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___1_z;
		int32_t L_11 = ___2_zOff;
		X448Field_Encode56_m78ADF144536E23D1EDFC19CDB3CF4DF91E10FD4F(L_9, 6, L_10, ((int32_t)il2cpp_codegen_add(L_11, ((int32_t)21))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___0_x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___1_z;
		int32_t L_14 = ___2_zOff;
		X448Field_Encode56_m78ADF144536E23D1EDFC19CDB3CF4DF91E10FD4F(L_12, 8, L_13, ((int32_t)il2cpp_codegen_add(L_14, ((int32_t)28))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___0_x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___1_z;
		int32_t L_17 = ___2_zOff;
		X448Field_Encode56_m78ADF144536E23D1EDFC19CDB3CF4DF91E10FD4F(L_15, ((int32_t)10), L_16, ((int32_t)il2cpp_codegen_add(L_17, ((int32_t)35))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___0_x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___1_z;
		int32_t L_20 = ___2_zOff;
		X448Field_Encode56_m78ADF144536E23D1EDFC19CDB3CF4DF91E10FD4F(L_18, ((int32_t)12), L_19, ((int32_t)il2cpp_codegen_add(L_20, ((int32_t)42))), NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___1_z;
		int32_t L_23 = ___2_zOff;
		X448Field_Encode56_m78ADF144536E23D1EDFC19CDB3CF4DF91E10FD4F(L_21, ((int32_t)14), L_22, ((int32_t)il2cpp_codegen_add(L_23, ((int32_t)49))), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Encode24_m01514F6F5A5AFF058105A98F2F5636CBE04F89A4 (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_bs;
		int32_t L_1 = ___2_off;
		uint32_t L_2 = ___0_n;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_bs;
		int32_t L_4 = ___2_off;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		___2_off = L_5;
		uint32_t L_6 = ___0_n;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_6>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___1_bs;
		int32_t L_8 = ___2_off;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		___2_off = L_9;
		uint32_t L_10 = ___0_n;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>((int32_t)16)))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Encode32_m872DE9D39A53C5FC5559D590BD3EEAF2326C36DC (uint32_t ___0_n, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_bs, int32_t ___2_off, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___1_bs;
		int32_t L_1 = ___2_off;
		uint32_t L_2 = ___0_n;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint8_t)((int32_t)(uint8_t)L_2));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___1_bs;
		int32_t L_4 = ___2_off;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		___2_off = L_5;
		uint32_t L_6 = ___0_n;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_6>>8))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___1_bs;
		int32_t L_8 = ___2_off;
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		___2_off = L_9;
		uint32_t L_10 = ___0_n;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_10>>((int32_t)16)))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___1_bs;
		int32_t L_12 = ___2_off;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		___2_off = L_13;
		uint32_t L_14 = ___0_n;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (uint8_t)((int32_t)(uint8_t)((int32_t)((uint32_t)L_14>>((int32_t)24)))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Encode56_m78ADF144536E23D1EDFC19CDB3CF4DF91E10FD4F (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_xOff, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_bs, int32_t ___3_off, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1 = ___1_xOff;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint32_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_x;
		int32_t L_5 = ___1_xOff;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		uint32_t L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___2_bs;
		int32_t L_10 = ___3_off;
		X448Field_Encode32_m872DE9D39A53C5FC5559D590BD3EEAF2326C36DC(((int32_t)((int32_t)L_3|((int32_t)((int32_t)L_8<<((int32_t)28))))), L_9, L_10, NULL);
		uint32_t L_11 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___2_bs;
		int32_t L_13 = ___3_off;
		X448Field_Encode24_m01514F6F5A5AFF058105A98F2F5636CBE04F89A4(((int32_t)((uint32_t)L_11>>4)), L_12, ((int32_t)il2cpp_codegen_add(L_13, 4)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Inv_mFB31775FD55C6B3D7374C0523C25D0D0B570783F (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		X448Field_PowPm3d4_m542F80EF0B4562CBC33DEC553D2EEEC507161CB0(L_1, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		X448Field_Sqr_m17DF280AD326A592C466FD195CDC57B87F7120C9(L_3, 2, L_4, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___1_z;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_5, L_6, L_7, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X448Field_IsZero_m46BADDCE7BC56E69F5E81490C58F0C1C5F7A6449 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0010;
	}

IL_0006:
	{
		uint32_t L_0 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = ((int32_t)((int32_t)L_0|(int32_t)L_4));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0010:
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)16))))
		{
			goto IL_0006;
		}
	}
	{
		uint32_t L_7 = V_0;
		uint32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_7|((int32_t)((uint32_t)L_8>>((int32_t)16)))));
		uint32_t L_9 = V_0;
		V_0 = ((int32_t)((int32_t)L_9&((int32_t)65535)));
		uint32_t L_10 = V_0;
		return ((int32_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_10, 1))>>((int32_t)31)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X448Field_IsZeroVar_m778F59C0FFAB3021A4B8B3BFEA328753407F039D (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		int32_t L_1;
		L_1 = X448Field_IsZero_m46BADDCE7BC56E69F5E81490C58F0C1C5F7A6449(L_0, NULL);
		return (bool)((!(((uint64_t)((int64_t)L_1)) <= ((uint64_t)((int64_t)0))))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Mul_mC51EE78E9A520350193A2014FCC0403E597F2FE5 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, uint32_t ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	uint32_t V_16 = 0;
	uint32_t V_17 = 0;
	uint32_t V_18 = 0;
	uint64_t V_19 = 0;
	uint64_t V_20 = 0;
	uint64_t V_21 = 0;
	uint64_t V_22 = 0;
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
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___0_x;
		NullCheck(L_12);
		int32_t L_13 = 4;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___0_x;
		NullCheck(L_15);
		int32_t L_16 = 5;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___0_x;
		NullCheck(L_18);
		int32_t L_19 = 6;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 7;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_7 = L_23;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___0_x;
		NullCheck(L_24);
		int32_t L_25 = 8;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_8 = L_26;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		NullCheck(L_27);
		int32_t L_28 = ((int32_t)9);
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_9 = L_29;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___0_x;
		NullCheck(L_30);
		int32_t L_31 = ((int32_t)10);
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_10 = L_32;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___0_x;
		NullCheck(L_33);
		int32_t L_34 = ((int32_t)11);
		uint32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_11 = L_35;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___0_x;
		NullCheck(L_36);
		int32_t L_37 = ((int32_t)12);
		uint32_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_12 = L_38;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___0_x;
		NullCheck(L_39);
		int32_t L_40 = ((int32_t)13);
		uint32_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ___0_x;
		NullCheck(L_42);
		int32_t L_43 = ((int32_t)14);
		uint32_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_13 = L_44;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___0_x;
		NullCheck(L_45);
		int32_t L_46 = ((int32_t)15);
		uint32_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_14 = L_47;
		uint32_t L_48 = V_1;
		uint32_t L_49 = ___1_y;
		V_19 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_48), ((int64_t)(uint64_t)L_49)));
		uint64_t L_50 = V_19;
		V_15 = ((int32_t)(((int32_t)(uint32_t)L_50)&((int32_t)268435455)));
		uint64_t L_51 = V_19;
		V_19 = ((int64_t)((uint64_t)L_51>>((int32_t)28)));
		uint32_t L_52 = V_5;
		uint32_t L_53 = ___1_y;
		V_20 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_52), ((int64_t)(uint64_t)L_53)));
		uint64_t L_54 = V_20;
		V_16 = ((int32_t)(((int32_t)(uint32_t)L_54)&((int32_t)268435455)));
		uint64_t L_55 = V_20;
		V_20 = ((int64_t)((uint64_t)L_55>>((int32_t)28)));
		uint32_t L_56 = V_9;
		uint32_t L_57 = ___1_y;
		V_21 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_56), ((int64_t)(uint64_t)L_57)));
		uint64_t L_58 = V_21;
		V_17 = ((int32_t)(((int32_t)(uint32_t)L_58)&((int32_t)268435455)));
		uint64_t L_59 = V_21;
		V_21 = ((int64_t)((uint64_t)L_59>>((int32_t)28)));
		uint32_t L_60 = ___1_y;
		V_22 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_41), ((int64_t)(uint64_t)L_60)));
		uint64_t L_61 = V_22;
		V_18 = ((int32_t)(((int32_t)(uint32_t)L_61)&((int32_t)268435455)));
		uint64_t L_62 = V_22;
		V_22 = ((int64_t)((uint64_t)L_62>>((int32_t)28)));
		uint64_t L_63 = V_19;
		uint32_t L_64 = V_2;
		uint32_t L_65 = ___1_y;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_63, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_64), ((int64_t)(uint64_t)L_65)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___2_z;
		uint64_t L_67 = V_19;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_67)&((int32_t)268435455))));
		uint64_t L_68 = V_19;
		V_19 = ((int64_t)((uint64_t)L_68>>((int32_t)28)));
		uint64_t L_69 = V_20;
		uint32_t L_70 = V_6;
		uint32_t L_71 = ___1_y;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_69, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_70), ((int64_t)(uint64_t)L_71)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___2_z;
		uint64_t L_73 = V_20;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_73)&((int32_t)268435455))));
		uint64_t L_74 = V_20;
		V_20 = ((int64_t)((uint64_t)L_74>>((int32_t)28)));
		uint64_t L_75 = V_21;
		uint32_t L_76 = V_10;
		uint32_t L_77 = ___1_y;
		V_21 = ((int64_t)il2cpp_codegen_add((int64_t)L_75, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_76), ((int64_t)(uint64_t)L_77)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_78 = ___2_z;
		uint64_t L_79 = V_21;
		NullCheck(L_78);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_79)&((int32_t)268435455))));
		uint64_t L_80 = V_21;
		V_21 = ((int64_t)((uint64_t)L_80>>((int32_t)28)));
		uint64_t L_81 = V_22;
		uint32_t L_82 = V_13;
		uint32_t L_83 = ___1_y;
		V_22 = ((int64_t)il2cpp_codegen_add((int64_t)L_81, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_82), ((int64_t)(uint64_t)L_83)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = ___2_z;
		uint64_t L_85 = V_22;
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_85)&((int32_t)268435455))));
		uint64_t L_86 = V_22;
		V_22 = ((int64_t)((uint64_t)L_86>>((int32_t)28)));
		uint64_t L_87 = V_19;
		uint32_t L_88 = V_3;
		uint32_t L_89 = ___1_y;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_87, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_88), ((int64_t)(uint64_t)L_89)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = ___2_z;
		uint64_t L_91 = V_19;
		NullCheck(L_90);
		(L_90)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_91)&((int32_t)268435455))));
		uint64_t L_92 = V_19;
		V_19 = ((int64_t)((uint64_t)L_92>>((int32_t)28)));
		uint64_t L_93 = V_20;
		uint32_t L_94 = V_7;
		uint32_t L_95 = ___1_y;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_93, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_94), ((int64_t)(uint64_t)L_95)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_96 = ___2_z;
		uint64_t L_97 = V_20;
		NullCheck(L_96);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_97)&((int32_t)268435455))));
		uint64_t L_98 = V_20;
		V_20 = ((int64_t)((uint64_t)L_98>>((int32_t)28)));
		uint64_t L_99 = V_21;
		uint32_t L_100 = V_11;
		uint32_t L_101 = ___1_y;
		V_21 = ((int64_t)il2cpp_codegen_add((int64_t)L_99, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_100), ((int64_t)(uint64_t)L_101)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_102 = ___2_z;
		uint64_t L_103 = V_21;
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_103)&((int32_t)268435455))));
		uint64_t L_104 = V_21;
		V_21 = ((int64_t)((uint64_t)L_104>>((int32_t)28)));
		uint64_t L_105 = V_22;
		uint32_t L_106 = V_14;
		uint32_t L_107 = ___1_y;
		V_22 = ((int64_t)il2cpp_codegen_add((int64_t)L_105, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_106), ((int64_t)(uint64_t)L_107)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_108 = ___2_z;
		uint64_t L_109 = V_22;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_109)&((int32_t)268435455))));
		uint64_t L_110 = V_22;
		V_22 = ((int64_t)((uint64_t)L_110>>((int32_t)28)));
		uint64_t L_111 = V_20;
		uint64_t L_112 = V_22;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_111, (int64_t)L_112));
		uint64_t L_113 = V_19;
		uint32_t L_114 = V_4;
		uint32_t L_115 = ___1_y;
		V_19 = ((int64_t)il2cpp_codegen_add((int64_t)L_113, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_114), ((int64_t)(uint64_t)L_115)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_116 = ___2_z;
		uint64_t L_117 = V_19;
		NullCheck(L_116);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_117)&((int32_t)268435455))));
		uint64_t L_118 = V_19;
		V_19 = ((int64_t)((uint64_t)L_118>>((int32_t)28)));
		uint64_t L_119 = V_20;
		uint32_t L_120 = V_8;
		uint32_t L_121 = ___1_y;
		V_20 = ((int64_t)il2cpp_codegen_add((int64_t)L_119, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_120), ((int64_t)(uint64_t)L_121)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_122 = ___2_z;
		uint64_t L_123 = V_20;
		NullCheck(L_122);
		(L_122)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_123)&((int32_t)268435455))));
		uint64_t L_124 = V_20;
		V_20 = ((int64_t)((uint64_t)L_124>>((int32_t)28)));
		uint64_t L_125 = V_21;
		uint32_t L_126 = V_12;
		uint32_t L_127 = ___1_y;
		V_21 = ((int64_t)il2cpp_codegen_add((int64_t)L_125, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_126), ((int64_t)(uint64_t)L_127)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_128 = ___2_z;
		uint64_t L_129 = V_21;
		NullCheck(L_128);
		(L_128)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_129)&((int32_t)268435455))));
		uint64_t L_130 = V_21;
		V_21 = ((int64_t)((uint64_t)L_130>>((int32_t)28)));
		uint64_t L_131 = V_22;
		uint32_t L_132 = V_0;
		uint32_t L_133 = ___1_y;
		V_22 = ((int64_t)il2cpp_codegen_add((int64_t)L_131, ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_132), ((int64_t)(uint64_t)L_133)))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_134 = ___2_z;
		uint64_t L_135 = V_22;
		NullCheck(L_134);
		(L_134)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_135)&((int32_t)268435455))));
		uint64_t L_136 = V_22;
		V_22 = ((int64_t)((uint64_t)L_136>>((int32_t)28)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_137 = ___2_z;
		uint32_t L_138 = V_15;
		uint64_t L_139 = V_22;
		NullCheck(L_137);
		(L_137)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_138, ((int32_t)(uint32_t)L_139))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_140 = ___2_z;
		uint32_t L_141 = V_16;
		uint64_t L_142 = V_19;
		NullCheck(L_140);
		(L_140)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_141, ((int32_t)(uint32_t)L_142))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_143 = ___2_z;
		uint32_t L_144 = V_17;
		uint64_t L_145 = V_20;
		NullCheck(L_143);
		(L_143)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_144, ((int32_t)(uint32_t)L_145))));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_146 = ___2_z;
		uint32_t L_147 = V_18;
		uint64_t L_148 = V_21;
		NullCheck(L_146);
		(L_146)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_147, ((int32_t)(uint32_t)L_148))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	uint32_t V_16 = 0;
	uint32_t V_17 = 0;
	uint32_t V_18 = 0;
	uint32_t V_19 = 0;
	uint32_t V_20 = 0;
	uint32_t V_21 = 0;
	uint32_t V_22 = 0;
	uint32_t V_23 = 0;
	uint32_t V_24 = 0;
	uint32_t V_25 = 0;
	uint32_t V_26 = 0;
	uint32_t V_27 = 0;
	uint32_t V_28 = 0;
	uint32_t V_29 = 0;
	uint32_t V_30 = 0;
	uint32_t V_31 = 0;
	uint32_t V_32 = 0;
	uint32_t V_33 = 0;
	uint32_t V_34 = 0;
	uint32_t V_35 = 0;
	uint32_t V_36 = 0;
	uint32_t V_37 = 0;
	uint32_t V_38 = 0;
	uint32_t V_39 = 0;
	uint32_t V_40 = 0;
	uint32_t V_41 = 0;
	uint32_t V_42 = 0;
	uint32_t V_43 = 0;
	uint32_t V_44 = 0;
	uint32_t V_45 = 0;
	uint32_t V_46 = 0;
	uint32_t V_47 = 0;
	uint32_t V_48 = 0;
	uint32_t V_49 = 0;
	uint32_t V_50 = 0;
	uint32_t V_51 = 0;
	uint32_t V_52 = 0;
	uint32_t V_53 = 0;
	uint32_t V_54 = 0;
	uint32_t V_55 = 0;
	uint32_t V_56 = 0;
	uint32_t V_57 = 0;
	uint32_t V_58 = 0;
	uint32_t V_59 = 0;
	uint32_t V_60 = 0;
	uint32_t V_61 = 0;
	uint32_t V_62 = 0;
	uint32_t V_63 = 0;
	uint64_t V_64 = 0;
	uint64_t V_65 = 0;
	uint64_t V_66 = 0;
	uint64_t V_67 = 0;
	uint64_t V_68 = 0;
	uint64_t V_69 = 0;
	uint64_t V_70 = 0;
	uint64_t V_71 = 0;
	uint64_t V_72 = 0;
	uint64_t V_73 = 0;
	uint64_t V_74 = 0;
	uint64_t V_75 = 0;
	uint64_t V_76 = 0;
	uint64_t V_77 = 0;
	uint64_t V_78 = 0;
	uint64_t V_79 = 0;
	uint64_t V_80 = 0;
	uint64_t V_81 = 0;
	uint64_t V_82 = 0;
	uint64_t V_83 = 0;
	uint64_t V_84 = 0;
	uint64_t V_85 = 0;
	uint64_t V_86 = 0;
	uint64_t V_87 = 0;
	uint64_t V_88 = 0;
	uint64_t V_89 = 0;
	uint64_t V_90 = 0;
	uint64_t V_91 = 0;
	uint64_t V_92 = 0;
	uint64_t V_93 = 0;
	uint64_t V_94 = 0;
	uint64_t V_95 = 0;
	uint64_t V_96 = 0;
	uint64_t V_97 = 0;
	uint64_t V_98 = 0;
	uint64_t V_99 = 0;
	uint64_t V_100 = 0;
	uint64_t V_101 = 0;
	uint64_t V_102 = 0;
	uint64_t V_103 = 0;
	uint64_t V_104 = 0;
	uint64_t V_105 = 0;
	uint64_t V_106 = 0;
	uint64_t V_107 = 0;
	uint64_t V_108 = 0;
	uint64_t V_109 = 0;
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
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___0_x;
		NullCheck(L_12);
		int32_t L_13 = 4;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___0_x;
		NullCheck(L_15);
		int32_t L_16 = 5;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___0_x;
		NullCheck(L_18);
		int32_t L_19 = 6;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 7;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_7 = L_23;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___0_x;
		NullCheck(L_24);
		int32_t L_25 = 8;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_8 = L_26;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		NullCheck(L_27);
		int32_t L_28 = ((int32_t)9);
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_9 = L_29;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___0_x;
		NullCheck(L_30);
		int32_t L_31 = ((int32_t)10);
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_10 = L_32;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___0_x;
		NullCheck(L_33);
		int32_t L_34 = ((int32_t)11);
		uint32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_11 = L_35;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___0_x;
		NullCheck(L_36);
		int32_t L_37 = ((int32_t)12);
		uint32_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_12 = L_38;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___0_x;
		NullCheck(L_39);
		int32_t L_40 = ((int32_t)13);
		uint32_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_13 = L_41;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ___0_x;
		NullCheck(L_42);
		int32_t L_43 = ((int32_t)14);
		uint32_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_14 = L_44;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___0_x;
		NullCheck(L_45);
		int32_t L_46 = ((int32_t)15);
		uint32_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_15 = L_47;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___1_y;
		NullCheck(L_48);
		int32_t L_49 = 0;
		uint32_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_16 = L_50;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___1_y;
		NullCheck(L_51);
		int32_t L_52 = 1;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_17 = L_53;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___1_y;
		NullCheck(L_54);
		int32_t L_55 = 2;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_18 = L_56;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___1_y;
		NullCheck(L_57);
		int32_t L_58 = 3;
		uint32_t L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_19 = L_59;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___1_y;
		NullCheck(L_60);
		int32_t L_61 = 4;
		uint32_t L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_20 = L_62;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = ___1_y;
		NullCheck(L_63);
		int32_t L_64 = 5;
		uint32_t L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		V_21 = L_65;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___1_y;
		NullCheck(L_66);
		int32_t L_67 = 6;
		uint32_t L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		V_22 = L_68;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___1_y;
		NullCheck(L_69);
		int32_t L_70 = 7;
		uint32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		V_23 = L_71;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___1_y;
		NullCheck(L_72);
		int32_t L_73 = 8;
		uint32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		V_24 = L_74;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___1_y;
		NullCheck(L_75);
		int32_t L_76 = ((int32_t)9);
		uint32_t L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		V_25 = L_77;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_78 = ___1_y;
		NullCheck(L_78);
		int32_t L_79 = ((int32_t)10);
		uint32_t L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		V_26 = L_80;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = ___1_y;
		NullCheck(L_81);
		int32_t L_82 = ((int32_t)11);
		uint32_t L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_27 = L_83;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = ___1_y;
		NullCheck(L_84);
		int32_t L_85 = ((int32_t)12);
		uint32_t L_86 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		V_28 = L_86;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = ___1_y;
		NullCheck(L_87);
		int32_t L_88 = ((int32_t)13);
		uint32_t L_89 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		V_29 = L_89;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = ___1_y;
		NullCheck(L_90);
		int32_t L_91 = ((int32_t)14);
		uint32_t L_92 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		V_30 = L_92;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_93 = ___1_y;
		NullCheck(L_93);
		int32_t L_94 = ((int32_t)15);
		uint32_t L_95 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		V_31 = L_95;
		uint32_t L_96 = V_0;
		uint32_t L_97 = V_8;
		V_32 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)L_97));
		uint32_t L_98 = V_1;
		uint32_t L_99 = V_9;
		V_33 = ((int32_t)il2cpp_codegen_add((int32_t)L_98, (int32_t)L_99));
		uint32_t L_100 = V_2;
		uint32_t L_101 = V_10;
		V_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_100, (int32_t)L_101));
		uint32_t L_102 = V_3;
		uint32_t L_103 = V_11;
		V_35 = ((int32_t)il2cpp_codegen_add((int32_t)L_102, (int32_t)L_103));
		uint32_t L_104 = V_4;
		uint32_t L_105 = V_12;
		V_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_104, (int32_t)L_105));
		uint32_t L_106 = V_5;
		uint32_t L_107 = V_13;
		V_37 = ((int32_t)il2cpp_codegen_add((int32_t)L_106, (int32_t)L_107));
		uint32_t L_108 = V_6;
		uint32_t L_109 = V_14;
		V_38 = ((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)L_109));
		uint32_t L_110 = V_7;
		uint32_t L_111 = V_15;
		V_39 = ((int32_t)il2cpp_codegen_add((int32_t)L_110, (int32_t)L_111));
		uint32_t L_112 = V_16;
		uint32_t L_113 = V_24;
		V_40 = ((int32_t)il2cpp_codegen_add((int32_t)L_112, (int32_t)L_113));
		uint32_t L_114 = V_17;
		uint32_t L_115 = V_25;
		V_41 = ((int32_t)il2cpp_codegen_add((int32_t)L_114, (int32_t)L_115));
		uint32_t L_116 = V_18;
		uint32_t L_117 = V_26;
		V_42 = ((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)L_117));
		uint32_t L_118 = V_19;
		uint32_t L_119 = V_27;
		V_43 = ((int32_t)il2cpp_codegen_add((int32_t)L_118, (int32_t)L_119));
		uint32_t L_120 = V_20;
		uint32_t L_121 = V_28;
		V_44 = ((int32_t)il2cpp_codegen_add((int32_t)L_120, (int32_t)L_121));
		uint32_t L_122 = V_21;
		uint32_t L_123 = V_29;
		V_45 = ((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)L_123));
		uint32_t L_124 = V_22;
		uint32_t L_125 = V_30;
		V_46 = ((int32_t)il2cpp_codegen_add((int32_t)L_124, (int32_t)L_125));
		uint32_t L_126 = V_23;
		uint32_t L_127 = V_31;
		V_47 = ((int32_t)il2cpp_codegen_add((int32_t)L_126, (int32_t)L_127));
		uint32_t L_128 = V_0;
		uint32_t L_129 = V_16;
		V_66 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_128), ((int64_t)(uint64_t)L_129)));
		uint32_t L_130 = V_7;
		uint32_t L_131 = V_17;
		uint32_t L_132 = V_6;
		uint32_t L_133 = V_18;
		uint32_t L_134 = V_5;
		uint32_t L_135 = V_19;
		uint32_t L_136 = V_4;
		uint32_t L_137 = V_20;
		uint32_t L_138 = V_3;
		uint32_t L_139 = V_21;
		uint32_t L_140 = V_2;
		uint32_t L_141 = V_22;
		uint32_t L_142 = V_1;
		uint32_t L_143 = V_23;
		V_67 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_130), ((int64_t)(uint64_t)L_131))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_132), ((int64_t)(uint64_t)L_133))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_134), ((int64_t)(uint64_t)L_135))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_136), ((int64_t)(uint64_t)L_137))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_138), ((int64_t)(uint64_t)L_139))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_140), ((int64_t)(uint64_t)L_141))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_142), ((int64_t)(uint64_t)L_143)))));
		uint32_t L_144 = V_8;
		uint32_t L_145 = V_24;
		V_68 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_144), ((int64_t)(uint64_t)L_145)));
		uint32_t L_146 = V_15;
		uint32_t L_147 = V_25;
		uint32_t L_148 = V_14;
		uint32_t L_149 = V_26;
		uint32_t L_150 = V_13;
		uint32_t L_151 = V_27;
		uint32_t L_152 = V_12;
		uint32_t L_153 = V_28;
		uint32_t L_154 = V_11;
		uint32_t L_155 = V_29;
		uint32_t L_156 = V_10;
		uint32_t L_157 = V_30;
		uint32_t L_158 = V_9;
		uint32_t L_159 = V_31;
		uint32_t L_160 = V_32;
		uint32_t L_161 = V_40;
		V_69 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_160), ((int64_t)(uint64_t)L_161)));
		uint32_t L_162 = V_39;
		uint32_t L_163 = V_41;
		uint32_t L_164 = V_38;
		uint32_t L_165 = V_42;
		uint32_t L_166 = V_37;
		uint32_t L_167 = V_43;
		uint32_t L_168 = V_36;
		uint32_t L_169 = V_44;
		uint32_t L_170 = V_35;
		uint32_t L_171 = V_45;
		uint32_t L_172 = V_34;
		uint32_t L_173 = V_46;
		uint32_t L_174 = V_33;
		uint32_t L_175 = V_47;
		V_70 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_162), ((int64_t)(uint64_t)L_163))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_164), ((int64_t)(uint64_t)L_165))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_166), ((int64_t)(uint64_t)L_167))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_168), ((int64_t)(uint64_t)L_169))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_170), ((int64_t)(uint64_t)L_171))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_172), ((int64_t)(uint64_t)L_173))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_174), ((int64_t)(uint64_t)L_175)))));
		uint64_t L_176 = V_66;
		uint64_t L_177 = V_68;
		uint64_t L_178 = V_70;
		uint64_t L_179 = V_67;
		V_64 = ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_176, (int64_t)L_177)), (int64_t)L_178)), (int64_t)L_179));
		uint64_t L_180 = V_64;
		V_48 = ((int32_t)(((int32_t)(uint32_t)L_180)&((int32_t)268435455)));
		uint64_t L_181 = V_64;
		V_64 = ((int64_t)((uint64_t)L_181>>((int32_t)28)));
		uint64_t L_182 = V_69;
		uint64_t L_183 = V_66;
		uint64_t L_184 = V_70;
		V_65 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_146), ((int64_t)(uint64_t)L_147))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_148), ((int64_t)(uint64_t)L_149))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_150), ((int64_t)(uint64_t)L_151))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_152), ((int64_t)(uint64_t)L_153))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_154), ((int64_t)(uint64_t)L_155))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_156), ((int64_t)(uint64_t)L_157))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_158), ((int64_t)(uint64_t)L_159))))), (int64_t)L_182)), (int64_t)L_183)), (int64_t)L_184));
		uint64_t L_185 = V_65;
		V_56 = ((int32_t)(((int32_t)(uint32_t)L_185)&((int32_t)268435455)));
		uint64_t L_186 = V_65;
		V_65 = ((int64_t)((uint64_t)L_186>>((int32_t)28)));
		uint32_t L_187 = V_1;
		uint32_t L_188 = V_16;
		uint32_t L_189 = V_0;
		uint32_t L_190 = V_17;
		V_71 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_187), ((int64_t)(uint64_t)L_188))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_189), ((int64_t)(uint64_t)L_190)))));
		uint32_t L_191 = V_7;
		uint32_t L_192 = V_18;
		uint32_t L_193 = V_6;
		uint32_t L_194 = V_19;
		uint32_t L_195 = V_5;
		uint32_t L_196 = V_20;
		uint32_t L_197 = V_4;
		uint32_t L_198 = V_21;
		uint32_t L_199 = V_3;
		uint32_t L_200 = V_22;
		uint32_t L_201 = V_2;
		uint32_t L_202 = V_23;
		V_72 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_191), ((int64_t)(uint64_t)L_192))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_193), ((int64_t)(uint64_t)L_194))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_195), ((int64_t)(uint64_t)L_196))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_197), ((int64_t)(uint64_t)L_198))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_199), ((int64_t)(uint64_t)L_200))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_201), ((int64_t)(uint64_t)L_202)))));
		uint32_t L_203 = V_9;
		uint32_t L_204 = V_24;
		uint32_t L_205 = V_8;
		uint32_t L_206 = V_25;
		V_73 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_203), ((int64_t)(uint64_t)L_204))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_205), ((int64_t)(uint64_t)L_206)))));
		uint32_t L_207 = V_15;
		uint32_t L_208 = V_26;
		uint32_t L_209 = V_14;
		uint32_t L_210 = V_27;
		uint32_t L_211 = V_13;
		uint32_t L_212 = V_28;
		uint32_t L_213 = V_12;
		uint32_t L_214 = V_29;
		uint32_t L_215 = V_11;
		uint32_t L_216 = V_30;
		uint32_t L_217 = V_10;
		uint32_t L_218 = V_31;
		V_74 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_207), ((int64_t)(uint64_t)L_208))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_209), ((int64_t)(uint64_t)L_210))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_211), ((int64_t)(uint64_t)L_212))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_213), ((int64_t)(uint64_t)L_214))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_215), ((int64_t)(uint64_t)L_216))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_217), ((int64_t)(uint64_t)L_218)))));
		uint32_t L_219 = V_33;
		uint32_t L_220 = V_40;
		uint32_t L_221 = V_32;
		uint32_t L_222 = V_41;
		V_75 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_219), ((int64_t)(uint64_t)L_220))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_221), ((int64_t)(uint64_t)L_222)))));
		uint32_t L_223 = V_39;
		uint32_t L_224 = V_42;
		uint32_t L_225 = V_38;
		uint32_t L_226 = V_43;
		uint32_t L_227 = V_37;
		uint32_t L_228 = V_44;
		uint32_t L_229 = V_36;
		uint32_t L_230 = V_45;
		uint32_t L_231 = V_35;
		uint32_t L_232 = V_46;
		uint32_t L_233 = V_34;
		uint32_t L_234 = V_47;
		V_76 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_223), ((int64_t)(uint64_t)L_224))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_225), ((int64_t)(uint64_t)L_226))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_227), ((int64_t)(uint64_t)L_228))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_229), ((int64_t)(uint64_t)L_230))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_231), ((int64_t)(uint64_t)L_232))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_233), ((int64_t)(uint64_t)L_234)))));
		uint64_t L_235 = V_64;
		uint64_t L_236 = V_71;
		uint64_t L_237 = V_73;
		uint64_t L_238 = V_76;
		uint64_t L_239 = V_72;
		V_64 = ((int64_t)il2cpp_codegen_add((int64_t)L_235, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_236, (int64_t)L_237)), (int64_t)L_238)), (int64_t)L_239))));
		uint64_t L_240 = V_64;
		V_49 = ((int32_t)(((int32_t)(uint32_t)L_240)&((int32_t)268435455)));
		uint64_t L_241 = V_64;
		V_64 = ((int64_t)((uint64_t)L_241>>((int32_t)28)));
		uint64_t L_242 = V_65;
		uint64_t L_243 = V_74;
		uint64_t L_244 = V_75;
		uint64_t L_245 = V_71;
		uint64_t L_246 = V_76;
		V_65 = ((int64_t)il2cpp_codegen_add((int64_t)L_242, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add((int64_t)L_243, (int64_t)L_244)), (int64_t)L_245)), (int64_t)L_246))));
		uint64_t L_247 = V_65;
		V_57 = ((int32_t)(((int32_t)(uint32_t)L_247)&((int32_t)268435455)));
		uint64_t L_248 = V_65;
		V_65 = ((int64_t)((uint64_t)L_248>>((int32_t)28)));
		uint32_t L_249 = V_2;
		uint32_t L_250 = V_16;
		uint32_t L_251 = V_1;
		uint32_t L_252 = V_17;
		uint32_t L_253 = V_0;
		uint32_t L_254 = V_18;
		V_77 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_249), ((int64_t)(uint64_t)L_250))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_251), ((int64_t)(uint64_t)L_252))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_253), ((int64_t)(uint64_t)L_254)))));
		uint32_t L_255 = V_7;
		uint32_t L_256 = V_19;
		uint32_t L_257 = V_6;
		uint32_t L_258 = V_20;
		uint32_t L_259 = V_5;
		uint32_t L_260 = V_21;
		uint32_t L_261 = V_4;
		uint32_t L_262 = V_22;
		uint32_t L_263 = V_3;
		uint32_t L_264 = V_23;
		V_78 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_255), ((int64_t)(uint64_t)L_256))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_257), ((int64_t)(uint64_t)L_258))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_259), ((int64_t)(uint64_t)L_260))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_261), ((int64_t)(uint64_t)L_262))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_263), ((int64_t)(uint64_t)L_264)))));
		uint32_t L_265 = V_10;
		uint32_t L_266 = V_24;
		uint32_t L_267 = V_9;
		uint32_t L_268 = V_25;
		uint32_t L_269 = V_8;
		uint32_t L_270 = V_26;
		V_79 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_265), ((int64_t)(uint64_t)L_266))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_267), ((int64_t)(uint64_t)L_268))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_269), ((int64_t)(uint64_t)L_270)))));
		uint32_t L_271 = V_15;
		uint32_t L_272 = V_27;
		uint32_t L_273 = V_14;
		uint32_t L_274 = V_28;
		uint32_t L_275 = V_13;
		uint32_t L_276 = V_29;
		uint32_t L_277 = V_12;
		uint32_t L_278 = V_30;
		uint32_t L_279 = V_11;
		uint32_t L_280 = V_31;
		V_80 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_271), ((int64_t)(uint64_t)L_272))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_273), ((int64_t)(uint64_t)L_274))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_275), ((int64_t)(uint64_t)L_276))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_277), ((int64_t)(uint64_t)L_278))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_279), ((int64_t)(uint64_t)L_280)))));
		uint32_t L_281 = V_34;
		uint32_t L_282 = V_40;
		uint32_t L_283 = V_33;
		uint32_t L_284 = V_41;
		uint32_t L_285 = V_32;
		uint32_t L_286 = V_42;
		V_81 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_281), ((int64_t)(uint64_t)L_282))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_283), ((int64_t)(uint64_t)L_284))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_285), ((int64_t)(uint64_t)L_286)))));
		uint32_t L_287 = V_39;
		uint32_t L_288 = V_43;
		uint32_t L_289 = V_38;
		uint32_t L_290 = V_44;
		uint32_t L_291 = V_37;
		uint32_t L_292 = V_45;
		uint32_t L_293 = V_36;
		uint32_t L_294 = V_46;
		uint32_t L_295 = V_35;
		uint32_t L_296 = V_47;
		V_82 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_287), ((int64_t)(uint64_t)L_288))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_289), ((int64_t)(uint64_t)L_290))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_291), ((int64_t)(uint64_t)L_292))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_293), ((int64_t)(uint64_t)L_294))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_295), ((int64_t)(uint64_t)L_296)))));
		uint64_t L_297 = V_64;
		uint64_t L_298 = V_77;
		uint64_t L_299 = V_79;
		uint64_t L_300 = V_82;
		uint64_t L_301 = V_78;
		V_64 = ((int64_t)il2cpp_codegen_add((int64_t)L_297, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_298, (int64_t)L_299)), (int64_t)L_300)), (int64_t)L_301))));
		uint64_t L_302 = V_64;
		V_50 = ((int32_t)(((int32_t)(uint32_t)L_302)&((int32_t)268435455)));
		uint64_t L_303 = V_64;
		V_64 = ((int64_t)((uint64_t)L_303>>((int32_t)28)));
		uint64_t L_304 = V_65;
		uint64_t L_305 = V_80;
		uint64_t L_306 = V_81;
		uint64_t L_307 = V_77;
		uint64_t L_308 = V_82;
		V_65 = ((int64_t)il2cpp_codegen_add((int64_t)L_304, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add((int64_t)L_305, (int64_t)L_306)), (int64_t)L_307)), (int64_t)L_308))));
		uint64_t L_309 = V_65;
		V_58 = ((int32_t)(((int32_t)(uint32_t)L_309)&((int32_t)268435455)));
		uint64_t L_310 = V_65;
		V_65 = ((int64_t)((uint64_t)L_310>>((int32_t)28)));
		uint32_t L_311 = V_3;
		uint32_t L_312 = V_16;
		uint32_t L_313 = V_2;
		uint32_t L_314 = V_17;
		uint32_t L_315 = V_1;
		uint32_t L_316 = V_18;
		uint32_t L_317 = V_0;
		uint32_t L_318 = V_19;
		V_83 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_311), ((int64_t)(uint64_t)L_312))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_313), ((int64_t)(uint64_t)L_314))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_315), ((int64_t)(uint64_t)L_316))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_317), ((int64_t)(uint64_t)L_318)))));
		uint32_t L_319 = V_7;
		uint32_t L_320 = V_20;
		uint32_t L_321 = V_6;
		uint32_t L_322 = V_21;
		uint32_t L_323 = V_5;
		uint32_t L_324 = V_22;
		uint32_t L_325 = V_4;
		uint32_t L_326 = V_23;
		V_84 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_319), ((int64_t)(uint64_t)L_320))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_321), ((int64_t)(uint64_t)L_322))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_323), ((int64_t)(uint64_t)L_324))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_325), ((int64_t)(uint64_t)L_326)))));
		uint32_t L_327 = V_11;
		uint32_t L_328 = V_24;
		uint32_t L_329 = V_10;
		uint32_t L_330 = V_25;
		uint32_t L_331 = V_9;
		uint32_t L_332 = V_26;
		uint32_t L_333 = V_8;
		uint32_t L_334 = V_27;
		V_85 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_327), ((int64_t)(uint64_t)L_328))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_329), ((int64_t)(uint64_t)L_330))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_331), ((int64_t)(uint64_t)L_332))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_333), ((int64_t)(uint64_t)L_334)))));
		uint32_t L_335 = V_15;
		uint32_t L_336 = V_28;
		uint32_t L_337 = V_14;
		uint32_t L_338 = V_29;
		uint32_t L_339 = V_13;
		uint32_t L_340 = V_30;
		uint32_t L_341 = V_12;
		uint32_t L_342 = V_31;
		V_86 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_335), ((int64_t)(uint64_t)L_336))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_337), ((int64_t)(uint64_t)L_338))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_339), ((int64_t)(uint64_t)L_340))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_341), ((int64_t)(uint64_t)L_342)))));
		uint32_t L_343 = V_35;
		uint32_t L_344 = V_40;
		uint32_t L_345 = V_34;
		uint32_t L_346 = V_41;
		uint32_t L_347 = V_33;
		uint32_t L_348 = V_42;
		uint32_t L_349 = V_32;
		uint32_t L_350 = V_43;
		V_87 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_343), ((int64_t)(uint64_t)L_344))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_345), ((int64_t)(uint64_t)L_346))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_347), ((int64_t)(uint64_t)L_348))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_349), ((int64_t)(uint64_t)L_350)))));
		uint32_t L_351 = V_39;
		uint32_t L_352 = V_44;
		uint32_t L_353 = V_38;
		uint32_t L_354 = V_45;
		uint32_t L_355 = V_37;
		uint32_t L_356 = V_46;
		uint32_t L_357 = V_36;
		uint32_t L_358 = V_47;
		V_88 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_351), ((int64_t)(uint64_t)L_352))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_353), ((int64_t)(uint64_t)L_354))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_355), ((int64_t)(uint64_t)L_356))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_357), ((int64_t)(uint64_t)L_358)))));
		uint64_t L_359 = V_64;
		uint64_t L_360 = V_83;
		uint64_t L_361 = V_85;
		uint64_t L_362 = V_88;
		uint64_t L_363 = V_84;
		V_64 = ((int64_t)il2cpp_codegen_add((int64_t)L_359, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_360, (int64_t)L_361)), (int64_t)L_362)), (int64_t)L_363))));
		uint64_t L_364 = V_64;
		V_51 = ((int32_t)(((int32_t)(uint32_t)L_364)&((int32_t)268435455)));
		uint64_t L_365 = V_64;
		V_64 = ((int64_t)((uint64_t)L_365>>((int32_t)28)));
		uint64_t L_366 = V_65;
		uint64_t L_367 = V_86;
		uint64_t L_368 = V_87;
		uint64_t L_369 = V_83;
		uint64_t L_370 = V_88;
		V_65 = ((int64_t)il2cpp_codegen_add((int64_t)L_366, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add((int64_t)L_367, (int64_t)L_368)), (int64_t)L_369)), (int64_t)L_370))));
		uint64_t L_371 = V_65;
		V_59 = ((int32_t)(((int32_t)(uint32_t)L_371)&((int32_t)268435455)));
		uint64_t L_372 = V_65;
		V_65 = ((int64_t)((uint64_t)L_372>>((int32_t)28)));
		uint32_t L_373 = V_4;
		uint32_t L_374 = V_16;
		uint32_t L_375 = V_3;
		uint32_t L_376 = V_17;
		uint32_t L_377 = V_2;
		uint32_t L_378 = V_18;
		uint32_t L_379 = V_1;
		uint32_t L_380 = V_19;
		uint32_t L_381 = V_0;
		uint32_t L_382 = V_20;
		V_89 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_373), ((int64_t)(uint64_t)L_374))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_375), ((int64_t)(uint64_t)L_376))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_377), ((int64_t)(uint64_t)L_378))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_379), ((int64_t)(uint64_t)L_380))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_381), ((int64_t)(uint64_t)L_382)))));
		uint32_t L_383 = V_7;
		uint32_t L_384 = V_21;
		uint32_t L_385 = V_6;
		uint32_t L_386 = V_22;
		uint32_t L_387 = V_5;
		uint32_t L_388 = V_23;
		V_90 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_383), ((int64_t)(uint64_t)L_384))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_385), ((int64_t)(uint64_t)L_386))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_387), ((int64_t)(uint64_t)L_388)))));
		uint32_t L_389 = V_12;
		uint32_t L_390 = V_24;
		uint32_t L_391 = V_11;
		uint32_t L_392 = V_25;
		uint32_t L_393 = V_10;
		uint32_t L_394 = V_26;
		uint32_t L_395 = V_9;
		uint32_t L_396 = V_27;
		uint32_t L_397 = V_8;
		uint32_t L_398 = V_28;
		V_91 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_389), ((int64_t)(uint64_t)L_390))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_391), ((int64_t)(uint64_t)L_392))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_393), ((int64_t)(uint64_t)L_394))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_395), ((int64_t)(uint64_t)L_396))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_397), ((int64_t)(uint64_t)L_398)))));
		uint32_t L_399 = V_15;
		uint32_t L_400 = V_29;
		uint32_t L_401 = V_14;
		uint32_t L_402 = V_30;
		uint32_t L_403 = V_13;
		uint32_t L_404 = V_31;
		V_92 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_399), ((int64_t)(uint64_t)L_400))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_401), ((int64_t)(uint64_t)L_402))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_403), ((int64_t)(uint64_t)L_404)))));
		uint32_t L_405 = V_36;
		uint32_t L_406 = V_40;
		uint32_t L_407 = V_35;
		uint32_t L_408 = V_41;
		uint32_t L_409 = V_34;
		uint32_t L_410 = V_42;
		uint32_t L_411 = V_33;
		uint32_t L_412 = V_43;
		uint32_t L_413 = V_32;
		uint32_t L_414 = V_44;
		V_93 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_405), ((int64_t)(uint64_t)L_406))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_407), ((int64_t)(uint64_t)L_408))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_409), ((int64_t)(uint64_t)L_410))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_411), ((int64_t)(uint64_t)L_412))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_413), ((int64_t)(uint64_t)L_414)))));
		uint32_t L_415 = V_39;
		uint32_t L_416 = V_45;
		uint32_t L_417 = V_38;
		uint32_t L_418 = V_46;
		uint32_t L_419 = V_37;
		uint32_t L_420 = V_47;
		V_94 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_415), ((int64_t)(uint64_t)L_416))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_417), ((int64_t)(uint64_t)L_418))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_419), ((int64_t)(uint64_t)L_420)))));
		uint64_t L_421 = V_64;
		uint64_t L_422 = V_89;
		uint64_t L_423 = V_91;
		uint64_t L_424 = V_94;
		uint64_t L_425 = V_90;
		V_64 = ((int64_t)il2cpp_codegen_add((int64_t)L_421, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_422, (int64_t)L_423)), (int64_t)L_424)), (int64_t)L_425))));
		uint64_t L_426 = V_64;
		V_52 = ((int32_t)(((int32_t)(uint32_t)L_426)&((int32_t)268435455)));
		uint64_t L_427 = V_64;
		V_64 = ((int64_t)((uint64_t)L_427>>((int32_t)28)));
		uint64_t L_428 = V_65;
		uint64_t L_429 = V_92;
		uint64_t L_430 = V_93;
		uint64_t L_431 = V_89;
		uint64_t L_432 = V_94;
		V_65 = ((int64_t)il2cpp_codegen_add((int64_t)L_428, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add((int64_t)L_429, (int64_t)L_430)), (int64_t)L_431)), (int64_t)L_432))));
		uint64_t L_433 = V_65;
		V_60 = ((int32_t)(((int32_t)(uint32_t)L_433)&((int32_t)268435455)));
		uint64_t L_434 = V_65;
		V_65 = ((int64_t)((uint64_t)L_434>>((int32_t)28)));
		uint32_t L_435 = V_5;
		uint32_t L_436 = V_16;
		uint32_t L_437 = V_4;
		uint32_t L_438 = V_17;
		uint32_t L_439 = V_3;
		uint32_t L_440 = V_18;
		uint32_t L_441 = V_2;
		uint32_t L_442 = V_19;
		uint32_t L_443 = V_1;
		uint32_t L_444 = V_20;
		uint32_t L_445 = V_0;
		uint32_t L_446 = V_21;
		V_95 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_435), ((int64_t)(uint64_t)L_436))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_437), ((int64_t)(uint64_t)L_438))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_439), ((int64_t)(uint64_t)L_440))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_441), ((int64_t)(uint64_t)L_442))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_443), ((int64_t)(uint64_t)L_444))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_445), ((int64_t)(uint64_t)L_446)))));
		uint32_t L_447 = V_7;
		uint32_t L_448 = V_22;
		uint32_t L_449 = V_6;
		uint32_t L_450 = V_23;
		V_96 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_447), ((int64_t)(uint64_t)L_448))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_449), ((int64_t)(uint64_t)L_450)))));
		uint32_t L_451 = V_13;
		uint32_t L_452 = V_24;
		uint32_t L_453 = V_12;
		uint32_t L_454 = V_25;
		uint32_t L_455 = V_11;
		uint32_t L_456 = V_26;
		uint32_t L_457 = V_10;
		uint32_t L_458 = V_27;
		uint32_t L_459 = V_9;
		uint32_t L_460 = V_28;
		uint32_t L_461 = V_8;
		uint32_t L_462 = V_29;
		V_97 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_451), ((int64_t)(uint64_t)L_452))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_453), ((int64_t)(uint64_t)L_454))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_455), ((int64_t)(uint64_t)L_456))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_457), ((int64_t)(uint64_t)L_458))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_459), ((int64_t)(uint64_t)L_460))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_461), ((int64_t)(uint64_t)L_462)))));
		uint32_t L_463 = V_15;
		uint32_t L_464 = V_30;
		uint32_t L_465 = V_14;
		uint32_t L_466 = V_31;
		V_98 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_463), ((int64_t)(uint64_t)L_464))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_465), ((int64_t)(uint64_t)L_466)))));
		uint32_t L_467 = V_37;
		uint32_t L_468 = V_40;
		uint32_t L_469 = V_36;
		uint32_t L_470 = V_41;
		uint32_t L_471 = V_35;
		uint32_t L_472 = V_42;
		uint32_t L_473 = V_34;
		uint32_t L_474 = V_43;
		uint32_t L_475 = V_33;
		uint32_t L_476 = V_44;
		uint32_t L_477 = V_32;
		uint32_t L_478 = V_45;
		V_99 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_467), ((int64_t)(uint64_t)L_468))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_469), ((int64_t)(uint64_t)L_470))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_471), ((int64_t)(uint64_t)L_472))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_473), ((int64_t)(uint64_t)L_474))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_475), ((int64_t)(uint64_t)L_476))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_477), ((int64_t)(uint64_t)L_478)))));
		uint32_t L_479 = V_39;
		uint32_t L_480 = V_46;
		uint32_t L_481 = V_38;
		uint32_t L_482 = V_47;
		V_100 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_479), ((int64_t)(uint64_t)L_480))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_481), ((int64_t)(uint64_t)L_482)))));
		uint64_t L_483 = V_64;
		uint64_t L_484 = V_95;
		uint64_t L_485 = V_97;
		uint64_t L_486 = V_100;
		uint64_t L_487 = V_96;
		V_64 = ((int64_t)il2cpp_codegen_add((int64_t)L_483, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_484, (int64_t)L_485)), (int64_t)L_486)), (int64_t)L_487))));
		uint64_t L_488 = V_64;
		V_53 = ((int32_t)(((int32_t)(uint32_t)L_488)&((int32_t)268435455)));
		uint64_t L_489 = V_64;
		V_64 = ((int64_t)((uint64_t)L_489>>((int32_t)28)));
		uint64_t L_490 = V_65;
		uint64_t L_491 = V_98;
		uint64_t L_492 = V_99;
		uint64_t L_493 = V_95;
		uint64_t L_494 = V_100;
		V_65 = ((int64_t)il2cpp_codegen_add((int64_t)L_490, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add((int64_t)L_491, (int64_t)L_492)), (int64_t)L_493)), (int64_t)L_494))));
		uint64_t L_495 = V_65;
		V_61 = ((int32_t)(((int32_t)(uint32_t)L_495)&((int32_t)268435455)));
		uint64_t L_496 = V_65;
		V_65 = ((int64_t)((uint64_t)L_496>>((int32_t)28)));
		uint32_t L_497 = V_6;
		uint32_t L_498 = V_16;
		uint32_t L_499 = V_5;
		uint32_t L_500 = V_17;
		uint32_t L_501 = V_4;
		uint32_t L_502 = V_18;
		uint32_t L_503 = V_3;
		uint32_t L_504 = V_19;
		uint32_t L_505 = V_2;
		uint32_t L_506 = V_20;
		uint32_t L_507 = V_1;
		uint32_t L_508 = V_21;
		uint32_t L_509 = V_0;
		uint32_t L_510 = V_22;
		V_101 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_497), ((int64_t)(uint64_t)L_498))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_499), ((int64_t)(uint64_t)L_500))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_501), ((int64_t)(uint64_t)L_502))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_503), ((int64_t)(uint64_t)L_504))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_505), ((int64_t)(uint64_t)L_506))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_507), ((int64_t)(uint64_t)L_508))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_509), ((int64_t)(uint64_t)L_510)))));
		uint32_t L_511 = V_7;
		uint32_t L_512 = V_23;
		V_102 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_511), ((int64_t)(uint64_t)L_512)));
		uint32_t L_513 = V_14;
		uint32_t L_514 = V_24;
		uint32_t L_515 = V_13;
		uint32_t L_516 = V_25;
		uint32_t L_517 = V_12;
		uint32_t L_518 = V_26;
		uint32_t L_519 = V_11;
		uint32_t L_520 = V_27;
		uint32_t L_521 = V_10;
		uint32_t L_522 = V_28;
		uint32_t L_523 = V_9;
		uint32_t L_524 = V_29;
		uint32_t L_525 = V_8;
		uint32_t L_526 = V_30;
		V_103 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_513), ((int64_t)(uint64_t)L_514))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_515), ((int64_t)(uint64_t)L_516))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_517), ((int64_t)(uint64_t)L_518))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_519), ((int64_t)(uint64_t)L_520))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_521), ((int64_t)(uint64_t)L_522))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_523), ((int64_t)(uint64_t)L_524))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_525), ((int64_t)(uint64_t)L_526)))));
		uint32_t L_527 = V_15;
		uint32_t L_528 = V_31;
		V_104 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_527), ((int64_t)(uint64_t)L_528)));
		uint32_t L_529 = V_38;
		uint32_t L_530 = V_40;
		uint32_t L_531 = V_37;
		uint32_t L_532 = V_41;
		uint32_t L_533 = V_36;
		uint32_t L_534 = V_42;
		uint32_t L_535 = V_35;
		uint32_t L_536 = V_43;
		uint32_t L_537 = V_34;
		uint32_t L_538 = V_44;
		uint32_t L_539 = V_33;
		uint32_t L_540 = V_45;
		uint32_t L_541 = V_32;
		uint32_t L_542 = V_46;
		V_105 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_529), ((int64_t)(uint64_t)L_530))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_531), ((int64_t)(uint64_t)L_532))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_533), ((int64_t)(uint64_t)L_534))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_535), ((int64_t)(uint64_t)L_536))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_537), ((int64_t)(uint64_t)L_538))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_539), ((int64_t)(uint64_t)L_540))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_541), ((int64_t)(uint64_t)L_542)))));
		uint32_t L_543 = V_39;
		uint32_t L_544 = V_47;
		V_106 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_543), ((int64_t)(uint64_t)L_544)));
		uint64_t L_545 = V_64;
		uint64_t L_546 = V_101;
		uint64_t L_547 = V_103;
		uint64_t L_548 = V_106;
		uint64_t L_549 = V_102;
		V_64 = ((int64_t)il2cpp_codegen_add((int64_t)L_545, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_546, (int64_t)L_547)), (int64_t)L_548)), (int64_t)L_549))));
		uint64_t L_550 = V_64;
		V_54 = ((int32_t)(((int32_t)(uint32_t)L_550)&((int32_t)268435455)));
		uint64_t L_551 = V_64;
		V_64 = ((int64_t)((uint64_t)L_551>>((int32_t)28)));
		uint64_t L_552 = V_65;
		uint64_t L_553 = V_104;
		uint64_t L_554 = V_105;
		uint64_t L_555 = V_101;
		uint64_t L_556 = V_106;
		V_65 = ((int64_t)il2cpp_codegen_add((int64_t)L_552, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add((int64_t)L_553, (int64_t)L_554)), (int64_t)L_555)), (int64_t)L_556))));
		uint64_t L_557 = V_65;
		V_62 = ((int32_t)(((int32_t)(uint32_t)L_557)&((int32_t)268435455)));
		uint64_t L_558 = V_65;
		V_65 = ((int64_t)((uint64_t)L_558>>((int32_t)28)));
		uint32_t L_559 = V_7;
		uint32_t L_560 = V_16;
		uint32_t L_561 = V_6;
		uint32_t L_562 = V_17;
		uint32_t L_563 = V_5;
		uint32_t L_564 = V_18;
		uint32_t L_565 = V_4;
		uint32_t L_566 = V_19;
		uint32_t L_567 = V_3;
		uint32_t L_568 = V_20;
		uint32_t L_569 = V_2;
		uint32_t L_570 = V_21;
		uint32_t L_571 = V_1;
		uint32_t L_572 = V_22;
		uint32_t L_573 = V_0;
		uint32_t L_574 = V_23;
		V_107 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_559), ((int64_t)(uint64_t)L_560))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_561), ((int64_t)(uint64_t)L_562))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_563), ((int64_t)(uint64_t)L_564))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_565), ((int64_t)(uint64_t)L_566))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_567), ((int64_t)(uint64_t)L_568))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_569), ((int64_t)(uint64_t)L_570))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_571), ((int64_t)(uint64_t)L_572))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_573), ((int64_t)(uint64_t)L_574)))));
		uint32_t L_575 = V_15;
		uint32_t L_576 = V_24;
		uint32_t L_577 = V_14;
		uint32_t L_578 = V_25;
		uint32_t L_579 = V_13;
		uint32_t L_580 = V_26;
		uint32_t L_581 = V_12;
		uint32_t L_582 = V_27;
		uint32_t L_583 = V_11;
		uint32_t L_584 = V_28;
		uint32_t L_585 = V_10;
		uint32_t L_586 = V_29;
		uint32_t L_587 = V_9;
		uint32_t L_588 = V_30;
		uint32_t L_589 = V_8;
		uint32_t L_590 = V_31;
		V_108 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_575), ((int64_t)(uint64_t)L_576))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_577), ((int64_t)(uint64_t)L_578))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_579), ((int64_t)(uint64_t)L_580))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_581), ((int64_t)(uint64_t)L_582))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_583), ((int64_t)(uint64_t)L_584))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_585), ((int64_t)(uint64_t)L_586))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_587), ((int64_t)(uint64_t)L_588))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_589), ((int64_t)(uint64_t)L_590)))));
		uint32_t L_591 = V_39;
		uint32_t L_592 = V_40;
		uint32_t L_593 = V_38;
		uint32_t L_594 = V_41;
		uint32_t L_595 = V_37;
		uint32_t L_596 = V_42;
		uint32_t L_597 = V_36;
		uint32_t L_598 = V_43;
		uint32_t L_599 = V_35;
		uint32_t L_600 = V_44;
		uint32_t L_601 = V_34;
		uint32_t L_602 = V_45;
		uint32_t L_603 = V_33;
		uint32_t L_604 = V_46;
		uint32_t L_605 = V_32;
		uint32_t L_606 = V_47;
		V_109 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_591), ((int64_t)(uint64_t)L_592))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_593), ((int64_t)(uint64_t)L_594))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_595), ((int64_t)(uint64_t)L_596))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_597), ((int64_t)(uint64_t)L_598))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_599), ((int64_t)(uint64_t)L_600))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_601), ((int64_t)(uint64_t)L_602))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_603), ((int64_t)(uint64_t)L_604))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_605), ((int64_t)(uint64_t)L_606)))));
		uint64_t L_607 = V_64;
		uint64_t L_608 = V_107;
		uint64_t L_609 = V_108;
		V_64 = ((int64_t)il2cpp_codegen_add((int64_t)L_607, ((int64_t)il2cpp_codegen_add((int64_t)L_608, (int64_t)L_609))));
		uint64_t L_610 = V_64;
		V_55 = ((int32_t)(((int32_t)(uint32_t)L_610)&((int32_t)268435455)));
		uint64_t L_611 = V_64;
		V_64 = ((int64_t)((uint64_t)L_611>>((int32_t)28)));
		uint64_t L_612 = V_65;
		uint64_t L_613 = V_109;
		uint64_t L_614 = V_107;
		V_65 = ((int64_t)il2cpp_codegen_add((int64_t)L_612, ((int64_t)il2cpp_codegen_subtract((int64_t)L_613, (int64_t)L_614))));
		uint64_t L_615 = V_65;
		V_63 = ((int32_t)(((int32_t)(uint32_t)L_615)&((int32_t)268435455)));
		uint64_t L_616 = V_65;
		V_65 = ((int64_t)((uint64_t)L_616>>((int32_t)28)));
		uint64_t L_617 = V_64;
		uint64_t L_618 = V_65;
		V_64 = ((int64_t)il2cpp_codegen_add((int64_t)L_617, (int64_t)L_618));
		uint64_t L_619 = V_64;
		uint32_t L_620 = V_56;
		V_64 = ((int64_t)il2cpp_codegen_add((int64_t)L_619, ((int64_t)(uint64_t)L_620)));
		uint64_t L_621 = V_64;
		V_56 = ((int32_t)(((int32_t)(uint32_t)L_621)&((int32_t)268435455)));
		uint64_t L_622 = V_64;
		V_64 = ((int64_t)((uint64_t)L_622>>((int32_t)28)));
		uint64_t L_623 = V_65;
		uint32_t L_624 = V_48;
		V_65 = ((int64_t)il2cpp_codegen_add((int64_t)L_623, ((int64_t)(uint64_t)L_624)));
		uint64_t L_625 = V_65;
		V_48 = ((int32_t)(((int32_t)(uint32_t)L_625)&((int32_t)268435455)));
		uint64_t L_626 = V_65;
		V_65 = ((int64_t)((uint64_t)L_626>>((int32_t)28)));
		uint32_t L_627 = V_57;
		uint64_t L_628 = V_64;
		V_57 = ((int32_t)il2cpp_codegen_add((int32_t)L_627, ((int32_t)(uint32_t)L_628)));
		uint32_t L_629 = V_49;
		uint64_t L_630 = V_65;
		V_49 = ((int32_t)il2cpp_codegen_add((int32_t)L_629, ((int32_t)(uint32_t)L_630)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_631 = ___2_z;
		uint32_t L_632 = V_48;
		NullCheck(L_631);
		(L_631)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_632);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_633 = ___2_z;
		uint32_t L_634 = V_49;
		NullCheck(L_633);
		(L_633)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_634);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_635 = ___2_z;
		uint32_t L_636 = V_50;
		NullCheck(L_635);
		(L_635)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_636);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_637 = ___2_z;
		uint32_t L_638 = V_51;
		NullCheck(L_637);
		(L_637)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_638);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_639 = ___2_z;
		uint32_t L_640 = V_52;
		NullCheck(L_639);
		(L_639)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)L_640);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_641 = ___2_z;
		uint32_t L_642 = V_53;
		NullCheck(L_641);
		(L_641)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)L_642);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_643 = ___2_z;
		uint32_t L_644 = V_54;
		NullCheck(L_643);
		(L_643)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)L_644);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_645 = ___2_z;
		uint32_t L_646 = V_55;
		NullCheck(L_645);
		(L_645)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)L_646);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_647 = ___2_z;
		uint32_t L_648 = V_56;
		NullCheck(L_647);
		(L_647)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint32_t)L_648);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_649 = ___2_z;
		uint32_t L_650 = V_57;
		NullCheck(L_649);
		(L_649)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint32_t)L_650);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_651 = ___2_z;
		uint32_t L_652 = V_58;
		NullCheck(L_651);
		(L_651)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint32_t)L_652);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_653 = ___2_z;
		uint32_t L_654 = V_59;
		NullCheck(L_653);
		(L_653)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint32_t)L_654);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_655 = ___2_z;
		uint32_t L_656 = V_60;
		NullCheck(L_655);
		(L_655)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint32_t)L_656);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_657 = ___2_z;
		uint32_t L_658 = V_61;
		NullCheck(L_657);
		(L_657)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint32_t)L_658);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_659 = ___2_z;
		uint32_t L_660 = V_62;
		NullCheck(L_659);
		(L_659)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint32_t)L_660);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_661 = ___2_z;
		uint32_t L_662 = V_63;
		NullCheck(L_661);
		(L_661)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint32_t)L_662);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Negate_mBF98477D36756508975C89717D0F4F5ED7590956 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___1_z;
		X448Field_Sub_mBFA894A2EA11C691607571A006356D308952945E(L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Normalize_mF473952189B87EBD9915C6D49F69511F3A056A34 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_z, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_z;
		X448Field_Reduce_m55F5A199F9E88EB69C51FE10311E4ED37B200891(L_0, 1, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_z;
		X448Field_Reduce_m55F5A199F9E88EB69C51FE10311E4ED37B200891(L_1, (-1), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_One_m39BF2AA4124E41CD828C54B977F7956073C7616C (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_z, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_z;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)1);
		V_0 = 1;
		goto IL_0010;
	}

IL_0008:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_z;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (uint32_t)0);
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0010:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)16))))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_PowPm3d4_m542F80EF0B4562CBC33DEC553D2EEEC507161CB0 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_4 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_5 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_6 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_7 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_8 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_9 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_10 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_11 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = V_0;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_1, L_2, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_0;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_3, L_4, L_5, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6;
		L_6 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_1 = L_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_1;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_7, L_8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_1;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_9, L_10, L_11, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12;
		L_12 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_2 = L_12;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_2;
		X448Field_Sqr_m17DF280AD326A592C466FD195CDC57B87F7120C9(L_13, 3, L_14, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_2;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_15, L_16, L_17, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18;
		L_18 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_3 = L_18;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_3;
		X448Field_Sqr_m17DF280AD326A592C466FD195CDC57B87F7120C9(L_19, 3, L_20, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_3;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_21, L_22, L_23, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24;
		L_24 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_4 = L_24;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_4;
		X448Field_Sqr_m17DF280AD326A592C466FD195CDC57B87F7120C9(L_25, ((int32_t)9), L_26, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_4;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_27, L_28, L_29, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30;
		L_30 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_5 = L_30;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_5;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_31, L_32, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_35 = V_5;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_33, L_34, L_35, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36;
		L_36 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_6 = L_36;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = V_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38 = V_6;
		X448Field_Sqr_m17DF280AD326A592C466FD195CDC57B87F7120C9(L_37, ((int32_t)18), L_38, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = V_4;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_40 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_41 = V_6;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_39, L_40, L_41, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42;
		L_42 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_7 = L_42;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_43 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_44 = V_7;
		X448Field_Sqr_m17DF280AD326A592C466FD195CDC57B87F7120C9(L_43, ((int32_t)37), L_44, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_46 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_47 = V_7;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_45, L_46, L_47, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48;
		L_48 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_8 = L_48;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_49 = V_7;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_50 = V_8;
		X448Field_Sqr_m17DF280AD326A592C466FD195CDC57B87F7120C9(L_49, ((int32_t)37), L_50, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = V_6;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_52 = V_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_53 = V_8;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_51, L_52, L_53, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54;
		L_54 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_9 = L_54;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_55 = V_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_56 = V_9;
		X448Field_Sqr_m17DF280AD326A592C466FD195CDC57B87F7120C9(L_55, ((int32_t)111), L_56, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = V_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_58 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_59 = V_9;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_57, L_58, L_59, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60;
		L_60 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_10 = L_60;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_61 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_62 = V_10;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_61, L_62, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_64 = V_10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_65 = V_10;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_63, L_64, L_65, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66;
		L_66 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_11 = L_66;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_67 = V_10;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_68 = V_11;
		X448Field_Sqr_m17DF280AD326A592C466FD195CDC57B87F7120C9(L_67, ((int32_t)223), L_68, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = V_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_70 = V_9;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_71 = ___1_z;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_69, L_70, L_71, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Reduce_m55F5A199F9E88EB69C51FE10311E4ED37B200891 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_z, int32_t ___1_x, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_z;
		NullCheck(L_0);
		int32_t L_1 = ((int32_t)15);
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		uint32_t L_3 = L_2;
		V_0 = ((int32_t)((int32_t)L_3&((int32_t)268435455)));
		int32_t L_4 = ___1_x;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)L_3>>((int32_t)28))), L_4));
		int32_t L_5 = V_1;
		V_2 = ((int64_t)L_5);
		V_3 = 0;
		goto IL_0034;
	}

IL_0019:
	{
		int64_t L_6 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = ___0_z;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint32_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = ((int64_t)il2cpp_codegen_add(L_6, ((int64_t)(uint64_t)L_10)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = ___0_z;
		int32_t L_12 = V_3;
		int64_t L_13 = V_2;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_13)&((int32_t)268435455))));
		int64_t L_14 = V_2;
		V_2 = ((int64_t)(L_14>>((int32_t)28)));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0034:
	{
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) < ((int32_t)8)))
		{
			goto IL_0019;
		}
	}
	{
		int64_t L_17 = V_2;
		int32_t L_18 = V_1;
		V_2 = ((int64_t)il2cpp_codegen_add(L_17, ((int64_t)L_18)));
		V_4 = 8;
		goto IL_0061;
	}

IL_0042:
	{
		int64_t L_19 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = ___0_z;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		uint32_t L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_2 = ((int64_t)il2cpp_codegen_add(L_19, ((int64_t)(uint64_t)L_23)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___0_z;
		int32_t L_25 = V_4;
		int64_t L_26 = V_2;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (uint32_t)((int32_t)(((int32_t)(uint32_t)L_26)&((int32_t)268435455))));
		int64_t L_27 = V_2;
		V_2 = ((int64_t)(L_27>>((int32_t)28)));
		int32_t L_28 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0061:
	{
		int32_t L_29 = V_4;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)15))))
		{
			goto IL_0042;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___0_z;
		uint32_t L_31 = V_0;
		int64_t L_32 = V_2;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_31, ((int32_t)(uint32_t)L_32))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_z, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	uint32_t V_16 = 0;
	uint32_t V_17 = 0;
	uint32_t V_18 = 0;
	uint32_t V_19 = 0;
	uint32_t V_20 = 0;
	uint32_t V_21 = 0;
	uint32_t V_22 = 0;
	uint32_t V_23 = 0;
	uint32_t V_24 = 0;
	uint32_t V_25 = 0;
	uint32_t V_26 = 0;
	uint32_t V_27 = 0;
	uint32_t V_28 = 0;
	uint32_t V_29 = 0;
	uint32_t V_30 = 0;
	uint32_t V_31 = 0;
	uint32_t V_32 = 0;
	uint32_t V_33 = 0;
	uint32_t V_34 = 0;
	uint32_t V_35 = 0;
	uint32_t V_36 = 0;
	uint32_t V_37 = 0;
	uint32_t V_38 = 0;
	uint32_t V_39 = 0;
	uint32_t V_40 = 0;
	uint32_t V_41 = 0;
	uint32_t V_42 = 0;
	uint32_t V_43 = 0;
	uint32_t V_44 = 0;
	uint32_t V_45 = 0;
	uint32_t V_46 = 0;
	uint32_t V_47 = 0;
	uint32_t V_48 = 0;
	uint32_t V_49 = 0;
	uint32_t V_50 = 0;
	uint32_t V_51 = 0;
	uint32_t V_52 = 0;
	uint32_t V_53 = 0;
	uint32_t V_54 = 0;
	uint32_t V_55 = 0;
	uint32_t V_56 = 0;
	uint32_t V_57 = 0;
	uint32_t V_58 = 0;
	uint32_t V_59 = 0;
	uint32_t V_60 = 0;
	uint64_t V_61 = 0;
	uint64_t V_62 = 0;
	uint64_t V_63 = 0;
	uint64_t V_64 = 0;
	uint64_t V_65 = 0;
	uint64_t V_66 = 0;
	uint64_t V_67 = 0;
	uint64_t V_68 = 0;
	uint64_t V_69 = 0;
	uint64_t V_70 = 0;
	uint64_t V_71 = 0;
	uint64_t V_72 = 0;
	uint64_t V_73 = 0;
	uint64_t V_74 = 0;
	uint64_t V_75 = 0;
	uint64_t V_76 = 0;
	uint64_t V_77 = 0;
	uint64_t V_78 = 0;
	uint64_t V_79 = 0;
	uint64_t V_80 = 0;
	uint64_t V_81 = 0;
	uint64_t V_82 = 0;
	uint64_t V_83 = 0;
	uint64_t V_84 = 0;
	uint64_t V_85 = 0;
	uint64_t V_86 = 0;
	uint64_t V_87 = 0;
	uint64_t V_88 = 0;
	uint64_t V_89 = 0;
	uint64_t V_90 = 0;
	uint64_t V_91 = 0;
	uint64_t V_92 = 0;
	uint64_t V_93 = 0;
	uint64_t V_94 = 0;
	uint64_t V_95 = 0;
	uint64_t V_96 = 0;
	uint64_t V_97 = 0;
	uint64_t V_98 = 0;
	uint64_t V_99 = 0;
	uint64_t V_100 = 0;
	uint64_t V_101 = 0;
	uint64_t V_102 = 0;
	uint64_t V_103 = 0;
	uint64_t V_104 = 0;
	uint64_t V_105 = 0;
	uint64_t V_106 = 0;
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
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___0_x;
		NullCheck(L_12);
		int32_t L_13 = 4;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___0_x;
		NullCheck(L_15);
		int32_t L_16 = 5;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_5 = L_17;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___0_x;
		NullCheck(L_18);
		int32_t L_19 = 6;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 7;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_7 = L_23;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___0_x;
		NullCheck(L_24);
		int32_t L_25 = 8;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_8 = L_26;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		NullCheck(L_27);
		int32_t L_28 = ((int32_t)9);
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_9 = L_29;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___0_x;
		NullCheck(L_30);
		int32_t L_31 = ((int32_t)10);
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_10 = L_32;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___0_x;
		NullCheck(L_33);
		int32_t L_34 = ((int32_t)11);
		uint32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_11 = L_35;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___0_x;
		NullCheck(L_36);
		int32_t L_37 = ((int32_t)12);
		uint32_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_12 = L_38;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___0_x;
		NullCheck(L_39);
		int32_t L_40 = ((int32_t)13);
		uint32_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_13 = L_41;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ___0_x;
		NullCheck(L_42);
		int32_t L_43 = ((int32_t)14);
		uint32_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_14 = L_44;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___0_x;
		NullCheck(L_45);
		int32_t L_46 = ((int32_t)15);
		uint32_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_15 = L_47;
		uint32_t L_48 = V_0;
		V_16 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_48, 2));
		uint32_t L_49 = V_1;
		V_17 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_49, 2));
		uint32_t L_50 = V_2;
		V_18 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_50, 2));
		uint32_t L_51 = V_3;
		V_19 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_51, 2));
		uint32_t L_52 = V_4;
		V_20 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_52, 2));
		uint32_t L_53 = V_5;
		V_21 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_53, 2));
		uint32_t L_54 = V_6;
		V_22 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_54, 2));
		uint32_t L_55 = V_8;
		V_23 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_55, 2));
		uint32_t L_56 = V_9;
		V_24 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_56, 2));
		uint32_t L_57 = V_10;
		V_25 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_57, 2));
		uint32_t L_58 = V_11;
		V_26 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_58, 2));
		uint32_t L_59 = V_12;
		V_27 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_59, 2));
		uint32_t L_60 = V_13;
		V_28 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_60, 2));
		uint32_t L_61 = V_14;
		V_29 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_61, 2));
		uint32_t L_62 = V_0;
		uint32_t L_63 = V_8;
		V_30 = ((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)L_63));
		uint32_t L_64 = V_1;
		uint32_t L_65 = V_9;
		V_31 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)L_65));
		uint32_t L_66 = V_2;
		uint32_t L_67 = V_10;
		V_32 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)L_67));
		uint32_t L_68 = V_3;
		uint32_t L_69 = V_11;
		V_33 = ((int32_t)il2cpp_codegen_add((int32_t)L_68, (int32_t)L_69));
		uint32_t L_70 = V_4;
		uint32_t L_71 = V_12;
		V_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)L_71));
		uint32_t L_72 = V_5;
		uint32_t L_73 = V_13;
		V_35 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)L_73));
		uint32_t L_74 = V_6;
		uint32_t L_75 = V_14;
		V_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)L_75));
		uint32_t L_76 = V_7;
		uint32_t L_77 = V_15;
		V_37 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)L_77));
		uint32_t L_78 = V_30;
		V_38 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_78, 2));
		uint32_t L_79 = V_31;
		V_39 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_79, 2));
		uint32_t L_80 = V_32;
		V_40 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_80, 2));
		uint32_t L_81 = V_33;
		V_41 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_81, 2));
		uint32_t L_82 = V_34;
		V_42 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_82, 2));
		uint32_t L_83 = V_35;
		V_43 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_83, 2));
		uint32_t L_84 = V_36;
		V_44 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_84, 2));
		uint32_t L_85 = V_0;
		uint32_t L_86 = V_0;
		V_63 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_85), ((int64_t)(uint64_t)L_86)));
		uint32_t L_87 = V_7;
		uint32_t L_88 = V_17;
		uint32_t L_89 = V_6;
		uint32_t L_90 = V_18;
		uint32_t L_91 = V_5;
		uint32_t L_92 = V_19;
		uint32_t L_93 = V_4;
		uint32_t L_94 = V_4;
		V_64 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_87), ((int64_t)(uint64_t)L_88))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_89), ((int64_t)(uint64_t)L_90))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_91), ((int64_t)(uint64_t)L_92))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_93), ((int64_t)(uint64_t)L_94)))));
		uint32_t L_95 = V_8;
		uint32_t L_96 = V_8;
		V_65 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_95), ((int64_t)(uint64_t)L_96)));
		uint32_t L_97 = V_15;
		uint32_t L_98 = V_24;
		uint32_t L_99 = V_14;
		uint32_t L_100 = V_25;
		uint32_t L_101 = V_13;
		uint32_t L_102 = V_26;
		uint32_t L_103 = V_12;
		uint32_t L_104 = V_12;
		uint32_t L_105 = V_30;
		uint32_t L_106 = V_30;
		V_66 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_105), ((int64_t)(uint64_t)L_106)));
		uint32_t L_107 = V_37;
		uint32_t L_108 = V_39;
		uint32_t L_109 = V_36;
		uint32_t L_110 = V_40;
		uint32_t L_111 = V_35;
		uint32_t L_112 = V_41;
		uint32_t L_113 = V_34;
		uint32_t L_114 = V_34;
		V_67 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_107), ((int64_t)(uint64_t)L_108))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_109), ((int64_t)(uint64_t)L_110))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_111), ((int64_t)(uint64_t)L_112))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_113), ((int64_t)(uint64_t)L_114)))));
		uint64_t L_115 = V_63;
		uint64_t L_116 = V_65;
		uint64_t L_117 = V_67;
		uint64_t L_118 = V_64;
		V_61 = ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_115, (int64_t)L_116)), (int64_t)L_117)), (int64_t)L_118));
		uint64_t L_119 = V_61;
		V_45 = ((int32_t)(((int32_t)(uint32_t)L_119)&((int32_t)268435455)));
		uint64_t L_120 = V_61;
		V_61 = ((int64_t)((uint64_t)L_120>>((int32_t)28)));
		uint64_t L_121 = V_66;
		uint64_t L_122 = V_63;
		uint64_t L_123 = V_67;
		V_62 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_97), ((int64_t)(uint64_t)L_98))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_99), ((int64_t)(uint64_t)L_100))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_101), ((int64_t)(uint64_t)L_102))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_103), ((int64_t)(uint64_t)L_104))))), (int64_t)L_121)), (int64_t)L_122)), (int64_t)L_123));
		uint64_t L_124 = V_62;
		V_53 = ((int32_t)(((int32_t)(uint32_t)L_124)&((int32_t)268435455)));
		uint64_t L_125 = V_62;
		V_62 = ((int64_t)((uint64_t)L_125>>((int32_t)28)));
		uint32_t L_126 = V_1;
		uint32_t L_127 = V_16;
		V_68 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_126), ((int64_t)(uint64_t)L_127)));
		uint32_t L_128 = V_7;
		uint32_t L_129 = V_18;
		uint32_t L_130 = V_6;
		uint32_t L_131 = V_19;
		uint32_t L_132 = V_5;
		uint32_t L_133 = V_20;
		V_69 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_128), ((int64_t)(uint64_t)L_129))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_130), ((int64_t)(uint64_t)L_131))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_132), ((int64_t)(uint64_t)L_133)))));
		uint32_t L_134 = V_9;
		uint32_t L_135 = V_23;
		V_70 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_134), ((int64_t)(uint64_t)L_135)));
		uint32_t L_136 = V_15;
		uint32_t L_137 = V_25;
		uint32_t L_138 = V_14;
		uint32_t L_139 = V_26;
		uint32_t L_140 = V_13;
		uint32_t L_141 = V_27;
		V_71 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_136), ((int64_t)(uint64_t)L_137))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_138), ((int64_t)(uint64_t)L_139))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_140), ((int64_t)(uint64_t)L_141)))));
		uint32_t L_142 = V_31;
		uint32_t L_143 = V_38;
		V_72 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_142), ((int64_t)(uint64_t)L_143)));
		uint32_t L_144 = V_37;
		uint32_t L_145 = V_40;
		uint32_t L_146 = V_36;
		uint32_t L_147 = V_41;
		uint32_t L_148 = V_35;
		uint32_t L_149 = V_42;
		V_73 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_144), ((int64_t)(uint64_t)L_145))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_146), ((int64_t)(uint64_t)L_147))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_148), ((int64_t)(uint64_t)L_149)))));
		uint64_t L_150 = V_61;
		uint64_t L_151 = V_68;
		uint64_t L_152 = V_70;
		uint64_t L_153 = V_73;
		uint64_t L_154 = V_69;
		V_61 = ((int64_t)il2cpp_codegen_add((int64_t)L_150, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_151, (int64_t)L_152)), (int64_t)L_153)), (int64_t)L_154))));
		uint64_t L_155 = V_61;
		V_46 = ((int32_t)(((int32_t)(uint32_t)L_155)&((int32_t)268435455)));
		uint64_t L_156 = V_61;
		V_61 = ((int64_t)((uint64_t)L_156>>((int32_t)28)));
		uint64_t L_157 = V_62;
		uint64_t L_158 = V_71;
		uint64_t L_159 = V_72;
		uint64_t L_160 = V_68;
		uint64_t L_161 = V_73;
		V_62 = ((int64_t)il2cpp_codegen_add((int64_t)L_157, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add((int64_t)L_158, (int64_t)L_159)), (int64_t)L_160)), (int64_t)L_161))));
		uint64_t L_162 = V_62;
		V_54 = ((int32_t)(((int32_t)(uint32_t)L_162)&((int32_t)268435455)));
		uint64_t L_163 = V_62;
		V_62 = ((int64_t)((uint64_t)L_163>>((int32_t)28)));
		uint32_t L_164 = V_2;
		uint32_t L_165 = V_16;
		uint32_t L_166 = V_1;
		uint32_t L_167 = V_1;
		V_74 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_164), ((int64_t)(uint64_t)L_165))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_166), ((int64_t)(uint64_t)L_167)))));
		uint32_t L_168 = V_7;
		uint32_t L_169 = V_19;
		uint32_t L_170 = V_6;
		uint32_t L_171 = V_20;
		uint32_t L_172 = V_5;
		uint32_t L_173 = V_5;
		V_75 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_168), ((int64_t)(uint64_t)L_169))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_170), ((int64_t)(uint64_t)L_171))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_172), ((int64_t)(uint64_t)L_173)))));
		uint32_t L_174 = V_10;
		uint32_t L_175 = V_23;
		uint32_t L_176 = V_9;
		uint32_t L_177 = V_9;
		V_76 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_174), ((int64_t)(uint64_t)L_175))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_176), ((int64_t)(uint64_t)L_177)))));
		uint32_t L_178 = V_15;
		uint32_t L_179 = V_26;
		uint32_t L_180 = V_14;
		uint32_t L_181 = V_27;
		uint32_t L_182 = V_13;
		uint32_t L_183 = V_13;
		V_77 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_178), ((int64_t)(uint64_t)L_179))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_180), ((int64_t)(uint64_t)L_181))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_182), ((int64_t)(uint64_t)L_183)))));
		uint32_t L_184 = V_32;
		uint32_t L_185 = V_38;
		uint32_t L_186 = V_31;
		uint32_t L_187 = V_31;
		V_78 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_184), ((int64_t)(uint64_t)L_185))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_186), ((int64_t)(uint64_t)L_187)))));
		uint32_t L_188 = V_37;
		uint32_t L_189 = V_41;
		uint32_t L_190 = V_36;
		uint32_t L_191 = V_42;
		uint32_t L_192 = V_35;
		uint32_t L_193 = V_35;
		V_79 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_188), ((int64_t)(uint64_t)L_189))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_190), ((int64_t)(uint64_t)L_191))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_192), ((int64_t)(uint64_t)L_193)))));
		uint64_t L_194 = V_61;
		uint64_t L_195 = V_74;
		uint64_t L_196 = V_76;
		uint64_t L_197 = V_79;
		uint64_t L_198 = V_75;
		V_61 = ((int64_t)il2cpp_codegen_add((int64_t)L_194, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_195, (int64_t)L_196)), (int64_t)L_197)), (int64_t)L_198))));
		uint64_t L_199 = V_61;
		V_47 = ((int32_t)(((int32_t)(uint32_t)L_199)&((int32_t)268435455)));
		uint64_t L_200 = V_61;
		V_61 = ((int64_t)((uint64_t)L_200>>((int32_t)28)));
		uint64_t L_201 = V_62;
		uint64_t L_202 = V_77;
		uint64_t L_203 = V_78;
		uint64_t L_204 = V_74;
		uint64_t L_205 = V_79;
		V_62 = ((int64_t)il2cpp_codegen_add((int64_t)L_201, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add((int64_t)L_202, (int64_t)L_203)), (int64_t)L_204)), (int64_t)L_205))));
		uint64_t L_206 = V_62;
		V_55 = ((int32_t)(((int32_t)(uint32_t)L_206)&((int32_t)268435455)));
		uint64_t L_207 = V_62;
		V_62 = ((int64_t)((uint64_t)L_207>>((int32_t)28)));
		uint32_t L_208 = V_3;
		uint32_t L_209 = V_16;
		uint32_t L_210 = V_2;
		uint32_t L_211 = V_17;
		V_80 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_208), ((int64_t)(uint64_t)L_209))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_210), ((int64_t)(uint64_t)L_211)))));
		uint32_t L_212 = V_7;
		uint32_t L_213 = V_20;
		uint32_t L_214 = V_6;
		uint32_t L_215 = V_21;
		V_81 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_212), ((int64_t)(uint64_t)L_213))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_214), ((int64_t)(uint64_t)L_215)))));
		uint32_t L_216 = V_11;
		uint32_t L_217 = V_23;
		uint32_t L_218 = V_10;
		uint32_t L_219 = V_24;
		V_82 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_216), ((int64_t)(uint64_t)L_217))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_218), ((int64_t)(uint64_t)L_219)))));
		uint32_t L_220 = V_15;
		uint32_t L_221 = V_27;
		uint32_t L_222 = V_14;
		uint32_t L_223 = V_28;
		V_83 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_220), ((int64_t)(uint64_t)L_221))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_222), ((int64_t)(uint64_t)L_223)))));
		uint32_t L_224 = V_33;
		uint32_t L_225 = V_38;
		uint32_t L_226 = V_32;
		uint32_t L_227 = V_39;
		V_84 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_224), ((int64_t)(uint64_t)L_225))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_226), ((int64_t)(uint64_t)L_227)))));
		uint32_t L_228 = V_37;
		uint32_t L_229 = V_42;
		uint32_t L_230 = V_36;
		uint32_t L_231 = V_43;
		V_85 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_228), ((int64_t)(uint64_t)L_229))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_230), ((int64_t)(uint64_t)L_231)))));
		uint64_t L_232 = V_61;
		uint64_t L_233 = V_80;
		uint64_t L_234 = V_82;
		uint64_t L_235 = V_85;
		uint64_t L_236 = V_81;
		V_61 = ((int64_t)il2cpp_codegen_add((int64_t)L_232, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_233, (int64_t)L_234)), (int64_t)L_235)), (int64_t)L_236))));
		uint64_t L_237 = V_61;
		V_48 = ((int32_t)(((int32_t)(uint32_t)L_237)&((int32_t)268435455)));
		uint64_t L_238 = V_61;
		V_61 = ((int64_t)((uint64_t)L_238>>((int32_t)28)));
		uint64_t L_239 = V_62;
		uint64_t L_240 = V_83;
		uint64_t L_241 = V_84;
		uint64_t L_242 = V_80;
		uint64_t L_243 = V_85;
		V_62 = ((int64_t)il2cpp_codegen_add((int64_t)L_239, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add((int64_t)L_240, (int64_t)L_241)), (int64_t)L_242)), (int64_t)L_243))));
		uint64_t L_244 = V_62;
		V_56 = ((int32_t)(((int32_t)(uint32_t)L_244)&((int32_t)268435455)));
		uint64_t L_245 = V_62;
		V_62 = ((int64_t)((uint64_t)L_245>>((int32_t)28)));
		uint32_t L_246 = V_4;
		uint32_t L_247 = V_16;
		uint32_t L_248 = V_3;
		uint32_t L_249 = V_17;
		uint32_t L_250 = V_2;
		uint32_t L_251 = V_2;
		V_86 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_246), ((int64_t)(uint64_t)L_247))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_248), ((int64_t)(uint64_t)L_249))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_250), ((int64_t)(uint64_t)L_251)))));
		uint32_t L_252 = V_7;
		uint32_t L_253 = V_21;
		uint32_t L_254 = V_6;
		uint32_t L_255 = V_6;
		V_87 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_252), ((int64_t)(uint64_t)L_253))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_254), ((int64_t)(uint64_t)L_255)))));
		uint32_t L_256 = V_12;
		uint32_t L_257 = V_23;
		uint32_t L_258 = V_11;
		uint32_t L_259 = V_24;
		uint32_t L_260 = V_10;
		uint32_t L_261 = V_10;
		V_88 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_256), ((int64_t)(uint64_t)L_257))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_258), ((int64_t)(uint64_t)L_259))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_260), ((int64_t)(uint64_t)L_261)))));
		uint32_t L_262 = V_15;
		uint32_t L_263 = V_28;
		uint32_t L_264 = V_14;
		uint32_t L_265 = V_14;
		V_89 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_262), ((int64_t)(uint64_t)L_263))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_264), ((int64_t)(uint64_t)L_265)))));
		uint32_t L_266 = V_34;
		uint32_t L_267 = V_38;
		uint32_t L_268 = V_33;
		uint32_t L_269 = V_39;
		uint32_t L_270 = V_32;
		uint32_t L_271 = V_32;
		V_90 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_266), ((int64_t)(uint64_t)L_267))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_268), ((int64_t)(uint64_t)L_269))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_270), ((int64_t)(uint64_t)L_271)))));
		uint32_t L_272 = V_37;
		uint32_t L_273 = V_43;
		uint32_t L_274 = V_36;
		uint32_t L_275 = V_36;
		V_91 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_272), ((int64_t)(uint64_t)L_273))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_274), ((int64_t)(uint64_t)L_275)))));
		uint64_t L_276 = V_61;
		uint64_t L_277 = V_86;
		uint64_t L_278 = V_88;
		uint64_t L_279 = V_91;
		uint64_t L_280 = V_87;
		V_61 = ((int64_t)il2cpp_codegen_add((int64_t)L_276, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_277, (int64_t)L_278)), (int64_t)L_279)), (int64_t)L_280))));
		uint64_t L_281 = V_61;
		V_49 = ((int32_t)(((int32_t)(uint32_t)L_281)&((int32_t)268435455)));
		uint64_t L_282 = V_61;
		V_61 = ((int64_t)((uint64_t)L_282>>((int32_t)28)));
		uint64_t L_283 = V_62;
		uint64_t L_284 = V_89;
		uint64_t L_285 = V_90;
		uint64_t L_286 = V_86;
		uint64_t L_287 = V_91;
		V_62 = ((int64_t)il2cpp_codegen_add((int64_t)L_283, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add((int64_t)L_284, (int64_t)L_285)), (int64_t)L_286)), (int64_t)L_287))));
		uint64_t L_288 = V_62;
		V_57 = ((int32_t)(((int32_t)(uint32_t)L_288)&((int32_t)268435455)));
		uint64_t L_289 = V_62;
		V_62 = ((int64_t)((uint64_t)L_289>>((int32_t)28)));
		uint32_t L_290 = V_5;
		uint32_t L_291 = V_16;
		uint32_t L_292 = V_4;
		uint32_t L_293 = V_17;
		uint32_t L_294 = V_3;
		uint32_t L_295 = V_18;
		V_92 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_290), ((int64_t)(uint64_t)L_291))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_292), ((int64_t)(uint64_t)L_293))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_294), ((int64_t)(uint64_t)L_295)))));
		uint32_t L_296 = V_7;
		uint32_t L_297 = V_22;
		V_93 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_296), ((int64_t)(uint64_t)L_297)));
		uint32_t L_298 = V_13;
		uint32_t L_299 = V_23;
		uint32_t L_300 = V_12;
		uint32_t L_301 = V_24;
		uint32_t L_302 = V_11;
		uint32_t L_303 = V_25;
		V_94 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_298), ((int64_t)(uint64_t)L_299))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_300), ((int64_t)(uint64_t)L_301))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_302), ((int64_t)(uint64_t)L_303)))));
		uint32_t L_304 = V_15;
		uint32_t L_305 = V_29;
		V_95 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_304), ((int64_t)(uint64_t)L_305)));
		uint32_t L_306 = V_35;
		uint32_t L_307 = V_38;
		uint32_t L_308 = V_34;
		uint32_t L_309 = V_39;
		uint32_t L_310 = V_33;
		uint32_t L_311 = V_40;
		V_96 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_306), ((int64_t)(uint64_t)L_307))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_308), ((int64_t)(uint64_t)L_309))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_310), ((int64_t)(uint64_t)L_311)))));
		uint32_t L_312 = V_37;
		uint32_t L_313 = V_44;
		V_97 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_312), ((int64_t)(uint64_t)L_313)));
		uint64_t L_314 = V_61;
		uint64_t L_315 = V_92;
		uint64_t L_316 = V_94;
		uint64_t L_317 = V_97;
		uint64_t L_318 = V_93;
		V_61 = ((int64_t)il2cpp_codegen_add((int64_t)L_314, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_315, (int64_t)L_316)), (int64_t)L_317)), (int64_t)L_318))));
		uint64_t L_319 = V_61;
		V_50 = ((int32_t)(((int32_t)(uint32_t)L_319)&((int32_t)268435455)));
		uint64_t L_320 = V_61;
		V_61 = ((int64_t)((uint64_t)L_320>>((int32_t)28)));
		uint64_t L_321 = V_62;
		uint64_t L_322 = V_95;
		uint64_t L_323 = V_96;
		uint64_t L_324 = V_92;
		uint64_t L_325 = V_97;
		V_62 = ((int64_t)il2cpp_codegen_add((int64_t)L_321, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add((int64_t)L_322, (int64_t)L_323)), (int64_t)L_324)), (int64_t)L_325))));
		uint64_t L_326 = V_62;
		V_58 = ((int32_t)(((int32_t)(uint32_t)L_326)&((int32_t)268435455)));
		uint64_t L_327 = V_62;
		V_62 = ((int64_t)((uint64_t)L_327>>((int32_t)28)));
		uint32_t L_328 = V_6;
		uint32_t L_329 = V_16;
		uint32_t L_330 = V_5;
		uint32_t L_331 = V_17;
		uint32_t L_332 = V_4;
		uint32_t L_333 = V_18;
		uint32_t L_334 = V_3;
		uint32_t L_335 = V_3;
		V_98 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_328), ((int64_t)(uint64_t)L_329))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_330), ((int64_t)(uint64_t)L_331))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_332), ((int64_t)(uint64_t)L_333))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_334), ((int64_t)(uint64_t)L_335)))));
		uint32_t L_336 = V_7;
		uint32_t L_337 = V_7;
		V_99 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_336), ((int64_t)(uint64_t)L_337)));
		uint32_t L_338 = V_14;
		uint32_t L_339 = V_23;
		uint32_t L_340 = V_13;
		uint32_t L_341 = V_24;
		uint32_t L_342 = V_12;
		uint32_t L_343 = V_25;
		uint32_t L_344 = V_11;
		uint32_t L_345 = V_11;
		V_100 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_338), ((int64_t)(uint64_t)L_339))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_340), ((int64_t)(uint64_t)L_341))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_342), ((int64_t)(uint64_t)L_343))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_344), ((int64_t)(uint64_t)L_345)))));
		uint32_t L_346 = V_15;
		uint32_t L_347 = V_15;
		V_101 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_346), ((int64_t)(uint64_t)L_347)));
		uint32_t L_348 = V_36;
		uint32_t L_349 = V_38;
		uint32_t L_350 = V_35;
		uint32_t L_351 = V_39;
		uint32_t L_352 = V_34;
		uint32_t L_353 = V_40;
		uint32_t L_354 = V_33;
		uint32_t L_355 = V_33;
		V_102 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_348), ((int64_t)(uint64_t)L_349))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_350), ((int64_t)(uint64_t)L_351))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_352), ((int64_t)(uint64_t)L_353))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_354), ((int64_t)(uint64_t)L_355)))));
		uint32_t L_356 = V_37;
		uint32_t L_357 = V_37;
		V_103 = ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_356), ((int64_t)(uint64_t)L_357)));
		uint64_t L_358 = V_61;
		uint64_t L_359 = V_98;
		uint64_t L_360 = V_100;
		uint64_t L_361 = V_103;
		uint64_t L_362 = V_99;
		V_61 = ((int64_t)il2cpp_codegen_add((int64_t)L_358, ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add((int64_t)L_359, (int64_t)L_360)), (int64_t)L_361)), (int64_t)L_362))));
		uint64_t L_363 = V_61;
		V_51 = ((int32_t)(((int32_t)(uint32_t)L_363)&((int32_t)268435455)));
		uint64_t L_364 = V_61;
		V_61 = ((int64_t)((uint64_t)L_364>>((int32_t)28)));
		uint64_t L_365 = V_62;
		uint64_t L_366 = V_101;
		uint64_t L_367 = V_102;
		uint64_t L_368 = V_98;
		uint64_t L_369 = V_103;
		V_62 = ((int64_t)il2cpp_codegen_add((int64_t)L_365, ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add((int64_t)L_366, (int64_t)L_367)), (int64_t)L_368)), (int64_t)L_369))));
		uint64_t L_370 = V_62;
		V_59 = ((int32_t)(((int32_t)(uint32_t)L_370)&((int32_t)268435455)));
		uint64_t L_371 = V_62;
		V_62 = ((int64_t)((uint64_t)L_371>>((int32_t)28)));
		uint32_t L_372 = V_7;
		uint32_t L_373 = V_16;
		uint32_t L_374 = V_6;
		uint32_t L_375 = V_17;
		uint32_t L_376 = V_5;
		uint32_t L_377 = V_18;
		uint32_t L_378 = V_4;
		uint32_t L_379 = V_19;
		V_104 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_372), ((int64_t)(uint64_t)L_373))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_374), ((int64_t)(uint64_t)L_375))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_376), ((int64_t)(uint64_t)L_377))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_378), ((int64_t)(uint64_t)L_379)))));
		uint32_t L_380 = V_15;
		uint32_t L_381 = V_23;
		uint32_t L_382 = V_14;
		uint32_t L_383 = V_24;
		uint32_t L_384 = V_13;
		uint32_t L_385 = V_25;
		uint32_t L_386 = V_12;
		uint32_t L_387 = V_26;
		V_105 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_380), ((int64_t)(uint64_t)L_381))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_382), ((int64_t)(uint64_t)L_383))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_384), ((int64_t)(uint64_t)L_385))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_386), ((int64_t)(uint64_t)L_387)))));
		uint32_t L_388 = V_37;
		uint32_t L_389 = V_38;
		uint32_t L_390 = V_36;
		uint32_t L_391 = V_39;
		uint32_t L_392 = V_35;
		uint32_t L_393 = V_40;
		uint32_t L_394 = V_34;
		uint32_t L_395 = V_41;
		V_106 = ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_388), ((int64_t)(uint64_t)L_389))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_390), ((int64_t)(uint64_t)L_391))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_392), ((int64_t)(uint64_t)L_393))))), ((int64_t)il2cpp_codegen_multiply(((int64_t)(uint64_t)L_394), ((int64_t)(uint64_t)L_395)))));
		uint64_t L_396 = V_61;
		uint64_t L_397 = V_104;
		uint64_t L_398 = V_105;
		V_61 = ((int64_t)il2cpp_codegen_add((int64_t)L_396, ((int64_t)il2cpp_codegen_add((int64_t)L_397, (int64_t)L_398))));
		uint64_t L_399 = V_61;
		V_52 = ((int32_t)(((int32_t)(uint32_t)L_399)&((int32_t)268435455)));
		uint64_t L_400 = V_61;
		V_61 = ((int64_t)((uint64_t)L_400>>((int32_t)28)));
		uint64_t L_401 = V_62;
		uint64_t L_402 = V_106;
		uint64_t L_403 = V_104;
		V_62 = ((int64_t)il2cpp_codegen_add((int64_t)L_401, ((int64_t)il2cpp_codegen_subtract((int64_t)L_402, (int64_t)L_403))));
		uint64_t L_404 = V_62;
		V_60 = ((int32_t)(((int32_t)(uint32_t)L_404)&((int32_t)268435455)));
		uint64_t L_405 = V_62;
		V_62 = ((int64_t)((uint64_t)L_405>>((int32_t)28)));
		uint64_t L_406 = V_61;
		uint64_t L_407 = V_62;
		V_61 = ((int64_t)il2cpp_codegen_add((int64_t)L_406, (int64_t)L_407));
		uint64_t L_408 = V_61;
		uint32_t L_409 = V_53;
		V_61 = ((int64_t)il2cpp_codegen_add((int64_t)L_408, ((int64_t)(uint64_t)L_409)));
		uint64_t L_410 = V_61;
		V_53 = ((int32_t)(((int32_t)(uint32_t)L_410)&((int32_t)268435455)));
		uint64_t L_411 = V_61;
		V_61 = ((int64_t)((uint64_t)L_411>>((int32_t)28)));
		uint64_t L_412 = V_62;
		uint32_t L_413 = V_45;
		V_62 = ((int64_t)il2cpp_codegen_add((int64_t)L_412, ((int64_t)(uint64_t)L_413)));
		uint64_t L_414 = V_62;
		V_45 = ((int32_t)(((int32_t)(uint32_t)L_414)&((int32_t)268435455)));
		uint64_t L_415 = V_62;
		V_62 = ((int64_t)((uint64_t)L_415>>((int32_t)28)));
		uint32_t L_416 = V_54;
		uint64_t L_417 = V_61;
		V_54 = ((int32_t)il2cpp_codegen_add((int32_t)L_416, ((int32_t)(uint32_t)L_417)));
		uint32_t L_418 = V_46;
		uint64_t L_419 = V_62;
		V_46 = ((int32_t)il2cpp_codegen_add((int32_t)L_418, ((int32_t)(uint32_t)L_419)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_420 = ___1_z;
		uint32_t L_421 = V_45;
		NullCheck(L_420);
		(L_420)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_421);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_422 = ___1_z;
		uint32_t L_423 = V_46;
		NullCheck(L_422);
		(L_422)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_423);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_424 = ___1_z;
		uint32_t L_425 = V_47;
		NullCheck(L_424);
		(L_424)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_425);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_426 = ___1_z;
		uint32_t L_427 = V_48;
		NullCheck(L_426);
		(L_426)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_427);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_428 = ___1_z;
		uint32_t L_429 = V_49;
		NullCheck(L_428);
		(L_428)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)L_429);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_430 = ___1_z;
		uint32_t L_431 = V_50;
		NullCheck(L_430);
		(L_430)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)L_431);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_432 = ___1_z;
		uint32_t L_433 = V_51;
		NullCheck(L_432);
		(L_432)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)L_433);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_434 = ___1_z;
		uint32_t L_435 = V_52;
		NullCheck(L_434);
		(L_434)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)L_435);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_436 = ___1_z;
		uint32_t L_437 = V_53;
		NullCheck(L_436);
		(L_436)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint32_t)L_437);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_438 = ___1_z;
		uint32_t L_439 = V_54;
		NullCheck(L_438);
		(L_438)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint32_t)L_439);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_440 = ___1_z;
		uint32_t L_441 = V_55;
		NullCheck(L_440);
		(L_440)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint32_t)L_441);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_442 = ___1_z;
		uint32_t L_443 = V_56;
		NullCheck(L_442);
		(L_442)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint32_t)L_443);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_444 = ___1_z;
		uint32_t L_445 = V_57;
		NullCheck(L_444);
		(L_444)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint32_t)L_445);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_446 = ___1_z;
		uint32_t L_447 = V_58;
		NullCheck(L_446);
		(L_446)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint32_t)L_447);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_448 = ___1_z;
		uint32_t L_449 = V_59;
		NullCheck(L_448);
		(L_448)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint32_t)L_449);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_450 = ___1_z;
		uint32_t L_451 = V_60;
		NullCheck(L_450);
		(L_450)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint32_t)L_451);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Sqr_m17DF280AD326A592C466FD195CDC57B87F7120C9 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, int32_t ___1_n, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = ___2_z;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_0, L_1, NULL);
		goto IL_0010;
	}

IL_0009:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___2_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___2_z;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_2, L_3, NULL);
	}

IL_0010:
	{
		int32_t L_4 = ___1_n;
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		___1_n = L_5;
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0009;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X448Field_SqrtRatioVar_mD1C1C3854B0B8A83203458927A26521D15B8632A (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_u, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_v, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_3 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1;
		L_1 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_1 = L_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_u;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_2, L_3, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = ___1_v;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = V_0;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_4, L_5, L_6, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_7 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = V_1;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_7, L_8, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_10 = ___0_u;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_11 = V_0;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_9, L_10, L_11, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___0_u;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_1;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_12, L_13, L_14, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = ___1_v;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_17 = V_1;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_15, L_16, L_17, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18;
		L_18 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_2 = L_18;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_1;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_20 = V_2;
		X448Field_PowPm3d4_m542F80EF0B4562CBC33DEC553D2EEEC507161CB0(L_19, L_20, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_22 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_23 = V_2;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_21, L_22, L_23, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24;
		L_24 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_3 = L_24;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_26 = V_3;
		X448Field_Sqr_mEEF40353C8007ED4CCD87E5EA3A325D9519ACFB1(L_25, L_26, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_28 = ___1_v;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_29 = V_3;
		X448Field_Mul_mD328527AA57BD966F145AF48C792BEEFA31C5E5C(L_27, L_28, L_29, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___0_u;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_31 = V_3;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_32 = V_3;
		X448Field_Sub_mBFA894A2EA11C691607571A006356D308952945E(L_30, L_31, L_32, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = V_3;
		X448Field_Normalize_mF473952189B87EBD9915C6D49F69511F3A056A34(L_33, NULL);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_34 = V_3;
		bool L_35;
		L_35 = X448Field_IsZeroVar_m778F59C0FFAB3021A4B8B3BFEA328753407F039D(L_34, NULL);
		if (!L_35)
		{
			goto IL_0085;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_37 = ___2_z;
		X448Field_Copy_m68F680AAB9014E095E873FE939DE740F5C9484CB(L_36, 0, L_37, 0, NULL);
		return (bool)1;
	}

IL_0085:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Sub_mBFA894A2EA11C691607571A006356D308952945E (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_x, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___1_y, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___2_z, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	uint32_t V_8 = 0;
	uint32_t V_9 = 0;
	uint32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	uint32_t V_13 = 0;
	uint32_t V_14 = 0;
	uint32_t V_15 = 0;
	uint32_t V_16 = 0;
	uint32_t V_17 = 0;
	uint32_t V_18 = 0;
	uint32_t V_19 = 0;
	uint32_t V_20 = 0;
	uint32_t V_21 = 0;
	uint32_t V_22 = 0;
	uint32_t V_23 = 0;
	uint32_t V_24 = 0;
	uint32_t V_25 = 0;
	uint32_t V_26 = 0;
	uint32_t V_27 = 0;
	uint32_t V_28 = 0;
	uint32_t V_29 = 0;
	uint32_t V_30 = 0;
	uint32_t V_31 = 0;
	uint32_t V_32 = 0;
	uint32_t V_33 = 0;
	uint32_t V_34 = 0;
	uint32_t V_35 = 0;
	uint32_t V_36 = 0;
	uint32_t V_37 = 0;
	uint32_t V_38 = 0;
	uint32_t V_39 = 0;
	uint32_t V_40 = 0;
	uint32_t V_41 = 0;
	uint32_t V_42 = 0;
	uint32_t V_43 = 0;
	uint32_t V_44 = 0;
	uint32_t V_45 = 0;
	uint32_t V_46 = 0;
	uint32_t V_47 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint32_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = ___0_x;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint32_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_6 = ___0_x;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_9 = ___0_x;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint32_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = L_11;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_12 = ___0_x;
		NullCheck(L_12);
		int32_t L_13 = 4;
		uint32_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_3 = L_14;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___0_x;
		NullCheck(L_15);
		int32_t L_16 = 5;
		uint32_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		V_4 = L_17;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = ___0_x;
		NullCheck(L_18);
		int32_t L_19 = 6;
		uint32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_5 = L_20;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_x;
		NullCheck(L_21);
		int32_t L_22 = 7;
		uint32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_6 = L_23;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_24 = ___0_x;
		NullCheck(L_24);
		int32_t L_25 = 8;
		uint32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_7 = L_26;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_27 = ___0_x;
		NullCheck(L_27);
		int32_t L_28 = ((int32_t)9);
		uint32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_8 = L_29;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_30 = ___0_x;
		NullCheck(L_30);
		int32_t L_31 = ((int32_t)10);
		uint32_t L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_9 = L_32;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_33 = ___0_x;
		NullCheck(L_33);
		int32_t L_34 = ((int32_t)11);
		uint32_t L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_10 = L_35;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_36 = ___0_x;
		NullCheck(L_36);
		int32_t L_37 = ((int32_t)12);
		uint32_t L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		V_11 = L_38;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_39 = ___0_x;
		NullCheck(L_39);
		int32_t L_40 = ((int32_t)13);
		uint32_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_12 = L_41;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_42 = ___0_x;
		NullCheck(L_42);
		int32_t L_43 = ((int32_t)14);
		uint32_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_13 = L_44;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_45 = ___0_x;
		NullCheck(L_45);
		int32_t L_46 = ((int32_t)15);
		uint32_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_14 = L_47;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_48 = ___1_y;
		NullCheck(L_48);
		int32_t L_49 = 0;
		uint32_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_15 = L_50;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_51 = ___1_y;
		NullCheck(L_51);
		int32_t L_52 = 1;
		uint32_t L_53 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		V_16 = L_53;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_54 = ___1_y;
		NullCheck(L_54);
		int32_t L_55 = 2;
		uint32_t L_56 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		V_17 = L_56;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_57 = ___1_y;
		NullCheck(L_57);
		int32_t L_58 = 3;
		uint32_t L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_18 = L_59;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_60 = ___1_y;
		NullCheck(L_60);
		int32_t L_61 = 4;
		uint32_t L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_19 = L_62;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_63 = ___1_y;
		NullCheck(L_63);
		int32_t L_64 = 5;
		uint32_t L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		V_20 = L_65;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_66 = ___1_y;
		NullCheck(L_66);
		int32_t L_67 = 6;
		uint32_t L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		V_21 = L_68;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_69 = ___1_y;
		NullCheck(L_69);
		int32_t L_70 = 7;
		uint32_t L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		V_22 = L_71;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_72 = ___1_y;
		NullCheck(L_72);
		int32_t L_73 = 8;
		uint32_t L_74 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		V_23 = L_74;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_75 = ___1_y;
		NullCheck(L_75);
		int32_t L_76 = ((int32_t)9);
		uint32_t L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		V_24 = L_77;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_78 = ___1_y;
		NullCheck(L_78);
		int32_t L_79 = ((int32_t)10);
		uint32_t L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		V_25 = L_80;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_81 = ___1_y;
		NullCheck(L_81);
		int32_t L_82 = ((int32_t)11);
		uint32_t L_83 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		V_26 = L_83;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_84 = ___1_y;
		NullCheck(L_84);
		int32_t L_85 = ((int32_t)12);
		uint32_t L_86 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		V_27 = L_86;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_87 = ___1_y;
		NullCheck(L_87);
		int32_t L_88 = ((int32_t)13);
		uint32_t L_89 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		V_28 = L_89;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_90 = ___1_y;
		NullCheck(L_90);
		int32_t L_91 = ((int32_t)14);
		uint32_t L_92 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		V_29 = L_92;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_93 = ___1_y;
		NullCheck(L_93);
		int32_t L_94 = ((int32_t)15);
		uint32_t L_95 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		V_30 = L_95;
		uint32_t L_96 = V_15;
		V_31 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_2, ((int32_t)536870910))), (int32_t)L_96));
		uint32_t L_97 = V_0;
		uint32_t L_98 = V_16;
		V_32 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_97, ((int32_t)536870910))), (int32_t)L_98));
		uint32_t L_99 = V_1;
		uint32_t L_100 = V_17;
		V_33 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_99, ((int32_t)536870910))), (int32_t)L_100));
		uint32_t L_101 = V_2;
		uint32_t L_102 = V_18;
		V_34 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_101, ((int32_t)536870910))), (int32_t)L_102));
		uint32_t L_103 = V_3;
		uint32_t L_104 = V_19;
		V_35 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_103, ((int32_t)536870910))), (int32_t)L_104));
		uint32_t L_105 = V_4;
		uint32_t L_106 = V_20;
		V_36 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_105, ((int32_t)536870910))), (int32_t)L_106));
		uint32_t L_107 = V_5;
		uint32_t L_108 = V_21;
		V_37 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_107, ((int32_t)536870910))), (int32_t)L_108));
		uint32_t L_109 = V_6;
		uint32_t L_110 = V_22;
		V_38 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_109, ((int32_t)536870910))), (int32_t)L_110));
		uint32_t L_111 = V_7;
		uint32_t L_112 = V_23;
		V_39 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_111, ((int32_t)536870908))), (int32_t)L_112));
		uint32_t L_113 = V_8;
		uint32_t L_114 = V_24;
		V_40 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_113, ((int32_t)536870910))), (int32_t)L_114));
		uint32_t L_115 = V_9;
		uint32_t L_116 = V_25;
		V_41 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_115, ((int32_t)536870910))), (int32_t)L_116));
		uint32_t L_117 = V_10;
		uint32_t L_118 = V_26;
		V_42 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_117, ((int32_t)536870910))), (int32_t)L_118));
		uint32_t L_119 = V_11;
		uint32_t L_120 = V_27;
		V_43 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_119, ((int32_t)536870910))), (int32_t)L_120));
		uint32_t L_121 = V_12;
		uint32_t L_122 = V_28;
		V_44 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_121, ((int32_t)536870910))), (int32_t)L_122));
		uint32_t L_123 = V_13;
		uint32_t L_124 = V_29;
		V_45 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_123, ((int32_t)536870910))), (int32_t)L_124));
		uint32_t L_125 = V_14;
		uint32_t L_126 = V_30;
		V_46 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add((int32_t)L_125, ((int32_t)536870910))), (int32_t)L_126));
		uint32_t L_127 = V_33;
		uint32_t L_128 = V_32;
		V_33 = ((int32_t)il2cpp_codegen_add((int32_t)L_127, ((int32_t)((uint32_t)L_128>>((int32_t)28)))));
		uint32_t L_129 = V_32;
		V_32 = ((int32_t)((int32_t)L_129&((int32_t)268435455)));
		uint32_t L_130 = V_37;
		uint32_t L_131 = V_36;
		V_37 = ((int32_t)il2cpp_codegen_add((int32_t)L_130, ((int32_t)((uint32_t)L_131>>((int32_t)28)))));
		uint32_t L_132 = V_36;
		V_36 = ((int32_t)((int32_t)L_132&((int32_t)268435455)));
		uint32_t L_133 = V_41;
		uint32_t L_134 = V_40;
		V_41 = ((int32_t)il2cpp_codegen_add((int32_t)L_133, ((int32_t)((uint32_t)L_134>>((int32_t)28)))));
		uint32_t L_135 = V_40;
		V_40 = ((int32_t)((int32_t)L_135&((int32_t)268435455)));
		uint32_t L_136 = V_45;
		uint32_t L_137 = V_44;
		V_45 = ((int32_t)il2cpp_codegen_add((int32_t)L_136, ((int32_t)((uint32_t)L_137>>((int32_t)28)))));
		uint32_t L_138 = V_44;
		V_44 = ((int32_t)((int32_t)L_138&((int32_t)268435455)));
		uint32_t L_139 = V_34;
		uint32_t L_140 = V_33;
		V_34 = ((int32_t)il2cpp_codegen_add((int32_t)L_139, ((int32_t)((uint32_t)L_140>>((int32_t)28)))));
		uint32_t L_141 = V_33;
		V_33 = ((int32_t)((int32_t)L_141&((int32_t)268435455)));
		uint32_t L_142 = V_38;
		uint32_t L_143 = V_37;
		V_38 = ((int32_t)il2cpp_codegen_add((int32_t)L_142, ((int32_t)((uint32_t)L_143>>((int32_t)28)))));
		uint32_t L_144 = V_37;
		V_37 = ((int32_t)((int32_t)L_144&((int32_t)268435455)));
		uint32_t L_145 = V_42;
		uint32_t L_146 = V_41;
		V_42 = ((int32_t)il2cpp_codegen_add((int32_t)L_145, ((int32_t)((uint32_t)L_146>>((int32_t)28)))));
		uint32_t L_147 = V_41;
		V_41 = ((int32_t)((int32_t)L_147&((int32_t)268435455)));
		uint32_t L_148 = V_46;
		uint32_t L_149 = V_45;
		V_46 = ((int32_t)il2cpp_codegen_add((int32_t)L_148, ((int32_t)((uint32_t)L_149>>((int32_t)28)))));
		uint32_t L_150 = V_45;
		V_45 = ((int32_t)((int32_t)L_150&((int32_t)268435455)));
		uint32_t L_151 = V_46;
		V_47 = ((int32_t)((uint32_t)L_151>>((int32_t)28)));
		uint32_t L_152 = V_46;
		V_46 = ((int32_t)((int32_t)L_152&((int32_t)268435455)));
		uint32_t L_153 = V_31;
		uint32_t L_154 = V_47;
		V_31 = ((int32_t)il2cpp_codegen_add((int32_t)L_153, (int32_t)L_154));
		uint32_t L_155 = V_39;
		uint32_t L_156 = V_47;
		V_39 = ((int32_t)il2cpp_codegen_add((int32_t)L_155, (int32_t)L_156));
		uint32_t L_157 = V_35;
		uint32_t L_158 = V_34;
		V_35 = ((int32_t)il2cpp_codegen_add((int32_t)L_157, ((int32_t)((uint32_t)L_158>>((int32_t)28)))));
		uint32_t L_159 = V_34;
		V_34 = ((int32_t)((int32_t)L_159&((int32_t)268435455)));
		uint32_t L_160 = V_39;
		uint32_t L_161 = V_38;
		V_39 = ((int32_t)il2cpp_codegen_add((int32_t)L_160, ((int32_t)((uint32_t)L_161>>((int32_t)28)))));
		uint32_t L_162 = V_38;
		V_38 = ((int32_t)((int32_t)L_162&((int32_t)268435455)));
		uint32_t L_163 = V_43;
		uint32_t L_164 = V_42;
		V_43 = ((int32_t)il2cpp_codegen_add((int32_t)L_163, ((int32_t)((uint32_t)L_164>>((int32_t)28)))));
		uint32_t L_165 = V_42;
		V_42 = ((int32_t)((int32_t)L_165&((int32_t)268435455)));
		uint32_t L_166 = V_32;
		uint32_t L_167 = V_31;
		V_32 = ((int32_t)il2cpp_codegen_add((int32_t)L_166, ((int32_t)((uint32_t)L_167>>((int32_t)28)))));
		uint32_t L_168 = V_31;
		V_31 = ((int32_t)((int32_t)L_168&((int32_t)268435455)));
		uint32_t L_169 = V_36;
		uint32_t L_170 = V_35;
		V_36 = ((int32_t)il2cpp_codegen_add((int32_t)L_169, ((int32_t)((uint32_t)L_170>>((int32_t)28)))));
		uint32_t L_171 = V_35;
		V_35 = ((int32_t)((int32_t)L_171&((int32_t)268435455)));
		uint32_t L_172 = V_40;
		uint32_t L_173 = V_39;
		V_40 = ((int32_t)il2cpp_codegen_add((int32_t)L_172, ((int32_t)((uint32_t)L_173>>((int32_t)28)))));
		uint32_t L_174 = V_39;
		V_39 = ((int32_t)((int32_t)L_174&((int32_t)268435455)));
		uint32_t L_175 = V_44;
		uint32_t L_176 = V_43;
		V_44 = ((int32_t)il2cpp_codegen_add((int32_t)L_175, ((int32_t)((uint32_t)L_176>>((int32_t)28)))));
		uint32_t L_177 = V_43;
		V_43 = ((int32_t)((int32_t)L_177&((int32_t)268435455)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_178 = ___2_z;
		uint32_t L_179 = V_31;
		NullCheck(L_178);
		(L_178)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)L_179);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_180 = ___2_z;
		uint32_t L_181 = V_32;
		NullCheck(L_180);
		(L_180)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint32_t)L_181);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_182 = ___2_z;
		uint32_t L_183 = V_33;
		NullCheck(L_182);
		(L_182)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint32_t)L_183);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_184 = ___2_z;
		uint32_t L_185 = V_34;
		NullCheck(L_184);
		(L_184)->SetAt(static_cast<il2cpp_array_size_t>(3), (uint32_t)L_185);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_186 = ___2_z;
		uint32_t L_187 = V_35;
		NullCheck(L_186);
		(L_186)->SetAt(static_cast<il2cpp_array_size_t>(4), (uint32_t)L_187);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_188 = ___2_z;
		uint32_t L_189 = V_36;
		NullCheck(L_188);
		(L_188)->SetAt(static_cast<il2cpp_array_size_t>(5), (uint32_t)L_189);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_190 = ___2_z;
		uint32_t L_191 = V_37;
		NullCheck(L_190);
		(L_190)->SetAt(static_cast<il2cpp_array_size_t>(6), (uint32_t)L_191);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_192 = ___2_z;
		uint32_t L_193 = V_38;
		NullCheck(L_192);
		(L_192)->SetAt(static_cast<il2cpp_array_size_t>(7), (uint32_t)L_193);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_194 = ___2_z;
		uint32_t L_195 = V_39;
		NullCheck(L_194);
		(L_194)->SetAt(static_cast<il2cpp_array_size_t>(8), (uint32_t)L_195);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_196 = ___2_z;
		uint32_t L_197 = V_40;
		NullCheck(L_196);
		(L_196)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (uint32_t)L_197);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_198 = ___2_z;
		uint32_t L_199 = V_41;
		NullCheck(L_198);
		(L_198)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (uint32_t)L_199);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_200 = ___2_z;
		uint32_t L_201 = V_42;
		NullCheck(L_200);
		(L_200)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (uint32_t)L_201);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_202 = ___2_z;
		uint32_t L_203 = V_43;
		NullCheck(L_202);
		(L_202)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (uint32_t)L_203);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_204 = ___2_z;
		uint32_t L_205 = V_44;
		NullCheck(L_204);
		(L_204)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (uint32_t)L_205);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_206 = ___2_z;
		uint32_t L_207 = V_45;
		NullCheck(L_206);
		(L_206)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (uint32_t)L_207);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_208 = ___2_z;
		uint32_t L_209 = V_46;
		NullCheck(L_208);
		(L_208)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint32_t)L_209);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_SubOne_mA0311031490735E0417201B0AE88EE8D7A10DAA3 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_z, const RuntimeMethod* method) 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0;
		L_0 = X448Field_Create_m92EC45F37AA0EE3D8BC50EC1CA5118786E495683(NULL);
		V_0 = L_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_1 = V_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint32_t)1);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_2 = ___0_z;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_3 = V_0;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_z;
		X448Field_Sub_mBFA894A2EA11C691607571A006356D308952945E(L_2, L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X448Field_Zero_m05486C7731A9B64673D03E7C52177B5BCF68A0D6 (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_z, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_000c;
	}

IL_0004:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_z;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (uint32_t)0);
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_000c:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)16))))
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
