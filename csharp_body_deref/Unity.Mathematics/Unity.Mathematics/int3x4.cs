using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x200004A")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct int3x4 : IEquatable<int3x4>, IFormattable
{
	[Token(Token = "0x400010E")]
	[FieldOffset(Offset = "0x0")]
	public int3 c0;

	[Token(Token = "0x400010F")]
	[FieldOffset(Offset = "0xC")]
	public int3 c1;

	[Token(Token = "0x4000110")]
	[FieldOffset(Offset = "0x18")]
	public int3 c2;

	[Token(Token = "0x4000111")]
	[FieldOffset(Offset = "0x24")]
	public int3 c3;

	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int3x4 zero;

	[Token(Token = "0x17000848")]
	public unsafe ref int3 this[int index]
	{
		[Token(Token = "0x6001B4F")]
		[Address(RVA = "0x47EA900", Offset = "0x47EA900", VA = "0x47EA900")]
		get
		{
			return ref *(int3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B0A")]
	[Address(RVA = "0x47E7980", Offset = "0x47E7980", VA = "0x47E7980")]
	public int3x4(int3 c0, int3 c1, int3 c2, int3 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B0B")]
	[Address(RVA = "0x47E79B0", Offset = "0x47E79B0", VA = "0x47E79B0")]
	public int3x4(int m00, int m01, int m02, int m03, int m10, int m11, int m12, int m13, int m20, int m21, int m22, int m23)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B0C")]
	[Address(RVA = "0x47E7A10", Offset = "0x47E7A10", VA = "0x47E7A10")]
	public int3x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B0D")]
	[Address(RVA = "0x47E7A40", Offset = "0x47E7A40", VA = "0x47E7A40")]
	public int3x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B0E")]
	[Address(RVA = "0x47E7A70", Offset = "0x47E7A70", VA = "0x47E7A70")]
	public int3x4(bool3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B0F")]
	[Address(RVA = "0x47E7B20", Offset = "0x47E7B20", VA = "0x47E7B20")]
	public int3x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B10")]
	[Address(RVA = "0x47E7B50", Offset = "0x47E7B50", VA = "0x47E7B50")]
	public int3x4(uint3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B11")]
	[Address(RVA = "0x47E7B90", Offset = "0x47E7B90", VA = "0x47E7B90")]
	public int3x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B12")]
	[Address(RVA = "0x47E7BC0", Offset = "0x47E7BC0", VA = "0x47E7BC0")]
	public int3x4(float3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B13")]
	[Address(RVA = "0x47E7C60", Offset = "0x47E7C60", VA = "0x47E7C60")]
	public int3x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B14")]
	[Address(RVA = "0x47E7C90", Offset = "0x47E7C90", VA = "0x47E7C90")]
	public int3x4(double3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B15")]
	[Address(RVA = "0x47E7D10", Offset = "0x47E7D10", VA = "0x47E7D10")]
	public static implicit operator int3x4(int v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B16")]
	[Address(RVA = "0x47E7D40", Offset = "0x47E7D40", VA = "0x47E7D40")]
	public static explicit operator int3x4(bool v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B17")]
	[Address(RVA = "0x47E7D80", Offset = "0x47E7D80", VA = "0x47E7D80")]
	public static explicit operator int3x4(bool3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B18")]
	[Address(RVA = "0x47E7E30", Offset = "0x47E7E30", VA = "0x47E7E30")]
	public static explicit operator int3x4(uint v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B19")]
	[Address(RVA = "0x47E7E60", Offset = "0x47E7E60", VA = "0x47E7E60")]
	public static explicit operator int3x4(uint3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B1A")]
	[Address(RVA = "0x47E7EB0", Offset = "0x47E7EB0", VA = "0x47E7EB0")]
	public static explicit operator int3x4(float v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B1B")]
	[Address(RVA = "0x47E7EE0", Offset = "0x47E7EE0", VA = "0x47E7EE0")]
	public static explicit operator int3x4(float3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B1C")]
	[Address(RVA = "0x47E7F80", Offset = "0x47E7F80", VA = "0x47E7F80")]
	public static explicit operator int3x4(double v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B1D")]
	[Address(RVA = "0x47E7FB0", Offset = "0x47E7FB0", VA = "0x47E7FB0")]
	public static explicit operator int3x4(double3x4 v)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B1E")]
	[Address(RVA = "0x47E8050", Offset = "0x47E8050", VA = "0x47E8050")]
	public static int3x4 operator *(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B1F")]
	[Address(RVA = "0x47E8130", Offset = "0x47E8130", VA = "0x47E8130")]
	public static int3x4 operator *(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B20")]
	[Address(RVA = "0x47E81E0", Offset = "0x47E81E0", VA = "0x47E81E0")]
	public static int3x4 operator *(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B21")]
	[Address(RVA = "0x47E8290", Offset = "0x47E8290", VA = "0x47E8290")]
	public static int3x4 operator +(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B22")]
	[Address(RVA = "0x47E8360", Offset = "0x47E8360", VA = "0x47E8360")]
	public static int3x4 operator +(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B23")]
	[Address(RVA = "0x47E8400", Offset = "0x47E8400", VA = "0x47E8400")]
	public static int3x4 operator +(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B24")]
	[Address(RVA = "0x47E84A0", Offset = "0x47E84A0", VA = "0x47E84A0")]
	public static int3x4 operator -(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B25")]
	[Address(RVA = "0x47E8570", Offset = "0x47E8570", VA = "0x47E8570")]
	public static int3x4 operator -(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B26")]
	[Address(RVA = "0x47E8620", Offset = "0x47E8620", VA = "0x47E8620")]
	public static int3x4 operator -(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B27")]
	[Address(RVA = "0x47E86D0", Offset = "0x47E86D0", VA = "0x47E86D0")]
	public static int3x4 operator /(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B28")]
	[Address(RVA = "0x47E87E0", Offset = "0x47E87E0", VA = "0x47E87E0")]
	public static int3x4 operator /(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B29")]
	[Address(RVA = "0x47E88C0", Offset = "0x47E88C0", VA = "0x47E88C0")]
	public static int3x4 operator /(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B2A")]
	[Address(RVA = "0x47E8990", Offset = "0x47E8990", VA = "0x47E8990")]
	public static int3x4 operator %(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B2B")]
	[Address(RVA = "0x47E8AA0", Offset = "0x47E8AA0", VA = "0x47E8AA0")]
	public static int3x4 operator %(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B2C")]
	[Address(RVA = "0x47E8B80", Offset = "0x47E8B80", VA = "0x47E8B80")]
	public static int3x4 operator %(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B2D")]
	[Address(RVA = "0x47E8C50", Offset = "0x47E8C50", VA = "0x47E8C50")]
	public static int3x4 operator ++(int3x4 val)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B2E")]
	[Address(RVA = "0x47E8D10", Offset = "0x47E8D10", VA = "0x47E8D10")]
	public static int3x4 operator --(int3x4 val)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B2F")]
	[Address(RVA = "0x47E8DD0", Offset = "0x47E8DD0", VA = "0x47E8DD0")]
	public static bool3x4 operator <(int3x4 lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B30")]
	[Address(RVA = "0x47E8F10", Offset = "0x47E8F10", VA = "0x47E8F10")]
	public static bool3x4 operator <(int3x4 lhs, int rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B31")]
	[Address(RVA = "0x47E9010", Offset = "0x47E9010", VA = "0x47E9010")]
	public static bool3x4 operator <(int lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B32")]
	[Address(RVA = "0x47E9110", Offset = "0x47E9110", VA = "0x47E9110")]
	public static bool3x4 operator <=(int3x4 lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B33")]
	[Address(RVA = "0x47E9250", Offset = "0x47E9250", VA = "0x47E9250")]
	public static bool3x4 operator <=(int3x4 lhs, int rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B34")]
	[Address(RVA = "0x47E9350", Offset = "0x47E9350", VA = "0x47E9350")]
	public static bool3x4 operator <=(int lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B35")]
	[Address(RVA = "0x47E9450", Offset = "0x47E9450", VA = "0x47E9450")]
	public static bool3x4 operator >(int3x4 lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B36")]
	[Address(RVA = "0x47E9590", Offset = "0x47E9590", VA = "0x47E9590")]
	public static bool3x4 operator >(int3x4 lhs, int rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B37")]
	[Address(RVA = "0x47E9690", Offset = "0x47E9690", VA = "0x47E9690")]
	public static bool3x4 operator >(int lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B38")]
	[Address(RVA = "0x47E9790", Offset = "0x47E9790", VA = "0x47E9790")]
	public static bool3x4 operator >=(int3x4 lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B39")]
	[Address(RVA = "0x47E98D0", Offset = "0x47E98D0", VA = "0x47E98D0")]
	public static bool3x4 operator >=(int3x4 lhs, int rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B3A")]
	[Address(RVA = "0x47E99D0", Offset = "0x47E99D0", VA = "0x47E99D0")]
	public static bool3x4 operator >=(int lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B3B")]
	[Address(RVA = "0x47E9AD0", Offset = "0x47E9AD0", VA = "0x47E9AD0")]
	public static int3x4 operator -(int3x4 val)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B3C")]
	[Address(RVA = "0x47E9B60", Offset = "0x47E9B60", VA = "0x47E9B60")]
	public static int3x4 operator +(int3x4 val)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B3D")]
	[Address(RVA = "0x47E9BB0", Offset = "0x47E9BB0", VA = "0x47E9BB0")]
	public static int3x4 operator <<(int3x4 x, int n)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B3E")]
	[Address(RVA = "0x47E9C60", Offset = "0x47E9C60", VA = "0x47E9C60")]
	public static int3x4 operator >>(int3x4 x, int n)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B3F")]
	[Address(RVA = "0x47E9D10", Offset = "0x47E9D10", VA = "0x47E9D10")]
	public static bool3x4 operator ==(int3x4 lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B40")]
	[Address(RVA = "0x47E9E50", Offset = "0x47E9E50", VA = "0x47E9E50")]
	public static bool3x4 operator ==(int3x4 lhs, int rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B41")]
	[Address(RVA = "0x47E9F50", Offset = "0x47E9F50", VA = "0x47E9F50")]
	public static bool3x4 operator ==(int lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B42")]
	[Address(RVA = "0x47EA050", Offset = "0x47EA050", VA = "0x47EA050")]
	public static bool3x4 operator !=(int3x4 lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B43")]
	[Address(RVA = "0x47EA190", Offset = "0x47EA190", VA = "0x47EA190")]
	public static bool3x4 operator !=(int3x4 lhs, int rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B44")]
	[Address(RVA = "0x47EA290", Offset = "0x47EA290", VA = "0x47EA290")]
	public static bool3x4 operator !=(int lhs, int3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B45")]
	[Address(RVA = "0x47EA390", Offset = "0x47EA390", VA = "0x47EA390")]
	public static int3x4 operator ~(int3x4 val)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B46")]
	[Address(RVA = "0x47EA3F0", Offset = "0x47EA3F0", VA = "0x47EA3F0")]
	public static int3x4 operator &(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B47")]
	[Address(RVA = "0x47EA460", Offset = "0x47EA460", VA = "0x47EA460")]
	public static int3x4 operator &(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B48")]
	[Address(RVA = "0x47EA500", Offset = "0x47EA500", VA = "0x47EA500")]
	public static int3x4 operator &(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B49")]
	[Address(RVA = "0x47EA5A0", Offset = "0x47EA5A0", VA = "0x47EA5A0")]
	public static int3x4 operator |(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B4A")]
	[Address(RVA = "0x47EA610", Offset = "0x47EA610", VA = "0x47EA610")]
	public static int3x4 operator |(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B4B")]
	[Address(RVA = "0x47EA6B0", Offset = "0x47EA6B0", VA = "0x47EA6B0")]
	public static int3x4 operator |(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B4C")]
	[Address(RVA = "0x47EA750", Offset = "0x47EA750", VA = "0x47EA750")]
	public static int3x4 operator ^(int3x4 lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B4D")]
	[Address(RVA = "0x47EA7C0", Offset = "0x47EA7C0", VA = "0x47EA7C0")]
	public static int3x4 operator ^(int3x4 lhs, int rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B4E")]
	[Address(RVA = "0x47EA860", Offset = "0x47EA860", VA = "0x47EA860")]
	public static int3x4 operator ^(int lhs, int3x4 rhs)
	{
		return default(int3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B50")]
	[Address(RVA = "0x47EA910", Offset = "0x47EA910", VA = "0x47EA910", Slot = "4")]
	public bool Equals(int3x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001B51")]
	[Address(RVA = "0x47EA990", Offset = "0x47EA990", VA = "0x47EA990", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B52")]
	[Address(RVA = "0x47EAA60", Offset = "0x47EAA60", VA = "0x47EAA60", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B53")]
	[Address(RVA = "0x47EAB40", Offset = "0x47EAB40", VA = "0x47EAB40", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001B54")]
	[Address(RVA = "0x47EAFA0", Offset = "0x47EAFA0", VA = "0x47EAFA0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
