using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000023")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double3x2 : IEquatable<double3x2>, IFormattable
{
	[Token(Token = "0x4000077")]
	[FieldOffset(Offset = "0x0")]
	public double3 c0;

	[Token(Token = "0x4000078")]
	[FieldOffset(Offset = "0x18")]
	public double3 c1;

	[Token(Token = "0x4000079")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double3x2 zero;

	[Token(Token = "0x17000284")]
	public unsafe ref double3 this[int index]
	{
		[Token(Token = "0x6000D27")]
		[Address(RVA = "0x4792440", Offset = "0x4792440", VA = "0x4792440")]
		get
		{
			return ref *(double3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CEE")]
	[Address(RVA = "0x4790E30", Offset = "0x4790E30", VA = "0x4790E30")]
	public double3x2(double3 c0, double3 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CEF")]
	[Address(RVA = "0x4790E60", Offset = "0x4790E60", VA = "0x4790E60")]
	public double3x2(double m00, double m01, double m10, double m11, double m20, double m21)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CF0")]
	[Address(RVA = "0x4790E80", Offset = "0x4790E80", VA = "0x4790E80")]
	public double3x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CF1")]
	[Address(RVA = "0x4790EA0", Offset = "0x4790EA0", VA = "0x4790EA0")]
	public double3x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CF2")]
	[Address(RVA = "0x4790ED0", Offset = "0x4790ED0", VA = "0x4790ED0")]
	public double3x2(bool3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x4790FB0", Offset = "0x4790FB0", VA = "0x4790FB0")]
	public double3x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CF4")]
	[Address(RVA = "0x4790FE0", Offset = "0x4790FE0", VA = "0x4790FE0")]
	public double3x2(int3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CF5")]
	[Address(RVA = "0x4791040", Offset = "0x4791040", VA = "0x4791040")]
	public double3x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CF6")]
	[Address(RVA = "0x4791070", Offset = "0x4791070", VA = "0x4791070")]
	public double3x2(uint3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CF7")]
	[Address(RVA = "0x47910E0", Offset = "0x47910E0", VA = "0x47910E0")]
	public double3x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CF8")]
	[Address(RVA = "0x4791110", Offset = "0x4791110", VA = "0x4791110")]
	public double3x2(float3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CF9")]
	[Address(RVA = "0x4791150", Offset = "0x4791150", VA = "0x4791150")]
	public static implicit operator double3x2(double v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CFA")]
	[Address(RVA = "0x4791180", Offset = "0x4791180", VA = "0x4791180")]
	public static explicit operator double3x2(bool v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CFB")]
	[Address(RVA = "0x47911C0", Offset = "0x47911C0", VA = "0x47911C0")]
	public static explicit operator double3x2(bool3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CFC")]
	[Address(RVA = "0x47912A0", Offset = "0x47912A0", VA = "0x47912A0")]
	public static implicit operator double3x2(int v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CFD")]
	[Address(RVA = "0x47912D0", Offset = "0x47912D0", VA = "0x47912D0")]
	public static implicit operator double3x2(int3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CFE")]
	[Address(RVA = "0x4791330", Offset = "0x4791330", VA = "0x4791330")]
	public static implicit operator double3x2(uint v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CFF")]
	[Address(RVA = "0x4791360", Offset = "0x4791360", VA = "0x4791360")]
	public static implicit operator double3x2(uint3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D00")]
	[Address(RVA = "0x47913D0", Offset = "0x47913D0", VA = "0x47913D0")]
	public static implicit operator double3x2(float v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D01")]
	[Address(RVA = "0x4791400", Offset = "0x4791400", VA = "0x4791400")]
	public static implicit operator double3x2(float3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D02")]
	[Address(RVA = "0x4791440", Offset = "0x4791440", VA = "0x4791440")]
	public static double3x2 operator *(double3x2 lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D03")]
	[Address(RVA = "0x4791480", Offset = "0x4791480", VA = "0x4791480")]
	public static double3x2 operator *(double3x2 lhs, double rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D04")]
	[Address(RVA = "0x47914B0", Offset = "0x47914B0", VA = "0x47914B0")]
	public static double3x2 operator *(double lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D05")]
	[Address(RVA = "0x47914E0", Offset = "0x47914E0", VA = "0x47914E0")]
	public static double3x2 operator +(double3x2 lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D06")]
	[Address(RVA = "0x4791520", Offset = "0x4791520", VA = "0x4791520")]
	public static double3x2 operator +(double3x2 lhs, double rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D07")]
	[Address(RVA = "0x4791550", Offset = "0x4791550", VA = "0x4791550")]
	public static double3x2 operator +(double lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D08")]
	[Address(RVA = "0x4791580", Offset = "0x4791580", VA = "0x4791580")]
	public static double3x2 operator -(double3x2 lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D09")]
	[Address(RVA = "0x47915C0", Offset = "0x47915C0", VA = "0x47915C0")]
	public static double3x2 operator -(double3x2 lhs, double rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D0A")]
	[Address(RVA = "0x4791600", Offset = "0x4791600", VA = "0x4791600")]
	public static double3x2 operator -(double lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D0B")]
	[Address(RVA = "0x4791630", Offset = "0x4791630", VA = "0x4791630")]
	public static double3x2 operator /(double3x2 lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D0C")]
	[Address(RVA = "0x4791670", Offset = "0x4791670", VA = "0x4791670")]
	public static double3x2 operator /(double3x2 lhs, double rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D0D")]
	[Address(RVA = "0x47916B0", Offset = "0x47916B0", VA = "0x47916B0")]
	public static double3x2 operator /(double lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D0E")]
	[Address(RVA = "0x47916E0", Offset = "0x47916E0", VA = "0x47916E0")]
	public static double3x2 operator %(double3x2 lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D0F")]
	[Address(RVA = "0x4791820", Offset = "0x4791820", VA = "0x4791820")]
	public static double3x2 operator %(double3x2 lhs, double rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D10")]
	[Address(RVA = "0x4791930", Offset = "0x4791930", VA = "0x4791930")]
	public static double3x2 operator %(double lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D11")]
	[Address(RVA = "0x4791A30", Offset = "0x4791A30", VA = "0x4791A30")]
	public static double3x2 operator ++(double3x2 val)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D12")]
	[Address(RVA = "0x4791A70", Offset = "0x4791A70", VA = "0x4791A70")]
	public static double3x2 operator --(double3x2 val)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D13")]
	[Address(RVA = "0x4791AB0", Offset = "0x4791AB0", VA = "0x4791AB0")]
	public static bool3x2 operator <(double3x2 lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D14")]
	[Address(RVA = "0x4791B40", Offset = "0x4791B40", VA = "0x4791B40")]
	public static bool3x2 operator <(double3x2 lhs, double rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D15")]
	[Address(RVA = "0x4791BA0", Offset = "0x4791BA0", VA = "0x4791BA0")]
	public static bool3x2 operator <(double lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D16")]
	[Address(RVA = "0x4791C20", Offset = "0x4791C20", VA = "0x4791C20")]
	public static bool3x2 operator <=(double3x2 lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D17")]
	[Address(RVA = "0x4791CB0", Offset = "0x4791CB0", VA = "0x4791CB0")]
	public static bool3x2 operator <=(double3x2 lhs, double rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D18")]
	[Address(RVA = "0x4791D10", Offset = "0x4791D10", VA = "0x4791D10")]
	public static bool3x2 operator <=(double lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D19")]
	[Address(RVA = "0x4791D90", Offset = "0x4791D90", VA = "0x4791D90")]
	public static bool3x2 operator >(double3x2 lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D1A")]
	[Address(RVA = "0x4791E20", Offset = "0x4791E20", VA = "0x4791E20")]
	public static bool3x2 operator >(double3x2 lhs, double rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D1B")]
	[Address(RVA = "0x4791EA0", Offset = "0x4791EA0", VA = "0x4791EA0")]
	public static bool3x2 operator >(double lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D1C")]
	[Address(RVA = "0x4791F00", Offset = "0x4791F00", VA = "0x4791F00")]
	public static bool3x2 operator >=(double3x2 lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D1D")]
	[Address(RVA = "0x4791F90", Offset = "0x4791F90", VA = "0x4791F90")]
	public static bool3x2 operator >=(double3x2 lhs, double rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D1E")]
	[Address(RVA = "0x4792010", Offset = "0x4792010", VA = "0x4792010")]
	public static bool3x2 operator >=(double lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D1F")]
	[Address(RVA = "0x4792070", Offset = "0x4792070", VA = "0x4792070")]
	public static double3x2 operator -(double3x2 val)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D20")]
	[Address(RVA = "0x47920A0", Offset = "0x47920A0", VA = "0x47920A0")]
	public static double3x2 operator +(double3x2 val)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D21")]
	[Address(RVA = "0x47920C0", Offset = "0x47920C0", VA = "0x47920C0")]
	public static bool3x2 operator ==(double3x2 lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D22")]
	[Address(RVA = "0x4792160", Offset = "0x4792160", VA = "0x4792160")]
	public static bool3x2 operator ==(double3x2 lhs, double rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x47921F0", Offset = "0x47921F0", VA = "0x47921F0")]
	public static bool3x2 operator ==(double lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D24")]
	[Address(RVA = "0x4792280", Offset = "0x4792280", VA = "0x4792280")]
	public static bool3x2 operator !=(double3x2 lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D25")]
	[Address(RVA = "0x4792320", Offset = "0x4792320", VA = "0x4792320")]
	public static bool3x2 operator !=(double3x2 lhs, double rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D26")]
	[Address(RVA = "0x47923B0", Offset = "0x47923B0", VA = "0x47923B0")]
	public static bool3x2 operator !=(double lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D28")]
	[Address(RVA = "0x4792450", Offset = "0x4792450", VA = "0x4792450", Slot = "4")]
	public bool Equals(double3x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D29")]
	[Address(RVA = "0x47924C0", Offset = "0x47924C0", VA = "0x47924C0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D2A")]
	[Address(RVA = "0x4792580", Offset = "0x4792580", VA = "0x4792580", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x4792640", Offset = "0x4792640", VA = "0x4792640", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x47928D0", Offset = "0x47928D0", VA = "0x47928D0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
