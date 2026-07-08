using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000044")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int2x3 : IEquatable<int2x3>, IFormattable
{
	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x0")]
	public int2 c0;

	[Token(Token = "0x40000F7")]
	[FieldOffset(Offset = "0x8")]
	public int2 c1;

	[Token(Token = "0x40000F8")]
	[FieldOffset(Offset = "0x10")]
	public int2 c2;

	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int2x3 zero;

	[Token(Token = "0x170007CE")]
	public unsafe ref int2 this[int index]
	{
		[Token(Token = "0x6001952")]
		[Address(RVA = "0x47DD7B0", Offset = "0x47DD7B0", VA = "0x47DD7B0")]
		get
		{
			return ref *(int2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600190D")]
	[Address(RVA = "0x47DBEA0", Offset = "0x47DBEA0", VA = "0x47DBEA0")]
	public int2x3(int2 c0, int2 c1, int2 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600190E")]
	[Address(RVA = "0x47DBEB0", Offset = "0x47DBEB0", VA = "0x47DBEB0")]
	public int2x3(int m00, int m01, int m02, int m10, int m11, int m12)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600190F")]
	[Address(RVA = "0x47DBEE0", Offset = "0x47DBEE0", VA = "0x47DBEE0")]
	public int2x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001910")]
	[Address(RVA = "0x47DBF00", Offset = "0x47DBF00", VA = "0x47DBF00")]
	public int2x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001911")]
	[Address(RVA = "0x47DBF20", Offset = "0x47DBF20", VA = "0x47DBF20")]
	public int2x3(bool2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001912")]
	[Address(RVA = "0x47DBFA0", Offset = "0x47DBFA0", VA = "0x47DBFA0")]
	public int2x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001913")]
	[Address(RVA = "0x47DBFC0", Offset = "0x47DBFC0", VA = "0x47DBFC0")]
	public int2x3(uint2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001914")]
	[Address(RVA = "0x47DBFE0", Offset = "0x47DBFE0", VA = "0x47DBFE0")]
	public int2x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001915")]
	[Address(RVA = "0x47DC000", Offset = "0x47DC000", VA = "0x47DC000")]
	public int2x3(float2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001916")]
	[Address(RVA = "0x47DC060", Offset = "0x47DC060", VA = "0x47DC060")]
	public int2x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001917")]
	[Address(RVA = "0x47DC080", Offset = "0x47DC080", VA = "0x47DC080")]
	public int2x3(double2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001918")]
	[Address(RVA = "0x47DC0D0", Offset = "0x47DC0D0", VA = "0x47DC0D0")]
	public static implicit operator int2x3(int v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001919")]
	[Address(RVA = "0x47DC0F0", Offset = "0x47DC0F0", VA = "0x47DC0F0")]
	public static explicit operator int2x3(bool v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600191A")]
	[Address(RVA = "0x47DC120", Offset = "0x47DC120", VA = "0x47DC120")]
	public static explicit operator int2x3(bool2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600191B")]
	[Address(RVA = "0x47DC1A0", Offset = "0x47DC1A0", VA = "0x47DC1A0")]
	public static explicit operator int2x3(uint v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600191C")]
	[Address(RVA = "0x47DC1C0", Offset = "0x47DC1C0", VA = "0x47DC1C0")]
	public static explicit operator int2x3(uint2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600191D")]
	[Address(RVA = "0x47DC1E0", Offset = "0x47DC1E0", VA = "0x47DC1E0")]
	public static explicit operator int2x3(float v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600191E")]
	[Address(RVA = "0x47DC200", Offset = "0x47DC200", VA = "0x47DC200")]
	public static explicit operator int2x3(float2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600191F")]
	[Address(RVA = "0x47DC260", Offset = "0x47DC260", VA = "0x47DC260")]
	public static explicit operator int2x3(double v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001920")]
	[Address(RVA = "0x47DC280", Offset = "0x47DC280", VA = "0x47DC280")]
	public static explicit operator int2x3(double2x3 v)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001921")]
	[Address(RVA = "0x47DC2D0", Offset = "0x47DC2D0", VA = "0x47DC2D0")]
	public static int2x3 operator *(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001922")]
	[Address(RVA = "0x47DC350", Offset = "0x47DC350", VA = "0x47DC350")]
	public static int2x3 operator *(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001923")]
	[Address(RVA = "0x47DC3B0", Offset = "0x47DC3B0", VA = "0x47DC3B0")]
	public static int2x3 operator *(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001924")]
	[Address(RVA = "0x47DC410", Offset = "0x47DC410", VA = "0x47DC410")]
	public static int2x3 operator +(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001925")]
	[Address(RVA = "0x47DC470", Offset = "0x47DC470", VA = "0x47DC470")]
	public static int2x3 operator +(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001926")]
	[Address(RVA = "0x47DC4D0", Offset = "0x47DC4D0", VA = "0x47DC4D0")]
	public static int2x3 operator +(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001927")]
	[Address(RVA = "0x47DC530", Offset = "0x47DC530", VA = "0x47DC530")]
	public static int2x3 operator -(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001928")]
	[Address(RVA = "0x47DC5A0", Offset = "0x47DC5A0", VA = "0x47DC5A0")]
	public static int2x3 operator -(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001929")]
	[Address(RVA = "0x47DC600", Offset = "0x47DC600", VA = "0x47DC600")]
	public static int2x3 operator -(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600192A")]
	[Address(RVA = "0x47DC660", Offset = "0x47DC660", VA = "0x47DC660")]
	public static int2x3 operator /(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600192B")]
	[Address(RVA = "0x47DC6F0", Offset = "0x47DC6F0", VA = "0x47DC6F0")]
	public static int2x3 operator /(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600192C")]
	[Address(RVA = "0x47DC760", Offset = "0x47DC760", VA = "0x47DC760")]
	public static int2x3 operator /(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600192D")]
	[Address(RVA = "0x47DC7D0", Offset = "0x47DC7D0", VA = "0x47DC7D0")]
	public static int2x3 operator %(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600192E")]
	[Address(RVA = "0x47DC860", Offset = "0x47DC860", VA = "0x47DC860")]
	public static int2x3 operator %(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600192F")]
	[Address(RVA = "0x47DC8D0", Offset = "0x47DC8D0", VA = "0x47DC8D0")]
	public static int2x3 operator %(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001930")]
	[Address(RVA = "0x47DC940", Offset = "0x47DC940", VA = "0x47DC940")]
	public static int2x3 operator ++(int2x3 val)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001931")]
	[Address(RVA = "0x47DC9A0", Offset = "0x47DC9A0", VA = "0x47DC9A0")]
	public static int2x3 operator --(int2x3 val)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001932")]
	[Address(RVA = "0x47DCA00", Offset = "0x47DCA00", VA = "0x47DCA00")]
	public static bool2x3 operator <(int2x3 lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001933")]
	[Address(RVA = "0x47DCAA0", Offset = "0x47DCAA0", VA = "0x47DCAA0")]
	public static bool2x3 operator <(int2x3 lhs, int rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001934")]
	[Address(RVA = "0x47DCB20", Offset = "0x47DCB20", VA = "0x47DCB20")]
	public static bool2x3 operator <(int lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001935")]
	[Address(RVA = "0x47DCBA0", Offset = "0x47DCBA0", VA = "0x47DCBA0")]
	public static bool2x3 operator <=(int2x3 lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001936")]
	[Address(RVA = "0x47DCC40", Offset = "0x47DCC40", VA = "0x47DCC40")]
	public static bool2x3 operator <=(int2x3 lhs, int rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001937")]
	[Address(RVA = "0x47DCCC0", Offset = "0x47DCCC0", VA = "0x47DCCC0")]
	public static bool2x3 operator <=(int lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001938")]
	[Address(RVA = "0x47DCD40", Offset = "0x47DCD40", VA = "0x47DCD40")]
	public static bool2x3 operator >(int2x3 lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001939")]
	[Address(RVA = "0x47DCDE0", Offset = "0x47DCDE0", VA = "0x47DCDE0")]
	public static bool2x3 operator >(int2x3 lhs, int rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600193A")]
	[Address(RVA = "0x47DCE60", Offset = "0x47DCE60", VA = "0x47DCE60")]
	public static bool2x3 operator >(int lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600193B")]
	[Address(RVA = "0x47DCEE0", Offset = "0x47DCEE0", VA = "0x47DCEE0")]
	public static bool2x3 operator >=(int2x3 lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600193C")]
	[Address(RVA = "0x47DCF80", Offset = "0x47DCF80", VA = "0x47DCF80")]
	public static bool2x3 operator >=(int2x3 lhs, int rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600193D")]
	[Address(RVA = "0x47DD000", Offset = "0x47DD000", VA = "0x47DD000")]
	public static bool2x3 operator >=(int lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600193E")]
	[Address(RVA = "0x47DD080", Offset = "0x47DD080", VA = "0x47DD080")]
	public static int2x3 operator -(int2x3 val)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600193F")]
	[Address(RVA = "0x47DD0D0", Offset = "0x47DD0D0", VA = "0x47DD0D0")]
	public static int2x3 operator +(int2x3 val)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001940")]
	[Address(RVA = "0x47DD0F0", Offset = "0x47DD0F0", VA = "0x47DD0F0")]
	public static int2x3 operator <<(int2x3 x, int n)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001941")]
	[Address(RVA = "0x47DD150", Offset = "0x47DD150", VA = "0x47DD150")]
	public static int2x3 operator >>(int2x3 x, int n)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001942")]
	[Address(RVA = "0x47DD1B0", Offset = "0x47DD1B0", VA = "0x47DD1B0")]
	public static bool2x3 operator ==(int2x3 lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001943")]
	[Address(RVA = "0x47DD250", Offset = "0x47DD250", VA = "0x47DD250")]
	public static bool2x3 operator ==(int2x3 lhs, int rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001944")]
	[Address(RVA = "0x47DD2D0", Offset = "0x47DD2D0", VA = "0x47DD2D0")]
	public static bool2x3 operator ==(int lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001945")]
	[Address(RVA = "0x47DD350", Offset = "0x47DD350", VA = "0x47DD350")]
	public static bool2x3 operator !=(int2x3 lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001946")]
	[Address(RVA = "0x47DD3F0", Offset = "0x47DD3F0", VA = "0x47DD3F0")]
	public static bool2x3 operator !=(int2x3 lhs, int rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001947")]
	[Address(RVA = "0x47DD470", Offset = "0x47DD470", VA = "0x47DD470")]
	public static bool2x3 operator !=(int lhs, int2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001948")]
	[Address(RVA = "0x47DD4F0", Offset = "0x47DD4F0", VA = "0x47DD4F0")]
	public static int2x3 operator ~(int2x3 val)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001949")]
	[Address(RVA = "0x47DD510", Offset = "0x47DD510", VA = "0x47DD510")]
	public static int2x3 operator &(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600194A")]
	[Address(RVA = "0x47DD530", Offset = "0x47DD530", VA = "0x47DD530")]
	public static int2x3 operator &(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600194B")]
	[Address(RVA = "0x47DD590", Offset = "0x47DD590", VA = "0x47DD590")]
	public static int2x3 operator &(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600194C")]
	[Address(RVA = "0x47DD5F0", Offset = "0x47DD5F0", VA = "0x47DD5F0")]
	public static int2x3 operator |(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600194D")]
	[Address(RVA = "0x47DD610", Offset = "0x47DD610", VA = "0x47DD610")]
	public static int2x3 operator |(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600194E")]
	[Address(RVA = "0x47DD670", Offset = "0x47DD670", VA = "0x47DD670")]
	public static int2x3 operator |(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600194F")]
	[Address(RVA = "0x47DD6D0", Offset = "0x47DD6D0", VA = "0x47DD6D0")]
	public static int2x3 operator ^(int2x3 lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001950")]
	[Address(RVA = "0x47DD6F0", Offset = "0x47DD6F0", VA = "0x47DD6F0")]
	public static int2x3 operator ^(int2x3 lhs, int rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001951")]
	[Address(RVA = "0x47DD750", Offset = "0x47DD750", VA = "0x47DD750")]
	public static int2x3 operator ^(int lhs, int2x3 rhs)
	{
		return default(int2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001953")]
	[Address(RVA = "0x47DD7C0", Offset = "0x47DD7C0", VA = "0x47DD7C0", Slot = "4")]
	public bool Equals(int2x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001954")]
	[Address(RVA = "0x47DD800", Offset = "0x47DD800", VA = "0x47DD800", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001955")]
	[Address(RVA = "0x47DD890", Offset = "0x47DD890", VA = "0x47DD890", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001956")]
	[Address(RVA = "0x47DD910", Offset = "0x47DD910", VA = "0x47DD910", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001957")]
	[Address(RVA = "0x47DDB80", Offset = "0x47DDB80", VA = "0x47DDB80", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
