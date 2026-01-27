#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Double[,]
struct DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE;
// Kalman.Matrix[,]
struct MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Exception
struct Exception_t;
// Kalman.Simulate.GuassianRandom
struct GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Kalman.KalmanFilter
struct KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08;
// Kalman.KalmanFilterSimple1D
struct KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081;
// Kalman.MException
struct MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542;
// Kalman.Matrix
struct Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8;
// Kalman.MatrixKalmanWrapper
struct MatrixKalmanWrapper_tF94E7579C7B7B49D2F3807C34F54E386A407AC6A;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Kalman.SimpleKalmanWrapper
struct SimpleKalmanWrapper_tBFCE3906E1DA21E6C396BC39D28FFA741EC77092;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121____72473E86EC72C67F0C0916F0FA376DFE686E5582D389BC7100EF5E70835FB565_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121____82A445B12C8D35172C6D379C6467AF5B0C30F4811319E182486674AAF2E61610_1_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2699ED079CDDEF57B48E372A3D47B5F3C372F78C;
IL2CPP_EXTERN_C String_t* _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5;
IL2CPP_EXTERN_C String_t* _stringLiteral4D95BFFF56951BD3CAEDDE8316CBB48458E83A59;
IL2CPP_EXTERN_C String_t* _stringLiteral5359BA9CB4634179A1429F9FF1EC49B6A347800A;
IL2CPP_EXTERN_C String_t* _stringLiteral55C1681428B04B53C037730ADAE3A34FF5F59650;
IL2CPP_EXTERN_C String_t* _stringLiteral55FFBF296F9AD0C93EE305CF1FB2E82961ABEE63;
IL2CPP_EXTERN_C String_t* _stringLiteral8004D8D7C06F44B14DED80921D95B6A3A2BAB38A;
IL2CPP_EXTERN_C String_t* _stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA;
IL2CPP_EXTERN_C String_t* _stringLiteral9360594C2BCE966846677E990CBBE005BB668E7F;
IL2CPP_EXTERN_C String_t* _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827;
IL2CPP_EXTERN_C String_t* _stringLiteralCA5D25D8D9E7431F466B32C49F48E872BEE36FD9;
IL2CPP_EXTERN_C String_t* _stringLiteralD6B5B78BCFFA7C1FD4EA5CFE3CC8CE6D6629D68B;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE95A453653E06120FE9E373182096BDCF774C95B;
IL2CPP_EXTERN_C String_t* _stringLiteralE9BF62289830E1D9ADF97C8F47896329C4AAC679;
IL2CPP_EXTERN_C String_t* _stringLiteralF3CAD39A7B5AEC0B348B5507B59FE1BABC7DA241;
IL2CPP_EXTERN_C const RuntimeMethod* GuassianRandom_NextGuassian_m11F57E6798715A882E0FA5461141D9A4FA87BCCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_Add_mB0D4D8F5C6CD1ED872C18E9836BF94054EE3F595_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_MakeLU_m5B9ED29DE79A1708172C232FE1B5793CC66567FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_Parse_m5E3C4C37FBBB4604CBA03A356C9B726AF53336C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_SolveWith_m8243F1B915336EF12063532064CA7F9EE437E4C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_StrassenMultiply_mF1E0A67B73689DFB4AEAC6628A10C5CECD19C5D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Matrix_StupidMultiply_m3DDDF480DBF164A4D1AC60CE8944B3A8C406B728_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE;
struct MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF062866229C4952B8051AD32AB6E9D931142CC95 
{
};
struct Il2CppArrayBounds;

// Kalman.Simulate.GuassianRandom
struct GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF  : public RuntimeObject
{
	// System.Boolean Kalman.Simulate.GuassianRandom::_hasDeviate
	bool ____hasDeviate_0;
	// System.Double Kalman.Simulate.GuassianRandom::_storedDeviate
	double ____storedDeviate_1;
};

struct GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_StaticFields
{
	// System.Random Kalman.Simulate.GuassianRandom::_random
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ____random_2;
};

// Kalman.KalmanFilter
struct KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08  : public RuntimeObject
{
	// Kalman.Matrix Kalman.KalmanFilter::<X0>k__BackingField
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___U3CX0U3Ek__BackingField_0;
	// Kalman.Matrix Kalman.KalmanFilter::<P0>k__BackingField
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___U3CP0U3Ek__BackingField_1;
	// Kalman.Matrix Kalman.KalmanFilter::<F>k__BackingField
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___U3CFU3Ek__BackingField_2;
	// Kalman.Matrix Kalman.KalmanFilter::<B>k__BackingField
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___U3CBU3Ek__BackingField_3;
	// Kalman.Matrix Kalman.KalmanFilter::<U>k__BackingField
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___U3CUU3Ek__BackingField_4;
	// Kalman.Matrix Kalman.KalmanFilter::<Q>k__BackingField
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___U3CQU3Ek__BackingField_5;
	// Kalman.Matrix Kalman.KalmanFilter::<H>k__BackingField
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___U3CHU3Ek__BackingField_6;
	// Kalman.Matrix Kalman.KalmanFilter::<R>k__BackingField
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___U3CRU3Ek__BackingField_7;
	// Kalman.Matrix Kalman.KalmanFilter::<State>k__BackingField
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___U3CStateU3Ek__BackingField_8;
	// Kalman.Matrix Kalman.KalmanFilter::<Covariance>k__BackingField
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___U3CCovarianceU3Ek__BackingField_9;
};

// Kalman.KalmanFilterSimple1D
struct KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081  : public RuntimeObject
{
	// System.Double Kalman.KalmanFilterSimple1D::<X0>k__BackingField
	double ___U3CX0U3Ek__BackingField_0;
	// System.Double Kalman.KalmanFilterSimple1D::<P0>k__BackingField
	double ___U3CP0U3Ek__BackingField_1;
	// System.Double Kalman.KalmanFilterSimple1D::<F>k__BackingField
	double ___U3CFU3Ek__BackingField_2;
	// System.Double Kalman.KalmanFilterSimple1D::<Q>k__BackingField
	double ___U3CQU3Ek__BackingField_3;
	// System.Double Kalman.KalmanFilterSimple1D::<H>k__BackingField
	double ___U3CHU3Ek__BackingField_4;
	// System.Double Kalman.KalmanFilterSimple1D::<R>k__BackingField
	double ___U3CRU3Ek__BackingField_5;
	// System.Double Kalman.KalmanFilterSimple1D::<State>k__BackingField
	double ___U3CStateU3Ek__BackingField_6;
	// System.Double Kalman.KalmanFilterSimple1D::<Covariance>k__BackingField
	double ___U3CCovarianceU3Ek__BackingField_7;
};

// Kalman.Matrix
struct Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8  : public RuntimeObject
{
	// System.Int32 Kalman.Matrix::rows
	int32_t ___rows_0;
	// System.Int32 Kalman.Matrix::cols
	int32_t ___cols_1;
	// System.Double[,] Kalman.Matrix::mat
	DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* ___mat_2;
	// Kalman.Matrix Kalman.Matrix::L
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___L_3;
	// Kalman.Matrix Kalman.Matrix::U
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___U_4;
	// System.Int32[] Kalman.Matrix::pi
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___pi_5;
	// System.Double Kalman.Matrix::detOfP
	double ___detOfP_6;
};

// Kalman.MatrixKalmanWrapper
struct MatrixKalmanWrapper_tF94E7579C7B7B49D2F3807C34F54E386A407AC6A  : public RuntimeObject
{
	// Kalman.KalmanFilter Kalman.MatrixKalmanWrapper::kX
	KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* ___kX_0;
	// Kalman.KalmanFilter Kalman.MatrixKalmanWrapper::kY
	KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* ___kY_1;
	// Kalman.KalmanFilter Kalman.MatrixKalmanWrapper::kZ
	KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* ___kZ_2;
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

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
};

// Kalman.SimpleKalmanWrapper
struct SimpleKalmanWrapper_tBFCE3906E1DA21E6C396BC39D28FFA741EC77092  : public RuntimeObject
{
	// Kalman.KalmanFilterSimple1D Kalman.SimpleKalmanWrapper::kX
	KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* ___kX_0;
	// Kalman.KalmanFilterSimple1D Kalman.SimpleKalmanWrapper::kY
	KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* ___kY_1;
	// Kalman.KalmanFilterSimple1D Kalman.SimpleKalmanWrapper::kZ
	KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* ___kZ_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_t68C74D93F8A612E1AFC8AB48A82A2D9566139A36 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t68C74D93F8A612E1AFC8AB48A82A2D9566139A36__padding[32];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::72473E86EC72C67F0C0916F0FA376DFE686E5582D389BC7100EF5E70835FB565
	__StaticArrayInitTypeSizeU3D32_t68C74D93F8A612E1AFC8AB48A82A2D9566139A36 ___72473E86EC72C67F0C0916F0FA376DFE686E5582D389BC7100EF5E70835FB565_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::82A445B12C8D35172C6D379C6467AF5B0C30F4811319E182486674AAF2E61610
	__StaticArrayInitTypeSizeU3D32_t68C74D93F8A612E1AFC8AB48A82A2D9566139A36 ___82A445B12C8D35172C6D379C6467AF5B0C30F4811319E182486674AAF2E61610_1;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// Kalman.MException
struct MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542  : public Exception_t
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

// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Double[,]
struct DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
	inline double GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, double value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, double value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Kalman.Matrix[,]
struct MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* m_Items[1];

	inline Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Kalman.KalmanFilter::set_F(Kalman.Matrix)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_F_m64A2C6461DA7CFE711F3E175ED1DD21FE5EEE9A5_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) ;
