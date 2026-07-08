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
		[Address(RVA = "0x4779290", Offset = "0x4779290", VA = "0x4779290")]
		get
		{
			return default(float3);
		}
		[Token(Token = "0x6002471")]
		[Address(RVA = "0x47792A0", Offset = "0x47792A0", VA = "0x47792A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000B90")]
	public float Distance
	{
		[Token(Token = "0x6002472")]
		[Address(RVA = "0x47792C0", Offset = "0x47792C0", VA = "0x47792C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6002473")]
		[Address(RVA = "0x47792D0", Offset = "0x47792D0", VA = "0x47792D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000B91")]
	public Plane Flipped
	{
		[Token(Token = "0x6002478")]
		[Address(RVA = "0x4779520", Offset = "0x4779520", VA = "0x4779520")]
		get
		{
			return default(Plane);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600246A")]
	[Address(RVA = "0x4778D80", Offset = "0x4778D80", VA = "0x4778D80")]
	public Plane(float coefficientA, float coefficientB, float coefficientC, float coefficientD)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600246B")]
	[Address(RVA = "0x4778E70", Offset = "0x4778E70", VA = "0x4778E70")]
	public Plane(float3 normal, float distance)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600246C")]
	[Address(RVA = "0x4778F60", Offset = "0x4778F60", VA = "0x4778F60")]
	public Plane(float3 normal, float3 pointInPlane)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600246D")]
	[Address(RVA = "0x47790C0", Offset = "0x47790C0", VA = "0x47790C0")]
	public Plane(float3 vector1InPlane, float3 vector2InPlane, float3 pointInPlane)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600246E")]
	[Address(RVA = "0x4779250", Offset = "0x4779250", VA = "0x4779250")]
	public static Plane CreateFromUnitNormalAndDistance(float3 unitNormal, float distance)
	{
		return default(Plane);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600246F")]
	[Address(RVA = "0x4779260", Offset = "0x4779260", VA = "0x4779260")]
	public static Plane CreateFromUnitNormalAndPointInPlane(float3 unitNormal, float3 pointInPlane)
	{
		return default(Plane);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002474")]
	[Address(RVA = "0x47792E0", Offset = "0x47792E0", VA = "0x47792E0")]
	public static Plane Normalize(Plane plane)
	{
		return default(Plane);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002475")]
	[Address(RVA = "0x47793C0", Offset = "0x47793C0", VA = "0x47793C0")]
	public static float4 Normalize(float4 planeCoefficients)
	{
		return default(float4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002476")]
	[Address(RVA = "0x47794A0", Offset = "0x47794A0", VA = "0x47794A0")]
	public float SignedDistanceToPoint(float3 point)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002477")]
	[Address(RVA = "0x47794D0", Offset = "0x47794D0", VA = "0x47794D0")]
	public float3 Projection(float3 point)
	{
		return default(float3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002479")]
	[Address(RVA = "0x4779540", Offset = "0x4779540", VA = "0x4779540")]
	public static implicit operator float4(Plane plane)
	{
		return default(float4);
	}

	[Token(Token = "0x600247A")]
	[Address(RVA = "0x4779550", Offset = "0x4779550", VA = "0x4779550")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckPlaneIsNormalized()
	{
	}
}
