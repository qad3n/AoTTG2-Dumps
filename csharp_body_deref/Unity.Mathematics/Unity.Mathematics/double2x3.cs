// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.double2x3
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
public struct double2x3 : IEquatable<double2x3>, IFormattable
{
	[Token(Token = "0x4000067")]
	[FieldOffset(Offset = "0x0")]
	public double2 c0;

	[Token(Token = "0x4000068")]
	[FieldOffset(Offset = "0x10")]
	public double2 c1;

	[Token(Token = "0x4000069")]
	[FieldOffset(Offset = "0x20")]
	public double2 c2;

	[Token(Token = "0x400006A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double2x3 zero;

	[Token(Token = "0x1700020C")]
	public unsafe ref double2 this[int index]
	{
		[Token(Token = "0x6000BB9")]
		[Address(RVA = "0x4A8EED0", Offset = "0x4A8EED0", VA = "0x4A8EED0")]
		get
		{
			return ref *(double2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x4A8D970", Offset = "0x4A8D970", VA = "0x4A8D970")]
	public double2x3(double2 c0, double2 c1, double2 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B81")]
	[Address(RVA = "0x4A8D990", Offset = "0x4A8D990", VA = "0x4A8D990")]
	public double2x3(double m00, double m01, double m02, double m10, double m11, double m12)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B82")]
	[Address(RVA = "0x4A8D9B0", Offset = "0x4A8D9B0", VA = "0x4A8D9B0")]
	public double2x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B83")]
	[Address(RVA = "0x4A8D9D0", Offset = "0x4A8D9D0", VA = "0x4A8D9D0")]
	public double2x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B84")]
	[Address(RVA = "0x4A8DA00", Offset = "0x4A8DA00", VA = "0x4A8DA00")]
	public double2x3(bool2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x4A8DAA0", Offset = "0x4A8DAA0", VA = "0x4A8DAA0")]
	public double2x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x4A8DAD0", Offset = "0x4A8DAD0", VA = "0x4A8DAD0")]
	public double2x3(int2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B87")]
	[Address(RVA = "0x4A8DB30", Offset = "0x4A8DB30", VA = "0x4A8DB30")]
	public double2x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B88")]
	[Address(RVA = "0x4A8DB60", Offset = "0x4A8DB60", VA = "0x4A8DB60")]
	public double2x3(uint2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B89")]
	[Address(RVA = "0x4A8DBD0", Offset = "0x4A8DBD0", VA = "0x4A8DBD0")]
	public double2x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B8A")]
	[Address(RVA = "0x4A8DC00", Offset = "0x4A8DC00", VA = "0x4A8DC00")]
	public double2x3(float2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B8B")]
	[Address(RVA = "0x4A8DC20", Offset = "0x4A8DC20", VA = "0x4A8DC20")]
	public static implicit operator double2x3(double v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B8C")]
	[Address(RVA = "0x4A8DC50", Offset = "0x4A8DC50", VA = "0x4A8DC50")]
	public static explicit operator double2x3(bool v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B8D")]
	[Address(RVA = "0x4A8DC90", Offset = "0x4A8DC90", VA = "0x4A8DC90")]
	public static explicit operator double2x3(bool2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B8E")]
	[Address(RVA = "0x4A8DD30", Offset = "0x4A8DD30", VA = "0x4A8DD30")]
	public static implicit operator double2x3(int v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B8F")]
	[Address(RVA = "0x4A8DD60", Offset = "0x4A8DD60", VA = "0x4A8DD60")]
	public static implicit operator double2x3(int2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x4A8DDC0", Offset = "0x4A8DDC0", VA = "0x4A8DDC0")]
	public static implicit operator double2x3(uint v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x4A8DDF0", Offset = "0x4A8DDF0", VA = "0x4A8DDF0")]
	public static implicit operator double2x3(uint2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x4A8DE60", Offset = "0x4A8DE60", VA = "0x4A8DE60")]
	public static implicit operator double2x3(float v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B93")]
	[Address(RVA = "0x4A8DE90", Offset = "0x4A8DE90", VA = "0x4A8DE90")]
	public static implicit operator double2x3(float2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B94")]
	[Address(RVA = "0x4A8DEB0", Offset = "0x4A8DEB0", VA = "0x4A8DEB0")]
	public static double2x3 operator *(double2x3 lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B95")]
	[Address(RVA = "0x4A8DEF0", Offset = "0x4A8DEF0", VA = "0x4A8DEF0")]
	public static double2x3 operator *(double2x3 lhs, double rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B96")]
	[Address(RVA = "0x4A8DF20", Offset = "0x4A8DF20", VA = "0x4A8DF20")]
	public static double2x3 operator *(double lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B97")]
	[Address(RVA = "0x4A8DF50", Offset = "0x4A8DF50", VA = "0x4A8DF50")]
	public static double2x3 operator +(double2x3 lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x4A8DF90", Offset = "0x4A8DF90", VA = "0x4A8DF90")]
	public static double2x3 operator +(double2x3 lhs, double rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x4A8DFC0", Offset = "0x4A8DFC0", VA = "0x4A8DFC0")]
	public static double2x3 operator +(double lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B9A")]
	[Address(RVA = "0x4A8DFF0", Offset = "0x4A8DFF0", VA = "0x4A8DFF0")]
	public static double2x3 operator -(double2x3 lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x4A8E030", Offset = "0x4A8E030", VA = "0x4A8E030")]
	public static double2x3 operator -(double2x3 lhs, double rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x4A8E070", Offset = "0x4A8E070", VA = "0x4A8E070")]
	public static double2x3 operator -(double lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B9D")]
	[Address(RVA = "0x4A8E0A0", Offset = "0x4A8E0A0", VA = "0x4A8E0A0")]
	public static double2x3 operator /(double2x3 lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B9E")]
	[Address(RVA = "0x4A8E0E0", Offset = "0x4A8E0E0", VA = "0x4A8E0E0")]
	public static double2x3 operator /(double2x3 lhs, double rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B9F")]
	[Address(RVA = "0x4A8E120", Offset = "0x4A8E120", VA = "0x4A8E120")]
	public static double2x3 operator /(double lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BA0")]
	[Address(RVA = "0x4A8E150", Offset = "0x4A8E150", VA = "0x4A8E150")]
	public static double2x3 operator %(double2x3 lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BA1")]
	[Address(RVA = "0x4A8E280", Offset = "0x4A8E280", VA = "0x4A8E280")]
	public static double2x3 operator %(double2x3 lhs, double rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x4A8E380", Offset = "0x4A8E380", VA = "0x4A8E380")]
	public static double2x3 operator %(double lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x4A8E480", Offset = "0x4A8E480", VA = "0x4A8E480")]
	public static double2x3 operator ++(double2x3 val)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BA4")]
	[Address(RVA = "0x4A8E4C0", Offset = "0x4A8E4C0", VA = "0x4A8E4C0")]
	public static double2x3 operator --(double2x3 val)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x4A8E500", Offset = "0x4A8E500", VA = "0x4A8E500")]
	public static bool2x3 operator <(double2x3 lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x4A8E590", Offset = "0x4A8E590", VA = "0x4A8E590")]
	public static bool2x3 operator <(double2x3 lhs, double rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BA7")]
	[Address(RVA = "0x4A8E600", Offset = "0x4A8E600", VA = "0x4A8E600")]
	public static bool2x3 operator <(double lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BA8")]
	[Address(RVA = "0x4A8E680", Offset = "0x4A8E680", VA = "0x4A8E680")]
	public static bool2x3 operator <=(double2x3 lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x4A8E710", Offset = "0x4A8E710", VA = "0x4A8E710")]
	public static bool2x3 operator <=(double2x3 lhs, double rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BAA")]
	[Address(RVA = "0x4A8E780", Offset = "0x4A8E780", VA = "0x4A8E780")]
	public static bool2x3 operator <=(double lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BAB")]
	[Address(RVA = "0x4A8E800", Offset = "0x4A8E800", VA = "0x4A8E800")]
	public static bool2x3 operator >(double2x3 lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x4A8E890", Offset = "0x4A8E890", VA = "0x4A8E890")]
	public static bool2x3 operator >(double2x3 lhs, double rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x4A8E910", Offset = "0x4A8E910", VA = "0x4A8E910")]
	public static bool2x3 operator >(double lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x4A8E980", Offset = "0x4A8E980", VA = "0x4A8E980")]
	public static bool2x3 operator >=(double2x3 lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BAF")]
	[Address(RVA = "0x4A8EA10", Offset = "0x4A8EA10", VA = "0x4A8EA10")]
	public static bool2x3 operator >=(double2x3 lhs, double rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x4A8EA90", Offset = "0x4A8EA90", VA = "0x4A8EA90")]
	public static bool2x3 operator >=(double lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x4A8EB00", Offset = "0x4A8EB00", VA = "0x4A8EB00")]
	public static double2x3 operator -(double2x3 val)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x4A8EB30", Offset = "0x4A8EB30", VA = "0x4A8EB30")]
	public static double2x3 operator +(double2x3 val)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x4A8EB50", Offset = "0x4A8EB50", VA = "0x4A8EB50")]
	public static bool2x3 operator ==(double2x3 lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x4A8EBF0", Offset = "0x4A8EBF0", VA = "0x4A8EBF0")]
	public static bool2x3 operator ==(double2x3 lhs, double rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB5")]
	[Address(RVA = "0x4A8EC80", Offset = "0x4A8EC80", VA = "0x4A8EC80")]
	public static bool2x3 operator ==(double lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB6")]
	[Address(RVA = "0x4A8ED10", Offset = "0x4A8ED10", VA = "0x4A8ED10")]
	public static bool2x3 operator !=(double2x3 lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0x4A8EDB0", Offset = "0x4A8EDB0", VA = "0x4A8EDB0")]
	public static bool2x3 operator !=(double2x3 lhs, double rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x4A8EE40", Offset = "0x4A8EE40", VA = "0x4A8EE40")]
	public static bool2x3 operator !=(double lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBA")]
	[Address(RVA = "0x4A8EEE0", Offset = "0x4A8EEE0", VA = "0x4A8EEE0", Slot = "4")]
	public bool Equals(double2x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x4A8EF50", Offset = "0x4A8EF50", VA = "0x4A8EF50", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x4A8F010", Offset = "0x4A8F010", VA = "0x4A8F010", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x4A8F0E0", Offset = "0x4A8F0E0", VA = "0x4A8F0E0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BBE")]
	[Address(RVA = "0x4A8F370", Offset = "0x4A8F370", VA = "0x4A8F370", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