// System.Void Kalman.KalmanFilter::set_B(Kalman.Matrix)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_B_m714DB9724F4E31B4C22D5952B2CAEA8DEB81120E_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) ;
// System.Void Kalman.KalmanFilter::set_U(Kalman.Matrix)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_U_m2941B3355FCA5503E38BFC52733CFA6C6087436C_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) ;
// System.Void Kalman.KalmanFilter::set_Q(Kalman.Matrix)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_Q_mFAADE44780E6D633563749ED52BD7357F30A7977_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) ;
// System.Void Kalman.KalmanFilter::set_H(Kalman.Matrix)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_H_m9480D0B1AFBEEB4BB7E4175929142A07758914A0_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) ;
// System.Void Kalman.KalmanFilter::set_R(Kalman.Matrix)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_R_mA2ACC4462D2FC181D9B20F806A2EE72E893B50EC_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) ;
// System.Void Kalman.KalmanFilter::set_State(Kalman.Matrix)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_State_m20E9827CC4145E80FA5BC11511BEA00102CE7268_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) ;
// System.Void Kalman.KalmanFilter::set_Covariance(Kalman.Matrix)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_Covariance_m823F46BBE8A9ACB4EF72383ACF8723E7E651BE59_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) ;
// Kalman.Matrix Kalman.KalmanFilter::get_F()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_F_m096A81E58C90EFAB3E1DF5A6E3B1442018767EA4_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) ;
// Kalman.Matrix Kalman.KalmanFilter::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_State_m6C8D3346A43F94140CA6E900453BB409AB6FBA66_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) ;
// Kalman.Matrix Kalman.Matrix::op_Multiply(Kalman.Matrix,Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_op_Multiply_m288732D926A25D27D12CB8DC1DDAC5795130B120 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___m10, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___m21, const RuntimeMethod* method) ;
// System.Void Kalman.KalmanFilter::set_X0(Kalman.Matrix)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_X0_mDF8569EDA79886E255DEE3E236CBABEBC2EA736F_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) ;
// Kalman.Matrix Kalman.KalmanFilter::get_Covariance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_Covariance_m0DBABD6D31F4293196CC327053A847F083B7E672_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) ;
// Kalman.Matrix Kalman.Matrix::Transpose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Transpose_mC6321D9A6F0E43CDC932800A379EFD5CDEFA69B9 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, const RuntimeMethod* method) ;
// Kalman.Matrix Kalman.KalmanFilter::get_Q()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_Q_m3D304029E70BC950C8CC3F5CC5CCD588E5EDF7A0_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) ;
// Kalman.Matrix Kalman.Matrix::op_Addition(Kalman.Matrix,Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_op_Addition_mD90B614C9A7E630A430AA78DC7BE9D1C5E202B75 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___m10, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___m21, const RuntimeMethod* method) ;
// System.Void Kalman.KalmanFilter::set_P0(Kalman.Matrix)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_P0_mF6D5507B96E0988F988AEEEE5828A941CA0D3F7B_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) ;
// Kalman.Matrix Kalman.KalmanFilter::get_P0()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_P0_mE2BC2F14CE0BE3934C497A4C6B30EF2EB26FE223_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) ;
// Kalman.Matrix Kalman.KalmanFilter::get_H()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_H_m7AFB18AB875D036B0EA6C0D8C54EA8CEEB6830A4_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) ;
// Kalman.Matrix Kalman.KalmanFilter::get_R()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_R_m6AA93D761F1F399A4C60C22C09363267672DB8BB_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) ;
// Kalman.Matrix Kalman.Matrix::Invert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Invert_m025110DC6C085B38C6245FC923A60DBAA24CB8DA (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, const RuntimeMethod* method) ;
// Kalman.Matrix Kalman.KalmanFilter::get_X0()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_X0_m6525ED71B7ED08C68D5DC7761EC8CE97C826B4B5_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) ;
// Kalman.Matrix Kalman.Matrix::op_Subtraction(Kalman.Matrix,Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_op_Subtraction_m683DEECECA23B898510BF60F093B26ED43F020FF (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___m10, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___m21, const RuntimeMethod* method) ;
// Kalman.Matrix Kalman.Matrix::IdentityMatrix(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_IdentityMatrix_mDEB85646CBD384AEFF238196F2C2D6E5CE87DDEF (int32_t ___size0, const RuntimeMethod* method) ;
// System.Void Kalman.KalmanFilterSimple1D::set_Q(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_Q_m1DC3CB34B6F0B84895DE72D93F99F646E1670B82_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void Kalman.KalmanFilterSimple1D::set_R(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_R_mCFF19948E60888FC1A97923066BABA8556B99726_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void Kalman.KalmanFilterSimple1D::set_F(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_F_mE329B338AE11A23DDF798157DDDF0909A8BB87A1_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void Kalman.KalmanFilterSimple1D::set_H(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_H_mC0BC7397BD0F247678BAB267928FFDCB2755FC27_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void Kalman.KalmanFilterSimple1D::set_State(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_State_m1939BDF5E9508479990229AEC371E3ED0D7882B4_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void Kalman.KalmanFilterSimple1D::set_Covariance(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_Covariance_mA38C27D2638B949BAC94CA0A74C9ABBA52503CE3_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___value0, const RuntimeMethod* method) ;
// System.Double Kalman.KalmanFilterSimple1D::get_F()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_F_m5C756567DB1FA3617AFDAB3EBBB1E029938BE5C7_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) ;
// System.Double Kalman.KalmanFilterSimple1D::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_State_m8D3442FCBD72F9EF9363630036772CA53BFA9A40_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) ;
// System.Void Kalman.KalmanFilterSimple1D::set_X0(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_X0_m03A863C60B036F210E4520E23180BB4EFEA666AB_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___value0, const RuntimeMethod* method) ;
// System.Double Kalman.KalmanFilterSimple1D::get_Covariance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_Covariance_m0748CCCAA3696D67D8409F669EFF607D1CDDF278_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) ;
// System.Double Kalman.KalmanFilterSimple1D::get_Q()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_Q_m3BC34AB32A26ADC3904A93D66378F4E996D68CB1_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) ;
// System.Void Kalman.KalmanFilterSimple1D::set_P0(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_P0_m3087DC31B2CCF163F73766DF1E786EC2B1580D8B_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___value0, const RuntimeMethod* method) ;
// System.Double Kalman.KalmanFilterSimple1D::get_H()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_H_mE39101C9204E4C8C6F24CFC7C7D00ED0C81FE604_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) ;
// System.Double Kalman.KalmanFilterSimple1D::get_P0()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_P0_mF6327BFB1907AF17BBCE80FA7CE62D4E17278FD1_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) ;
// System.Double Kalman.KalmanFilterSimple1D::get_R()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_R_m66D845E477AD4F966EB5CEA1F163252CC3650454_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) ;
// System.Double Kalman.KalmanFilterSimple1D::get_X0()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_X0_mCFD4303E43B8F6EFA141E3411D5E30DD5D5C9638_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) ;
// System.Int32 System.Array::GetLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935 (RuntimeArray* __this, int32_t ___dimension0, const RuntimeMethod* method) ;
// System.Void Kalman.Matrix::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, int32_t ___iRows0, int32_t ___iCols1, const RuntimeMethod* method) ;
// System.Void Kalman.Matrix::set_Item(System.Int32,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, int32_t ___iRow0, int32_t ___iCol1, double ___value2, const RuntimeMethod* method) ;
// System.Double Kalman.Matrix::get_Item(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, int32_t ___iRow0, int32_t ___iCol1, const RuntimeMethod* method) ;
// System.Boolean Kalman.Matrix::IsSquare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Matrix_IsSquare_mA7D6A78DEC5B86B73790A95033B375E93966B213 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, const RuntimeMethod* method) ;
// System.Void Kalman.MException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MException__ctor_m0556F1CA0ADCAF46291549D0C7B600EFEFE2F7AE (MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542* __this, String_t* ___Message0, const RuntimeMethod* method) ;
// Kalman.Matrix Kalman.Matrix::IdentityMatrix(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_IdentityMatrix_m761F0976C77A545C21049F9FD13D4EB627C24F3A (int32_t ___iRows0, int32_t ___iCols1, const RuntimeMethod* method) ;
// Kalman.Matrix Kalman.Matrix::Duplicate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Duplicate_m305F18F019ED96527662E14DFCFFA0427423F331 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, const RuntimeMethod* method) ;
// System.Void Kalman.Matrix::MakeLU()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_MakeLU_m5B9ED29DE79A1708172C232FE1B5793CC66567FB (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, const RuntimeMethod* method) ;
// Kalman.Matrix Kalman.Matrix::SubsForth(Kalman.Matrix,Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_SubsForth_mF459B56052DE7A0DD9CA9218B2BD07BB917DAA75 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___A0, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___b1, const RuntimeMethod* method) ;
// Kalman.Matrix Kalman.Matrix::SubsBack(Kalman.Matrix,Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_SubsBack_m5ECCC1792F8DD6B01F7C77F0D3E7B6E279527EF6 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___A0, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___b1, const RuntimeMethod* method) ;
// Kalman.Matrix Kalman.Matrix::ZeroMatrix(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_ZeroMatrix_m6BBCA3371B60EB5354B49113A8A38110F65EF545 (int32_t ___iRows0, int32_t ___iCols1, const RuntimeMethod* method) ;
// Kalman.Matrix Kalman.Matrix::SolveWith(Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_SolveWith_m8243F1B915336EF12063532064CA7F9EE437E4C6 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___v0, const RuntimeMethod* method) ;
// System.Void Kalman.Matrix::SetCol(Kalman.Matrix,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_SetCol_m572AA23649D9EB9862AA97F0385F5C95B3A9380A (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___v0, int32_t ___k1, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.String Kalman.Matrix::NormalizeMatrixString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Matrix_NormalizeMatrixString_m322779B699DF0D70EAFD235FA33F4FC3086149FD (String_t* ___matStr0, const RuntimeMethod* method) ;
// System.String[] System.Text.RegularExpressions.Regex::Split(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Regex_Split_m01D4D38E8257BB18BFBC08D2D8DCB7F32FB0D018 (String_t* ___input0, String_t* ___pattern1, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Double System.Double::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Double_Parse_mBED785C952A63E8D714E429A4A704BCC4D92931B (String_t* ___s0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// Kalman.Matrix Kalman.Matrix::Transpose(Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Transpose_mACA9F292B42E0B8ABED1D6E7D28215CAC2F1C208 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___m0, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Double System.Math::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3 (double ___x0, double ___y1, const RuntimeMethod* method) ;
// System.Void Kalman.Matrix::SafeAplusBintoC(Kalman.Matrix,System.Int32,System.Int32,Kalman.Matrix,System.Int32,System.Int32,Kalman.Matrix,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_SafeAplusBintoC_m1D7A9992A01BE5F5A6BEFCB70151895F50432A4A (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___A0, int32_t ___xa1, int32_t ___ya2, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___B3, int32_t ___xb4, int32_t ___yb5, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___C6, int32_t ___size7, const RuntimeMethod* method) ;
// System.Void Kalman.Matrix::StrassenMultiplyRun(Kalman.Matrix,Kalman.Matrix,Kalman.Matrix,System.Int32,Kalman.Matrix[,])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_StrassenMultiplyRun_mD0F1B81D2F5CA793B60A34DC3F9609BD4E4B54EC (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___A0, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___B1, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___C2, int32_t ___l3, MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* ___f4, const RuntimeMethod* method) ;
// System.Void Kalman.Matrix::SafeACopytoC(Kalman.Matrix,System.Int32,System.Int32,Kalman.Matrix,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_SafeACopytoC_m96ACEED14CAF282366347895155D545E8844A71C (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___A0, int32_t ___xa1, int32_t ___ya2, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___C3, int32_t ___size4, const RuntimeMethod* method) ;
// System.Void Kalman.Matrix::SafeAminusBintoC(Kalman.Matrix,System.Int32,System.Int32,Kalman.Matrix,System.Int32,System.Int32,Kalman.Matrix,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_SafeAminusBintoC_m2025F98363DC1127F7C6D6BED73DE2935418DB9B (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___A0, int32_t ___xa1, int32_t ___ya2, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___B3, int32_t ___xb4, int32_t ___yb5, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___C6, int32_t ___size7, const RuntimeMethod* method) ;
// System.Void Kalman.Matrix::AplusBintoC(Kalman.Matrix,System.Int32,System.Int32,Kalman.Matrix,System.Int32,System.Int32,Kalman.Matrix,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_AplusBintoC_m81098A42B9884070EBA6CA38341428AE87FD1801 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___A0, int32_t ___xa1, int32_t ___ya2, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___B3, int32_t ___xb4, int32_t ___yb5, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___C6, int32_t ___size7, const RuntimeMethod* method) ;
// System.Void Kalman.Matrix::ACopytoC(Kalman.Matrix,System.Int32,System.Int32,Kalman.Matrix,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_ACopytoC_m11FFB34E6A8A277DC5FD86150D96F8532E678A3E (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___A0, int32_t ___xa1, int32_t ___ya2, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___C3, int32_t ___size4, const RuntimeMethod* method) ;
// System.Void Kalman.Matrix::AminusBintoC(Kalman.Matrix,System.Int32,System.Int32,Kalman.Matrix,System.Int32,System.Int32,Kalman.Matrix,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_AminusBintoC_m453DD7074D66DDD68DACD9AB55052751A9B2ADFB (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___A0, int32_t ___xa1, int32_t ___ya2, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___B3, int32_t ___xb4, int32_t ___yb5, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___C6, int32_t ___size7, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Kalman.Matrix::.ctor(System.Double[,])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix__ctor_m366E3755C05163084E4353ED1C19FD23E0BE631C (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* ___matrix0, const RuntimeMethod* method) ;
// Kalman.Matrix Kalman.Matrix::Multiply(System.Double,Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Multiply_mA5DB7A95DD6EB6B39866B8E4E35F93EE4635F541 (double ___n0, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___m1, const RuntimeMethod* method) ;
// Kalman.Matrix Kalman.Matrix::Add(Kalman.Matrix,Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Add_mB0D4D8F5C6CD1ED872C18E9836BF94054EE3F595 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___m10, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___m21, const RuntimeMethod* method) ;
// Kalman.Matrix Kalman.Matrix::op_UnaryNegation(Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_op_UnaryNegation_m9E7C14CDF6E8B076965E50D838BD229D8FA33084 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___m0, const RuntimeMethod* method) ;
// Kalman.Matrix Kalman.Matrix::StrassenMultiply(Kalman.Matrix,Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_StrassenMultiply_mF1E0A67B73689DFB4AEAC6628A10C5CECD19C5D0 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___A0, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___B1, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// Kalman.Matrix Kalman.Matrix::CreateVector(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_CreateVector_mCA71E4A86EE3ED7DD6C381D7431CF78536C20E27 (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___values0, const RuntimeMethod* method) ;
// Kalman.KalmanFilter Kalman.MatrixKalmanWrapper::makeKalmanFilter(Kalman.Matrix,Kalman.Matrix,Kalman.Matrix,Kalman.Matrix,Kalman.Matrix,Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* MatrixKalmanWrapper_makeKalmanFilter_m4A1834C03FD2F6854B5262744DF086AF64F3C0DD (MatrixKalmanWrapper_tF94E7579C7B7B49D2F3807C34F54E386A407AC6A* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___f0, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___b1, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___u2, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___q3, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___h4, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___r5, const RuntimeMethod* method) ;
// System.Void Kalman.KalmanFilter::Correct(Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_Correct_m97F05523C1E559A23231370927B931B8F30A4521 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___z0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void Kalman.KalmanFilter::.ctor(Kalman.Matrix,Kalman.Matrix,Kalman.Matrix,Kalman.Matrix,Kalman.Matrix,Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter__ctor_m6397508B622E93654047F43CC83FCCBFBB022143 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___f0, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___b1, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___u2, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___q3, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___h4, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___r5, const RuntimeMethod* method) ;
// System.Void Kalman.KalmanFilter::SetState(Kalman.Matrix,Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_SetState_mC9CB95E7667857E29CF369D24FF284A80859E609 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___state0, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___covariance1, const RuntimeMethod* method) ;
// Kalman.KalmanFilterSimple1D Kalman.SimpleKalmanWrapper::makeKalmanFilter(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* SimpleKalmanWrapper_makeKalmanFilter_m1E4F0F8408CBA7CAF324CD479C83C64585BC770B (SimpleKalmanWrapper_tBFCE3906E1DA21E6C396BC39D28FFA741EC77092* __this, double ___q0, double ___r1, double ___f2, double ___h3, const RuntimeMethod* method) ;
// System.Void Kalman.KalmanFilterSimple1D::Correct(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_Correct_m8F4045B2D0BB1F37CB730C85E65748BD1016D7F3 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___data0, const RuntimeMethod* method) ;
// System.Void Kalman.KalmanFilterSimple1D::.ctor(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D__ctor_mE09182E4735A65F75ED40200D0F88E24FB799844 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___q0, double ___r1, double ___f2, double ___h3, const RuntimeMethod* method) ;
// System.Void Kalman.KalmanFilterSimple1D::SetState(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_SetState_mDDB70DC34D518D9FE771A64558B3E7E06EB5A5E0 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___state0, double ___covariance1, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
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
// Kalman.Matrix Kalman.KalmanFilter::get_X0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_X0_m6525ED71B7ED08C68D5DC7761EC8CE97C826B4B5 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		// public Matrix X0 { get; private set; }    // predicted state
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CX0U3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Kalman.KalmanFilter::set_X0(Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_set_X0_mDF8569EDA79886E255DEE3E236CBABEBC2EA736F (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) 
{
	{
		// public Matrix X0 { get; private set; }    // predicted state
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___value0;
		__this->___U3CX0U3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CX0U3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Kalman.Matrix Kalman.KalmanFilter::get_P0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_P0_mE2BC2F14CE0BE3934C497A4C6B30EF2EB26FE223 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		// public Matrix P0 { get; private set; }    // predicted covariance
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CP0U3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Kalman.KalmanFilter::set_P0(Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_set_P0_mF6D5507B96E0988F988AEEEE5828A941CA0D3F7B (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) 
{
	{
		// public Matrix P0 { get; private set; }    // predicted covariance
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___value0;
		__this->___U3CP0U3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CP0U3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Kalman.Matrix Kalman.KalmanFilter::get_F()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_F_m096A81E58C90EFAB3E1DF5A6E3B1442018767EA4 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		// public Matrix F { get; private set; }    // factor of real value to previous real value
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CFU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Kalman.KalmanFilter::set_F(Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_set_F_m64A2C6461DA7CFE711F3E175ED1DD21FE5EEE9A5 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) 
{
	{
		// public Matrix F { get; private set; }    // factor of real value to previous real value
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___value0;
		__this->___U3CFU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// Kalman.Matrix Kalman.KalmanFilter::get_B()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_B_m70B774C001A43D754E1731ED5131C26E3232D1FD (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		// public Matrix B { get; private set; }    // the control-input model which is applied to the control vector uk;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CBU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Kalman.KalmanFilter::set_B(Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_set_B_m714DB9724F4E31B4C22D5952B2CAEA8DEB81120E (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) 
{
	{
		// public Matrix B { get; private set; }    // the control-input model which is applied to the control vector uk;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___value0;
		__this->___U3CBU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// Kalman.Matrix Kalman.KalmanFilter::get_U()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_U_m3FF8C4DC1CD5A4C2712A2D1FB8EE1BAD047898BF (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		// public Matrix U { get; private set; }    // the control-input model which is applied to the control vector uk;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CUU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Kalman.KalmanFilter::set_U(Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_set_U_m2941B3355FCA5503E38BFC52733CFA6C6087436C (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) 
{
	{
		// public Matrix U { get; private set; }    // the control-input model which is applied to the control vector uk;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___value0;
		__this->___U3CUU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// Kalman.Matrix Kalman.KalmanFilter::get_Q()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_Q_m3D304029E70BC950C8CC3F5CC5CCD588E5EDF7A0 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		// public Matrix Q { get; private set; }    // measurement noise
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CQU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Kalman.KalmanFilter::set_Q(Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_set_Q_mFAADE44780E6D633563749ED52BD7357F30A7977 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) 
{
	{
		// public Matrix Q { get; private set; }    // measurement noise
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___value0;
		__this->___U3CQU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CQU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// Kalman.Matrix Kalman.KalmanFilter::get_H()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_H_m7AFB18AB875D036B0EA6C0D8C54EA8CEEB6830A4 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		// public Matrix H { get; private set; }    // factor of measured value to real value
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CHU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Kalman.KalmanFilter::set_H(Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_set_H_m9480D0B1AFBEEB4BB7E4175929142A07758914A0 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) 
{
	{
		// public Matrix H { get; private set; }    // factor of measured value to real value
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___value0;
		__this->___U3CHU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// Kalman.Matrix Kalman.KalmanFilter::get_R()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_R_m6AA93D761F1F399A4C60C22C09363267672DB8BB (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		// public Matrix R { get; private set; }    // environment noise
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CRU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Kalman.KalmanFilter::set_R(Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_set_R_mA2ACC4462D2FC181D9B20F806A2EE72E893B50EC (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) 
{
	{
		// public Matrix R { get; private set; }    // environment noise
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___value0;
		__this->___U3CRU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// Kalman.Matrix Kalman.KalmanFilter::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_State_m6C8D3346A43F94140CA6E900453BB409AB6FBA66 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		// public Matrix State { get; private set; }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CStateU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Kalman.KalmanFilter::set_State(Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_set_State_m20E9827CC4145E80FA5BC11511BEA00102CE7268 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) 
{
	{
		// public Matrix State { get; private set; }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___value0;
		__this->___U3CStateU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStateU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// Kalman.Matrix Kalman.KalmanFilter::get_Covariance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_Covariance_m0DBABD6D31F4293196CC327053A847F083B7E672 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		// public Matrix Covariance { get; private set; }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CCovarianceU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Kalman.KalmanFilter::set_Covariance(Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_set_Covariance_m823F46BBE8A9ACB4EF72383ACF8723E7E651BE59 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) 
{
	{
		// public Matrix Covariance { get; private set; }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___value0;
		__this->___U3CCovarianceU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCovarianceU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.Void Kalman.KalmanFilter::.ctor(Kalman.Matrix,Kalman.Matrix,Kalman.Matrix,Kalman.Matrix,Kalman.Matrix,Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter__ctor_m6397508B622E93654047F43CC83FCCBFBB022143 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___f0, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___b1, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___u2, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___q3, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___h4, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___r5, const RuntimeMethod* method) 
{
	{
		// public KalmanFilter(Matrix f, Matrix b, Matrix u, Matrix q, Matrix h, Matrix r)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// F = f;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___f0;
		KalmanFilter_set_F_m64A2C6461DA7CFE711F3E175ED1DD21FE5EEE9A5_inline(__this, L_0, NULL);
		// B = b;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_1 = ___b1;
		KalmanFilter_set_B_m714DB9724F4E31B4C22D5952B2CAEA8DEB81120E_inline(__this, L_1, NULL);
		// U = u;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2 = ___u2;
		KalmanFilter_set_U_m2941B3355FCA5503E38BFC52733CFA6C6087436C_inline(__this, L_2, NULL);
		// Q = q;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = ___q3;
		KalmanFilter_set_Q_mFAADE44780E6D633563749ED52BD7357F30A7977_inline(__this, L_3, NULL);
		// H = h;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_4 = ___h4;
		KalmanFilter_set_H_m9480D0B1AFBEEB4BB7E4175929142A07758914A0_inline(__this, L_4, NULL);
		// R = r;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_5 = ___r5;
		KalmanFilter_set_R_mA2ACC4462D2FC181D9B20F806A2EE72E893B50EC_inline(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void Kalman.KalmanFilter::SetState(Kalman.Matrix,Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_SetState_mC9CB95E7667857E29CF369D24FF284A80859E609 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___state0, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___covariance1, const RuntimeMethod* method) 
{
	{
		// State = state;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___state0;
		KalmanFilter_set_State_m20E9827CC4145E80FA5BC11511BEA00102CE7268_inline(__this, L_0, NULL);
		// Covariance = covariance;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_1 = ___covariance1;
		KalmanFilter_set_Covariance_m823F46BBE8A9ACB4EF72383ACF8723E7E651BE59_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Kalman.KalmanFilter::Correct(Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilter_Correct_m97F05523C1E559A23231370927B931B8F30A4521 (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___z0, const RuntimeMethod* method) 
{
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	{
		// X0 = F * State;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0;
		L_0 = KalmanFilter_get_F_m096A81E58C90EFAB3E1DF5A6E3B1442018767EA4_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_1;
		L_1 = KalmanFilter_get_State_m6C8D3346A43F94140CA6E900453BB409AB6FBA66_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2;
		L_2 = Matrix_op_Multiply_m288732D926A25D27D12CB8DC1DDAC5795130B120(L_0, L_1, NULL);
		KalmanFilter_set_X0_mDF8569EDA79886E255DEE3E236CBABEBC2EA736F_inline(__this, L_2, NULL);
		// P0 = F * Covariance * F.Transpose () + Q;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3;
		L_3 = KalmanFilter_get_F_m096A81E58C90EFAB3E1DF5A6E3B1442018767EA4_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_4;
		L_4 = KalmanFilter_get_Covariance_m0DBABD6D31F4293196CC327053A847F083B7E672_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_5;
		L_5 = Matrix_op_Multiply_m288732D926A25D27D12CB8DC1DDAC5795130B120(L_3, L_4, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_6;
		L_6 = KalmanFilter_get_F_m096A81E58C90EFAB3E1DF5A6E3B1442018767EA4_inline(__this, NULL);
		NullCheck(L_6);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_7;
		L_7 = Matrix_Transpose_mC6321D9A6F0E43CDC932800A379EFD5CDEFA69B9(L_6, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_8;
		L_8 = Matrix_op_Multiply_m288732D926A25D27D12CB8DC1DDAC5795130B120(L_5, L_7, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_9;
		L_9 = KalmanFilter_get_Q_m3D304029E70BC950C8CC3F5CC5CCD588E5EDF7A0_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_10;
		L_10 = Matrix_op_Addition_mD90B614C9A7E630A430AA78DC7BE9D1C5E202B75(L_8, L_9, NULL);
		KalmanFilter_set_P0_mF6D5507B96E0988F988AEEEE5828A941CA0D3F7B_inline(__this, L_10, NULL);
		// var k = P0 * H.Transpose () * (H * P0 * H.Transpose () + R).Invert (); // kalman gain
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_11;
		L_11 = KalmanFilter_get_P0_mE2BC2F14CE0BE3934C497A4C6B30EF2EB26FE223_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_12;
		L_12 = KalmanFilter_get_H_m7AFB18AB875D036B0EA6C0D8C54EA8CEEB6830A4_inline(__this, NULL);
		NullCheck(L_12);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_13;
		L_13 = Matrix_Transpose_mC6321D9A6F0E43CDC932800A379EFD5CDEFA69B9(L_12, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_14;
		L_14 = Matrix_op_Multiply_m288732D926A25D27D12CB8DC1DDAC5795130B120(L_11, L_13, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_15;
		L_15 = KalmanFilter_get_H_m7AFB18AB875D036B0EA6C0D8C54EA8CEEB6830A4_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_16;
		L_16 = KalmanFilter_get_P0_mE2BC2F14CE0BE3934C497A4C6B30EF2EB26FE223_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_17;
		L_17 = Matrix_op_Multiply_m288732D926A25D27D12CB8DC1DDAC5795130B120(L_15, L_16, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_18;
		L_18 = KalmanFilter_get_H_m7AFB18AB875D036B0EA6C0D8C54EA8CEEB6830A4_inline(__this, NULL);
		NullCheck(L_18);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_19;
		L_19 = Matrix_Transpose_mC6321D9A6F0E43CDC932800A379EFD5CDEFA69B9(L_18, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_20;
		L_20 = Matrix_op_Multiply_m288732D926A25D27D12CB8DC1DDAC5795130B120(L_17, L_19, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_21;
		L_21 = KalmanFilter_get_R_m6AA93D761F1F399A4C60C22C09363267672DB8BB_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_22;
		L_22 = Matrix_op_Addition_mD90B614C9A7E630A430AA78DC7BE9D1C5E202B75(L_20, L_21, NULL);
		NullCheck(L_22);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_23;
		L_23 = Matrix_Invert_m025110DC6C085B38C6245FC923A60DBAA24CB8DA(L_22, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_24;
		L_24 = Matrix_op_Multiply_m288732D926A25D27D12CB8DC1DDAC5795130B120(L_14, L_23, NULL);
		V_0 = L_24;
		// State = X0 + (k * (z - (H * X0)));
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_25;
		L_25 = KalmanFilter_get_X0_m6525ED71B7ED08C68D5DC7761EC8CE97C826B4B5_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_26 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_27 = ___z0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_28;
		L_28 = KalmanFilter_get_H_m7AFB18AB875D036B0EA6C0D8C54EA8CEEB6830A4_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_29;
		L_29 = KalmanFilter_get_X0_m6525ED71B7ED08C68D5DC7761EC8CE97C826B4B5_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_30;
		L_30 = Matrix_op_Multiply_m288732D926A25D27D12CB8DC1DDAC5795130B120(L_28, L_29, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_31;
		L_31 = Matrix_op_Subtraction_m683DEECECA23B898510BF60F093B26ED43F020FF(L_27, L_30, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_32;
		L_32 = Matrix_op_Multiply_m288732D926A25D27D12CB8DC1DDAC5795130B120(L_26, L_31, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_33;
		L_33 = Matrix_op_Addition_mD90B614C9A7E630A430AA78DC7BE9D1C5E202B75(L_25, L_32, NULL);
		KalmanFilter_set_State_m20E9827CC4145E80FA5BC11511BEA00102CE7268_inline(__this, L_33, NULL);
		// Covariance = (Matrix.IdentityMatrix (P0.rows) - k * H) * P0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_34;
		L_34 = KalmanFilter_get_P0_mE2BC2F14CE0BE3934C497A4C6B30EF2EB26FE223_inline(__this, NULL);
		NullCheck(L_34);
		int32_t L_35 = L_34->___rows_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_36;
		L_36 = Matrix_IdentityMatrix_mDEB85646CBD384AEFF238196F2C2D6E5CE87DDEF(L_35, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_37 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_38;
		L_38 = KalmanFilter_get_H_m7AFB18AB875D036B0EA6C0D8C54EA8CEEB6830A4_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_39;
		L_39 = Matrix_op_Multiply_m288732D926A25D27D12CB8DC1DDAC5795130B120(L_37, L_38, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_40;
		L_40 = Matrix_op_Subtraction_m683DEECECA23B898510BF60F093B26ED43F020FF(L_36, L_39, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_41;
		L_41 = KalmanFilter_get_P0_mE2BC2F14CE0BE3934C497A4C6B30EF2EB26FE223_inline(__this, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_42;
		L_42 = Matrix_op_Multiply_m288732D926A25D27D12CB8DC1DDAC5795130B120(L_40, L_41, NULL);
		KalmanFilter_set_Covariance_m823F46BBE8A9ACB4EF72383ACF8723E7E651BE59_inline(__this, L_42, NULL);
		// }
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
// System.Double Kalman.KalmanFilterSimple1D::get_X0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_X0_mCFD4303E43B8F6EFA141E3411D5E30DD5D5C9638 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		// public double X0 { get; private set; } // predicted state
		double L_0 = __this->___U3CX0U3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Kalman.KalmanFilterSimple1D::set_X0(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_X0_m03A863C60B036F210E4520E23180BB4EFEA666AB (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double X0 { get; private set; } // predicted state
		double L_0 = ___value0;
		__this->___U3CX0U3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Double Kalman.KalmanFilterSimple1D::get_P0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_P0_mF6327BFB1907AF17BBCE80FA7CE62D4E17278FD1 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		// public double P0 { get; private set; } // predicted covariance
		double L_0 = __this->___U3CP0U3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Kalman.KalmanFilterSimple1D::set_P0(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_P0_m3087DC31B2CCF163F73766DF1E786EC2B1580D8B (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double P0 { get; private set; } // predicted covariance
		double L_0 = ___value0;
		__this->___U3CP0U3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Double Kalman.KalmanFilterSimple1D::get_F()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_F_m5C756567DB1FA3617AFDAB3EBBB1E029938BE5C7 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		// public double F { get; private set; } // factor of real value to previous real value
		double L_0 = __this->___U3CFU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Kalman.KalmanFilterSimple1D::set_F(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_F_mE329B338AE11A23DDF798157DDDF0909A8BB87A1 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double F { get; private set; } // factor of real value to previous real value
		double L_0 = ___value0;
		__this->___U3CFU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Double Kalman.KalmanFilterSimple1D::get_Q()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_Q_m3BC34AB32A26ADC3904A93D66378F4E996D68CB1 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		// public double Q { get; private set; } // measurement noise
		double L_0 = __this->___U3CQU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Kalman.KalmanFilterSimple1D::set_Q(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_Q_m1DC3CB34B6F0B84895DE72D93F99F646E1670B82 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double Q { get; private set; } // measurement noise
		double L_0 = ___value0;
		__this->___U3CQU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Double Kalman.KalmanFilterSimple1D::get_H()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_H_mE39101C9204E4C8C6F24CFC7C7D00ED0C81FE604 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		// public double H { get; private set; } // factor of measured value to real value
		double L_0 = __this->___U3CHU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Kalman.KalmanFilterSimple1D::set_H(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_H_mC0BC7397BD0F247678BAB267928FFDCB2755FC27 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double H { get; private set; } // factor of measured value to real value
		double L_0 = ___value0;
		__this->___U3CHU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Double Kalman.KalmanFilterSimple1D::get_R()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_R_m66D845E477AD4F966EB5CEA1F163252CC3650454 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		// public double R { get; private set; } // environment noise
		double L_0 = __this->___U3CRU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Kalman.KalmanFilterSimple1D::set_R(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_R_mCFF19948E60888FC1A97923066BABA8556B99726 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double R { get; private set; } // environment noise
		double L_0 = ___value0;
		__this->___U3CRU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Double Kalman.KalmanFilterSimple1D::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_State_m8D3442FCBD72F9EF9363630036772CA53BFA9A40 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		// public double State { get; private set; }
		double L_0 = __this->___U3CStateU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Kalman.KalmanFilterSimple1D::set_State(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_State_m1939BDF5E9508479990229AEC371E3ED0D7882B4 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double State { get; private set; }
		double L_0 = ___value0;
		__this->___U3CStateU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Double Kalman.KalmanFilterSimple1D::get_Covariance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_Covariance_m0748CCCAA3696D67D8409F669EFF607D1CDDF278 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		// public double Covariance { get; private set; }
		double L_0 = __this->___U3CCovarianceU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Kalman.KalmanFilterSimple1D::set_Covariance(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_Covariance_mA38C27D2638B949BAC94CA0A74C9ABBA52503CE3 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double Covariance { get; private set; }
		double L_0 = ___value0;
		__this->___U3CCovarianceU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Void Kalman.KalmanFilterSimple1D::.ctor(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D__ctor_mE09182E4735A65F75ED40200D0F88E24FB799844 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___q0, double ___r1, double ___f2, double ___h3, const RuntimeMethod* method) 
{
	{
		// public KalmanFilterSimple1D(double q, double r, double f = 1, double h = 1)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Q = q;
		double L_0 = ___q0;
		KalmanFilterSimple1D_set_Q_m1DC3CB34B6F0B84895DE72D93F99F646E1670B82_inline(__this, L_0, NULL);
		// R = r;
		double L_1 = ___r1;
		KalmanFilterSimple1D_set_R_mCFF19948E60888FC1A97923066BABA8556B99726_inline(__this, L_1, NULL);
		// F = f;
		double L_2 = ___f2;
		KalmanFilterSimple1D_set_F_mE329B338AE11A23DDF798157DDDF0909A8BB87A1_inline(__this, L_2, NULL);
		// H = h;
		double L_3 = ___h3;
		KalmanFilterSimple1D_set_H_mC0BC7397BD0F247678BAB267928FFDCB2755FC27_inline(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void Kalman.KalmanFilterSimple1D::SetState(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_SetState_mDDB70DC34D518D9FE771A64558B3E7E06EB5A5E0 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___state0, double ___covariance1, const RuntimeMethod* method) 
{
	{
		// State = state;
		double L_0 = ___state0;
		KalmanFilterSimple1D_set_State_m1939BDF5E9508479990229AEC371E3ED0D7882B4_inline(__this, L_0, NULL);
		// Covariance = covariance;
		double L_1 = ___covariance1;
		KalmanFilterSimple1D_set_Covariance_mA38C27D2638B949BAC94CA0A74C9ABBA52503CE3_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Kalman.KalmanFilterSimple1D::Correct(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_Correct_m8F4045B2D0BB1F37CB730C85E65748BD1016D7F3 (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___data0, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		// X0 = F * State;
		double L_0;
		L_0 = KalmanFilterSimple1D_get_F_m5C756567DB1FA3617AFDAB3EBBB1E029938BE5C7_inline(__this, NULL);
		double L_1;
		L_1 = KalmanFilterSimple1D_get_State_m8D3442FCBD72F9EF9363630036772CA53BFA9A40_inline(__this, NULL);
		KalmanFilterSimple1D_set_X0_m03A863C60B036F210E4520E23180BB4EFEA666AB_inline(__this, ((double)il2cpp_codegen_multiply(L_0, L_1)), NULL);
		// P0 = F * Covariance * F + Q;
		double L_2;
		L_2 = KalmanFilterSimple1D_get_F_m5C756567DB1FA3617AFDAB3EBBB1E029938BE5C7_inline(__this, NULL);
		double L_3;
		L_3 = KalmanFilterSimple1D_get_Covariance_m0748CCCAA3696D67D8409F669EFF607D1CDDF278_inline(__this, NULL);
		double L_4;
		L_4 = KalmanFilterSimple1D_get_F_m5C756567DB1FA3617AFDAB3EBBB1E029938BE5C7_inline(__this, NULL);
		double L_5;
		L_5 = KalmanFilterSimple1D_get_Q_m3BC34AB32A26ADC3904A93D66378F4E996D68CB1_inline(__this, NULL);
		KalmanFilterSimple1D_set_P0_m3087DC31B2CCF163F73766DF1E786EC2B1580D8B_inline(__this, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_2, L_3)), L_4)), L_5)), NULL);
		// var K = H * P0 / (H * P0 * H + R);
		double L_6;
		L_6 = KalmanFilterSimple1D_get_H_mE39101C9204E4C8C6F24CFC7C7D00ED0C81FE604_inline(__this, NULL);
		double L_7;
		L_7 = KalmanFilterSimple1D_get_P0_mF6327BFB1907AF17BBCE80FA7CE62D4E17278FD1_inline(__this, NULL);
		double L_8;
		L_8 = KalmanFilterSimple1D_get_H_mE39101C9204E4C8C6F24CFC7C7D00ED0C81FE604_inline(__this, NULL);
		double L_9;
		L_9 = KalmanFilterSimple1D_get_P0_mF6327BFB1907AF17BBCE80FA7CE62D4E17278FD1_inline(__this, NULL);
		double L_10;
		L_10 = KalmanFilterSimple1D_get_H_mE39101C9204E4C8C6F24CFC7C7D00ED0C81FE604_inline(__this, NULL);
		double L_11;
		L_11 = KalmanFilterSimple1D_get_R_m66D845E477AD4F966EB5CEA1F163252CC3650454_inline(__this, NULL);
		V_0 = ((double)(((double)il2cpp_codegen_multiply(L_6, L_7))/((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_8, L_9)), L_10)), L_11))));
		// State = X0 + K * (data - H * X0);
		double L_12;
		L_12 = KalmanFilterSimple1D_get_X0_mCFD4303E43B8F6EFA141E3411D5E30DD5D5C9638_inline(__this, NULL);
		double L_13 = V_0;
		double L_14 = ___data0;
		double L_15;
		L_15 = KalmanFilterSimple1D_get_H_mE39101C9204E4C8C6F24CFC7C7D00ED0C81FE604_inline(__this, NULL);
		double L_16;
		L_16 = KalmanFilterSimple1D_get_X0_mCFD4303E43B8F6EFA141E3411D5E30DD5D5C9638_inline(__this, NULL);
		KalmanFilterSimple1D_set_State_m1939BDF5E9508479990229AEC371E3ED0D7882B4_inline(__this, ((double)il2cpp_codegen_add(L_12, ((double)il2cpp_codegen_multiply(L_13, ((double)il2cpp_codegen_subtract(L_14, ((double)il2cpp_codegen_multiply(L_15, L_16)))))))), NULL);
		// Covariance = (1 - K * H) * P0;
		double L_17 = V_0;
		double L_18;
		L_18 = KalmanFilterSimple1D_get_H_mE39101C9204E4C8C6F24CFC7C7D00ED0C81FE604_inline(__this, NULL);
		double L_19;
		L_19 = KalmanFilterSimple1D_get_P0_mF6327BFB1907AF17BBCE80FA7CE62D4E17278FD1_inline(__this, NULL);
		KalmanFilterSimple1D_set_Covariance_mA38C27D2638B949BAC94CA0A74C9ABBA52503CE3_inline(__this, ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract((1.0), ((double)il2cpp_codegen_multiply(L_17, L_18)))), L_19)), NULL);
		// }
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
// System.Void Kalman.Matrix::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, int32_t ___iRows0, int32_t ___iCols1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private double detOfP = 1;
		__this->___detOfP_6 = (1.0);
		// public Matrix (int iRows, int iCols)         // Matrix Class constructor
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// rows = iRows;
		int32_t L_0 = ___iRows0;
		__this->___rows_0 = L_0;
		// cols = iCols;
		int32_t L_1 = ___iCols1;
		__this->___cols_1 = L_1;
		// mat = new double[rows, cols];
		int32_t L_2 = __this->___rows_0;
		int32_t L_3 = __this->___cols_1;
		il2cpp_array_size_t L_5[] = { (il2cpp_array_size_t)L_2, (il2cpp_array_size_t)L_3 };
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_4 = (DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE*)GenArrayNew(DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var, L_5);
		__this->___mat_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mat_2), (void*)L_4);
		// }
		return;
	}
}
// System.Void Kalman.Matrix::.ctor(System.Double[,])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix__ctor_m366E3755C05163084E4353ED1C19FD23E0BE631C (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* ___matrix0, const RuntimeMethod* method) 
{
	{
		// private double detOfP = 1;
		__this->___detOfP_6 = (1.0);
		// public Matrix (double[,] matrix)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// rows = matrix.GetLength (0);
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_0 = ___matrix0;
		NullCheck((RuntimeArray*)L_0);
		int32_t L_1;
		L_1 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_0, 0, NULL);
		__this->___rows_0 = L_1;
		// cols = matrix.GetLength (1);
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_2 = ___matrix0;
		NullCheck((RuntimeArray*)L_2);
		int32_t L_3;
		L_3 = Array_GetLength_mFE7A9FE891DE1E07795230BE09854441CDD0E935((RuntimeArray*)L_2, 1, NULL);
		__this->___cols_1 = L_3;
		// mat = matrix;
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_4 = ___matrix0;
		__this->___mat_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mat_2), (void*)L_4);
		// }
		return;
	}
}
// System.Boolean Kalman.Matrix::IsSquare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Matrix_IsSquare_mA7D6A78DEC5B86B73790A95033B375E93966B213 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return (rows == cols);
		int32_t L_0 = __this->___rows_0;
		int32_t L_1 = __this->___cols_1;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Double Kalman.Matrix::get_Item(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, int32_t ___iRow0, int32_t ___iCol1, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		// get { return mat[iRow, iCol]; }
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_0 = __this->___mat_2;
		int32_t L_1 = ___iRow0;
		int32_t L_2 = ___iCol1;
		NullCheck(L_0);
		double L_3;
		L_3 = (L_0)->GetAt(L_1, L_2);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// get { return mat[iRow, iCol]; }
		double L_4 = V_0;
		return L_4;
	}
}
// System.Void Kalman.Matrix::set_Item(System.Int32,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, int32_t ___iRow0, int32_t ___iCol1, double ___value2, const RuntimeMethod* method) 
{
	{
		// set { mat[iRow, iCol] = value; }
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_0 = __this->___mat_2;
		int32_t L_1 = ___iRow0;
		int32_t L_2 = ___iCol1;
		double L_3 = ___value2;
		NullCheck(L_0);
		(L_0)->SetAt(L_1, L_2, L_3);
		// set { mat[iRow, iCol] = value; }
		return;
	}
}
// Kalman.Matrix Kalman.Matrix::GetCol(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_GetCol_mA2B4F15AAD893AF203482630D722922A34982AD6 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, int32_t ___k0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_3 = NULL;
	{
		// Matrix m = new Matrix(rows, 1);
		int32_t L_0 = __this->___rows_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_1 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_1, L_0, 1, NULL);
		V_0 = L_1;
		// for (int i = 0; i < rows; i++) m[i, 0] = mat[i, k];
		V_1 = 0;
		goto IL_002c;
	}

IL_0012:
	{
		// for (int i = 0; i < rows; i++) m[i, 0] = mat[i, k];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2 = V_0;
		int32_t L_3 = V_1;
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_4 = __this->___mat_2;
		int32_t L_5 = V_1;
		int32_t L_6 = ___k0;
		NullCheck(L_4);
		double L_7;
		L_7 = (L_4)->GetAt(L_5, L_6);
		NullCheck(L_2);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_2, L_3, 0, L_7, NULL);
		// for (int i = 0; i < rows; i++) m[i, 0] = mat[i, k];
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_002c:
	{
		// for (int i = 0; i < rows; i++) m[i, 0] = mat[i, k];
		int32_t L_9 = V_1;
		int32_t L_10 = __this->___rows_0;
		V_2 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_0012;
		}
	}
	{
		// return m;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_12 = V_0;
		V_3 = L_12;
		goto IL_003d;
	}

IL_003d:
	{
		// }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_13 = V_3;
		return L_13;
	}
}
// System.Void Kalman.Matrix::SetCol(Kalman.Matrix,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_SetCol_m572AA23649D9EB9862AA97F0385F5C95B3A9380A (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___v0, int32_t ___k1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int i = 0; i < rows; i++) mat[i, k] = v[i, 0];
		V_0 = 0;
		goto IL_001e;
	}

IL_0005:
	{
		// for (int i = 0; i < rows; i++) mat[i, k] = v[i, 0];
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_0 = __this->___mat_2;
		int32_t L_1 = V_0;
		int32_t L_2 = ___k1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = ___v0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		double L_5;
		L_5 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_3, L_4, 0, NULL);
		NullCheck(L_0);
		(L_0)->SetAt(L_1, L_2, L_5);
		// for (int i = 0; i < rows; i++) mat[i, k] = v[i, 0];
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001e:
	{
		// for (int i = 0; i < rows; i++) mat[i, k] = v[i, 0];
		int32_t L_7 = V_0;
		int32_t L_8 = __this->___rows_0;
		V_1 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Kalman.Matrix::MakeLU()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_MakeLU_m5B9ED29DE79A1708172C232FE1B5793CC66567FB (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	{
		// if (!IsSquare()) throw new MException("The matrix is not square!");
		bool L_0;
		L_0 = Matrix_IsSquare_mA7D6A78DEC5B86B73790A95033B375E93966B213(__this, NULL);
		V_4 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// if (!IsSquare()) throw new MException("The matrix is not square!");
		MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542* L_2 = (MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		MException__ctor_m0556F1CA0ADCAF46291549D0C7B600EFEFE2F7AE(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral55C1681428B04B53C037730ADAE3A34FF5F59650)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Matrix_MakeLU_m5B9ED29DE79A1708172C232FE1B5793CC66567FB_RuntimeMethod_var)));
	}

IL_001b:
	{
		// L = IdentityMatrix(rows, cols);
		int32_t L_3 = __this->___rows_0;
		int32_t L_4 = __this->___cols_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_5;
		L_5 = Matrix_IdentityMatrix_m761F0976C77A545C21049F9FD13D4EB627C24F3A(L_3, L_4, NULL);
		__this->___L_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___L_3), (void*)L_5);
		// U = Duplicate();
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_6;
		L_6 = Matrix_Duplicate_m305F18F019ED96527662E14DFCFFA0427423F331(__this, NULL);
		__this->___U_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U_4), (void*)L_6);
		// pi = new int[rows];
		int32_t L_7 = __this->___rows_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->___pi_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pi_5), (void*)L_8);
		// for (int i = 0; i < rows; i++) pi[i] = i;
		V_5 = 0;
		goto IL_0065;
	}

IL_0054:
	{
		// for (int i = 0; i < rows; i++) pi[i] = i;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->___pi_5;
		int32_t L_10 = V_5;
		int32_t L_11 = V_5;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (int32_t)L_11);
		// for (int i = 0; i < rows; i++) pi[i] = i;
		int32_t L_12 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0065:
	{
		// for (int i = 0; i < rows; i++) pi[i] = i;
		int32_t L_13 = V_5;
		int32_t L_14 = __this->___rows_0;
		V_6 = (bool)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_6;
		if (L_15)
		{
			goto IL_0054;
		}
	}
	{
		// double p = 0;
		V_0 = (0.0);
		// int k0 = 0;
		V_2 = 0;
		// int pom1 = 0;
		V_3 = 0;
		// for (int k = 0; k < cols - 1; k++)
		V_7 = 0;
		goto IL_02b9;
	}

IL_008b:
	{
		// p = 0;
		V_0 = (0.0);
		// for (int i = k; i < rows; i++)      // find the row with the biggest pivot
		int32_t L_16 = V_7;
		V_8 = L_16;
		goto IL_00db;
	}

IL_009c:
	{
		// if (Math.Abs(U[i, k]) > p)
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_17 = __this->___U_4;
		int32_t L_18 = V_8;
		int32_t L_19 = V_7;
		NullCheck(L_17);
		double L_20;
		L_20 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_17, L_18, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_21;
		L_21 = fabs(L_20);
		double L_22 = V_0;
		V_9 = (bool)((((double)L_21) > ((double)L_22))? 1 : 0);
		bool L_23 = V_9;
		if (!L_23)
		{
			goto IL_00d4;
		}
	}
	{
		// p = Math.Abs(U[i, k]);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_24 = __this->___U_4;
		int32_t L_25 = V_8;
		int32_t L_26 = V_7;
		NullCheck(L_24);
		double L_27;
		L_27 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_24, L_25, L_26, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_28;
		L_28 = fabs(L_27);
		V_0 = L_28;
		// k0 = i;
		int32_t L_29 = V_8;
		V_2 = L_29;
	}

IL_00d4:
	{
		// for (int i = k; i < rows; i++)      // find the row with the biggest pivot
		int32_t L_30 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00db:
	{
		// for (int i = k; i < rows; i++)      // find the row with the biggest pivot
		int32_t L_31 = V_8;
		int32_t L_32 = __this->___rows_0;
		V_10 = (bool)((((int32_t)L_31) < ((int32_t)L_32))? 1 : 0);
		bool L_33 = V_10;
		if (L_33)
		{
			goto IL_009c;
		}
	}
	{
		// if (p == 0) // sam? nuly ve sloupci
		double L_34 = V_0;
		V_11 = (bool)((((double)L_34) == ((double)(0.0)))? 1 : 0);
		bool L_35 = V_11;
		if (!L_35)
		{
			goto IL_0108;
		}
	}
	{
		// throw new MException("The matrix is singular!");
		MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542* L_36 = (MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542_il2cpp_TypeInfo_var)));
		NullCheck(L_36);
		MException__ctor_m0556F1CA0ADCAF46291549D0C7B600EFEFE2F7AE(L_36, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD6B5B78BCFFA7C1FD4EA5CFE3CC8CE6D6629D68B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Matrix_MakeLU_m5B9ED29DE79A1708172C232FE1B5793CC66567FB_RuntimeMethod_var)));
	}

IL_0108:
	{
		// pom1 = pi[k]; pi[k] = pi[k0]; pi[k0] = pom1;    // switch two rows in permutation matrix
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = __this->___pi_5;
		int32_t L_38 = V_7;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		int32_t L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_3 = L_40;
		// pom1 = pi[k]; pi[k] = pi[k0]; pi[k0] = pom1;    // switch two rows in permutation matrix
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_41 = __this->___pi_5;
		int32_t L_42 = V_7;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = __this->___pi_5;
		int32_t L_44 = V_2;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		int32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (int32_t)L_46);
		// pom1 = pi[k]; pi[k] = pi[k0]; pi[k0] = pom1;    // switch two rows in permutation matrix
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_47 = __this->___pi_5;
		int32_t L_48 = V_2;
		int32_t L_49 = V_3;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (int32_t)L_49);
		// for (int i = 0; i < k; i++)
		V_12 = 0;
		goto IL_0177;
	}

IL_0131:
	{
		// pom2 = L[k, i]; L[k, i] = L[k0, i]; L[k0, i] = pom2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_50 = __this->___L_3;
		int32_t L_51 = V_7;
		int32_t L_52 = V_12;
		NullCheck(L_50);
		double L_53;
		L_53 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_50, L_51, L_52, NULL);
		V_1 = L_53;
		// pom2 = L[k, i]; L[k, i] = L[k0, i]; L[k0, i] = pom2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_54 = __this->___L_3;
		int32_t L_55 = V_7;
		int32_t L_56 = V_12;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_57 = __this->___L_3;
		int32_t L_58 = V_2;
		int32_t L_59 = V_12;
		NullCheck(L_57);
		double L_60;
		L_60 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_57, L_58, L_59, NULL);
		NullCheck(L_54);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_54, L_55, L_56, L_60, NULL);
		// pom2 = L[k, i]; L[k, i] = L[k0, i]; L[k0, i] = pom2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_61 = __this->___L_3;
		int32_t L_62 = V_2;
		int32_t L_63 = V_12;
		double L_64 = V_1;
		NullCheck(L_61);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_61, L_62, L_63, L_64, NULL);
		// for (int i = 0; i < k; i++)
		int32_t L_65 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0177:
	{
		// for (int i = 0; i < k; i++)
		int32_t L_66 = V_12;
		int32_t L_67 = V_7;
		V_13 = (bool)((((int32_t)L_66) < ((int32_t)L_67))? 1 : 0);
		bool L_68 = V_13;
		if (L_68)
		{
			goto IL_0131;
		}
	}
	{
		// if (k != k0) detOfP *= -1;
		int32_t L_69 = V_7;
		int32_t L_70 = V_2;
		V_14 = (bool)((((int32_t)((((int32_t)L_69) == ((int32_t)L_70))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_71 = V_14;
		if (!L_71)
		{
			goto IL_01a7;
		}
	}
	{
		// if (k != k0) detOfP *= -1;
		double L_72 = __this->___detOfP_6;
		__this->___detOfP_6 = ((double)il2cpp_codegen_multiply(L_72, (-1.0)));
	}

IL_01a7:
	{
		// for (int i = 0; i < cols; i++)                  // Switch rows in U
		V_15 = 0;
		goto IL_01f2;
	}

IL_01ac:
	{
		// pom2 = U[k, i]; U[k, i] = U[k0, i]; U[k0, i] = pom2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_73 = __this->___U_4;
		int32_t L_74 = V_7;
		int32_t L_75 = V_15;
		NullCheck(L_73);
		double L_76;
		L_76 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_73, L_74, L_75, NULL);
		V_1 = L_76;
		// pom2 = U[k, i]; U[k, i] = U[k0, i]; U[k0, i] = pom2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_77 = __this->___U_4;
		int32_t L_78 = V_7;
		int32_t L_79 = V_15;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_80 = __this->___U_4;
		int32_t L_81 = V_2;
		int32_t L_82 = V_15;
		NullCheck(L_80);
		double L_83;
		L_83 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_80, L_81, L_82, NULL);
		NullCheck(L_77);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_77, L_78, L_79, L_83, NULL);
		// pom2 = U[k, i]; U[k, i] = U[k0, i]; U[k0, i] = pom2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_84 = __this->___U_4;
		int32_t L_85 = V_2;
		int32_t L_86 = V_15;
		double L_87 = V_1;
		NullCheck(L_84);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_84, L_85, L_86, L_87, NULL);
		// for (int i = 0; i < cols; i++)                  // Switch rows in U
		int32_t L_88 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_88, 1));
	}

IL_01f2:
	{
		// for (int i = 0; i < cols; i++)                  // Switch rows in U
		int32_t L_89 = V_15;
		int32_t L_90 = __this->___cols_1;
		V_16 = (bool)((((int32_t)L_89) < ((int32_t)L_90))? 1 : 0);
		bool L_91 = V_16;
		if (L_91)
		{
			goto IL_01ac;
		}
	}
	{
		// for (int i = k + 1; i < rows; i++)
		int32_t L_92 = V_7;
		V_17 = ((int32_t)il2cpp_codegen_add(L_92, 1));
		goto IL_029f;
	}

IL_020d:
	{
		// L[i, k] = U[i, k] / U[k, k];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_93 = __this->___L_3;
		int32_t L_94 = V_17;
		int32_t L_95 = V_7;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_96 = __this->___U_4;
		int32_t L_97 = V_17;
		int32_t L_98 = V_7;
		NullCheck(L_96);
		double L_99;
		L_99 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_96, L_97, L_98, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_100 = __this->___U_4;
		int32_t L_101 = V_7;
		int32_t L_102 = V_7;
		NullCheck(L_100);
		double L_103;
		L_103 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_100, L_101, L_102, NULL);
		NullCheck(L_93);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_93, L_94, L_95, ((double)(L_99/L_103)), NULL);
		// for (int j = k; j < cols; j++)
		int32_t L_104 = V_7;
		V_18 = L_104;
		goto IL_0288;
	}

IL_0243:
	{
		// U[i, j] = U[i, j] - L[i, k] * U[k, j];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_105 = __this->___U_4;
		int32_t L_106 = V_17;
		int32_t L_107 = V_18;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_108 = __this->___U_4;
		int32_t L_109 = V_17;
		int32_t L_110 = V_18;
		NullCheck(L_108);
		double L_111;
		L_111 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_108, L_109, L_110, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_112 = __this->___L_3;
		int32_t L_113 = V_17;
		int32_t L_114 = V_7;
		NullCheck(L_112);
		double L_115;
		L_115 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_112, L_113, L_114, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_116 = __this->___U_4;
		int32_t L_117 = V_7;
		int32_t L_118 = V_18;
		NullCheck(L_116);
		double L_119;
		L_119 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_116, L_117, L_118, NULL);
		NullCheck(L_105);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_105, L_106, L_107, ((double)il2cpp_codegen_subtract(L_111, ((double)il2cpp_codegen_multiply(L_115, L_119)))), NULL);
		// for (int j = k; j < cols; j++)
		int32_t L_120 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_120, 1));
	}

IL_0288:
	{
		// for (int j = k; j < cols; j++)
		int32_t L_121 = V_18;
		int32_t L_122 = __this->___cols_1;
		V_19 = (bool)((((int32_t)L_121) < ((int32_t)L_122))? 1 : 0);
		bool L_123 = V_19;
		if (L_123)
		{
			goto IL_0243;
		}
	}
	{
		// for (int i = k + 1; i < rows; i++)
		int32_t L_124 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_124, 1));
	}

IL_029f:
	{
		// for (int i = k + 1; i < rows; i++)
		int32_t L_125 = V_17;
		int32_t L_126 = __this->___rows_0;
		V_20 = (bool)((((int32_t)L_125) < ((int32_t)L_126))? 1 : 0);
		bool L_127 = V_20;
		if (L_127)
		{
			goto IL_020d;
		}
	}
	{
		// for (int k = 0; k < cols - 1; k++)
		int32_t L_128 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_128, 1));
	}

IL_02b9:
	{
		// for (int k = 0; k < cols - 1; k++)
		int32_t L_129 = V_7;
		int32_t L_130 = __this->___cols_1;
		V_21 = (bool)((((int32_t)L_129) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_130, 1))))? 1 : 0);
		bool L_131 = V_21;
		if (L_131)
		{
			goto IL_008b;
		}
	}
	{
		// }
		return;
	}
}
// Kalman.Matrix Kalman.Matrix::SolveWith(Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_SolveWith_m8243F1B915336EF12063532064CA7F9EE437E4C6 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___v0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_1 = NULL;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_8 = NULL;
	{
		// if (rows != cols) throw new MException("The matrix is not square!");
		int32_t L_0 = __this->___rows_0;
		int32_t L_1 = __this->___cols_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_3;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// if (rows != cols) throw new MException("The matrix is not square!");
		MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542* L_3 = (MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		MException__ctor_m0556F1CA0ADCAF46291549D0C7B600EFEFE2F7AE(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral55C1681428B04B53C037730ADAE3A34FF5F59650)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Matrix_SolveWith_m8243F1B915336EF12063532064CA7F9EE437E4C6_RuntimeMethod_var)));
	}

IL_0021:
	{
		// if (rows != v.rows) throw new MException("Wrong number of results in solution vector!");
		int32_t L_4 = __this->___rows_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_5 = ___v0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___rows_0;
		V_4 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		// if (rows != v.rows) throw new MException("Wrong number of results in solution vector!");
		MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542* L_8 = (MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		MException__ctor_m0556F1CA0ADCAF46291549D0C7B600EFEFE2F7AE(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8004D8D7C06F44B14DED80921D95B6A3A2BAB38A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Matrix_SolveWith_m8243F1B915336EF12063532064CA7F9EE437E4C6_RuntimeMethod_var)));
	}

IL_0043:
	{
		// if (L == null) MakeLU();
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_9 = __this->___L_3;
		V_5 = (bool)((((RuntimeObject*)(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)L_9) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_0059;
		}
	}
	{
		// if (L == null) MakeLU();
		Matrix_MakeLU_m5B9ED29DE79A1708172C232FE1B5793CC66567FB(__this, NULL);
	}

IL_0059:
	{
		// Matrix b = new Matrix(rows, 1);
		int32_t L_11 = __this->___rows_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_12 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_12, L_11, 1, NULL);
		V_0 = L_12;
		// for (int i = 0; i < rows; i++) b[i, 0] = v[pi[i], 0];   // switch two items in "v" due to permutation matrix
		V_6 = 0;
		goto IL_008b;
	}

IL_006b:
	{
		// for (int i = 0; i < rows; i++) b[i, 0] = v[pi[i], 0];   // switch two items in "v" due to permutation matrix
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_13 = V_0;
		int32_t L_14 = V_6;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_15 = ___v0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->___pi_5;
		int32_t L_17 = V_6;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		int32_t L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_15);
		double L_20;
		L_20 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_15, L_19, 0, NULL);
		NullCheck(L_13);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_13, L_14, 0, L_20, NULL);
		// for (int i = 0; i < rows; i++) b[i, 0] = v[pi[i], 0];   // switch two items in "v" due to permutation matrix
		int32_t L_21 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_008b:
	{
		// for (int i = 0; i < rows; i++) b[i, 0] = v[pi[i], 0];   // switch two items in "v" due to permutation matrix
		int32_t L_22 = V_6;
		int32_t L_23 = __this->___rows_0;
		V_7 = (bool)((((int32_t)L_22) < ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_7;
		if (L_24)
		{
			goto IL_006b;
		}
	}
	{
		// Matrix z = SubsForth(L, b);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_25 = __this->___L_3;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_26 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_27;
		L_27 = Matrix_SubsForth_mF459B56052DE7A0DD9CA9218B2BD07BB917DAA75(L_25, L_26, NULL);
		V_1 = L_27;
		// Matrix x = SubsBack(U, z);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_28 = __this->___U_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_29 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_30;
		L_30 = Matrix_SubsBack_m5ECCC1792F8DD6B01F7C77F0D3E7B6E279527EF6(L_28, L_29, NULL);
		V_2 = L_30;
		// return x;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_31 = V_2;
		V_8 = L_31;
		goto IL_00ba;
	}

IL_00ba:
	{
		// }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_32 = V_8;
		return L_32;
	}
}
// Kalman.Matrix Kalman.Matrix::Invert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Invert_m025110DC6C085B38C6245FC923A60DBAA24CB8DA (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_3 = NULL;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_4 = NULL;
	bool V_5 = false;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_6 = NULL;
	{
		// if (L == null) MakeLU();
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___L_3;
		V_1 = (bool)((((RuntimeObject*)(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (L == null) MakeLU();
		Matrix_MakeLU_m5B9ED29DE79A1708172C232FE1B5793CC66567FB(__this, NULL);
	}

IL_0015:
	{
		// Matrix inv = new Matrix(rows, cols);
		int32_t L_2 = __this->___rows_0;
		int32_t L_3 = __this->___cols_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_4 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_4, L_2, L_3, NULL);
		V_0 = L_4;
		// for (int i = 0; i < rows; i++)
		V_2 = 0;
		goto IL_0063;
	}

IL_002b:
	{
		// Matrix Ei = Matrix.ZeroMatrix(rows, 1);
		int32_t L_5 = __this->___rows_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_6;
		L_6 = Matrix_ZeroMatrix_m6BBCA3371B60EB5354B49113A8A38110F65EF545(L_5, 1, NULL);
		V_3 = L_6;
		// Ei[i, 0] = 1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_7 = V_3;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_7, L_8, 0, (1.0), NULL);
		// Matrix col = SolveWith(Ei);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_9 = V_3;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_10;
		L_10 = Matrix_SolveWith_m8243F1B915336EF12063532064CA7F9EE437E4C6(__this, L_9, NULL);
		V_4 = L_10;
		// inv.SetCol(col, i);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_11 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_12 = V_4;
		int32_t L_13 = V_2;
		NullCheck(L_11);
		Matrix_SetCol_m572AA23649D9EB9862AA97F0385F5C95B3A9380A(L_11, L_12, L_13, NULL);
		// for (int i = 0; i < rows; i++)
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0063:
	{
		// for (int i = 0; i < rows; i++)
		int32_t L_15 = V_2;
		int32_t L_16 = __this->___rows_0;
		V_5 = (bool)((((int32_t)L_15) < ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_5;
		if (L_17)
		{
			goto IL_002b;
		}
	}
	{
		// return inv;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_18 = V_0;
		V_6 = L_18;
		goto IL_0077;
	}

IL_0077:
	{
		// }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_19 = V_6;
		return L_19;
	}
}
// System.Double Kalman.Matrix::Det()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Matrix_Det_m9792CE1A8AFC82CDC4414980A20A5D6122366E09 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	double V_4 = 0.0;
	{
		// if (L == null) MakeLU();
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___L_3;
		V_1 = (bool)((((RuntimeObject*)(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (L == null) MakeLU();
		Matrix_MakeLU_m5B9ED29DE79A1708172C232FE1B5793CC66567FB(__this, NULL);
	}

IL_0015:
	{
		// double det = detOfP;
		double L_2 = __this->___detOfP_6;
		V_0 = L_2;
		// for (int i = 0; i < rows; i++) det *= U[i, i];
		V_2 = 0;
		goto IL_0034;
	}

IL_0020:
	{
		// for (int i = 0; i < rows; i++) det *= U[i, i];
		double L_3 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_4 = __this->___U_4;
		int32_t L_5 = V_2;
		int32_t L_6 = V_2;
		NullCheck(L_4);
		double L_7;
		L_7 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_4, L_5, L_6, NULL);
		V_0 = ((double)il2cpp_codegen_multiply(L_3, L_7));
		// for (int i = 0; i < rows; i++) det *= U[i, i];
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0034:
	{
		// for (int i = 0; i < rows; i++) det *= U[i, i];
		int32_t L_9 = V_2;
		int32_t L_10 = __this->___rows_0;
		V_3 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_3;
		if (L_11)
		{
			goto IL_0020;
		}
	}
	{
		// return det;
		double L_12 = V_0;
		V_4 = L_12;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		double L_13 = V_4;
		return L_13;
	}
}
// Kalman.Matrix Kalman.Matrix::GetP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_GetP_m3330FCACF45827A74891D4DB9EEA4596E5924239 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, const RuntimeMethod* method) 
{
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_4 = NULL;
	{
		// if (L == null) MakeLU();
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___L_3;
		V_1 = (bool)((((RuntimeObject*)(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (L == null) MakeLU();
		Matrix_MakeLU_m5B9ED29DE79A1708172C232FE1B5793CC66567FB(__this, NULL);
	}

IL_0015:
	{
		// Matrix matrix = ZeroMatrix(rows, cols);
		int32_t L_2 = __this->___rows_0;
		int32_t L_3 = __this->___cols_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_4;
		L_4 = Matrix_ZeroMatrix_m6BBCA3371B60EB5354B49113A8A38110F65EF545(L_2, L_3, NULL);
		V_0 = L_4;
		// for (int i = 0; i < rows; i++) matrix[pi[i], i] = 1;
		V_2 = 0;
		goto IL_0048;
	}

IL_002b:
	{
		// for (int i = 0; i < rows; i++) matrix[pi[i], i] = 1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_5 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->___pi_5;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = V_2;
		NullCheck(L_5);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_5, L_9, L_10, (1.0), NULL);
		// for (int i = 0; i < rows; i++) matrix[pi[i], i] = 1;
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0048:
	{
		// for (int i = 0; i < rows; i++) matrix[pi[i], i] = 1;
		int32_t L_12 = V_2;
		int32_t L_13 = __this->___rows_0;
		V_3 = (bool)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_3;
		if (L_14)
		{
			goto IL_002b;
		}
	}
	{
		// return matrix;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_15 = V_0;
		V_4 = L_15;
		goto IL_005a;
	}

IL_005a:
	{
		// }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_16 = V_4;
		return L_16;
	}
}
// Kalman.Matrix Kalman.Matrix::Duplicate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Duplicate_m305F18F019ED96527662E14DFCFFA0427423F331 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_5 = NULL;
	{
		// Matrix matrix = new Matrix(rows, cols);
		int32_t L_0 = __this->___rows_0;
		int32_t L_1 = __this->___cols_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		// for (int i = 0; i < rows; i++)
		V_1 = 0;
		goto IL_0046;
	}

IL_0017:
	{
		// for (int j = 0; j < cols; j++)
		V_2 = 0;
		goto IL_0035;
	}

IL_001b:
	{
		// matrix[i, j] = mat[i, j];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = V_2;
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_6 = __this->___mat_2;
		int32_t L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_6);
		double L_9;
		L_9 = (L_6)->GetAt(L_7, L_8);
		NullCheck(L_3);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_3, L_4, L_5, L_9, NULL);
		// for (int j = 0; j < cols; j++)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0035:
	{
		// for (int j = 0; j < cols; j++)
		int32_t L_11 = V_2;
		int32_t L_12 = __this->___cols_1;
		V_3 = (bool)((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_001b;
		}
	}
	{
		// for (int i = 0; i < rows; i++)
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0046:
	{
		// for (int i = 0; i < rows; i++)
		int32_t L_15 = V_1;
		int32_t L_16 = __this->___rows_0;
		V_4 = (bool)((((int32_t)L_15) < ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_4;
		if (L_17)
		{
			goto IL_0017;
		}
	}
	{
		// return matrix;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_18 = V_0;
		V_5 = L_18;
		goto IL_005a;
	}

IL_005a:
	{
		// }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_19 = V_5;
		return L_19;
	}
}
// Kalman.Matrix Kalman.Matrix::SubsForth(Kalman.Matrix,Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_SubsForth_mF459B56052DE7A0DD9CA9218B2BD07BB917DAA75 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___A0, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_9 = NULL;
	{
		// if (A.L == null) A.MakeLU();
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___A0;
		NullCheck(L_0);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_1 = L_0->___L_3;
		V_2 = (bool)((((RuntimeObject*)(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// if (A.L == null) A.MakeLU();
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = ___A0;
		NullCheck(L_3);
		Matrix_MakeLU_m5B9ED29DE79A1708172C232FE1B5793CC66567FB(L_3, NULL);
	}

IL_0015:
	{
		// int n = A.rows;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_4 = ___A0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___rows_0;
		V_0 = L_5;
		// Matrix x = new Matrix(n, 1);
		int32_t L_6 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_7 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_7, L_6, 1, NULL);
		V_1 = L_7;
		// for (int i = 0; i < n; i++)
		V_3 = 0;
		goto IL_009e;
	}

IL_0028:
	{
		// x[i, 0] = b[i, 0];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_8 = V_1;
		int32_t L_9 = V_3;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_10 = ___b1;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		double L_12;
		L_12 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_10, L_11, 0, NULL);
		NullCheck(L_8);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_8, L_9, 0, L_12, NULL);
		// for (int j = 0; j < i; j++) x[i, 0] -= A[i, j] * x[j, 0];
		V_4 = 0;
		goto IL_0074;
	}

IL_003f:
	{
		// for (int j = 0; j < i; j++) x[i, 0] -= A[i, j] * x[j, 0];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_13 = V_1;
		V_5 = L_13;
		int32_t L_14 = V_3;
		V_6 = L_14;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_15 = V_5;
		int32_t L_16 = V_6;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_17 = V_5;
		int32_t L_18 = V_6;
		NullCheck(L_17);
		double L_19;
		L_19 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_17, L_18, 0, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_20 = ___A0;
		int32_t L_21 = V_3;
		int32_t L_22 = V_4;
		NullCheck(L_20);
		double L_23;
		L_23 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_20, L_21, L_22, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_24 = V_1;
		int32_t L_25 = V_4;
		NullCheck(L_24);
		double L_26;
		L_26 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_24, L_25, 0, NULL);
		NullCheck(L_15);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_15, L_16, 0, ((double)il2cpp_codegen_subtract(L_19, ((double)il2cpp_codegen_multiply(L_23, L_26)))), NULL);
		// for (int j = 0; j < i; j++) x[i, 0] -= A[i, j] * x[j, 0];
		int32_t L_27 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0074:
	{
		// for (int j = 0; j < i; j++) x[i, 0] -= A[i, j] * x[j, 0];
		int32_t L_28 = V_4;
		int32_t L_29 = V_3;
		V_7 = (bool)((((int32_t)L_28) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_7;
		if (L_30)
		{
			goto IL_003f;
		}
	}
	{
		// x[i, 0] = x[i, 0] / A[i, i];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_31 = V_1;
		int32_t L_32 = V_3;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_33 = V_1;
		int32_t L_34 = V_3;
		NullCheck(L_33);
		double L_35;
		L_35 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_33, L_34, 0, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_36 = ___A0;
		int32_t L_37 = V_3;
		int32_t L_38 = V_3;
		NullCheck(L_36);
		double L_39;
		L_39 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_36, L_37, L_38, NULL);
		NullCheck(L_31);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_31, L_32, 0, ((double)(L_35/L_39)), NULL);
		// for (int i = 0; i < n; i++)
		int32_t L_40 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_009e:
	{
		// for (int i = 0; i < n; i++)
		int32_t L_41 = V_3;
		int32_t L_42 = V_0;
		V_8 = (bool)((((int32_t)L_41) < ((int32_t)L_42))? 1 : 0);
		bool L_43 = V_8;
		if (L_43)
		{
			goto IL_0028;
		}
	}
	{
		// return x;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_44 = V_1;
		V_9 = L_44;
		goto IL_00ad;
	}

IL_00ad:
	{
		// }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_45 = V_9;
		return L_45;
	}
}
// Kalman.Matrix Kalman.Matrix::SubsBack(Kalman.Matrix,Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_SubsBack_m5ECCC1792F8DD6B01F7C77F0D3E7B6E279527EF6 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___A0, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_9 = NULL;
	{
		// if (A.L == null) A.MakeLU();
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___A0;
		NullCheck(L_0);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_1 = L_0->___L_3;
		V_2 = (bool)((((RuntimeObject*)(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)L_1) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// if (A.L == null) A.MakeLU();
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = ___A0;
		NullCheck(L_3);
		Matrix_MakeLU_m5B9ED29DE79A1708172C232FE1B5793CC66567FB(L_3, NULL);
	}

IL_0015:
	{
		// int n = A.rows;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_4 = ___A0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___rows_0;
		V_0 = L_5;
		// Matrix x = new Matrix(n, 1);
		int32_t L_6 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_7 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_7, L_6, 1, NULL);
		V_1 = L_7;
		// for (int i = n - 1; i > -1; i--)
		int32_t L_8 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_00a2;
	}

IL_002a:
	{
		// x[i, 0] = b[i, 0];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_9 = V_1;
		int32_t L_10 = V_3;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_11 = ___b1;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		double L_13;
		L_13 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_11, L_12, 0, NULL);
		NullCheck(L_9);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_9, L_10, 0, L_13, NULL);
		// for (int j = n - 1; j > i; j--) x[i, 0] -= A[i, j] * x[j, 0];
		int32_t L_14 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		goto IL_0078;
	}

IL_0043:
	{
		// for (int j = n - 1; j > i; j--) x[i, 0] -= A[i, j] * x[j, 0];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_15 = V_1;
		V_5 = L_15;
		int32_t L_16 = V_3;
		V_6 = L_16;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_17 = V_5;
		int32_t L_18 = V_6;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_19 = V_5;
		int32_t L_20 = V_6;
		NullCheck(L_19);
		double L_21;
		L_21 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_19, L_20, 0, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_22 = ___A0;
		int32_t L_23 = V_3;
		int32_t L_24 = V_4;
		NullCheck(L_22);
		double L_25;
		L_25 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_22, L_23, L_24, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_26 = V_1;
		int32_t L_27 = V_4;
		NullCheck(L_26);
		double L_28;
		L_28 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_26, L_27, 0, NULL);
		NullCheck(L_17);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_17, L_18, 0, ((double)il2cpp_codegen_subtract(L_21, ((double)il2cpp_codegen_multiply(L_25, L_28)))), NULL);
		// for (int j = n - 1; j > i; j--) x[i, 0] -= A[i, j] * x[j, 0];
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_29, 1));
	}

IL_0078:
	{
		// for (int j = n - 1; j > i; j--) x[i, 0] -= A[i, j] * x[j, 0];
		int32_t L_30 = V_4;
		int32_t L_31 = V_3;
		V_7 = (bool)((((int32_t)L_30) > ((int32_t)L_31))? 1 : 0);
		bool L_32 = V_7;
		if (L_32)
		{
			goto IL_0043;
		}
	}
	{
		// x[i, 0] = x[i, 0] / A[i, i];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_33 = V_1;
		int32_t L_34 = V_3;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_35 = V_1;
		int32_t L_36 = V_3;
		NullCheck(L_35);
		double L_37;
		L_37 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_35, L_36, 0, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_38 = ___A0;
		int32_t L_39 = V_3;
		int32_t L_40 = V_3;
		NullCheck(L_38);
		double L_41;
		L_41 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_38, L_39, L_40, NULL);
		NullCheck(L_33);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_33, L_34, 0, ((double)(L_37/L_41)), NULL);
		// for (int i = n - 1; i > -1; i--)
		int32_t L_42 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
	}

IL_00a2:
	{
		// for (int i = n - 1; i > -1; i--)
		int32_t L_43 = V_3;
		V_8 = (bool)((((int32_t)L_43) > ((int32_t)(-1)))? 1 : 0);
		bool L_44 = V_8;
		if (L_44)
		{
			goto IL_002a;
		}
	}
	{
		// return x;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_45 = V_1;
		V_9 = L_45;
		goto IL_00b4;
	}

IL_00b4:
	{
		// }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_46 = V_9;
		return L_46;
	}
}
// Kalman.Matrix Kalman.Matrix::ZeroMatrix(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_ZeroMatrix_m6BBCA3371B60EB5354B49113A8A38110F65EF545 (int32_t ___iRows0, int32_t ___iCols1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_5 = NULL;
	{
		// Matrix matrix = new Matrix(iRows, iCols);
		int32_t L_0 = ___iRows0;
		int32_t L_1 = ___iCols1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		// for (int i = 0; i < iRows; i++)
		V_1 = 0;
		goto IL_0033;
	}

IL_000d:
	{
		// for (int j = 0; j < iCols; j++)
		V_2 = 0;
		goto IL_0027;
	}

IL_0011:
	{
		// matrix[i, j] = 0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_3);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_3, L_4, L_5, (0.0), NULL);
		// for (int j = 0; j < iCols; j++)
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0027:
	{
		// for (int j = 0; j < iCols; j++)
		int32_t L_7 = V_2;
		int32_t L_8 = ___iCols1;
		V_3 = (bool)((((int32_t)L_7) < ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_3;
		if (L_9)
		{
			goto IL_0011;
		}
	}
	{
		// for (int i = 0; i < iRows; i++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		// for (int i = 0; i < iRows; i++)
		int32_t L_11 = V_1;
		int32_t L_12 = ___iRows0;
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_000d;
		}
	}
	{
		// return matrix;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_14 = V_0;
		V_5 = L_14;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_15 = V_5;
		return L_15;
	}
}
// Kalman.Matrix Kalman.Matrix::IdentityMatrix(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_IdentityMatrix_m761F0976C77A545C21049F9FD13D4EB627C24F3A (int32_t ___iRows0, int32_t ___iCols1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_3 = NULL;
	{
		// Matrix matrix = ZeroMatrix (iRows, iCols);
		int32_t L_0 = ___iRows0;
		int32_t L_1 = ___iCols1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2;
		L_2 = Matrix_ZeroMatrix_m6BBCA3371B60EB5354B49113A8A38110F65EF545(L_0, L_1, NULL);
		V_0 = L_2;
		// for (int i = 0; i < Math.Min(iRows, iCols); i++)
		V_1 = 0;
		goto IL_0023;
	}

IL_000d:
	{
		// matrix [i, i] = 1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = V_1;
		NullCheck(L_3);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_3, L_4, L_5, (1.0), NULL);
		// for (int i = 0; i < Math.Min(iRows, iCols); i++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0023:
	{
		// for (int i = 0; i < Math.Min(iRows, iCols); i++)
		int32_t L_7 = V_1;
		int32_t L_8 = ___iRows0;
		int32_t L_9 = ___iCols1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_8, L_9, NULL);
		V_2 = (bool)((((int32_t)L_7) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_2;
		if (L_11)
		{
			goto IL_000d;
		}
	}
	{
		// return matrix;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_12 = V_0;
		V_3 = L_12;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_13 = V_3;
		return L_13;
	}
}
// Kalman.Matrix Kalman.Matrix::IdentityMatrix(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_IdentityMatrix_mDEB85646CBD384AEFF238196F2C2D6E5CE87DDEF (int32_t ___size0, const RuntimeMethod* method) 
{
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	{
		// return IdentityMatrix (size, size);
		int32_t L_0 = ___size0;
		int32_t L_1 = ___size0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2;
		L_2 = Matrix_IdentityMatrix_m761F0976C77A545C21049F9FD13D4EB627C24F3A(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = V_0;
		return L_3;
	}
}
// Kalman.Matrix Kalman.Matrix::RandomMatrix(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_RandomMatrix_m7BE7BDD67B31BA3AA4F1F0250F0D4D702EBD27C7 (int32_t ___iRows0, int32_t ___iCols1, int32_t ___dispersion2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* V_0 = NULL;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_6 = NULL;
	{
		// Random random = new Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		V_0 = L_0;
		// Matrix matrix = new Matrix(iRows, iCols);
		int32_t L_1 = ___iRows0;
		int32_t L_2 = ___iCols1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_3, L_1, L_2, NULL);
		V_1 = L_3;
		// for (int i = 0; i < iRows; i++)
		V_2 = 0;
		goto IL_003c;
	}

IL_0013:
	{
		// for (int j = 0; j < iCols; j++)
		V_3 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		// matrix[i, j] = random.Next(-dispersion, dispersion);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_4 = V_1;
		int32_t L_5 = V_2;
		int32_t L_6 = V_3;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_7 = V_0;
		int32_t L_8 = ___dispersion2;
		int32_t L_9 = ___dispersion2;
		NullCheck(L_7);
		int32_t L_10;
		L_10 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_7, ((-L_8)), L_9);
		NullCheck(L_4);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_4, L_5, L_6, ((double)L_10), NULL);
		// for (int j = 0; j < iCols; j++)
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002e:
	{
		// for (int j = 0; j < iCols; j++)
		int32_t L_12 = V_3;
		int32_t L_13 = ___iCols1;
		V_4 = (bool)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_4;
		if (L_14)
		{
			goto IL_0017;
		}
	}
	{
		// for (int i = 0; i < iRows; i++)
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003c:
	{
		// for (int i = 0; i < iRows; i++)
		int32_t L_16 = V_2;
		int32_t L_17 = ___iRows0;
		V_5 = (bool)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_5;
		if (L_18)
		{
			goto IL_0013;
		}
	}
	{
		// return matrix;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_19 = V_1;
		V_6 = L_19;
		goto IL_004b;
	}

IL_004b:
	{
		// }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_20 = V_6;
		return L_20;
	}
}
// Kalman.Matrix Kalman.Matrix::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Parse_m5E3C4C37FBBB4604CBA03A356C9B726AF53336C8 (String_t* ___ps0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* V_8 = NULL;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// string s = NormalizeMatrixString(ps);
		String_t* L_0 = ___ps0;
		String_t* L_1;
		L_1 = Matrix_NormalizeMatrixString_m322779B699DF0D70EAFD235FA33F4FC3086149FD(L_0, NULL);
		V_0 = L_1;
		// string[] rows = Regex.Split(s, "\r\n");
		String_t* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = Regex_Split_m01D4D38E8257BB18BFBC08D2D8DCB7F32FB0D018(L_2, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, NULL);
		V_1 = L_3;
		// string[] nums = rows[0].Split(' ');
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = 0;
		String_t* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7;
		L_7 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_6, ((int32_t)32), 0, NULL);
		V_2 = L_7;
		// Matrix matrix = new Matrix(rows.Length, nums.Length);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_1;
		NullCheck(L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_2;
		NullCheck(L_9);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_10 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_10, ((int32_t)(((RuntimeArray*)L_8)->max_length)), ((int32_t)(((RuntimeArray*)L_9)->max_length)), NULL);
		V_3 = L_10;
	}
	try
	{// begin try (depth: 1)
		{
			// for (int i = 0; i < rows.Length; i++)
			V_4 = 0;
			goto IL_0073_1;
		}

IL_0032_1:
		{
			// nums = rows[i].Split(' ');
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_1;
			int32_t L_12 = V_4;
			NullCheck(L_11);
			int32_t L_13 = L_12;
			String_t* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
			NullCheck(L_14);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15;
			L_15 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_14, ((int32_t)32), 0, NULL);
			V_2 = L_15;
			// for (int j = 0; j < nums.Length; j++) matrix[i, j] = double.Parse(nums[j]);
			V_5 = 0;
			goto IL_005f_1;
		}

IL_0045_1:
		{
			// for (int j = 0; j < nums.Length; j++) matrix[i, j] = double.Parse(nums[j]);
			Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_16 = V_3;
			int32_t L_17 = V_4;
			int32_t L_18 = V_5;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_2;
			int32_t L_20 = V_5;
			NullCheck(L_19);
			int32_t L_21 = L_20;
			String_t* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
			double L_23;
			L_23 = Double_Parse_mBED785C952A63E8D714E429A4A704BCC4D92931B(L_22, NULL);
			NullCheck(L_16);
			Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_16, L_17, L_18, L_23, NULL);
			// for (int j = 0; j < nums.Length; j++) matrix[i, j] = double.Parse(nums[j]);
			int32_t L_24 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		}

IL_005f_1:
		{
			// for (int j = 0; j < nums.Length; j++) matrix[i, j] = double.Parse(nums[j]);
			int32_t L_25 = V_5;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = V_2;
			NullCheck(L_26);
			V_6 = (bool)((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))))? 1 : 0);
			bool L_27 = V_6;
			if (L_27)
			{
				goto IL_0045_1;
			}
		}
		{
			// for (int i = 0; i < rows.Length; i++)
			int32_t L_28 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		}

IL_0073_1:
		{
			// for (int i = 0; i < rows.Length; i++)
			int32_t L_29 = V_4;
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = V_1;
			NullCheck(L_30);
			V_7 = (bool)((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))))? 1 : 0);
			bool L_31 = V_7;
			if (L_31)
			{
				goto IL_0032_1;
			}
		}
		{
			goto IL_009d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0083;
		}
		throw e;
	}

CATCH_0083:
	{// begin catch(System.FormatException)
		// catch (FormatException exc) { throw new MException("Wrong input format! "+exc.ToString()); }
		V_8 = ((FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)IL2CPP_GET_ACTIVE_EXCEPTION(FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*));
		// catch (FormatException exc) { throw new MException("Wrong input format! "+exc.ToString()); }
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_32 = V_8;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_32);
		String_t* L_34;
		L_34 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9360594C2BCE966846677E990CBBE005BB668E7F)), L_33, NULL);
		MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542* L_35 = (MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542_il2cpp_TypeInfo_var)));
		NullCheck(L_35);
		MException__ctor_m0556F1CA0ADCAF46291549D0C7B600EFEFE2F7AE(L_35, L_34, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Matrix_Parse_m5E3C4C37FBBB4604CBA03A356C9B726AF53336C8_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_009d:
	{
		// return matrix;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_36 = V_3;
		V_9 = L_36;
		goto IL_00a2;
	}

IL_00a2:
	{
		// }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_37 = V_9;
		return L_37;
	}
}
// System.String Kalman.Matrix::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Matrix_ToString_m08C38EAC81460ADD92B07C6907853D2A97E0BF07 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA5D25D8D9E7431F466B32C49F48E872BEE36FD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	String_t* V_5 = NULL;
	{
		// string s = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int i = 0; i < rows; i++)
		V_1 = 0;
		goto IL_005a;
	}

