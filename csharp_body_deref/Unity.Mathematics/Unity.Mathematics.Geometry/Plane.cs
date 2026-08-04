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
[Token(Token = "0x2000064")]
[DebuggerDisplay("{Normal}, {Distance}")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
internal struct Plane
{
	[Token(Token = "0x400016D")]
	[FieldOffset(Offset = "0x0")]
	public float4 NormalAndDistance;

	[Token(Token = "0x17000B8F")]
	public float3 Normal
	{
		[Token(Token = "0x6002470")]
		[Address(RVA = "0x4A884F0", Offset = "0x4A884F0", VA = "0x4A884F0")]
		get
		{
			return default(float3);
		}
		[Token(Token = "0x6002471")]
		[Address(RVA = "0x4A88500", Offset = "0x4A88500", VA = "0x4A88500")]
		set
		{
		}
	}

	[Token(Token = "0x17000B90")]
	public float Distance
	{
		[Token(Token = "0x6002472")]
		[Address(RVA = "0x4A88520", Offset = "0x4A88520", VA = "0x4A88520")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6002473")]
		[Address(RVA = "0x4A88530", Offset = "0x4A88530", VA = "0x4A88530")]
		set
		{
		}
	}

	[Token(Token = "0x17000B91")]
	public Plane Flipped
	{
		[Token(Token = "0x6002478")]
		[Address(RVA = "0x4A88780", Offset = "0x4A88780", VA = "0x4A88780")]
		get
		{
			return default(Plane);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600246A")]
	[Address(RVA = "0x4A87FE0", Offset = "0x4A87FE0", VA = "0x4A87FE0")]
	public Plane(float coefficientA, float coefficientB, float coefficientC, float coefficientD)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600246B")]
	[Address(RVA = "0x4A880D0", Offset = "0x4A880D0", VA = "0x4A880D0")]
	public Plane(float3 normal, float distance)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600246C")]
	[Address(RVA = "0x4A881C0", Offset = "0x4A881C0", VA = "0x4A881C0")]
	public Plane(float3 normal, float3 pointInPlane)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600246D")]
	[Address(RVA = "0x4A88320", Offset = "0x4A88320", VA = "0x4A88320")]
	public Plane(float3 vector1InPlane, float3 vector2InPlane, float3 pointInPlane)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600246E")]
	[Address(RVA = "0x4A884B0", Offset = "0x4A884B0", VA = "0x4A884B0")]
	public static Plane CreateFromUnitNormalAndDistance(float3 unitNormal, float distance)
	{
		return default(Plane);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600246F")]
	[Address(RVA = "0x4A884C0", Offset = "0x4A884C0", VA = "0x4A884C0")]
	public static Plane CreateFromUnitNormalAndPointInPlane(float3 unitNormal, float3 pointInPlane)
	{
		return default(Plane);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002474")]
	[Address(RVA = "0x4A88540", Offset = "0x4A88540", VA = "0x4A88540")]
	public static Plane Normalize(Plane plane)
	{
		return default(Plane);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002475")]
	[Address(RVA = "0x4A88620", Offset = "0x4A88620", VA = "0x4A88620")]
	public static float4 Normalize(float4 planeCoefficients)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002476")]
	[Address(RVA = "0x4A88700", Offset = "0x4A88700", VA = "0x4A88700")]
	public float SignedDistanceToPoint(float3 point)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002477")]
	[Address(RVA = "0x4A88730", Offset = "0x4A88730", VA = "0x4A88730")]
	public float3 Projection(float3 point)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002479")]
	[Address(RVA = "0x4A887A0", Offset = "0x4A887A0", VA = "0x4A887A0")]
	public static implicit operator float4(Plane plane)
	{
		return default(float4);
	}

	[Token(Token = "0x600247A")]
	[Address(RVA = "0x4A887B0", Offset = "0x4A887B0", VA = "0x4A887B0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckPlaneIsNormalized()
	{
	}
}
