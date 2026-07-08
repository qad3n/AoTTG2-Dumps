using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000024")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double3x3 : IEquatable<double3x3>, IFormattable
{
	[Token(Token = "0x400007A")]
	[FieldOffset(Offset = "0x0")]
	public double3 c0;

	[Token(Token = "0x400007B")]
	[FieldOffset(Offset = "0x18")]
	public double3 c1;

	[Token(Token = "0x400007C")]
	[FieldOffset(Offset = "0x30")]
	public double3 c2;

	[Token(Token = "0x400007D")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double3x3 identity;

	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x48")]
	public static readonly double3x3 zero;

	[Token(Token = "0x17000285")]
	public unsafe ref double3 this[int index]
	{
		[Token(Token = "0x6000D66")]
		[Address(RVA = "0x4794C70", Offset = "0x4794C70", VA = "0x4794C70")]
		get
		{
			return ref *(double3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D2D")]
	[Address(RVA = "0x4792B20", Offset = "0x4792B20", VA = "0x4792B20")]
	public double3x3(double3 c0, double3 c1, double3 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D2E")]
	[Address(RVA = "0x4792B60", Offset = "0x4792B60", VA = "0x4792B60")]
	public double3x3(double m00, double m01, double m02, double m10, double m11, double m12, double m20, double m21, double m22)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D2F")]
	[Address(RVA = "0x4792BA0", Offset = "0x4792BA0", VA = "0x4792BA0")]
	public double3x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D30")]
	[Address(RVA = "0x4792BD0", Offset = "0x4792BD0", VA = "0x4792BD0")]
	public double3x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D31")]
	[Address(RVA = "0x4792C10", Offset = "0x4792C10", VA = "0x4792C10")]
	public double3x3(bool3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D32")]
	[Address(RVA = "0x4792D50", Offset = "0x4792D50", VA = "0x4792D50")]
	public double3x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D33")]
	[Address(RVA = "0x4792D90", Offset = "0x4792D90", VA = "0x4792D90")]
	public double3x3(int3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D34")]
	[Address(RVA = "0x4792E20", Offset = "0x4792E20", VA = "0x4792E20")]
	public double3x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D35")]
	[Address(RVA = "0x4792E60", Offset = "0x4792E60", VA = "0x4792E60")]
	public double3x3(uint3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D36")]
	[Address(RVA = "0x4792F00", Offset = "0x4792F00", VA = "0x4792F00")]
	public double3x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D37")]
	[Address(RVA = "0x4792F40", Offset = "0x4792F40", VA = "0x4792F40")]
	public double3x3(float3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D38")]
	[Address(RVA = "0x4792F90", Offset = "0x4792F90", VA = "0x4792F90")]
	public static implicit operator double3x3(double v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D39")]
	[Address(RVA = "0x4792FC0", Offset = "0x4792FC0", VA = "0x4792FC0")]
	public static explicit operator double3x3(bool v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D3A")]
	[Address(RVA = "0x4793010", Offset = "0x4793010", VA = "0x4793010")]
	public static explicit operator double3x3(bool3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D3B")]
	[Address(RVA = "0x4793160", Offset = "0x4793160", VA = "0x4793160")]
	public static implicit operator double3x3(int v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D3C")]
	[Address(RVA = "0x47931A0", Offset = "0x47931A0", VA = "0x47931A0")]
	public static implicit operator double3x3(int3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D3D")]
	[Address(RVA = "0x4793230", Offset = "0x4793230", VA = "0x4793230")]
	public static implicit operator double3x3(uint v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D3E")]
	[Address(RVA = "0x4793270", Offset = "0x4793270", VA = "0x4793270")]
	public static implicit operator double3x3(uint3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D3F")]
	[Address(RVA = "0x4793310", Offset = "0x4793310", VA = "0x4793310")]
	public static implicit operator double3x3(float v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D40")]
	[Address(RVA = "0x4793350", Offset = "0x4793350", VA = "0x4793350")]
	public static implicit operator double3x3(float3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D41")]
	[Address(RVA = "0x47933B0", Offset = "0x47933B0", VA = "0x47933B0")]
	public static double3x3 operator *(double3x3 lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D42")]
	[Address(RVA = "0x4793410", Offset = "0x4793410", VA = "0x4793410")]
	public static double3x3 operator *(double3x3 lhs, double rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D43")]
	[Address(RVA = "0x4793460", Offset = "0x4793460", VA = "0x4793460")]
	public static double3x3 operator *(double lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D44")]
	[Address(RVA = "0x47934B0", Offset = "0x47934B0", VA = "0x47934B0")]
	public static double3x3 operator +(double3x3 lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D45")]
	[Address(RVA = "0x4793510", Offset = "0x4793510", VA = "0x4793510")]
	public static double3x3 operator +(double3x3 lhs, double rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D46")]
	[Address(RVA = "0x4793560", Offset = "0x4793560", VA = "0x4793560")]
	public static double3x3 operator +(double lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D47")]
	[Address(RVA = "0x47935B0", Offset = "0x47935B0", VA = "0x47935B0")]
	public static double3x3 operator -(double3x3 lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D48")]
	[Address(RVA = "0x4793620", Offset = "0x4793620", VA = "0x4793620")]
	public static double3x3 operator -(double3x3 lhs, double rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D49")]
	[Address(RVA = "0x4793680", Offset = "0x4793680", VA = "0x4793680")]
	public static double3x3 operator -(double lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D4A")]
	[Address(RVA = "0x47936D0", Offset = "0x47936D0", VA = "0x47936D0")]
	public static double3x3 operator /(double3x3 lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D4B")]
	[Address(RVA = "0x4793740", Offset = "0x4793740", VA = "0x4793740")]
	public static double3x3 operator /(double3x3 lhs, double rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D4C")]
	[Address(RVA = "0x47937A0", Offset = "0x47937A0", VA = "0x47937A0")]
	public static double3x3 operator /(double lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D4D")]
	[Address(RVA = "0x47937F0", Offset = "0x47937F0", VA = "0x47937F0")]
	public static double3x3 operator %(double3x3 lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D4E")]
	[Address(RVA = "0x47939F0", Offset = "0x47939F0", VA = "0x47939F0")]
	public static double3x3 operator %(double3x3 lhs, double rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D4F")]
	[Address(RVA = "0x4793B80", Offset = "0x4793B80", VA = "0x4793B80")]
	public static double3x3 operator %(double lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D50")]
	[Address(RVA = "0x4793D10", Offset = "0x4793D10", VA = "0x4793D10")]
	public static double3x3 operator ++(double3x3 val)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D51")]
	[Address(RVA = "0x4793D80", Offset = "0x4793D80", VA = "0x4793D80")]
	public static double3x3 operator --(double3x3 val)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D52")]
	[Address(RVA = "0x4793DF0", Offset = "0x4793DF0", VA = "0x4793DF0")]
	public static bool3x3 operator <(double3x3 lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D53")]
	[Address(RVA = "0x4793ED0", Offset = "0x4793ED0", VA = "0x4793ED0")]
	public static bool3x3 operator <(double3x3 lhs, double rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D54")]
	[Address(RVA = "0x4793F60", Offset = "0x4793F60", VA = "0x4793F60")]
	public static bool3x3 operator <(double lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D55")]
	[Address(RVA = "0x4794010", Offset = "0x4794010", VA = "0x4794010")]
	public static bool3x3 operator <=(double3x3 lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D56")]
	[Address(RVA = "0x47940F0", Offset = "0x47940F0", VA = "0x47940F0")]
	public static bool3x3 operator <=(double3x3 lhs, double rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D57")]
	[Address(RVA = "0x4794180", Offset = "0x4794180", VA = "0x4794180")]
	public static bool3x3 operator <=(double lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D58")]
	[Address(RVA = "0x4794230", Offset = "0x4794230", VA = "0x4794230")]
	public static bool3x3 operator >(double3x3 lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D59")]
	[Address(RVA = "0x4794310", Offset = "0x4794310", VA = "0x4794310")]
	public static bool3x3 operator >(double3x3 lhs, double rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D5A")]
	[Address(RVA = "0x47943C0", Offset = "0x47943C0", VA = "0x47943C0")]
	public static bool3x3 operator >(double lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D5B")]
	[Address(RVA = "0x4794450", Offset = "0x4794450", VA = "0x4794450")]
	public static bool3x3 operator >=(double3x3 lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D5C")]
	[Address(RVA = "0x4794530", Offset = "0x4794530", VA = "0x4794530")]
	public static bool3x3 operator >=(double3x3 lhs, double rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D5D")]
	[Address(RVA = "0x47945E0", Offset = "0x47945E0", VA = "0x47945E0")]
	public static bool3x3 operator >=(double lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D5E")]
	[Address(RVA = "0x4794670", Offset = "0x4794670", VA = "0x4794670")]
	public static double3x3 operator -(double3x3 val)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D5F")]
	[Address(RVA = "0x47946C0", Offset = "0x47946C0", VA = "0x47946C0")]
	public static double3x3 operator +(double3x3 val)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D60")]
	[Address(RVA = "0x47946F0", Offset = "0x47946F0", VA = "0x47946F0")]
	public static bool3x3 operator ==(double3x3 lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D61")]
	[Address(RVA = "0x47947F0", Offset = "0x47947F0", VA = "0x47947F0")]
	public static bool3x3 operator ==(double3x3 lhs, double rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D62")]
	[Address(RVA = "0x47948D0", Offset = "0x47948D0", VA = "0x47948D0")]
	public static bool3x3 operator ==(double lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D63")]
	[Address(RVA = "0x47949B0", Offset = "0x47949B0", VA = "0x47949B0")]
	public static bool3x3 operator !=(double3x3 lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D64")]
	[Address(RVA = "0x4794AB0", Offset = "0x4794AB0", VA = "0x4794AB0")]
	public static bool3x3 operator !=(double3x3 lhs, double rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D65")]
	[Address(RVA = "0x4794B90", Offset = "0x4794B90", VA = "0x4794B90")]
	public static bool3x3 operator !=(double lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D67")]
	[Address(RVA = "0x4794C80", Offset = "0x4794C80", VA = "0x4794C80", Slot = "4")]
	public bool Equals(double3x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D68")]
	[Address(RVA = "0x4794D10", Offset = "0x4794D10", VA = "0x4794D10", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D69")]
	[Address(RVA = "0x4794E00", Offset = "0x4794E00", VA = "0x4794E00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D6A")]
	[Address(RVA = "0x4794F20", Offset = "0x4794F20", VA = "0x4794F20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D6B")]
	[Address(RVA = "0x47952B0", Offset = "0x47952B0", VA = "0x47952B0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