IL_000b:
	{
		// for (int j = 0; j < cols; j++) s += String.Format("{0,5:0.00}", mat[i, j]) + " ";
		V_2 = 0;
		goto IL_003c;
	}

IL_0010:
	{
		// for (int j = 0; j < cols; j++) s += String.Format("{0,5:0.00}", mat[i, j]) + " ";
		String_t* L_0 = V_0;
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_1 = __this->___mat_2;
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_1);
		double L_4;
		L_4 = (L_1)->GetAt(L_2, L_3);
		double L_5 = L_4;
		RuntimeObject* L_6 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralCA5D25D8D9E7431F466B32C49F48E872BEE36FD9, L_6, NULL);
		String_t* L_8;
		L_8 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_0, L_7, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_0 = L_8;
		// for (int j = 0; j < cols; j++) s += String.Format("{0,5:0.00}", mat[i, j]) + " ";
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_003c:
	{
		// for (int j = 0; j < cols; j++) s += String.Format("{0,5:0.00}", mat[i, j]) + " ";
		int32_t L_10 = V_2;
		int32_t L_11 = __this->___cols_1;
		V_3 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_0010;
		}
	}
	{
		// s += "\r\n";
		String_t* L_13 = V_0;
		String_t* L_14;
		L_14 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_13, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, NULL);
		V_0 = L_14;
		// for (int i = 0; i < rows; i++)
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_005a:
	{
		// for (int i = 0; i < rows; i++)
		int32_t L_16 = V_1;
		int32_t L_17 = __this->___rows_0;
		V_4 = (bool)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_4;
		if (L_18)
		{
			goto IL_000b;
		}
	}
	{
		// return s;
		String_t* L_19 = V_0;
		V_5 = L_19;
		goto IL_006e;
	}

