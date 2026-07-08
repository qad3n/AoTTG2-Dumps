using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics.Geometry;

[Serializable]
[Token(Token = "0x2000062")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
internal struct MinMaxAABB : IEquatable<MinMaxAABB>
{
	[Token(Token = "0x400016B")]
	[FieldOffset(Offset = "0x0")]
	public float3 Min;

	[Token(Token = "0x400016C")]
	[FieldOffset(Offset = "0xC")]
	public float3 Max;

	[Token(Token = "0x17000B8A")]
	public float3 Extents
	{
		[Token(Token = "0x600245A")]
		[Address(RVA = "0x4777FD0", Offset = "0x4777FD0", VA = "0x4777FD0")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x17000B8B")]
	public float3 HalfExtents
	{
		[Token(Token = "0x600245B")]
		[Address(RVA = "0x4777FF0", Offset = "0x4777FF0", VA = "0x4777FF0")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x17000B8C")]
	public float3 Center
	{
		[Token(Token = "0x600245C")]
		[Address(RVA = "0x4778020", Offset = "0x4778020", VA = "0x4778020")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x17000B8D")]
	public bool IsValid
	{
		[Token(Token = "0x600245D")]
		[Address(RVA = "0x4778050", Offset = "0x4778050", VA = "0x4778050")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B8E")]
	public float SurfaceArea
	{
		[Token(Token = "0x600245E")]
		[Address(RVA = "0x47780A0", Offset = "0x47780A0", VA = "0x47780A0")]
		get
		{
			return default(float);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002457")]
	[Address(RVA = "0x4777F20", Offset = "0x4777F20", VA = "0x4777F20")]
	public MinMaxAABB(float3 min, float3 max)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002458")]
	[Address(RVA = "0x4777F40", Offset = "0x4777F40", VA = "0x4777F40")]
	public static MinMaxAABB CreateFromCenterAndExtents(float3 center, float3 extents)
	{
		return default(MinMaxAABB);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002459")]
	[Address(RVA = "0x4777F80", Offset = "0x4777F80", VA = "0x4777F80")]
	public static MinMaxAABB CreateFromCenterAndHalfExtents(float3 center, float3 halfExtents)
	{
		return default(MinMaxAABB);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600245F")]
	[Address(RVA = "0x47780E0", Offset = "0x47780E0", VA = "0x47780E0")]
	public bool Contains(float3 point)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002460")]
	[Address(RVA = "0x4778150", Offset = "0x4778150", VA = "0x4778150")]
	public bool Contains(MinMaxAABB aabb)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002461")]
	[Address(RVA = "0x47781E0", Offset = "0x47781E0", VA = "0x47781E0")]
	public bool Overlaps(MinMaxAABB aabb)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002462")]
	[Address(RVA = "0x4778270", Offset = "0x4778270", VA = "0x4778270")]
	public void Expand(float signedDistance)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002463")]
	[Address(RVA = "0x47782B0", Offset = "0x47782B0", VA = "0x47782B0")]
	public void Encapsulate(MinMaxAABB aabb)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002464")]
	[Address(RVA = "0x4778410", Offset = "0x4778410", VA = "0x4778410")]
	public void Encapsulate(float3 point)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002465")]
	[Address(RVA = "0x47784D0", Offset = "0x47784D0", VA = "0x47784D0", Slot = "4")]
	public bool Equals(MinMaxAABB other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002466")]
	[Address(RVA = "0x4778540", Offset = "0x4778540", VA = "0x4778540", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
