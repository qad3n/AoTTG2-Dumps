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
[Token(Token = "0x200001B")]
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
		[Token(Token = "0x6000B79")]
		[Address(RVA = "0x4A8D3D0", Offset = "0x4A8D3D0", VA = "0x4A8D3D0")]
		get
		{
			return ref *(double2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B40")]
	[Address(RVA = "0x4A8C500", Offset = "0x4A8C500", VA = "0x4A8C500")]
	public double2x2(double2 c0, double2 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B41")]
	[Address(RVA = "0x4A8C520", Offset = "0x4A8C520", VA = "0x4A8C520")]
	public double2x2(double m00, double m01, double m10, double m11)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B42")]
	[Address(RVA = "0x4A8C540", Offset = "0x4A8C540", VA = "0x4A8C540")]
	public double2x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B43")]
	[Address(RVA = "0x4A8C560", Offset = "0x4A8C560", VA = "0x4A8C560")]
	public double2x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B44")]
	[Address(RVA = "0x4A8C590", Offset = "0x4A8C590", VA = "0x4A8C590")]
	public double2x2(bool2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B45")]
	[Address(RVA = "0x4A8C600", Offset = "0x4A8C600", VA = "0x4A8C600")]
	public double2x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B46")]
	[Address(RVA = "0x4A8C620", Offset = "0x4A8C620", VA = "0x4A8C620")]
	public double2x2(int2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B47")]
	[Address(RVA = "0x4A8C660", Offset = "0x4A8C660", VA = "0x4A8C660")]
	public double2x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B48")]
	[Address(RVA = "0x4A8C680", Offset = "0x4A8C680", VA = "0x4A8C680")]
	public double2x2(uint2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B49")]
	[Address(RVA = "0x4A8C6C0", Offset = "0x4A8C6C0", VA = "0x4A8C6C0")]
	public double2x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B4A")]
	[Address(RVA = "0x4A8C6E0", Offset = "0x4A8C6E0", VA = "0x4A8C6E0")]
	public double2x2(float2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B4B")]
	[Address(RVA = "0x4A8C6F0", Offset = "0x4A8C6F0", VA = "0x4A8C6F0")]
	public static implicit operator double2x2(double v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B4C")]
	[Address(RVA = "0x4A8C710", Offset = "0x4A8C710", VA = "0x4A8C710")]
	public static explicit operator double2x2(bool v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x4A8C740", Offset = "0x4A8C740", VA = "0x4A8C740")]
	public static explicit operator double2x2(bool2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B4E")]
	[Address(RVA = "0x4A8C7B0", Offset = "0x4A8C7B0", VA = "0x4A8C7B0")]
	public static implicit operator double2x2(int v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B4F")]
	[Address(RVA = "0x4A8C7D0", Offset = "0x4A8C7D0", VA = "0x4A8C7D0")]
	public static implicit operator double2x2(int2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x4A8C810", Offset = "0x4A8C810", VA = "0x4A8C810")]
	public static implicit operator double2x2(uint v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x4A8C830", Offset = "0x4A8C830", VA = "0x4A8C830")]
	public static implicit operator double2x2(uint2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x4A8C870", Offset = "0x4A8C870", VA = "0x4A8C870")]
	public static implicit operator double2x2(float v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B53")]
	[Address(RVA = "0x4A8C890", Offset = "0x4A8C890", VA = "0x4A8C890")]
	public static implicit operator double2x2(float2x2 v)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B54")]
	[Address(RVA = "0x4A8C8B0", Offset = "0x4A8C8B0", VA = "0x4A8C8B0")]
	public static double2x2 operator *(double2x2 lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B55")]
	[Address(RVA = "0x4A8C8E0", Offset = "0x4A8C8E0", VA = "0x4A8C8E0")]
	public static double2x2 operator *(double2x2 lhs, double rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x4A8C910", Offset = "0x4A8C910", VA = "0x4A8C910")]
	public static double2x2 operator *(double lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x4A8C940", Offset = "0x4A8C940", VA = "0x4A8C940")]
	public static double2x2 operator +(double2x2 lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B58")]
	[Address(RVA = "0x4A8C970", Offset = "0x4A8C970", VA = "0x4A8C970")]
	public static double2x2 operator +(double2x2 lhs, double rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x4A8C9A0", Offset = "0x4A8C9A0", VA = "0x4A8C9A0")]
	public static double2x2 operator +(double lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x4A8C9D0", Offset = "0x4A8C9D0", VA = "0x4A8C9D0")]
	public static double2x2 operator -(double2x2 lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B5B")]
	[Address(RVA = "0x4A8CA00", Offset = "0x4A8CA00", VA = "0x4A8CA00")]
	public static double2x2 operator -(double2x2 lhs, double rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B5C")]
	[Address(RVA = "0x4A8CA30", Offset = "0x4A8CA30", VA = "0x4A8CA30")]
	public static double2x2 operator -(double lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B5D")]
	[Address(RVA = "0x4A8CA60", Offset = "0x4A8CA60", VA = "0x4A8CA60")]
	public static double2x2 operator /(double2x2 lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B5E")]
	[Address(RVA = "0x4A8CA90", Offset = "0x4A8CA90", VA = "0x4A8CA90")]
	public static double2x2 operator /(double2x2 lhs, double rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B5F")]
	[Address(RVA = "0x4A8CAC0", Offset = "0x4A8CAC0", VA = "0x4A8CAC0")]
	public static double2x2 operator /(double lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B60")]
	[Address(RVA = "0x4A8CAF0", Offset = "0x4A8CAF0", VA = "0x4A8CAF0")]
	public static double2x2 operator %(double2x2 lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x4A8CBB0", Offset = "0x4A8CBB0", VA = "0x4A8CBB0")]
	public static double2x2 operator %(double2x2 lhs, double rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B62")]
	[Address(RVA = "0x4A8CC60", Offset = "0x4A8CC60", VA = "0x4A8CC60")]
	public static double2x2 operator %(double lhs, double2x2 rhs)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B63")]
	[Address(RVA = "0x4A8CD10", Offset = "0x4A8CD10", VA = "0x4A8CD10")]
	public static double2x2 operator ++(double2x2 val)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x4A8CD40", Offset = "0x4A8CD40", VA = "0x4A8CD40")]
	public static double2x2 operator --(double2x2 val)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B65")]
	[Address(RVA = "0x4A8CD70", Offset = "0x4A8CD70", VA = "0x4A8CD70")]
	public static bool2x2 operator <(double2x2 lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x4A8CDD0", Offset = "0x4A8CDD0", VA = "0x4A8CDD0")]
	public static bool2x2 operator <(double2x2 lhs, double rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x4A8CE10", Offset = "0x4A8CE10", VA = "0x4A8CE10")]
	public static bool2x2 operator <(double lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x4A8CE60", Offset = "0x4A8CE60", VA = "0x4A8CE60")]
	public static bool2x2 operator <=(double2x2 lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x4A8CEC0", Offset = "0x4A8CEC0", VA = "0x4A8CEC0")]
	public static bool2x2 operator <=(double2x2 lhs, double rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x4A8CF00", Offset = "0x4A8CF00", VA = "0x4A8CF00")]
	public static bool2x2 operator <=(double lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B6B")]
	[Address(RVA = "0x4A8CF50", Offset = "0x4A8CF50", VA = "0x4A8CF50")]
	public static bool2x2 operator >(double2x2 lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B6C")]
	[Address(RVA = "0x4A8CFB0", Offset = "0x4A8CFB0", VA = "0x4A8CFB0")]
	public static bool2x2 operator >(double2x2 lhs, double rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B6D")]
	[Address(RVA = "0x4A8D000", Offset = "0x4A8D000", VA = "0x4A8D000")]
	public static bool2x2 operator >(double lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B6E")]
	[Address(RVA = "0x4A8D040", Offset = "0x4A8D040", VA = "0x4A8D040")]
	public static bool2x2 operator >=(double2x2 lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B6F")]
	[Address(RVA = "0x4A8D0A0", Offset = "0x4A8D0A0", VA = "0x4A8D0A0")]
	public static bool2x2 operator >=(double2x2 lhs, double rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B70")]
	[Address(RVA = "0x4A8D0F0", Offset = "0x4A8D0F0", VA = "0x4A8D0F0")]
	public static bool2x2 operator >=(double lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x4A8D130", Offset = "0x4A8D130", VA = "0x4A8D130")]
	public static double2x2 operator -(double2x2 val)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B72")]
	[Address(RVA = "0x4A8D150", Offset = "0x4A8D150", VA = "0x4A8D150")]
	public static double2x2 operator +(double2x2 val)
	{
		return default(double2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B73")]
	[Address(RVA = "0x4A8D170", Offset = "0x4A8D170", VA = "0x4A8D170")]
	public static bool2x2 operator ==(double2x2 lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x4A8D1E0", Offset = "0x4A8D1E0", VA = "0x4A8D1E0")]
	public static bool2x2 operator ==(double2x2 lhs, double rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x4A8D240", Offset = "0x4A8D240", VA = "0x4A8D240")]
	public static bool2x2 operator ==(double lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x4A8D2A0", Offset = "0x4A8D2A0", VA = "0x4A8D2A0")]
	public static bool2x2 operator !=(double2x2 lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x4A8D310", Offset = "0x4A8D310", VA = "0x4A8D310")]
	public static bool2x2 operator !=(double2x2 lhs, double rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B78")]
	[Address(RVA = "0x4A8D370", Offset = "0x4A8D370", VA = "0x4A8D370")]
	public static bool2x2 operator !=(double lhs, double2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B7A")]
	[Address(RVA = "0x4A8D3E0", Offset = "0x4A8D3E0", VA = "0x4A8D3E0", Slot = "4")]
	public bool Equals(double2x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000B7B")]
	[Address(RVA = "0x4A8D430", Offset = "0x4A8D430", VA = "0x4A8D430", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B7C")]
	[Address(RVA = "0x4A8D4D0", Offset = "0x4A8D4D0", VA = "0x4A8D4D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B7D")]
	[Address(RVA = "0x4A8D560", Offset = "0x4A8D560", VA = "0x4A8D560", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000B7E")]
	[Address(RVA = "0x4A8D750", Offset = "0x4A8D750", VA = "0x4A8D750", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
