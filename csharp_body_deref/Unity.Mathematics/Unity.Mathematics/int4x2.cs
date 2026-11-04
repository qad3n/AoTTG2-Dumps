// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.int4x2
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
[Token(Token = "0x200004B")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int4x2 : IEquatable<int4x2>, IFormattable
{
	[Token(Token = "0x4000123")]
	[FieldOffset(Offset = "0x0")]
	public int4 c0;

	[Token(Token = "0x4000124")]
	[FieldOffset(Offset = "0x10")]
	public int4 c1;

	[Token(Token = "0x4000125")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int4x2 zero;

	[Token(Token = "0x1700099A")]
	public unsafe ref int4 this[int index]
	{
		[Token(Token = "0x6001DC4")]
		[Address(RVA = "0x841B00", Offset = "0x840100", VA = "0x180841B00")]
		get
		{
			return ref *(int4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D7F")]
	[Address(RVA = "0x547570", Offset = "0x545B70", VA = "0x180547570")]
	public int4x2(int4 c0, int4 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D80")]
	[Address(RVA = "0x2A3B260", Offset = "0x2A39860", VA = "0x182A3B260")]
	public int4x2(int m00, int m01, int m10, int m11, int m20, int m21, int m30, int m31)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D81")]
	[Address(RVA = "0x2A3B1C0", Offset = "0x2A397C0", VA = "0x182A3B1C0")]
	public int4x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D82")]
	[Address(RVA = "0x2A3B1E0", Offset = "0x2A397E0", VA = "0x182A3B1E0")]
	public int4x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D83")]
	[Address(RVA = "0x2A3B290", Offset = "0x2A39890", VA = "0x182A3B290")]
	public int4x2(bool4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D84")]
	[Address(RVA = "0x2A3B1C0", Offset = "0x2A397C0", VA = "0x182A3B1C0")]
	public int4x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D85")]
	[Address(RVA = "0x2A3B220", Offset = "0x2A39820", VA = "0x182A3B220")]
	public int4x2(uint4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D86")]
	[Address(RVA = "0x2AAEB30", Offset = "0x2AAD130", VA = "0x182AAEB30")]
	public int4x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D87")]
	[Address(RVA = "0x2AAEBD0", Offset = "0x2AAD1D0", VA = "0x182AAEBD0")]
	public int4x2(float4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D88")]
	[Address(RVA = "0x2AAEB90", Offset = "0x2AAD190", VA = "0x182AAEB90")]
	public int4x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D89")]
	[Address(RVA = "0x2AAEB50", Offset = "0x2AAD150", VA = "0x182AAEB50")]
	public int4x2(double4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D8A")]
	[Address(RVA = "0x29EBB30", Offset = "0x29EA130", VA = "0x1829EBB30")]
	public static implicit operator int4x2(int v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D8B")]
	[Address(RVA = "0x29EBBD0", Offset = "0x29EA1D0", VA = "0x1829EBBD0")]
	public static explicit operator int4x2(bool v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D8C")]
	[Address(RVA = "0x29EBC90", Offset = "0x29EA290", VA = "0x1829EBC90")]
	public static explicit operator int4x2(bool4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D8D")]
	[Address(RVA = "0x29EBB30", Offset = "0x29EA130", VA = "0x1829EBB30")]
	public static explicit operator int4x2(uint v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D8E")]
	[Address(RVA = "0x29EBB50", Offset = "0x29EA150", VA = "0x1829EBB50")]
	public static explicit operator int4x2(uint4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D8F")]
	[Address(RVA = "0x29EBBA0", Offset = "0x29EA1A0", VA = "0x1829EBBA0")]
	public static explicit operator int4x2(float v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D90")]
	[Address(RVA = "0x29EBC20", Offset = "0x29EA220", VA = "0x1829EBC20")]
	public static explicit operator int4x2(float4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D91")]
	[Address(RVA = "0x29EBA80", Offset = "0x29EA080", VA = "0x1829EBA80")]
	public static explicit operator int4x2(double v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D92")]
	[Address(RVA = "0x29EBAC0", Offset = "0x29EA0C0", VA = "0x1829EBAC0")]
	public static explicit operator int4x2(double4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D93")]
	[Address(RVA = "0x2A3C420", Offset = "0x2A3AA20", VA = "0x182A3C420")]
	public static int4x2 operator *(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D94")]
	[Address(RVA = "0x2A3C340", Offset = "0x2A3A940", VA = "0x182A3C340")]
	public static int4x2 operator *(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D95")]
	[Address(RVA = "0x2A3C3B0", Offset = "0x2A3A9B0", VA = "0x182A3C3B0")]
	public static int4x2 operator *(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D96")]
	[Address(RVA = "0x2AAEC40", Offset = "0x2AAD240", VA = "0x182AAEC40")]
	public static int4x2 operator +(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D97")]
	[Address(RVA = "0x2AAEBF0", Offset = "0x2AAD1F0", VA = "0x182AAEBF0")]
	public static int4x2 operator +(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D98")]
	[Address(RVA = "0x2AAEC80", Offset = "0x2AAD280", VA = "0x182AAEC80")]
	public static int4x2 operator +(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D99")]
	[Address(RVA = "0x2AAF570", Offset = "0x2AADB70", VA = "0x182AAF570")]
	public static int4x2 operator -(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D9A")]
	[Address(RVA = "0x2AAF4D0", Offset = "0x2AADAD0", VA = "0x182AAF4D0")]
	public static int4x2 operator -(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D9B")]
	[Address(RVA = "0x2AAF520", Offset = "0x2AADB20", VA = "0x182AAF520")]
	public static int4x2 operator -(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D9C")]
	[Address(RVA = "0x2AAEDE0", Offset = "0x2AAD3E0", VA = "0x182AAEDE0")]
	public static int4x2 operator /(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D9D")]
	[Address(RVA = "0x2AAED00", Offset = "0x2AAD300", VA = "0x182AAED00")]
	public static int4x2 operator /(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D9E")]
	[Address(RVA = "0x2AAED70", Offset = "0x2AAD370", VA = "0x182AAED70")]
	public static int4x2 operator /(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D9F")]
	[Address(RVA = "0x2AAF400", Offset = "0x2AADA00", VA = "0x182AAF400")]
	public static int4x2 operator %(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA0")]
	[Address(RVA = "0x2AAF320", Offset = "0x2AAD920", VA = "0x182AAF320")]
	public static int4x2 operator %(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA1")]
	[Address(RVA = "0x2AAF390", Offset = "0x2AAD990", VA = "0x182AAF390")]
	public static int4x2 operator %(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA2")]
	[Address(RVA = "0x2A3BD60", Offset = "0x2A3A360", VA = "0x182A3BD60")]
	public static int4x2 operator ++(int4x2 val)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA3")]
	[Address(RVA = "0x2AAECD0", Offset = "0x2AAD2D0", VA = "0x182AAECD0")]
	public static int4x2 operator --(int4x2 val)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA4")]
	[Address(RVA = "0x2AAF250", Offset = "0x2AAD850", VA = "0x182AAF250")]
	public static bool4x2 operator <(int4x2 lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA5")]
	[Address(RVA = "0x2AAF2C0", Offset = "0x2AAD8C0", VA = "0x182AAF2C0")]
	public static bool4x2 operator <(int4x2 lhs, int rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA6")]
	[Address(RVA = "0x2AAF1F0", Offset = "0x2AAD7F0", VA = "0x182AAF1F0")]
	public static bool4x2 operator <(int lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA7")]
	[Address(RVA = "0x2AAF120", Offset = "0x2AAD720", VA = "0x182AAF120")]
	public static bool4x2 operator <=(int4x2 lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA8")]
	[Address(RVA = "0x2AAF0C0", Offset = "0x2AAD6C0", VA = "0x182AAF0C0")]
	public static bool4x2 operator <=(int4x2 lhs, int rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DA9")]
	[Address(RVA = "0x2AAF190", Offset = "0x2AAD790", VA = "0x182AAF190")]
	public static bool4x2 operator <=(int lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DAA")]
	[Address(RVA = "0x2AAEFF0", Offset = "0x2AAD5F0", VA = "0x182AAEFF0")]
	public static bool4x2 operator >(int4x2 lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DAB")]
	[Address(RVA = "0x2AAF060", Offset = "0x2AAD660", VA = "0x182AAF060")]
	public static bool4x2 operator >(int4x2 lhs, int rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DAC")]
	[Address(RVA = "0x2AAEF90", Offset = "0x2AAD590", VA = "0x182AAEF90")]
	public static bool4x2 operator >(int lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DAD")]
	[Address(RVA = "0x2AAEEC0", Offset = "0x2AAD4C0", VA = "0x182AAEEC0")]
	public static bool4x2 operator >=(int4x2 lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DAE")]
	[Address(RVA = "0x2AAEE60", Offset = "0x2AAD460", VA = "0x182AAEE60")]
	public static bool4x2 operator >=(int4x2 lhs, int rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DAF")]
	[Address(RVA = "0x2AAEF30", Offset = "0x2AAD530", VA = "0x182AAEF30")]
	public static bool4x2 operator >=(int lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB0")]
	[Address(RVA = "0x2A3C690", Offset = "0x2A3AC90", VA = "0x182A3C690")]
	public static int4x2 operator -(int4x2 val)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB1")]
	[Address(RVA = "0x2A3C6D0", Offset = "0x2A3ACD0", VA = "0x182A3C6D0")]
	public static int4x2 operator +(int4x2 val)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB2")]
	[Address(RVA = "0x2A3BF10", Offset = "0x2A3A510", VA = "0x182A3BF10")]
	public static int4x2 operator <<(int4x2 x, int n)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB3")]
	[Address(RVA = "0x2AAF480", Offset = "0x2AADA80", VA = "0x182AAF480")]
	public static int4x2 operator >>(int4x2 x, int n)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB4")]
	[Address(RVA = "0x2A3B8E0", Offset = "0x2A39EE0", VA = "0x182A3B8E0")]
	public static bool4x2 operator ==(int4x2 lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB5")]
	[Address(RVA = "0x2A3B880", Offset = "0x2A39E80", VA = "0x182A3B880")]
	public static bool4x2 operator ==(int4x2 lhs, int rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB6")]
	[Address(RVA = "0x2A3B820", Offset = "0x2A39E20", VA = "0x182A3B820")]
	public static bool4x2 operator ==(int lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB7")]
	[Address(RVA = "0x2A3BE40", Offset = "0x2A3A440", VA = "0x182A3BE40")]
	public static bool4x2 operator !=(int4x2 lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB8")]
	[Address(RVA = "0x2A3BEB0", Offset = "0x2A3A4B0", VA = "0x182A3BEB0")]
	public static bool4x2 operator !=(int4x2 lhs, int rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DB9")]
	[Address(RVA = "0x2A3BDE0", Offset = "0x2A3A3E0", VA = "0x182A3BDE0")]
	public static bool4x2 operator !=(int lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DBA")]
	[Address(RVA = "0x2A3C490", Offset = "0x2A3AA90", VA = "0x182A3C490")]
	public static int4x2 operator ~(int4x2 val)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DBB")]
	[Address(RVA = "0x2A3B520", Offset = "0x2A39B20", VA = "0x182A3B520")]
	public static int4x2 operator &(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DBC")]
	[Address(RVA = "0x2A3B480", Offset = "0x2A39A80", VA = "0x182A3B480")]
	public static int4x2 operator &(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DBD")]
	[Address(RVA = "0x2A3B4D0", Offset = "0x2A39AD0", VA = "0x182A3B4D0")]
	public static int4x2 operator &(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DBE")]
	[Address(RVA = "0x2A3B5A0", Offset = "0x2A39BA0", VA = "0x182A3B5A0")]
	public static int4x2 operator |(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DBF")]
	[Address(RVA = "0x2A3B5E0", Offset = "0x2A39BE0", VA = "0x182A3B5E0")]
	public static int4x2 operator |(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC0")]
	[Address(RVA = "0x2A3B560", Offset = "0x2A39B60", VA = "0x182A3B560")]
	public static int4x2 operator |(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC1")]
	[Address(RVA = "0x2A3B950", Offset = "0x2A39F50", VA = "0x182A3B950")]
	public static int4x2 operator ^(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC2")]
	[Address(RVA = "0x2A3B9D0", Offset = "0x2A39FD0", VA = "0x182A3B9D0")]
	public static int4x2 operator ^(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC3")]
	[Address(RVA = "0x2A3B990", Offset = "0x2A39F90", VA = "0x182A3B990")]
	public static int4x2 operator ^(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC5")]
	[Address(RVA = "0x2A3A9E0", Offset = "0x2A38FE0", VA = "0x182A3A9E0", Slot = "4")]
	public bool Equals(int4x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001DC6")]
	[Address(RVA = "0x2AAE2C0", Offset = "0x2AAC8C0", VA = "0x182AAE2C0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC7")]
	[Address(RVA = "0x2AAE3B0", Offset = "0x2AAC9B0", VA = "0x182AAE3B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC8")]
	[Address(RVA = "0x2AAE440", Offset = "0x2AACA40", VA = "0x182AAE440", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001DC9")]
	[Address(RVA = "0x2AAE7D0", Offset = "0x2AACDD0", VA = "0x182AAE7D0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
