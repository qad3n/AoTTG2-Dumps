using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x200001E")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double2x2 : IEquatable<double2x2>, IFormattable
{
	[Token(Token = "0x4000063")]
	[FieldOffset(Offset = "0x0")]
	public double2 c0;

	[Token(Token = "0x4000064")]
	[FieldOffset(Offset = "0x10")]
	public double2 c1;

	[Token(Token = "0x4000065")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double2x2 identity;

	[Token(Token = "0x4000066")]
	[FieldOffset(Offset = "0x20")]
	public static readonly double2x2 zero;

	[Token(Token = "0x1700020B")]
	public unsafe ref double2 this[int index]
	{
		[Token(Token = "0x6000BA1")]
		[Address(RVA = "0x478A580", Offset = "0x478A580", VA = "0x478A580")]
		get
		{
			return ref *(double2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x47896B0", Offset = "0x47896B0", VA = "0x47896B0")]
	public double2x2(double2 c0, double2 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x47896D0", Offset = "0x47896D0", VA = "0x47896D0")]
	public double2x2(double m00, double m01, double m10, double m11)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x47896F0", Offset = "0x47896F0", VA = "0x47896F0")]
	public double2x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B6B")]
	[Address(RVA = "0x4789710", Offset = "0x4789710", VA = "0x4789710")]
	public double2x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B6C")]
	[Address(RVA = "0x4789740", Offset = "0x4789740", VA = "0x4789740")]
	public double2x2(bool2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B6D")]
	[Address(RVA = "0x47897B0", Offset = "0x47897B0", VA = "0x47897B0")]
	public double2x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x47897D0", Offset = "0x47897D0", VA = "0x47897D0")]
	public double2x2(int2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B6F")]
	[Address(RVA = "0x4789810", Offset = "0x4789810", VA = "0x4789810")]
	public double2x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B70")]
	[Address(RVA = "0x4789830", Offset = "0x4789830", VA = "0x4789830")]
	public double2x2(uint2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x4789870", Offset = "0x4789870", VA = "0x4789870")]
	public double2x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x4789890", Offset = "0x4789890", VA = "0x4789890")]
	public double2x2(float2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B73")]
	[Address(RVA = "0x47898A0", Offset = "0x47898A0", VA = "0x47898A0")]
	public static implicit operator double2x2(double v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x47898C0", Offset = "0x47898C0", VA = "0x47898C0")]
	public static explicit operator double2x2(bool v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x47898F0", Offset = "0x47898F0", VA = "0x47898F0")]
	public static explicit operator double2x2(bool2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x4789960", Offset = "0x4789960", VA = "0x4789960")]
	public static implicit operator double2x2(int v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x4789980", Offset = "0x4789980", VA = "0x4789980")]
	public static implicit operator double2x2(int2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B78")]
	[Address(RVA = "0x47899C0", Offset = "0x47899C0", VA = "0x47899C0")]
	public static implicit operator double2x2(uint v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x47899E0", Offset = "0x47899E0", VA = "0x47899E0")]
	public static implicit operator double2x2(uint2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x4789A20", Offset = "0x4789A20", VA = "0x4789A20")]
	public static implicit operator double2x2(float v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x4789A40", Offset = "0x4789A40", VA = "0x4789A40")]
	public static implicit operator double2x2(float2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x4789A60", Offset = "0x4789A60", VA = "0x4789A60")]
	public static double2x2 operator *(double2x2 lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x4789A90", Offset = "0x4789A90", VA = "0x4789A90")]
	public static double2x2 operator *(double2x2 lhs, double rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x4789AC0", Offset = "0x4789AC0", VA = "0x4789AC0")]
	public static double2x2 operator *(double lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B7F")]
	[Address(RVA = "0x4789AF0", Offset = "0x4789AF0", VA = "0x4789AF0")]
	public static double2x2 operator +(double2x2 lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B80")]
	[Address(RVA = "0x4789B20", Offset = "0x4789B20", VA = "0x4789B20")]
	public static double2x2 operator +(double2x2 lhs, double rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B81")]
	[Address(RVA = "0x4789B50", Offset = "0x4789B50", VA = "0x4789B50")]
	public static double2x2 operator +(double lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B82")]
	[Address(RVA = "0x4789B80", Offset = "0x4789B80", VA = "0x4789B80")]
	public static double2x2 operator -(double2x2 lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B83")]
	[Address(RVA = "0x4789BB0", Offset = "0x4789BB0", VA = "0x4789BB0")]
	public static double2x2 operator -(double2x2 lhs, double rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B84")]
	[Address(RVA = "0x4789BE0", Offset = "0x4789BE0", VA = "0x4789BE0")]
	public static double2x2 operator -(double lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B85")]
	[Address(RVA = "0x4789C10", Offset = "0x4789C10", VA = "0x4789C10")]
	public static double2x2 operator /(double2x2 lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B86")]
	[Address(RVA = "0x4789C40", Offset = "0x4789C40", VA = "0x4789C40")]
	public static double2x2 operator /(double2x2 lhs, double rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B87")]
	[Address(RVA = "0x4789C70", Offset = "0x4789C70", VA = "0x4789C70")]
	public static double2x2 operator /(double lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B88")]
	[Address(RVA = "0x4789CA0", Offset = "0x4789CA0", VA = "0x4789CA0")]
	public static double2x2 operator %(double2x2 lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B89")]
	[Address(RVA = "0x4789D60", Offset = "0x4789D60", VA = "0x4789D60")]
	public static double2x2 operator %(double2x2 lhs, double rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B8A")]
	[Address(RVA = "0x4789E10", Offset = "0x4789E10", VA = "0x4789E10")]
	public static double2x2 operator %(double lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B8B")]
	[Address(RVA = "0x4789EC0", Offset = "0x4789EC0", VA = "0x4789EC0")]
	public static double2x2 operator ++(double2x2 val)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B8C")]
	[Address(RVA = "0x4789EF0", Offset = "0x4789EF0", VA = "0x4789EF0")]
	public static double2x2 operator --(double2x2 val)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B8D")]
	[Address(RVA = "0x4789F20", Offset = "0x4789F20", VA = "0x4789F20")]
	public static bool2x2 operator <(double2x2 lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B8E")]
	[Address(RVA = "0x4789F80", Offset = "0x4789F80", VA = "0x4789F80")]
	public static bool2x2 operator <(double2x2 lhs, double rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B8F")]
	[Address(RVA = "0x4789FC0", Offset = "0x4789FC0", VA = "0x4789FC0")]
	public static bool2x2 operator <(double lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x478A010", Offset = "0x478A010", VA = "0x478A010")]
	public static bool2x2 operator <=(double2x2 lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x478A070", Offset = "0x478A070", VA = "0x478A070")]
	public static bool2x2 operator <=(double2x2 lhs, double rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x478A0B0", Offset = "0x478A0B0", VA = "0x478A0B0")]
	public static bool2x2 operator <=(double lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B93")]
	[Address(RVA = "0x478A100", Offset = "0x478A100", VA = "0x478A100")]
	public static bool2x2 operator >(double2x2 lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B94")]
	[Address(RVA = "0x478A160", Offset = "0x478A160", VA = "0x478A160")]
	public static bool2x2 operator >(double2x2 lhs, double rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B95")]
	[Address(RVA = "0x478A1B0", Offset = "0x478A1B0", VA = "0x478A1B0")]
	public static bool2x2 operator >(double lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B96")]
	[Address(RVA = "0x478A1F0", Offset = "0x478A1F0", VA = "0x478A1F0")]
	public static bool2x2 operator >=(double2x2 lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B97")]
	[Address(RVA = "0x478A250", Offset = "0x478A250", VA = "0x478A250")]
	public static bool2x2 operator >=(double2x2 lhs, double rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x478A2A0", Offset = "0x478A2A0", VA = "0x478A2A0")]
	public static bool2x2 operator >=(double lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x478A2E0", Offset = "0x478A2E0", VA = "0x478A2E0")]
	public static double2x2 operator -(double2x2 val)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B9A")]
	[Address(RVA = "0x478A300", Offset = "0x478A300", VA = "0x478A300")]
	public static double2x2 operator +(double2x2 val)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x478A320", Offset = "0x478A320", VA = "0x478A320")]
	public static bool2x2 operator ==(double2x2 lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x478A390", Offset = "0x478A390", VA = "0x478A390")]
	public static bool2x2 operator ==(double2x2 lhs, double rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B9D")]
	[Address(RVA = "0x478A3F0", Offset = "0x478A3F0", VA = "0x478A3F0")]
	public static bool2x2 operator ==(double lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B9E")]
	[Address(RVA = "0x478A450", Offset = "0x478A450", VA = "0x478A450")]
	public static bool2x2 operator !=(double2x2 lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B9F")]
	[Address(RVA = "0x478A4C0", Offset = "0x478A4C0", VA = "0x478A4C0")]
	public static bool2x2 operator !=(double2x2 lhs, double rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BA0")]
	[Address(RVA = "0x478A520", Offset = "0x478A520", VA = "0x478A520")]
	public static bool2x2 operator !=(double lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BA2")]
	[Address(RVA = "0x478A590", Offset = "0x478A590", VA = "0x478A590", Slot = "4")]
	public bool Equals(double2x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BA3")]
	[Address(RVA = "0x478A5E0", Offset = "0x478A5E0", VA = "0x478A5E0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BA4")]
	[Address(RVA = "0x478A680", Offset = "0x478A680", VA = "0x478A680", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BA5")]
	[Address(RVA = "0x478A710", Offset = "0x478A710", VA = "0x478A710", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BA6")]
	[Address(RVA = "0x478A900", Offset = "0x478A900", VA = "0x478A900", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