IL_006e:
	{
		// }
		String_t* L_20 = V_5;
		return L_20;
	}
}
// Kalman.Matrix Kalman.Matrix::Transpose(Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Transpose_mACA9F292B42E0B8ABED1D6E7D28215CAC2F1C208 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___m0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_5 = NULL;
	{
		// Matrix t = new Matrix (m.cols, m.rows);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___m0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___cols_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2 = ___m0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___rows_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_4 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_4, L_1, L_3, NULL);
		V_0 = L_4;
		// for (int i = 0; i < m.rows; i++)
		V_1 = 0;
		goto IL_0041;
	}

IL_0017:
	{
		// for (int j = 0; j < m.cols; j++)
		V_2 = 0;
		goto IL_0030;
	}

IL_001b:
	{
		// t [j, i] = m [i, j];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_5 = V_0;
		int32_t L_6 = V_2;
		int32_t L_7 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_8 = ___m0;
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_8);
		double L_11;
		L_11 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_8, L_9, L_10, NULL);
		NullCheck(L_5);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_5, L_6, L_7, L_11, NULL);
		// for (int j = 0; j < m.cols; j++)
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0030:
	{
		// for (int j = 0; j < m.cols; j++)
		int32_t L_13 = V_2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_14 = ___m0;
		NullCheck(L_14);
		int32_t L_15 = L_14->___cols_1;
		V_3 = (bool)((((int32_t)L_13) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_3;
		if (L_16)
		{
			goto IL_001b;
		}
	}
	{
		// for (int i = 0; i < m.rows; i++)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0041:
	{
		// for (int i = 0; i < m.rows; i++)
		int32_t L_18 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_19 = ___m0;
		NullCheck(L_19);
		int32_t L_20 = L_19->___rows_0;
		V_4 = (bool)((((int32_t)L_18) < ((int32_t)L_20))? 1 : 0);
		bool L_21 = V_4;
		if (L_21)
		{
			goto IL_0017;
		}
	}
	{
		// return t;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_22 = V_0;
		V_5 = L_22;
		goto IL_0055;
	}

IL_0055:
	{
		// }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_23 = V_5;
		return L_23;
	}
}
// Kalman.Matrix Kalman.Matrix::Transpose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Transpose_mC6321D9A6F0E43CDC932800A379EFD5CDEFA69B9 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* __this, const RuntimeMethod* method) 
{
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	{
		// return Matrix.Transpose (this);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0;
		L_0 = Matrix_Transpose_mACA9F292B42E0B8ABED1D6E7D28215CAC2F1C208(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_1 = V_0;
		return L_1;
	}
}
// Kalman.Matrix Kalman.Matrix::Power(Kalman.Matrix,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Power_mFAE2F6844DBA1B0AFA096865BE497AED908E5D17 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___m0, int32_t ___pow1, const RuntimeMethod* method) 
{
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_1 = NULL;
	bool V_2 = false;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	{
		// if (pow == 0) return IdentityMatrix(m.rows, m.cols);
		int32_t L_0 = ___pow1;
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// if (pow == 0) return IdentityMatrix(m.rows, m.cols);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2 = ___m0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___rows_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_4 = ___m0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___cols_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_6;
		L_6 = Matrix_IdentityMatrix_m761F0976C77A545C21049F9FD13D4EB627C24F3A(L_3, L_5, NULL);
		V_3 = L_6;
		goto IL_00ac;
	}

IL_0020:
	{
		// if (pow == 1) return m.Duplicate();
		int32_t L_7 = ___pow1;
		V_4 = (bool)((((int32_t)L_7) == ((int32_t)1))? 1 : 0);
		bool L_8 = V_4;
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		// if (pow == 1) return m.Duplicate();
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_9 = ___m0;
		NullCheck(L_9);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_10;
		L_10 = Matrix_Duplicate_m305F18F019ED96527662E14DFCFFA0427423F331(L_9, NULL);
		V_3 = L_10;
		goto IL_00ac;
	}

IL_0033:
	{
		// if (pow == -1) return m.Invert();
		int32_t L_11 = ___pow1;
		V_5 = (bool)((((int32_t)L_11) == ((int32_t)(-1)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0046;
		}
	}
	{
		// if (pow == -1) return m.Invert();
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_13 = ___m0;
		NullCheck(L_13);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_14;
		L_14 = Matrix_Invert_m025110DC6C085B38C6245FC923A60DBAA24CB8DA(L_13, NULL);
		V_3 = L_14;
		goto IL_00ac;
	}

IL_0046:
	{
		// if (pow < 0) { x = m.Invert(); pow *= -1; }
		int32_t L_15 = ___pow1;
		V_6 = (bool)((((int32_t)L_15) < ((int32_t)0))? 1 : 0);
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_0060;
		}
	}
	{
		// if (pow < 0) { x = m.Invert(); pow *= -1; }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_17 = ___m0;
		NullCheck(L_17);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_18;
		L_18 = Matrix_Invert_m025110DC6C085B38C6245FC923A60DBAA24CB8DA(L_17, NULL);
		V_0 = L_18;
		// if (pow < 0) { x = m.Invert(); pow *= -1; }
		int32_t L_19 = ___pow1;
		___pow1 = ((int32_t)il2cpp_codegen_multiply(L_19, (-1)));
		goto IL_0067;
	}

IL_0060:
	{
		// else x = m.Duplicate();
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_20 = ___m0;
		NullCheck(L_20);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_21;
		L_21 = Matrix_Duplicate_m305F18F019ED96527662E14DFCFFA0427423F331(L_20, NULL);
		V_0 = L_21;
	}

IL_0067:
	{
		// Matrix ret = IdentityMatrix(m.rows, m.cols);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_22 = ___m0;
		NullCheck(L_22);
		int32_t L_23 = L_22->___rows_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_24 = ___m0;
		NullCheck(L_24);
		int32_t L_25 = L_24->___cols_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_26;
		L_26 = Matrix_IdentityMatrix_m761F0976C77A545C21049F9FD13D4EB627C24F3A(L_23, L_25, NULL);
		V_1 = L_26;
		goto IL_009e;
	}

IL_007b:
	{
		// if ((pow & 1) == 1) ret *= x;
		int32_t L_27 = ___pow1;
		V_7 = (bool)((((int32_t)((int32_t)(L_27&1))) == ((int32_t)1))? 1 : 0);
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_0090;
		}
	}
	{
		// if ((pow & 1) == 1) ret *= x;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_29 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_30 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_31;
		L_31 = Matrix_op_Multiply_m288732D926A25D27D12CB8DC1DDAC5795130B120(L_29, L_30, NULL);
		V_1 = L_31;
	}

IL_0090:
	{
		// x *= x;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_32 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_33 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_34;
		L_34 = Matrix_op_Multiply_m288732D926A25D27D12CB8DC1DDAC5795130B120(L_32, L_33, NULL);
		V_0 = L_34;
		// pow >>= 1;
		int32_t L_35 = ___pow1;
		___pow1 = ((int32_t)(L_35>>1));
	}

IL_009e:
	{
		// while (pow != 0)
		int32_t L_36 = ___pow1;
		V_8 = (bool)((!(((uint32_t)L_36) <= ((uint32_t)0)))? 1 : 0);
		bool L_37 = V_8;
		if (L_37)
		{
			goto IL_007b;
		}
	}
	{
		// return ret;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_38 = V_1;
		V_3 = L_38;
		goto IL_00ac;
	}

IL_00ac:
	{
		// }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_39 = V_3;
		return L_39;
	}
}
// System.Void Kalman.Matrix::SafeAplusBintoC(Kalman.Matrix,System.Int32,System.Int32,Kalman.Matrix,System.Int32,System.Int32,Kalman.Matrix,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_SafeAplusBintoC_m1D7A9992A01BE5F5A6BEFCB70151895F50432A4A (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___A0, int32_t ___xa1, int32_t ___ya2, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___B3, int32_t ___xb4, int32_t ___yb5, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___C6, int32_t ___size7, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	{
		// for (int i = 0; i < size; i++)          // rows
		V_0 = 0;
		goto IL_00d0;
	}

IL_0008:
	{
		// for (int j = 0; j < size; j++)     // cols
		V_1 = 0;
		goto IL_00be;
	}

IL_000f:
	{
		// C[i, j] = 0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___C6;
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_0);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_0, L_1, L_2, (0.0), NULL);
		// if (xa + j < A.cols && ya + i < A.rows) C[i, j] += A[ya + i, xa + j];
		int32_t L_3 = ___xa1;
		int32_t L_4 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_5 = ___A0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___cols_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) >= ((int32_t)L_6)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_7 = ___ya2;
		int32_t L_8 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_9 = ___A0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___rows_0;
		G_B5_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_7, L_8))) < ((int32_t)L_10))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = 0;
	}

IL_003c:
	{
		V_2 = (bool)G_B5_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		// if (xa + j < A.cols && ya + i < A.rows) C[i, j] += A[ya + i, xa + j];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_12 = ___C6;
		V_3 = L_12;
		int32_t L_13 = V_0;
		V_4 = L_13;
		int32_t L_14 = V_1;
		V_5 = L_14;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_18 = V_3;
		int32_t L_19 = V_4;
		int32_t L_20 = V_5;
		NullCheck(L_18);
		double L_21;
		L_21 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_18, L_19, L_20, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_22 = ___A0;
		int32_t L_23 = ___ya2;
		int32_t L_24 = V_0;
		int32_t L_25 = ___xa1;
		int32_t L_26 = V_1;
		NullCheck(L_22);
		double L_27;
		L_27 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_22, ((int32_t)il2cpp_codegen_add(L_23, L_24)), ((int32_t)il2cpp_codegen_add(L_25, L_26)), NULL);
		NullCheck(L_15);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_15, L_16, L_17, ((double)il2cpp_codegen_add(L_21, L_27)), NULL);
	}

IL_006b:
	{
		// if (xb + j < B.cols && yb + i < B.rows) C[i, j] += B[yb + i, xb + j];
		int32_t L_28 = ___xb4;
		int32_t L_29 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_30 = ___B3;
		NullCheck(L_30);
		int32_t L_31 = L_30->___cols_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_28, L_29))) >= ((int32_t)L_31)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_32 = ___yb5;
		int32_t L_33 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_34 = ___B3;
		NullCheck(L_34);
		int32_t L_35 = L_34->___rows_0;
		G_B10_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_32, L_33))) < ((int32_t)L_35))? 1 : 0);
		goto IL_0086;
	}

IL_0085:
	{
		G_B10_0 = 0;
	}

IL_0086:
	{
		V_6 = (bool)G_B10_0;
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_00b9;
		}
	}
	{
		// if (xb + j < B.cols && yb + i < B.rows) C[i, j] += B[yb + i, xb + j];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_37 = ___C6;
		V_3 = L_37;
		int32_t L_38 = V_0;
		V_5 = L_38;
		int32_t L_39 = V_1;
		V_4 = L_39;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_40 = V_3;
		int32_t L_41 = V_5;
		int32_t L_42 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_43 = V_3;
		int32_t L_44 = V_5;
		int32_t L_45 = V_4;
		NullCheck(L_43);
		double L_46;
		L_46 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_43, L_44, L_45, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_47 = ___B3;
		int32_t L_48 = ___yb5;
		int32_t L_49 = V_0;
		int32_t L_50 = ___xb4;
		int32_t L_51 = V_1;
		NullCheck(L_47);
		double L_52;
		L_52 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_47, ((int32_t)il2cpp_codegen_add(L_48, L_49)), ((int32_t)il2cpp_codegen_add(L_50, L_51)), NULL);
		NullCheck(L_40);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_40, L_41, L_42, ((double)il2cpp_codegen_add(L_46, L_52)), NULL);
	}

IL_00b9:
	{
		// for (int j = 0; j < size; j++)     // cols
		int32_t L_53 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_00be:
	{
		// for (int j = 0; j < size; j++)     // cols
		int32_t L_54 = V_1;
		int32_t L_55 = ___size7;
		V_7 = (bool)((((int32_t)L_54) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_7;
		if (L_56)
		{
			goto IL_000f;
		}
	}
	{
		// for (int i = 0; i < size; i++)          // rows
		int32_t L_57 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_00d0:
	{
		// for (int i = 0; i < size; i++)          // rows
		int32_t L_58 = V_0;
		int32_t L_59 = ___size7;
		V_8 = (bool)((((int32_t)L_58) < ((int32_t)L_59))? 1 : 0);
		bool L_60 = V_8;
		if (L_60)
		{
			goto IL_0008;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Kalman.Matrix::SafeAminusBintoC(Kalman.Matrix,System.Int32,System.Int32,Kalman.Matrix,System.Int32,System.Int32,Kalman.Matrix,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_SafeAminusBintoC_m2025F98363DC1127F7C6D6BED73DE2935418DB9B (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___A0, int32_t ___xa1, int32_t ___ya2, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___B3, int32_t ___xb4, int32_t ___yb5, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___C6, int32_t ___size7, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	{
		// for (int i = 0; i < size; i++)          // rows
		V_0 = 0;
		goto IL_00d0;
	}

IL_0008:
	{
		// for (int j = 0; j < size; j++)     // cols
		V_1 = 0;
		goto IL_00be;
	}

IL_000f:
	{
		// C[i, j] = 0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___C6;
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_0);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_0, L_1, L_2, (0.0), NULL);
		// if (xa + j < A.cols && ya + i < A.rows) C[i, j] += A[ya + i, xa + j];
		int32_t L_3 = ___xa1;
		int32_t L_4 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_5 = ___A0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___cols_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) >= ((int32_t)L_6)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_7 = ___ya2;
		int32_t L_8 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_9 = ___A0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___rows_0;
		G_B5_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_7, L_8))) < ((int32_t)L_10))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = 0;
	}

IL_003c:
	{
		V_2 = (bool)G_B5_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		// if (xa + j < A.cols && ya + i < A.rows) C[i, j] += A[ya + i, xa + j];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_12 = ___C6;
		V_3 = L_12;
		int32_t L_13 = V_0;
		V_4 = L_13;
		int32_t L_14 = V_1;
		V_5 = L_14;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_18 = V_3;
		int32_t L_19 = V_4;
		int32_t L_20 = V_5;
		NullCheck(L_18);
		double L_21;
		L_21 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_18, L_19, L_20, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_22 = ___A0;
		int32_t L_23 = ___ya2;
		int32_t L_24 = V_0;
		int32_t L_25 = ___xa1;
		int32_t L_26 = V_1;
		NullCheck(L_22);
		double L_27;
		L_27 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_22, ((int32_t)il2cpp_codegen_add(L_23, L_24)), ((int32_t)il2cpp_codegen_add(L_25, L_26)), NULL);
		NullCheck(L_15);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_15, L_16, L_17, ((double)il2cpp_codegen_add(L_21, L_27)), NULL);
	}

IL_006b:
	{
		// if (xb + j < B.cols && yb + i < B.rows) C[i, j] -= B[yb + i, xb + j];
		int32_t L_28 = ___xb4;
		int32_t L_29 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_30 = ___B3;
		NullCheck(L_30);
		int32_t L_31 = L_30->___cols_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_28, L_29))) >= ((int32_t)L_31)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_32 = ___yb5;
		int32_t L_33 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_34 = ___B3;
		NullCheck(L_34);
		int32_t L_35 = L_34->___rows_0;
		G_B10_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_32, L_33))) < ((int32_t)L_35))? 1 : 0);
		goto IL_0086;
	}

IL_0085:
	{
		G_B10_0 = 0;
	}

IL_0086:
	{
		V_6 = (bool)G_B10_0;
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_00b9;
		}
	}
	{
		// if (xb + j < B.cols && yb + i < B.rows) C[i, j] -= B[yb + i, xb + j];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_37 = ___C6;
		V_3 = L_37;
		int32_t L_38 = V_0;
		V_5 = L_38;
		int32_t L_39 = V_1;
		V_4 = L_39;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_40 = V_3;
		int32_t L_41 = V_5;
		int32_t L_42 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_43 = V_3;
		int32_t L_44 = V_5;
		int32_t L_45 = V_4;
		NullCheck(L_43);
		double L_46;
		L_46 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_43, L_44, L_45, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_47 = ___B3;
		int32_t L_48 = ___yb5;
		int32_t L_49 = V_0;
		int32_t L_50 = ___xb4;
		int32_t L_51 = V_1;
		NullCheck(L_47);
		double L_52;
		L_52 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_47, ((int32_t)il2cpp_codegen_add(L_48, L_49)), ((int32_t)il2cpp_codegen_add(L_50, L_51)), NULL);
		NullCheck(L_40);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_40, L_41, L_42, ((double)il2cpp_codegen_subtract(L_46, L_52)), NULL);
	}

IL_00b9:
	{
		// for (int j = 0; j < size; j++)     // cols
		int32_t L_53 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_00be:
	{
		// for (int j = 0; j < size; j++)     // cols
		int32_t L_54 = V_1;
		int32_t L_55 = ___size7;
		V_7 = (bool)((((int32_t)L_54) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_7;
		if (L_56)
		{
			goto IL_000f;
		}
	}
	{
		// for (int i = 0; i < size; i++)          // rows
		int32_t L_57 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_00d0:
	{
		// for (int i = 0; i < size; i++)          // rows
		int32_t L_58 = V_0;
		int32_t L_59 = ___size7;
		V_8 = (bool)((((int32_t)L_58) < ((int32_t)L_59))? 1 : 0);
		bool L_60 = V_8;
		if (L_60)
		{
			goto IL_0008;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Kalman.Matrix::SafeACopytoC(Kalman.Matrix,System.Int32,System.Int32,Kalman.Matrix,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_SafeACopytoC_m96ACEED14CAF282366347895155D545E8844A71C (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___A0, int32_t ___xa1, int32_t ___ya2, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___C3, int32_t ___size4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B5_0 = 0;
	{
		// for (int i = 0; i < size; i++)          // rows
		V_0 = 0;
		goto IL_0077;
	}

IL_0005:
	{
		// for (int j = 0; j < size; j++)     // cols
		V_1 = 0;
		goto IL_0068;
	}

IL_0009:
	{
		// C[i, j] = 0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___C3;
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_0);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_0, L_1, L_2, (0.0), NULL);
		// if (xa + j < A.cols && ya + i < A.rows) C[i, j] += A[ya + i, xa + j];
		int32_t L_3 = ___xa1;
		int32_t L_4 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_5 = ___A0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___cols_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4))) >= ((int32_t)L_6)))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_7 = ___ya2;
		int32_t L_8 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_9 = ___A0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___rows_0;
		G_B5_0 = ((((int32_t)((int32_t)il2cpp_codegen_add(L_7, L_8))) < ((int32_t)L_10))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B5_0 = 0;
	}

IL_0035:
	{
		V_2 = (bool)G_B5_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0063;
		}
	}
	{
		// if (xa + j < A.cols && ya + i < A.rows) C[i, j] += A[ya + i, xa + j];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_12 = ___C3;
		V_3 = L_12;
		int32_t L_13 = V_0;
		V_4 = L_13;
		int32_t L_14 = V_1;
		V_5 = L_14;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_18 = V_3;
		int32_t L_19 = V_4;
		int32_t L_20 = V_5;
		NullCheck(L_18);
		double L_21;
		L_21 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_18, L_19, L_20, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_22 = ___A0;
		int32_t L_23 = ___ya2;
		int32_t L_24 = V_0;
		int32_t L_25 = ___xa1;
		int32_t L_26 = V_1;
		NullCheck(L_22);
		double L_27;
		L_27 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_22, ((int32_t)il2cpp_codegen_add(L_23, L_24)), ((int32_t)il2cpp_codegen_add(L_25, L_26)), NULL);
		NullCheck(L_15);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_15, L_16, L_17, ((double)il2cpp_codegen_add(L_21, L_27)), NULL);
	}

