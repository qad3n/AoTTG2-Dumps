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
[Token(Token = "0x200001D")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double2x3 : IEquatable<double2x3>, IFormattable
{
	[Token(Token = "0x400006E")]
	[FieldOffset(Offset = "0x0")]
	public double2 c0;

	[Token(Token = "0x400006F")]
	[FieldOffset(Offset = "0x10")]
	public double2 c1;

	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x20")]
	public double2 c2;

	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double2x3 zero;

	[Token(Token = "0x1700020C")]
	public unsafe ref double2 this[int index]
	{
		[Token(Token = "0x6000C2C")]
		[Address(RVA = "0x841B00", Offset = "0x840100", VA = "0x180841B00")]
		get
		{
			return ref *(double2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x1046230", Offset = "0x1044830", VA = "0x181046230")]
	public double2x3(double2 c0, double2 c1, double2 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x2A56730", Offset = "0x2A54D30", VA = "0x182A56730")]
	public double2x3(double m00, double m01, double m02, double m10, double m11, double m12)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x2A56630", Offset = "0x2A54C30", VA = "0x182A56630")]
	public double2x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF6")]
	[Address(RVA = "0x2A56640", Offset = "0x2A54C40", VA = "0x182A56640")]
	public double2x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF7")]
	[Address(RVA = "0x2A56670", Offset = "0x2A54C70", VA = "0x182A56670")]
	public double2x3(bool2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF8")]
	[Address(RVA = "0x2A567E0", Offset = "0x2A54DE0", VA = "0x182A567E0")]
	public double2x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BF9")]
	[Address(RVA = "0x2A56540", Offset = "0x2A54B40", VA = "0x182A56540")]
	public double2x3(int2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BFA")]
	[Address(RVA = "0x2A56780", Offset = "0x2A54D80", VA = "0x182A56780")]
	public double2x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BFB")]
	[Address(RVA = "0x2A565B0", Offset = "0x2A54BB0", VA = "0x182A565B0")]
	public double2x3(uint2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x2A56700", Offset = "0x2A54D00", VA = "0x182A56700")]
	public double2x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x2A56760", Offset = "0x2A54D60", VA = "0x182A56760")]
	public double2x3(float2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x29D8740", Offset = "0x29D6D40", VA = "0x1829D8740")]
	public static implicit operator double2x3(double v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000BFF")]
	[Address(RVA = "0x29D8790", Offset = "0x29D6D90", VA = "0x1829D8790")]
	public static explicit operator double2x3(bool v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x29D88C0", Offset = "0x29D6EC0", VA = "0x1829D88C0")]
	public static explicit operator double2x3(bool2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x29D87C0", Offset = "0x29D6DC0", VA = "0x1829D87C0")]
	public static implicit operator double2x3(int v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x29D8980", Offset = "0x29D6F80", VA = "0x1829D8980")]
	public static implicit operator double2x3(int2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C03")]
	[Address(RVA = "0x29D86A0", Offset = "0x29D6CA0", VA = "0x1829D86A0")]
	public static implicit operator double2x3(uint v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x29D8800", Offset = "0x29D6E00", VA = "0x1829D8800")]
	public static implicit operator double2x3(uint2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C05")]
	[Address(RVA = "0x29D8700", Offset = "0x29D6D00", VA = "0x1829D8700")]
	public static implicit operator double2x3(float v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C06")]
	[Address(RVA = "0x29D8760", Offset = "0x29D6D60", VA = "0x1829D8760")]
	public static implicit operator double2x3(float2x3 v)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C07")]
	[Address(RVA = "0x2A57670", Offset = "0x2A55C70", VA = "0x182A57670")]
	public static double2x3 operator *(double2x3 lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C08")]
	[Address(RVA = "0x2A576E0", Offset = "0x2A55CE0", VA = "0x182A576E0")]
	public static double2x3 operator *(double2x3 lhs, double rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C09")]
	[Address(RVA = "0x2A57640", Offset = "0x2A55C40", VA = "0x182A57640")]
	public static double2x3 operator *(double lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C0A")]
	[Address(RVA = "0x2A56880", Offset = "0x2A54E80", VA = "0x182A56880")]
	public static double2x3 operator +(double2x3 lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C0B")]
	[Address(RVA = "0x2A56850", Offset = "0x2A54E50", VA = "0x182A56850")]
	public static double2x3 operator +(double2x3 lhs, double rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C0C")]
	[Address(RVA = "0x2A56820", Offset = "0x2A54E20", VA = "0x182A56820")]
	public static double2x3 operator +(double lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C0D")]
	[Address(RVA = "0x2A577A0", Offset = "0x2A55DA0", VA = "0x182A577A0")]
	public static double2x3 operator -(double2x3 lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x2A57710", Offset = "0x2A55D10", VA = "0x182A57710")]
	public static double2x3 operator -(double2x3 lhs, double rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x2A57740", Offset = "0x2A55D40", VA = "0x182A57740")]
	public static double2x3 operator -(double lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x2A569E0", Offset = "0x2A54FE0", VA = "0x182A569E0")]
	public static double2x3 operator /(double2x3 lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x2A56950", Offset = "0x2A54F50", VA = "0x182A56950")]
	public static double2x3 operator /(double2x3 lhs, double rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C12")]
	[Address(RVA = "0x2A56980", Offset = "0x2A54F80", VA = "0x182A56980")]
	public static double2x3 operator /(double lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x2A574F0", Offset = "0x2A55AF0", VA = "0x182A574F0")]
	public static double2x3 operator %(double2x3 lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C14")]
	[Address(RVA = "0x2A575A0", Offset = "0x2A55BA0", VA = "0x182A575A0")]
	public static double2x3 operator %(double2x3 lhs, double rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x2A57450", Offset = "0x2A55A50", VA = "0x182A57450")]
	public static double2x3 operator %(double lhs, double2x3 rhs)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x2A56F20", Offset = "0x2A55520", VA = "0x182A56F20")]
	public static double2x3 operator ++(double2x3 val)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x2A568F0", Offset = "0x2A54EF0", VA = "0x182A568F0")]
	public static double2x3 operator --(double2x3 val)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C18")]
	[Address(RVA = "0x2A57370", Offset = "0x2A55970", VA = "0x182A57370")]
	public static bool2x3 operator <(double2x3 lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C19")]
	[Address(RVA = "0x2A573F0", Offset = "0x2A559F0", VA = "0x182A573F0")]
	public static bool2x3 operator <(double2x3 lhs, double rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C1A")]
	[Address(RVA = "0x2A572F0", Offset = "0x2A558F0", VA = "0x182A572F0")]
	public static bool2x3 operator <(double lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C1B")]
	[Address(RVA = "0x2A57270", Offset = "0x2A55870", VA = "0x182A57270")]
	public static bool2x3 operator <=(double2x3 lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C1C")]
	[Address(RVA = "0x2A57190", Offset = "0x2A55790", VA = "0x182A57190")]
	public static bool2x3 operator <=(double2x3 lhs, double rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x2A571F0", Offset = "0x2A557F0", VA = "0x182A571F0")]
	public static bool2x3 operator <=(double lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C1E")]
	[Address(RVA = "0x2A56EA0", Offset = "0x2A554A0", VA = "0x182A56EA0")]
	public static bool2x3 operator >(double2x3 lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x2A56E20", Offset = "0x2A55420", VA = "0x182A56E20")]
	public static bool2x3 operator >(double2x3 lhs, double rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C20")]
	[Address(RVA = "0x2A56DC0", Offset = "0x2A553C0", VA = "0x182A56DC0")]
	public static bool2x3 operator >(double lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x2A56C60", Offset = "0x2A55260", VA = "0x182A56C60")]
	public static bool2x3 operator >=(double2x3 lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C22")]
	[Address(RVA = "0x2A56D40", Offset = "0x2A55340", VA = "0x182A56D40")]
	public static bool2x3 operator >=(double2x3 lhs, double rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C23")]
	[Address(RVA = "0x2A56CE0", Offset = "0x2A552E0", VA = "0x182A56CE0")]
	public static bool2x3 operator >=(double lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C24")]
	[Address(RVA = "0x2A57810", Offset = "0x2A55E10", VA = "0x182A57810")]
	public static double2x3 operator -(double2x3 val)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C25")]
	[Address(RVA = "0x2A57840", Offset = "0x2A55E40", VA = "0x182A57840")]
	public static double2x3 operator +(double2x3 val)
	{
		return default(double2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C26")]
	[Address(RVA = "0x2A56BA0", Offset = "0x2A551A0", VA = "0x182A56BA0")]
	public static bool2x3 operator ==(double2x3 lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C27")]
	[Address(RVA = "0x2A56A50", Offset = "0x2A55050", VA = "0x182A56A50")]
	public static bool2x3 operator ==(double2x3 lhs, double rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C28")]
	[Address(RVA = "0x2A56B00", Offset = "0x2A55100", VA = "0x182A56B00")]
	public static bool2x3 operator ==(double lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C29")]
	[Address(RVA = "0x2A57030", Offset = "0x2A55630", VA = "0x182A57030")]
	public static bool2x3 operator !=(double2x3 lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C2A")]
	[Address(RVA = "0x2A56F80", Offset = "0x2A55580", VA = "0x182A56F80")]
	public static bool2x3 operator !=(double2x3 lhs, double rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C2B")]
	[Address(RVA = "0x2A570F0", Offset = "0x2A556F0", VA = "0x182A570F0")]
	public static bool2x3 operator !=(double lhs, double2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C2D")]
	[Address(RVA = "0x2A55D80", Offset = "0x2A54380", VA = "0x182A55D80", Slot = "4")]
	public bool Equals(double2x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C2E")]
	[Address(RVA = "0x2A55DE0", Offset = "0x2A543E0", VA = "0x182A55DE0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C2F")]
	[Address(RVA = "0x2A55ED0", Offset = "0x2A544D0", VA = "0x182A55ED0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C30")]
	[Address(RVA = "0x2A56260", Offset = "0x2A54860", VA = "0x182A56260", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C31")]
	[Address(RVA = "0x2A55FB0", Offset = "0x2A545B0", VA = "0x182A55FB0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
