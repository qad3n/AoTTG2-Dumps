// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.int3x2
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
public struct int3x2 : IEquatable<int3x2>, IFormattable
{
	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x0")]
	public int3 c0;

	[Token(Token = "0x400010E")]
	[FieldOffset(Offset = "0xC")]
	public int3 c1;

	[Token(Token = "0x400010F")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int3x2 zero;

	[Token(Token = "0x17000846")]
	public unsafe ref int3 this[int index]
	{
		[Token(Token = "0x6001B03")]
		[Address(RVA = "0x647BA80", Offset = "0x647AA80", VA = "0x647BA80")]
		get
		{
			return ref *(int3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ABE")]
	[Address(RVA = "0x647A300", Offset = "0x6479300", VA = "0x647A300")]
	public int3x2(int3 c0, int3 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ABF")]
	[Address(RVA = "0x647A310", Offset = "0x6479310", VA = "0x647A310")]
	public int3x2(int m00, int m01, int m10, int m11, int m20, int m21)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC0")]
	[Address(RVA = "0x647A330", Offset = "0x6479330", VA = "0x647A330")]
	public int3x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC1")]
	[Address(RVA = "0x647A350", Offset = "0x6479350", VA = "0x647A350")]
	public int3x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC2")]
	[Address(RVA = "0x647A370", Offset = "0x6479370", VA = "0x647A370")]
	public int3x2(bool3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC3")]
	[Address(RVA = "0x647A3E0", Offset = "0x64793E0", VA = "0x647A3E0")]
	public int3x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC4")]
	[Address(RVA = "0x647A400", Offset = "0x6479400", VA = "0x647A400")]
	public int3x2(uint3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC5")]
	[Address(RVA = "0x647A420", Offset = "0x6479420", VA = "0x647A420")]
	public int3x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC6")]
	[Address(RVA = "0x647A440", Offset = "0x6479440", VA = "0x647A440")]
	public int3x2(float3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC7")]
	[Address(RVA = "0x647A490", Offset = "0x6479490", VA = "0x647A490")]
	public int3x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC8")]
	[Address(RVA = "0x647A4B0", Offset = "0x64794B0", VA = "0x647A4B0")]
	public int3x2(double3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AC9")]
	[Address(RVA = "0x647A4F0", Offset = "0x64794F0", VA = "0x647A4F0")]
	public static implicit operator int3x2(int v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ACA")]
	[Address(RVA = "0x647A510", Offset = "0x6479510", VA = "0x647A510")]
	public static explicit operator int3x2(bool v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ACB")]
	[Address(RVA = "0x647A540", Offset = "0x6479540", VA = "0x647A540")]
	public static explicit operator int3x2(bool3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ACC")]
	[Address(RVA = "0x647A5B0", Offset = "0x64795B0", VA = "0x647A5B0")]
	public static explicit operator int3x2(uint v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ACD")]
	[Address(RVA = "0x647A5D0", Offset = "0x64795D0", VA = "0x647A5D0")]
	public static explicit operator int3x2(uint3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ACE")]
	[Address(RVA = "0x647A600", Offset = "0x6479600", VA = "0x647A600")]
	public static explicit operator int3x2(float v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ACF")]
	[Address(RVA = "0x647A620", Offset = "0x6479620", VA = "0x647A620")]
	public static explicit operator int3x2(float3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD0")]
	[Address(RVA = "0x647A670", Offset = "0x6479670", VA = "0x647A670")]
	public static explicit operator int3x2(double v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD1")]
	[Address(RVA = "0x647A690", Offset = "0x6479690", VA = "0x647A690")]
	public static explicit operator int3x2(double3x2 v)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD2")]
	[Address(RVA = "0x647A6E0", Offset = "0x64796E0", VA = "0x647A6E0")]
	public static int3x2 operator *(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD3")]
	[Address(RVA = "0x647A750", Offset = "0x6479750", VA = "0x647A750")]
	public static int3x2 operator *(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD4")]
	[Address(RVA = "0x647A7B0", Offset = "0x64797B0", VA = "0x647A7B0")]
	public static int3x2 operator *(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD5")]
	[Address(RVA = "0x647A810", Offset = "0x6479810", VA = "0x647A810")]
	public static int3x2 operator +(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD6")]
	[Address(RVA = "0x647A880", Offset = "0x6479880", VA = "0x647A880")]
	public static int3x2 operator +(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD7")]
	[Address(RVA = "0x647A8D0", Offset = "0x64798D0", VA = "0x647A8D0")]
	public static int3x2 operator +(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD8")]
	[Address(RVA = "0x647A920", Offset = "0x6479920", VA = "0x647A920")]
	public static int3x2 operator -(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AD9")]
	[Address(RVA = "0x647A990", Offset = "0x6479990", VA = "0x647A990")]
	public static int3x2 operator -(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ADA")]
	[Address(RVA = "0x647A9F0", Offset = "0x64799F0", VA = "0x647A9F0")]
	public static int3x2 operator -(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ADB")]
	[Address(RVA = "0x647AA40", Offset = "0x6479A40", VA = "0x647AA40")]
	public static int3x2 operator /(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ADC")]
	[Address(RVA = "0x647AAD0", Offset = "0x6479AD0", VA = "0x647AAD0")]
	public static int3x2 operator /(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ADD")]
	[Address(RVA = "0x647AB40", Offset = "0x6479B40", VA = "0x647AB40")]
	public static int3x2 operator /(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ADE")]
	[Address(RVA = "0x647ABB0", Offset = "0x6479BB0", VA = "0x647ABB0")]
	public static int3x2 operator %(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001ADF")]
	[Address(RVA = "0x647AC40", Offset = "0x6479C40", VA = "0x647AC40")]
	public static int3x2 operator %(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE0")]
	[Address(RVA = "0x647ACB0", Offset = "0x6479CB0", VA = "0x647ACB0")]
	public static int3x2 operator %(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE1")]
	[Address(RVA = "0x647AD20", Offset = "0x6479D20", VA = "0x647AD20")]
	public static int3x2 operator ++(int3x2 val)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE2")]
	[Address(RVA = "0x647AD80", Offset = "0x6479D80", VA = "0x647AD80")]
	public static int3x2 operator --(int3x2 val)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE3")]
	[Address(RVA = "0x647ADD0", Offset = "0x6479DD0", VA = "0x647ADD0")]
	public static bool3x2 operator <(int3x2 lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE4")]
	[Address(RVA = "0x647AE60", Offset = "0x6479E60", VA = "0x647AE60")]
	public static bool3x2 operator <(int3x2 lhs, int rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE5")]
	[Address(RVA = "0x647AED0", Offset = "0x6479ED0", VA = "0x647AED0")]
	public static bool3x2 operator <(int lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE6")]
	[Address(RVA = "0x647AF40", Offset = "0x6479F40", VA = "0x647AF40")]
	public static bool3x2 operator <=(int3x2 lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE7")]
	[Address(RVA = "0x647AFD0", Offset = "0x6479FD0", VA = "0x647AFD0")]
	public static bool3x2 operator <=(int3x2 lhs, int rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE8")]
	[Address(RVA = "0x647B040", Offset = "0x647A040", VA = "0x647B040")]
	public static bool3x2 operator <=(int lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AE9")]
	[Address(RVA = "0x647B0B0", Offset = "0x647A0B0", VA = "0x647B0B0")]
	public static bool3x2 operator >(int3x2 lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AEA")]
	[Address(RVA = "0x647B140", Offset = "0x647A140", VA = "0x647B140")]
	public static bool3x2 operator >(int3x2 lhs, int rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AEB")]
	[Address(RVA = "0x647B1B0", Offset = "0x647A1B0", VA = "0x647B1B0")]
	public static bool3x2 operator >(int lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AEC")]
	[Address(RVA = "0x647B220", Offset = "0x647A220", VA = "0x647B220")]
	public static bool3x2 operator >=(int3x2 lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AED")]
	[Address(RVA = "0x647B2B0", Offset = "0x647A2B0", VA = "0x647B2B0")]
	public static bool3x2 operator >=(int3x2 lhs, int rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AEE")]
	[Address(RVA = "0x647B320", Offset = "0x647A320", VA = "0x647B320")]
	public static bool3x2 operator >=(int lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AEF")]
	[Address(RVA = "0x647B390", Offset = "0x647A390", VA = "0x647B390")]
	public static int3x2 operator -(int3x2 val)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF0")]
	[Address(RVA = "0x647B3E0", Offset = "0x647A3E0", VA = "0x647B3E0")]
	public static int3x2 operator +(int3x2 val)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF1")]
	[Address(RVA = "0x647B410", Offset = "0x647A410", VA = "0x647B410")]
	public static int3x2 operator <<(int3x2 x, int n)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF2")]
	[Address(RVA = "0x647B470", Offset = "0x647A470", VA = "0x647B470")]
	public static int3x2 operator >>(int3x2 x, int n)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF3")]
	[Address(RVA = "0x647B4D0", Offset = "0x647A4D0", VA = "0x647B4D0")]
	public static bool3x2 operator ==(int3x2 lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF4")]
	[Address(RVA = "0x647B560", Offset = "0x647A560", VA = "0x647B560")]
	public static bool3x2 operator ==(int3x2 lhs, int rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF5")]
	[Address(RVA = "0x647B5D0", Offset = "0x647A5D0", VA = "0x647B5D0")]
	public static bool3x2 operator ==(int lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF6")]
	[Address(RVA = "0x647B640", Offset = "0x647A640", VA = "0x647B640")]
	public static bool3x2 operator !=(int3x2 lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF7")]
	[Address(RVA = "0x647B6D0", Offset = "0x647A6D0", VA = "0x647B6D0")]
	public static bool3x2 operator !=(int3x2 lhs, int rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF8")]
	[Address(RVA = "0x647B740", Offset = "0x647A740", VA = "0x647B740")]
	public static bool3x2 operator !=(int lhs, int3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AF9")]
	[Address(RVA = "0x647B7B0", Offset = "0x647A7B0", VA = "0x647B7B0")]
	public static int3x2 operator ~(int3x2 val)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFA")]
	[Address(RVA = "0x647B7E0", Offset = "0x647A7E0", VA = "0x647B7E0")]
	public static int3x2 operator &(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFB")]
	[Address(RVA = "0x647B820", Offset = "0x647A820", VA = "0x647B820")]
	public static int3x2 operator &(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFC")]
	[Address(RVA = "0x647B870", Offset = "0x647A870", VA = "0x647B870")]
	public static int3x2 operator &(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFD")]
	[Address(RVA = "0x647B8C0", Offset = "0x647A8C0", VA = "0x647B8C0")]
	public static int3x2 operator |(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFE")]
	[Address(RVA = "0x647B900", Offset = "0x647A900", VA = "0x647B900")]
	public static int3x2 operator |(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001AFF")]
	[Address(RVA = "0x647B950", Offset = "0x647A950", VA = "0x647B950")]
	public static int3x2 operator |(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B00")]
	[Address(RVA = "0x647B9A0", Offset = "0x647A9A0", VA = "0x647B9A0")]
	public static int3x2 operator ^(int3x2 lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B01")]
	[Address(RVA = "0x647B9E0", Offset = "0x647A9E0", VA = "0x647B9E0")]
	public static int3x2 operator ^(int3x2 lhs, int rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B02")]
	[Address(RVA = "0x647BA30", Offset = "0x647AA30", VA = "0x647BA30")]
	public static int3x2 operator ^(int lhs, int3x2 rhs)
	{
		return default(int3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B04")]
	[Address(RVA = "0x647BA90", Offset = "0x647AA90", VA = "0x647BA90", Slot = "4")]
	public bool Equals(int3x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B05")]
	[Address(RVA = "0x647BAD0", Offset = "0x647AAD0", VA = "0x647BAD0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B06")]
	[Address(RVA = "0x647BB60", Offset = "0x647AB60", VA = "0x647BB60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B07")]
	[Address(RVA = "0x647BBC0", Offset = "0x647ABC0", VA = "0x647BBC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B08")]
	[Address(RVA = "0x647BE40", Offset = "0x647AE40", VA = "0x647BE40", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