IL_0063:
	{
		// for (int j = 0; j < size; j++)     // cols
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0068:
	{
		// for (int j = 0; j < size; j++)     // cols
		int32_t L_29 = V_1;
		int32_t L_30 = ___size4;
		V_6 = (bool)((((int32_t)L_29) < ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_6;
		if (L_31)
		{
			goto IL_0009;
		}
	}
	{
		// for (int i = 0; i < size; i++)          // rows
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0077:
	{
		// for (int i = 0; i < size; i++)          // rows
		int32_t L_33 = V_0;
		int32_t L_34 = ___size4;
		V_7 = (bool)((((int32_t)L_33) < ((int32_t)L_34))? 1 : 0);
		bool L_35 = V_7;
		if (L_35)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Kalman.Matrix::AplusBintoC(Kalman.Matrix,System.Int32,System.Int32,Kalman.Matrix,System.Int32,System.Int32,Kalman.Matrix,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_AplusBintoC_m81098A42B9884070EBA6CA38341428AE87FD1801 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___A0, int32_t ___xa1, int32_t ___ya2, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___B3, int32_t ___xb4, int32_t ___yb5, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___C6, int32_t ___size7, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// for (int i = 0; i < size; i++)          // rows
		V_0 = 0;
		goto IL_003f;
	}

IL_0005:
	{
		// for (int j = 0; j < size; j++) C[i, j] = A[ya + i, xa + j] + B[yb + i, xb + j];
		V_1 = 0;
		goto IL_0032;
	}

IL_0009:
	{
		// for (int j = 0; j < size; j++) C[i, j] = A[ya + i, xa + j] + B[yb + i, xb + j];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___C6;
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = ___A0;
		int32_t L_4 = ___ya2;
		int32_t L_5 = V_0;
		int32_t L_6 = ___xa1;
		int32_t L_7 = V_1;
		NullCheck(L_3);
		double L_8;
		L_8 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_3, ((int32_t)il2cpp_codegen_add(L_4, L_5)), ((int32_t)il2cpp_codegen_add(L_6, L_7)), NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_9 = ___B3;
		int32_t L_10 = ___yb5;
		int32_t L_11 = V_0;
		int32_t L_12 = ___xb4;
		int32_t L_13 = V_1;
		NullCheck(L_9);
		double L_14;
		L_14 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_9, ((int32_t)il2cpp_codegen_add(L_10, L_11)), ((int32_t)il2cpp_codegen_add(L_12, L_13)), NULL);
		NullCheck(L_0);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_0, L_1, L_2, ((double)il2cpp_codegen_add(L_8, L_14)), NULL);
		// for (int j = 0; j < size; j++) C[i, j] = A[ya + i, xa + j] + B[yb + i, xb + j];
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0032:
	{
		// for (int j = 0; j < size; j++) C[i, j] = A[ya + i, xa + j] + B[yb + i, xb + j];
		int32_t L_16 = V_1;
		int32_t L_17 = ___size7;
		V_2 = (bool)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_2;
		if (L_18)
		{
			goto IL_0009;
		}
	}
	{
		// for (int i = 0; i < size; i++)          // rows
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_003f:
	{
		// for (int i = 0; i < size; i++)          // rows
		int32_t L_20 = V_0;
		int32_t L_21 = ___size7;
		V_3 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Kalman.Matrix::AminusBintoC(Kalman.Matrix,System.Int32,System.Int32,Kalman.Matrix,System.Int32,System.Int32,Kalman.Matrix,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_AminusBintoC_m453DD7074D66DDD68DACD9AB55052751A9B2ADFB (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___A0, int32_t ___xa1, int32_t ___ya2, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___B3, int32_t ___xb4, int32_t ___yb5, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___C6, int32_t ___size7, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// for (int i = 0; i < size; i++)          // rows
		V_0 = 0;
		goto IL_003f;
	}

IL_0005:
	{
		// for (int j = 0; j < size; j++) C[i, j] = A[ya + i, xa + j] - B[yb + i, xb + j];
		V_1 = 0;
		goto IL_0032;
	}

IL_0009:
	{
		// for (int j = 0; j < size; j++) C[i, j] = A[ya + i, xa + j] - B[yb + i, xb + j];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___C6;
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = ___A0;
		int32_t L_4 = ___ya2;
		int32_t L_5 = V_0;
		int32_t L_6 = ___xa1;
		int32_t L_7 = V_1;
		NullCheck(L_3);
		double L_8;
		L_8 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_3, ((int32_t)il2cpp_codegen_add(L_4, L_5)), ((int32_t)il2cpp_codegen_add(L_6, L_7)), NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_9 = ___B3;
		int32_t L_10 = ___yb5;
		int32_t L_11 = V_0;
		int32_t L_12 = ___xb4;
		int32_t L_13 = V_1;
		NullCheck(L_9);
		double L_14;
		L_14 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_9, ((int32_t)il2cpp_codegen_add(L_10, L_11)), ((int32_t)il2cpp_codegen_add(L_12, L_13)), NULL);
		NullCheck(L_0);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_0, L_1, L_2, ((double)il2cpp_codegen_subtract(L_8, L_14)), NULL);
		// for (int j = 0; j < size; j++) C[i, j] = A[ya + i, xa + j] - B[yb + i, xb + j];
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0032:
	{
		// for (int j = 0; j < size; j++) C[i, j] = A[ya + i, xa + j] - B[yb + i, xb + j];
		int32_t L_16 = V_1;
		int32_t L_17 = ___size7;
		V_2 = (bool)((((int32_t)L_16) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_2;
		if (L_18)
		{
			goto IL_0009;
		}
	}
	{
		// for (int i = 0; i < size; i++)          // rows
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_003f:
	{
		// for (int i = 0; i < size; i++)          // rows
		int32_t L_20 = V_0;
		int32_t L_21 = ___size7;
		V_3 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Kalman.Matrix::ACopytoC(Kalman.Matrix,System.Int32,System.Int32,Kalman.Matrix,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_ACopytoC_m11FFB34E6A8A277DC5FD86150D96F8532E678A3E (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___A0, int32_t ___xa1, int32_t ___ya2, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___C3, int32_t ___size4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// for (int i = 0; i < size; i++)          // rows
		V_0 = 0;
		goto IL_002f;
	}

IL_0005:
	{
		// for (int j = 0; j < size; j++) C[i, j] = A[ya + i, xa + j];
		V_1 = 0;
		goto IL_0022;
	}

IL_0009:
	{
		// for (int j = 0; j < size; j++) C[i, j] = A[ya + i, xa + j];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___C3;
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = ___A0;
		int32_t L_4 = ___ya2;
		int32_t L_5 = V_0;
		int32_t L_6 = ___xa1;
		int32_t L_7 = V_1;
		NullCheck(L_3);
		double L_8;
		L_8 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_3, ((int32_t)il2cpp_codegen_add(L_4, L_5)), ((int32_t)il2cpp_codegen_add(L_6, L_7)), NULL);
		NullCheck(L_0);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_0, L_1, L_2, L_8, NULL);
		// for (int j = 0; j < size; j++) C[i, j] = A[ya + i, xa + j];
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0022:
	{
		// for (int j = 0; j < size; j++) C[i, j] = A[ya + i, xa + j];
		int32_t L_10 = V_1;
		int32_t L_11 = ___size4;
		V_2 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_2;
		if (L_12)
		{
			goto IL_0009;
		}
	}
	{
		// for (int i = 0; i < size; i++)          // rows
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_002f:
	{
		// for (int i = 0; i < size; i++)          // rows
		int32_t L_14 = V_0;
		int32_t L_15 = ___size4;
		V_3 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_3;
		if (L_16)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// Kalman.Matrix Kalman.Matrix::StrassenMultiply(Kalman.Matrix,Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_StrassenMultiply_mF1E0A67B73689DFB4AEAC6628A10C5CECD19C5D0 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___A0, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___B1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_18 = NULL;
	bool V_19 = false;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	bool V_22 = false;
	bool V_23 = false;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	bool V_26 = false;
	bool V_27 = false;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	bool V_30 = false;
	bool V_31 = false;
	int32_t V_32 = 0;
	int32_t V_33 = 0;
	bool V_34 = false;
	bool V_35 = false;
	int32_t V_36 = 0;
	int32_t V_37 = 0;
	bool V_38 = false;
	bool V_39 = false;
	{
		// if (A.cols != B.rows) throw new MException("Wrong dimension of matrix!");
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___A0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___cols_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2 = ___B1;
		NullCheck(L_2);
		int32_t L_3 = L_2->___rows_0;
		V_7 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_7;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// if (A.cols != B.rows) throw new MException("Wrong dimension of matrix!");
		MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542* L_5 = (MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		MException__ctor_m0556F1CA0ADCAF46291549D0C7B600EFEFE2F7AE(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4D95BFFF56951BD3CAEDDE8316CBB48458E83A59)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Matrix_StrassenMultiply_mF1E0A67B73689DFB4AEAC6628A10C5CECD19C5D0_RuntimeMethod_var)));
	}

IL_0023:
	{
		// int msize = Math.Max(Math.Max(A.rows, A.cols), Math.Max(B.rows, B.cols));
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_6 = ___A0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___rows_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_8 = ___A0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___cols_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_10;
		L_10 = Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5(L_7, L_9, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_11 = ___B1;
		NullCheck(L_11);
		int32_t L_12 = L_11->___rows_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_13 = ___B1;
		NullCheck(L_13);
		int32_t L_14 = L_13->___cols_1;
		int32_t L_15;
		L_15 = Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5(L_12, L_14, NULL);
		int32_t L_16;
		L_16 = Math_Max_m830F00B616D7A2130E46E974DFB27E9DA7FE30E5(L_10, L_15, NULL);
		V_1 = L_16;
		// if (msize < 32)
		int32_t L_17 = V_1;
		V_8 = (bool)((((int32_t)L_17) < ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_18 = V_8;
		if (!L_18)
		{
			goto IL_0100;
		}
	}
	{
		// R = ZeroMatrix(A.rows, B.cols);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_19 = ___A0;
		NullCheck(L_19);
		int32_t L_20 = L_19->___rows_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_21 = ___B1;
		NullCheck(L_21);
		int32_t L_22 = L_21->___cols_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_23;
		L_23 = Matrix_ZeroMatrix_m6BBCA3371B60EB5354B49113A8A38110F65EF545(L_20, L_22, NULL);
		V_0 = L_23;
		// for (int i = 0; i < R.rows; i++)
		V_9 = 0;
		goto IL_00e5;
	}

IL_0071:
	{
		// for (int j = 0; j < R.cols; j++)
		V_10 = 0;
		goto IL_00cf;
	}

IL_0076:
	{
		// for (int k = 0; k < A.cols; k++)
		V_11 = 0;
		goto IL_00b9;
	}

IL_007b:
	{
		// R[i, j] += A[i, k] * B[k, j];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_24 = V_0;
		V_12 = L_24;
		int32_t L_25 = V_9;
		V_13 = L_25;
		int32_t L_26 = V_10;
		V_14 = L_26;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_27 = V_12;
		int32_t L_28 = V_13;
		int32_t L_29 = V_14;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_30 = V_12;
		int32_t L_31 = V_13;
		int32_t L_32 = V_14;
		NullCheck(L_30);
		double L_33;
		L_33 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_30, L_31, L_32, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_34 = ___A0;
		int32_t L_35 = V_9;
		int32_t L_36 = V_11;
		NullCheck(L_34);
		double L_37;
		L_37 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_34, L_35, L_36, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_38 = ___B1;
		int32_t L_39 = V_11;
		int32_t L_40 = V_10;
		NullCheck(L_38);
		double L_41;
		L_41 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_38, L_39, L_40, NULL);
		NullCheck(L_27);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_27, L_28, L_29, ((double)il2cpp_codegen_add(L_33, ((double)il2cpp_codegen_multiply(L_37, L_41)))), NULL);
		// for (int k = 0; k < A.cols; k++)
		int32_t L_42 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00b9:
	{
		// for (int k = 0; k < A.cols; k++)
		int32_t L_43 = V_11;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_44 = ___A0;
		NullCheck(L_44);
		int32_t L_45 = L_44->___cols_1;
		V_15 = (bool)((((int32_t)L_43) < ((int32_t)L_45))? 1 : 0);
		bool L_46 = V_15;
		if (L_46)
		{
			goto IL_007b;
		}
	}
	{
		// for (int j = 0; j < R.cols; j++)
		int32_t L_47 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_00cf:
	{
		// for (int j = 0; j < R.cols; j++)
		int32_t L_48 = V_10;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_49 = V_0;
		NullCheck(L_49);
		int32_t L_50 = L_49->___cols_1;
		V_16 = (bool)((((int32_t)L_48) < ((int32_t)L_50))? 1 : 0);
		bool L_51 = V_16;
		if (L_51)
		{
			goto IL_0076;
		}
	}
	{
		// for (int i = 0; i < R.rows; i++)
		int32_t L_52 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_00e5:
	{
		// for (int i = 0; i < R.rows; i++)
		int32_t L_53 = V_9;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_54 = V_0;
		NullCheck(L_54);
		int32_t L_55 = L_54->___rows_0;
		V_17 = (bool)((((int32_t)L_53) < ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_17;
		if (L_56)
		{
			goto IL_0071;
		}
	}
	{
		// return R;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_57 = V_0;
		V_18 = L_57;
		goto IL_0640;
	}

IL_0100:
	{
		// int size = 1; int n = 0;
		V_2 = 1;
		// int size = 1; int n = 0;
		V_3 = 0;
		goto IL_0110;
	}

IL_0106:
	{
		// while (msize > size) { size *= 2; n++; };
		int32_t L_58 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_multiply(L_58, 2));
		// while (msize > size) { size *= 2; n++; };
		int32_t L_59 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_0110:
	{
		// while (msize > size) { size *= 2; n++; };
		int32_t L_60 = V_1;
		int32_t L_61 = V_2;
		V_19 = (bool)((((int32_t)L_60) > ((int32_t)L_61))? 1 : 0);
		bool L_62 = V_19;
		if (L_62)
		{
			goto IL_0106;
		}
	}
	{
		// int h = size / 2;
		int32_t L_63 = V_2;
		V_4 = ((int32_t)(L_63/2));
		// Matrix[,] mField = new Matrix[n, 9];
		int32_t L_64 = V_3;
		il2cpp_array_size_t L_66[] = { (il2cpp_array_size_t)L_64, (il2cpp_array_size_t)((int32_t)9) };
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_65 = (MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167*)GenArrayNew(MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167_il2cpp_TypeInfo_var, L_66);
		V_5 = L_65;
		// for (int i = 0; i < n - 4; i++)          // rows
		V_20 = 0;
		goto IL_017a;
	}

IL_012f:
	{
		// z = (int)Math.Pow(2, n - i - 1);
		int32_t L_67 = V_3;
		int32_t L_68 = V_20;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_69;
		L_69 = Math_Pow_mC4D86D57FB3DB07BB24147700CAF77DB15EA2EB3((2.0), ((double)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_67, L_68)), 1))), NULL);
		V_6 = il2cpp_codegen_cast_double_to_int<int32_t>(L_69);
		// for (int j = 0; j < 9; j++) mField[i, j] = new Matrix(z, z);
		V_21 = 0;
		goto IL_0167;
	}

IL_014d:
	{
		// for (int j = 0; j < 9; j++) mField[i, j] = new Matrix(z, z);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_70 = V_5;
		int32_t L_71 = V_20;
		int32_t L_72 = V_21;
		int32_t L_73 = V_6;
		int32_t L_74 = V_6;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_75 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		NullCheck(L_75);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_75, L_73, L_74, NULL);
		NullCheck(L_70);
		(L_70)->SetAt(L_71, L_72, L_75);
		// for (int j = 0; j < 9; j++) mField[i, j] = new Matrix(z, z);
		int32_t L_76 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_0167:
	{
		// for (int j = 0; j < 9; j++) mField[i, j] = new Matrix(z, z);
		int32_t L_77 = V_21;
		V_22 = (bool)((((int32_t)L_77) < ((int32_t)((int32_t)9)))? 1 : 0);
		bool L_78 = V_22;
		if (L_78)
		{
			goto IL_014d;
		}
	}
	{
		// for (int i = 0; i < n - 4; i++)          // rows
		int32_t L_79 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_79, 1));
	}

IL_017a:
	{
		// for (int i = 0; i < n - 4; i++)          // rows
		int32_t L_80 = V_20;
		int32_t L_81 = V_3;
		V_23 = (bool)((((int32_t)L_80) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_81, 4))))? 1 : 0);
		bool L_82 = V_23;
		if (L_82)
		{
			goto IL_012f;
		}
	}
	{
		// SafeAplusBintoC(A, 0, 0, A, h, h, mField[0, 0], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_83 = ___A0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_84 = ___A0;
		int32_t L_85 = V_4;
		int32_t L_86 = V_4;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_87 = V_5;
		NullCheck(L_87);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_88;
		L_88 = (L_87)->GetAt(0, 0);
		int32_t L_89 = V_4;
		Matrix_SafeAplusBintoC_m1D7A9992A01BE5F5A6BEFCB70151895F50432A4A(L_83, 0, 0, L_84, L_85, L_86, L_88, L_89, NULL);
		// SafeAplusBintoC(B, 0, 0, B, h, h, mField[0, 1], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_90 = ___B1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_91 = ___B1;
		int32_t L_92 = V_4;
		int32_t L_93 = V_4;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_94 = V_5;
		NullCheck(L_94);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_95;
		L_95 = (L_94)->GetAt(0, 1);
		int32_t L_96 = V_4;
		Matrix_SafeAplusBintoC_m1D7A9992A01BE5F5A6BEFCB70151895F50432A4A(L_90, 0, 0, L_91, L_92, L_93, L_95, L_96, NULL);
		// StrassenMultiplyRun(mField[0, 0], mField[0, 1], mField[0, 1 + 1], 1, mField); // (A11 + A22) * (B11 + B22);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_97 = V_5;
		NullCheck(L_97);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_98;
		L_98 = (L_97)->GetAt(0, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_99 = V_5;
		NullCheck(L_99);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_100;
		L_100 = (L_99)->GetAt(0, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_101 = V_5;
		NullCheck(L_101);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_102;
		L_102 = (L_101)->GetAt(0, 2);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_103 = V_5;
		Matrix_StrassenMultiplyRun_mD0F1B81D2F5CA793B60A34DC3F9609BD4E4B54EC(L_98, L_100, L_102, 1, L_103, NULL);
		// SafeAplusBintoC(A, 0, h, A, h, h, mField[0, 0], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_104 = ___A0;
		int32_t L_105 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_106 = ___A0;
		int32_t L_107 = V_4;
		int32_t L_108 = V_4;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_109 = V_5;
		NullCheck(L_109);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_110;
		L_110 = (L_109)->GetAt(0, 0);
		int32_t L_111 = V_4;
		Matrix_SafeAplusBintoC_m1D7A9992A01BE5F5A6BEFCB70151895F50432A4A(L_104, 0, L_105, L_106, L_107, L_108, L_110, L_111, NULL);
		// SafeACopytoC(B, 0, 0, mField[0, 1], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_112 = ___B1;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_113 = V_5;
		NullCheck(L_113);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_114;
		L_114 = (L_113)->GetAt(0, 1);
		int32_t L_115 = V_4;
		Matrix_SafeACopytoC_m96ACEED14CAF282366347895155D545E8844A71C(L_112, 0, 0, L_114, L_115, NULL);
		// StrassenMultiplyRun(mField[0, 0], mField[0, 1], mField[0, 1 + 2], 1, mField); // (A21 + A22) * B11;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_116 = V_5;
		NullCheck(L_116);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_117;
		L_117 = (L_116)->GetAt(0, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_118 = V_5;
		NullCheck(L_118);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_119;
		L_119 = (L_118)->GetAt(0, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_120 = V_5;
		NullCheck(L_120);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_121;
		L_121 = (L_120)->GetAt(0, 3);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_122 = V_5;
		Matrix_StrassenMultiplyRun_mD0F1B81D2F5CA793B60A34DC3F9609BD4E4B54EC(L_117, L_119, L_121, 1, L_122, NULL);
		// SafeACopytoC(A, 0, 0, mField[0, 0], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_123 = ___A0;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_124 = V_5;
		NullCheck(L_124);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_125;
		L_125 = (L_124)->GetAt(0, 0);
		int32_t L_126 = V_4;
		Matrix_SafeACopytoC_m96ACEED14CAF282366347895155D545E8844A71C(L_123, 0, 0, L_125, L_126, NULL);
		// SafeAminusBintoC(B, h, 0, B, h, h, mField[0, 1], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_127 = ___B1;
		int32_t L_128 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_129 = ___B1;
		int32_t L_130 = V_4;
		int32_t L_131 = V_4;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_132 = V_5;
		NullCheck(L_132);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_133;
		L_133 = (L_132)->GetAt(0, 1);
		int32_t L_134 = V_4;
		Matrix_SafeAminusBintoC_m2025F98363DC1127F7C6D6BED73DE2935418DB9B(L_127, L_128, 0, L_129, L_130, L_131, L_133, L_134, NULL);
		// StrassenMultiplyRun(mField[0, 0], mField[0, 1], mField[0, 1 + 3], 1, mField); //A11 * (B12 - B22);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_135 = V_5;
		NullCheck(L_135);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_136;
		L_136 = (L_135)->GetAt(0, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_137 = V_5;
		NullCheck(L_137);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_138;
		L_138 = (L_137)->GetAt(0, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_139 = V_5;
		NullCheck(L_139);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_140;
		L_140 = (L_139)->GetAt(0, 4);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_141 = V_5;
		Matrix_StrassenMultiplyRun_mD0F1B81D2F5CA793B60A34DC3F9609BD4E4B54EC(L_136, L_138, L_140, 1, L_141, NULL);
		// SafeACopytoC(A, h, h, mField[0, 0], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_142 = ___A0;
		int32_t L_143 = V_4;
		int32_t L_144 = V_4;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_145 = V_5;
		NullCheck(L_145);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_146;
		L_146 = (L_145)->GetAt(0, 0);
		int32_t L_147 = V_4;
		Matrix_SafeACopytoC_m96ACEED14CAF282366347895155D545E8844A71C(L_142, L_143, L_144, L_146, L_147, NULL);
		// SafeAminusBintoC(B, 0, h, B, 0, 0, mField[0, 1], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_148 = ___B1;
		int32_t L_149 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_150 = ___B1;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_151 = V_5;
		NullCheck(L_151);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_152;
		L_152 = (L_151)->GetAt(0, 1);
		int32_t L_153 = V_4;
		Matrix_SafeAminusBintoC_m2025F98363DC1127F7C6D6BED73DE2935418DB9B(L_148, 0, L_149, L_150, 0, 0, L_152, L_153, NULL);
		// StrassenMultiplyRun(mField[0, 0], mField[0, 1], mField[0, 1 + 4], 1, mField); //A22 * (B21 - B11);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_154 = V_5;
		NullCheck(L_154);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_155;
		L_155 = (L_154)->GetAt(0, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_156 = V_5;
		NullCheck(L_156);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_157;
		L_157 = (L_156)->GetAt(0, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_158 = V_5;
		NullCheck(L_158);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_159;
		L_159 = (L_158)->GetAt(0, 5);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_160 = V_5;
		Matrix_StrassenMultiplyRun_mD0F1B81D2F5CA793B60A34DC3F9609BD4E4B54EC(L_155, L_157, L_159, 1, L_160, NULL);
		// SafeAplusBintoC(A, 0, 0, A, h, 0, mField[0, 0], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_161 = ___A0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_162 = ___A0;
		int32_t L_163 = V_4;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_164 = V_5;
		NullCheck(L_164);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_165;
		L_165 = (L_164)->GetAt(0, 0);
		int32_t L_166 = V_4;
		Matrix_SafeAplusBintoC_m1D7A9992A01BE5F5A6BEFCB70151895F50432A4A(L_161, 0, 0, L_162, L_163, 0, L_165, L_166, NULL);
		// SafeACopytoC(B, h, h, mField[0, 1], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_167 = ___B1;
		int32_t L_168 = V_4;
		int32_t L_169 = V_4;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_170 = V_5;
		NullCheck(L_170);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_171;
		L_171 = (L_170)->GetAt(0, 1);
		int32_t L_172 = V_4;
		Matrix_SafeACopytoC_m96ACEED14CAF282366347895155D545E8844A71C(L_167, L_168, L_169, L_171, L_172, NULL);
		// StrassenMultiplyRun(mField[0, 0], mField[0, 1], mField[0, 1 + 5], 1, mField); //(A11 + A12) * B22;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_173 = V_5;
		NullCheck(L_173);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_174;
		L_174 = (L_173)->GetAt(0, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_175 = V_5;
		NullCheck(L_175);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_176;
		L_176 = (L_175)->GetAt(0, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_177 = V_5;
		NullCheck(L_177);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_178;
		L_178 = (L_177)->GetAt(0, 6);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_179 = V_5;
		Matrix_StrassenMultiplyRun_mD0F1B81D2F5CA793B60A34DC3F9609BD4E4B54EC(L_174, L_176, L_178, 1, L_179, NULL);
		// SafeAminusBintoC(A, 0, h, A, 0, 0, mField[0, 0], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_180 = ___A0;
		int32_t L_181 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_182 = ___A0;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_183 = V_5;
		NullCheck(L_183);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_184;
		L_184 = (L_183)->GetAt(0, 0);
		int32_t L_185 = V_4;
		Matrix_SafeAminusBintoC_m2025F98363DC1127F7C6D6BED73DE2935418DB9B(L_180, 0, L_181, L_182, 0, 0, L_184, L_185, NULL);
		// SafeAplusBintoC(B, 0, 0, B, h, 0, mField[0, 1], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_186 = ___B1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_187 = ___B1;
		int32_t L_188 = V_4;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_189 = V_5;
		NullCheck(L_189);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_190;
		L_190 = (L_189)->GetAt(0, 1);
		int32_t L_191 = V_4;
		Matrix_SafeAplusBintoC_m1D7A9992A01BE5F5A6BEFCB70151895F50432A4A(L_186, 0, 0, L_187, L_188, 0, L_190, L_191, NULL);
		// StrassenMultiplyRun(mField[0, 0], mField[0, 1], mField[0, 1 + 6], 1, mField); //(A21 - A11) * (B11 + B12);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_192 = V_5;
		NullCheck(L_192);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_193;
		L_193 = (L_192)->GetAt(0, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_194 = V_5;
		NullCheck(L_194);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_195;
		L_195 = (L_194)->GetAt(0, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_196 = V_5;
		NullCheck(L_196);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_197;
		L_197 = (L_196)->GetAt(0, 7);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_198 = V_5;
		Matrix_StrassenMultiplyRun_mD0F1B81D2F5CA793B60A34DC3F9609BD4E4B54EC(L_193, L_195, L_197, 1, L_198, NULL);
		// SafeAminusBintoC(A, h, 0, A, h, h, mField[0, 0], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_199 = ___A0;
		int32_t L_200 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_201 = ___A0;
		int32_t L_202 = V_4;
		int32_t L_203 = V_4;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_204 = V_5;
		NullCheck(L_204);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_205;
		L_205 = (L_204)->GetAt(0, 0);
		int32_t L_206 = V_4;
		Matrix_SafeAminusBintoC_m2025F98363DC1127F7C6D6BED73DE2935418DB9B(L_199, L_200, 0, L_201, L_202, L_203, L_205, L_206, NULL);
		// SafeAplusBintoC(B, 0, h, B, h, h, mField[0, 1], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_207 = ___B1;
		int32_t L_208 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_209 = ___B1;
		int32_t L_210 = V_4;
		int32_t L_211 = V_4;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_212 = V_5;
		NullCheck(L_212);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_213;
		L_213 = (L_212)->GetAt(0, 1);
		int32_t L_214 = V_4;
		Matrix_SafeAplusBintoC_m1D7A9992A01BE5F5A6BEFCB70151895F50432A4A(L_207, 0, L_208, L_209, L_210, L_211, L_213, L_214, NULL);
		// StrassenMultiplyRun(mField[0, 0], mField[0, 1], mField[0, 1 + 7], 1, mField); // (A12 - A22) * (B21 + B22);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_215 = V_5;
		NullCheck(L_215);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_216;
		L_216 = (L_215)->GetAt(0, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_217 = V_5;
		NullCheck(L_217);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_218;
		L_218 = (L_217)->GetAt(0, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_219 = V_5;
		NullCheck(L_219);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_220;
		L_220 = (L_219)->GetAt(0, 8);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_221 = V_5;
		Matrix_StrassenMultiplyRun_mD0F1B81D2F5CA793B60A34DC3F9609BD4E4B54EC(L_216, L_218, L_220, 1, L_221, NULL);
		// R = new Matrix(A.rows, B.cols);                  // result
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_222 = ___A0;
		NullCheck(L_222);
		int32_t L_223 = L_222->___rows_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_224 = ___B1;
		NullCheck(L_224);
		int32_t L_225 = L_224->___cols_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_226 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		NullCheck(L_226);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_226, L_223, L_225, NULL);
		V_0 = L_226;
		// for (int i = 0; i < Math.Min(h, R.rows); i++)          // rows
		V_24 = 0;
		goto IL_0466;
	}

IL_03e8:
	{
		// for (int j = 0; j < Math.Min(h, R.cols); j++)     // cols
		V_25 = 0;
		goto IL_0449;
	}

IL_03ed:
	{
		// R[i, j] = mField[0, 1 + 1][i, j] + mField[0, 1 + 4][i, j] - mField[0, 1 + 5][i, j] + mField[0, 1 + 7][i, j];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_227 = V_0;
		int32_t L_228 = V_24;
		int32_t L_229 = V_25;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_230 = V_5;
		NullCheck(L_230);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_231;
		L_231 = (L_230)->GetAt(0, 2);
		int32_t L_232 = V_24;
		int32_t L_233 = V_25;
		NullCheck(L_231);
		double L_234;
		L_234 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_231, L_232, L_233, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_235 = V_5;
		NullCheck(L_235);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_236;
		L_236 = (L_235)->GetAt(0, 5);
		int32_t L_237 = V_24;
		int32_t L_238 = V_25;
		NullCheck(L_236);
		double L_239;
		L_239 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_236, L_237, L_238, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_240 = V_5;
		NullCheck(L_240);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_241;
		L_241 = (L_240)->GetAt(0, 6);
		int32_t L_242 = V_24;
		int32_t L_243 = V_25;
		NullCheck(L_241);
		double L_244;
		L_244 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_241, L_242, L_243, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_245 = V_5;
		NullCheck(L_245);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_246;
		L_246 = (L_245)->GetAt(0, 8);
		int32_t L_247 = V_24;
		int32_t L_248 = V_25;
		NullCheck(L_246);
		double L_249;
		L_249 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_246, L_247, L_248, NULL);
		NullCheck(L_227);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_227, L_228, L_229, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_234, L_239)), L_244)), L_249)), NULL);
		// for (int j = 0; j < Math.Min(h, R.cols); j++)     // cols
		int32_t L_250 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add(L_250, 1));
	}

IL_0449:
	{
		// for (int j = 0; j < Math.Min(h, R.cols); j++)     // cols
		int32_t L_251 = V_25;
		int32_t L_252 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_253 = V_0;
		NullCheck(L_253);
		int32_t L_254 = L_253->___cols_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_255;
		L_255 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_252, L_254, NULL);
		V_26 = (bool)((((int32_t)L_251) < ((int32_t)L_255))? 1 : 0);
		bool L_256 = V_26;
		if (L_256)
		{
			goto IL_03ed;
		}
	}
	{
		// for (int i = 0; i < Math.Min(h, R.rows); i++)          // rows
		int32_t L_257 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add(L_257, 1));
	}

IL_0466:
	{
		// for (int i = 0; i < Math.Min(h, R.rows); i++)          // rows
		int32_t L_258 = V_24;
		int32_t L_259 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_260 = V_0;
		NullCheck(L_260);
		int32_t L_261 = L_260->___rows_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_262;
		L_262 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_259, L_261, NULL);
		V_27 = (bool)((((int32_t)L_258) < ((int32_t)L_262))? 1 : 0);
		bool L_263 = V_27;
		if (L_263)
		{
			goto IL_03e8;
		}
	}
	{
		// for (int i = 0; i < Math.Min(h, R.rows); i++)          // rows
		V_28 = 0;
		goto IL_04e6;
	}

IL_0485:
	{
		// for (int j = h; j < Math.Min(2 * h, R.cols); j++)     // cols
		int32_t L_264 = V_4;
		V_29 = L_264;
		goto IL_04c7;
	}

IL_048b:
	{
		// R[i, j] = mField[0, 1 + 3][i, j - h] + mField[0, 1 + 5][i, j - h];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_265 = V_0;
		int32_t L_266 = V_28;
		int32_t L_267 = V_29;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_268 = V_5;
		NullCheck(L_268);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_269;
		L_269 = (L_268)->GetAt(0, 4);
		int32_t L_270 = V_28;
		int32_t L_271 = V_29;
		int32_t L_272 = V_4;
		NullCheck(L_269);
		double L_273;
		L_273 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_269, L_270, ((int32_t)il2cpp_codegen_subtract(L_271, L_272)), NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_274 = V_5;
		NullCheck(L_274);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_275;
		L_275 = (L_274)->GetAt(0, 6);
		int32_t L_276 = V_28;
		int32_t L_277 = V_29;
		int32_t L_278 = V_4;
		NullCheck(L_275);
		double L_279;
		L_279 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_275, L_276, ((int32_t)il2cpp_codegen_subtract(L_277, L_278)), NULL);
		NullCheck(L_265);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_265, L_266, L_267, ((double)il2cpp_codegen_add(L_273, L_279)), NULL);
		// for (int j = h; j < Math.Min(2 * h, R.cols); j++)     // cols
		int32_t L_280 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add(L_280, 1));
	}

IL_04c7:
	{
		// for (int j = h; j < Math.Min(2 * h, R.cols); j++)     // cols
		int32_t L_281 = V_29;
		int32_t L_282 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_283 = V_0;
		NullCheck(L_283);
		int32_t L_284 = L_283->___cols_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_285;
		L_285 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(((int32_t)il2cpp_codegen_multiply(2, L_282)), L_284, NULL);
		V_30 = (bool)((((int32_t)L_281) < ((int32_t)L_285))? 1 : 0);
		bool L_286 = V_30;
		if (L_286)
		{
			goto IL_048b;
		}
	}
	{
		// for (int i = 0; i < Math.Min(h, R.rows); i++)          // rows
		int32_t L_287 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add(L_287, 1));
	}

IL_04e6:
	{
		// for (int i = 0; i < Math.Min(h, R.rows); i++)          // rows
		int32_t L_288 = V_28;
		int32_t L_289 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_290 = V_0;
		NullCheck(L_290);
		int32_t L_291 = L_290->___rows_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_292;
		L_292 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_289, L_291, NULL);
		V_31 = (bool)((((int32_t)L_288) < ((int32_t)L_292))? 1 : 0);
		bool L_293 = V_31;
		if (L_293)
		{
			goto IL_0485;
		}
	}
	{
		// for (int i = h; i < Math.Min(2 * h, R.rows); i++)          // rows
		int32_t L_294 = V_4;
		V_32 = L_294;
		goto IL_0561;
	}

IL_0503:
	{
		// for (int j = 0; j < Math.Min(h, R.cols); j++)     // cols
		V_33 = 0;
		goto IL_0544;
	}

IL_0508:
	{
		// R[i, j] = mField[0, 1 + 2][i - h, j] + mField[0, 1 + 4][i - h, j];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_295 = V_0;
		int32_t L_296 = V_32;
		int32_t L_297 = V_33;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_298 = V_5;
		NullCheck(L_298);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_299;
		L_299 = (L_298)->GetAt(0, 3);
		int32_t L_300 = V_32;
		int32_t L_301 = V_4;
		int32_t L_302 = V_33;
		NullCheck(L_299);
		double L_303;
		L_303 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_299, ((int32_t)il2cpp_codegen_subtract(L_300, L_301)), L_302, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_304 = V_5;
		NullCheck(L_304);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_305;
		L_305 = (L_304)->GetAt(0, 5);
		int32_t L_306 = V_32;
		int32_t L_307 = V_4;
		int32_t L_308 = V_33;
		NullCheck(L_305);
		double L_309;
		L_309 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_305, ((int32_t)il2cpp_codegen_subtract(L_306, L_307)), L_308, NULL);
		NullCheck(L_295);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_295, L_296, L_297, ((double)il2cpp_codegen_add(L_303, L_309)), NULL);
		// for (int j = 0; j < Math.Min(h, R.cols); j++)     // cols
		int32_t L_310 = V_33;
		V_33 = ((int32_t)il2cpp_codegen_add(L_310, 1));
	}

IL_0544:
	{
		// for (int j = 0; j < Math.Min(h, R.cols); j++)     // cols
		int32_t L_311 = V_33;
		int32_t L_312 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_313 = V_0;
		NullCheck(L_313);
		int32_t L_314 = L_313->___cols_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_315;
		L_315 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(L_312, L_314, NULL);
		V_34 = (bool)((((int32_t)L_311) < ((int32_t)L_315))? 1 : 0);
		bool L_316 = V_34;
		if (L_316)
		{
			goto IL_0508;
		}
	}
	{
		// for (int i = h; i < Math.Min(2 * h, R.rows); i++)          // rows
		int32_t L_317 = V_32;
		V_32 = ((int32_t)il2cpp_codegen_add(L_317, 1));
	}

IL_0561:
	{
		// for (int i = h; i < Math.Min(2 * h, R.rows); i++)          // rows
		int32_t L_318 = V_32;
		int32_t L_319 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_320 = V_0;
		NullCheck(L_320);
		int32_t L_321 = L_320->___rows_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_322;
		L_322 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(((int32_t)il2cpp_codegen_multiply(2, L_319)), L_321, NULL);
		V_35 = (bool)((((int32_t)L_318) < ((int32_t)L_322))? 1 : 0);
		bool L_323 = V_35;
		if (L_323)
		{
			goto IL_0503;
		}
	}
	{
		// for (int i = h; i < Math.Min(2 * h, R.rows); i++)          // rows
		int32_t L_324 = V_4;
		V_36 = L_324;
		goto IL_061f;
	}

IL_0583:
	{
		// for (int j = h; j < Math.Min(2 * h, R.cols); j++)     // cols
		int32_t L_325 = V_4;
		V_37 = L_325;
		goto IL_05fd;
	}

IL_0589:
	{
		// R[i, j] = mField[0, 1 + 1][i - h, j - h] - mField[0, 1 + 2][i - h, j - h] + mField[0, 1 + 3][i - h, j - h] + mField[0, 1 + 6][i - h, j - h];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_326 = V_0;
		int32_t L_327 = V_36;
		int32_t L_328 = V_37;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_329 = V_5;
		NullCheck(L_329);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_330;
		L_330 = (L_329)->GetAt(0, 2);
		int32_t L_331 = V_36;
		int32_t L_332 = V_4;
		int32_t L_333 = V_37;
		int32_t L_334 = V_4;
		NullCheck(L_330);
		double L_335;
		L_335 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_330, ((int32_t)il2cpp_codegen_subtract(L_331, L_332)), ((int32_t)il2cpp_codegen_subtract(L_333, L_334)), NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_336 = V_5;
		NullCheck(L_336);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_337;
		L_337 = (L_336)->GetAt(0, 3);
		int32_t L_338 = V_36;
		int32_t L_339 = V_4;
		int32_t L_340 = V_37;
		int32_t L_341 = V_4;
		NullCheck(L_337);
		double L_342;
		L_342 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_337, ((int32_t)il2cpp_codegen_subtract(L_338, L_339)), ((int32_t)il2cpp_codegen_subtract(L_340, L_341)), NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_343 = V_5;
		NullCheck(L_343);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_344;
		L_344 = (L_343)->GetAt(0, 4);
		int32_t L_345 = V_36;
		int32_t L_346 = V_4;
		int32_t L_347 = V_37;
		int32_t L_348 = V_4;
		NullCheck(L_344);
		double L_349;
		L_349 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_344, ((int32_t)il2cpp_codegen_subtract(L_345, L_346)), ((int32_t)il2cpp_codegen_subtract(L_347, L_348)), NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_350 = V_5;
		NullCheck(L_350);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_351;
		L_351 = (L_350)->GetAt(0, 7);
		int32_t L_352 = V_36;
		int32_t L_353 = V_4;
		int32_t L_354 = V_37;
		int32_t L_355 = V_4;
		NullCheck(L_351);
		double L_356;
		L_356 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_351, ((int32_t)il2cpp_codegen_subtract(L_352, L_353)), ((int32_t)il2cpp_codegen_subtract(L_354, L_355)), NULL);
		NullCheck(L_326);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_326, L_327, L_328, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(L_335, L_342)), L_349)), L_356)), NULL);
		// for (int j = h; j < Math.Min(2 * h, R.cols); j++)     // cols
		int32_t L_357 = V_37;
		V_37 = ((int32_t)il2cpp_codegen_add(L_357, 1));
	}

