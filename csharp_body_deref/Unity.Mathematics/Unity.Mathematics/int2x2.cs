// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.int2x2
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
[Token(Token = "0x2000041")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int2x2 : IEquatable<int2x2>, IFormattable
{
	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x0")]
	public int2 c0;

	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0x8")]
	public int2 c1;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int2x2 identity;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x10")]
	public static readonly int2x2 zero;

	[Token(Token = "0x170007CD")]
	public unsafe ref int2 this[int index]
	{
		[Token(Token = "0x6001951")]
		[Address(RVA = "0x841B10", Offset = "0x840110", VA = "0x180841B10")]
		get
		{
			return ref *(int2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600190C")]
	[Address(RVA = "0xB546F0", Offset = "0xB52CF0", VA = "0x180B546F0")]
	public int2x2(int2 c0, int2 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600190D")]
	[Address(RVA = "0x2A9A820", Offset = "0x2A98E20", VA = "0x182A9A820")]
	public int2x2(int m00, int m01, int m10, int m11)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600190E")]
	[Address(RVA = "0x2A9A6D0", Offset = "0x2A98CD0", VA = "0x182A9A6D0")]
	public int2x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600190F")]
	[Address(RVA = "0x2A9A7C0", Offset = "0x2A98DC0", VA = "0x182A9A7C0")]
	public int2x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001910")]
	[Address(RVA = "0x2A9A700", Offset = "0x2A98D00", VA = "0x182A9A700")]
	public int2x2(bool2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001911")]
	[Address(RVA = "0x2A9A6D0", Offset = "0x2A98CD0", VA = "0x182A9A6D0")]
	public int2x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001912")]
	[Address(RVA = "0x2A9A850", Offset = "0x2A98E50", VA = "0x182A9A850")]
	public int2x2(uint2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001913")]
	[Address(RVA = "0x2A9A650", Offset = "0x2A98C50", VA = "0x182A9A650")]
	public int2x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001914")]
	[Address(RVA = "0x2A9A790", Offset = "0x2A98D90", VA = "0x182A9A790")]
	public int2x2(float2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001915")]
	[Address(RVA = "0x2A9A750", Offset = "0x2A98D50", VA = "0x182A9A750")]
	public int2x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001916")]
	[Address(RVA = "0x2A9A690", Offset = "0x2A98C90", VA = "0x182A9A690")]
	public int2x2(double2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001917")]
	[Address(RVA = "0x29EA330", Offset = "0x29E8930", VA = "0x1829EA330")]
	public static implicit operator int2x2(int v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001918")]
	[Address(RVA = "0x29EA4B0", Offset = "0x29E8AB0", VA = "0x1829EA4B0")]
	public static explicit operator int2x2(bool v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001919")]
	[Address(RVA = "0x29EA290", Offset = "0x29E8890", VA = "0x1829EA290")]
	public static explicit operator int2x2(bool2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600191A")]
	[Address(RVA = "0x29EA330", Offset = "0x29E8930", VA = "0x1829EA330")]
	public static explicit operator int2x2(uint v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600191B")]
	[Address(RVA = "0x29EA420", Offset = "0x29E8A20", VA = "0x1829EA420")]
	public static explicit operator int2x2(uint2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600191C")]
	[Address(RVA = "0x29EA3E0", Offset = "0x29E89E0", VA = "0x1829EA3E0")]
	public static explicit operator int2x2(float v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600191D")]
	[Address(RVA = "0x29EA2F0", Offset = "0x29E88F0", VA = "0x1829EA2F0")]
	public static explicit operator int2x2(float2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600191E")]
	[Address(RVA = "0x29EA470", Offset = "0x29E8A70", VA = "0x1829EA470")]
	public static explicit operator int2x2(double v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600191F")]
	[Address(RVA = "0x29EA390", Offset = "0x29E8990", VA = "0x1829EA390")]
	public static explicit operator int2x2(double2x2 v)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001920")]
	[Address(RVA = "0x2A9B5C0", Offset = "0x2A99BC0", VA = "0x182A9B5C0")]
	public static int2x2 operator *(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001921")]
	[Address(RVA = "0x2A9B670", Offset = "0x2A99C70", VA = "0x182A9B670")]
	public static int2x2 operator *(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001922")]
	[Address(RVA = "0x2A9B620", Offset = "0x2A99C20", VA = "0x182A9B620")]
	public static int2x2 operator *(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001923")]
	[Address(RVA = "0x2A9A8E0", Offset = "0x2A98EE0", VA = "0x182A9A8E0")]
	public static int2x2 operator +(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001924")]
	[Address(RVA = "0x2A9A940", Offset = "0x2A98F40", VA = "0x182A9A940")]
	public static int2x2 operator +(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001925")]
	[Address(RVA = "0x2A9A890", Offset = "0x2A98E90", VA = "0x182A9A890")]
	public static int2x2 operator +(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001926")]
	[Address(RVA = "0x2A9B7B0", Offset = "0x2A99DB0", VA = "0x182A9B7B0")]
	public static int2x2 operator -(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001927")]
	[Address(RVA = "0x2A9B810", Offset = "0x2A99E10", VA = "0x182A9B810")]
	public static int2x2 operator -(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001928")]
	[Address(RVA = "0x2A9B760", Offset = "0x2A99D60", VA = "0x182A9B760")]
	public static int2x2 operator -(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001929")]
	[Address(RVA = "0x2A9AC80", Offset = "0x2A99280", VA = "0x182A9AC80")]
	public static int2x2 operator /(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600192A")]
	[Address(RVA = "0x2A9AC20", Offset = "0x2A99220", VA = "0x182A9AC20")]
	public static int2x2 operator /(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600192B")]
	[Address(RVA = "0x2A9ABC0", Offset = "0x2A991C0", VA = "0x182A9ABC0")]
	public static int2x2 operator /(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600192C")]
	[Address(RVA = "0x2A9B550", Offset = "0x2A99B50", VA = "0x182A9B550")]
	public static int2x2 operator %(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600192D")]
	[Address(RVA = "0x2A9B490", Offset = "0x2A99A90", VA = "0x182A9B490")]
	public static int2x2 operator %(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600192E")]
	[Address(RVA = "0x2A9B4F0", Offset = "0x2A99AF0", VA = "0x182A9B4F0")]
	public static int2x2 operator %(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600192F")]
	[Address(RVA = "0x2A9B0F0", Offset = "0x2A996F0", VA = "0x182A9B0F0")]
	public static int2x2 operator ++(int2x2 val)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001930")]
	[Address(RVA = "0x2A9AB70", Offset = "0x2A99170", VA = "0x182A9AB70")]
	public static int2x2 operator --(int2x2 val)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001931")]
	[Address(RVA = "0x2A9B3E0", Offset = "0x2A999E0", VA = "0x182A9B3E0")]
	public static bool2x2 operator <(int2x2 lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001932")]
	[Address(RVA = "0x2A9B440", Offset = "0x2A99A40", VA = "0x182A9B440")]
	public static bool2x2 operator <(int2x2 lhs, int rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001933")]
	[Address(RVA = "0x2A9B390", Offset = "0x2A99990", VA = "0x182A9B390")]
	public static bool2x2 operator <(int lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001934")]
	[Address(RVA = "0x2A9B290", Offset = "0x2A99890", VA = "0x182A9B290")]
	public static bool2x2 operator <=(int2x2 lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001935")]
	[Address(RVA = "0x2A9B340", Offset = "0x2A99940", VA = "0x182A9B340")]
	public static bool2x2 operator <=(int2x2 lhs, int rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001936")]
	[Address(RVA = "0x2A9B2F0", Offset = "0x2A998F0", VA = "0x182A9B2F0")]
	public static bool2x2 operator <=(int lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001937")]
	[Address(RVA = "0x2A9AFF0", Offset = "0x2A995F0", VA = "0x182A9AFF0")]
	public static bool2x2 operator >(int2x2 lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001938")]
	[Address(RVA = "0x2A9B050", Offset = "0x2A99650", VA = "0x182A9B050")]
	public static bool2x2 operator >(int2x2 lhs, int rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001939")]
	[Address(RVA = "0x2A9B0A0", Offset = "0x2A996A0", VA = "0x182A9B0A0")]
	public static bool2x2 operator >(int lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600193A")]
	[Address(RVA = "0x2A9AF90", Offset = "0x2A99590", VA = "0x182A9AF90")]
	public static bool2x2 operator >=(int2x2 lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600193B")]
	[Address(RVA = "0x2A9AEF0", Offset = "0x2A994F0", VA = "0x182A9AEF0")]
	public static bool2x2 operator >=(int2x2 lhs, int rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600193C")]
	[Address(RVA = "0x2A9AF40", Offset = "0x2A99540", VA = "0x182A9AF40")]
	public static bool2x2 operator >=(int lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600193D")]
	[Address(RVA = "0x2A9B860", Offset = "0x2A99E60", VA = "0x182A9B860")]
	public static int2x2 operator -(int2x2 val)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600193E")]
	[Address(RVA = "0x2A9B8B0", Offset = "0x2A99EB0", VA = "0x182A9B8B0")]
	public static int2x2 operator +(int2x2 val)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600193F")]
	[Address(RVA = "0x2A9B240", Offset = "0x2A99840", VA = "0x182A9B240")]
	public static int2x2 operator <<(int2x2 x, int n)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001940")]
	[Address(RVA = "0x2A9B710", Offset = "0x2A99D10", VA = "0x182A9B710")]
	public static int2x2 operator >>(int2x2 x, int n)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001941")]
	[Address(RVA = "0x2A9AD40", Offset = "0x2A99340", VA = "0x182A9AD40")]
	public static bool2x2 operator ==(int2x2 lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001942")]
	[Address(RVA = "0x2A9ADA0", Offset = "0x2A993A0", VA = "0x182A9ADA0")]
	public static bool2x2 operator ==(int2x2 lhs, int rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001943")]
	[Address(RVA = "0x2A9ACF0", Offset = "0x2A992F0", VA = "0x182A9ACF0")]
	public static bool2x2 operator ==(int lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001944")]
	[Address(RVA = "0x2A9B140", Offset = "0x2A99740", VA = "0x182A9B140")]
	public static bool2x2 operator !=(int2x2 lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001945")]
	[Address(RVA = "0x2A9B1F0", Offset = "0x2A997F0", VA = "0x182A9B1F0")]
	public static bool2x2 operator !=(int2x2 lhs, int rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001946")]
	[Address(RVA = "0x2A9B1A0", Offset = "0x2A997A0", VA = "0x182A9B1A0")]
	public static bool2x2 operator !=(int lhs, int2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001947")]
	[Address(RVA = "0x2A9B6C0", Offset = "0x2A99CC0", VA = "0x182A9B6C0")]
	public static int2x2 operator ~(int2x2 val)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001948")]
	[Address(RVA = "0x2A9AA30", Offset = "0x2A99030", VA = "0x182A9AA30")]
	public static int2x2 operator &(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001949")]
	[Address(RVA = "0x2A9A9E0", Offset = "0x2A98FE0", VA = "0x182A9A9E0")]
	public static int2x2 operator &(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600194A")]
	[Address(RVA = "0x2A9A990", Offset = "0x2A98F90", VA = "0x182A9A990")]
	public static int2x2 operator &(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600194B")]
	[Address(RVA = "0x2A9AA80", Offset = "0x2A99080", VA = "0x182A9AA80")]
	public static int2x2 operator |(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600194C")]
	[Address(RVA = "0x2A9AB20", Offset = "0x2A99120", VA = "0x182A9AB20")]
	public static int2x2 operator |(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600194D")]
	[Address(RVA = "0x2A9AAD0", Offset = "0x2A990D0", VA = "0x182A9AAD0")]
	public static int2x2 operator |(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600194E")]
	[Address(RVA = "0x2A9AE40", Offset = "0x2A99440", VA = "0x182A9AE40")]
	public static int2x2 operator ^(int2x2 lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600194F")]
	[Address(RVA = "0x2A9ADF0", Offset = "0x2A993F0", VA = "0x182A9ADF0")]
	public static int2x2 operator ^(int2x2 lhs, int rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001950")]
	[Address(RVA = "0x2A9AEA0", Offset = "0x2A994A0", VA = "0x182A9AEA0")]
	public static int2x2 operator ^(int lhs, int2x2 rhs)
	{
		return default(int2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001952")]
	[Address(RVA = "0x2A9A0F0", Offset = "0x2A986F0", VA = "0x182A9A0F0", Slot = "4")]
	public bool Equals(int2x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001953")]
	[Address(RVA = "0x2A9A120", Offset = "0x2A98720", VA = "0x182A9A120", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001954")]
	[Address(RVA = "0x2A9A1D0", Offset = "0x2A987D0", VA = "0x182A9A1D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001955")]
	[Address(RVA = "0x2A9A220", Offset = "0x2A98820", VA = "0x182A9A220", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001956")]
	[Address(RVA = "0x2A9A420", Offset = "0x2A98A20", VA = "0x182A9A420", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
