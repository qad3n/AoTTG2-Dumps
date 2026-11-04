// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.AffineTransform
// Update status: NEW in this game update
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
	[Address(RVA = "0x2A12380", Offset = "0x2A10980", VA = "0x182A12380")]
	public AffineTransform(float3 translation, quaternion rotation)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600002B")]
	[Address(RVA = "0x2A12160", Offset = "0x2A10760", VA = "0x182A12160")]
	public AffineTransform(float3 translation, quaternion rotation, float3 scale)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600002C")]
	[Address(RVA = "0x2A12350", Offset = "0x2A10950", VA = "0x182A12350")]
	public AffineTransform(float3 translation, float3x3 rotationScale)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600002D")]
	[Address(RVA = "0x2A12080", Offset = "0x2A10680", VA = "0x182A12080")]
	public AffineTransform(float3x3 rotationScale)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600002E")]
	[Address(RVA = "0x2A12010", Offset = "0x2A10610", VA = "0x182A12010")]
	public AffineTransform(RigidTransform rigid)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600002F")]
	[Address(RVA = "0x2A120F0", Offset = "0x2A106F0", VA = "0x182A120F0")]
	public AffineTransform(float3x4 m)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000030")]
	[Address(RVA = "0x2A122C0", Offset = "0x2A108C0", VA = "0x182A122C0")]
	public AffineTransform(float4x4 m)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000031")]
	[Address(RVA = "0x29E1040", Offset = "0x29DF640", VA = "0x1829E1040")]
	public static implicit operator float3x4(AffineTransform m)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000032")]
	[Address(RVA = "0x29E2A50", Offset = "0x29E1050", VA = "0x1829E2A50")]
	public static implicit operator float4x4(AffineTransform m)
	{
		return default(float4x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000033")]
	[Address(RVA = "0x2A10770", Offset = "0x2A0ED70", VA = "0x182A10770", Slot = "4")]
	public bool Equals(AffineTransform rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x2A11460", Offset = "0x2A0FA60", VA = "0x182A11460", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000035")]
	[Address(RVA = "0x2A11510", Offset = "0x2A0FB10", VA = "0x182A11510", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000036")]
	[Address(RVA = "0x2A11A10", Offset = "0x2A10010", VA = "0x182A11A10", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000037")]
	[Address(RVA = "0x2A11540", Offset = "0x2A0FB40", VA = "0x182A11540", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
