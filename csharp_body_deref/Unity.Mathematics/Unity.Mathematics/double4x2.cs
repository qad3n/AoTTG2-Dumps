using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000028")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double4x2 : IEquatable<double4x2>, IFormattable
{
	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x0")]
	public double4 c0;

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x20")]
	public double4 c1;

	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double4x2 zero;

	[Token(Token = "0x170003D8")]
	public unsafe ref double4 this[int index]
	{
		[Token(Token = "0x6000FBC")]
		[Address(RVA = "0x47A16C0", Offset = "0x47A16C0", VA = "0x47A16C0")]
		get
		{
			return ref *(double4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F83")]
	[Address(RVA = "0x479FB40", Offset = "0x479FB40", VA = "0x479FB40")]
	public double4x2(double4 c0, double4 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F84")]
	[Address(RVA = "0x479FB70", Offset = "0x479FB70", VA = "0x479FB70")]
	public double4x2(double m00, double m01, double m10, double m11, double m20, double m21, double m30, double m31)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F85")]
	[Address(RVA = "0x479FBA0", Offset = "0x479FBA0", VA = "0x479FBA0")]
	public double4x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F86")]
	[Address(RVA = "0x479FBD0", Offset = "0x479FBD0", VA = "0x479FBD0")]
	public double4x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F87")]
	[Address(RVA = "0x479FC10", Offset = "0x479FC10", VA = "0x479FC10")]
	public double4x2(bool4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F88")]
	[Address(RVA = "0x479FD00", Offset = "0x479FD00", VA = "0x479FD00")]
	public double4x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F89")]
	[Address(RVA = "0x479FD30", Offset = "0x479FD30", VA = "0x479FD30")]
	public double4x2(int4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F8A")]
	[Address(RVA = "0x479FDB0", Offset = "0x479FDB0", VA = "0x479FDB0")]
	public double4x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F8B")]
	[Address(RVA = "0x479FDE0", Offset = "0x479FDE0", VA = "0x479FDE0")]
	public double4x2(uint4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F8C")]
	[Address(RVA = "0x479FE70", Offset = "0x479FE70", VA = "0x479FE70")]
	public double4x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F8D")]
	[Address(RVA = "0x479FEA0", Offset = "0x479FEA0", VA = "0x479FEA0")]
	public double4x2(float4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F8E")]
	[Address(RVA = "0x479FED0", Offset = "0x479FED0", VA = "0x479FED0")]
	public static implicit operator double4x2(double v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F8F")]
	[Address(RVA = "0x479FF00", Offset = "0x479FF00", VA = "0x479FF00")]
	public static explicit operator double4x2(bool v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F90")]
	[Address(RVA = "0x479FF40", Offset = "0x479FF40", VA = "0x479FF40")]
	public static explicit operator double4x2(bool4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F91")]
	[Address(RVA = "0x47A0040", Offset = "0x47A0040", VA = "0x47A0040")]
	public static implicit operator double4x2(int v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F92")]
	[Address(RVA = "0x47A0070", Offset = "0x47A0070", VA = "0x47A0070")]
	public static implicit operator double4x2(int4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F93")]
	[Address(RVA = "0x47A00F0", Offset = "0x47A00F0", VA = "0x47A00F0")]
	public static implicit operator double4x2(uint v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F94")]
	[Address(RVA = "0x47A0130", Offset = "0x47A0130", VA = "0x47A0130")]
	public static implicit operator double4x2(uint4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F95")]
	[Address(RVA = "0x47A01C0", Offset = "0x47A01C0", VA = "0x47A01C0")]
	public static implicit operator double4x2(float v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F96")]
	[Address(RVA = "0x47A01F0", Offset = "0x47A01F0", VA = "0x47A01F0")]
	public static implicit operator double4x2(float4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F97")]
	[Address(RVA = "0x47A0220", Offset = "0x47A0220", VA = "0x47A0220")]
	public static double4x2 operator *(double4x2 lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F98")]
	[Address(RVA = "0x47A0270", Offset = "0x47A0270", VA = "0x47A0270")]
	public static double4x2 operator *(double4x2 lhs, double rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F99")]
	[Address(RVA = "0x47A02B0", Offset = "0x47A02B0", VA = "0x47A02B0")]
	public static double4x2 operator *(double lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F9A")]
	[Address(RVA = "0x47A02F0", Offset = "0x47A02F0", VA = "0x47A02F0")]
	public static double4x2 operator +(double4x2 lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F9B")]
	[Address(RVA = "0x47A0340", Offset = "0x47A0340", VA = "0x47A0340")]
	public static double4x2 operator +(double4x2 lhs, double rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F9C")]
	[Address(RVA = "0x47A0380", Offset = "0x47A0380", VA = "0x47A0380")]
	public static double4x2 operator +(double lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F9D")]
	[Address(RVA = "0x47A03C0", Offset = "0x47A03C0", VA = "0x47A03C0")]
	public static double4x2 operator -(double4x2 lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F9E")]
	[Address(RVA = "0x47A0410", Offset = "0x47A0410", VA = "0x47A0410")]
	public static double4x2 operator -(double4x2 lhs, double rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F9F")]
	[Address(RVA = "0x47A0460", Offset = "0x47A0460", VA = "0x47A0460")]
	public static double4x2 operator -(double lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FA0")]
	[Address(RVA = "0x47A04A0", Offset = "0x47A04A0", VA = "0x47A04A0")]
	public static double4x2 operator /(double4x2 lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FA1")]
	[Address(RVA = "0x47A04F0", Offset = "0x47A04F0", VA = "0x47A04F0")]
	public static double4x2 operator /(double4x2 lhs, double rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FA2")]
	[Address(RVA = "0x47A0540", Offset = "0x47A0540", VA = "0x47A0540")]
	public static double4x2 operator /(double lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FA3")]
	[Address(RVA = "0x47A0580", Offset = "0x47A0580", VA = "0x47A0580")]
	public static double4x2 operator %(double4x2 lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FA4")]
	[Address(RVA = "0x47A0750", Offset = "0x47A0750", VA = "0x47A0750")]
	public static double4x2 operator %(double4x2 lhs, double rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FA5")]
	[Address(RVA = "0x47A08C0", Offset = "0x47A08C0", VA = "0x47A08C0")]
	public static double4x2 operator %(double lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FA6")]
	[Address(RVA = "0x47A0A30", Offset = "0x47A0A30", VA = "0x47A0A30")]
	public static double4x2 operator ++(double4x2 val)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FA7")]
	[Address(RVA = "0x47A0A80", Offset = "0x47A0A80", VA = "0x47A0A80")]
	public static double4x2 operator --(double4x2 val)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FA8")]
	[Address(RVA = "0x47A0AD0", Offset = "0x47A0AD0", VA = "0x47A0AD0")]
	public static bool4x2 operator <(double4x2 lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FA9")]
	[Address(RVA = "0x47A0B90", Offset = "0x47A0B90", VA = "0x47A0B90")]
	public static bool4x2 operator <(double4x2 lhs, double rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FAA")]
	[Address(RVA = "0x47A0C20", Offset = "0x47A0C20", VA = "0x47A0C20")]
	public static bool4x2 operator <(double lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FAB")]
	[Address(RVA = "0x47A0CB0", Offset = "0x47A0CB0", VA = "0x47A0CB0")]
	public static bool4x2 operator <=(double4x2 lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FAC")]
	[Address(RVA = "0x47A0D70", Offset = "0x47A0D70", VA = "0x47A0D70")]
	public static bool4x2 operator <=(double4x2 lhs, double rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FAD")]
	[Address(RVA = "0x47A0E00", Offset = "0x47A0E00", VA = "0x47A0E00")]
	public static bool4x2 operator <=(double lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FAE")]
	[Address(RVA = "0x47A0E90", Offset = "0x47A0E90", VA = "0x47A0E90")]
	public static bool4x2 operator >(double4x2 lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FAF")]
	[Address(RVA = "0x47A0F50", Offset = "0x47A0F50", VA = "0x47A0F50")]
	public static bool4x2 operator >(double4x2 lhs, double rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FB0")]
	[Address(RVA = "0x47A0FE0", Offset = "0x47A0FE0", VA = "0x47A0FE0")]
	public static bool4x2 operator >(double lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FB1")]
	[Address(RVA = "0x47A1070", Offset = "0x47A1070", VA = "0x47A1070")]
	public static bool4x2 operator >=(double4x2 lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FB2")]
	[Address(RVA = "0x47A1130", Offset = "0x47A1130", VA = "0x47A1130")]
	public static bool4x2 operator >=(double4x2 lhs, double rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FB3")]
	[Address(RVA = "0x47A11C0", Offset = "0x47A11C0", VA = "0x47A11C0")]
	public static bool4x2 operator >=(double lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FB4")]
	[Address(RVA = "0x47A1250", Offset = "0x47A1250", VA = "0x47A1250")]
	public static double4x2 operator -(double4x2 val)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FB5")]
	[Address(RVA = "0x47A1290", Offset = "0x47A1290", VA = "0x47A1290")]
	public static double4x2 operator +(double4x2 val)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FB6")]
	[Address(RVA = "0x47A12C0", Offset = "0x47A12C0", VA = "0x47A12C0")]
	public static bool4x2 operator ==(double4x2 lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FB7")]
	[Address(RVA = "0x47A13A0", Offset = "0x47A13A0", VA = "0x47A13A0")]
	public static bool4x2 operator ==(double4x2 lhs, double rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FB8")]
	[Address(RVA = "0x47A1430", Offset = "0x47A1430", VA = "0x47A1430")]
	public static bool4x2 operator ==(double lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FB9")]
	[Address(RVA = "0x47A14C0", Offset = "0x47A14C0", VA = "0x47A14C0")]
	public static bool4x2 operator !=(double4x2 lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FBA")]
	[Address(RVA = "0x47A15A0", Offset = "0x47A15A0", VA = "0x47A15A0")]
	public static bool4x2 operator !=(double4x2 lhs, double rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FBB")]
	[Address(RVA = "0x47A1630", Offset = "0x47A1630", VA = "0x47A1630")]
	public static bool4x2 operator !=(double lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FBD")]
	[Address(RVA = "0x47A16D0", Offset = "0x47A16D0", VA = "0x47A16D0", Slot = "4")]
	public bool Equals(double4x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x47A1750", Offset = "0x47A1750", VA = "0x47A1750", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FBF")]
	[Address(RVA = "0x47A1820", Offset = "0x47A1820", VA = "0x47A1820", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FC0")]
	[Address(RVA = "0x47A1930", Offset = "0x47A1930", VA = "0x47A1930", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FC1")]
	[Address(RVA = "0x47A1C70", Offset = "0x47A1C70", VA = "0x47A1C70", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
