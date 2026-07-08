using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000020")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double2x4 : IEquatable<double2x4>, IFormattable
{
	[Token(Token = "0x400006B")]
	[FieldOffset(Offset = "0x0")]
	public double2 c0;

	[Token(Token = "0x400006C")]
	[FieldOffset(Offset = "0x10")]
	public double2 c1;

	[Token(Token = "0x400006D")]
	[FieldOffset(Offset = "0x20")]
	public double2 c2;

	[Token(Token = "0x400006E")]
	[FieldOffset(Offset = "0x30")]
	public double2 c3;

	[Token(Token = "0x400006F")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double2x4 zero;

	[Token(Token = "0x1700020D")]
	public unsafe ref double2 this[int index]
	{
		[Token(Token = "0x6000C20")]
		[Address(RVA = "0x478E3F0", Offset = "0x478E3F0", VA = "0x478E3F0")]
		get
		{
			return ref *(double2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x478C770", Offset = "0x478C770", VA = "0x478C770")]
	public double2x4(double2 c0, double2 c1, double2 c2, double2 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x478C7A0", Offset = "0x478C7A0", VA = "0x478C7A0")]
	public double2x4(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x478C7D0", Offset = "0x478C7D0", VA = "0x478C7D0")]
	public double2x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x478C800", Offset = "0x478C800", VA = "0x478C800")]
	public double2x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x478C840", Offset = "0x478C840", VA = "0x478C840")]
	public double2x4(bool2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x478C900", Offset = "0x478C900", VA = "0x478C900")]
	public double2x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x478C930", Offset = "0x478C930", VA = "0x478C930")]
	public double2x4(int2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x478C9B0", Offset = "0x478C9B0", VA = "0x478C9B0")]
	public double2x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x478C9E0", Offset = "0x478C9E0", VA = "0x478C9E0")]
	public double2x4(uint2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x478CA70", Offset = "0x478CA70", VA = "0x478CA70")]
	public double2x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x478CAA0", Offset = "0x478CAA0", VA = "0x478CAA0")]
	public double2x4(float2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x478CAD0", Offset = "0x478CAD0", VA = "0x478CAD0")]
	public static implicit operator double2x4(double v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x478CB00", Offset = "0x478CB00", VA = "0x478CB00")]
	public static explicit operator double2x4(bool v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x478CB40", Offset = "0x478CB40", VA = "0x478CB40")]
	public static explicit operator double2x4(bool2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x478CC10", Offset = "0x478CC10", VA = "0x478CC10")]
	public static implicit operator double2x4(int v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF6")]
	[Address(RVA = "0x478CC40", Offset = "0x478CC40", VA = "0x478CC40")]
	public static implicit operator double2x4(int2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x478CCD0", Offset = "0x478CCD0", VA = "0x478CCD0")]
	public static implicit operator double2x4(uint v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF8")]
	[Address(RVA = "0x478CD10", Offset = "0x478CD10", VA = "0x478CD10")]
	public static implicit operator double2x4(uint2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF9")]
	[Address(RVA = "0x478CDB0", Offset = "0x478CDB0", VA = "0x478CDB0")]
	public static implicit operator double2x4(float v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x478CDE0", Offset = "0x478CDE0", VA = "0x478CDE0")]
	public static implicit operator double2x4(float2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x478CE10", Offset = "0x478CE10", VA = "0x478CE10")]
	public static double2x4 operator *(double2x4 lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x478CE60", Offset = "0x478CE60", VA = "0x478CE60")]
	public static double2x4 operator *(double2x4 lhs, double rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x478CEA0", Offset = "0x478CEA0", VA = "0x478CEA0")]
	public static double2x4 operator *(double lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x478CEE0", Offset = "0x478CEE0", VA = "0x478CEE0")]
	public static double2x4 operator +(double2x4 lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BFF")]
	[Address(RVA = "0x478CF30", Offset = "0x478CF30", VA = "0x478CF30")]
	public static double2x4 operator +(double2x4 lhs, double rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x478CF70", Offset = "0x478CF70", VA = "0x478CF70")]
	public static double2x4 operator +(double lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x478CFB0", Offset = "0x478CFB0", VA = "0x478CFB0")]
	public static double2x4 operator -(double2x4 lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x478D000", Offset = "0x478D000", VA = "0x478D000")]
	public static double2x4 operator -(double2x4 lhs, double rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C03")]
	[Address(RVA = "0x478D050", Offset = "0x478D050", VA = "0x478D050")]
	public static double2x4 operator -(double lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x478D090", Offset = "0x478D090", VA = "0x478D090")]
	public static double2x4 operator /(double2x4 lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C05")]
	[Address(RVA = "0x478D0E0", Offset = "0x478D0E0", VA = "0x478D0E0")]
	public static double2x4 operator /(double2x4 lhs, double rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C06")]
	[Address(RVA = "0x478D130", Offset = "0x478D130", VA = "0x478D130")]
	public static double2x4 operator /(double lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C07")]
	[Address(RVA = "0x478D170", Offset = "0x478D170", VA = "0x478D170")]
	public static double2x4 operator %(double2x4 lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C08")]
	[Address(RVA = "0x478D310", Offset = "0x478D310", VA = "0x478D310")]
	public static double2x4 operator %(double2x4 lhs, double rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C09")]
	[Address(RVA = "0x478D470", Offset = "0x478D470", VA = "0x478D470")]
	public static double2x4 operator %(double lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C0A")]
	[Address(RVA = "0x478D5C0", Offset = "0x478D5C0", VA = "0x478D5C0")]
	public static double2x4 operator ++(double2x4 val)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C0B")]
	[Address(RVA = "0x478D620", Offset = "0x478D620", VA = "0x478D620")]
	public static double2x4 operator --(double2x4 val)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x478D680", Offset = "0x478D680", VA = "0x478D680")]
	public static bool2x4 operator <(double2x4 lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C0D")]
	[Address(RVA = "0x478D740", Offset = "0x478D740", VA = "0x478D740")]
	public static bool2x4 operator <(double2x4 lhs, double rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x478D7D0", Offset = "0x478D7D0", VA = "0x478D7D0")]
	public static bool2x4 operator <(double lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x478D880", Offset = "0x478D880", VA = "0x478D880")]
	public static bool2x4 operator <=(double2x4 lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x478D940", Offset = "0x478D940", VA = "0x478D940")]
	public static bool2x4 operator <=(double2x4 lhs, double rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x478D9D0", Offset = "0x478D9D0", VA = "0x478D9D0")]
	public static bool2x4 operator <=(double lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C12")]
	[Address(RVA = "0x478DA80", Offset = "0x478DA80", VA = "0x478DA80")]
	public static bool2x4 operator >(double2x4 lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x478DB40", Offset = "0x478DB40", VA = "0x478DB40")]
	public static bool2x4 operator >(double2x4 lhs, double rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C14")]
	[Address(RVA = "0x478DBF0", Offset = "0x478DBF0", VA = "0x478DBF0")]
	public static bool2x4 operator >(double lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x478DC80", Offset = "0x478DC80", VA = "0x478DC80")]
	public static bool2x4 operator >=(double2x4 lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x478DD40", Offset = "0x478DD40", VA = "0x478DD40")]
	public static bool2x4 operator >=(double2x4 lhs, double rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x478DDF0", Offset = "0x478DDF0", VA = "0x478DDF0")]
	public static bool2x4 operator >=(double lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C18")]
	[Address(RVA = "0x478DE80", Offset = "0x478DE80", VA = "0x478DE80")]
	public static double2x4 operator -(double2x4 val)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C19")]
	[Address(RVA = "0x478DEC0", Offset = "0x478DEC0", VA = "0x478DEC0")]
	public static double2x4 operator +(double2x4 val)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C1A")]
	[Address(RVA = "0x478DEF0", Offset = "0x478DEF0", VA = "0x478DEF0")]
	public static bool2x4 operator ==(double2x4 lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C1B")]
	[Address(RVA = "0x478DFD0", Offset = "0x478DFD0", VA = "0x478DFD0")]
	public static bool2x4 operator ==(double2x4 lhs, double rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C1C")]
	[Address(RVA = "0x478E0A0", Offset = "0x478E0A0", VA = "0x478E0A0")]
	public static bool2x4 operator ==(double lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x478E170", Offset = "0x478E170", VA = "0x478E170")]
	public static bool2x4 operator !=(double2x4 lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C1E")]
	[Address(RVA = "0x478E250", Offset = "0x478E250", VA = "0x478E250")]
	public static bool2x4 operator !=(double2x4 lhs, double rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x478E320", Offset = "0x478E320", VA = "0x478E320")]
	public static bool2x4 operator !=(double lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x478E400", Offset = "0x478E400", VA = "0x478E400", Slot = "4")]
	public bool Equals(double2x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C22")]
	[Address(RVA = "0x478E480", Offset = "0x478E480", VA = "0x478E480", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C23")]
	[Address(RVA = "0x478E550", Offset = "0x478E550", VA = "0x478E550", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C24")]
	[Address(RVA = "0x478E670", Offset = "0x478E670", VA = "0x478E670", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C25")]
	[Address(RVA = "0x478E9B0", Offset = "0x478E9B0", VA = "0x478E9B0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
