using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x200003A")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct half : IEquatable<half>, IFormattable
{
	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0x0")]
	public ushort value;

	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x0")]
	public static readonly half zero;

	[Token(Token = "0x170005C8")]
	public static float MaxValue
	{
		[Token(Token = "0x60015C2")]
		[Address(RVA = "0x47D1E80", Offset = "0x47D1E80", VA = "0x47D1E80")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170005C9")]
	public static float MinValue
	{
		[Token(Token = "0x60015C3")]
		[Address(RVA = "0x47D1E90", Offset = "0x47D1E90", VA = "0x47D1E90")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170005CA")]
	public static half MaxValueAsHalf
	{
		[Token(Token = "0x60015C4")]
		[Address(RVA = "0x47D1EA0", Offset = "0x47D1EA0", VA = "0x47D1EA0")]
		get
		{
			return default(half);
		}
	}

	[Token(Token = "0x170005CB")]
	public static half MinValueAsHalf
	{
		[Token(Token = "0x60015C5")]
		[Address(RVA = "0x47D1EB0", Offset = "0x47D1EB0", VA = "0x47D1EB0")]
		get
		{
			return default(half);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015C6")]
	[Address(RVA = "0x47D1EC0", Offset = "0x47D1EC0", VA = "0x47D1EC0")]
	public half(half x)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015C7")]
	[Address(RVA = "0x47D1ED0", Offset = "0x47D1ED0", VA = "0x47D1ED0")]
	public half(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015C8")]
	[Address(RVA = "0x47D1F30", Offset = "0x47D1F30", VA = "0x47D1F30")]
	public half(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015C9")]
	[Address(RVA = "0x47D1F90", Offset = "0x47D1F90", VA = "0x47D1F90")]
	public static explicit operator half(float v)
	{
		return default(half);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015CA")]
	[Address(RVA = "0x47D1FF0", Offset = "0x47D1FF0", VA = "0x47D1FF0")]
	public static explicit operator half(double v)
	{
		return default(half);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015CB")]
	[Address(RVA = "0x47D2050", Offset = "0x47D2050", VA = "0x47D2050")]
	public static implicit operator float(half d)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015CC")]
	[Address(RVA = "0x47D20B0", Offset = "0x47D20B0", VA = "0x47D20B0")]
	public static implicit operator double(half d)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015CD")]
	[Address(RVA = "0x47D2110", Offset = "0x47D2110", VA = "0x47D2110")]
	public static bool operator ==(half lhs, half rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015CE")]
	[Address(RVA = "0x47D2120", Offset = "0x47D2120", VA = "0x47D2120")]
	public static bool operator !=(half lhs, half rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015CF")]
	[Address(RVA = "0x47D2130", Offset = "0x47D2130", VA = "0x47D2130", Slot = "4")]
	public bool Equals(half rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60015D0")]
	[Address(RVA = "0x47D2140", Offset = "0x47D2140", VA = "0x47D2140", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D1")]
	[Address(RVA = "0x47D21A0", Offset = "0x47D21A0", VA = "0x47D21A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D2")]
	[Address(RVA = "0x47D21B0", Offset = "0x47D21B0", VA = "0x47D21B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60015D3")]
	[Address(RVA = "0x47D2220", Offset = "0x47D2220", VA = "0x47D2220", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
