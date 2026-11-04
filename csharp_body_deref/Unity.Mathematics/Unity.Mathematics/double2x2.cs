// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.double2x2
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
[Token(Token = "0x200001C")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double2x2 : IEquatable<double2x2>, IFormattable
{
	[Token(Token = "0x400006A")]
	[FieldOffset(Offset = "0x0")]
	public double2 c0;

	[Token(Token = "0x400006B")]
	[FieldOffset(Offset = "0x10")]
	public double2 c1;

	[Token(Token = "0x400006C")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double2x2 identity;

	[Token(Token = "0x400006D")]
	[FieldOffset(Offset = "0x20")]
	public static readonly double2x2 zero;

	[Token(Token = "0x1700020B")]
	public unsafe ref double2 this[int index]
	{
		[Token(Token = "0x6000BEC")]
		[Address(RVA = "0x841B00", Offset = "0x840100", VA = "0x180841B00")]
		get
		{
			return ref *(double2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x547570", Offset = "0x545B70", VA = "0x180547570")]
	public double2x2(double2 c0, double2 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x2A55190", Offset = "0x2A53790", VA = "0x182A55190")]
	public double2x2(double m00, double m01, double m10, double m11)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB5")]
	[Address(RVA = "0x2A55180", Offset = "0x2A53780", VA = "0x182A55180")]
	public double2x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB6")]
	[Address(RVA = "0x2A55160", Offset = "0x2A53760", VA = "0x182A55160")]
	public double2x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0x2A550D0", Offset = "0x2A536D0", VA = "0x182A550D0")]
	public double2x2(bool2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x2A55130", Offset = "0x2A53730", VA = "0x182A55130")]
	public double2x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB9")]
	[Address(RVA = "0x2A55270", Offset = "0x2A53870", VA = "0x182A55270")]
	public double2x2(int2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBA")]
	[Address(RVA = "0x2A551B0", Offset = "0x2A537B0", VA = "0x182A551B0")]
	public double2x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x2A55200", Offset = "0x2A53800", VA = "0x182A55200")]
	public double2x2(uint2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x2A55250", Offset = "0x2A53850", VA = "0x182A55250")]
	public double2x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x2A551F0", Offset = "0x2A537F0", VA = "0x182A551F0")]
	public double2x2(float2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBE")]
	[Address(RVA = "0x29D8460", Offset = "0x29D6A60", VA = "0x1829D8460")]
	public static implicit operator double2x2(double v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBF")]
	[Address(RVA = "0x29D8660", Offset = "0x29D6C60", VA = "0x1829D8660")]
	public static explicit operator double2x2(bool v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x29D8470", Offset = "0x29D6A70", VA = "0x1829D8470")]
	public static explicit operator double2x2(bool2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x29D8560", Offset = "0x29D6B60", VA = "0x1829D8560")]
	public static implicit operator double2x2(int v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x29D8590", Offset = "0x29D6B90", VA = "0x1829D8590")]
	public static implicit operator double2x2(int2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x29D84D0", Offset = "0x29D6AD0", VA = "0x1829D84D0")]
	public static implicit operator double2x2(uint v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x29D85F0", Offset = "0x29D6BF0", VA = "0x1829D85F0")]
	public static implicit operator double2x2(uint2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x29D8410", Offset = "0x29D6A10", VA = "0x1829D8410")]
	public static implicit operator double2x2(float v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x29D8530", Offset = "0x29D6B30", VA = "0x1829D8530")]
	public static implicit operator double2x2(float2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x2A55C60", Offset = "0x2A54260", VA = "0x182A55C60")]
	public static double2x2 operator *(double2x2 lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x2A55C20", Offset = "0x2A54220", VA = "0x182A55C20")]
	public static double2x2 operator *(double2x2 lhs, double rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x2A55C40", Offset = "0x2A54240", VA = "0x182A55C40")]
	public static double2x2 operator *(double lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x2A552C0", Offset = "0x2A538C0", VA = "0x182A552C0")]
	public static double2x2 operator +(double2x2 lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x2A55310", Offset = "0x2A53910", VA = "0x182A55310")]
	public static double2x2 operator +(double2x2 lhs, double rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x2A55330", Offset = "0x2A53930", VA = "0x182A55330")]
	public static double2x2 operator +(double lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCD")]
	[Address(RVA = "0x2A55D10", Offset = "0x2A54310", VA = "0x182A55D10")]
	public static double2x2 operator -(double2x2 lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCE")]
	[Address(RVA = "0x2A55CF0", Offset = "0x2A542F0", VA = "0x182A55CF0")]
	public static double2x2 operator -(double2x2 lhs, double rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCF")]
	[Address(RVA = "0x2A55CB0", Offset = "0x2A542B0", VA = "0x182A55CB0")]
	public static double2x2 operator -(double lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD0")]
	[Address(RVA = "0x2A553B0", Offset = "0x2A539B0", VA = "0x182A553B0")]
	public static double2x2 operator /(double2x2 lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD1")]
	[Address(RVA = "0x2A55390", Offset = "0x2A53990", VA = "0x182A55390")]
	public static double2x2 operator /(double2x2 lhs, double rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD2")]
	[Address(RVA = "0x2A55400", Offset = "0x2A53A00", VA = "0x182A55400")]
	public static double2x2 operator /(double lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD3")]
	[Address(RVA = "0x29E3740", Offset = "0x29E1D40", VA = "0x1829E3740")]
	public static double2x2 operator %(double2x2 lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x2A55BA0", Offset = "0x2A541A0", VA = "0x182A55BA0")]
	public static double2x2 operator %(double2x2 lhs, double rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD5")]
	[Address(RVA = "0x2A55B20", Offset = "0x2A54120", VA = "0x182A55B20")]
	public static double2x2 operator %(double lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD6")]
	[Address(RVA = "0x2A55790", Offset = "0x2A53D90", VA = "0x182A55790")]
	public static double2x2 operator ++(double2x2 val)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x2A55350", Offset = "0x2A53950", VA = "0x182A55350")]
	public static double2x2 operator --(double2x2 val)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x2A55AC0", Offset = "0x2A540C0", VA = "0x182A55AC0")]
	public static bool2x2 operator <(double2x2 lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x2A55A80", Offset = "0x2A54080", VA = "0x182A55A80")]
	public static bool2x2 operator <(double2x2 lhs, double rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x2A55A30", Offset = "0x2A54030", VA = "0x182A55A30")]
	public static bool2x2 operator <(double lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x2A55980", Offset = "0x2A53F80", VA = "0x182A55980")]
	public static bool2x2 operator <=(double2x2 lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDC")]
	[Address(RVA = "0x2A55940", Offset = "0x2A53F40", VA = "0x182A55940")]
	public static bool2x2 operator <=(double2x2 lhs, double rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDD")]
	[Address(RVA = "0x2A559E0", Offset = "0x2A53FE0", VA = "0x182A559E0")]
	public static bool2x2 operator <=(double lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDE")]
	[Address(RVA = "0x2A556A0", Offset = "0x2A53CA0", VA = "0x182A556A0")]
	public static bool2x2 operator >(double2x2 lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDF")]
	[Address(RVA = "0x2A55700", Offset = "0x2A53D00", VA = "0x182A55700")]
	public static bool2x2 operator >(double2x2 lhs, double rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x2A55750", Offset = "0x2A53D50", VA = "0x182A55750")]
	public static bool2x2 operator >(double lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x2A555F0", Offset = "0x2A53BF0", VA = "0x182A555F0")]
	public static bool2x2 operator >=(double2x2 lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x2A55650", Offset = "0x2A53C50", VA = "0x182A55650")]
	public static bool2x2 operator >=(double2x2 lhs, double rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x2A555B0", Offset = "0x2A53BB0", VA = "0x182A555B0")]
	public static bool2x2 operator >=(double lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x2A55D60", Offset = "0x2A54360", VA = "0x182A55D60")]
	public static double2x2 operator -(double2x2 val)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x29DA4C0", Offset = "0x29D8AC0", VA = "0x1829DA4C0")]
	public static double2x2 operator +(double2x2 val)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x2A55440", Offset = "0x2A53A40", VA = "0x182A55440")]
	public static bool2x2 operator ==(double2x2 lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x2A554C0", Offset = "0x2A53AC0", VA = "0x182A554C0")]
	public static bool2x2 operator ==(double2x2 lhs, double rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x2A55540", Offset = "0x2A53B40", VA = "0x182A55540")]
	public static bool2x2 operator ==(double lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x2A557D0", Offset = "0x2A53DD0", VA = "0x182A557D0")]
	public static bool2x2 operator !=(double2x2 lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x2A558C0", Offset = "0x2A53EC0", VA = "0x182A558C0")]
	public static bool2x2 operator !=(double2x2 lhs, double rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x2A55850", Offset = "0x2A53E50", VA = "0x182A55850")]
	public static bool2x2 operator !=(double lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x2A54AE0", Offset = "0x2A530E0", VA = "0x182A54AE0", Slot = "4")]
	public bool Equals(double2x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x2A54B20", Offset = "0x2A53120", VA = "0x182A54B20", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x2A54BE0", Offset = "0x2A531E0", VA = "0x182A54BE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x2A54C80", Offset = "0x2A53280", VA = "0x182A54C80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x2A54E90", Offset = "0x2A53490", VA = "0x182A54E90", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
