// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.Geometry.Plane
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics.Geometry;

[Serializable]
[Token(Token = "0x2000063")]
[DebuggerDisplay("{Normal}, {Distance}")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct Plane
{
	[Token(Token = "0x4000178")]
	[FieldOffset(Offset = "0x0")]
	public float4 NormalAndDistance;

	[Token(Token = "0x17000B8F")]
	public float3 Normal
	{
		[Token(Token = "0x60024C7")]
		[Address(RVA = "0x64109B0", Offset = "0x640F9B0", VA = "0x64109B0")]
		get
		{
			return default(float3);
		}
		[Token(Token = "0x60024C8")]
		[Address(RVA = "0x64109C0", Offset = "0x640F9C0", VA = "0x64109C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000B90")]
	public float Distance
	{
		[Token(Token = "0x60024C9")]
		[Address(RVA = "0x64109D0", Offset = "0x640F9D0", VA = "0x64109D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60024CA")]
		[Address(RVA = "0x64109E0", Offset = "0x640F9E0", VA = "0x64109E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000B91")]
	public Plane Flipped
	{
		[Token(Token = "0x60024CF")]
		[Address(RVA = "0x6410C30", Offset = "0x640FC30", VA = "0x6410C30")]
		get
		{
			return default(Plane);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024C1")]
	[Address(RVA = "0x6410490", Offset = "0x640F490", VA = "0x6410490")]
	public Plane(float coefficientA, float coefficientB, float coefficientC, float coefficientD)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024C2")]
	[Address(RVA = "0x6410590", Offset = "0x640F590", VA = "0x6410590")]
	public Plane(float3 normal, float distance)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024C3")]
	[Address(RVA = "0x6410680", Offset = "0x640F680", VA = "0x6410680")]
	public Plane(float3 normal, float3 pointInPlane)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024C4")]
	[Address(RVA = "0x64107B0", Offset = "0x640F7B0", VA = "0x64107B0")]
	public Plane(float3 vector1InPlane, float3 vector2InPlane, float3 pointInPlane)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024C5")]
	[Address(RVA = "0x6410970", Offset = "0x640F970", VA = "0x6410970")]
	public static Plane CreateFromUnitNormalAndDistance(float3 unitNormal, float distance)
	{
		return default(Plane);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024C6")]
	[Address(RVA = "0x6410980", Offset = "0x640F980", VA = "0x6410980")]
	public static Plane CreateFromUnitNormalAndPointInPlane(float3 unitNormal, float3 pointInPlane)
	{
		return default(Plane);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024CB")]
	[Address(RVA = "0x64109F0", Offset = "0x640F9F0", VA = "0x64109F0")]
	public static Plane Normalize(Plane plane)
	{
		return default(Plane);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024CC")]
	[Address(RVA = "0x6410AD0", Offset = "0x640FAD0", VA = "0x6410AD0")]
	public static float4 Normalize(float4 planeCoefficients)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024CD")]
	[Address(RVA = "0x6410BB0", Offset = "0x640FBB0", VA = "0x6410BB0")]
	public float SignedDistanceToPoint(float3 point)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024CE")]
	[Address(RVA = "0x6410BE0", Offset = "0x640FBE0", VA = "0x6410BE0")]
	public float3 Projection(float3 point)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024D0")]
	[Address(RVA = "0x6410C50", Offset = "0x640FC50", VA = "0x6410C50")]
	public static implicit operator float4(Plane plane)
	{
		return default(float4);
	}

	[Token(Token = "0x60024D1")]
	[Address(RVA = "0x6410C60", Offset = "0x640FC60", VA = "0x6410C60")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckPlaneIsNormalized()
	{
	}
}
