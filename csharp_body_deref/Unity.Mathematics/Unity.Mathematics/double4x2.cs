// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.double4x2
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
[Token(Token = "0x2000025")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double4x2 : IEquatable<double4x2>, IFormattable
{
	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x0")]
	public double4 c0;

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x20")]
	public double4 c1;

	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double4x2 zero;

	[Token(Token = "0x170003D8")]
	public unsafe ref double4 this[int index]
	{
		[Token(Token = "0x6000F94")]
		[Address(RVA = "0x4AA4AC0", Offset = "0x4AA4AC0", VA = "0x4AA4AC0")]
		get
		{
			return ref *(double4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F5B")]
	[Address(RVA = "0x4AA2F40", Offset = "0x4AA2F40", VA = "0x4AA2F40")]
	public double4x2(double4 c0, double4 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F5C")]
	[Address(RVA = "0x4AA2F70", Offset = "0x4AA2F70", VA = "0x4AA2F70")]
	public double4x2(double m00, double m01, double m10, double m11, double m20, double m21, double m30, double m31)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F5D")]
	[Address(RVA = "0x4AA2FA0", Offset = "0x4AA2FA0", VA = "0x4AA2FA0")]
	public double4x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F5E")]
	[Address(RVA = "0x4AA2FD0", Offset = "0x4AA2FD0", VA = "0x4AA2FD0")]
	public double4x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F5F")]
	[Address(RVA = "0x4AA3010", Offset = "0x4AA3010", VA = "0x4AA3010")]
	public double4x2(bool4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F60")]
	[Address(RVA = "0x4AA3100", Offset = "0x4AA3100", VA = "0x4AA3100")]
	public double4x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F61")]
	[Address(RVA = "0x4AA3130", Offset = "0x4AA3130", VA = "0x4AA3130")]
	public double4x2(int4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F62")]
	[Address(RVA = "0x4AA31B0", Offset = "0x4AA31B0", VA = "0x4AA31B0")]
	public double4x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F63")]
	[Address(RVA = "0x4AA31E0", Offset = "0x4AA31E0", VA = "0x4AA31E0")]
	public double4x2(uint4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F64")]
	[Address(RVA = "0x4AA3270", Offset = "0x4AA3270", VA = "0x4AA3270")]
	public double4x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F65")]
	[Address(RVA = "0x4AA32A0", Offset = "0x4AA32A0", VA = "0x4AA32A0")]
	public double4x2(float4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F66")]
	[Address(RVA = "0x4AA32D0", Offset = "0x4AA32D0", VA = "0x4AA32D0")]
	public static implicit operator double4x2(double v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F67")]
	[Address(RVA = "0x4AA3300", Offset = "0x4AA3300", VA = "0x4AA3300")]
	public static explicit operator double4x2(bool v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F68")]
	[Address(RVA = "0x4AA3340", Offset = "0x4AA3340", VA = "0x4AA3340")]
	public static explicit operator double4x2(bool4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F69")]
	[Address(RVA = "0x4AA3440", Offset = "0x4AA3440", VA = "0x4AA3440")]
	public static implicit operator double4x2(int v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F6A")]
	[Address(RVA = "0x4AA3470", Offset = "0x4AA3470", VA = "0x4AA3470")]
	public static implicit operator double4x2(int4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F6B")]
	[Address(RVA = "0x4AA34F0", Offset = "0x4AA34F0", VA = "0x4AA34F0")]
	public static implicit operator double4x2(uint v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F6C")]
	[Address(RVA = "0x4AA3530", Offset = "0x4AA3530", VA = "0x4AA3530")]
	public static implicit operator double4x2(uint4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F6D")]
	[Address(RVA = "0x4AA35C0", Offset = "0x4AA35C0", VA = "0x4AA35C0")]
	public static implicit operator double4x2(float v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F6E")]
	[Address(RVA = "0x4AA35F0", Offset = "0x4AA35F0", VA = "0x4AA35F0")]
	public static implicit operator double4x2(float4x2 v)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F6F")]
	[Address(RVA = "0x4AA3620", Offset = "0x4AA3620", VA = "0x4AA3620")]
	public static double4x2 operator *(double4x2 lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F70")]
	[Address(RVA = "0x4AA3670", Offset = "0x4AA3670", VA = "0x4AA3670")]
	public static double4x2 operator *(double4x2 lhs, double rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F71")]
	[Address(RVA = "0x4AA36B0", Offset = "0x4AA36B0", VA = "0x4AA36B0")]
	public static double4x2 operator *(double lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F72")]
	[Address(RVA = "0x4AA36F0", Offset = "0x4AA36F0", VA = "0x4AA36F0")]
	public static double4x2 operator +(double4x2 lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F73")]
	[Address(RVA = "0x4AA3740", Offset = "0x4AA3740", VA = "0x4AA3740")]
	public static double4x2 operator +(double4x2 lhs, double rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F74")]
	[Address(RVA = "0x4AA3780", Offset = "0x4AA3780", VA = "0x4AA3780")]
	public static double4x2 operator +(double lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F75")]
	[Address(RVA = "0x4AA37C0", Offset = "0x4AA37C0", VA = "0x4AA37C0")]
	public static double4x2 operator -(double4x2 lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F76")]
	[Address(RVA = "0x4AA3810", Offset = "0x4AA3810", VA = "0x4AA3810")]
	public static double4x2 operator -(double4x2 lhs, double rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F77")]
	[Address(RVA = "0x4AA3860", Offset = "0x4AA3860", VA = "0x4AA3860")]
	public static double4x2 operator -(double lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F78")]
	[Address(RVA = "0x4AA38A0", Offset = "0x4AA38A0", VA = "0x4AA38A0")]
	public static double4x2 operator /(double4x2 lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F79")]
	[Address(RVA = "0x4AA38F0", Offset = "0x4AA38F0", VA = "0x4AA38F0")]
	public static double4x2 operator /(double4x2 lhs, double rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F7A")]
	[Address(RVA = "0x4AA3940", Offset = "0x4AA3940", VA = "0x4AA3940")]
	public static double4x2 operator /(double lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F7B")]
	[Address(RVA = "0x4AA3980", Offset = "0x4AA3980", VA = "0x4AA3980")]
	public static double4x2 operator %(double4x2 lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F7C")]
	[Address(RVA = "0x4AA3B50", Offset = "0x4AA3B50", VA = "0x4AA3B50")]
	public static double4x2 operator %(double4x2 lhs, double rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F7D")]
	[Address(RVA = "0x4AA3CC0", Offset = "0x4AA3CC0", VA = "0x4AA3CC0")]
	public static double4x2 operator %(double lhs, double4x2 rhs)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F7E")]
	[Address(RVA = "0x4AA3E30", Offset = "0x4AA3E30", VA = "0x4AA3E30")]
	public static double4x2 operator ++(double4x2 val)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F7F")]
	[Address(RVA = "0x4AA3E80", Offset = "0x4AA3E80", VA = "0x4AA3E80")]
	public static double4x2 operator --(double4x2 val)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F80")]
	[Address(RVA = "0x4AA3ED0", Offset = "0x4AA3ED0", VA = "0x4AA3ED0")]
	public static bool4x2 operator <(double4x2 lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F81")]
	[Address(RVA = "0x4AA3F90", Offset = "0x4AA3F90", VA = "0x4AA3F90")]
	public static bool4x2 operator <(double4x2 lhs, double rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F82")]
	[Address(RVA = "0x4AA4020", Offset = "0x4AA4020", VA = "0x4AA4020")]
	public static bool4x2 operator <(double lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F83")]
	[Address(RVA = "0x4AA40B0", Offset = "0x4AA40B0", VA = "0x4AA40B0")]
	public static bool4x2 operator <=(double4x2 lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F84")]
	[Address(RVA = "0x4AA4170", Offset = "0x4AA4170", VA = "0x4AA4170")]
	public static bool4x2 operator <=(double4x2 lhs, double rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F85")]
	[Address(RVA = "0x4AA4200", Offset = "0x4AA4200", VA = "0x4AA4200")]
	public static bool4x2 operator <=(double lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F86")]
	[Address(RVA = "0x4AA4290", Offset = "0x4AA4290", VA = "0x4AA4290")]
	public static bool4x2 operator >(double4x2 lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F87")]
	[Address(RVA = "0x4AA4350", Offset = "0x4AA4350", VA = "0x4AA4350")]
	public static bool4x2 operator >(double4x2 lhs, double rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F88")]
	[Address(RVA = "0x4AA43E0", Offset = "0x4AA43E0", VA = "0x4AA43E0")]
	public static bool4x2 operator >(double lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F89")]
	[Address(RVA = "0x4AA4470", Offset = "0x4AA4470", VA = "0x4AA4470")]
	public static bool4x2 operator >=(double4x2 lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F8A")]
	[Address(RVA = "0x4AA4530", Offset = "0x4AA4530", VA = "0x4AA4530")]
	public static bool4x2 operator >=(double4x2 lhs, double rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F8B")]
	[Address(RVA = "0x4AA45C0", Offset = "0x4AA45C0", VA = "0x4AA45C0")]
	public static bool4x2 operator >=(double lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F8C")]
	[Address(RVA = "0x4AA4650", Offset = "0x4AA4650", VA = "0x4AA4650")]
	public static double4x2 operator -(double4x2 val)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F8D")]
	[Address(RVA = "0x4AA4690", Offset = "0x4AA4690", VA = "0x4AA4690")]
	public static double4x2 operator +(double4x2 val)
	{
		return default(double4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F8E")]
	[Address(RVA = "0x4AA46C0", Offset = "0x4AA46C0", VA = "0x4AA46C0")]
	public static bool4x2 operator ==(double4x2 lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F8F")]
	[Address(RVA = "0x4AA47A0", Offset = "0x4AA47A0", VA = "0x4AA47A0")]
	public static bool4x2 operator ==(double4x2 lhs, double rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F90")]
	[Address(RVA = "0x4AA4830", Offset = "0x4AA4830", VA = "0x4AA4830")]
	public static bool4x2 operator ==(double lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F91")]
	[Address(RVA = "0x4AA48C0", Offset = "0x4AA48C0", VA = "0x4AA48C0")]
	public static bool4x2 operator !=(double4x2 lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F92")]
	[Address(RVA = "0x4AA49A0", Offset = "0x4AA49A0", VA = "0x4AA49A0")]
	public static bool4x2 operator !=(double4x2 lhs, double rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F93")]
	[Address(RVA = "0x4AA4A30", Offset = "0x4AA4A30", VA = "0x4AA4A30")]
	public static bool4x2 operator !=(double lhs, double4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F95")]
	[Address(RVA = "0x4AA4AD0", Offset = "0x4AA4AD0", VA = "0x4AA4AD0", Slot = "4")]
	public bool Equals(double4x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F96")]
	[Address(RVA = "0x4AA4B50", Offset = "0x4AA4B50", VA = "0x4AA4B50", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F97")]
	[Address(RVA = "0x4AA4C20", Offset = "0x4AA4C20", VA = "0x4AA4C20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F98")]
	[Address(RVA = "0x4AA4D30", Offset = "0x4AA4D30", VA = "0x4AA4D30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F99")]
	[Address(RVA = "0x4AA5070", Offset = "0x4AA5070", VA = "0x4AA5070", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
