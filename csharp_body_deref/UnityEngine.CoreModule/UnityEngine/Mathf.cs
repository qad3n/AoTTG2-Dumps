using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;
using UnityEngine.Bindings;
using UnityEngine.Internal;

namespace UnityEngine;

[Token(Token = "0x200011E")]
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
	[Token(Token = "0x6000849")]
	[Address(RVA = "0x4AC4E40", Offset = "0x4AC4E40", VA = "0x4AC4E40")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern int ClosestPowerOfTwo(int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600084A")]
	[Address(RVA = "0x4AB1310", Offset = "0x4AB1310", VA = "0x4AB1310")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern bool IsPowerOfTwo(int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600084B")]
	[Address(RVA = "0x4AC4E70", Offset = "0x4AC4E70", VA = "0x4AC4E70")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern int NextPowerOfTwo(int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600084C")]
	[Address(RVA = "0x4ABDD00", Offset = "0x4ABDD00", VA = "0x4ABDD00")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern float GammaToLinearSpace(float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600084D")]
	[Address(RVA = "0x4ABDE10", Offset = "0x4ABDE10", VA = "0x4ABDE10")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern float LinearToGammaSpace(float value);

	[Token(Token = "0x600084E")]
	[Address(RVA = "0x4AC4EA0", Offset = "0x4AC4EA0", VA = "0x4AC4EA0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static Color CorrelatedColorTemperatureToRGB(float kelvin)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600084F")]
	[Address(RVA = "0x4AC4F40", Offset = "0x4AC4F40", VA = "0x4AC4F40")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern ushort FloatToHalf(float val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000850")]
	[Address(RVA = "0x4AC4F80", Offset = "0x4AC4F80", VA = "0x4AC4F80")]
	[UnityEngine.Bindings.FreeFunction("PerlinNoise::NoiseNormalized", IsThreadSafe = true)]
	public static extern float PerlinNoise(float x, float y);

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000851")]
	[Address(RVA = "0x4AC4FC0", Offset = "0x4AC4FC0", VA = "0x4AC4FC0")]
	public static float Sin(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000852")]
	[Address(RVA = "0x4AC5020", Offset = "0x4AC5020", VA = "0x4AC5020")]
	public static float Cos(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000853")]
	[Address(RVA = "0x4AC5080", Offset = "0x4AC5080", VA = "0x4AC5080")]
	public static float Tan(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000854")]
	[Address(RVA = "0x4AC50E0", Offset = "0x4AC50E0", VA = "0x4AC50E0")]
	public static float Asin(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000855")]
	[Address(RVA = "0x4AC5140", Offset = "0x4AC5140", VA = "0x4AC5140")]
	public static float Acos(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000856")]
	[Address(RVA = "0x4AC51A0", Offset = "0x4AC51A0", VA = "0x4AC51A0")]
	public static float Atan(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000857")]
	[Address(RVA = "0x4AC5200", Offset = "0x4AC5200", VA = "0x4AC5200")]
	public static float Atan2(float y, float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000858")]
	[Address(RVA = "0x4AC5280", Offset = "0x4AC5280", VA = "0x4AC5280")]
	public static float Sqrt(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000859")]
	[Address(RVA = "0x4AC5300", Offset = "0x4AC5300", VA = "0x4AC5300")]
	public static float Abs(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600085A")]
	[Address(RVA = "0x4AC5380", Offset = "0x4AC5380", VA = "0x4AC5380")]
	public static int Abs(int value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600085B")]
	[Address(RVA = "0x4AC53C0", Offset = "0x4AC53C0", VA = "0x4AC53C0")]
	public static float Min(float a, float b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600085C")]
	[Address(RVA = "0x4AC53D0", Offset = "0x4AC53D0", VA = "0x4AC53D0")]
	public static int Min(int a, int b)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600085D")]
	[Address(RVA = "0x4AC53E0", Offset = "0x4AC53E0", VA = "0x4AC53E0")]
	public static float Max(float a, float b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600085E")]
	[Address(RVA = "0x4AC53F0", Offset = "0x4AC53F0", VA = "0x4AC53F0")]
	public static float Max(params float[] values)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600085F")]
	[Address(RVA = "0x4AC54C0", Offset = "0x4AC54C0", VA = "0x4AC54C0")]
	public static int Max(int a, int b)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000860")]
	[Address(RVA = "0x4AC54D0", Offset = "0x4AC54D0", VA = "0x4AC54D0")]
	public static float Pow(float f, float p)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000861")]
	[Address(RVA = "0x4AC5550", Offset = "0x4AC5550", VA = "0x4AC5550")]
	public static float Exp(float power)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000862")]
	[Address(RVA = "0x4AC55B0", Offset = "0x4AC55B0", VA = "0x4AC55B0")]
	public static float Log(float f, float p)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000863")]
	[Address(RVA = "0x4AC5630", Offset = "0x4AC5630", VA = "0x4AC5630")]
	public static float Log(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000864")]
	[Address(RVA = "0x4AC5690", Offset = "0x4AC5690", VA = "0x4AC5690")]
	public static float Log10(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000865")]
	[Address(RVA = "0x4AC56F0", Offset = "0x4AC56F0", VA = "0x4AC56F0")]
	public static float Ceil(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000866")]
	[Address(RVA = "0x4AC5760", Offset = "0x4AC5760", VA = "0x4AC5760")]
	public static float Floor(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000867")]
	[Address(RVA = "0x4AC57D0", Offset = "0x4AC57D0", VA = "0x4AC57D0")]
	public static float Round(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000868")]
	[Address(RVA = "0x4AC58D0", Offset = "0x4AC58D0", VA = "0x4AC58D0")]
	public static int CeilToInt(float f)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000869")]
	[Address(RVA = "0x4AC5950", Offset = "0x4AC5950", VA = "0x4AC5950")]
	public static int FloorToInt(float f)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600086A")]
	[Address(RVA = "0x4AC59D0", Offset = "0x4AC59D0", VA = "0x4AC59D0")]
	public static int RoundToInt(float f)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600086B")]
	[Address(RVA = "0x4AC5AD0", Offset = "0x4AC5AD0", VA = "0x4AC5AD0")]
	public static float Sign(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600086C")]
	[Address(RVA = "0x4AC5AF0", Offset = "0x4AC5AF0", VA = "0x4AC5AF0")]
	public static float Clamp(float value, float min, float max)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600086D")]
	[Address(RVA = "0x4AC5B10", Offset = "0x4AC5B10", VA = "0x4AC5B10")]
	public static int Clamp(int value, int min, int max)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600086E")]
	[Address(RVA = "0x4AC5B20", Offset = "0x4AC5B20", VA = "0x4AC5B20")]
	public static float Clamp01(float value)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600086F")]
	[Address(RVA = "0x4AC5B40", Offset = "0x4AC5B40", VA = "0x4AC5B40")]
	public static float Lerp(float a, float b, float t)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000870")]
	[Address(RVA = "0x4AC5B70", Offset = "0x4AC5B70", VA = "0x4AC5B70")]
	public static float LerpUnclamped(float a, float b, float t)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000871")]
	[Address(RVA = "0x4AC5B80", Offset = "0x4AC5B80", VA = "0x4AC5B80")]
	public static float LerpAngle(float a, float b, float t)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000872")]
	[Address(RVA = "0x4AC5C20", Offset = "0x4AC5C20", VA = "0x4AC5C20")]
	public static float MoveTowards(float current, float target, float maxDelta)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000873")]
	[Address(RVA = "0x4AC5C60", Offset = "0x4AC5C60", VA = "0x4AC5C60")]
	public static float MoveTowardsAngle(float current, float target, float maxDelta)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000874")]
	[Address(RVA = "0x4AC5D50", Offset = "0x4AC5D50", VA = "0x4AC5D50")]
	public static float SmoothStep(float from, float to, float t)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000875")]
	[Address(RVA = "0x4AC5DB0", Offset = "0x4AC5DB0", VA = "0x4AC5DB0")]
	public static bool Approximately(float a, float b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000876")]
	[Address(RVA = "0x4AC5E40", Offset = "0x4AC5E40", VA = "0x4AC5E40")]
	public static float SmoothDamp(float current, float target, ref float currentVelocity, float smoothTime, [DefaultValue("Mathf.Infinity")] float maxSpeed, [DefaultValue("Time.deltaTime")] float deltaTime)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000877")]
	[Address(RVA = "0x4AC5F40", Offset = "0x4AC5F40", VA = "0x4AC5F40")]
	public static float Repeat(float t, float length)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000878")]
	[Address(RVA = "0x4AC5F80", Offset = "0x4AC5F80", VA = "0x4AC5F80")]
	public static float PingPong(float t, float length)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000879")]
	[Address(RVA = "0x4AC5FE0", Offset = "0x4AC5FE0", VA = "0x4AC5FE0")]
	public static float InverseLerp(float a, float b, float value)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600087A")]
	[Address(RVA = "0x4AC6010", Offset = "0x4AC6010", VA = "0x4AC6010")]
	public static float DeltaAngle(float current, float target)
	{
		return default(float);
	}

	[Token(Token = "0x600087B")]
	[Address(RVA = "0x4AC6080", Offset = "0x4AC6080", VA = "0x4AC6080")]
	internal static float ClampToFloat(double value)
	{
		return default(float);
	}

	[Token(Token = "0x600087C")]
	[Address(RVA = "0x4AC60E0", Offset = "0x4AC60E0", VA = "0x4AC60E0")]
	internal static int ClampToInt(long value)
	{
		return default(int);
	}

	[Token(Token = "0x600087D")]
	[Address(RVA = "0x4AC6100", Offset = "0x4AC6100", VA = "0x4AC6100")]
	internal static uint ClampToUInt(long value)
	{
		return default(uint);
	}

	[Token(Token = "0x600087E")]
	[Address(RVA = "0x4AC6120", Offset = "0x4AC6120", VA = "0x4AC6120")]
	internal static int GetNumberOfDecimalsForMinimumDifference(double minDifference)
	{
		return default(int);
	}

	[Token(Token = "0x600087F")]
	[Address(RVA = "0x4AC61A0", Offset = "0x4AC61A0", VA = "0x4AC61A0")]
	internal static double RoundBasedOnMinimumDifference(double valueToRound, double minDifference)
	{
		return default(double);
	}

	[Token(Token = "0x6000880")]
	[Address(RVA = "0x4AC6290", Offset = "0x4AC6290", VA = "0x4AC6290")]
	internal static double DiscardLeastSignificantDecimal(double v)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000882")]
	[Address(RVA = "0x4AC4EF0", Offset = "0x4AC4EF0", VA = "0x4AC4EF0")]
	private static extern void CorrelatedColorTemperatureToRGB_Injected(float kelvin, out Color ret);
}
