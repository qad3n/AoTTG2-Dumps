// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.double3x2
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
[Token(Token = "0x2000021")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double3x2 : IEquatable<double3x2>, IFormattable
{
	[Token(Token = "0x400007E")]
	[FieldOffset(Offset = "0x0")]
	public double3 c0;

	[Token(Token = "0x400007F")]
	[FieldOffset(Offset = "0x18")]
	public double3 c1;

	[Token(Token = "0x4000080")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double3x2 zero;

	[Token(Token = "0x17000284")]
	public unsafe ref double3 this[int index]
	{
		[Token(Token = "0x6000D72")]
		[Address(RVA = "0x841AF0", Offset = "0x8400F0", VA = "0x180841AF0")]
		get
		{
			return ref *(double3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D39")]
	[Address(RVA = "0x2A5BFC0", Offset = "0x2A5A5C0", VA = "0x182A5BFC0")]
	public double3x2(double3 c0, double3 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D3A")]
	[Address(RVA = "0x2A5BCF0", Offset = "0x2A5A2F0", VA = "0x182A5BCF0")]
	public double3x2(double m00, double m01, double m10, double m11, double m20, double m21)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D3B")]
	[Address(RVA = "0x2A56630", Offset = "0x2A54C30", VA = "0x182A56630")]
	public double3x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D3C")]
	[Address(RVA = "0x2A5BEF0", Offset = "0x2A5A4F0", VA = "0x182A5BEF0")]
	public double3x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D3D")]
	[Address(RVA = "0x2A5BE30", Offset = "0x2A5A430", VA = "0x182A5BE30")]
	public double3x2(bool3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D3E")]
	[Address(RVA = "0x2A5BEB0", Offset = "0x2A5A4B0", VA = "0x182A5BEB0")]
	public double3x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D3F")]
	[Address(RVA = "0x2A5BF40", Offset = "0x2A5A540", VA = "0x182A5BF40")]
	public double3x2(int3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D40")]
	[Address(RVA = "0x2A5BDA0", Offset = "0x2A5A3A0", VA = "0x182A5BDA0")]
	public double3x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D41")]
	[Address(RVA = "0x2A5BD20", Offset = "0x2A5A320", VA = "0x182A5BD20")]
	public double3x2(uint3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D42")]
	[Address(RVA = "0x2A5BCB0", Offset = "0x2A5A2B0", VA = "0x182A5BCB0")]
	public double3x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D43")]
	[Address(RVA = "0x2A5BE00", Offset = "0x2A5A400", VA = "0x182A5BE00")]
	public double3x2(float3x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D44")]
	[Address(RVA = "0x29D8740", Offset = "0x29D6D40", VA = "0x1829D8740")]
	public static implicit operator double3x2(double v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D45")]
	[Address(RVA = "0x29D93D0", Offset = "0x29D79D0", VA = "0x1829D93D0")]
	public static explicit operator double3x2(bool v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D46")]
	[Address(RVA = "0x29D9410", Offset = "0x29D7A10", VA = "0x1829D9410")]
	public static explicit operator double3x2(bool3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D47")]
	[Address(RVA = "0x29D95D0", Offset = "0x29D7BD0", VA = "0x1829D95D0")]
	public static implicit operator double3x2(int v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D48")]
	[Address(RVA = "0x29D94B0", Offset = "0x29D7AB0", VA = "0x1829D94B0")]
	public static implicit operator double3x2(int3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D49")]
	[Address(RVA = "0x29D9250", Offset = "0x29D7850", VA = "0x1829D9250")]
	public static implicit operator double3x2(uint v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D4A")]
	[Address(RVA = "0x29D9330", Offset = "0x29D7930", VA = "0x1829D9330")]
	public static implicit operator double3x2(uint3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D4B")]
	[Address(RVA = "0x29D9590", Offset = "0x29D7B90", VA = "0x1829D9590")]
	public static implicit operator double3x2(float v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D4C")]
	[Address(RVA = "0x29D92B0", Offset = "0x29D78B0", VA = "0x1829D92B0")]
	public static implicit operator double3x2(float3x2 v)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D4D")]
	[Address(RVA = "0x2A5CF10", Offset = "0x2A5B510", VA = "0x182A5CF10")]
	public static double3x2 operator *(double3x2 lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D4E")]
	[Address(RVA = "0x2A5CE60", Offset = "0x2A5B460", VA = "0x182A5CE60")]
	public static double3x2 operator *(double3x2 lhs, double rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D4F")]
	[Address(RVA = "0x2A5CEB0", Offset = "0x2A5B4B0", VA = "0x182A5CEB0")]
	public static double3x2 operator *(double lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D50")]
	[Address(RVA = "0x2A5BFF0", Offset = "0x2A5A5F0", VA = "0x182A5BFF0")]
	public static double3x2 operator +(double3x2 lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D51")]
	[Address(RVA = "0x2A5C0B0", Offset = "0x2A5A6B0", VA = "0x182A5C0B0")]
	public static double3x2 operator +(double3x2 lhs, double rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D52")]
	[Address(RVA = "0x2A5C050", Offset = "0x2A5A650", VA = "0x182A5C050")]
	public static double3x2 operator +(double lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D53")]
	[Address(RVA = "0x2A5D020", Offset = "0x2A5B620", VA = "0x182A5D020")]
	public static double3x2 operator -(double3x2 lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D54")]
	[Address(RVA = "0x2A5CF70", Offset = "0x2A5B570", VA = "0x182A5CF70")]
	public static double3x2 operator -(double3x2 lhs, double rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D55")]
	[Address(RVA = "0x2A5CFC0", Offset = "0x2A5B5C0", VA = "0x182A5CFC0")]
	public static double3x2 operator -(double lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D56")]
	[Address(RVA = "0x2A5C180", Offset = "0x2A5A780", VA = "0x182A5C180")]
	public static double3x2 operator /(double3x2 lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D57")]
	[Address(RVA = "0x2A5C240", Offset = "0x2A5A840", VA = "0x182A5C240")]
	public static double3x2 operator /(double3x2 lhs, double rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D58")]
	[Address(RVA = "0x2A5C1E0", Offset = "0x2A5A7E0", VA = "0x182A5C1E0")]
	public static double3x2 operator /(double lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D59")]
	[Address(RVA = "0x2A5CBF0", Offset = "0x2A5B1F0", VA = "0x182A5CBF0")]
	public static double3x2 operator %(double3x2 lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D5A")]
	[Address(RVA = "0x2A5CCC0", Offset = "0x2A5B2C0", VA = "0x182A5CCC0")]
	public static double3x2 operator %(double3x2 lhs, double rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D5B")]
	[Address(RVA = "0x2A5CD90", Offset = "0x2A5B390", VA = "0x182A5CD90")]
	public static double3x2 operator %(double lhs, double3x2 rhs)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D5C")]
	[Address(RVA = "0x2A5C710", Offset = "0x2A5AD10", VA = "0x182A5C710")]
	public static double3x2 operator ++(double3x2 val)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D5D")]
	[Address(RVA = "0x2A5C100", Offset = "0x2A5A700", VA = "0x182A5C100")]
	public static double3x2 operator --(double3x2 val)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D5E")]
	[Address(RVA = "0x2A5CB30", Offset = "0x2A5B130", VA = "0x182A5CB30")]
	public static bool3x2 operator <(double3x2 lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D5F")]
	[Address(RVA = "0x2A5CBA0", Offset = "0x2A5B1A0", VA = "0x182A5CBA0")]
	public static bool3x2 operator <(double3x2 lhs, double rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D60")]
	[Address(RVA = "0x2A5CAC0", Offset = "0x2A5B0C0", VA = "0x182A5CAC0")]
	public static bool3x2 operator <(double lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D61")]
	[Address(RVA = "0x2A5C9E0", Offset = "0x2A5AFE0", VA = "0x182A5C9E0")]
	public static bool3x2 operator <=(double3x2 lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D62")]
	[Address(RVA = "0x2A5C990", Offset = "0x2A5AF90", VA = "0x182A5C990")]
	public static bool3x2 operator <=(double3x2 lhs, double rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D63")]
	[Address(RVA = "0x2A5CA50", Offset = "0x2A5B050", VA = "0x182A5CA50")]
	public static bool3x2 operator <=(double lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D64")]
	[Address(RVA = "0x2A5C630", Offset = "0x2A5AC30", VA = "0x182A5C630")]
	public static bool3x2 operator >(double3x2 lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D65")]
	[Address(RVA = "0x2A5C6A0", Offset = "0x2A5ACA0", VA = "0x182A5C6A0")]
	public static bool3x2 operator >(double3x2 lhs, double rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D66")]
	[Address(RVA = "0x2A5C5D0", Offset = "0x2A5ABD0", VA = "0x182A5C5D0")]
	public static bool3x2 operator >(double lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D67")]
	[Address(RVA = "0x2A5C500", Offset = "0x2A5AB00", VA = "0x182A5C500")]
	public static bool3x2 operator >=(double3x2 lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D68")]
	[Address(RVA = "0x2A5C490", Offset = "0x2A5AA90", VA = "0x182A5C490")]
	public static bool3x2 operator >=(double3x2 lhs, double rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D69")]
	[Address(RVA = "0x2A5C570", Offset = "0x2A5AB70", VA = "0x182A5C570")]
	public static bool3x2 operator >=(double lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D6A")]
	[Address(RVA = "0x2A5D080", Offset = "0x2A5B680", VA = "0x182A5D080")]
	public static double3x2 operator -(double3x2 val)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D6B")]
	[Address(RVA = "0x2A5D0D0", Offset = "0x2A5B6D0", VA = "0x182A5D0D0")]
	public static double3x2 operator +(double3x2 val)
	{
		return default(double3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D6C")]
	[Address(RVA = "0x2A5C3D0", Offset = "0x2A5A9D0", VA = "0x182A5C3D0")]
	public static bool3x2 operator ==(double3x2 lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D6D")]
	[Address(RVA = "0x2A5C290", Offset = "0x2A5A890", VA = "0x182A5C290")]
	public static bool3x2 operator ==(double3x2 lhs, double rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D6E")]
	[Address(RVA = "0x2A5C330", Offset = "0x2A5A930", VA = "0x182A5C330")]
	public static bool3x2 operator ==(double lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D6F")]
	[Address(RVA = "0x2A5C830", Offset = "0x2A5AE30", VA = "0x182A5C830")]
	public static bool3x2 operator !=(double3x2 lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D70")]
	[Address(RVA = "0x2A5C8F0", Offset = "0x2A5AEF0", VA = "0x182A5C8F0")]
	public static bool3x2 operator !=(double3x2 lhs, double rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D71")]
	[Address(RVA = "0x2A5C790", Offset = "0x2A5AD90", VA = "0x182A5C790")]
	public static bool3x2 operator !=(double lhs, double3x2 rhs)
	{
		return default(bool3x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D73")]
	[Address(RVA = "0x2A55D80", Offset = "0x2A54380", VA = "0x182A55D80", Slot = "4")]
	public bool Equals(double3x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D74")]
	[Address(RVA = "0x2A5B550", Offset = "0x2A59B50", VA = "0x182A5B550", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D75")]
	[Address(RVA = "0x2A5B640", Offset = "0x2A59C40", VA = "0x182A5B640", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D76")]
	[Address(RVA = "0x2A5B9D0", Offset = "0x2A59FD0", VA = "0x182A5B9D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D77")]
	[Address(RVA = "0x2A5B720", Offset = "0x2A59D20", VA = "0x182A5B720", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
