// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.Geometry.MinMaxAABB
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics.Geometry;

[Serializable]
[Token(Token = "0x2000061")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct MinMaxAABB : IEquatable<MinMaxAABB>
{
	[Token(Token = "0x4000176")]
	[FieldOffset(Offset = "0x0")]
	public float3 Min;

	[Token(Token = "0x4000177")]
	[FieldOffset(Offset = "0xC")]
	public float3 Max;

	[Token(Token = "0x17000B8A")]
	public float3 Extents
	{
		[Token(Token = "0x60024B1")]
		[Address(RVA = "0x640F4B0", Offset = "0x640E4B0", VA = "0x640F4B0")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x17000B8B")]
	public float3 HalfExtents
	{
		[Token(Token = "0x60024B2")]
		[Address(RVA = "0x640F4D0", Offset = "0x640E4D0", VA = "0x640F4D0")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x17000B8C")]
	public float3 Center
	{
		[Token(Token = "0x60024B3")]
		[Address(RVA = "0x640F500", Offset = "0x640E500", VA = "0x640F500")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x17000B8D")]
	public bool IsValid
	{
		[Token(Token = "0x60024B4")]
		[Address(RVA = "0x640F530", Offset = "0x640E530", VA = "0x640F530")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B8E")]
	public float SurfaceArea
	{
		[Token(Token = "0x60024B5")]
		[Address(RVA = "0x640F580", Offset = "0x640E580", VA = "0x640F580")]
		get
		{
			return default(float);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024AE")]
	[Address(RVA = "0x640F420", Offset = "0x640E420", VA = "0x640F420")]
	public MinMaxAABB(float3 min, float3 max)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024AF")]
	[Address(RVA = "0x640F440", Offset = "0x640E440", VA = "0x640F440")]
	public static MinMaxAABB CreateFromCenterAndExtents(float3 center, float3 extents)
	{
		return default(MinMaxAABB);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024B0")]
	[Address(RVA = "0x640F480", Offset = "0x640E480", VA = "0x640F480")]
	public static MinMaxAABB CreateFromCenterAndHalfExtents(float3 center, float3 halfExtents)
	{
		return default(MinMaxAABB);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024B6")]
	[Address(RVA = "0x640F5C0", Offset = "0x640E5C0", VA = "0x640F5C0")]
	public bool Contains(float3 point)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024B7")]
	[Address(RVA = "0x640F630", Offset = "0x640E630", VA = "0x640F630")]
	public bool Contains(MinMaxAABB aabb)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024B8")]
	[Address(RVA = "0x640F6C0", Offset = "0x640E6C0", VA = "0x640F6C0")]
	public bool Overlaps(MinMaxAABB aabb)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024B9")]
	[Address(RVA = "0x640F750", Offset = "0x640E750", VA = "0x640F750")]
	public void Expand(float signedDistance)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024BA")]
	[Address(RVA = "0x640F790", Offset = "0x640E790", VA = "0x640F790")]
	public void Encapsulate(MinMaxAABB aabb)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024BB")]
	[Address(RVA = "0x640F890", Offset = "0x640E890", VA = "0x640F890")]
	public void Encapsulate(float3 point)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024BC")]
	[Address(RVA = "0x640F920", Offset = "0x640E920", VA = "0x640F920", Slot = "4")]
	public bool Equals(MinMaxAABB other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024BD")]
	[Address(RVA = "0x640F990", Offset = "0x640E990", VA = "0x640F990", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
