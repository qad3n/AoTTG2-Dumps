using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x200004D")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int4x2 : IEquatable<int4x2>, IFormattable
{
	[Token(Token = "0x400011C")]
	[FieldOffset(Offset = "0x0")]
	public int4 c0;

	[Token(Token = "0x400011D")]
	[FieldOffset(Offset = "0x10")]
	public int4 c1;

	[Token(Token = "0x400011E")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int4x2 zero;

	[Token(Token = "0x1700099A")]
	public unsafe ref int4 this[int index]
	{
		[Token(Token = "0x6001D79")]
		[Address(RVA = "0x47F2DB0", Offset = "0x47F2DB0", VA = "0x47F2DB0")]
		get
		{
			return ref *(int4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D34")]
	[Address(RVA = "0x47F0E80", Offset = "0x47F0E80", VA = "0x47F0E80")]
	public int4x2(int4 c0, int4 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D35")]
	[Address(RVA = "0x47F0E90", Offset = "0x47F0E90", VA = "0x47F0E90")]
	public int4x2(int m00, int m01, int m10, int m11, int m20, int m21, int m30, int m31)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D36")]
	[Address(RVA = "0x47F0EC0", Offset = "0x47F0EC0", VA = "0x47F0EC0")]
	public int4x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D37")]
	[Address(RVA = "0x47F0EE0", Offset = "0x47F0EE0", VA = "0x47F0EE0")]
	public int4x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D38")]
	[Address(RVA = "0x47F0F10", Offset = "0x47F0F10", VA = "0x47F0F10")]
	public int4x2(bool4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D39")]
	[Address(RVA = "0x47F0F80", Offset = "0x47F0F80", VA = "0x47F0F80")]
	public int4x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D3A")]
	[Address(RVA = "0x47F0FA0", Offset = "0x47F0FA0", VA = "0x47F0FA0")]
	public int4x2(uint4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D3B")]
	[Address(RVA = "0x47F0FC0", Offset = "0x47F0FC0", VA = "0x47F0FC0")]
	public int4x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D3C")]
	[Address(RVA = "0x47F0FE0", Offset = "0x47F0FE0", VA = "0x47F0FE0")]
	public int4x2(float4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D3D")]
	[Address(RVA = "0x47F1060", Offset = "0x47F1060", VA = "0x47F1060")]
	public int4x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D3E")]
	[Address(RVA = "0x47F1080", Offset = "0x47F1080", VA = "0x47F1080")]
	public int4x2(double4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D3F")]
	[Address(RVA = "0x47F10E0", Offset = "0x47F10E0", VA = "0x47F10E0")]
	public static implicit operator int4x2(int v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D40")]
	[Address(RVA = "0x47F1100", Offset = "0x47F1100", VA = "0x47F1100")]
	public static explicit operator int4x2(bool v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D41")]
	[Address(RVA = "0x47F1130", Offset = "0x47F1130", VA = "0x47F1130")]
	public static explicit operator int4x2(bool4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D42")]
	[Address(RVA = "0x47F11B0", Offset = "0x47F11B0", VA = "0x47F11B0")]
	public static explicit operator int4x2(uint v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D43")]
	[Address(RVA = "0x47F11D0", Offset = "0x47F11D0", VA = "0x47F11D0")]
	public static explicit operator int4x2(uint4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D44")]
	[Address(RVA = "0x47F11F0", Offset = "0x47F11F0", VA = "0x47F11F0")]
	public static explicit operator int4x2(float v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D45")]
	[Address(RVA = "0x47F1220", Offset = "0x47F1220", VA = "0x47F1220")]
	public static explicit operator int4x2(float4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D46")]
	[Address(RVA = "0x47F12A0", Offset = "0x47F12A0", VA = "0x47F12A0")]
	public static explicit operator int4x2(double v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D47")]
	[Address(RVA = "0x47F12D0", Offset = "0x47F12D0", VA = "0x47F12D0")]
	public static explicit operator int4x2(double4x2 v)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D48")]
	[Address(RVA = "0x47F1340", Offset = "0x47F1340", VA = "0x47F1340")]
	public static int4x2 operator *(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D49")]
	[Address(RVA = "0x47F13E0", Offset = "0x47F13E0", VA = "0x47F13E0")]
	public static int4x2 operator *(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D4A")]
	[Address(RVA = "0x47F1460", Offset = "0x47F1460", VA = "0x47F1460")]
	public static int4x2 operator *(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D4B")]
	[Address(RVA = "0x47F14E0", Offset = "0x47F14E0", VA = "0x47F14E0")]
	public static int4x2 operator +(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D4C")]
	[Address(RVA = "0x47F1550", Offset = "0x47F1550", VA = "0x47F1550")]
	public static int4x2 operator +(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D4D")]
	[Address(RVA = "0x47F15C0", Offset = "0x47F15C0", VA = "0x47F15C0")]
	public static int4x2 operator +(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D4E")]
	[Address(RVA = "0x47F1630", Offset = "0x47F1630", VA = "0x47F1630")]
	public static int4x2 operator -(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D4F")]
	[Address(RVA = "0x47F16A0", Offset = "0x47F16A0", VA = "0x47F16A0")]
	public static int4x2 operator -(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D50")]
	[Address(RVA = "0x47F1710", Offset = "0x47F1710", VA = "0x47F1710")]
	public static int4x2 operator -(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D51")]
	[Address(RVA = "0x47F1780", Offset = "0x47F1780", VA = "0x47F1780")]
	public static int4x2 operator /(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D52")]
	[Address(RVA = "0x47F1850", Offset = "0x47F1850", VA = "0x47F1850")]
	public static int4x2 operator /(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D53")]
	[Address(RVA = "0x47F18F0", Offset = "0x47F18F0", VA = "0x47F18F0")]
	public static int4x2 operator /(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D54")]
	[Address(RVA = "0x47F1990", Offset = "0x47F1990", VA = "0x47F1990")]
	public static int4x2 operator %(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D55")]
	[Address(RVA = "0x47F1A60", Offset = "0x47F1A60", VA = "0x47F1A60")]
	public static int4x2 operator %(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D56")]
	[Address(RVA = "0x47F1B00", Offset = "0x47F1B00", VA = "0x47F1B00")]
	public static int4x2 operator %(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D57")]
	[Address(RVA = "0x47F1BA0", Offset = "0x47F1BA0", VA = "0x47F1BA0")]
	public static int4x2 operator ++(int4x2 val)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D58")]
	[Address(RVA = "0x47F1BF0", Offset = "0x47F1BF0", VA = "0x47F1BF0")]
	public static int4x2 operator --(int4x2 val)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D59")]
	[Address(RVA = "0x47F1C40", Offset = "0x47F1C40", VA = "0x47F1C40")]
	public static bool4x2 operator <(int4x2 lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D5A")]
	[Address(RVA = "0x47F1D20", Offset = "0x47F1D20", VA = "0x47F1D20")]
	public static bool4x2 operator <(int4x2 lhs, int rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D5B")]
	[Address(RVA = "0x47F1DC0", Offset = "0x47F1DC0", VA = "0x47F1DC0")]
	public static bool4x2 operator <(int lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D5C")]
	[Address(RVA = "0x47F1E60", Offset = "0x47F1E60", VA = "0x47F1E60")]
	public static bool4x2 operator <=(int4x2 lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D5D")]
	[Address(RVA = "0x47F1F40", Offset = "0x47F1F40", VA = "0x47F1F40")]
	public static bool4x2 operator <=(int4x2 lhs, int rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D5E")]
	[Address(RVA = "0x47F1FE0", Offset = "0x47F1FE0", VA = "0x47F1FE0")]
	public static bool4x2 operator <=(int lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D5F")]
	[Address(RVA = "0x47F2080", Offset = "0x47F2080", VA = "0x47F2080")]
	public static bool4x2 operator >(int4x2 lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D60")]
	[Address(RVA = "0x47F2160", Offset = "0x47F2160", VA = "0x47F2160")]
	public static bool4x2 operator >(int4x2 lhs, int rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D61")]
	[Address(RVA = "0x47F2200", Offset = "0x47F2200", VA = "0x47F2200")]
	public static bool4x2 operator >(int lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D62")]
	[Address(RVA = "0x47F22A0", Offset = "0x47F22A0", VA = "0x47F22A0")]
	public static bool4x2 operator >=(int4x2 lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D63")]
	[Address(RVA = "0x47F2380", Offset = "0x47F2380", VA = "0x47F2380")]
	public static bool4x2 operator >=(int4x2 lhs, int rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D64")]
	[Address(RVA = "0x47F2420", Offset = "0x47F2420", VA = "0x47F2420")]
	public static bool4x2 operator >=(int lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D65")]
	[Address(RVA = "0x47F24C0", Offset = "0x47F24C0", VA = "0x47F24C0")]
	public static int4x2 operator -(int4x2 val)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D66")]
	[Address(RVA = "0x47F2520", Offset = "0x47F2520", VA = "0x47F2520")]
	public static int4x2 operator +(int4x2 val)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D67")]
	[Address(RVA = "0x47F2540", Offset = "0x47F2540", VA = "0x47F2540")]
	public static int4x2 operator <<(int4x2 x, int n)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D68")]
	[Address(RVA = "0x47F25C0", Offset = "0x47F25C0", VA = "0x47F25C0")]
	public static int4x2 operator >>(int4x2 x, int n)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D69")]
	[Address(RVA = "0x47F2640", Offset = "0x47F2640", VA = "0x47F2640")]
	public static bool4x2 operator ==(int4x2 lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D6A")]
	[Address(RVA = "0x47F2720", Offset = "0x47F2720", VA = "0x47F2720")]
	public static bool4x2 operator ==(int4x2 lhs, int rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D6B")]
	[Address(RVA = "0x47F27C0", Offset = "0x47F27C0", VA = "0x47F27C0")]
	public static bool4x2 operator ==(int lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D6C")]
	[Address(RVA = "0x47F2860", Offset = "0x47F2860", VA = "0x47F2860")]
	public static bool4x2 operator !=(int4x2 lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D6D")]
	[Address(RVA = "0x47F2940", Offset = "0x47F2940", VA = "0x47F2940")]
	public static bool4x2 operator !=(int4x2 lhs, int rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D6E")]
	[Address(RVA = "0x47F29E0", Offset = "0x47F29E0", VA = "0x47F29E0")]
	public static bool4x2 operator !=(int lhs, int4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D6F")]
	[Address(RVA = "0x47F2A80", Offset = "0x47F2A80", VA = "0x47F2A80")]
	public static int4x2 operator ~(int4x2 val)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D70")]
	[Address(RVA = "0x47F2AB0", Offset = "0x47F2AB0", VA = "0x47F2AB0")]
	public static int4x2 operator &(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D71")]
	[Address(RVA = "0x47F2AD0", Offset = "0x47F2AD0", VA = "0x47F2AD0")]
	public static int4x2 operator &(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D72")]
	[Address(RVA = "0x47F2B40", Offset = "0x47F2B40", VA = "0x47F2B40")]
	public static int4x2 operator &(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D73")]
	[Address(RVA = "0x47F2BB0", Offset = "0x47F2BB0", VA = "0x47F2BB0")]
	public static int4x2 operator |(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D74")]
	[Address(RVA = "0x47F2BD0", Offset = "0x47F2BD0", VA = "0x47F2BD0")]
	public static int4x2 operator |(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D75")]
	[Address(RVA = "0x47F2C40", Offset = "0x47F2C40", VA = "0x47F2C40")]
	public static int4x2 operator |(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D76")]
	[Address(RVA = "0x47F2CB0", Offset = "0x47F2CB0", VA = "0x47F2CB0")]
	public static int4x2 operator ^(int4x2 lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D77")]
	[Address(RVA = "0x47F2CD0", Offset = "0x47F2CD0", VA = "0x47F2CD0")]
	public static int4x2 operator ^(int4x2 lhs, int rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D78")]
	[Address(RVA = "0x47F2D40", Offset = "0x47F2D40", VA = "0x47F2D40")]
	public static int4x2 operator ^(int lhs, int4x2 rhs)
	{
		return default(int4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D7A")]
	[Address(RVA = "0x47F2DC0", Offset = "0x47F2DC0", VA = "0x47F2DC0", Slot = "4")]
	public bool Equals(int4x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001D7B")]
	[Address(RVA = "0x47F2E20", Offset = "0x47F2E20", VA = "0x47F2E20", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D7C")]
	[Address(RVA = "0x47F2ED0", Offset = "0x47F2ED0", VA = "0x47F2ED0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D7D")]
	[Address(RVA = "0x47F2F80", Offset = "0x47F2F80", VA = "0x47F2F80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001D7E")]
	[Address(RVA = "0x47F32A0", Offset = "0x47F32A0", VA = "0x47F32A0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
