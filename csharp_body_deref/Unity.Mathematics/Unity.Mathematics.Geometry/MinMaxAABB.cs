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
		[Address(RVA = "0x4A87230", Offset = "0x4A87230", VA = "0x4A87230")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x17000B8B")]
	public float3 HalfExtents
	{
		[Token(Token = "0x600245B")]
		[Address(RVA = "0x4A87250", Offset = "0x4A87250", VA = "0x4A87250")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x17000B8C")]
	public float3 Center
	{
		[Token(Token = "0x600245C")]
		[Address(RVA = "0x4A87280", Offset = "0x4A87280", VA = "0x4A87280")]
		get
		{
			return default(float3);
		}
	}

	[Token(Token = "0x17000B8D")]
	public bool IsValid
	{
		[Token(Token = "0x600245D")]
		[Address(RVA = "0x4A872B0", Offset = "0x4A872B0", VA = "0x4A872B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B8E")]
	public float SurfaceArea
	{
		[Token(Token = "0x600245E")]
		[Address(RVA = "0x4A87300", Offset = "0x4A87300", VA = "0x4A87300")]
		get
		{
			return default(float);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002457")]
	[Address(RVA = "0x4A87180", Offset = "0x4A87180", VA = "0x4A87180")]
	public MinMaxAABB(float3 min, float3 max)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002458")]
	[Address(RVA = "0x4A871A0", Offset = "0x4A871A0", VA = "0x4A871A0")]
	public static MinMaxAABB CreateFromCenterAndExtents(float3 center, float3 extents)
	{
		return default(MinMaxAABB);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002459")]
	[Address(RVA = "0x4A871E0", Offset = "0x4A871E0", VA = "0x4A871E0")]
	public static MinMaxAABB CreateFromCenterAndHalfExtents(float3 center, float3 halfExtents)
	{
		return default(MinMaxAABB);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600245F")]
	[Address(RVA = "0x4A87340", Offset = "0x4A87340", VA = "0x4A87340")]
	public bool Contains(float3 point)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002460")]
	[Address(RVA = "0x4A873B0", Offset = "0x4A873B0", VA = "0x4A873B0")]
	public bool Contains(MinMaxAABB aabb)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002461")]
	[Address(RVA = "0x4A87440", Offset = "0x4A87440", VA = "0x4A87440")]
	public bool Overlaps(MinMaxAABB aabb)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002462")]
	[Address(RVA = "0x4A874D0", Offset = "0x4A874D0", VA = "0x4A874D0")]
	public void Expand(float signedDistance)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002463")]
	[Address(RVA = "0x4A87510", Offset = "0x4A87510", VA = "0x4A87510")]
	public void Encapsulate(MinMaxAABB aabb)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002464")]
	[Address(RVA = "0x4A87670", Offset = "0x4A87670", VA = "0x4A87670")]
	public void Encapsulate(float3 point)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002465")]
	[Address(RVA = "0x4A87730", Offset = "0x4A87730", VA = "0x4A87730", Slot = "4")]
	public bool Equals(MinMaxAABB other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002466")]
	[Address(RVA = "0x4A877A0", Offset = "0x4A877A0", VA = "0x4A877A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
