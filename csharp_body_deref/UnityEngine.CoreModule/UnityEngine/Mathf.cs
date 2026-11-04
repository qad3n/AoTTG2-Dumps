// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Mathf
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;
using UnityEngine.Bindings;
using UnityEngine.Internal;

namespace UnityEngine;

[Token(Token = "0x2000147")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/ColorSpaceConversion.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/PerlinNoise.h")]
[Il2CppEagerStaticClassConstruction]
[UnityEngine.Bindings.NativeHeader("NativeKernel/Math/FloatConversion.h")]
public struct Mathf
{
	[Token(Token = "0x4000559")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float Epsilon;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x2F04CC0", Offset = "0x2F032C0", VA = "0x182F04CC0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern float GammaToLinearSpace(float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x2F04F20", Offset = "0x2F03520", VA = "0x182F04F20")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern float LinearToGammaSpace(float value);

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x2F049D0", Offset = "0x2F02FD0", VA = "0x182F049D0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static Color CorrelatedColorTemperatureToRGB(float kelvin)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x2F04BC0", Offset = "0x2F031C0", VA = "0x182F04BC0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern ushort FloatToHalf(float val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x2F04D80", Offset = "0x2F03380", VA = "0x182F04D80")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern float HalfToFloat(ushort val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x2F052B0", Offset = "0x2F038B0", VA = "0x182F052B0")]
	[UnityEngine.Bindings.FreeFunction("PerlinNoise::NoiseNormalized", IsThreadSafe = true)]
	public static extern float PerlinNoise(float x, float y);

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x2F055D0", Offset = "0x2F03BD0", VA = "0x182F055D0")]
	public static float Sin(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x2F04A20", Offset = "0x2F03020", VA = "0x182F04A20")]
	public static float Cos(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B28")]
	[Address(RVA = "0x2F05860", Offset = "0x2F03E60", VA = "0x182F05860")]
	public static float Tan(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B29")]
	[Address(RVA = "0x2F04630", Offset = "0x2F02C30", VA = "0x182F04630")]
	public static float Asin(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B2A")]
	[Address(RVA = "0x2F04540", Offset = "0x2F02B40", VA = "0x182F04540")]
	public static float Acos(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B2B")]
	[Address(RVA = "0x2F04700", Offset = "0x2F02D00", VA = "0x182F04700")]
	public static float Atan(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B2C")]
	[Address(RVA = "0x2F04690", Offset = "0x2F02C90", VA = "0x182F04690")]
	public static float Atan2(float y, float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B2D")]
	[Address(RVA = "0x2F057E0", Offset = "0x2F03DE0", VA = "0x182F057E0")]
	public static float Sqrt(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x2F04490", Offset = "0x2F02A90", VA = "0x182F04490")]
	public static float Abs(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x2F044F0", Offset = "0x2F02AF0", VA = "0x182F044F0")]
	public static int Abs(int value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x2F05110", Offset = "0x2F03710", VA = "0x182F05110")]
	public static float Min(float a, float b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x669FE0", Offset = "0x6685E0", VA = "0x180669FE0")]
	public static int Min(int a, int b)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x2F05100", Offset = "0x2F03700", VA = "0x182F05100")]
	public static float Max(float a, float b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x2F05090", Offset = "0x2F03690", VA = "0x182F05090")]
	public static float Max(params float[] values)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B34")]
	[Address(RVA = "0x2C78CD0", Offset = "0x2C772D0", VA = "0x182C78CD0")]
	public static int Max(int a, int b)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B35")]
	[Address(RVA = "0x2F05380", Offset = "0x2F03980", VA = "0x182F05380")]
	public static float Pow(float f, float p)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x2F04B60", Offset = "0x2F03160", VA = "0x182F04B60")]
	public static float Exp(float power)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x2F04FC0", Offset = "0x2F035C0", VA = "0x182F04FC0")]
	public static float Log(float f, float p)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x2F05030", Offset = "0x2F03630", VA = "0x182F05030")]
	public static float Log(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x2F04F60", Offset = "0x2F03560", VA = "0x182F04F60")]
	public static float Log10(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x2F047C0", Offset = "0x2F02DC0", VA = "0x182F047C0")]
	public static float Ceil(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x2F04C60", Offset = "0x2F03260", VA = "0x182F04C60")]
	public static float Floor(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x2F05550", Offset = "0x2F03B50", VA = "0x182F05550")]
	public static float Round(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x2F04760", Offset = "0x2F02D60", VA = "0x182F04760")]
	public static int CeilToInt(float f)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B3E")]
	[Address(RVA = "0x2F04C00", Offset = "0x2F03200", VA = "0x182F04C00")]
	public static int FloorToInt(float f)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B3F")]
	[Address(RVA = "0x2F054F0", Offset = "0x2F03AF0", VA = "0x182F054F0")]
	public static int RoundToInt(float f)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B40")]
	[Address(RVA = "0x2F055B0", Offset = "0x2F03BB0", VA = "0x182F055B0")]
	public static float Sign(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x2F04910", Offset = "0x2F02F10", VA = "0x182F04910")]
	public static float Clamp(float value, float min, float max)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x2F048F0", Offset = "0x2F02EF0", VA = "0x182F048F0")]
	public static int Clamp(int value, int min, int max)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B43")]
	[Address(RVA = "0x2F04820", Offset = "0x2F02E20", VA = "0x182F04820")]
	public static float Clamp01(float value)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x2F04EE0", Offset = "0x2F034E0", VA = "0x182F04EE0")]
	public static float Lerp(float a, float b, float t)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B45")]
	[Address(RVA = "0x2F04EC0", Offset = "0x2F034C0", VA = "0x182F04EC0")]
	public static float LerpUnclamped(float a, float b, float t)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x2F04E10", Offset = "0x2F03410", VA = "0x182F04E10")]
	public static float LerpAngle(float a, float b, float t)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x2F05230", Offset = "0x2F03830", VA = "0x182F05230")]
	public static float MoveTowards(float current, float target, float maxDelta)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x2F05120", Offset = "0x2F03720", VA = "0x182F05120")]
	public static float MoveTowardsAngle(float current, float target, float maxDelta)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B49")]
	[Address(RVA = "0x2F05780", Offset = "0x2F03D80", VA = "0x182F05780")]
	public static float SmoothStep(float from, float to, float t)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B4A")]
	[Address(RVA = "0x2F045A0", Offset = "0x2F02BA0", VA = "0x182F045A0")]
	public static bool Approximately(float a, float b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x2F05630", Offset = "0x2F03C30", VA = "0x182F05630")]
	public static float SmoothDamp(float current, float target, ref float currentVelocity, float smoothTime, [DefaultValue("Mathf.Infinity")] float maxSpeed, [DefaultValue("Time.deltaTime")] float deltaTime)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x582600", Offset = "0x580C00", VA = "0x180582600")]
	public static float Repeat(float t, float length)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x2F05300", Offset = "0x2F03900", VA = "0x182F05300")]
	public static float PingPong(float t, float length)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x2F04DC0", Offset = "0x2F033C0", VA = "0x182F04DC0")]
	public static float InverseLerp(float a, float b, float value)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x208CFE0", Offset = "0x208B5E0", VA = "0x18208CFE0")]
	public static float DeltaAngle(float current, float target)
	{
		return default(float);
	}

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x2F04840", Offset = "0x2F02E40", VA = "0x182F04840")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static float ClampToFloat(double value)
	{
		return default(float);
	}

	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x2F048A0", Offset = "0x2F02EA0", VA = "0x182F048A0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "UnityEditor.UIBuilderModule" })]
	internal static int ClampToInt(long value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x2F048D0", Offset = "0x2F02ED0", VA = "0x182F048D0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static uint ClampToUInt(long value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000B53")]
	[Address(RVA = "0x2F04D00", Offset = "0x2F03300", VA = "0x182F04D00")]
	internal static int GetNumberOfDecimalsForMinimumDifference(double minDifference)
	{
		return default(int);
	}

	[Token(Token = "0x6000B54")]
	[Address(RVA = "0x2F053F0", Offset = "0x2F039F0", VA = "0x182F053F0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static double RoundBasedOnMinimumDifference(double valueToRound, double minDifference)
	{
		return default(double);
	}

	[Token(Token = "0x6000B55")]
	[Address(RVA = "0x2F04A80", Offset = "0x2F03080", VA = "0x182F04A80")]
	internal static double DiscardLeastSignificantDecimal(double v)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x2F05280", Offset = "0x2F03880", VA = "0x182F05280")]
	public static int NextPowerOfTwo(int value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x2F04930", Offset = "0x2F02F30", VA = "0x182F04930")]
	public static int ClosestPowerOfTwo(int value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B58")]
	[Address(RVA = "0x2F04E00", Offset = "0x2F03400", VA = "0x182F04E00")]
	public static bool IsPowerOfTwo(int value)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x2F04980", Offset = "0x2F02F80", VA = "0x182F04980")]
	private static extern void CorrelatedColorTemperatureToRGB_Injected(float kelvin, out Color ret);
}