IL_05fd:
	{
		// for (int j = h; j < Math.Min(2 * h, R.cols); j++)     // cols
		int32_t L_358 = V_37;
		int32_t L_359 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_360 = V_0;
		NullCheck(L_360);
		int32_t L_361 = L_360->___cols_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_362;
		L_362 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(((int32_t)il2cpp_codegen_multiply(2, L_359)), L_361, NULL);
		V_38 = (bool)((((int32_t)L_358) < ((int32_t)L_362))? 1 : 0);
		bool L_363 = V_38;
		if (L_363)
		{
			goto IL_0589;
		}
	}
	{
		// for (int i = h; i < Math.Min(2 * h, R.rows); i++)          // rows
		int32_t L_364 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_364, 1));
	}

IL_061f:
	{
		// for (int i = h; i < Math.Min(2 * h, R.rows); i++)          // rows
		int32_t L_365 = V_36;
		int32_t L_366 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_367 = V_0;
		NullCheck(L_367);
		int32_t L_368 = L_367->___rows_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_369;
		L_369 = Math_Min_m1F346FEDDC77AC1EC0C4EF1AC6BA59F0EC7980F8(((int32_t)il2cpp_codegen_multiply(2, L_366)), L_368, NULL);
		V_39 = (bool)((((int32_t)L_365) < ((int32_t)L_369))? 1 : 0);
		bool L_370 = V_39;
		if (L_370)
		{
			goto IL_0583;
		}
	}
	{
		// return R;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_371 = V_0;
		V_18 = L_371;
		goto IL_0640;
	}

IL_0640:
	{
		// }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_372 = V_18;
		return L_372;
	}
}
// System.Void Kalman.Matrix::StrassenMultiplyRun(Kalman.Matrix,Kalman.Matrix,Kalman.Matrix,System.Int32,Kalman.Matrix[,])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix_StrassenMultiplyRun_mD0F1B81D2F5CA793B60A34DC3F9609BD4E4B54EC (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___A0, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___B1, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___C2, int32_t ___l3, MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* ___f4, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	bool V_18 = false;
	bool V_19 = false;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	bool V_22 = false;
	bool V_23 = false;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	bool V_26 = false;
	bool V_27 = false;
	{
		// int size = A.rows;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___A0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___rows_0;
		V_0 = L_1;
		// int h = size / 2;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2/2));
		// if (size < 32)
		int32_t L_3 = V_0;
		V_2 = (bool)((((int32_t)L_3) < ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_00bc;
		}
	}
	{
		// for (int i = 0; i < C.rows; i++)
		V_3 = 0;
		goto IL_00a5;
	}

IL_0020:
	{
		// for (int j = 0; j < C.cols; j++)
		V_4 = 0;
		goto IL_0091;
	}

IL_0025:
	{
		// C[i, j] = 0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_5 = ___C2;
		int32_t L_6 = V_3;
		int32_t L_7 = V_4;
		NullCheck(L_5);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_5, L_6, L_7, (0.0), NULL);
		// for (int k = 0; k < A.cols; k++) C[i, j] += A[i, k] * B[k, j];
		V_5 = 0;
		goto IL_007a;
	}

IL_003e:
	{
		// for (int k = 0; k < A.cols; k++) C[i, j] += A[i, k] * B[k, j];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_8 = ___C2;
		V_6 = L_8;
		int32_t L_9 = V_3;
		V_7 = L_9;
		int32_t L_10 = V_4;
		V_8 = L_10;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_11 = V_6;
		int32_t L_12 = V_7;
		int32_t L_13 = V_8;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_14 = V_6;
		int32_t L_15 = V_7;
		int32_t L_16 = V_8;
		NullCheck(L_14);
		double L_17;
		L_17 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_14, L_15, L_16, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_18 = ___A0;
		int32_t L_19 = V_3;
		int32_t L_20 = V_5;
		NullCheck(L_18);
		double L_21;
		L_21 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_18, L_19, L_20, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_22 = ___B1;
		int32_t L_23 = V_5;
		int32_t L_24 = V_4;
		NullCheck(L_22);
		double L_25;
		L_25 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_22, L_23, L_24, NULL);
		NullCheck(L_11);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_11, L_12, L_13, ((double)il2cpp_codegen_add(L_17, ((double)il2cpp_codegen_multiply(L_21, L_25)))), NULL);
		// for (int k = 0; k < A.cols; k++) C[i, j] += A[i, k] * B[k, j];
		int32_t L_26 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_007a:
	{
		// for (int k = 0; k < A.cols; k++) C[i, j] += A[i, k] * B[k, j];
		int32_t L_27 = V_5;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_28 = ___A0;
		NullCheck(L_28);
		int32_t L_29 = L_28->___cols_1;
		V_9 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_9;
		if (L_30)
		{
			goto IL_003e;
		}
	}
	{
		// for (int j = 0; j < C.cols; j++)
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0091:
	{
		// for (int j = 0; j < C.cols; j++)
		int32_t L_32 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_33 = ___C2;
		NullCheck(L_33);
		int32_t L_34 = L_33->___cols_1;
		V_10 = (bool)((((int32_t)L_32) < ((int32_t)L_34))? 1 : 0);
		bool L_35 = V_10;
		if (L_35)
		{
			goto IL_0025;
		}
	}
	{
		// for (int i = 0; i < C.rows; i++)
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00a5:
	{
		// for (int i = 0; i < C.rows; i++)
		int32_t L_37 = V_3;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_38 = ___C2;
		NullCheck(L_38);
		int32_t L_39 = L_38->___rows_0;
		V_11 = (bool)((((int32_t)L_37) < ((int32_t)L_39))? 1 : 0);
		bool L_40 = V_11;
		if (L_40)
		{
			goto IL_0020;
		}
	}
	{
		// return;
		goto IL_04c8;
	}

IL_00bc:
	{
		// AplusBintoC(A, 0, 0, A, h, h, f[l, 0], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_41 = ___A0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_42 = ___A0;
		int32_t L_43 = V_1;
		int32_t L_44 = V_1;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_45 = ___f4;
		int32_t L_46 = ___l3;
		NullCheck(L_45);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_47;
		L_47 = (L_45)->GetAt(L_46, 0);
		int32_t L_48 = V_1;
		Matrix_AplusBintoC_m81098A42B9884070EBA6CA38341428AE87FD1801(L_41, 0, 0, L_42, L_43, L_44, L_47, L_48, NULL);
		// AplusBintoC(B, 0, 0, B, h, h, f[l, 1], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_49 = ___B1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_50 = ___B1;
		int32_t L_51 = V_1;
		int32_t L_52 = V_1;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_53 = ___f4;
		int32_t L_54 = ___l3;
		NullCheck(L_53);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_55;
		L_55 = (L_53)->GetAt(L_54, 1);
		int32_t L_56 = V_1;
		Matrix_AplusBintoC_m81098A42B9884070EBA6CA38341428AE87FD1801(L_49, 0, 0, L_50, L_51, L_52, L_55, L_56, NULL);
		// StrassenMultiplyRun(f[l, 0], f[l, 1], f[l, 1 + 1], l + 1, f); // (A11 + A22) * (B11 + B22);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_57 = ___f4;
		int32_t L_58 = ___l3;
		NullCheck(L_57);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_59;
		L_59 = (L_57)->GetAt(L_58, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_60 = ___f4;
		int32_t L_61 = ___l3;
		NullCheck(L_60);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_62;
		L_62 = (L_60)->GetAt(L_61, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_63 = ___f4;
		int32_t L_64 = ___l3;
		NullCheck(L_63);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_65;
		L_65 = (L_63)->GetAt(L_64, 2);
		int32_t L_66 = ___l3;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_67 = ___f4;
		Matrix_StrassenMultiplyRun_mD0F1B81D2F5CA793B60A34DC3F9609BD4E4B54EC(L_59, L_62, L_65, ((int32_t)il2cpp_codegen_add(L_66, 1)), L_67, NULL);
		// AplusBintoC(A, 0, h, A, h, h, f[l, 0], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_68 = ___A0;
		int32_t L_69 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_70 = ___A0;
		int32_t L_71 = V_1;
		int32_t L_72 = V_1;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_73 = ___f4;
		int32_t L_74 = ___l3;
		NullCheck(L_73);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_75;
		L_75 = (L_73)->GetAt(L_74, 0);
		int32_t L_76 = V_1;
		Matrix_AplusBintoC_m81098A42B9884070EBA6CA38341428AE87FD1801(L_68, 0, L_69, L_70, L_71, L_72, L_75, L_76, NULL);
		// ACopytoC(B, 0, 0, f[l, 1], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_77 = ___B1;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_78 = ___f4;
		int32_t L_79 = ___l3;
		NullCheck(L_78);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_80;
		L_80 = (L_78)->GetAt(L_79, 1);
		int32_t L_81 = V_1;
		Matrix_ACopytoC_m11FFB34E6A8A277DC5FD86150D96F8532E678A3E(L_77, 0, 0, L_80, L_81, NULL);
		// StrassenMultiplyRun(f[l, 0], f[l, 1], f[l, 1 + 2], l + 1, f); // (A21 + A22) * B11;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_82 = ___f4;
		int32_t L_83 = ___l3;
		NullCheck(L_82);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_84;
		L_84 = (L_82)->GetAt(L_83, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_85 = ___f4;
		int32_t L_86 = ___l3;
		NullCheck(L_85);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_87;
		L_87 = (L_85)->GetAt(L_86, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_88 = ___f4;
		int32_t L_89 = ___l3;
		NullCheck(L_88);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_90;
		L_90 = (L_88)->GetAt(L_89, 3);
		int32_t L_91 = ___l3;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_92 = ___f4;
		Matrix_StrassenMultiplyRun_mD0F1B81D2F5CA793B60A34DC3F9609BD4E4B54EC(L_84, L_87, L_90, ((int32_t)il2cpp_codegen_add(L_91, 1)), L_92, NULL);
		// ACopytoC(A, 0, 0, f[l, 0], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_93 = ___A0;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_94 = ___f4;
		int32_t L_95 = ___l3;
		NullCheck(L_94);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_96;
		L_96 = (L_94)->GetAt(L_95, 0);
		int32_t L_97 = V_1;
		Matrix_ACopytoC_m11FFB34E6A8A277DC5FD86150D96F8532E678A3E(L_93, 0, 0, L_96, L_97, NULL);
		// AminusBintoC(B, h, 0, B, h, h, f[l, 1], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_98 = ___B1;
		int32_t L_99 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_100 = ___B1;
		int32_t L_101 = V_1;
		int32_t L_102 = V_1;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_103 = ___f4;
		int32_t L_104 = ___l3;
		NullCheck(L_103);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_105;
		L_105 = (L_103)->GetAt(L_104, 1);
		int32_t L_106 = V_1;
		Matrix_AminusBintoC_m453DD7074D66DDD68DACD9AB55052751A9B2ADFB(L_98, L_99, 0, L_100, L_101, L_102, L_105, L_106, NULL);
		// StrassenMultiplyRun(f[l, 0], f[l, 1], f[l, 1 + 3], l + 1, f); //A11 * (B12 - B22);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_107 = ___f4;
		int32_t L_108 = ___l3;
		NullCheck(L_107);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_109;
		L_109 = (L_107)->GetAt(L_108, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_110 = ___f4;
		int32_t L_111 = ___l3;
		NullCheck(L_110);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_112;
		L_112 = (L_110)->GetAt(L_111, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_113 = ___f4;
		int32_t L_114 = ___l3;
		NullCheck(L_113);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_115;
		L_115 = (L_113)->GetAt(L_114, 4);
		int32_t L_116 = ___l3;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_117 = ___f4;
		Matrix_StrassenMultiplyRun_mD0F1B81D2F5CA793B60A34DC3F9609BD4E4B54EC(L_109, L_112, L_115, ((int32_t)il2cpp_codegen_add(L_116, 1)), L_117, NULL);
		// ACopytoC(A, h, h, f[l, 0], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_118 = ___A0;
		int32_t L_119 = V_1;
		int32_t L_120 = V_1;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_121 = ___f4;
		int32_t L_122 = ___l3;
		NullCheck(L_121);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_123;
		L_123 = (L_121)->GetAt(L_122, 0);
		int32_t L_124 = V_1;
		Matrix_ACopytoC_m11FFB34E6A8A277DC5FD86150D96F8532E678A3E(L_118, L_119, L_120, L_123, L_124, NULL);
		// AminusBintoC(B, 0, h, B, 0, 0, f[l, 1], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_125 = ___B1;
		int32_t L_126 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_127 = ___B1;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_128 = ___f4;
		int32_t L_129 = ___l3;
		NullCheck(L_128);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_130;
		L_130 = (L_128)->GetAt(L_129, 1);
		int32_t L_131 = V_1;
		Matrix_AminusBintoC_m453DD7074D66DDD68DACD9AB55052751A9B2ADFB(L_125, 0, L_126, L_127, 0, 0, L_130, L_131, NULL);
		// StrassenMultiplyRun(f[l, 0], f[l, 1], f[l, 1 + 4], l + 1, f); //A22 * (B21 - B11);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_132 = ___f4;
		int32_t L_133 = ___l3;
		NullCheck(L_132);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_134;
		L_134 = (L_132)->GetAt(L_133, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_135 = ___f4;
		int32_t L_136 = ___l3;
		NullCheck(L_135);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_137;
		L_137 = (L_135)->GetAt(L_136, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_138 = ___f4;
		int32_t L_139 = ___l3;
		NullCheck(L_138);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_140;
		L_140 = (L_138)->GetAt(L_139, 5);
		int32_t L_141 = ___l3;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_142 = ___f4;
		Matrix_StrassenMultiplyRun_mD0F1B81D2F5CA793B60A34DC3F9609BD4E4B54EC(L_134, L_137, L_140, ((int32_t)il2cpp_codegen_add(L_141, 1)), L_142, NULL);
		// AplusBintoC(A, 0, 0, A, h, 0, f[l, 0], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_143 = ___A0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_144 = ___A0;
		int32_t L_145 = V_1;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_146 = ___f4;
		int32_t L_147 = ___l3;
		NullCheck(L_146);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_148;
		L_148 = (L_146)->GetAt(L_147, 0);
		int32_t L_149 = V_1;
		Matrix_AplusBintoC_m81098A42B9884070EBA6CA38341428AE87FD1801(L_143, 0, 0, L_144, L_145, 0, L_148, L_149, NULL);
		// ACopytoC(B, h, h, f[l, 1], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_150 = ___B1;
		int32_t L_151 = V_1;
		int32_t L_152 = V_1;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_153 = ___f4;
		int32_t L_154 = ___l3;
		NullCheck(L_153);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_155;
		L_155 = (L_153)->GetAt(L_154, 1);
		int32_t L_156 = V_1;
		Matrix_ACopytoC_m11FFB34E6A8A277DC5FD86150D96F8532E678A3E(L_150, L_151, L_152, L_155, L_156, NULL);
		// StrassenMultiplyRun(f[l, 0], f[l, 1], f[l, 1 + 5], l + 1, f); //(A11 + A12) * B22;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_157 = ___f4;
		int32_t L_158 = ___l3;
		NullCheck(L_157);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_159;
		L_159 = (L_157)->GetAt(L_158, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_160 = ___f4;
		int32_t L_161 = ___l3;
		NullCheck(L_160);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_162;
		L_162 = (L_160)->GetAt(L_161, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_163 = ___f4;
		int32_t L_164 = ___l3;
		NullCheck(L_163);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_165;
		L_165 = (L_163)->GetAt(L_164, 6);
		int32_t L_166 = ___l3;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_167 = ___f4;
		Matrix_StrassenMultiplyRun_mD0F1B81D2F5CA793B60A34DC3F9609BD4E4B54EC(L_159, L_162, L_165, ((int32_t)il2cpp_codegen_add(L_166, 1)), L_167, NULL);
		// AminusBintoC(A, 0, h, A, 0, 0, f[l, 0], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_168 = ___A0;
		int32_t L_169 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_170 = ___A0;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_171 = ___f4;
		int32_t L_172 = ___l3;
		NullCheck(L_171);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_173;
		L_173 = (L_171)->GetAt(L_172, 0);
		int32_t L_174 = V_1;
		Matrix_AminusBintoC_m453DD7074D66DDD68DACD9AB55052751A9B2ADFB(L_168, 0, L_169, L_170, 0, 0, L_173, L_174, NULL);
		// AplusBintoC(B, 0, 0, B, h, 0, f[l, 1], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_175 = ___B1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_176 = ___B1;
		int32_t L_177 = V_1;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_178 = ___f4;
		int32_t L_179 = ___l3;
		NullCheck(L_178);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_180;
		L_180 = (L_178)->GetAt(L_179, 1);
		int32_t L_181 = V_1;
		Matrix_AplusBintoC_m81098A42B9884070EBA6CA38341428AE87FD1801(L_175, 0, 0, L_176, L_177, 0, L_180, L_181, NULL);
		// StrassenMultiplyRun(f[l, 0], f[l, 1], f[l, 1 + 6], l + 1, f); //(A21 - A11) * (B11 + B12);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_182 = ___f4;
		int32_t L_183 = ___l3;
		NullCheck(L_182);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_184;
		L_184 = (L_182)->GetAt(L_183, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_185 = ___f4;
		int32_t L_186 = ___l3;
		NullCheck(L_185);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_187;
		L_187 = (L_185)->GetAt(L_186, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_188 = ___f4;
		int32_t L_189 = ___l3;
		NullCheck(L_188);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_190;
		L_190 = (L_188)->GetAt(L_189, 7);
		int32_t L_191 = ___l3;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_192 = ___f4;
		Matrix_StrassenMultiplyRun_mD0F1B81D2F5CA793B60A34DC3F9609BD4E4B54EC(L_184, L_187, L_190, ((int32_t)il2cpp_codegen_add(L_191, 1)), L_192, NULL);
		// AminusBintoC(A, h, 0, A, h, h, f[l, 0], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_193 = ___A0;
		int32_t L_194 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_195 = ___A0;
		int32_t L_196 = V_1;
		int32_t L_197 = V_1;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_198 = ___f4;
		int32_t L_199 = ___l3;
		NullCheck(L_198);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_200;
		L_200 = (L_198)->GetAt(L_199, 0);
		int32_t L_201 = V_1;
		Matrix_AminusBintoC_m453DD7074D66DDD68DACD9AB55052751A9B2ADFB(L_193, L_194, 0, L_195, L_196, L_197, L_200, L_201, NULL);
		// AplusBintoC(B, 0, h, B, h, h, f[l, 1], h);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_202 = ___B1;
		int32_t L_203 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_204 = ___B1;
		int32_t L_205 = V_1;
		int32_t L_206 = V_1;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_207 = ___f4;
		int32_t L_208 = ___l3;
		NullCheck(L_207);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_209;
		L_209 = (L_207)->GetAt(L_208, 1);
		int32_t L_210 = V_1;
		Matrix_AplusBintoC_m81098A42B9884070EBA6CA38341428AE87FD1801(L_202, 0, L_203, L_204, L_205, L_206, L_209, L_210, NULL);
		// StrassenMultiplyRun(f[l, 0], f[l, 1], f[l, 1 + 7], l + 1, f); // (A12 - A22) * (B21 + B22);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_211 = ___f4;
		int32_t L_212 = ___l3;
		NullCheck(L_211);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_213;
		L_213 = (L_211)->GetAt(L_212, 0);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_214 = ___f4;
		int32_t L_215 = ___l3;
		NullCheck(L_214);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_216;
		L_216 = (L_214)->GetAt(L_215, 1);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_217 = ___f4;
		int32_t L_218 = ___l3;
		NullCheck(L_217);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_219;
		L_219 = (L_217)->GetAt(L_218, 8);
		int32_t L_220 = ___l3;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_221 = ___f4;
		Matrix_StrassenMultiplyRun_mD0F1B81D2F5CA793B60A34DC3F9609BD4E4B54EC(L_213, L_216, L_219, ((int32_t)il2cpp_codegen_add(L_220, 1)), L_221, NULL);
		// for (int i = 0; i < h; i++)          // rows
		V_12 = 0;
		goto IL_0365;
	}

IL_02f3:
	{
		// for (int j = 0; j < h; j++)     // cols
		V_13 = 0;
		goto IL_0354;
	}

IL_02f8:
	{
		// C[i, j] = f[l, 1 + 1][i, j] + f[l, 1 + 4][i, j] - f[l, 1 + 5][i, j] + f[l, 1 + 7][i, j];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_222 = ___C2;
		int32_t L_223 = V_12;
		int32_t L_224 = V_13;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_225 = ___f4;
		int32_t L_226 = ___l3;
		NullCheck(L_225);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_227;
		L_227 = (L_225)->GetAt(L_226, 2);
		int32_t L_228 = V_12;
		int32_t L_229 = V_13;
		NullCheck(L_227);
		double L_230;
		L_230 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_227, L_228, L_229, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_231 = ___f4;
		int32_t L_232 = ___l3;
		NullCheck(L_231);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_233;
		L_233 = (L_231)->GetAt(L_232, 5);
		int32_t L_234 = V_12;
		int32_t L_235 = V_13;
		NullCheck(L_233);
		double L_236;
		L_236 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_233, L_234, L_235, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_237 = ___f4;
		int32_t L_238 = ___l3;
		NullCheck(L_237);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_239;
		L_239 = (L_237)->GetAt(L_238, 6);
		int32_t L_240 = V_12;
		int32_t L_241 = V_13;
		NullCheck(L_239);
		double L_242;
		L_242 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_239, L_240, L_241, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_243 = ___f4;
		int32_t L_244 = ___l3;
		NullCheck(L_243);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_245;
		L_245 = (L_243)->GetAt(L_244, 8);
		int32_t L_246 = V_12;
		int32_t L_247 = V_13;
		NullCheck(L_245);
		double L_248;
		L_248 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_245, L_246, L_247, NULL);
		NullCheck(L_222);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_222, L_223, L_224, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_add(L_230, L_236)), L_242)), L_248)), NULL);
		// for (int j = 0; j < h; j++)     // cols
		int32_t L_249 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_249, 1));
	}

IL_0354:
	{
		// for (int j = 0; j < h; j++)     // cols
		int32_t L_250 = V_13;
		int32_t L_251 = V_1;
		V_14 = (bool)((((int32_t)L_250) < ((int32_t)L_251))? 1 : 0);
		bool L_252 = V_14;
		if (L_252)
		{
			goto IL_02f8;
		}
	}
	{
		// for (int i = 0; i < h; i++)          // rows
		int32_t L_253 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_253, 1));
	}

IL_0365:
	{
		// for (int i = 0; i < h; i++)          // rows
		int32_t L_254 = V_12;
		int32_t L_255 = V_1;
		V_15 = (bool)((((int32_t)L_254) < ((int32_t)L_255))? 1 : 0);
		bool L_256 = V_15;
		if (L_256)
		{
			goto IL_02f3;
		}
	}
	{
		// for (int i = 0; i < h; i++)          // rows
		V_16 = 0;
		goto IL_03c5;
	}

IL_0375:
	{
		// for (int j = h; j < size; j++)     // cols
		int32_t L_257 = V_1;
		V_17 = L_257;
		goto IL_03b4;
	}

IL_037a:
	{
		// C[i, j] = f[l, 1 + 3][i, j - h] + f[l, 1 + 5][i, j - h];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_258 = ___C2;
		int32_t L_259 = V_16;
		int32_t L_260 = V_17;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_261 = ___f4;
		int32_t L_262 = ___l3;
		NullCheck(L_261);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_263;
		L_263 = (L_261)->GetAt(L_262, 4);
		int32_t L_264 = V_16;
		int32_t L_265 = V_17;
		int32_t L_266 = V_1;
		NullCheck(L_263);
		double L_267;
		L_267 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_263, L_264, ((int32_t)il2cpp_codegen_subtract(L_265, L_266)), NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_268 = ___f4;
		int32_t L_269 = ___l3;
		NullCheck(L_268);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_270;
		L_270 = (L_268)->GetAt(L_269, 6);
		int32_t L_271 = V_16;
		int32_t L_272 = V_17;
		int32_t L_273 = V_1;
		NullCheck(L_270);
		double L_274;
		L_274 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_270, L_271, ((int32_t)il2cpp_codegen_subtract(L_272, L_273)), NULL);
		NullCheck(L_258);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_258, L_259, L_260, ((double)il2cpp_codegen_add(L_267, L_274)), NULL);
		// for (int j = h; j < size; j++)     // cols
		int32_t L_275 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_275, 1));
	}

