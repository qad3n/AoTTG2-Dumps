using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000045")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int2x4 : IEquatable<int2x4>, IFormattable
{
	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0x0")]
	public int2 c0;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x8")]
	public int2 c1;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x10")]
	public int2 c2;

	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0x18")]
	public int2 c3;

	[Token(Token = "0x40000FE")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int2x4 zero;

	[Token(Token = "0x170007CF")]
	public unsafe ref int2 this[int index]
	{
		[Token(Token = "0x600199D")]
		[Address(RVA = "0x47E0D00", Offset = "0x47E0D00", VA = "0x47E0D00")]
		get
		{
			return ref *(int2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001958")]
	[Address(RVA = "0x47DEE30", Offset = "0x47DEE30", VA = "0x47DEE30")]
	public int2x4(int2 c0, int2 c1, int2 c2, int2 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001959")]
	[Address(RVA = "0x47DEE40", Offset = "0x47DEE40", VA = "0x47DEE40")]
	public int2x4(int m00, int m01, int m02, int m03, int m10, int m11, int m12, int m13)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600195A")]
	[Address(RVA = "0x47DEE90", Offset = "0x47DEE90", VA = "0x47DEE90")]
	public int2x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600195B")]
	[Address(RVA = "0x47DEEB0", Offset = "0x47DEEB0", VA = "0x47DEEB0")]
	public int2x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600195C")]
	[Address(RVA = "0x47DEEE0", Offset = "0x47DEEE0", VA = "0x47DEEE0")]
	public int2x4(bool2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600195D")]
	[Address(RVA = "0x47DEF50", Offset = "0x47DEF50", VA = "0x47DEF50")]
	public int2x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600195E")]
	[Address(RVA = "0x47DEF70", Offset = "0x47DEF70", VA = "0x47DEF70")]
	public int2x4(uint2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600195F")]
	[Address(RVA = "0x47DEF90", Offset = "0x47DEF90", VA = "0x47DEF90")]
	public int2x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001960")]
	[Address(RVA = "0x47DEFB0", Offset = "0x47DEFB0", VA = "0x47DEFB0")]
	public int2x4(float2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001961")]
	[Address(RVA = "0x47DF030", Offset = "0x47DF030", VA = "0x47DF030")]
	public int2x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001962")]
	[Address(RVA = "0x47DF050", Offset = "0x47DF050", VA = "0x47DF050")]
	public int2x4(double2x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001963")]
	[Address(RVA = "0x47DF0B0", Offset = "0x47DF0B0", VA = "0x47DF0B0")]
	public static implicit operator int2x4(int v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001964")]
	[Address(RVA = "0x47DF0D0", Offset = "0x47DF0D0", VA = "0x47DF0D0")]
	public static explicit operator int2x4(bool v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001965")]
	[Address(RVA = "0x47DF100", Offset = "0x47DF100", VA = "0x47DF100")]
	public static explicit operator int2x4(bool2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001966")]
	[Address(RVA = "0x47DF180", Offset = "0x47DF180", VA = "0x47DF180")]
	public static explicit operator int2x4(uint v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001967")]
	[Address(RVA = "0x47DF1A0", Offset = "0x47DF1A0", VA = "0x47DF1A0")]
	public static explicit operator int2x4(uint2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001968")]
	[Address(RVA = "0x47DF1C0", Offset = "0x47DF1C0", VA = "0x47DF1C0")]
	public static explicit operator int2x4(float v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001969")]
	[Address(RVA = "0x47DF1F0", Offset = "0x47DF1F0", VA = "0x47DF1F0")]
	public static explicit operator int2x4(float2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600196A")]
	[Address(RVA = "0x47DF270", Offset = "0x47DF270", VA = "0x47DF270")]
	public static explicit operator int2x4(double v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600196B")]
	[Address(RVA = "0x47DF2A0", Offset = "0x47DF2A0", VA = "0x47DF2A0")]
	public static explicit operator int2x4(double2x4 v)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600196C")]
	[Address(RVA = "0x47DF310", Offset = "0x47DF310", VA = "0x47DF310")]
	public static int2x4 operator *(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600196D")]
	[Address(RVA = "0x47DF3B0", Offset = "0x47DF3B0", VA = "0x47DF3B0")]
	public static int2x4 operator *(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600196E")]
	[Address(RVA = "0x47DF430", Offset = "0x47DF430", VA = "0x47DF430")]
	public static int2x4 operator *(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600196F")]
	[Address(RVA = "0x47DF4B0", Offset = "0x47DF4B0", VA = "0x47DF4B0")]
	public static int2x4 operator +(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001970")]
	[Address(RVA = "0x47DF520", Offset = "0x47DF520", VA = "0x47DF520")]
	public static int2x4 operator +(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001971")]
	[Address(RVA = "0x47DF590", Offset = "0x47DF590", VA = "0x47DF590")]
	public static int2x4 operator +(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001972")]
	[Address(RVA = "0x47DF600", Offset = "0x47DF600", VA = "0x47DF600")]
	public static int2x4 operator -(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001973")]
	[Address(RVA = "0x47DF670", Offset = "0x47DF670", VA = "0x47DF670")]
	public static int2x4 operator -(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001974")]
	[Address(RVA = "0x47DF6E0", Offset = "0x47DF6E0", VA = "0x47DF6E0")]
	public static int2x4 operator -(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001975")]
	[Address(RVA = "0x47DF750", Offset = "0x47DF750", VA = "0x47DF750")]
	public static int2x4 operator /(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001976")]
	[Address(RVA = "0x47DF810", Offset = "0x47DF810", VA = "0x47DF810")]
	public static int2x4 operator /(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001977")]
	[Address(RVA = "0x47DF8A0", Offset = "0x47DF8A0", VA = "0x47DF8A0")]
	public static int2x4 operator /(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001978")]
	[Address(RVA = "0x47DF930", Offset = "0x47DF930", VA = "0x47DF930")]
	public static int2x4 operator %(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001979")]
	[Address(RVA = "0x47DF9F0", Offset = "0x47DF9F0", VA = "0x47DF9F0")]
	public static int2x4 operator %(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600197A")]
	[Address(RVA = "0x47DFA80", Offset = "0x47DFA80", VA = "0x47DFA80")]
	public static int2x4 operator %(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600197B")]
	[Address(RVA = "0x47DFB10", Offset = "0x47DFB10", VA = "0x47DFB10")]
	public static int2x4 operator ++(int2x4 val)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600197C")]
	[Address(RVA = "0x47DFB80", Offset = "0x47DFB80", VA = "0x47DFB80")]
	public static int2x4 operator --(int2x4 val)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600197D")]
	[Address(RVA = "0x47DFBF0", Offset = "0x47DFBF0", VA = "0x47DFBF0")]
	public static bool2x4 operator <(int2x4 lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600197E")]
	[Address(RVA = "0x47DFCC0", Offset = "0x47DFCC0", VA = "0x47DFCC0")]
	public static bool2x4 operator <(int2x4 lhs, int rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600197F")]
	[Address(RVA = "0x47DFD60", Offset = "0x47DFD60", VA = "0x47DFD60")]
	public static bool2x4 operator <(int lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001980")]
	[Address(RVA = "0x47DFE00", Offset = "0x47DFE00", VA = "0x47DFE00")]
	public static bool2x4 operator <=(int2x4 lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001981")]
	[Address(RVA = "0x47DFED0", Offset = "0x47DFED0", VA = "0x47DFED0")]
	public static bool2x4 operator <=(int2x4 lhs, int rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001982")]
	[Address(RVA = "0x47DFF70", Offset = "0x47DFF70", VA = "0x47DFF70")]
	public static bool2x4 operator <=(int lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001983")]
	[Address(RVA = "0x47E0010", Offset = "0x47E0010", VA = "0x47E0010")]
	public static bool2x4 operator >(int2x4 lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001984")]
	[Address(RVA = "0x47E00E0", Offset = "0x47E00E0", VA = "0x47E00E0")]
	public static bool2x4 operator >(int2x4 lhs, int rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001985")]
	[Address(RVA = "0x47E0180", Offset = "0x47E0180", VA = "0x47E0180")]
	public static bool2x4 operator >(int lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001986")]
	[Address(RVA = "0x47E0220", Offset = "0x47E0220", VA = "0x47E0220")]
	public static bool2x4 operator >=(int2x4 lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001987")]
	[Address(RVA = "0x47E02F0", Offset = "0x47E02F0", VA = "0x47E02F0")]
	public static bool2x4 operator >=(int2x4 lhs, int rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001988")]
	[Address(RVA = "0x47E0390", Offset = "0x47E0390", VA = "0x47E0390")]
	public static bool2x4 operator >=(int lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001989")]
	[Address(RVA = "0x47E0430", Offset = "0x47E0430", VA = "0x47E0430")]
	public static int2x4 operator -(int2x4 val)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600198A")]
	[Address(RVA = "0x47E0490", Offset = "0x47E0490", VA = "0x47E0490")]
	public static int2x4 operator +(int2x4 val)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600198B")]
	[Address(RVA = "0x47E04B0", Offset = "0x47E04B0", VA = "0x47E04B0")]
	public static int2x4 operator <<(int2x4 x, int n)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600198C")]
	[Address(RVA = "0x47E0530", Offset = "0x47E0530", VA = "0x47E0530")]
	public static int2x4 operator >>(int2x4 x, int n)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600198D")]
	[Address(RVA = "0x47E05B0", Offset = "0x47E05B0", VA = "0x47E05B0")]
	public static bool2x4 operator ==(int2x4 lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600198E")]
	[Address(RVA = "0x47E0680", Offset = "0x47E0680", VA = "0x47E0680")]
	public static bool2x4 operator ==(int2x4 lhs, int rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600198F")]
	[Address(RVA = "0x47E0720", Offset = "0x47E0720", VA = "0x47E0720")]
	public static bool2x4 operator ==(int lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001990")]
	[Address(RVA = "0x47E07C0", Offset = "0x47E07C0", VA = "0x47E07C0")]
	public static bool2x4 operator !=(int2x4 lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001991")]
	[Address(RVA = "0x47E0890", Offset = "0x47E0890", VA = "0x47E0890")]
	public static bool2x4 operator !=(int2x4 lhs, int rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001992")]
	[Address(RVA = "0x47E0930", Offset = "0x47E0930", VA = "0x47E0930")]
	public static bool2x4 operator !=(int lhs, int2x4 rhs)
	{
		return default(bool2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001993")]
	[Address(RVA = "0x47E09D0", Offset = "0x47E09D0", VA = "0x47E09D0")]
	public static int2x4 operator ~(int2x4 val)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001994")]
	[Address(RVA = "0x47E0A00", Offset = "0x47E0A00", VA = "0x47E0A00")]
	public static int2x4 operator &(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001995")]
	[Address(RVA = "0x47E0A20", Offset = "0x47E0A20", VA = "0x47E0A20")]
	public static int2x4 operator &(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001996")]
	[Address(RVA = "0x47E0A90", Offset = "0x47E0A90", VA = "0x47E0A90")]
	public static int2x4 operator &(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001997")]
	[Address(RVA = "0x47E0B00", Offset = "0x47E0B00", VA = "0x47E0B00")]
	public static int2x4 operator |(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001998")]
	[Address(RVA = "0x47E0B20", Offset = "0x47E0B20", VA = "0x47E0B20")]
	public static int2x4 operator |(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001999")]
	[Address(RVA = "0x47E0B90", Offset = "0x47E0B90", VA = "0x47E0B90")]
	public static int2x4 operator |(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600199A")]
	[Address(RVA = "0x47E0C00", Offset = "0x47E0C00", VA = "0x47E0C00")]
	public static int2x4 operator ^(int2x4 lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600199B")]
	[Address(RVA = "0x47E0C20", Offset = "0x47E0C20", VA = "0x47E0C20")]
	public static int2x4 operator ^(int2x4 lhs, int rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600199C")]
	[Address(RVA = "0x47E0C90", Offset = "0x47E0C90", VA = "0x47E0C90")]
	public static int2x4 operator ^(int lhs, int2x4 rhs)
	{
		return default(int2x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600199E")]
	[Address(RVA = "0x47E0D10", Offset = "0x47E0D10", VA = "0x47E0D10", Slot = "4")]
	public bool Equals(int2x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x600199F")]
	[Address(RVA = "0x47E0D70", Offset = "0x47E0D70", VA = "0x47E0D70", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019A0")]
	[Address(RVA = "0x47E0E20", Offset = "0x47E0E20", VA = "0x47E0E20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019A1")]
	[Address(RVA = "0x47E0EE0", Offset = "0x47E0EE0", VA = "0x47E0EE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60019A2")]
	[Address(RVA = "0x47E1200", Offset = "0x47E1200", VA = "0x47E1200", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
