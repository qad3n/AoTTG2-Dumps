// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.double3x4
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
[Token(Token = "0x2000023")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double3x4 : IEquatable<double3x4>, IFormattable
{
	[Token(Token = "0x4000086")]
	[FieldOffset(Offset = "0x0")]
	public double3 c0;

	[Token(Token = "0x4000087")]
	[FieldOffset(Offset = "0x18")]
	public double3 c1;

	[Token(Token = "0x4000088")]
	[FieldOffset(Offset = "0x30")]
	public double3 c2;

	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0x48")]
	public double3 c3;

	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double3x4 zero;

	[Token(Token = "0x17000286")]
	public unsafe ref double3 this[int index]
	{
		[Token(Token = "0x6000DF1")]
		[Address(RVA = "0x841AF0", Offset = "0x8400F0", VA = "0x180841AF0")]
		get
		{
			return ref *(double3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DB8")]
	[Address(RVA = "0x2A606B0", Offset = "0x2A5ECB0", VA = "0x182A606B0")]
	public double3x4(double3 c0, double3 c1, double3 c2, double3 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DB9")]
	[Address(RVA = "0x2A60700", Offset = "0x2A5ED00", VA = "0x182A60700")]
	public double3x4(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13, double m20, double m21, double m22, double m23)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DBA")]
	[Address(RVA = "0x2A60800", Offset = "0x2A5EE00", VA = "0x182A60800")]
	public double3x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DBB")]
	[Address(RVA = "0x29C6EB0", Offset = "0x29C54B0", VA = "0x1829C6EB0")]
	public double3x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DBC")]
	[Address(RVA = "0x29C6C10", Offset = "0x29C5210", VA = "0x1829C6C10")]
	public double3x4(bool3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DBD")]
	[Address(RVA = "0x2A60780", Offset = "0x2A5ED80", VA = "0x182A60780")]
	public double3x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DBE")]
	[Address(RVA = "0x2A60820", Offset = "0x2A5EE20", VA = "0x182A60820")]
	public double3x4(int3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DBF")]
	[Address(RVA = "0x29C6D00", Offset = "0x29C5300", VA = "0x1829C6D00")]
	public double3x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DC0")]
	[Address(RVA = "0x29C6DC0", Offset = "0x29C53C0", VA = "0x1829C6DC0")]
	public double3x4(uint3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DC1")]
	[Address(RVA = "0x2A60970", Offset = "0x2A5EF70", VA = "0x182A60970")]
	public double3x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DC2")]
	[Address(RVA = "0x2A60910", Offset = "0x2A5EF10", VA = "0x182A60910")]
	public double3x4(float3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DC3")]
	[Address(RVA = "0x29D9C00", Offset = "0x29D8200", VA = "0x1829D9C00")]
	public static implicit operator double3x4(double v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DC4")]
	[Address(RVA = "0x2A61580", Offset = "0x2A5FB80", VA = "0x182A61580")]
	public static explicit operator double3x4(bool v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DC5")]
	[Address(RVA = "0x2A615C0", Offset = "0x2A5FBC0", VA = "0x182A615C0")]
	public static explicit operator double3x4(bool3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DC6")]
	[Address(RVA = "0x29D9CA0", Offset = "0x29D82A0", VA = "0x1829D9CA0")]
	public static implicit operator double3x4(int v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DC7")]
	[Address(RVA = "0x29D9E00", Offset = "0x29D8400", VA = "0x1829D9E00")]
	public static implicit operator double3x4(int3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DC8")]
	[Address(RVA = "0x2A61B70", Offset = "0x2A60170", VA = "0x182A61B70")]
	public static implicit operator double3x4(uint v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DC9")]
	[Address(RVA = "0x29DA0B0", Offset = "0x29D86B0", VA = "0x1829DA0B0")]
	public static implicit operator double3x4(uint3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DCA")]
	[Address(RVA = "0x29D9F80", Offset = "0x29D8580", VA = "0x1829D9F80")]
	public static implicit operator double3x4(float v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DCB")]
	[Address(RVA = "0x29D9D20", Offset = "0x29D8320", VA = "0x1829D9D20")]
	public static implicit operator double3x4(float3x4 v)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x2A62D80", Offset = "0x2A61380", VA = "0x182A62D80")]
	public static double3x4 operator *(double3x4 lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x2A62C90", Offset = "0x2A61290", VA = "0x182A62C90")]
	public static double3x4 operator *(double3x4 lhs, double rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x2A62B90", Offset = "0x2A61190", VA = "0x182A62B90")]
	public static double3x4 operator *(double lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x2A60BD0", Offset = "0x2A5F1D0", VA = "0x182A60BD0")]
	public static double3x4 operator +(double3x4 lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DD0")]
	[Address(RVA = "0x2A609E0", Offset = "0x2A5EFE0", VA = "0x182A609E0")]
	public static double3x4 operator +(double3x4 lhs, double rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DD1")]
	[Address(RVA = "0x2A60AD0", Offset = "0x2A5F0D0", VA = "0x182A60AD0")]
	public static double3x4 operator +(double lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DD2")]
	[Address(RVA = "0x2A62E80", Offset = "0x2A61480", VA = "0x182A62E80")]
	public static double3x4 operator -(double3x4 lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DD3")]
	[Address(RVA = "0x2A63080", Offset = "0x2A61680", VA = "0x182A63080")]
	public static double3x4 operator -(double3x4 lhs, double rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DD4")]
	[Address(RVA = "0x2A62F80", Offset = "0x2A61580", VA = "0x182A62F80")]
	public static double3x4 operator -(double lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DD5")]
	[Address(RVA = "0x2A61010", Offset = "0x2A5F610", VA = "0x182A61010")]
	public static double3x4 operator /(double3x4 lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DD6")]
	[Address(RVA = "0x2A60E10", Offset = "0x2A5F410", VA = "0x182A60E10")]
	public static double3x4 operator /(double3x4 lhs, double rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DD7")]
	[Address(RVA = "0x2A60F10", Offset = "0x2A5F510", VA = "0x182A60F10")]
	public static double3x4 operator /(double lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DD8")]
	[Address(RVA = "0x2A629E0", Offset = "0x2A60FE0", VA = "0x182A629E0")]
	public static double3x4 operator %(double3x4 lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DD9")]
	[Address(RVA = "0x2A626A0", Offset = "0x2A60CA0", VA = "0x182A626A0")]
	public static double3x4 operator %(double3x4 lhs, double rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DDA")]
	[Address(RVA = "0x2A62840", Offset = "0x2A60E40", VA = "0x182A62840")]
	public static double3x4 operator %(double lhs, double3x4 rhs)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DDB")]
	[Address(RVA = "0x2A61BB0", Offset = "0x2A601B0", VA = "0x182A61BB0")]
	public static double3x4 operator ++(double3x4 val)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DDC")]
	[Address(RVA = "0x2A60CD0", Offset = "0x2A5F2D0", VA = "0x182A60CD0")]
	public static double3x4 operator --(double3x4 val)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DDD")]
	[Address(RVA = "0x2A625A0", Offset = "0x2A60BA0", VA = "0x182A625A0")]
	public static bool3x4 operator <(double3x4 lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x2A624F0", Offset = "0x2A60AF0", VA = "0x182A624F0")]
	public static bool3x4 operator <(double3x4 lhs, double rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DDF")]
	[Address(RVA = "0x2A62400", Offset = "0x2A60A00", VA = "0x182A62400")]
	public static bool3x4 operator <(double lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DE0")]
	[Address(RVA = "0x2A62160", Offset = "0x2A60760", VA = "0x182A62160")]
	public static bool3x4 operator <=(double3x4 lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DE1")]
	[Address(RVA = "0x2A62260", Offset = "0x2A60860", VA = "0x182A62260")]
	public static bool3x4 operator <=(double3x4 lhs, double rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DE2")]
	[Address(RVA = "0x2A62310", Offset = "0x2A60910", VA = "0x182A62310")]
	public static bool3x4 operator <=(double lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DE3")]
	[Address(RVA = "0x2A61A70", Offset = "0x2A60070", VA = "0x182A61A70")]
	public static bool3x4 operator >(double3x4 lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DE4")]
	[Address(RVA = "0x2A61980", Offset = "0x2A5FF80", VA = "0x182A61980")]
	public static bool3x4 operator >(double3x4 lhs, double rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DE5")]
	[Address(RVA = "0x2A618C0", Offset = "0x2A5FEC0", VA = "0x182A618C0")]
	public static bool3x4 operator >(double lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DE6")]
	[Address(RVA = "0x2A61700", Offset = "0x2A5FD00", VA = "0x182A61700")]
	public static bool3x4 operator >=(double3x4 lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DE7")]
	[Address(RVA = "0x2A61610", Offset = "0x2A5FC10", VA = "0x182A61610")]
	public static bool3x4 operator >=(double3x4 lhs, double rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DE8")]
	[Address(RVA = "0x2A61800", Offset = "0x2A5FE00", VA = "0x182A61800")]
	public static bool3x4 operator >=(double lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DE9")]
	[Address(RVA = "0x2A63180", Offset = "0x2A61780", VA = "0x182A63180")]
	public static double3x4 operator -(double3x4 val)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DEA")]
	[Address(RVA = "0x2A63270", Offset = "0x2A61870", VA = "0x182A63270")]
	public static double3x4 operator +(double3x4 val)
	{
		return default(double3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DEB")]
	[Address(RVA = "0x2A61110", Offset = "0x2A5F710", VA = "0x182A61110")]
	public static bool3x4 operator ==(double3x4 lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DEC")]
	[Address(RVA = "0x2A61410", Offset = "0x2A5FA10", VA = "0x182A61410")]
	public static bool3x4 operator ==(double3x4 lhs, double rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DED")]
	[Address(RVA = "0x2A612B0", Offset = "0x2A5F8B0", VA = "0x182A612B0")]
	public static bool3x4 operator ==(double lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DEE")]
	[Address(RVA = "0x2A61FC0", Offset = "0x2A605C0", VA = "0x182A61FC0")]
	public static bool3x4 operator !=(double3x4 lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x2A61CF0", Offset = "0x2A602F0", VA = "0x182A61CF0")]
	public static bool3x4 operator !=(double3x4 lhs, double rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DF0")]
	[Address(RVA = "0x2A61E60", Offset = "0x2A60460", VA = "0x182A61E60")]
	public static bool3x4 operator !=(double lhs, double3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DF2")]
	[Address(RVA = "0x2A53270", Offset = "0x2A51870", VA = "0x182A53270", Slot = "4")]
	public bool Equals(double3x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000DF3")]
	[Address(RVA = "0x2A5FB70", Offset = "0x2A5E170", VA = "0x182A5FB70", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DF4")]
	[Address(RVA = "0x2A5FC50", Offset = "0x2A5E250", VA = "0x182A5FC50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DF5")]
	[Address(RVA = "0x2A60170", Offset = "0x2A5E770", VA = "0x182A60170", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000DF6")]
	[Address(RVA = "0x2A5FCA0", Offset = "0x2A5E2A0", VA = "0x182A5FCA0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
