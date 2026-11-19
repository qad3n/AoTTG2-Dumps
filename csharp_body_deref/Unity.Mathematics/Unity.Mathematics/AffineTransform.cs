// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.AffineTransform
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000006")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct AffineTransform : IEquatable<AffineTransform>, IFormattable
{
	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x0")]
	public float3x3 rs;

	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x24")]
	public float3 t;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x0")]
	public static readonly AffineTransform identity;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x30")]
	public static readonly AffineTransform zero;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600002A")]
	[Address(RVA = "0x63EF2A0", Offset = "0x63EE2A0", VA = "0x63EF2A0")]
	public AffineTransform(float3 translation, quaternion rotation)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x63EF320", Offset = "0x63EE320", VA = "0x63EF320")]
	public AffineTransform(float3 translation, quaternion rotation, float3 scale)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600002C")]
	[Address(RVA = "0x63EF3F0", Offset = "0x63EE3F0", VA = "0x63EF3F0")]
	public AffineTransform(float3 translation, float3x3 rotationScale)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600002D")]
	[Address(RVA = "0x63EF420", Offset = "0x63EE420", VA = "0x63EF420")]
	public AffineTransform(float3x3 rotationScale)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600002E")]
	[Address(RVA = "0x63EF490", Offset = "0x63EE490", VA = "0x63EF490")]
	public AffineTransform(RigidTransform rigid)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600002F")]
	[Address(RVA = "0x63EF510", Offset = "0x63EE510", VA = "0x63EF510")]
	public AffineTransform(float3x4 m)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000030")]
	[Address(RVA = "0x63EF580", Offset = "0x63EE580", VA = "0x63EF580")]
	public AffineTransform(float4x4 m)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000031")]
	[Address(RVA = "0x63EF5E0", Offset = "0x63EE5E0", VA = "0x63EF5E0")]
	public static implicit operator float3x4(AffineTransform m)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000032")]
	[Address(RVA = "0x63EF640", Offset = "0x63EE640", VA = "0x63EF640")]
	public static implicit operator float4x4(AffineTransform m)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000033")]
	[Address(RVA = "0x63EF6A0", Offset = "0x63EE6A0", VA = "0x63EF6A0", Slot = "4")]
	public bool Equals(AffineTransform rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x63EF790", Offset = "0x63EE790", VA = "0x63EF790", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000035")]
	[Address(RVA = "0x63EF8E0", Offset = "0x63EE8E0", VA = "0x63EF8E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000036")]
	[Address(RVA = "0x63EF9A0", Offset = "0x63EE9A0", VA = "0x63EF9A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000037")]
	[Address(RVA = "0x63EFE40", Offset = "0x63EEE40", VA = "0x63EFE40", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
