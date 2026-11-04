// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.svd
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Token(Token = "0x2000051")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public static class svd
{
	[Token(Token = "0x4000136")]
	public const float k_EpsilonDeterminant = 1E-06f;

	[Token(Token = "0x4000137")]
	public const float k_EpsilonRCP = 1E-09f;

	[Token(Token = "0x4000138")]
	public const float k_EpsilonNormalSqrt = 1E-15f;

	[Token(Token = "0x4000139")]
	public const float k_EpsilonNormal = 1E-30f;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EE2")]
	[Address(RVA = "0x2AB4E30", Offset = "0x2AB3430", VA = "0x182AB4E30")]
	private static void condSwap(bool c, ref float x, ref float y)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EE3")]
	[Address(RVA = "0x2AB4DC0", Offset = "0x2AB33C0", VA = "0x182AB4DC0")]
	private static void condNegSwap(bool c, ref float3 x, ref float3 y)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EE4")]
	[Address(RVA = "0x2AB4C00", Offset = "0x2AB3200", VA = "0x182AB4C00")]
	private static quaternion condNegSwapQuat(bool c, quaternion q, float4 mask)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EE5")]
	[Address(RVA = "0x29CD2A0", Offset = "0x29CB8A0", VA = "0x1829CD2A0")]
	private static void sortSingularValues(ref float3x3 b, ref quaternion v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EE6")]
	[Address(RVA = "0x2AB4B00", Offset = "0x2AB3100", VA = "0x182AB4B00")]
	private static quaternion approxGivensQuat(float3 pq, float4 mask)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EE7")]
	[Address(RVA = "0x29CCEB0", Offset = "0x29CB4B0", VA = "0x1829CCEB0")]
	private static quaternion qrGivensQuat(float2 pq, float4 mask)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EE8")]
	[Address(RVA = "0x29CC960", Offset = "0x29CAF60", VA = "0x1829CC960")]
	private static quaternion givensQRFactorization(float3x3 b, out float3x3 r)
	{
		return default(quaternion);
	}

	[Token(Token = "0x6001EE9")]
	[Address(RVA = "0x2AB4E50", Offset = "0x2AB3450", VA = "0x182AB4E50")]
	private static quaternion jacobiIteration(ref float3x3 s, int iterations = 5)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EEA")]
	[Address(RVA = "0x2AB5D90", Offset = "0x2AB4390", VA = "0x182AB5D90")]
	private static float3 singularValuesDecomposition(float3x3 a, out quaternion u, out quaternion v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EEB")]
	[Address(RVA = "0x2AB5CC0", Offset = "0x2AB42C0", VA = "0x182AB5CC0")]
	private static float3 rcpsafe(float3 x, float epsilon = 1E-09f)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EEC")]
	[Address(RVA = "0x29CD560", Offset = "0x29CBB60", VA = "0x1829CD560")]
	public static float3x3 svdInverse(float3x3 a)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EED")]
	[Address(RVA = "0x29CD800", Offset = "0x29CBE00", VA = "0x1829CD800")]
	public static quaternion svdRotation(float3x3 a)
	{
		return default(quaternion);
	}
}