IL_03b4:
	{
		// for (int j = h; j < size; j++)     // cols
		int32_t L_276 = V_17;
		int32_t L_277 = V_0;
		V_18 = (bool)((((int32_t)L_276) < ((int32_t)L_277))? 1 : 0);
		bool L_278 = V_18;
		if (L_278)
		{
			goto IL_037a;
		}
	}
	{
		// for (int i = 0; i < h; i++)          // rows
		int32_t L_279 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_279, 1));
	}

IL_03c5:
	{
		// for (int i = 0; i < h; i++)          // rows
		int32_t L_280 = V_16;
		int32_t L_281 = V_1;
		V_19 = (bool)((((int32_t)L_280) < ((int32_t)L_281))? 1 : 0);
		bool L_282 = V_19;
		if (L_282)
		{
			goto IL_0375;
		}
	}
	{
		// for (int i = h; i < size; i++)          // rows
		int32_t L_283 = V_1;
		V_20 = L_283;
		goto IL_0425;
	}

IL_03d5:
	{
		// for (int j = 0; j < h; j++)     // cols
		V_21 = 0;
		goto IL_0414;
	}

IL_03da:
	{
		// C[i, j] = f[l, 1 + 2][i - h, j] + f[l, 1 + 4][i - h, j];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_284 = ___C2;
		int32_t L_285 = V_20;
		int32_t L_286 = V_21;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_287 = ___f4;
		int32_t L_288 = ___l3;
		NullCheck(L_287);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_289;
		L_289 = (L_287)->GetAt(L_288, 3);
		int32_t L_290 = V_20;
		int32_t L_291 = V_1;
		int32_t L_292 = V_21;
		NullCheck(L_289);
		double L_293;
		L_293 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_289, ((int32_t)il2cpp_codegen_subtract(L_290, L_291)), L_292, NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_294 = ___f4;
		int32_t L_295 = ___l3;
		NullCheck(L_294);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_296;
		L_296 = (L_294)->GetAt(L_295, 5);
		int32_t L_297 = V_20;
		int32_t L_298 = V_1;
		int32_t L_299 = V_21;
		NullCheck(L_296);
		double L_300;
		L_300 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_296, ((int32_t)il2cpp_codegen_subtract(L_297, L_298)), L_299, NULL);
		NullCheck(L_284);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_284, L_285, L_286, ((double)il2cpp_codegen_add(L_293, L_300)), NULL);
		// for (int j = 0; j < h; j++)     // cols
		int32_t L_301 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_301, 1));
	}

IL_0414:
	{
		// for (int j = 0; j < h; j++)     // cols
		int32_t L_302 = V_21;
		int32_t L_303 = V_1;
		V_22 = (bool)((((int32_t)L_302) < ((int32_t)L_303))? 1 : 0);
		bool L_304 = V_22;
		if (L_304)
		{
			goto IL_03da;
		}
	}
	{
		// for (int i = h; i < size; i++)          // rows
		int32_t L_305 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_305, 1));
	}

IL_0425:
	{
		// for (int i = h; i < size; i++)          // rows
		int32_t L_306 = V_20;
		int32_t L_307 = V_0;
		V_23 = (bool)((((int32_t)L_306) < ((int32_t)L_307))? 1 : 0);
		bool L_308 = V_23;
		if (L_308)
		{
			goto IL_03d5;
		}
	}
	{
		// for (int i = h; i < size; i++)          // rows
		int32_t L_309 = V_1;
		V_24 = L_309;
		goto IL_04ba;
	}

IL_0438:
	{
		// for (int j = h; j < size; j++)     // cols
		int32_t L_310 = V_1;
		V_25 = L_310;
		goto IL_04a9;
	}

IL_043d:
	{
		// C[i, j] = f[l, 1 + 1][i - h, j - h] - f[l, 1 + 2][i - h, j - h] + f[l, 1 + 3][i - h, j - h] + f[l, 1 + 6][i - h, j - h];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_311 = ___C2;
		int32_t L_312 = V_24;
		int32_t L_313 = V_25;
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_314 = ___f4;
		int32_t L_315 = ___l3;
		NullCheck(L_314);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_316;
		L_316 = (L_314)->GetAt(L_315, 2);
		int32_t L_317 = V_24;
		int32_t L_318 = V_1;
		int32_t L_319 = V_25;
		int32_t L_320 = V_1;
		NullCheck(L_316);
		double L_321;
		L_321 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_316, ((int32_t)il2cpp_codegen_subtract(L_317, L_318)), ((int32_t)il2cpp_codegen_subtract(L_319, L_320)), NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_322 = ___f4;
		int32_t L_323 = ___l3;
		NullCheck(L_322);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_324;
		L_324 = (L_322)->GetAt(L_323, 3);
		int32_t L_325 = V_24;
		int32_t L_326 = V_1;
		int32_t L_327 = V_25;
		int32_t L_328 = V_1;
		NullCheck(L_324);
		double L_329;
		L_329 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_324, ((int32_t)il2cpp_codegen_subtract(L_325, L_326)), ((int32_t)il2cpp_codegen_subtract(L_327, L_328)), NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_330 = ___f4;
		int32_t L_331 = ___l3;
		NullCheck(L_330);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_332;
		L_332 = (L_330)->GetAt(L_331, 4);
		int32_t L_333 = V_24;
		int32_t L_334 = V_1;
		int32_t L_335 = V_25;
		int32_t L_336 = V_1;
		NullCheck(L_332);
		double L_337;
		L_337 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_332, ((int32_t)il2cpp_codegen_subtract(L_333, L_334)), ((int32_t)il2cpp_codegen_subtract(L_335, L_336)), NULL);
		MatrixU5BU2CU5D_tE368CA56DC03051AD633A721C48FDBF87AC2C167* L_338 = ___f4;
		int32_t L_339 = ___l3;
		NullCheck(L_338);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_340;
		L_340 = (L_338)->GetAt(L_339, 7);
		int32_t L_341 = V_24;
		int32_t L_342 = V_1;
		int32_t L_343 = V_25;
		int32_t L_344 = V_1;
		NullCheck(L_340);
		double L_345;
		L_345 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_340, ((int32_t)il2cpp_codegen_subtract(L_341, L_342)), ((int32_t)il2cpp_codegen_subtract(L_343, L_344)), NULL);
		NullCheck(L_311);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_311, L_312, L_313, ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(((double)il2cpp_codegen_subtract(L_321, L_329)), L_337)), L_345)), NULL);
		// for (int j = h; j < size; j++)     // cols
		int32_t L_346 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add(L_346, 1));
	}

IL_04a9:
	{
		// for (int j = h; j < size; j++)     // cols
		int32_t L_347 = V_25;
		int32_t L_348 = V_0;
		V_26 = (bool)((((int32_t)L_347) < ((int32_t)L_348))? 1 : 0);
		bool L_349 = V_26;
		if (L_349)
		{
			goto IL_043d;
		}
	}
	{
		// for (int i = h; i < size; i++)          // rows
		int32_t L_350 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add(L_350, 1));
	}

IL_04ba:
	{
		// for (int i = h; i < size; i++)          // rows
		int32_t L_351 = V_24;
		int32_t L_352 = V_0;
		V_27 = (bool)((((int32_t)L_351) < ((int32_t)L_352))? 1 : 0);
		bool L_353 = V_27;
		if (L_353)
		{
			goto IL_0438;
		}
	}

IL_04c8:
	{
		// }
		return;
	}
}
// Kalman.Matrix Kalman.Matrix::StupidMultiply(Kalman.Matrix,Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_StupidMultiply_m3DDDF480DBF164A4D1AC60CE8944B3A8C406B728 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___m10, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___m21, const RuntimeMethod* method) 
{
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_11 = NULL;
	{
		// if (m1.cols != m2.rows) throw new MException("Wrong dimensions of matrix!");
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___m10;
		NullCheck(L_0);
		int32_t L_1 = L_0->___cols_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2 = ___m21;
		NullCheck(L_2);
		int32_t L_3 = L_2->___rows_0;
		V_1 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		// if (m1.cols != m2.rows) throw new MException("Wrong dimensions of matrix!");
		MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542* L_5 = (MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		MException__ctor_m0556F1CA0ADCAF46291549D0C7B600EFEFE2F7AE(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral55FFBF296F9AD0C93EE305CF1FB2E82961ABEE63)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Matrix_StupidMultiply_m3DDDF480DBF164A4D1AC60CE8944B3A8C406B728_RuntimeMethod_var)));
	}

IL_0021:
	{
		// Matrix result = ZeroMatrix(m1.rows, m2.cols);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_6 = ___m10;
		NullCheck(L_6);
		int32_t L_7 = L_6->___rows_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_8 = ___m21;
		NullCheck(L_8);
		int32_t L_9 = L_8->___cols_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_10;
		L_10 = Matrix_ZeroMatrix_m6BBCA3371B60EB5354B49113A8A38110F65EF545(L_7, L_9, NULL);
		V_0 = L_10;
		// for (int i = 0; i < result.rows; i++)
		V_2 = 0;
		goto IL_00a1;
	}

IL_0037:
	{
		// for (int j = 0; j < result.cols; j++)
		V_3 = 0;
		goto IL_008e;
	}

IL_003b:
	{
		// for (int k = 0; k < m1.cols; k++)
		V_4 = 0;
		goto IL_007a;
	}

IL_0040:
	{
		// result[i, j] += m1[i, k] * m2[k, j];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_11 = V_0;
		V_5 = L_11;
		int32_t L_12 = V_2;
		V_6 = L_12;
		int32_t L_13 = V_3;
		V_7 = L_13;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_14 = V_5;
		int32_t L_15 = V_6;
		int32_t L_16 = V_7;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_17 = V_5;
		int32_t L_18 = V_6;
		int32_t L_19 = V_7;
		NullCheck(L_17);
		double L_20;
		L_20 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_17, L_18, L_19, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_21 = ___m10;
		int32_t L_22 = V_2;
		int32_t L_23 = V_4;
		NullCheck(L_21);
		double L_24;
		L_24 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_21, L_22, L_23, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_25 = ___m21;
		int32_t L_26 = V_4;
		int32_t L_27 = V_3;
		NullCheck(L_25);
		double L_28;
		L_28 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_25, L_26, L_27, NULL);
		NullCheck(L_14);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_14, L_15, L_16, ((double)il2cpp_codegen_add(L_20, ((double)il2cpp_codegen_multiply(L_24, L_28)))), NULL);
		// for (int k = 0; k < m1.cols; k++)
		int32_t L_29 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_007a:
	{
		// for (int k = 0; k < m1.cols; k++)
		int32_t L_30 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_31 = ___m10;
		NullCheck(L_31);
		int32_t L_32 = L_31->___cols_1;
		V_8 = (bool)((((int32_t)L_30) < ((int32_t)L_32))? 1 : 0);
		bool L_33 = V_8;
		if (L_33)
		{
			goto IL_0040;
		}
	}
	{
		// for (int j = 0; j < result.cols; j++)
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_008e:
	{
		// for (int j = 0; j < result.cols; j++)
		int32_t L_35 = V_3;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_36 = V_0;
		NullCheck(L_36);
		int32_t L_37 = L_36->___cols_1;
		V_9 = (bool)((((int32_t)L_35) < ((int32_t)L_37))? 1 : 0);
		bool L_38 = V_9;
		if (L_38)
		{
			goto IL_003b;
		}
	}
	{
		// for (int i = 0; i < result.rows; i++)
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00a1:
	{
		// for (int i = 0; i < result.rows; i++)
		int32_t L_40 = V_2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_41 = V_0;
		NullCheck(L_41);
		int32_t L_42 = L_41->___rows_0;
		V_10 = (bool)((((int32_t)L_40) < ((int32_t)L_42))? 1 : 0);
		bool L_43 = V_10;
		if (L_43)
		{
			goto IL_0037;
		}
	}
	{
		// return result;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_44 = V_0;
		V_11 = L_44;
		goto IL_00b5;
	}

IL_00b5:
	{
		// }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_45 = V_11;
		return L_45;
	}
}
// Kalman.Matrix Kalman.Matrix::Multiply(System.Double,Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Multiply_mA5DB7A95DD6EB6B39866B8E4E35F93EE4635F541 (double ___n0, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___m1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_5 = NULL;
	{
		// Matrix r = new Matrix(m.rows, m.cols);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___m1;
		NullCheck(L_0);
		int32_t L_1 = L_0->___rows_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2 = ___m1;
		NullCheck(L_2);
		int32_t L_3 = L_2->___cols_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_4 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_4, L_1, L_3, NULL);
		V_0 = L_4;
		// for (int i = 0; i < m.rows; i++)
		V_1 = 0;
		goto IL_0043;
	}

IL_0017:
	{
		// for (int j = 0; j < m.cols; j++)
		V_2 = 0;
		goto IL_0032;
	}

IL_001b:
	{
		// r[i, j] = m[i, j] * n;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = V_2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_8 = ___m1;
		int32_t L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_8);
		double L_11;
		L_11 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_8, L_9, L_10, NULL);
		double L_12 = ___n0;
		NullCheck(L_5);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_5, L_6, L_7, ((double)il2cpp_codegen_multiply(L_11, L_12)), NULL);
		// for (int j = 0; j < m.cols; j++)
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0032:
	{
		// for (int j = 0; j < m.cols; j++)
		int32_t L_14 = V_2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_15 = ___m1;
		NullCheck(L_15);
		int32_t L_16 = L_15->___cols_1;
		V_3 = (bool)((((int32_t)L_14) < ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_3;
		if (L_17)
		{
			goto IL_001b;
		}
	}
	{
		// for (int i = 0; i < m.rows; i++)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0043:
	{
		// for (int i = 0; i < m.rows; i++)
		int32_t L_19 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_20 = ___m1;
		NullCheck(L_20);
		int32_t L_21 = L_20->___rows_0;
		V_4 = (bool)((((int32_t)L_19) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_4;
		if (L_22)
		{
			goto IL_0017;
		}
	}
	{
		// return r;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_23 = V_0;
		V_5 = L_23;
		goto IL_0057;
	}

IL_0057:
	{
		// }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_24 = V_5;
		return L_24;
	}
}
// Kalman.Matrix Kalman.Matrix::Add(Kalman.Matrix,Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_Add_mB0D4D8F5C6CD1ED872C18E9836BF94054EE3F595 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___m10, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___m21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_6 = NULL;
	int32_t G_B3_0 = 0;
	{
		// if (m1.rows != m2.rows || m1.cols != m2.cols) throw new MException("Matrices must have the same dimensions!");
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___m10;
		NullCheck(L_0);
		int32_t L_1 = L_0->___rows_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2 = ___m21;
		NullCheck(L_2);
		int32_t L_3 = L_2->___rows_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0022;
		}
	}
	{
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_4 = ___m10;
		NullCheck(L_4);
		int32_t L_5 = L_4->___cols_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_6 = ___m21;
		NullCheck(L_6);
		int32_t L_7 = L_6->___cols_1;
		G_B3_0 = ((((int32_t)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 1;
	}

IL_0023:
	{
		V_1 = (bool)G_B3_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0032;
		}
	}
	{
		// if (m1.rows != m2.rows || m1.cols != m2.cols) throw new MException("Matrices must have the same dimensions!");
		MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542* L_9 = (MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		MException__ctor_m0556F1CA0ADCAF46291549D0C7B600EFEFE2F7AE(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE9BF62289830E1D9ADF97C8F47896329C4AAC679)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Matrix_Add_mB0D4D8F5C6CD1ED872C18E9836BF94054EE3F595_RuntimeMethod_var)));
	}

IL_0032:
	{
		// Matrix r = new Matrix(m1.rows, m1.cols);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_10 = ___m10;
		NullCheck(L_10);
		int32_t L_11 = L_10->___rows_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_12 = ___m10;
		NullCheck(L_12);
		int32_t L_13 = L_12->___cols_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_14 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Matrix__ctor_mC02869728A1B79F413AF9F196601BA8FCFF540C2(L_14, L_11, L_13, NULL);
		V_0 = L_14;
		// for (int i = 0; i < r.rows; i++)
		V_2 = 0;
		goto IL_007d;
	}

IL_0048:
	{
		// for (int j = 0; j < r.cols; j++)
		V_3 = 0;
		goto IL_006a;
	}

IL_004c:
	{
		// r[i, j] = m1[i, j] + m2[i, j];
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_15 = V_0;
		int32_t L_16 = V_2;
		int32_t L_17 = V_3;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_18 = ___m10;
		int32_t L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_18);
		double L_21;
		L_21 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_18, L_19, L_20, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_22 = ___m21;
		int32_t L_23 = V_2;
		int32_t L_24 = V_3;
		NullCheck(L_22);
		double L_25;
		L_25 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_22, L_23, L_24, NULL);
		NullCheck(L_15);
		Matrix_set_Item_m60A161768841496A64D9CC6A3B3EF295686D2E41(L_15, L_16, L_17, ((double)il2cpp_codegen_add(L_21, L_25)), NULL);
		// for (int j = 0; j < r.cols; j++)
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_006a:
	{
		// for (int j = 0; j < r.cols; j++)
		int32_t L_27 = V_3;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = L_28->___cols_1;
		V_4 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_4;
		if (L_30)
		{
			goto IL_004c;
		}
	}
	{
		// for (int i = 0; i < r.rows; i++)
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_007d:
	{
		// for (int i = 0; i < r.rows; i++)
		int32_t L_32 = V_2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34 = L_33->___rows_0;
		V_5 = (bool)((((int32_t)L_32) < ((int32_t)L_34))? 1 : 0);
		bool L_35 = V_5;
		if (L_35)
		{
			goto IL_0048;
		}
	}
	{
		// return r;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_36 = V_0;
		V_6 = L_36;
		goto IL_0091;
	}

IL_0091:
	{
		// }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_37 = V_6;
		return L_37;
	}
}
// System.String Kalman.Matrix::NormalizeMatrixString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Matrix_NormalizeMatrixString_m322779B699DF0D70EAFD235FA33F4FC3086149FD (String_t* ___matStr0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2699ED079CDDEF57B48E372A3D47B5F3C372F78C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE95A453653E06120FE9E373182096BDCF774C95B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		goto IL_0015;
	}

IL_0003:
	{
		// matStr = matStr.Replace("  ", " ");
		String_t* L_0 = ___matStr0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_0, _stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		___matStr0 = L_1;
	}

IL_0015:
	{
		// while (matStr.IndexOf("  ") != -1)
		String_t* L_2 = ___matStr0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_2, _stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA, NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_0003;
		}
	}
	{
		// matStr = matStr.Replace(" \r\n", "\r\n");
		String_t* L_5 = ___matStr0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_5, _stringLiteralE95A453653E06120FE9E373182096BDCF774C95B, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, NULL);
		___matStr0 = L_6;
		// matStr = matStr.Replace("\r\n ", "\r\n");
		String_t* L_7 = ___matStr0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_7, _stringLiteral2699ED079CDDEF57B48E372A3D47B5F3C372F78C, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, NULL);
		___matStr0 = L_8;
		// matStr = matStr.Replace("\r\n", "|");
		String_t* L_9 = ___matStr0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_9, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, NULL);
		___matStr0 = L_10;
		goto IL_0073;
	}

IL_0062:
	{
		// matStr = matStr.Substring(0, matStr.Length - 1);
		String_t* L_11 = ___matStr0;
		String_t* L_12 = ___matStr0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		NullCheck(L_11);
		String_t* L_14;
		L_14 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_11, 0, ((int32_t)il2cpp_codegen_subtract(L_13, 1)), NULL);
		___matStr0 = L_14;
	}

IL_0073:
	{
		// while (matStr.LastIndexOf("|") == (matStr.Length - 1))
		String_t* L_15 = ___matStr0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40(L_15, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, NULL);
		String_t* L_17 = ___matStr0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_17, NULL);
		V_1 = (bool)((((int32_t)L_16) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_18, 1))))? 1 : 0);
		bool L_19 = V_1;
		if (L_19)
		{
			goto IL_0062;
		}
	}
	{
		// matStr = matStr.Replace("|", "\r\n");
		String_t* L_20 = ___matStr0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_20, _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, _stringLiteral4133EC0E83E4C69B6C0094B47BFD1408F0C8D4C5, NULL);
		___matStr0 = L_21;
		// return matStr;
		String_t* L_22 = ___matStr0;
		V_2 = L_22;
		goto IL_00a2;
	}

IL_00a2:
	{
		// }
		String_t* L_23 = V_2;
		return L_23;
	}
}
// Kalman.Matrix Kalman.Matrix::CreateVector(System.Double[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_CreateVector_mCA71E4A86EE3ED7DD6C381D7431CF78536C20E27 (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___values0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_3 = NULL;
	{
		// var matrix = new double[values.Length, 1];
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_0 = ___values0;
		NullCheck(L_0);
		il2cpp_array_size_t L_2[] = { (il2cpp_array_size_t)((int32_t)(((RuntimeArray*)L_0)->max_length)), (il2cpp_array_size_t)1 };
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_1 = (DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE*)GenArrayNew(DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var, L_2);
		V_0 = L_1;
		// for (int i=0; i<values.Length; i++) {
		V_1 = 0;
		goto IL_0020;
	}

IL_000f:
	{
		// matrix [i, 0] = values [i];
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_3 = V_0;
		int32_t L_4 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = ___values0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		double L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_3);
		(L_3)->SetAt(L_4, 0, L_8);
		// for (int i=0; i<values.Length; i++) {
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0020:
	{
		// for (int i=0; i<values.Length; i++) {
		int32_t L_10 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_11 = ___values0;
		NullCheck(L_11);
		V_2 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))? 1 : 0);
		bool L_12 = V_2;
		if (L_12)
		{
			goto IL_000f;
		}
	}
	{
		// return new Matrix (matrix);
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_13 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_14 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Matrix__ctor_m366E3755C05163084E4353ED1C19FD23E0BE631C(L_14, L_13, NULL);
		V_3 = L_14;
		goto IL_0033;
	}

