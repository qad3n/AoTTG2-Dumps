// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.double3x3
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
[Token(Token = "0x2000022")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double3x3 : IEquatable<double3x3>, IFormattable
{
	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x0")]
	public double3 c0;

	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x18")]
	public double3 c1;

	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0x30")]
	public double3 c2;

	[Token(Token = "0x4000084")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double3x3 identity;

	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x48")]
	public static readonly double3x3 zero;

	[Token(Token = "0x17000285")]
	public unsafe ref double3 this[int index]
	{
		[Token(Token = "0x6000DB1")]
		[Address(RVA = "0x841AF0", Offset = "0x8400F0", VA = "0x180841AF0")]
		get
		{
			return ref *(double3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D78")]
	[Address(RVA = "0x2A5DBC0", Offset = "0x2A5C1C0", VA = "0x182A5DBC0")]
	public double3x3(double3 c0, double3 c1, double3 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D79")]
	[Address(RVA = "0x2A5DEC0", Offset = "0x2A5C4C0", VA = "0x182A5DEC0")]
	public double3x3(double m00, double m01, double m02, double m10, double m11, double m12, double m20, double m21, double m22)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D7A")]
	[Address(RVA = "0x2A5DC00", Offset = "0x2A5C200", VA = "0x182A5DC00")]
	public double3x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D7B")]
	[Address(RVA = "0x29C6BA0", Offset = "0x29C51A0", VA = "0x1829C6BA0")]
	public double3x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D7C")]
	[Address(RVA = "0x29C6AF0", Offset = "0x29C50F0", VA = "0x1829C6AF0")]
	public double3x3(bool3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D7D")]
	[Address(RVA = "0x2A5DDB0", Offset = "0x2A5C3B0", VA = "0x182A5DDB0")]
	public double3x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D7E")]
	[Address(RVA = "0x2A5DE10", Offset = "0x2A5C410", VA = "0x182A5DE10")]
	public double3x3(int3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D7F")]
	[Address(RVA = "0x2A5DC20", Offset = "0x2A5C220", VA = "0x182A5DC20")]
	public double3x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D80")]
	[Address(RVA = "0x2A5DCF0", Offset = "0x2A5C2F0", VA = "0x182A5DCF0")]
	public double3x3(uint3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D81")]
	[Address(RVA = "0x2A5DB70", Offset = "0x2A5C170", VA = "0x182A5DB70")]
	public double3x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D82")]
	[Address(RVA = "0x2A5DCB0", Offset = "0x2A5C2B0", VA = "0x182A5DCB0")]
	public double3x3(float3x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D83")]
	[Address(RVA = "0x29D9BE0", Offset = "0x29D81E0", VA = "0x1829D9BE0")]
	public static implicit operator double3x3(double v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D84")]
	[Address(RVA = "0x29D9A50", Offset = "0x29D8050", VA = "0x1829D9A50")]
	public static explicit operator double3x3(bool v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D85")]
	[Address(RVA = "0x29D9690", Offset = "0x29D7C90", VA = "0x1829D9690")]
	public static explicit operator double3x3(bool3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D86")]
	[Address(RVA = "0x29D99F0", Offset = "0x29D7FF0", VA = "0x1829D99F0")]
	public static implicit operator double3x3(int v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D87")]
	[Address(RVA = "0x29D9910", Offset = "0x29D7F10", VA = "0x1829D9910")]
	public static implicit operator double3x3(int3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D88")]
	[Address(RVA = "0x29D9880", Offset = "0x29D7E80", VA = "0x1829D9880")]
	public static implicit operator double3x3(uint v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D89")]
	[Address(RVA = "0x29D9B00", Offset = "0x29D8100", VA = "0x1829D9B00")]
	public static implicit operator double3x3(uint3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D8A")]
	[Address(RVA = "0x29D9640", Offset = "0x29D7C40", VA = "0x1829D9640")]
	public static implicit operator double3x3(float v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D8B")]
	[Address(RVA = "0x29D9780", Offset = "0x29D7D80", VA = "0x1829D9780")]
	public static implicit operator double3x3(float3x3 v)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D8C")]
	[Address(RVA = "0x2A5F750", Offset = "0x2A5DD50", VA = "0x182A5F750")]
	public static double3x3 operator *(double3x3 lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D8D")]
	[Address(RVA = "0x2A5F800", Offset = "0x2A5DE00", VA = "0x182A5F800")]
	public static double3x3 operator *(double3x3 lhs, double rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D8E")]
	[Address(RVA = "0x2A5F6A0", Offset = "0x2A5DCA0", VA = "0x182A5F6A0")]
	public static double3x3 operator *(double lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D8F")]
	[Address(RVA = "0x2A5DF20", Offset = "0x2A5C520", VA = "0x182A5DF20")]
	public static double3x3 operator +(double3x3 lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D90")]
	[Address(RVA = "0x2A5E080", Offset = "0x2A5C680", VA = "0x182A5E080")]
	public static double3x3 operator +(double3x3 lhs, double rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D91")]
	[Address(RVA = "0x2A5DFD0", Offset = "0x2A5C5D0", VA = "0x182A5DFD0")]
	public static double3x3 operator +(double lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D92")]
	[Address(RVA = "0x2A5F940", Offset = "0x2A5DF40", VA = "0x182A5F940")]
	public static double3x3 operator -(double3x3 lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D93")]
	[Address(RVA = "0x2A5F9F0", Offset = "0x2A5DFF0", VA = "0x182A5F9F0")]
	public static double3x3 operator -(double3x3 lhs, double rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D94")]
	[Address(RVA = "0x2A5F890", Offset = "0x2A5DE90", VA = "0x182A5F890")]
	public static double3x3 operator -(double lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D95")]
	[Address(RVA = "0x2A5E1F0", Offset = "0x2A5C7F0", VA = "0x182A5E1F0")]
	public static double3x3 operator /(double3x3 lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D96")]
	[Address(RVA = "0x2A5E2A0", Offset = "0x2A5C8A0", VA = "0x182A5E2A0")]
	public static double3x3 operator /(double3x3 lhs, double rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D97")]
	[Address(RVA = "0x2A5E340", Offset = "0x2A5C940", VA = "0x182A5E340")]
	public static double3x3 operator /(double lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D98")]
	[Address(RVA = "0x2A5F420", Offset = "0x2A5DA20", VA = "0x182A5F420")]
	public static double3x3 operator %(double3x3 lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D99")]
	[Address(RVA = "0x2A5F2F0", Offset = "0x2A5D8F0", VA = "0x182A5F2F0")]
	public static double3x3 operator %(double3x3 lhs, double rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D9A")]
	[Address(RVA = "0x2A5F560", Offset = "0x2A5DB60", VA = "0x182A5F560")]
	public static double3x3 operator %(double lhs, double3x3 rhs)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D9B")]
	[Address(RVA = "0x2A5EB00", Offset = "0x2A5D100", VA = "0x182A5EB00")]
	public static double3x3 operator ++(double3x3 val)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D9C")]
	[Address(RVA = "0x2A5E110", Offset = "0x2A5C710", VA = "0x182A5E110")]
	public static double3x3 operator --(double3x3 val)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D9D")]
	[Address(RVA = "0x2A5F180", Offset = "0x2A5D780", VA = "0x182A5F180")]
	public static bool3x3 operator <(double3x3 lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D9E")]
	[Address(RVA = "0x2A5F100", Offset = "0x2A5D700", VA = "0x182A5F100")]
	public static bool3x3 operator <(double3x3 lhs, double rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D9F")]
	[Address(RVA = "0x2A5F240", Offset = "0x2A5D840", VA = "0x182A5F240")]
	public static bool3x3 operator <(double lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA0")]
	[Address(RVA = "0x2A5EFC0", Offset = "0x2A5D5C0", VA = "0x182A5EFC0")]
	public static bool3x3 operator <=(double3x3 lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA1")]
	[Address(RVA = "0x2A5F080", Offset = "0x2A5D680", VA = "0x182A5F080")]
	public static bool3x3 operator <=(double3x3 lhs, double rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA2")]
	[Address(RVA = "0x2A5EF10", Offset = "0x2A5D510", VA = "0x182A5EF10")]
	public static bool3x3 operator <=(double lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA3")]
	[Address(RVA = "0x2A5EA40", Offset = "0x2A5D040", VA = "0x182A5EA40")]
	public static bool3x3 operator >(double3x3 lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA4")]
	[Address(RVA = "0x2A5E910", Offset = "0x2A5CF10", VA = "0x182A5E910")]
	public static bool3x3 operator >(double3x3 lhs, double rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA5")]
	[Address(RVA = "0x2A5E9C0", Offset = "0x2A5CFC0", VA = "0x182A5E9C0")]
	public static bool3x3 operator >(double lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA6")]
	[Address(RVA = "0x2A5E7A0", Offset = "0x2A5CDA0", VA = "0x182A5E7A0")]
	public static bool3x3 operator >=(double3x3 lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA7")]
	[Address(RVA = "0x2A5E860", Offset = "0x2A5CE60", VA = "0x182A5E860")]
	public static bool3x3 operator >=(double3x3 lhs, double rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA8")]
	[Address(RVA = "0x2A5E720", Offset = "0x2A5CD20", VA = "0x182A5E720")]
	public static bool3x3 operator >=(double lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DA9")]
	[Address(RVA = "0x2A5FA90", Offset = "0x2A5E090", VA = "0x182A5FA90")]
	public static double3x3 operator -(double3x3 val)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DAA")]
	[Address(RVA = "0x2A5FB30", Offset = "0x2A5E130", VA = "0x182A5FB30")]
	public static double3x3 operator +(double3x3 val)
	{
		return default(double3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DAB")]
	[Address(RVA = "0x2A5E500", Offset = "0x2A5CB00", VA = "0x182A5E500")]
	public static bool3x3 operator ==(double3x3 lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DAC")]
	[Address(RVA = "0x2A5E3F0", Offset = "0x2A5C9F0", VA = "0x182A5E3F0")]
	public static bool3x3 operator ==(double3x3 lhs, double rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DAD")]
	[Address(RVA = "0x2A5E620", Offset = "0x2A5CC20", VA = "0x182A5E620")]
	public static bool3x3 operator ==(double lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DAE")]
	[Address(RVA = "0x2A5EBE0", Offset = "0x2A5D1E0", VA = "0x182A5EBE0")]
	public static bool3x3 operator !=(double3x3 lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DAF")]
	[Address(RVA = "0x2A5ED00", Offset = "0x2A5D300", VA = "0x182A5ED00")]
	public static bool3x3 operator !=(double3x3 lhs, double rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DB0")]
	[Address(RVA = "0x2A5EE10", Offset = "0x2A5D410", VA = "0x182A5EE10")]
	public static bool3x3 operator !=(double lhs, double3x3 rhs)
	{
		return default(bool3x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DB2")]
	[Address(RVA = "0x2A5D230", Offset = "0x2A5B830", VA = "0x182A5D230", Slot = "4")]
	public bool Equals(double3x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DB3")]
	[Address(RVA = "0x2A5D100", Offset = "0x2A5B700", VA = "0x182A5D100", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DB4")]
	[Address(RVA = "0x2A5D2E0", Offset = "0x2A5B8E0", VA = "0x182A5D2E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DB5")]
	[Address(RVA = "0x2A5D330", Offset = "0x2A5B930", VA = "0x182A5D330", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DB6")]
	[Address(RVA = "0x2A5D750", Offset = "0x2A5BD50", VA = "0x182A5D750", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
