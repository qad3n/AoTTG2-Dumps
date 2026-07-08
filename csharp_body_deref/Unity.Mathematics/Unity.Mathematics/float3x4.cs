using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000034")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float3x4 : IEquatable<float3x4>, IFormattable
{
	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0x0")]
	public float3 c0;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0xC")]
	public float3 c1;

	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x18")]
	public float3 c2;

	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0x24")]
	public float3 c3;

	[Token(Token = "0x40000BF")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float3x4 zero;

	[Token(Token = "0x17000473")]
	public unsafe ref float3 this[int index]
	{
		[Token(Token = "0x6001304")]
		[Address(RVA = "0x47BC9E0", Offset = "0x47BC9E0", VA = "0x47BC9E0")]
		get
		{
			return ref *(float3*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012CB")]
	[Address(RVA = "0x47B9D50", Offset = "0x47B9D50", VA = "0x47B9D50")]
	public float3x4(float3 c0, float3 c1, float3 c2, float3 c3)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012CC")]
	[Address(RVA = "0x47B9D80", Offset = "0x47B9D80", VA = "0x47B9D80")]
	public float3x4(float m00, float m01, float m02, float m03, float m10, float m11, float m12, float m13, float m20, float m21, float m22, float m23)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012CD")]
	[Address(RVA = "0x47B9DE0", Offset = "0x47B9DE0", VA = "0x47B9DE0")]
	public float3x4(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012CE")]
	[Address(RVA = "0x47B9E10", Offset = "0x47B9E10", VA = "0x47B9E10")]
	public float3x4(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012CF")]
	[Address(RVA = "0x47B9E60", Offset = "0x47B9E60", VA = "0x47B9E60")]
	public float3x4(bool3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D0")]
	[Address(RVA = "0x47BA010", Offset = "0x47BA010", VA = "0x47BA010")]
	public float3x4(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D1")]
	[Address(RVA = "0x47BA040", Offset = "0x47BA040", VA = "0x47BA040")]
	public float3x4(int3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D2")]
	[Address(RVA = "0x47BA0F0", Offset = "0x47BA0F0", VA = "0x47BA0F0")]
	public float3x4(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D3")]
	[Address(RVA = "0x47BA130", Offset = "0x47BA130", VA = "0x47BA130")]
	public float3x4(uint3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D4")]
	[Address(RVA = "0x47BA230", Offset = "0x47BA230", VA = "0x47BA230")]
	public float3x4(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D5")]
	[Address(RVA = "0x47BA260", Offset = "0x47BA260", VA = "0x47BA260")]
	public float3x4(double3x4 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D6")]
	[Address(RVA = "0x47BA2D0", Offset = "0x47BA2D0", VA = "0x47BA2D0")]
	public static implicit operator float3x4(float v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D7")]
	[Address(RVA = "0x47BA300", Offset = "0x47BA300", VA = "0x47BA300")]
	public static explicit operator float3x4(bool v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D8")]
	[Address(RVA = "0x47BA350", Offset = "0x47BA350", VA = "0x47BA350")]
	public static explicit operator float3x4(bool3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012D9")]
	[Address(RVA = "0x47BA510", Offset = "0x47BA510", VA = "0x47BA510")]
	public static implicit operator float3x4(int v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012DA")]
	[Address(RVA = "0x47BA550", Offset = "0x47BA550", VA = "0x47BA550")]
	public static implicit operator float3x4(int3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012DB")]
	[Address(RVA = "0x47BA600", Offset = "0x47BA600", VA = "0x47BA600")]
	public static implicit operator float3x4(uint v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012DC")]
	[Address(RVA = "0x47BA640", Offset = "0x47BA640", VA = "0x47BA640")]
	public static implicit operator float3x4(uint3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012DD")]
	[Address(RVA = "0x47BA740", Offset = "0x47BA740", VA = "0x47BA740")]
	public static explicit operator float3x4(double v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012DE")]
	[Address(RVA = "0x47BA780", Offset = "0x47BA780", VA = "0x47BA780")]
	public static explicit operator float3x4(double3x4 v)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012DF")]
	[Address(RVA = "0x47BA800", Offset = "0x47BA800", VA = "0x47BA800")]
	public static float3x4 operator *(float3x4 lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E0")]
	[Address(RVA = "0x47BA8A0", Offset = "0x47BA8A0", VA = "0x47BA8A0")]
	public static float3x4 operator *(float3x4 lhs, float rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E1")]
	[Address(RVA = "0x47BA920", Offset = "0x47BA920", VA = "0x47BA920")]
	public static float3x4 operator *(float lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E2")]
	[Address(RVA = "0x47BA9A0", Offset = "0x47BA9A0", VA = "0x47BA9A0")]
	public static float3x4 operator +(float3x4 lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E3")]
	[Address(RVA = "0x47BAA40", Offset = "0x47BAA40", VA = "0x47BAA40")]
	public static float3x4 operator +(float3x4 lhs, float rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E4")]
	[Address(RVA = "0x47BAAC0", Offset = "0x47BAAC0", VA = "0x47BAAC0")]
	public static float3x4 operator +(float lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E5")]
	[Address(RVA = "0x47BAB40", Offset = "0x47BAB40", VA = "0x47BAB40")]
	public static float3x4 operator -(float3x4 lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E6")]
	[Address(RVA = "0x47BABE0", Offset = "0x47BABE0", VA = "0x47BABE0")]
	public static float3x4 operator -(float3x4 lhs, float rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E7")]
	[Address(RVA = "0x47BAC60", Offset = "0x47BAC60", VA = "0x47BAC60")]
	public static float3x4 operator -(float lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E8")]
	[Address(RVA = "0x47BACE0", Offset = "0x47BACE0", VA = "0x47BACE0")]
	public static float3x4 operator /(float3x4 lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012E9")]
	[Address(RVA = "0x47BAD80", Offset = "0x47BAD80", VA = "0x47BAD80")]
	public static float3x4 operator /(float3x4 lhs, float rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012EA")]
	[Address(RVA = "0x47BAE00", Offset = "0x47BAE00", VA = "0x47BAE00")]
	public static float3x4 operator /(float lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012EB")]
	[Address(RVA = "0x47BAE80", Offset = "0x47BAE80", VA = "0x47BAE80")]
	public static float3x4 operator %(float3x4 lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012EC")]
	[Address(RVA = "0x47BB120", Offset = "0x47BB120", VA = "0x47BB120")]
	public static float3x4 operator %(float3x4 lhs, float rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012ED")]
	[Address(RVA = "0x47BB350", Offset = "0x47BB350", VA = "0x47BB350")]
	public static float3x4 operator %(float lhs, float3x4 rhs)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012EE")]
	[Address(RVA = "0x47BB570", Offset = "0x47BB570", VA = "0x47BB570")]
	public static float3x4 operator ++(float3x4 val)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012EF")]
	[Address(RVA = "0x47BB620", Offset = "0x47BB620", VA = "0x47BB620")]
	public static float3x4 operator --(float3x4 val)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F0")]
	[Address(RVA = "0x47BB6D0", Offset = "0x47BB6D0", VA = "0x47BB6D0")]
	public static bool3x4 operator <(float3x4 lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F1")]
	[Address(RVA = "0x47BB7E0", Offset = "0x47BB7E0", VA = "0x47BB7E0")]
	public static bool3x4 operator <(float3x4 lhs, float rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F2")]
	[Address(RVA = "0x47BB8B0", Offset = "0x47BB8B0", VA = "0x47BB8B0")]
	public static bool3x4 operator <(float lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F3")]
	[Address(RVA = "0x47BB990", Offset = "0x47BB990", VA = "0x47BB990")]
	public static bool3x4 operator <=(float3x4 lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F4")]
	[Address(RVA = "0x47BBAA0", Offset = "0x47BBAA0", VA = "0x47BBAA0")]
	public static bool3x4 operator <=(float3x4 lhs, float rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F5")]
	[Address(RVA = "0x47BBB70", Offset = "0x47BBB70", VA = "0x47BBB70")]
	public static bool3x4 operator <=(float lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F6")]
	[Address(RVA = "0x47BBC50", Offset = "0x47BBC50", VA = "0x47BBC50")]
	public static bool3x4 operator >(float3x4 lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F7")]
	[Address(RVA = "0x47BBD60", Offset = "0x47BBD60", VA = "0x47BBD60")]
	public static bool3x4 operator >(float3x4 lhs, float rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F8")]
	[Address(RVA = "0x47BBE40", Offset = "0x47BBE40", VA = "0x47BBE40")]
	public static bool3x4 operator >(float lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012F9")]
	[Address(RVA = "0x47BBF10", Offset = "0x47BBF10", VA = "0x47BBF10")]
	public static bool3x4 operator >=(float3x4 lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012FA")]
	[Address(RVA = "0x47BC020", Offset = "0x47BC020", VA = "0x47BC020")]
	public static bool3x4 operator >=(float3x4 lhs, float rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012FB")]
	[Address(RVA = "0x47BC100", Offset = "0x47BC100", VA = "0x47BC100")]
	public static bool3x4 operator >=(float lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012FC")]
	[Address(RVA = "0x47BC1D0", Offset = "0x47BC1D0", VA = "0x47BC1D0")]
	public static float3x4 operator -(float3x4 val)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012FD")]
	[Address(RVA = "0x47BC250", Offset = "0x47BC250", VA = "0x47BC250")]
	public static float3x4 operator +(float3x4 val)
	{
		return default(float3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012FE")]
	[Address(RVA = "0x47BC2A0", Offset = "0x47BC2A0", VA = "0x47BC2A0")]
	public static bool3x4 operator ==(float3x4 lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60012FF")]
	[Address(RVA = "0x47BC400", Offset = "0x47BC400", VA = "0x47BC400")]
	public static bool3x4 operator ==(float3x4 lhs, float rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001300")]
	[Address(RVA = "0x47BC520", Offset = "0x47BC520", VA = "0x47BC520")]
	public static bool3x4 operator ==(float lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001301")]
	[Address(RVA = "0x47BC640", Offset = "0x47BC640", VA = "0x47BC640")]
	public static bool3x4 operator !=(float3x4 lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001302")]
	[Address(RVA = "0x47BC7A0", Offset = "0x47BC7A0", VA = "0x47BC7A0")]
	public static bool3x4 operator !=(float3x4 lhs, float rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001303")]
	[Address(RVA = "0x47BC8C0", Offset = "0x47BC8C0", VA = "0x47BC8C0")]
	public static bool3x4 operator !=(float lhs, float3x4 rhs)
	{
		return default(bool3x4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001305")]
	[Address(RVA = "0x47BC9F0", Offset = "0x47BC9F0", VA = "0x47BC9F0", Slot = "4")]
	public bool Equals(float3x4 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001306")]
	[Address(RVA = "0x47BCAE0", Offset = "0x47BCAE0", VA = "0x47BCAE0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001307")]
	[Address(RVA = "0x47BCC30", Offset = "0x47BCC30", VA = "0x47BCC30", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001308")]
	[Address(RVA = "0x47BCD60", Offset = "0x47BCD60", VA = "0x47BCD60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001309")]
	[Address(RVA = "0x47BD1C0", Offset = "0x47BD1C0", VA = "0x47BD1C0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
