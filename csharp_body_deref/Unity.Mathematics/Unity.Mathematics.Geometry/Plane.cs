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
		[Address(RVA = "0x29E0200", Offset = "0x29DE800", VA = "0x1829E0200")]
		get
		{
			return default(float3);
		}
		[Token(Token = "0x60024C8")]
		[Address(RVA = "0x2A2B5A0", Offset = "0x2A29BA0", VA = "0x182A2B5A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000B90")]
	public float Distance
	{
		[Token(Token = "0x60024C9")]
		[Address(RVA = "0x562B80", Offset = "0x561180", VA = "0x180562B80")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60024CA")]
		[Address(RVA = "0x2A3A8E0", Offset = "0x2A38EE0", VA = "0x182A3A8E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000B91")]
	public Plane Flipped
	{
		[Token(Token = "0x60024CF")]
		[Address(RVA = "0x2A3A8C0", Offset = "0x2A38EC0", VA = "0x182A3A8C0")]
		get
		{
			return default(Plane);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024C1")]
	[Address(RVA = "0x2A3A830", Offset = "0x2A38E30", VA = "0x182A3A830")]
	public Plane(float coefficientA, float coefficientB, float coefficientC, float coefficientD)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024C2")]
	[Address(RVA = "0x2A3A790", Offset = "0x2A38D90", VA = "0x182A3A790")]
	public Plane(float3 normal, float distance)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024C3")]
	[Address(RVA = "0x2A3A5C0", Offset = "0x2A38BC0", VA = "0x182A3A5C0")]
	public Plane(float3 normal, float3 pointInPlane)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024C4")]
	[Address(RVA = "0x2A3A690", Offset = "0x2A38C90", VA = "0x182A3A690")]
	public Plane(float3 vector1InPlane, float3 vector2InPlane, float3 pointInPlane)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024C5")]
	[Address(RVA = "0x29CA720", Offset = "0x29C8D20", VA = "0x1829CA720")]
	public static Plane CreateFromUnitNormalAndDistance(float3 unitNormal, float distance)
	{
		return default(Plane);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024C6")]
	[Address(RVA = "0x2A3A3C0", Offset = "0x2A389C0", VA = "0x182A3A3C0")]
	public static Plane CreateFromUnitNormalAndPointInPlane(float3 unitNormal, float3 pointInPlane)
	{
		return default(Plane);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024CB")]
	[Address(RVA = "0x2A3A410", Offset = "0x2A38A10", VA = "0x182A3A410")]
	public static Plane Normalize(Plane plane)
	{
		return default(Plane);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024CC")]
	[Address(RVA = "0x2A3A4B0", Offset = "0x2A38AB0", VA = "0x182A3A4B0")]
	public static float4 Normalize(float4 planeCoefficients)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024CD")]
	[Address(RVA = "0x2A3A590", Offset = "0x2A38B90", VA = "0x182A3A590")]
	public float SignedDistanceToPoint(float3 point)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024CE")]
	[Address(RVA = "0x2A3A510", Offset = "0x2A38B10", VA = "0x182A3A510")]
	public float3 Projection(float3 point)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024D0")]
	[Address(RVA = "0x72FD20", Offset = "0x72E320", VA = "0x18072FD20")]
	public static implicit operator float4(Plane plane)
	{
		return default(float4);
	}

	[Token(Token = "0x60024D1")]
	[Address(RVA = "0x2A3A320", Offset = "0x2A38920", VA = "0x182A3A320")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckPlaneIsNormalized()
	{
	}
}
