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

[Token(Token = "0x2000148")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/PerlinNoise.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/ColorSpaceConversion.h")]
[Il2CppEagerStaticClassConstruction]
[UnityEngine.Bindings.NativeHeader("NativeKernel/Math/FloatConversion.h")]
public struct Mathf
{
	[Token(Token = "0x400055E")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float Epsilon;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x68FC650", Offset = "0x68FB650", VA = "0x68FC650")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern float GammaToLinearSpace(float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x68FC760", Offset = "0x68FB760", VA = "0x68FC760")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern float LinearToGammaSpace(float value);

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x6906330", Offset = "0x6905330", VA = "0x6906330")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static Color CorrelatedColorTemperatureToRGB(float kelvin)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B34")]
	[Address(RVA = "0x69063D0", Offset = "0x69053D0", VA = "0x69063D0")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern ushort FloatToHalf(float val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B35")]
	[Address(RVA = "0x6906410", Offset = "0x6905410", VA = "0x6906410")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static extern float HalfToFloat(ushort val);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x6906440", Offset = "0x6905440", VA = "0x6906440")]
	[UnityEngine.Bindings.FreeFunction("PerlinNoise::NoiseNormalized", IsThreadSafe = true)]
	public static extern float PerlinNoise(float x, float y);

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x6906480", Offset = "0x6905480", VA = "0x6906480")]
	public static float Sin(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x69064E0", Offset = "0x69054E0", VA = "0x69064E0")]
	public static float Cos(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x6906540", Offset = "0x6905540", VA = "0x6906540")]
	public static float Tan(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x69065A0", Offset = "0x69055A0", VA = "0x69065A0")]
	public static float Asin(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x6906600", Offset = "0x6905600", VA = "0x6906600")]
	public static float Acos(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B3C")]
	[Address(RVA = "0x6906660", Offset = "0x6905660", VA = "0x6906660")]
	public static float Atan(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B3D")]
	[Address(RVA = "0x69066C0", Offset = "0x69056C0", VA = "0x69066C0")]
	public static float Atan2(float y, float x)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B3E")]
	[Address(RVA = "0x6906740", Offset = "0x6905740", VA = "0x6906740")]
	public static float Sqrt(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B3F")]
	[Address(RVA = "0x69067C0", Offset = "0x69057C0", VA = "0x69067C0")]
	public static float Abs(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B40")]
	[Address(RVA = "0x6906840", Offset = "0x6905840", VA = "0x6906840")]
	public static int Abs(int value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x6906880", Offset = "0x6905880", VA = "0x6906880")]
	public static float Min(float a, float b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x6906890", Offset = "0x6905890", VA = "0x6906890")]
	public static float Min(params float[] values)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B43")]
	[Address(RVA = "0x6906950", Offset = "0x6905950", VA = "0x6906950")]
	public static int Min(int a, int b)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x6906960", Offset = "0x6905960", VA = "0x6906960")]
	public static float Max(float a, float b)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B45")]
	[Address(RVA = "0x6906970", Offset = "0x6905970", VA = "0x6906970")]
	public static float Max(params float[] values)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x6906A30", Offset = "0x6905A30", VA = "0x6906A30")]
	public static int Max(int a, int b)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x6906A40", Offset = "0x6905A40", VA = "0x6906A40")]
	public static float Pow(float f, float p)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x6906AC0", Offset = "0x6905AC0", VA = "0x6906AC0")]
	public static float Exp(float power)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B49")]
	[Address(RVA = "0x6906B20", Offset = "0x6905B20", VA = "0x6906B20")]
	public static float Log(float f, float p)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B4A")]
	[Address(RVA = "0x6906BA0", Offset = "0x6905BA0", VA = "0x6906BA0")]
	public static float Log(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x6906C00", Offset = "0x6905C00", VA = "0x6906C00")]
	public static float Log10(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x6906C60", Offset = "0x6905C60", VA = "0x6906C60")]
	public static float Ceil(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x6906CD0", Offset = "0x6905CD0", VA = "0x6906CD0")]
	public static float Floor(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x6906D40", Offset = "0x6905D40", VA = "0x6906D40")]
	public static float Round(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x6906E40", Offset = "0x6905E40", VA = "0x6906E40")]
	public static int CeilToInt(float f)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x6906EC0", Offset = "0x6905EC0", VA = "0x6906EC0")]
	public static int FloorToInt(float f)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x6906F40", Offset = "0x6905F40", VA = "0x6906F40")]
	public static int RoundToInt(float f)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x6907040", Offset = "0x6906040", VA = "0x6907040")]
	public static float Sign(float f)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B53")]
	[Address(RVA = "0x6907060", Offset = "0x6906060", VA = "0x6907060")]
	public static float Clamp(float value, float min, float max)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B54")]
	[Address(RVA = "0x6907080", Offset = "0x6906080", VA = "0x6907080")]
	public static int Clamp(int value, int min, int max)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B55")]
	[Address(RVA = "0x6907090", Offset = "0x6906090", VA = "0x6907090")]
	public static float Clamp01(float value)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x69070B0", Offset = "0x69060B0", VA = "0x69070B0")]
	public static float Lerp(float a, float b, float t)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x69070E0", Offset = "0x69060E0", VA = "0x69070E0")]
	public static float LerpUnclamped(float a, float b, float t)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B58")]
	[Address(RVA = "0x69070F0", Offset = "0x69060F0", VA = "0x69070F0")]
	public static float LerpAngle(float a, float b, float t)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x6907190", Offset = "0x6906190", VA = "0x6907190")]
	public static float MoveTowards(float current, float target, float maxDelta)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x69071E0", Offset = "0x69061E0", VA = "0x69071E0")]
	public static float MoveTowardsAngle(float current, float target, float maxDelta)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B5B")]
	[Address(RVA = "0x69072D0", Offset = "0x69062D0", VA = "0x69072D0")]
	public static float SmoothStep(float from, float to, float t)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B5C")]
	[Address(RVA = "0x6907330", Offset = "0x6906330", VA = "0x6907330")]
	public static bool Approximately(float a, float b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B5D")]
	[Address(RVA = "0x69073C0", Offset = "0x69063C0", VA = "0x69073C0")]
	public static float SmoothDamp(float current, float target, ref float currentVelocity, float smoothTime, [DefaultValue("Mathf.Infinity")] float maxSpeed, [DefaultValue("Time.deltaTime")] float deltaTime)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B5E")]
	[Address(RVA = "0x69074D0", Offset = "0x69064D0", VA = "0x69074D0")]
	public static float Repeat(float t, float length)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B5F")]
	[Address(RVA = "0x6907510", Offset = "0x6906510", VA = "0x6907510")]
	public static float PingPong(float t, float length)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B60")]
	[Address(RVA = "0x6907570", Offset = "0x6906570", VA = "0x6907570")]
	public static float InverseLerp(float a, float b, float value)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x69075B0", Offset = "0x69065B0", VA = "0x69075B0")]
	public static float DeltaAngle(float current, float target)
	{
		return default(float);
	}

	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x6907620", Offset = "0x6906620", VA = "0x6907620")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static float ClampToFloat(double value)
	{
		return default(float);
	}

	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x6907680", Offset = "0x6906680", VA = "0x6907680")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "UnityEditor.UIBuilderModule" })]
	internal static int ClampToInt(long value)
	{
		return default(int);
	}

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x69076A0", Offset = "0x69066A0", VA = "0x69076A0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static uint ClampToUInt(long value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000B65")]
	[Address(RVA = "0x69076C0", Offset = "0x69066C0", VA = "0x69076C0")]
	internal static int GetNumberOfDecimalsForMinimumDifference(double minDifference)
	{
		return default(int);
	}

	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x6907740", Offset = "0x6906740", VA = "0x6907740")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static double RoundBasedOnMinimumDifference(double valueToRound, double minDifference)
	{
		return default(double);
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x6907840", Offset = "0x6906840", VA = "0x6907840")]
	internal static double DiscardLeastSignificantDecimal(double v)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x6907990", Offset = "0x6906990", VA = "0x6907990")]
	public static int NextPowerOfTwo(int value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x69079C0", Offset = "0x69069C0", VA = "0x69079C0")]
	public static int ClosestPowerOfTwo(int value)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x6907A00", Offset = "0x6906A00", VA = "0x6907A00")]
	public static bool IsPowerOfTwo(int value)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000B6C")]
	[Address(RVA = "0x6906380", Offset = "0x6905380", VA = "0x6906380")]
	private static extern void CorrelatedColorTemperatureToRGB_Injected(float kelvin, out Color ret);
}
