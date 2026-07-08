using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000056")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct uint2x3 : IEquatable<uint2x3>, IFormattable
{
	[Token(Token = "0x4000138")]
	[FieldOffset(Offset = "0x0")]
	public uint2 c0;

	[Token(Token = "0x4000139")]
	[FieldOffset(Offset = "0x8")]
	public uint2 c1;

	[Token(Token = "0x400013A")]
	[FieldOffset(Offset = "0x10")]
	public uint2 c2;

	[Token(Token = "0x400013B")]
	[FieldOffset(Offset = "0x0")]
	public static readonly uint2x3 zero;

	[Token(Token = "0x170009BB")]
	public unsafe ref uint2 this[int index]
	{
		[Token(Token = "0x6001F93")]
		[Address(RVA = "0x4806150", Offset = "0x4806150", VA = "0x4806150")]
		get
		{
			return ref *(uint2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F4E")]
	[Address(RVA = "0x4804690", Offset = "0x4804690", VA = "0x4804690")]
	public uint2x3(uint2 c0, uint2 c1, uint2 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F4F")]
	[Address(RVA = "0x48046A0", Offset = "0x48046A0", VA = "0x48046A0")]
	public uint2x3(uint m00, uint m01, uint m02, uint m10, uint m11, uint m12)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F50")]
	[Address(RVA = "0x48046D0", Offset = "0x48046D0", VA = "0x48046D0")]
	public uint2x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F51")]
	[Address(RVA = "0x48046F0", Offset = "0x48046F0", VA = "0x48046F0")]
	public uint2x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F52")]
	[Address(RVA = "0x4804710", Offset = "0x4804710", VA = "0x4804710")]
	public uint2x3(bool2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F53")]
	[Address(RVA = "0x4804790", Offset = "0x4804790", VA = "0x4804790")]
	public uint2x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F54")]
	[Address(RVA = "0x48047B0", Offset = "0x48047B0", VA = "0x48047B0")]
	public uint2x3(int2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F55")]
	[Address(RVA = "0x48047D0", Offset = "0x48047D0", VA = "0x48047D0")]
	public uint2x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F56")]
	[Address(RVA = "0x4804800", Offset = "0x4804800", VA = "0x4804800")]
	public uint2x3(float2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F57")]
	[Address(RVA = "0x48048A0", Offset = "0x48048A0", VA = "0x48048A0")]
	public uint2x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F58")]
	[Address(RVA = "0x48048D0", Offset = "0x48048D0", VA = "0x48048D0")]
	public uint2x3(double2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F59")]
	[Address(RVA = "0x4804980", Offset = "0x4804980", VA = "0x4804980")]
	public static implicit operator uint2x3(uint v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F5A")]
	[Address(RVA = "0x48049A0", Offset = "0x48049A0", VA = "0x48049A0")]
	public static explicit operator uint2x3(bool v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F5B")]
	[Address(RVA = "0x48049D0", Offset = "0x48049D0", VA = "0x48049D0")]
	public static explicit operator uint2x3(bool2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F5C")]
	[Address(RVA = "0x4804A50", Offset = "0x4804A50", VA = "0x4804A50")]
	public static explicit operator uint2x3(int v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F5D")]
	[Address(RVA = "0x4804A70", Offset = "0x4804A70", VA = "0x4804A70")]
	public static explicit operator uint2x3(int2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F5E")]
	[Address(RVA = "0x4804A90", Offset = "0x4804A90", VA = "0x4804A90")]
	public static explicit operator uint2x3(float v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F5F")]
	[Address(RVA = "0x4804AC0", Offset = "0x4804AC0", VA = "0x4804AC0")]
	public static explicit operator uint2x3(float2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F60")]
	[Address(RVA = "0x4804B70", Offset = "0x4804B70", VA = "0x4804B70")]
	public static explicit operator uint2x3(double v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F61")]
	[Address(RVA = "0x4804BA0", Offset = "0x4804BA0", VA = "0x4804BA0")]
	public static explicit operator uint2x3(double2x3 v)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F62")]
	[Address(RVA = "0x4804C50", Offset = "0x4804C50", VA = "0x4804C50")]
	public static uint2x3 operator *(uint2x3 lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F63")]
	[Address(RVA = "0x4804CD0", Offset = "0x4804CD0", VA = "0x4804CD0")]
	public static uint2x3 operator *(uint2x3 lhs, uint rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F64")]
	[Address(RVA = "0x4804D30", Offset = "0x4804D30", VA = "0x4804D30")]
	public static uint2x3 operator *(uint lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F65")]
	[Address(RVA = "0x4804D90", Offset = "0x4804D90", VA = "0x4804D90")]
	public static uint2x3 operator +(uint2x3 lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F66")]
	[Address(RVA = "0x4804DF0", Offset = "0x4804DF0", VA = "0x4804DF0")]
	public static uint2x3 operator +(uint2x3 lhs, uint rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F67")]
	[Address(RVA = "0x4804E50", Offset = "0x4804E50", VA = "0x4804E50")]
	public static uint2x3 operator +(uint lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F68")]
	[Address(RVA = "0x4804EB0", Offset = "0x4804EB0", VA = "0x4804EB0")]
	public static uint2x3 operator -(uint2x3 lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F69")]
	[Address(RVA = "0x4804F20", Offset = "0x4804F20", VA = "0x4804F20")]
	public static uint2x3 operator -(uint2x3 lhs, uint rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F6A")]
	[Address(RVA = "0x4804F80", Offset = "0x4804F80", VA = "0x4804F80")]
	public static uint2x3 operator -(uint lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F6B")]
	[Address(RVA = "0x4804FE0", Offset = "0x4804FE0", VA = "0x4804FE0")]
	public static uint2x3 operator /(uint2x3 lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F6C")]
	[Address(RVA = "0x4805070", Offset = "0x4805070", VA = "0x4805070")]
	public static uint2x3 operator /(uint2x3 lhs, uint rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F6D")]
	[Address(RVA = "0x48050F0", Offset = "0x48050F0", VA = "0x48050F0")]
	public static uint2x3 operator /(uint lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F6E")]
	[Address(RVA = "0x4805160", Offset = "0x4805160", VA = "0x4805160")]
	public static uint2x3 operator %(uint2x3 lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F6F")]
	[Address(RVA = "0x48051F0", Offset = "0x48051F0", VA = "0x48051F0")]
	public static uint2x3 operator %(uint2x3 lhs, uint rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F70")]
	[Address(RVA = "0x4805270", Offset = "0x4805270", VA = "0x4805270")]
	public static uint2x3 operator %(uint lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F71")]
	[Address(RVA = "0x48052E0", Offset = "0x48052E0", VA = "0x48052E0")]
	public static uint2x3 operator ++(uint2x3 val)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F72")]
	[Address(RVA = "0x4805340", Offset = "0x4805340", VA = "0x4805340")]
	public static uint2x3 operator --(uint2x3 val)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F73")]
	[Address(RVA = "0x48053A0", Offset = "0x48053A0", VA = "0x48053A0")]
	public static bool2x3 operator <(uint2x3 lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F74")]
	[Address(RVA = "0x4805440", Offset = "0x4805440", VA = "0x4805440")]
	public static bool2x3 operator <(uint2x3 lhs, uint rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F75")]
	[Address(RVA = "0x48054C0", Offset = "0x48054C0", VA = "0x48054C0")]
	public static bool2x3 operator <(uint lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F76")]
	[Address(RVA = "0x4805540", Offset = "0x4805540", VA = "0x4805540")]
	public static bool2x3 operator <=(uint2x3 lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F77")]
	[Address(RVA = "0x48055E0", Offset = "0x48055E0", VA = "0x48055E0")]
	public static bool2x3 operator <=(uint2x3 lhs, uint rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F78")]
	[Address(RVA = "0x4805660", Offset = "0x4805660", VA = "0x4805660")]
	public static bool2x3 operator <=(uint lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F79")]
	[Address(RVA = "0x48056E0", Offset = "0x48056E0", VA = "0x48056E0")]
	public static bool2x3 operator >(uint2x3 lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F7A")]
	[Address(RVA = "0x4805780", Offset = "0x4805780", VA = "0x4805780")]
	public static bool2x3 operator >(uint2x3 lhs, uint rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F7B")]
	[Address(RVA = "0x4805800", Offset = "0x4805800", VA = "0x4805800")]
	public static bool2x3 operator >(uint lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F7C")]
	[Address(RVA = "0x4805880", Offset = "0x4805880", VA = "0x4805880")]
	public static bool2x3 operator >=(uint2x3 lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F7D")]
	[Address(RVA = "0x4805920", Offset = "0x4805920", VA = "0x4805920")]
	public static bool2x3 operator >=(uint2x3 lhs, uint rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F7E")]
	[Address(RVA = "0x48059A0", Offset = "0x48059A0", VA = "0x48059A0")]
	public static bool2x3 operator >=(uint lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F7F")]
	[Address(RVA = "0x4805A20", Offset = "0x4805A20", VA = "0x4805A20")]
	public static uint2x3 operator -(uint2x3 val)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F80")]
	[Address(RVA = "0x4805A70", Offset = "0x4805A70", VA = "0x4805A70")]
	public static uint2x3 operator +(uint2x3 val)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F81")]
	[Address(RVA = "0x4805A90", Offset = "0x4805A90", VA = "0x4805A90")]
	public static uint2x3 operator <<(uint2x3 x, int n)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F82")]
	[Address(RVA = "0x4805AF0", Offset = "0x4805AF0", VA = "0x4805AF0")]
	public static uint2x3 operator >>(uint2x3 x, int n)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F83")]
	[Address(RVA = "0x4805B50", Offset = "0x4805B50", VA = "0x4805B50")]
	public static bool2x3 operator ==(uint2x3 lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F84")]
	[Address(RVA = "0x4805BF0", Offset = "0x4805BF0", VA = "0x4805BF0")]
	public static bool2x3 operator ==(uint2x3 lhs, uint rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F85")]
	[Address(RVA = "0x4805C70", Offset = "0x4805C70", VA = "0x4805C70")]
	public static bool2x3 operator ==(uint lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F86")]
	[Address(RVA = "0x4805CF0", Offset = "0x4805CF0", VA = "0x4805CF0")]
	public static bool2x3 operator !=(uint2x3 lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F87")]
	[Address(RVA = "0x4805D90", Offset = "0x4805D90", VA = "0x4805D90")]
	public static bool2x3 operator !=(uint2x3 lhs, uint rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F88")]
	[Address(RVA = "0x4805E10", Offset = "0x4805E10", VA = "0x4805E10")]
	public static bool2x3 operator !=(uint lhs, uint2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F89")]
	[Address(RVA = "0x4805E90", Offset = "0x4805E90", VA = "0x4805E90")]
	public static uint2x3 operator ~(uint2x3 val)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F8A")]
	[Address(RVA = "0x4805EB0", Offset = "0x4805EB0", VA = "0x4805EB0")]
	public static uint2x3 operator &(uint2x3 lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F8B")]
	[Address(RVA = "0x4805ED0", Offset = "0x4805ED0", VA = "0x4805ED0")]
	public static uint2x3 operator &(uint2x3 lhs, uint rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F8C")]
	[Address(RVA = "0x4805F30", Offset = "0x4805F30", VA = "0x4805F30")]
	public static uint2x3 operator &(uint lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F8D")]
	[Address(RVA = "0x4805F90", Offset = "0x4805F90", VA = "0x4805F90")]
	public static uint2x3 operator |(uint2x3 lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F8E")]
	[Address(RVA = "0x4805FB0", Offset = "0x4805FB0", VA = "0x4805FB0")]
	public static uint2x3 operator |(uint2x3 lhs, uint rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F8F")]
	[Address(RVA = "0x4806010", Offset = "0x4806010", VA = "0x4806010")]
	public static uint2x3 operator |(uint lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F90")]
	[Address(RVA = "0x4806070", Offset = "0x4806070", VA = "0x4806070")]
	public static uint2x3 operator ^(uint2x3 lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F91")]
	[Address(RVA = "0x4806090", Offset = "0x4806090", VA = "0x4806090")]
	public static uint2x3 operator ^(uint2x3 lhs, uint rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F92")]
	[Address(RVA = "0x48060F0", Offset = "0x48060F0", VA = "0x48060F0")]
	public static uint2x3 operator ^(uint lhs, uint2x3 rhs)
	{
		return default(uint2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F94")]
	[Address(RVA = "0x4806160", Offset = "0x4806160", VA = "0x4806160", Slot = "4")]
	public bool Equals(uint2x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001F95")]
	[Address(RVA = "0x48061A0", Offset = "0x48061A0", VA = "0x48061A0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F96")]
	[Address(RVA = "0x4806230", Offset = "0x4806230", VA = "0x4806230", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F97")]
	[Address(RVA = "0x48062B0", Offset = "0x48062B0", VA = "0x48062B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001F98")]
	[Address(RVA = "0x4806520", Offset = "0x4806520", VA = "0x4806520", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
