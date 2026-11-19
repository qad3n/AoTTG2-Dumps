// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.svd
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x6499590", Offset = "0x6498590", VA = "0x6499590")]
	private static void condSwap(bool c, ref float x, ref float y)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EE3")]
	[Address(RVA = "0x64995C0", Offset = "0x64985C0", VA = "0x64995C0")]
	private static void condNegSwap(bool c, ref float3 x, ref float3 y)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EE4")]
	[Address(RVA = "0x6499620", Offset = "0x6498620", VA = "0x6499620")]
	private static quaternion condNegSwapQuat(bool c, quaternion q, float4 mask)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EE5")]
	[Address(RVA = "0x6499730", Offset = "0x6498730", VA = "0x6499730")]
	private static void sortSingularValues(ref float3x3 b, ref quaternion v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EE6")]
	[Address(RVA = "0x6499BC0", Offset = "0x6498BC0", VA = "0x6499BC0")]
	private static quaternion approxGivensQuat(float3 pq, float4 mask)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EE7")]
	[Address(RVA = "0x6499D20", Offset = "0x6498D20", VA = "0x6499D20")]
	private static quaternion qrGivensQuat(float2 pq, float4 mask)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EE8")]
	[Address(RVA = "0x6499ED0", Offset = "0x6498ED0", VA = "0x6499ED0")]
	private static quaternion givensQRFactorization(float3x3 b, out float3x3 r)
	{
		return default(quaternion);
	}

	[Token(Token = "0x6001EE9")]
	[Address(RVA = "0x649AA50", Offset = "0x6499A50", VA = "0x649AA50")]
	private static quaternion jacobiIteration(ref float3x3 s, int iterations = 5)
	{
		return default(quaternion);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EEA")]
	[Address(RVA = "0x649B8D0", Offset = "0x649A8D0", VA = "0x649B8D0")]
	private static float3 singularValuesDecomposition(float3x3 a, out quaternion u, out quaternion v)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EEB")]
	[Address(RVA = "0x649BC50", Offset = "0x649AC50", VA = "0x649BC50")]
	private static float3 rcpsafe(float3 x, float epsilon = 1E-09f)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EEC")]
	[Address(RVA = "0x649BD20", Offset = "0x649AD20", VA = "0x649BD20")]
	public static float3x3 svdInverse(float3x3 a)
	{
		return default(float3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001EED")]
	[Address(RVA = "0x649C110", Offset = "0x649B110", VA = "0x649C110")]
	public static quaternion svdRotation(float3x3 a)
	{
		return default(quaternion);
	}
}
