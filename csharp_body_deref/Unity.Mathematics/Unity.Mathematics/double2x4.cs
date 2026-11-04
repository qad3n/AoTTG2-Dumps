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
[Token(Token = "0x200001E")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double2x4 : IEquatable<double2x4>, IFormattable
{
	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0x0")]
	public double2 c0;

	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x10")]
	public double2 c1;

	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0x20")]
	public double2 c2;

	[Token(Token = "0x4000075")]
	[FieldOffset(Offset = "0x30")]
	public double2 c3;

	[Token(Token = "0x4000076")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double2x4 zero;

	[Token(Token = "0x1700020D")]
	public unsafe ref double2 this[int index]
	{
		[Token(Token = "0x6000C6B")]
		[Address(RVA = "0x841B00", Offset = "0x840100", VA = "0x180841B00")]
		get
		{
			return ref *(double2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C32")]
	[Address(RVA = "0x2A401B0", Offset = "0x2A3E7B0", VA = "0x182A401B0")]
	public double2x4(double2 c0, double2 c1, double2 c2, double2 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x2A582F0", Offset = "0x2A568F0", VA = "0x182A582F0")]
	public double2x4(double m00, double m01, double m02, double m03, double m10, double m11, double m12, double m13)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x2A58340", Offset = "0x2A56940", VA = "0x182A58340")]
	public double2x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x2A582C0", Offset = "0x2A568C0", VA = "0x182A582C0")]
	public double2x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x29C6A30", Offset = "0x29C5030", VA = "0x1829C6A30")]
	public double2x4(bool2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x2A58250", Offset = "0x2A56850", VA = "0x182A58250")]
	public double2x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x2A583E0", Offset = "0x2A569E0", VA = "0x182A583E0")]
	public double2x4(int2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C39")]
	[Address(RVA = "0x2A58360", Offset = "0x2A56960", VA = "0x182A58360")]
	public double2x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x2A581B0", Offset = "0x2A567B0", VA = "0x182A581B0")]
	public double2x4(uint2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C3B")]
	[Address(RVA = "0x2A58170", Offset = "0x2A56770", VA = "0x182A58170")]
	public double2x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x2A582A0", Offset = "0x2A568A0", VA = "0x182A582A0")]
	public double2x4(float2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x29D8DA0", Offset = "0x29D73A0", VA = "0x1829D8DA0")]
	public static implicit operator double2x4(double v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x29D8B00", Offset = "0x29D7100", VA = "0x1829D8B00")]
	public static explicit operator double2x4(bool v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x2A58A30", Offset = "0x2A57030", VA = "0x182A58A30")]
	public static explicit operator double2x4(bool2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x29D8ED0", Offset = "0x29D74D0", VA = "0x1829D8ED0")]
	public static implicit operator double2x4(int v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x29D8CD0", Offset = "0x29D72D0", VA = "0x1829D8CD0")]
	public static implicit operator double2x4(int2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x29D8E10", Offset = "0x29D7410", VA = "0x1829D8E10")]
	public static implicit operator double2x4(uint v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x29D8B30", Offset = "0x29D7130", VA = "0x1829D8B30")]
	public static implicit operator double2x4(uint2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x29D8DC0", Offset = "0x29D73C0", VA = "0x1829D8DC0")]
	public static implicit operator double2x4(float v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x29D8E90", Offset = "0x29D7490", VA = "0x1829D8E90")]
	public static implicit operator double2x4(float2x4 v)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x2A59860", Offset = "0x2A57E60", VA = "0x182A59860")]
	public static double2x4 operator *(double2x4 lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x2A597D0", Offset = "0x2A57DD0", VA = "0x182A597D0")]
	public static double2x4 operator *(double2x4 lhs, double rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x2A59810", Offset = "0x2A57E10", VA = "0x182A59810")]
	public static double2x4 operator *(double lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x2A58500", Offset = "0x2A56B00", VA = "0x182A58500")]
	public static double2x4 operator +(double2x4 lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x2A584C0", Offset = "0x2A56AC0", VA = "0x182A584C0")]
	public static double2x4 operator +(double2x4 lhs, double rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x2A58470", Offset = "0x2A56A70", VA = "0x182A58470")]
	public static double2x4 operator +(double lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x2A59960", Offset = "0x2A57F60", VA = "0x182A59960")]
	public static double2x4 operator -(double2x4 lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x2A599F0", Offset = "0x2A57FF0", VA = "0x182A599F0")]
	public static double2x4 operator -(double2x4 lhs, double rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x2A598F0", Offset = "0x2A57EF0", VA = "0x182A598F0")]
	public static double2x4 operator -(double lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x2A58670", Offset = "0x2A56C70", VA = "0x182A58670")]
	public static double2x4 operator /(double2x4 lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x2A58630", Offset = "0x2A56C30", VA = "0x182A58630")]
	public static double2x4 operator /(double2x4 lhs, double rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x2A58700", Offset = "0x2A56D00", VA = "0x182A58700")]
	public static double2x4 operator /(double lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C52")]
	[Address(RVA = "0x2A59640", Offset = "0x2A57C40", VA = "0x182A59640")]
	public static double2x4 operator %(double2x4 lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C53")]
	[Address(RVA = "0x2A59710", Offset = "0x2A57D10", VA = "0x182A59710")]
	public static double2x4 operator %(double2x4 lhs, double rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x2A59580", Offset = "0x2A57B80", VA = "0x182A59580")]
	public static double2x4 operator %(double lhs, double2x4 rhs)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C55")]
	[Address(RVA = "0x2A58E40", Offset = "0x2A57440", VA = "0x182A58E40")]
	public static double2x4 operator ++(double2x4 val)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C56")]
	[Address(RVA = "0x2A58590", Offset = "0x2A56B90", VA = "0x182A58590")]
	public static double2x4 operator --(double2x4 val)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C57")]
	[Address(RVA = "0x2A59420", Offset = "0x2A57A20", VA = "0x182A59420")]
	public static bool2x4 operator <(double2x4 lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x2A59390", Offset = "0x2A57990", VA = "0x182A59390")]
	public static bool2x4 operator <(double2x4 lhs, double rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x2A594D0", Offset = "0x2A57AD0", VA = "0x182A594D0")]
	public static bool2x4 operator <(double lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C5A")]
	[Address(RVA = "0x2A592E0", Offset = "0x2A578E0", VA = "0x182A592E0")]
	public static bool2x4 operator <=(double2x4 lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C5B")]
	[Address(RVA = "0x2A59250", Offset = "0x2A57850", VA = "0x182A59250")]
	public static bool2x4 operator <=(double2x4 lhs, double rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C5C")]
	[Address(RVA = "0x2A591A0", Offset = "0x2A577A0", VA = "0x182A591A0")]
	public static bool2x4 operator <=(double lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C5D")]
	[Address(RVA = "0x2A58CE0", Offset = "0x2A572E0", VA = "0x182A58CE0")]
	public static bool2x4 operator >(double2x4 lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C5E")]
	[Address(RVA = "0x2A58D90", Offset = "0x2A57390", VA = "0x182A58D90")]
	public static bool2x4 operator >(double2x4 lhs, double rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C5F")]
	[Address(RVA = "0x2A58C50", Offset = "0x2A57250", VA = "0x182A58C50")]
	public static bool2x4 operator >(double lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C60")]
	[Address(RVA = "0x2A58BA0", Offset = "0x2A571A0", VA = "0x182A58BA0")]
	public static bool2x4 operator >=(double2x4 lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C61")]
	[Address(RVA = "0x2A58AF0", Offset = "0x2A570F0", VA = "0x182A58AF0")]
	public static bool2x4 operator >=(double2x4 lhs, double rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C62")]
	[Address(RVA = "0x2A58A60", Offset = "0x2A57060", VA = "0x182A58A60")]
	public static bool2x4 operator >=(double lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x2A59A30", Offset = "0x2A58030", VA = "0x182A59A30")]
	public static double2x4 operator -(double2x4 val)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C64")]
	[Address(RVA = "0x2A59A70", Offset = "0x2A58070", VA = "0x182A59A70")]
	public static double2x4 operator +(double2x4 val)
	{
		return default(double2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C65")]
	[Address(RVA = "0x2A58840", Offset = "0x2A56E40", VA = "0x182A58840")]
	public static bool2x4 operator ==(double2x4 lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x2A58940", Offset = "0x2A56F40", VA = "0x182A58940")]
	public static bool2x4 operator ==(double2x4 lhs, double rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C67")]
	[Address(RVA = "0x2A58770", Offset = "0x2A56D70", VA = "0x182A58770")]
	public static bool2x4 operator ==(double lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C68")]
	[Address(RVA = "0x2A590A0", Offset = "0x2A576A0", VA = "0x182A590A0")]
	public static bool2x4 operator !=(double2x4 lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C69")]
	[Address(RVA = "0x2A58FB0", Offset = "0x2A575B0", VA = "0x182A58FB0")]
	public static bool2x4 operator !=(double2x4 lhs, double rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C6A")]
	[Address(RVA = "0x2A58EE0", Offset = "0x2A574E0", VA = "0x182A58EE0")]
	public static bool2x4 operator !=(double lhs, double2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C6C")]
	[Address(RVA = "0x2A57880", Offset = "0x2A55E80", VA = "0x182A57880", Slot = "4")]
	public bool Equals(double2x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C6D")]
	[Address(RVA = "0x2A57900", Offset = "0x2A55F00", VA = "0x182A57900", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C6E")]
	[Address(RVA = "0x2A57A10", Offset = "0x2A56010", VA = "0x182A57A10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C6F")]
	[Address(RVA = "0x2A57DB0", Offset = "0x2A563B0", VA = "0x182A57DB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C70")]
	[Address(RVA = "0x2A57A50", Offset = "0x2A56050", VA = "0x182A57A50", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
