// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.int3x3
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
[Token(Token = "0x2000046")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int3x3 : IEquatable<int3x3>, IFormattable
{
	[Token(Token = "0x4000109")]
	[FieldOffset(Offset = "0x0")]
	public int3 c0;

	[Token(Token = "0x400010A")]
	[FieldOffset(Offset = "0xC")]
	public int3 c1;

	[Token(Token = "0x400010B")]
	[FieldOffset(Offset = "0x18")]
	public int3 c2;

	[Token(Token = "0x400010C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int3x3 identity;

	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x24")]
	public static readonly int3x3 zero;

	[Token(Token = "0x17000847")]
	public unsafe ref int3 this[int index]
	{
		[Token(Token = "0x6001ADB")]
		[Address(RVA = "0x4AEAD60", Offset = "0x4AEAD60", VA = "0x4AEAD60")]
		get
		{
			return ref *(int3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A96")]
	[Address(RVA = "0x4AE8810", Offset = "0x4AE8810", VA = "0x4AE8810")]
	public int3x3(int3 c0, int3 c1, int3 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A97")]
	[Address(RVA = "0x4AE8830", Offset = "0x4AE8830", VA = "0x4AE8830")]
	public int3x3(int m00, int m01, int m02, int m10, int m11, int m12, int m20, int m21, int m22)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A98")]
	[Address(RVA = "0x4AE8870", Offset = "0x4AE8870", VA = "0x4AE8870")]
	public int3x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A99")]
	[Address(RVA = "0x4AE88A0", Offset = "0x4AE88A0", VA = "0x4AE88A0")]
	public int3x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A9A")]
	[Address(RVA = "0x4AE88D0", Offset = "0x4AE88D0", VA = "0x4AE88D0")]
	public int3x3(bool3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A9B")]
	[Address(RVA = "0x4AE8960", Offset = "0x4AE8960", VA = "0x4AE8960")]
	public int3x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A9C")]
	[Address(RVA = "0x4AE8990", Offset = "0x4AE8990", VA = "0x4AE8990")]
	public int3x3(uint3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A9D")]
	[Address(RVA = "0x4AE89C0", Offset = "0x4AE89C0", VA = "0x4AE89C0")]
	public int3x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A9E")]
	[Address(RVA = "0x4AE89F0", Offset = "0x4AE89F0", VA = "0x4AE89F0")]
	public int3x3(float3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001A9F")]
	[Address(RVA = "0x4AE8A70", Offset = "0x4AE8A70", VA = "0x4AE8A70")]
	public int3x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AA0")]
	[Address(RVA = "0x4AE8AA0", Offset = "0x4AE8AA0", VA = "0x4AE8AA0")]
	public int3x3(double3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AA1")]
	[Address(RVA = "0x4AE8B00", Offset = "0x4AE8B00", VA = "0x4AE8B00")]
	public static implicit operator int3x3(int v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AA2")]
	[Address(RVA = "0x4AE8B30", Offset = "0x4AE8B30", VA = "0x4AE8B30")]
	public static explicit operator int3x3(bool v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AA3")]
	[Address(RVA = "0x4AE8B60", Offset = "0x4AE8B60", VA = "0x4AE8B60")]
	public static explicit operator int3x3(bool3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AA4")]
	[Address(RVA = "0x4AE8BF0", Offset = "0x4AE8BF0", VA = "0x4AE8BF0")]
	public static explicit operator int3x3(uint v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AA5")]
	[Address(RVA = "0x4AE8C20", Offset = "0x4AE8C20", VA = "0x4AE8C20")]
	public static explicit operator int3x3(uint3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AA6")]
	[Address(RVA = "0x4AE8C60", Offset = "0x4AE8C60", VA = "0x4AE8C60")]
	public static explicit operator int3x3(float v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AA7")]
	[Address(RVA = "0x4AE8C90", Offset = "0x4AE8C90", VA = "0x4AE8C90")]
	public static explicit operator int3x3(float3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AA8")]
	[Address(RVA = "0x4AE8D10", Offset = "0x4AE8D10", VA = "0x4AE8D10")]
	public static explicit operator int3x3(double v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AA9")]
	[Address(RVA = "0x4AE8D40", Offset = "0x4AE8D40", VA = "0x4AE8D40")]
	public static explicit operator int3x3(double3x3 v)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AAA")]
	[Address(RVA = "0x4AE8DB0", Offset = "0x4AE8DB0", VA = "0x4AE8DB0")]
	public static int3x3 operator *(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AAB")]
	[Address(RVA = "0x4AE8E60", Offset = "0x4AE8E60", VA = "0x4AE8E60")]
	public static int3x3 operator *(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AAC")]
	[Address(RVA = "0x4AE8EE0", Offset = "0x4AE8EE0", VA = "0x4AE8EE0")]
	public static int3x3 operator *(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AAD")]
	[Address(RVA = "0x4AE8F60", Offset = "0x4AE8F60", VA = "0x4AE8F60")]
	public static int3x3 operator +(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AAE")]
	[Address(RVA = "0x4AE9000", Offset = "0x4AE9000", VA = "0x4AE9000")]
	public static int3x3 operator +(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AAF")]
	[Address(RVA = "0x4AE9070", Offset = "0x4AE9070", VA = "0x4AE9070")]
	public static int3x3 operator +(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AB0")]
	[Address(RVA = "0x4AE90E0", Offset = "0x4AE90E0", VA = "0x4AE90E0")]
	public static int3x3 operator -(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AB1")]
	[Address(RVA = "0x4AE9180", Offset = "0x4AE9180", VA = "0x4AE9180")]
	public static int3x3 operator -(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AB2")]
	[Address(RVA = "0x4AE9200", Offset = "0x4AE9200", VA = "0x4AE9200")]
	public static int3x3 operator -(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AB3")]
	[Address(RVA = "0x4AE9280", Offset = "0x4AE9280", VA = "0x4AE9280")]
	public static int3x3 operator /(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AB4")]
	[Address(RVA = "0x4AE9350", Offset = "0x4AE9350", VA = "0x4AE9350")]
	public static int3x3 operator /(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AB5")]
	[Address(RVA = "0x4AE9400", Offset = "0x4AE9400", VA = "0x4AE9400")]
	public static int3x3 operator /(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AB6")]
	[Address(RVA = "0x4AE94A0", Offset = "0x4AE94A0", VA = "0x4AE94A0")]
	public static int3x3 operator %(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AB7")]
	[Address(RVA = "0x4AE9570", Offset = "0x4AE9570", VA = "0x4AE9570")]
	public static int3x3 operator %(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AB8")]
	[Address(RVA = "0x4AE9620", Offset = "0x4AE9620", VA = "0x4AE9620")]
	public static int3x3 operator %(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AB9")]
	[Address(RVA = "0x4AE96C0", Offset = "0x4AE96C0", VA = "0x4AE96C0")]
	public static int3x3 operator ++(int3x3 val)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ABA")]
	[Address(RVA = "0x4AE9750", Offset = "0x4AE9750", VA = "0x4AE9750")]
	public static int3x3 operator --(int3x3 val)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ABB")]
	[Address(RVA = "0x4AE97E0", Offset = "0x4AE97E0", VA = "0x4AE97E0")]
	public static bool3x3 operator <(int3x3 lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ABC")]
	[Address(RVA = "0x4AE98D0", Offset = "0x4AE98D0", VA = "0x4AE98D0")]
	public static bool3x3 operator <(int3x3 lhs, int rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ABD")]
	[Address(RVA = "0x4AE99A0", Offset = "0x4AE99A0", VA = "0x4AE99A0")]
	public static bool3x3 operator <(int lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ABE")]
	[Address(RVA = "0x4AE9A70", Offset = "0x4AE9A70", VA = "0x4AE9A70")]
	public static bool3x3 operator <=(int3x3 lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ABF")]
	[Address(RVA = "0x4AE9B60", Offset = "0x4AE9B60", VA = "0x4AE9B60")]
	public static bool3x3 operator <=(int3x3 lhs, int rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC0")]
	[Address(RVA = "0x4AE9C30", Offset = "0x4AE9C30", VA = "0x4AE9C30")]
	public static bool3x3 operator <=(int lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC1")]
	[Address(RVA = "0x4AE9D00", Offset = "0x4AE9D00", VA = "0x4AE9D00")]
	public static bool3x3 operator >(int3x3 lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC2")]
	[Address(RVA = "0x4AE9DF0", Offset = "0x4AE9DF0", VA = "0x4AE9DF0")]
	public static bool3x3 operator >(int3x3 lhs, int rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC3")]
	[Address(RVA = "0x4AE9EC0", Offset = "0x4AE9EC0", VA = "0x4AE9EC0")]
	public static bool3x3 operator >(int lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC4")]
	[Address(RVA = "0x4AE9F90", Offset = "0x4AE9F90", VA = "0x4AE9F90")]
	public static bool3x3 operator >=(int3x3 lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC5")]
	[Address(RVA = "0x4AEA080", Offset = "0x4AEA080", VA = "0x4AEA080")]
	public static bool3x3 operator >=(int3x3 lhs, int rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC6")]
	[Address(RVA = "0x4AEA150", Offset = "0x4AEA150", VA = "0x4AEA150")]
	public static bool3x3 operator >=(int lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC7")]
	[Address(RVA = "0x4AEA220", Offset = "0x4AEA220", VA = "0x4AEA220")]
	public static int3x3 operator -(int3x3 val)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC8")]
	[Address(RVA = "0x4AEA290", Offset = "0x4AEA290", VA = "0x4AEA290")]
	public static int3x3 operator +(int3x3 val)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC9")]
	[Address(RVA = "0x4AEA2D0", Offset = "0x4AEA2D0", VA = "0x4AEA2D0")]
	public static int3x3 operator <<(int3x3 x, int n)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ACA")]
	[Address(RVA = "0x4AEA350", Offset = "0x4AEA350", VA = "0x4AEA350")]
	public static int3x3 operator >>(int3x3 x, int n)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ACB")]
	[Address(RVA = "0x4AEA3D0", Offset = "0x4AEA3D0", VA = "0x4AEA3D0")]
	public static bool3x3 operator ==(int3x3 lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ACC")]
	[Address(RVA = "0x4AEA4C0", Offset = "0x4AEA4C0", VA = "0x4AEA4C0")]
	public static bool3x3 operator ==(int3x3 lhs, int rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ACD")]
	[Address(RVA = "0x4AEA590", Offset = "0x4AEA590", VA = "0x4AEA590")]
	public static bool3x3 operator ==(int lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ACE")]
	[Address(RVA = "0x4AEA660", Offset = "0x4AEA660", VA = "0x4AEA660")]
	public static bool3x3 operator !=(int3x3 lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ACF")]
	[Address(RVA = "0x4AEA750", Offset = "0x4AEA750", VA = "0x4AEA750")]
	public static bool3x3 operator !=(int3x3 lhs, int rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD0")]
	[Address(RVA = "0x4AEA820", Offset = "0x4AEA820", VA = "0x4AEA820")]
	public static bool3x3 operator !=(int lhs, int3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD1")]
	[Address(RVA = "0x4AEA8F0", Offset = "0x4AEA8F0", VA = "0x4AEA8F0")]
	public static int3x3 operator ~(int3x3 val)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD2")]
	[Address(RVA = "0x4AEA940", Offset = "0x4AEA940", VA = "0x4AEA940")]
	public static int3x3 operator &(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD3")]
	[Address(RVA = "0x4AEA9A0", Offset = "0x4AEA9A0", VA = "0x4AEA9A0")]
	public static int3x3 operator &(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD4")]
	[Address(RVA = "0x4AEAA20", Offset = "0x4AEAA20", VA = "0x4AEAA20")]
	public static int3x3 operator &(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD5")]
	[Address(RVA = "0x4AEAAA0", Offset = "0x4AEAAA0", VA = "0x4AEAAA0")]
	public static int3x3 operator |(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD6")]
	[Address(RVA = "0x4AEAB00", Offset = "0x4AEAB00", VA = "0x4AEAB00")]
	public static int3x3 operator |(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD7")]
	[Address(RVA = "0x4AEAB80", Offset = "0x4AEAB80", VA = "0x4AEAB80")]
	public static int3x3 operator |(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD8")]
	[Address(RVA = "0x4AEAC00", Offset = "0x4AEAC00", VA = "0x4AEAC00")]
	public static int3x3 operator ^(int3x3 lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD9")]
	[Address(RVA = "0x4AEAC60", Offset = "0x4AEAC60", VA = "0x4AEAC60")]
	public static int3x3 operator ^(int3x3 lhs, int rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ADA")]
	[Address(RVA = "0x4AEACE0", Offset = "0x4AEACE0", VA = "0x4AEACE0")]
	public static int3x3 operator ^(int lhs, int3x3 rhs)
	{
		return default(int3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ADC")]
	[Address(RVA = "0x4AEAD70", Offset = "0x4AEAD70", VA = "0x4AEAD70", Slot = "4")]
	public bool Equals(int3x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001ADD")]
	[Address(RVA = "0x4AEADD0", Offset = "0x4AEADD0", VA = "0x4AEADD0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ADE")]
	[Address(RVA = "0x4AEAE80", Offset = "0x4AEAE80", VA = "0x4AEAE80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ADF")]
	[Address(RVA = "0x4AEAF30", Offset = "0x4AEAF30", VA = "0x4AEAF30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE0")]
	[Address(RVA = "0x4AEB2A0", Offset = "0x4AEB2A0", VA = "0x4AEB2A0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
