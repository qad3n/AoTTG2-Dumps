using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000015")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct bool3x3 : IEquatable<bool3x3>
{
	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x0")]
	public bool3 c0;

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x3")]
	public bool3 c1;

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x6")]
	public bool3 c2;

	[Token(Token = "0x17000098")]
	public unsafe ref bool3 this[int index]
	{
		[Token(Token = "0x60008EF")]
		[Address(RVA = "0x477E6B0", Offset = "0x477E6B0", VA = "0x477E6B0")]
		get
		{
			return ref *(bool3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008DB")]
	[Address(RVA = "0x477DB90", Offset = "0x477DB90", VA = "0x477DB90")]
	public bool3x3(bool3 c0, bool3 c1, bool3 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008DC")]
	[Address(RVA = "0x477DBB0", Offset = "0x477DBB0", VA = "0x477DBB0")]
	public bool3x3(bool m00, bool m01, bool m02, bool m10, bool m11, bool m12, bool m20, bool m21, bool m22)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008DD")]
	[Address(RVA = "0x477DBF0", Offset = "0x477DBF0", VA = "0x477DBF0")]
	public bool3x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008DE")]
	[Address(RVA = "0x477DC10", Offset = "0x477DC10", VA = "0x477DC10")]
	public static implicit operator bool3x3(bool v)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008DF")]
	[Address(RVA = "0x477DC40", Offset = "0x477DC40", VA = "0x477DC40")]
	public static bool3x3 operator ==(bool3x3 lhs, bool3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x477DCC0", Offset = "0x477DCC0", VA = "0x477DCC0")]
	public static bool3x3 operator ==(bool3x3 lhs, bool rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E1")]
	[Address(RVA = "0x477DDA0", Offset = "0x477DDA0", VA = "0x477DDA0")]
	public static bool3x3 operator ==(bool lhs, bool3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E2")]
	[Address(RVA = "0x477DE80", Offset = "0x477DE80", VA = "0x477DE80")]
	public static bool3x3 operator !=(bool3x3 lhs, bool3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E3")]
	[Address(RVA = "0x477DEF0", Offset = "0x477DEF0", VA = "0x477DEF0")]
	public static bool3x3 operator !=(bool3x3 lhs, bool rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E4")]
	[Address(RVA = "0x477DFB0", Offset = "0x477DFB0", VA = "0x477DFB0")]
	public static bool3x3 operator !=(bool lhs, bool3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E5")]
	[Address(RVA = "0x477E070", Offset = "0x477E070", VA = "0x477E070")]
	public static bool3x3 operator !(bool3x3 val)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E6")]
	[Address(RVA = "0x477E0D0", Offset = "0x477E0D0", VA = "0x477E0D0")]
	public static bool3x3 operator &(bool3x3 lhs, bool3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E7")]
	[Address(RVA = "0x477E150", Offset = "0x477E150", VA = "0x477E150")]
	public static bool3x3 operator &(bool3x3 lhs, bool rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E8")]
	[Address(RVA = "0x477E1F0", Offset = "0x477E1F0", VA = "0x477E1F0")]
	public static bool3x3 operator &(bool lhs, bool3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008E9")]
	[Address(RVA = "0x477E290", Offset = "0x477E290", VA = "0x477E290")]
	public static bool3x3 operator |(bool3x3 lhs, bool3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008EA")]
	[Address(RVA = "0x477E300", Offset = "0x477E300", VA = "0x477E300")]
	public static bool3x3 operator |(bool3x3 lhs, bool rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008EB")]
	[Address(RVA = "0x477E3C0", Offset = "0x477E3C0", VA = "0x477E3C0")]
	public static bool3x3 operator |(bool lhs, bool3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x477E480", Offset = "0x477E480", VA = "0x477E480")]
	public static bool3x3 operator ^(bool3x3 lhs, bool3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008ED")]
	[Address(RVA = "0x477E4F0", Offset = "0x477E4F0", VA = "0x477E4F0")]
	public static bool3x3 operator ^(bool3x3 lhs, bool rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x477E5D0", Offset = "0x477E5D0", VA = "0x477E5D0")]
	public static bool3x3 operator ^(bool lhs, bool3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F0")]
	[Address(RVA = "0x477E6C0", Offset = "0x477E6C0", VA = "0x477E6C0", Slot = "4")]
	public bool Equals(bool3x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60008F1")]
	[Address(RVA = "0x477E770", Offset = "0x477E770", VA = "0x477E770", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F2")]
	[Address(RVA = "0x477E890", Offset = "0x477E890", VA = "0x477E890", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60008F3")]
	[Address(RVA = "0x477E9B0", Offset = "0x477E9B0", VA = "0x477E9B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
