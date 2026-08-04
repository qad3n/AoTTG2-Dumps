// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.double2x4
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
[Token(Token = "0x200001D")]
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
		[Token(Token = "0x6000BF8")]
		[Address(RVA = "0x4A91240", Offset = "0x4A91240", VA = "0x4A91240")]
		get
		{
			return ref *(double2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBF")]
	[Address(RVA = "0x4A8F5C0", Offset = "0x4A8F5C0", VA = "0x4A8F5C0")]
	public double2x4(double2 c0, double2 c1, double2 c2, double2 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x4A8F5F0", Offset = "0x4A8F5F0", VA = "0x4A8F5F0")]
	public double2x4(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x4A8F620", Offset = "0x4A8F620", VA = "0x4A8F620")]
	public double2x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x4A8F650", Offset = "0x4A8F650", VA = "0x4A8F650")]
	public double2x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x4A8F690", Offset = "0x4A8F690", VA = "0x4A8F690")]
	public double2x4(bool2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x4A8F750", Offset = "0x4A8F750", VA = "0x4A8F750")]
	public double2x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x4A8F780", Offset = "0x4A8F780", VA = "0x4A8F780")]
	public double2x4(int2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x4A8F800", Offset = "0x4A8F800", VA = "0x4A8F800")]
	public double2x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x4A8F830", Offset = "0x4A8F830", VA = "0x4A8F830")]
	public double2x4(uint2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x4A8F8C0", Offset = "0x4A8F8C0", VA = "0x4A8F8C0")]
	public double2x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x4A8F8F0", Offset = "0x4A8F8F0", VA = "0x4A8F8F0")]
	public double2x4(float2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x4A8F920", Offset = "0x4A8F920", VA = "0x4A8F920")]
	public static implicit operator double2x4(double v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x4A8F950", Offset = "0x4A8F950", VA = "0x4A8F950")]
	public static explicit operator double2x4(bool v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x4A8F990", Offset = "0x4A8F990", VA = "0x4A8F990")]
	public static explicit operator double2x4(bool2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCD")]
	[Address(RVA = "0x4A8FA60", Offset = "0x4A8FA60", VA = "0x4A8FA60")]
	public static implicit operator double2x4(int v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCE")]
	[Address(RVA = "0x4A8FA90", Offset = "0x4A8FA90", VA = "0x4A8FA90")]
	public static implicit operator double2x4(int2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BCF")]
	[Address(RVA = "0x4A8FB20", Offset = "0x4A8FB20", VA = "0x4A8FB20")]
	public static implicit operator double2x4(uint v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD0")]
	[Address(RVA = "0x4A8FB60", Offset = "0x4A8FB60", VA = "0x4A8FB60")]
	public static implicit operator double2x4(uint2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD1")]
	[Address(RVA = "0x4A8FC00", Offset = "0x4A8FC00", VA = "0x4A8FC00")]
	public static implicit operator double2x4(float v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD2")]
	[Address(RVA = "0x4A8FC30", Offset = "0x4A8FC30", VA = "0x4A8FC30")]
	public static implicit operator double2x4(float2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD3")]
	[Address(RVA = "0x4A8FC60", Offset = "0x4A8FC60", VA = "0x4A8FC60")]
	public static double2x4 operator *(double2x4 lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD4")]
	[Address(RVA = "0x4A8FCB0", Offset = "0x4A8FCB0", VA = "0x4A8FCB0")]
	public static double2x4 operator *(double2x4 lhs, double rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD5")]
	[Address(RVA = "0x4A8FCF0", Offset = "0x4A8FCF0", VA = "0x4A8FCF0")]
	public static double2x4 operator *(double lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD6")]
	[Address(RVA = "0x4A8FD30", Offset = "0x4A8FD30", VA = "0x4A8FD30")]
	public static double2x4 operator +(double2x4 lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x4A8FD80", Offset = "0x4A8FD80", VA = "0x4A8FD80")]
	public static double2x4 operator +(double2x4 lhs, double rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x4A8FDC0", Offset = "0x4A8FDC0", VA = "0x4A8FDC0")]
	public static double2x4 operator +(double lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x4A8FE00", Offset = "0x4A8FE00", VA = "0x4A8FE00")]
	public static double2x4 operator -(double2x4 lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x4A8FE50", Offset = "0x4A8FE50", VA = "0x4A8FE50")]
	public static double2x4 operator -(double2x4 lhs, double rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x4A8FEA0", Offset = "0x4A8FEA0", VA = "0x4A8FEA0")]
	public static double2x4 operator -(double lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDC")]
	[Address(RVA = "0x4A8FEE0", Offset = "0x4A8FEE0", VA = "0x4A8FEE0")]
	public static double2x4 operator /(double2x4 lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDD")]
	[Address(RVA = "0x4A8FF30", Offset = "0x4A8FF30", VA = "0x4A8FF30")]
	public static double2x4 operator /(double2x4 lhs, double rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDE")]
	[Address(RVA = "0x4A8FF80", Offset = "0x4A8FF80", VA = "0x4A8FF80")]
	public static double2x4 operator /(double lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BDF")]
	[Address(RVA = "0x4A8FFC0", Offset = "0x4A8FFC0", VA = "0x4A8FFC0")]
	public static double2x4 operator %(double2x4 lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x4A90160", Offset = "0x4A90160", VA = "0x4A90160")]
	public static double2x4 operator %(double2x4 lhs, double rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x4A902C0", Offset = "0x4A902C0", VA = "0x4A902C0")]
	public static double2x4 operator %(double lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x4A90410", Offset = "0x4A90410", VA = "0x4A90410")]
	public static double2x4 operator ++(double2x4 val)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x4A90470", Offset = "0x4A90470", VA = "0x4A90470")]
	public static double2x4 operator --(double2x4 val)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x4A904D0", Offset = "0x4A904D0", VA = "0x4A904D0")]
	public static bool2x4 operator <(double2x4 lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x4A90590", Offset = "0x4A90590", VA = "0x4A90590")]
	public static bool2x4 operator <(double2x4 lhs, double rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x4A90620", Offset = "0x4A90620", VA = "0x4A90620")]
	public static bool2x4 operator <(double lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x4A906D0", Offset = "0x4A906D0", VA = "0x4A906D0")]
	public static bool2x4 operator <=(double2x4 lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x4A90790", Offset = "0x4A90790", VA = "0x4A90790")]
	public static bool2x4 operator <=(double2x4 lhs, double rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x4A90820", Offset = "0x4A90820", VA = "0x4A90820")]
	public static bool2x4 operator <=(double lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x4A908D0", Offset = "0x4A908D0", VA = "0x4A908D0")]
	public static bool2x4 operator >(double2x4 lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x4A90990", Offset = "0x4A90990", VA = "0x4A90990")]
	public static bool2x4 operator >(double2x4 lhs, double rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x4A90A40", Offset = "0x4A90A40", VA = "0x4A90A40")]
	public static bool2x4 operator >(double lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x4A90AD0", Offset = "0x4A90AD0", VA = "0x4A90AD0")]
	public static bool2x4 operator >=(double2x4 lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x4A90B90", Offset = "0x4A90B90", VA = "0x4A90B90")]
	public static bool2x4 operator >=(double2x4 lhs, double rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x4A90C40", Offset = "0x4A90C40", VA = "0x4A90C40")]
	public static bool2x4 operator >=(double lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x4A90CD0", Offset = "0x4A90CD0", VA = "0x4A90CD0")]
	public static double2x4 operator -(double2x4 val)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x4A90D10", Offset = "0x4A90D10", VA = "0x4A90D10")]
	public static double2x4 operator +(double2x4 val)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x4A90D40", Offset = "0x4A90D40", VA = "0x4A90D40")]
	public static bool2x4 operator ==(double2x4 lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x4A90E20", Offset = "0x4A90E20", VA = "0x4A90E20")]
	public static bool2x4 operator ==(double2x4 lhs, double rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x4A90EF0", Offset = "0x4A90EF0", VA = "0x4A90EF0")]
	public static bool2x4 operator ==(double lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x4A90FC0", Offset = "0x4A90FC0", VA = "0x4A90FC0")]
	public static bool2x4 operator !=(double2x4 lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF6")]
	[Address(RVA = "0x4A910A0", Offset = "0x4A910A0", VA = "0x4A910A0")]
	public static bool2x4 operator !=(double2x4 lhs, double rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x4A91170", Offset = "0x4A91170", VA = "0x4A91170")]
	public static bool2x4 operator !=(double lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF9")]
	[Address(RVA = "0x4A91250", Offset = "0x4A91250", VA = "0x4A91250", Slot = "4")]
	public bool Equals(double2x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x4A912D0", Offset = "0x4A912D0", VA = "0x4A912D0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x4A913A0", Offset = "0x4A913A0", VA = "0x4A913A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x4A914C0", Offset = "0x4A914C0", VA = "0x4A914C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x4A91800", Offset = "0x4A91800", VA = "0x4A91800", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