IL_0033:
	{
		// }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_15 = V_3;
		return L_15;
	}
}
// Kalman.Matrix Kalman.Matrix::op_UnaryNegation(Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_op_UnaryNegation_m9E7C14CDF6E8B076965E50D838BD229D8FA33084 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___m0, const RuntimeMethod* method) 
{
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	{
		// { return Matrix.Multiply(-1, m); }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___m0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_1;
		L_1 = Matrix_Multiply_mA5DB7A95DD6EB6B39866B8E4E35F93EE4635F541((-1.0), L_0, NULL);
		V_0 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		// { return Matrix.Multiply(-1, m); }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2 = V_0;
		return L_2;
	}
}
// Kalman.Matrix Kalman.Matrix::op_Addition(Kalman.Matrix,Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_op_Addition_mD90B614C9A7E630A430AA78DC7BE9D1C5E202B75 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___m10, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___m21, const RuntimeMethod* method) 
{
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	{
		// { return Matrix.Add(m1, m2); }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___m10;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_1 = ___m21;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2;
		L_2 = Matrix_Add_mB0D4D8F5C6CD1ED872C18E9836BF94054EE3F595(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		// { return Matrix.Add(m1, m2); }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = V_0;
		return L_3;
	}
}
// Kalman.Matrix Kalman.Matrix::op_Subtraction(Kalman.Matrix,Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_op_Subtraction_m683DEECECA23B898510BF60F093B26ED43F020FF (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___m10, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___m21, const RuntimeMethod* method) 
{
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	{
		// { return Matrix.Add(m1, -m2); }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___m10;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_1 = ___m21;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2;
		L_2 = Matrix_op_UnaryNegation_m9E7C14CDF6E8B076965E50D838BD229D8FA33084(L_1, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3;
		L_3 = Matrix_Add_mB0D4D8F5C6CD1ED872C18E9836BF94054EE3F595(L_0, L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// { return Matrix.Add(m1, -m2); }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_4 = V_0;
		return L_4;
	}
}
// Kalman.Matrix Kalman.Matrix::op_Multiply(Kalman.Matrix,Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_op_Multiply_m288732D926A25D27D12CB8DC1DDAC5795130B120 (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___m10, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___m21, const RuntimeMethod* method) 
{
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	{
		// { return Matrix.StrassenMultiply(m1, m2); }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___m10;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_1 = ___m21;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2;
		L_2 = Matrix_StrassenMultiply_mF1E0A67B73689DFB4AEAC6628A10C5CECD19C5D0(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		// { return Matrix.StrassenMultiply(m1, m2); }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = V_0;
		return L_3;
	}
}
// Kalman.Matrix Kalman.Matrix::op_Multiply(System.Double,Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* Matrix_op_Multiply_mDC217EA1B665B3F7206439FE46C98EDA193C1C50 (double ___n0, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___m1, const RuntimeMethod* method) 
{
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	{
		// { return Matrix.Multiply(n, m); }
		double L_0 = ___n0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_1 = ___m1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2;
		L_2 = Matrix_Multiply_mA5DB7A95DD6EB6B39866B8E4E35F93EE4635F541(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_000b;
	}

IL_000b:
	{
		// { return Matrix.Multiply(n, m); }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3 = V_0;
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
// System.Void Kalman.MException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MException__ctor_m0556F1CA0ADCAF46291549D0C7B600EFEFE2F7AE (MException_tFE9428E1E6A2C6122F686A00EA72373C3D264542* __this, String_t* ___Message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(Message)
		String_t* L_0 = ___Message0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// { }
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
// System.Void Kalman.MatrixKalmanWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixKalmanWrapper__ctor_m5AC2C11E38EE853DB1C3137AC1FA86D5FBA2A6AE (MatrixKalmanWrapper_tF94E7579C7B7B49D2F3807C34F54E386A407AC6A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121____72473E86EC72C67F0C0916F0FA376DFE686E5582D389BC7100EF5E70835FB565_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121____82A445B12C8D35172C6D379C6467AF5B0C30F4811319E182486674AAF2E61610_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_0 = NULL;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_1 = NULL;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_2 = NULL;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_3 = NULL;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_4 = NULL;
	Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* V_5 = NULL;
	{
		// public MatrixKalmanWrapper ()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// var f = new Matrix (new[,] {
		//     {1.0,    2.5},
		//     {0,        1.0}
		// });
		il2cpp_array_size_t L_1[] = { (il2cpp_array_size_t)2, (il2cpp_array_size_t)2 };
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_0 = (DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE*)GenArrayNew(DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var, L_1);
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_2 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121____82A445B12C8D35172C6D379C6467AF5B0C30F4811319E182486674AAF2E61610_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_2, L_3, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_4 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Matrix__ctor_m366E3755C05163084E4353ED1C19FD23E0BE631C(L_4, L_2, NULL);
		V_0 = L_4;
		// var b = new Matrix (new[,] {{0.0}, {0}});
		il2cpp_array_size_t L_6[] = { (il2cpp_array_size_t)2, (il2cpp_array_size_t)1 };
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_5 = (DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE*)GenArrayNew(DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var, L_6);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_7 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Matrix__ctor_m366E3755C05163084E4353ED1C19FD23E0BE631C(L_7, L_5, NULL);
		V_1 = L_7;
		// var u = new Matrix (new[,] {{0.0}, {0}});
		il2cpp_array_size_t L_9[] = { (il2cpp_array_size_t)2, (il2cpp_array_size_t)1 };
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_8 = (DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE*)GenArrayNew(DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var, L_9);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_10 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Matrix__ctor_m366E3755C05163084E4353ED1C19FD23E0BE631C(L_10, L_8, NULL);
		V_2 = L_10;
		// var r = Matrix.CreateVector (10);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_11 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)1);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_12 = L_11;
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)(10.0));
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_13;
		L_13 = Matrix_CreateVector_mCA71E4A86EE3ED7DD6C381D7431CF78536C20E27(L_12, NULL);
		V_3 = L_13;
		// var q = new Matrix (new[,] {
		//     {0.01,    0.4},
		//     {0.1,    0.02}
		// });
		il2cpp_array_size_t L_15[] = { (il2cpp_array_size_t)2, (il2cpp_array_size_t)2 };
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_14 = (DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE*)GenArrayNew(DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var, L_15);
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_16 = L_14;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_17 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tDF76FE2002958A97429065AC028E0A0C70442121____72473E86EC72C67F0C0916F0FA376DFE686E5582D389BC7100EF5E70835FB565_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE10C3436BA703E4D9D41B3F8F365E4C34F9926EF((RuntimeArray*)L_16, L_17, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_18 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Matrix__ctor_m366E3755C05163084E4353ED1C19FD23E0BE631C(L_18, L_16, NULL);
		V_4 = L_18;
		// var h = new Matrix (new[,] {{1.0 , 0}});
		il2cpp_array_size_t L_20[] = { (il2cpp_array_size_t)1, (il2cpp_array_size_t)2 };
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_19 = (DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE*)GenArrayNew(DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var, L_20);
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_21 = L_19;
		NullCheck(L_21);
		(L_21)->SetAt(0, 0, (1.0));
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_22 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Matrix__ctor_m366E3755C05163084E4353ED1C19FD23E0BE631C(L_22, L_21, NULL);
		V_5 = L_22;
		// kX = makeKalmanFilter (f, b, u, q, h, r);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_23 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_24 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_25 = V_2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_26 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_27 = V_5;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_28 = V_3;
		KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* L_29;
		L_29 = MatrixKalmanWrapper_makeKalmanFilter_m4A1834C03FD2F6854B5262744DF086AF64F3C0DD(__this, L_23, L_24, L_25, L_26, L_27, L_28, NULL);
		__this->___kX_0 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kX_0), (void*)L_29);
		// kY = makeKalmanFilter (f, b, u, q, h, r);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_30 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_31 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_32 = V_2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_33 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_34 = V_5;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_35 = V_3;
		KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* L_36;
		L_36 = MatrixKalmanWrapper_makeKalmanFilter_m4A1834C03FD2F6854B5262744DF086AF64F3C0DD(__this, L_30, L_31, L_32, L_33, L_34, L_35, NULL);
		__this->___kY_1 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kY_1), (void*)L_36);
		// kZ = makeKalmanFilter (f, b, u, q, h, r);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_37 = V_0;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_38 = V_1;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_39 = V_2;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_40 = V_4;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_41 = V_5;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_42 = V_3;
		KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* L_43;
		L_43 = MatrixKalmanWrapper_makeKalmanFilter_m4A1834C03FD2F6854B5262744DF086AF64F3C0DD(__this, L_37, L_38, L_39, L_40, L_41, L_42, NULL);
		__this->___kZ_2 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kZ_2), (void*)L_43);
		// }
		return;
	}
}
// UnityEngine.Vector3 Kalman.MatrixKalmanWrapper::Update(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MatrixKalmanWrapper_Update_mAA122AC563932FA94043D6AF901CFDE1C210DBD8 (MatrixKalmanWrapper_tF94E7579C7B7B49D2F3807C34F54E386A407AC6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// kX.Correct (new Matrix (new double[,] {{current.x}}));
		KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* L_0 = __this->___kX_0;
		il2cpp_array_size_t L_2[] = { (il2cpp_array_size_t)1, (il2cpp_array_size_t)1 };
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_1 = (DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE*)GenArrayNew(DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var, L_2);
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_3 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___current0;
		float L_5 = L_4.___x_2;
		NullCheck(L_3);
		(L_3)->SetAt(0, 0, ((double)L_5));
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_6 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Matrix__ctor_m366E3755C05163084E4353ED1C19FD23E0BE631C(L_6, L_3, NULL);
		NullCheck(L_0);
		KalmanFilter_Correct_m97F05523C1E559A23231370927B931B8F30A4521(L_0, L_6, NULL);
		// kY.Correct (new Matrix (new double[,] {{current.y}}));
		KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* L_7 = __this->___kY_1;
		il2cpp_array_size_t L_9[] = { (il2cpp_array_size_t)1, (il2cpp_array_size_t)1 };
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_8 = (DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE*)GenArrayNew(DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var, L_9);
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_10 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___current0;
		float L_12 = L_11.___y_3;
		NullCheck(L_10);
		(L_10)->SetAt(0, 0, ((double)L_12));
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_13 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Matrix__ctor_m366E3755C05163084E4353ED1C19FD23E0BE631C(L_13, L_10, NULL);
		NullCheck(L_7);
		KalmanFilter_Correct_m97F05523C1E559A23231370927B931B8F30A4521(L_7, L_13, NULL);
		// kZ.Correct (new Matrix (new double[,] {{current.z}}));
		KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* L_14 = __this->___kZ_2;
		il2cpp_array_size_t L_16[] = { (il2cpp_array_size_t)1, (il2cpp_array_size_t)1 };
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_15 = (DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE*)GenArrayNew(DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var, L_16);
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_17 = L_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___current0;
		float L_19 = L_18.___z_4;
		NullCheck(L_17);
		(L_17)->SetAt(0, 0, ((double)L_19));
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_20 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Matrix__ctor_m366E3755C05163084E4353ED1C19FD23E0BE631C(L_20, L_17, NULL);
		NullCheck(L_14);
		KalmanFilter_Correct_m97F05523C1E559A23231370927B931B8F30A4521(L_14, L_20, NULL);
		// Vector3 filtered = new Vector3 (
		//     (float)kX.State [0, 0],
		//     (float)kY.State [0, 0],
		//     (float)kZ.State [0, 0]
		// );
		KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* L_21 = __this->___kX_0;
		NullCheck(L_21);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_22;
		L_22 = KalmanFilter_get_State_m6C8D3346A43F94140CA6E900453BB409AB6FBA66_inline(L_21, NULL);
		NullCheck(L_22);
		double L_23;
		L_23 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_22, 0, 0, NULL);
		KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* L_24 = __this->___kY_1;
		NullCheck(L_24);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_25;
		L_25 = KalmanFilter_get_State_m6C8D3346A43F94140CA6E900453BB409AB6FBA66_inline(L_24, NULL);
		NullCheck(L_25);
		double L_26;
		L_26 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_25, 0, 0, NULL);
		KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* L_27 = __this->___kZ_2;
		NullCheck(L_27);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_28;
		L_28 = KalmanFilter_get_State_m6C8D3346A43F94140CA6E900453BB409AB6FBA66_inline(L_27, NULL);
		NullCheck(L_28);
		double L_29;
		L_29 = Matrix_get_Item_m3DF5597B7BE07BED04B8AA6192404058D5E5B78B(L_28, 0, 0, NULL);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), ((float)L_23), ((float)L_26), ((float)L_29), NULL);
		// return filtered;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_0;
		V_1 = L_30;
		goto IL_00ba;
	}

IL_00ba:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_1;
		return L_31;
	}
}
// System.Void Kalman.MatrixKalmanWrapper::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixKalmanWrapper_Dispose_m6DB4CCB5BEC1D4BC0596702B3790FA99785A69DA (MatrixKalmanWrapper_tF94E7579C7B7B49D2F3807C34F54E386A407AC6A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// Kalman.KalmanFilter Kalman.MatrixKalmanWrapper::makeKalmanFilter(Kalman.Matrix,Kalman.Matrix,Kalman.Matrix,Kalman.Matrix,Kalman.Matrix,Kalman.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* MatrixKalmanWrapper_makeKalmanFilter_m4A1834C03FD2F6854B5262744DF086AF64F3C0DD (MatrixKalmanWrapper_tF94E7579C7B7B49D2F3807C34F54E386A407AC6A* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___f0, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___b1, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___u2, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___q3, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___h4, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___r5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* V_0 = NULL;
	KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* V_1 = NULL;
	{
		// var filter = new KalmanFilter (
		//     f.Duplicate (),
		//     b.Duplicate (),
		//     u.Duplicate (),
		//     q.Duplicate (),
		//     h.Duplicate (),
		//     r.Duplicate ()
		// );
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___f0;
		NullCheck(L_0);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_1;
		L_1 = Matrix_Duplicate_m305F18F019ED96527662E14DFCFFA0427423F331(L_0, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_2 = ___b1;
		NullCheck(L_2);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_3;
		L_3 = Matrix_Duplicate_m305F18F019ED96527662E14DFCFFA0427423F331(L_2, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_4 = ___u2;
		NullCheck(L_4);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_5;
		L_5 = Matrix_Duplicate_m305F18F019ED96527662E14DFCFFA0427423F331(L_4, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_6 = ___q3;
		NullCheck(L_6);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_7;
		L_7 = Matrix_Duplicate_m305F18F019ED96527662E14DFCFFA0427423F331(L_6, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_8 = ___h4;
		NullCheck(L_8);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_9;
		L_9 = Matrix_Duplicate_m305F18F019ED96527662E14DFCFFA0427423F331(L_8, NULL);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_10 = ___r5;
		NullCheck(L_10);
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_11;
		L_11 = Matrix_Duplicate_m305F18F019ED96527662E14DFCFFA0427423F331(L_10, NULL);
		KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* L_12 = (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08*)il2cpp_codegen_object_new(KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		KalmanFilter__ctor_m6397508B622E93654047F43CC83FCCBFBB022143(L_12, L_1, L_3, L_5, L_7, L_9, L_11, NULL);
		V_0 = L_12;
		// filter.SetState (
		//     Matrix.CreateVector (500, 0),
		//     new Matrix (new [,] {{10.0, 0}, {0, 5.0}})
		// );
		KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* L_13 = V_0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_14 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)2);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_15 = L_14;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)(500.0));
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_16;
		L_16 = Matrix_CreateVector_mCA71E4A86EE3ED7DD6C381D7431CF78536C20E27(L_15, NULL);
		il2cpp_array_size_t L_18[] = { (il2cpp_array_size_t)2, (il2cpp_array_size_t)2 };
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_17 = (DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE*)GenArrayNew(DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE_il2cpp_TypeInfo_var, L_18);
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_19 = L_17;
		NullCheck(L_19);
		(L_19)->SetAt(0, 0, (10.0));
		DoubleU5BU2CU5D_tA10EAF4C451E6EBC345A8881EBB9EF9441D01AAE* L_20 = L_19;
		NullCheck(L_20);
		(L_20)->SetAt(1, 1, (5.0));
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_21 = (Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8*)il2cpp_codegen_object_new(Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Matrix__ctor_m366E3755C05163084E4353ED1C19FD23E0BE631C(L_21, L_20, NULL);
		NullCheck(L_13);
		KalmanFilter_SetState_mC9CB95E7667857E29CF369D24FF284A80859E609(L_13, L_16, L_21, NULL);
		// return filter;
		KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* L_22 = V_0;
		V_1 = L_22;
		goto IL_007e;
	}

IL_007e:
	{
		// }
		KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* L_23 = V_1;
		return L_23;
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
// System.Void Kalman.SimpleKalmanWrapper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleKalmanWrapper__ctor_m0F2722508A0DC9143E7155BE512B6552B22DD270 (SimpleKalmanWrapper_tBFCE3906E1DA21E6C396BC39D28FFA741EC77092* __this, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	{
		// public SimpleKalmanWrapper ()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// double q = 0.4;
		V_0 = (0.40000000000000002);
		// double r = 10;
		V_1 = (10.0);
		// double f = 1.0;
		V_2 = (1.0);
		// double h = 1.0;
		V_3 = (1.0);
		// kX = makeKalmanFilter (q, r, f, h);
		double L_0 = V_0;
		double L_1 = V_1;
		double L_2 = V_2;
		double L_3 = V_3;
		KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* L_4;
		L_4 = SimpleKalmanWrapper_makeKalmanFilter_m1E4F0F8408CBA7CAF324CD479C83C64585BC770B(__this, L_0, L_1, L_2, L_3, NULL);
		__this->___kX_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kX_0), (void*)L_4);
		// kY = makeKalmanFilter (q, r, f, h);
		double L_5 = V_0;
		double L_6 = V_1;
		double L_7 = V_2;
		double L_8 = V_3;
		KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* L_9;
		L_9 = SimpleKalmanWrapper_makeKalmanFilter_m1E4F0F8408CBA7CAF324CD479C83C64585BC770B(__this, L_5, L_6, L_7, L_8, NULL);
		__this->___kY_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kY_1), (void*)L_9);
		// kZ = makeKalmanFilter (q, r, f, h);
		double L_10 = V_0;
		double L_11 = V_1;
		double L_12 = V_2;
		double L_13 = V_3;
		KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* L_14;
		L_14 = SimpleKalmanWrapper_makeKalmanFilter_m1E4F0F8408CBA7CAF324CD479C83C64585BC770B(__this, L_10, L_11, L_12, L_13, NULL);
		__this->___kZ_2 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___kZ_2), (void*)L_14);
		// }
		return;
	}
}
// UnityEngine.Vector3 Kalman.SimpleKalmanWrapper::Update(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SimpleKalmanWrapper_Update_mD9BEA1898E94FAA80E1E0647242AD462752AFC58 (SimpleKalmanWrapper_tBFCE3906E1DA21E6C396BC39D28FFA741EC77092* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// kX.Correct (current.x);
		KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* L_0 = __this->___kX_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___current0;
		float L_2 = L_1.___x_2;
		NullCheck(L_0);
		KalmanFilterSimple1D_Correct_m8F4045B2D0BB1F37CB730C85E65748BD1016D7F3(L_0, ((double)L_2), NULL);
		// kY.Correct (current.y);
		KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* L_3 = __this->___kY_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___current0;
		float L_5 = L_4.___y_3;
		NullCheck(L_3);
		KalmanFilterSimple1D_Correct_m8F4045B2D0BB1F37CB730C85E65748BD1016D7F3(L_3, ((double)L_5), NULL);
		// kZ.Correct (current.z);
		KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* L_6 = __this->___kZ_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___current0;
		float L_8 = L_7.___z_4;
		NullCheck(L_6);
		KalmanFilterSimple1D_Correct_m8F4045B2D0BB1F37CB730C85E65748BD1016D7F3(L_6, ((double)L_8), NULL);
		// Vector3 filtered = new Vector3 (
		//     (float)kX.State,
		//     (float)kY.State,
		//     (float)kZ.State
		// );
		KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* L_9 = __this->___kX_0;
		NullCheck(L_9);
		double L_10;
		L_10 = KalmanFilterSimple1D_get_State_m8D3442FCBD72F9EF9363630036772CA53BFA9A40_inline(L_9, NULL);
		KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* L_11 = __this->___kY_1;
		NullCheck(L_11);
		double L_12;
		L_12 = KalmanFilterSimple1D_get_State_m8D3442FCBD72F9EF9363630036772CA53BFA9A40_inline(L_11, NULL);
		KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* L_13 = __this->___kZ_2;
		NullCheck(L_13);
		double L_14;
		L_14 = KalmanFilterSimple1D_get_State_m8D3442FCBD72F9EF9363630036772CA53BFA9A40_inline(L_13, NULL);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), ((float)L_10), ((float)L_12), ((float)L_14), NULL);
		// return filtered;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		V_1 = L_15;
		goto IL_0069;
	}

IL_0069:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_1;
		return L_16;
	}
}
// System.Void Kalman.SimpleKalmanWrapper::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleKalmanWrapper_Dispose_mC65323CB75C68549D8C28E8A29484D1483AF1C3E (SimpleKalmanWrapper_tBFCE3906E1DA21E6C396BC39D28FFA741EC77092* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// Kalman.KalmanFilterSimple1D Kalman.SimpleKalmanWrapper::makeKalmanFilter(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* SimpleKalmanWrapper_makeKalmanFilter_m1E4F0F8408CBA7CAF324CD479C83C64585BC770B (SimpleKalmanWrapper_tBFCE3906E1DA21E6C396BC39D28FFA741EC77092* __this, double ___q0, double ___r1, double ___f2, double ___h3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* V_0 = NULL;
	KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* V_1 = NULL;
	{
		// var filter = new KalmanFilterSimple1D (q,r,f,h);
		double L_0 = ___q0;
		double L_1 = ___r1;
		double L_2 = ___f2;
		double L_3 = ___h3;
		KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* L_4 = (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081*)il2cpp_codegen_object_new(KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		KalmanFilterSimple1D__ctor_mE09182E4735A65F75ED40200D0F88E24FB799844(L_4, L_0, L_1, L_2, L_3, NULL);
		V_0 = L_4;
		// filter.SetState (500,5.0);
		KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* L_5 = V_0;
		NullCheck(L_5);
		KalmanFilterSimple1D_SetState_mDDB70DC34D518D9FE771A64558B3E7E06EB5A5E0(L_5, (500.0), (5.0), NULL);
		// return filter;
		KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* L_6 = V_0;
		V_1 = L_6;
		goto IL_0029;
	}

IL_0029:
	{
		// }
		KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* L_7 = V_1;
		return L_7;
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
// System.Void Kalman.Simulate.GuassianRandom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GuassianRandom__ctor_mC3854DEC0F692AA305FC3D1E758EF02ED182C74B (GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* G_B2_0 = NULL;
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* G_B1_0 = NULL;
	{
		// public GuassianRandom()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _random = _random ?? new Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = ((GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_StaticFields*)il2cpp_codegen_static_fields_for(GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_il2cpp_TypeInfo_var))->____random_2;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0016;
		}
	}
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_2 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_2, NULL);
		G_B2_0 = L_2;
	}

IL_0016:
	{
		((GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_StaticFields*)il2cpp_codegen_static_fields_for(GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_il2cpp_TypeInfo_var))->____random_2 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_StaticFields*)il2cpp_codegen_static_fields_for(GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_il2cpp_TypeInfo_var))->____random_2), (void*)G_B2_0);
		// }
		return;
	}
}
// System.Double Kalman.Simulate.GuassianRandom::NextGuassian(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double GuassianRandom_NextGuassian_m11F57E6798715A882E0FA5461141D9A4FA87BCCB (GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF* __this, double ___mu0, double ___sigma1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	bool V_4 = false;
	bool V_5 = false;
	double V_6 = 0.0;
	bool V_7 = false;
	int32_t G_B7_0 = 0;
	{
		// if (sigma <= 0)
		double L_0 = ___sigma1;
		V_4 = (bool)((((int32_t)((!(((double)L_0) <= ((double)(0.0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("sigma", "Must be greater than zero.");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3CAD39A7B5AEC0B348B5507B59FE1BABC7DA241)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5359BA9CB4634179A1429F9FF1EC49B6A347800A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GuassianRandom_NextGuassian_m11F57E6798715A882E0FA5461141D9A4FA87BCCB_RuntimeMethod_var)));
	}

IL_0026:
	{
		// if (_hasDeviate)
		bool L_3 = __this->____hasDeviate_0;
		V_5 = L_3;
		bool L_4 = V_5;
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// _hasDeviate = false;
		__this->____hasDeviate_0 = (bool)0;
		// return _storedDeviate * sigma + mu;
		double L_5 = __this->____storedDeviate_1;
		double L_6 = ___sigma1;
		double L_7 = ___mu0;
		V_6 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_5, L_6)), L_7));
		goto IL_00e7;
	}

IL_004b:
	{
		// v1 = 2 * _random.NextDouble() - 1;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_8 = ((GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_StaticFields*)il2cpp_codegen_static_fields_for(GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_il2cpp_TypeInfo_var))->____random_2;
		NullCheck(L_8);
		double L_9;
		L_9 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_8);
		V_0 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply((2.0), L_9)), (1.0)));
		// v2 = 2 * _random.NextDouble() - 1;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_10 = ((GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_StaticFields*)il2cpp_codegen_static_fields_for(GuassianRandom_t3EE6916373D18F8F9D7C0B675D8E9DEA44846EDF_il2cpp_TypeInfo_var))->____random_2;
		NullCheck(L_10);
		double L_11;
		L_11 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_10);
		V_1 = ((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply((2.0), L_11)), (1.0)));
		// rSquared = v1 * v1 + v2 * v2;
		double L_12 = V_0;
		double L_13 = V_0;
		double L_14 = V_1;
		double L_15 = V_1;
		V_2 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(L_12, L_13)), ((double)il2cpp_codegen_multiply(L_14, L_15))));
		// } while (rSquared >= 1 || rSquared == 0);
		double L_16 = V_2;
		if ((((double)L_16) >= ((double)(1.0))))
		{
			goto IL_00ad;
		}
	}
	{
		double L_17 = V_2;
		G_B7_0 = ((((double)L_17) == ((double)(0.0)))? 1 : 0);
		goto IL_00ae;
	}

IL_00ad:
	{
		G_B7_0 = 1;
	}

IL_00ae:
	{
		V_7 = (bool)G_B7_0;
		bool L_18 = V_7;
		if (L_18)
		{
			goto IL_004b;
		}
	}
	{
		// var polar = Math.Sqrt(-2 * Math.Log(rSquared) / rSquared);
		double L_19 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_20;
		L_20 = log(L_19);
		double L_21 = V_2;
		double L_22;
		L_22 = sqrt(((double)(((double)il2cpp_codegen_multiply((-2.0), L_20))/L_21)));
		V_3 = L_22;
		// _storedDeviate = v2 * polar;
		double L_23 = V_1;
		double L_24 = V_3;
		__this->____storedDeviate_1 = ((double)il2cpp_codegen_multiply(L_23, L_24));
		// _hasDeviate = true;
		__this->____hasDeviate_0 = (bool)1;
		// return v1 * polar * sigma + mu;
		double L_25 = V_0;
		double L_26 = V_3;
		double L_27 = ___sigma1;
		double L_28 = ___mu0;
		V_6 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_multiply(L_25, L_26)), L_27)), L_28));
		goto IL_00e7;
	}

IL_00e7:
	{
		// }
		double L_29 = V_6;
		return L_29;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_F_m64A2C6461DA7CFE711F3E175ED1DD21FE5EEE9A5_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) 
{
	{
		// public Matrix F { get; private set; }    // factor of real value to previous real value
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___value0;
		__this->___U3CFU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_B_m714DB9724F4E31B4C22D5952B2CAEA8DEB81120E_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) 
{
	{
		// public Matrix B { get; private set; }    // the control-input model which is applied to the control vector uk;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___value0;
		__this->___U3CBU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_U_m2941B3355FCA5503E38BFC52733CFA6C6087436C_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) 
{
	{
		// public Matrix U { get; private set; }    // the control-input model which is applied to the control vector uk;
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___value0;
		__this->___U3CUU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_Q_mFAADE44780E6D633563749ED52BD7357F30A7977_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) 
{
	{
		// public Matrix Q { get; private set; }    // measurement noise
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___value0;
		__this->___U3CQU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CQU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_H_m9480D0B1AFBEEB4BB7E4175929142A07758914A0_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) 
{
	{
		// public Matrix H { get; private set; }    // factor of measured value to real value
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___value0;
		__this->___U3CHU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_R_mA2ACC4462D2FC181D9B20F806A2EE72E893B50EC_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) 
{
	{
		// public Matrix R { get; private set; }    // environment noise
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___value0;
		__this->___U3CRU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_State_m20E9827CC4145E80FA5BC11511BEA00102CE7268_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) 
{
	{
		// public Matrix State { get; private set; }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___value0;
		__this->___U3CStateU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStateU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_Covariance_m823F46BBE8A9ACB4EF72383ACF8723E7E651BE59_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) 
{
	{
		// public Matrix Covariance { get; private set; }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___value0;
		__this->___U3CCovarianceU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCovarianceU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_F_m096A81E58C90EFAB3E1DF5A6E3B1442018767EA4_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		// public Matrix F { get; private set; }    // factor of real value to previous real value
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CFU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_State_m6C8D3346A43F94140CA6E900453BB409AB6FBA66_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		// public Matrix State { get; private set; }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CStateU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_X0_mDF8569EDA79886E255DEE3E236CBABEBC2EA736F_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) 
{
	{
		// public Matrix X0 { get; private set; }    // predicted state
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___value0;
		__this->___U3CX0U3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CX0U3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_Covariance_m0DBABD6D31F4293196CC327053A847F083B7E672_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		// public Matrix Covariance { get; private set; }
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CCovarianceU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_Q_m3D304029E70BC950C8CC3F5CC5CCD588E5EDF7A0_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		// public Matrix Q { get; private set; }    // measurement noise
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CQU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilter_set_P0_mF6D5507B96E0988F988AEEEE5828A941CA0D3F7B_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* ___value0, const RuntimeMethod* method) 
{
	{
		// public Matrix P0 { get; private set; }    // predicted covariance
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = ___value0;
		__this->___U3CP0U3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CP0U3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_P0_mE2BC2F14CE0BE3934C497A4C6B30EF2EB26FE223_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		// public Matrix P0 { get; private set; }    // predicted covariance
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CP0U3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_H_m7AFB18AB875D036B0EA6C0D8C54EA8CEEB6830A4_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		// public Matrix H { get; private set; }    // factor of measured value to real value
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CHU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_R_m6AA93D761F1F399A4C60C22C09363267672DB8BB_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		// public Matrix R { get; private set; }    // environment noise
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CRU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* KalmanFilter_get_X0_m6525ED71B7ED08C68D5DC7761EC8CE97C826B4B5_inline (KalmanFilter_t87D70E646D02A2386576301AFACB2FAA21503E08* __this, const RuntimeMethod* method) 
{
	{
		// public Matrix X0 { get; private set; }    // predicted state
		Matrix_t1EA726BD161D8C5D8BB77AA81C0BCF09421A34F8* L_0 = __this->___U3CX0U3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_Q_m1DC3CB34B6F0B84895DE72D93F99F646E1670B82_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double Q { get; private set; } // measurement noise
		double L_0 = ___value0;
		__this->___U3CQU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_R_mCFF19948E60888FC1A97923066BABA8556B99726_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double R { get; private set; } // environment noise
		double L_0 = ___value0;
		__this->___U3CRU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_F_mE329B338AE11A23DDF798157DDDF0909A8BB87A1_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double F { get; private set; } // factor of real value to previous real value
		double L_0 = ___value0;
		__this->___U3CFU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_H_mC0BC7397BD0F247678BAB267928FFDCB2755FC27_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double H { get; private set; } // factor of measured value to real value
		double L_0 = ___value0;
		__this->___U3CHU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_State_m1939BDF5E9508479990229AEC371E3ED0D7882B4_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double State { get; private set; }
		double L_0 = ___value0;
		__this->___U3CStateU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_Covariance_mA38C27D2638B949BAC94CA0A74C9ABBA52503CE3_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double Covariance { get; private set; }
		double L_0 = ___value0;
		__this->___U3CCovarianceU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_F_m5C756567DB1FA3617AFDAB3EBBB1E029938BE5C7_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		// public double F { get; private set; } // factor of real value to previous real value
		double L_0 = __this->___U3CFU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_State_m8D3442FCBD72F9EF9363630036772CA53BFA9A40_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		// public double State { get; private set; }
		double L_0 = __this->___U3CStateU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_X0_m03A863C60B036F210E4520E23180BB4EFEA666AB_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double X0 { get; private set; } // predicted state
		double L_0 = ___value0;
		__this->___U3CX0U3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_Covariance_m0748CCCAA3696D67D8409F669EFF607D1CDDF278_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		// public double Covariance { get; private set; }
		double L_0 = __this->___U3CCovarianceU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_Q_m3BC34AB32A26ADC3904A93D66378F4E996D68CB1_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		// public double Q { get; private set; } // measurement noise
		double L_0 = __this->___U3CQU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KalmanFilterSimple1D_set_P0_m3087DC31B2CCF163F73766DF1E786EC2B1580D8B_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, double ___value0, const RuntimeMethod* method) 
{
	{
		// public double P0 { get; private set; } // predicted covariance
		double L_0 = ___value0;
		__this->___U3CP0U3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_H_mE39101C9204E4C8C6F24CFC7C7D00ED0C81FE604_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		// public double H { get; private set; } // factor of measured value to real value
		double L_0 = __this->___U3CHU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_P0_mF6327BFB1907AF17BBCE80FA7CE62D4E17278FD1_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		// public double P0 { get; private set; } // predicted covariance
		double L_0 = __this->___U3CP0U3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_R_m66D845E477AD4F966EB5CEA1F163252CC3650454_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		// public double R { get; private set; } // environment noise
		double L_0 = __this->___U3CRU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KalmanFilterSimple1D_get_X0_mCFD4303E43B8F6EFA141E3411D5E30DD5D5C9638_inline (KalmanFilterSimple1D_t5418D6B3103A9A2FDB7AEDD6E85904B17CBD5081* __this, const RuntimeMethod* method) 
{
	{
		// public double X0 { get; private set; } // predicted state
		double L_0 = __this->___U3CX0U3Ek__BackingField_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
