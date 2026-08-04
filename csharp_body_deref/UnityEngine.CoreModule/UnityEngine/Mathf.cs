// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Mathf
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000121")]
[Il2CppEagerStaticClassConstruction]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/PerlinNoise.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/ColorSpaceConversion.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/FloatConversion.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Utilities/BitUtility.h")]
public struct Mathf
{
	[Token(Token = "0x40004F1")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float Epsilon;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600084B")]
	[Address(RVA = "0x4DEC770", Offset = "0x4DEC770", VA = "0x4DEC770")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern int ClosestPowerOfTwo(int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600084C")]
	[Address(RVA = "0x4DD8C40", Offset = "0x4DD8C40", VA = "0x4DD8C40")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool IsPowerOfTwo(int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600084D")]
	[Address(RVA = "0x4DEC7A0", Offset = "0x4DEC7A0", VA = "0x4DEC7A0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern int NextPowerOfTwo(int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600084E")]
	[Address(RVA = "0x4DE5630", Offset = "0x4DE5630", VA = "0x4DE5630")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern float GammaToLinearSpace(float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600084F")]
	[Address(RVA = "0x4DE5740", Offset = "0x4DE5740", VA = "0x4DE5740")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern float LinearToGammaSpace(float value);

	[Token(Token = "0x6000850")]
	[Address(RVA = "0x4DEC7D0", Offset = "0x4DEC7D0", VA = "0x4DEC7D0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static Color CorrelatedColorTemperatureToRGB(float kelvin)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000851")]
	[Address(RVA = "0x4DEC870", Offset = "0x4DEC870", VA = "0x4DEC870")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern ushort FloatToHalf(float val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000852")]
	[Address(RVA = "0x4DEC8B0", Offset = "0x4DEC8B0", VA = "0x4DEC8B0")]
	[UnityEngine.Bindings.FreeFunction("PerlinNoise::NoiseNormalized", IsThreadSafe = true)]
	public static extern float PerlinNoise(float x, float y);

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000853")]
	[Address(RVA = "0x4DEC8F0", Offset = "0x4DEC8F0", VA = "0x4DEC8F0")]
	public static float Sin(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000854")]
	[Address(RVA = "0x4DEC950", Offset = "0x4DEC950", VA = "0x4DEC950")]
	public static float Cos(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000855")]
	[Address(RVA = "0x4DEC9B0", Offset = "0x4DEC9B0", VA = "0x4DEC9B0")]
	public static float Tan(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000856")]
	[Address(RVA = "0x4DECA10", Offset = "0x4DECA10", VA = "0x4DECA10")]
	public static float Asin(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000857")]
	[Address(RVA = "0x4DECA70", Offset = "0x4DECA70", VA = "0x4DECA70")]
	public static float Acos(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000858")]
	[Address(RVA = "0x4DECAD0", Offset = "0x4DECAD0", VA = "0x4DECAD0")]
	public static float Atan(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000859")]
	[Address(RVA = "0x4DECB30", Offset = "0x4DECB30", VA = "0x4DECB30")]
	public static float Atan2(float y, float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600085A")]
	[Address(RVA = "0x4DECBB0", Offset = "0x4DECBB0", VA = "0x4DECBB0")]
	public static float Sqrt(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600085B")]
	[Address(RVA = "0x4DECC30", Offset = "0x4DECC30", VA = "0x4DECC30")]
	public static float Abs(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600085C")]
	[Address(RVA = "0x4DECCB0", Offset = "0x4DECCB0", VA = "0x4DECCB0")]
	public static int Abs(int value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600085D")]
	[Address(RVA = "0x4DECCF0", Offset = "0x4DECCF0", VA = "0x4DECCF0")]
	public static float Min(float a, float b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600085E")]
	[Address(RVA = "0x4DECD00", Offset = "0x4DECD00", VA = "0x4DECD00")]
	public static int Min(int a, int b)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600085F")]
	[Address(RVA = "0x4DECD10", Offset = "0x4DECD10", VA = "0x4DECD10")]
	public static float Max(float a, float b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000860")]
	[Address(RVA = "0x4DECD20", Offset = "0x4DECD20", VA = "0x4DECD20")]
	public static float Max(params float[] values)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000861")]
	[Address(RVA = "0x4DECDF0", Offset = "0x4DECDF0", VA = "0x4DECDF0")]
	public static int Max(int a, int b)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000862")]
	[Address(RVA = "0x4DECE00", Offset = "0x4DECE00", VA = "0x4DECE00")]
	public static float Pow(float f, float p)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000863")]
	[Address(RVA = "0x4DECE80", Offset = "0x4DECE80", VA = "0x4DECE80")]
	public static float Exp(float power)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000864")]
	[Address(RVA = "0x4DECEE0", Offset = "0x4DECEE0", VA = "0x4DECEE0")]
	public static float Log(float f, float p)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000865")]
	[Address(RVA = "0x4DECF60", Offset = "0x4DECF60", VA = "0x4DECF60")]
	public static float Log(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000866")]
	[Address(RVA = "0x4DECFC0", Offset = "0x4DECFC0", VA = "0x4DECFC0")]
	public static float Log10(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000867")]
	[Address(RVA = "0x4DED020", Offset = "0x4DED020", VA = "0x4DED020")]
	public static float Ceil(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000868")]
	[Address(RVA = "0x4DED090", Offset = "0x4DED090", VA = "0x4DED090")]
	public static float Floor(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000869")]
	[Address(RVA = "0x4DED100", Offset = "0x4DED100", VA = "0x4DED100")]
	public static float Round(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600086A")]
	[Address(RVA = "0x4DED200", Offset = "0x4DED200", VA = "0x4DED200")]
	public static int CeilToInt(float f)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600086B")]
	[Address(RVA = "0x4DED280", Offset = "0x4DED280", VA = "0x4DED280")]
	public static int FloorToInt(float f)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600086C")]
	[Address(RVA = "0x4DED300", Offset = "0x4DED300", VA = "0x4DED300")]
	public static int RoundToInt(float f)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600086D")]
	[Address(RVA = "0x4DED400", Offset = "0x4DED400", VA = "0x4DED400")]
	public static float Sign(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600086E")]
	[Address(RVA = "0x4DED420", Offset = "0x4DED420", VA = "0x4DED420")]
	public static float Clamp(float value, float min, float max)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600086F")]
	[Address(RVA = "0x4DED440", Offset = "0x4DED440", VA = "0x4DED440")]
	public static int Clamp(int value, int min, int max)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000870")]
	[Address(RVA = "0x4DED450", Offset = "0x4DED450", VA = "0x4DED450")]
	public static float Clamp01(float value)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000871")]
	[Address(RVA = "0x4DED470", Offset = "0x4DED470", VA = "0x4DED470")]
	public static float Lerp(float a, float b, float t)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000872")]
	[Address(RVA = "0x4DED4A0", Offset = "0x4DED4A0", VA = "0x4DED4A0")]
	public static float LerpUnclamped(float a, float b, float t)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000873")]
	[Address(RVA = "0x4DED4B0", Offset = "0x4DED4B0", VA = "0x4DED4B0")]
	public static float LerpAngle(float a, float b, float t)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000874")]
	[Address(RVA = "0x4DED550", Offset = "0x4DED550", VA = "0x4DED550")]
	public static float MoveTowards(float current, float target, float maxDelta)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000875")]
	[Address(RVA = "0x4DED590", Offset = "0x4DED590", VA = "0x4DED590")]
	public static float MoveTowardsAngle(float current, float target, float maxDelta)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000876")]
	[Address(RVA = "0x4DED680", Offset = "0x4DED680", VA = "0x4DED680")]
	public static float SmoothStep(float from, float to, float t)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000877")]
	[Address(RVA = "0x4DED6E0", Offset = "0x4DED6E0", VA = "0x4DED6E0")]
	public static bool Approximately(float a, float b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000878")]
	[Address(RVA = "0x4DED770", Offset = "0x4DED770", VA = "0x4DED770")]
	public static float SmoothDamp(float current, float target, ref float currentVelocity, float smoothTime, [DefaultValue("Mathf.Infinity")] float maxSpeed, [DefaultValue("Time.deltaTime")] float deltaTime)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000879")]
	[Address(RVA = "0x4DED870", Offset = "0x4DED870", VA = "0x4DED870")]
	public static float Repeat(float t, float length)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600087A")]
	[Address(RVA = "0x4DED8B0", Offset = "0x4DED8B0", VA = "0x4DED8B0")]
	public static float PingPong(float t, float length)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600087B")]
	[Address(RVA = "0x4DED910", Offset = "0x4DED910", VA = "0x4DED910")]
	public static float InverseLerp(float a, float b, float value)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600087C")]
	[Address(RVA = "0x4DED940", Offset = "0x4DED940", VA = "0x4DED940")]
	public static float DeltaAngle(float current, float target)
	{
		return default(float);
	}

	[Token(Token = "0x600087D")]
	[Address(RVA = "0x4DED9B0", Offset = "0x4DED9B0", VA = "0x4DED9B0")]
	internal static float ClampToFloat(double value)
	{
		return default(float);
	}

	[Token(Token = "0x600087E")]
	[Address(RVA = "0x4DEDA10", Offset = "0x4DEDA10", VA = "0x4DEDA10")]
	internal static int ClampToInt(long value)
	{
		return default(int);
	}

	[Token(Token = "0x600087F")]
	[Address(RVA = "0x4DEDA30", Offset = "0x4DEDA30", VA = "0x4DEDA30")]
	internal static uint ClampToUInt(long value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000880")]
	[Address(RVA = "0x4DEDA50", Offset = "0x4DEDA50", VA = "0x4DEDA50")]
	internal static int GetNumberOfDecimalsForMinimumDifference(double minDifference)
	{
		return default(int);
	}

	[Token(Token = "0x6000881")]
	[Address(RVA = "0x4DEDAD0", Offset = "0x4DEDAD0", VA = "0x4DEDAD0")]
	internal static double RoundBasedOnMinimumDifference(double valueToRound, double minDifference)
	{
		return default(double);
	}

	[Token(Token = "0x6000882")]
	[Address(RVA = "0x4DEDBC0", Offset = "0x4DEDBC0", VA = "0x4DEDBC0")]
	internal static double DiscardLeastSignificantDecimal(double v)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000884")]
	[Address(RVA = "0x4DEC820", Offset = "0x4DEC820", VA = "0x4DEC820")]
	private static extern void CorrelatedColorTemperatureToRGB_Injected(float kelvin, out Color ret);
}
