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
		[Address(RVA = "0x2A3A230", Offset = "0x2A38830", VA = "0x182A3A230")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x17000B8B")]
	public float3 HalfExtents
	{
		[Token(Token = "0x60024B2")]
		[Address(RVA = "0x2A3A260", Offset = "0x2A38860", VA = "0x182A3A260")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x17000B8C")]
	public float3 Center
	{
		[Token(Token = "0x60024B3")]
		[Address(RVA = "0x2A3A1E0", Offset = "0x2A387E0", VA = "0x182A3A1E0")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x17000B8D")]
	public bool IsValid
	{
		[Token(Token = "0x60024B4")]
		[Address(RVA = "0x2A3A2B0", Offset = "0x2A388B0", VA = "0x182A3A2B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B8E")]
	public float SurfaceArea
	{
		[Token(Token = "0x60024B5")]
		[Address(RVA = "0x2A3A2E0", Offset = "0x2A388E0", VA = "0x182A3A2E0")]
		get
		{
			return default(float);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024AE")]
	[Address(RVA = "0x565080", Offset = "0x563680", VA = "0x180565080")]
	public MinMaxAABB(float3 min, float3 max)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024AF")]
	[Address(RVA = "0x2A39D30", Offset = "0x2A38330", VA = "0x182A39D30")]
	public static MinMaxAABB CreateFromCenterAndExtents(float3 center, float3 extents)
	{
		return default(MinMaxAABB);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024B0")]
	[Address(RVA = "0x2A39DF0", Offset = "0x2A383F0", VA = "0x182A39DF0")]
	public static MinMaxAABB CreateFromCenterAndHalfExtents(float3 center, float3 halfExtents)
	{
		return default(MinMaxAABB);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024B6")]
	[Address(RVA = "0x2A39C70", Offset = "0x2A38270", VA = "0x182A39C70")]
	public bool Contains(float3 point)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024B7")]
	[Address(RVA = "0x2A39CD0", Offset = "0x2A382D0", VA = "0x182A39CD0")]
	public bool Contains(MinMaxAABB aabb)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024B8")]
	[Address(RVA = "0x2A3A0E0", Offset = "0x2A386E0", VA = "0x182A3A0E0")]
	public bool Overlaps(MinMaxAABB aabb)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024B9")]
	[Address(RVA = "0x2A3A090", Offset = "0x2A38690", VA = "0x182A3A090")]
	public void Expand(float signedDistance)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024BA")]
	[Address(RVA = "0x2A39E50", Offset = "0x2A38450", VA = "0x182A39E50")]
	public void Encapsulate(MinMaxAABB aabb)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024BB")]
	[Address(RVA = "0x2A39F40", Offset = "0x2A38540", VA = "0x182A39F40")]
	public void Encapsulate(float3 point)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024BC")]
	[Address(RVA = "0x2A3A030", Offset = "0x2A38630", VA = "0x182A3A030", Slot = "4")]
	public bool Equals(MinMaxAABB other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60024BD")]
	[Address(RVA = "0x2A3A140", Offset = "0x2A38740", VA = "0x182A3A140", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
