using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x200002D")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float2x2 : IEquatable<float2x2>, IFormattable
{
	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x0")]
	public float2 c0;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x8")]
	public float2 c1;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float2x2 identity;

	[Token(Token = "0x40000A2")]
	[FieldOffset(Offset = "0x10")]
	public static readonly float2x2 zero;

	[Token(Token = "0x170003F8")]
	public unsafe ref float2 this[int index]
	{
		[Token(Token = "0x60010DF")]
		[Address(RVA = "0x47AD2F0", Offset = "0x47AD2F0", VA = "0x47AD2F0")]
		get
		{
			return ref *(float2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010A6")]
	[Address(RVA = "0x47AC800", Offset = "0x47AC800", VA = "0x47AC800")]
	public float2x2(float2 c0, float2 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010A7")]
	[Address(RVA = "0x47AC810", Offset = "0x47AC810", VA = "0x47AC810")]
	public float2x2(float m00, float m01, float m10, float m11)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010A8")]
	[Address(RVA = "0x47AC830", Offset = "0x47AC830", VA = "0x47AC830")]
	public float2x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010A9")]
	[Address(RVA = "0x47AC840", Offset = "0x47AC840", VA = "0x47AC840")]
	public float2x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010AA")]
	[Address(RVA = "0x47AC860", Offset = "0x47AC860", VA = "0x47AC860")]
	public float2x2(bool2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010AB")]
	[Address(RVA = "0x47AC8D0", Offset = "0x47AC8D0", VA = "0x47AC8D0")]
	public float2x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010AC")]
	[Address(RVA = "0x47AC8E0", Offset = "0x47AC8E0", VA = "0x47AC8E0")]
	public float2x2(int2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010AD")]
	[Address(RVA = "0x47AC910", Offset = "0x47AC910", VA = "0x47AC910")]
	public float2x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010AE")]
	[Address(RVA = "0x47AC930", Offset = "0x47AC930", VA = "0x47AC930")]
	public float2x2(uint2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010AF")]
	[Address(RVA = "0x47AC970", Offset = "0x47AC970", VA = "0x47AC970")]
	public float2x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010B0")]
	[Address(RVA = "0x47AC980", Offset = "0x47AC980", VA = "0x47AC980")]
	public float2x2(double2x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010B1")]
	[Address(RVA = "0x47AC9A0", Offset = "0x47AC9A0", VA = "0x47AC9A0")]
	public static implicit operator float2x2(float v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010B2")]
	[Address(RVA = "0x47AC9B0", Offset = "0x47AC9B0", VA = "0x47AC9B0")]
	public static explicit operator float2x2(bool v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010B3")]
	[Address(RVA = "0x47AC9D0", Offset = "0x47AC9D0", VA = "0x47AC9D0")]
	public static explicit operator float2x2(bool2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010B4")]
	[Address(RVA = "0x47ACA30", Offset = "0x47ACA30", VA = "0x47ACA30")]
	public static implicit operator float2x2(int v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010B5")]
	[Address(RVA = "0x47ACA40", Offset = "0x47ACA40", VA = "0x47ACA40")]
	public static implicit operator float2x2(int2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010B6")]
	[Address(RVA = "0x47ACA70", Offset = "0x47ACA70", VA = "0x47ACA70")]
	public static implicit operator float2x2(uint v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010B7")]
	[Address(RVA = "0x47ACA90", Offset = "0x47ACA90", VA = "0x47ACA90")]
	public static implicit operator float2x2(uint2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010B8")]
	[Address(RVA = "0x47ACAD0", Offset = "0x47ACAD0", VA = "0x47ACAD0")]
	public static explicit operator float2x2(double v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010B9")]
	[Address(RVA = "0x47ACAE0", Offset = "0x47ACAE0", VA = "0x47ACAE0")]
	public static explicit operator float2x2(double2x2 v)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010BA")]
	[Address(RVA = "0x47ACAF0", Offset = "0x47ACAF0", VA = "0x47ACAF0")]
	public static float2x2 operator *(float2x2 lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010BB")]
	[Address(RVA = "0x47ACB00", Offset = "0x47ACB00", VA = "0x47ACB00")]
	public static float2x2 operator *(float2x2 lhs, float rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010BC")]
	[Address(RVA = "0x47ACB10", Offset = "0x47ACB10", VA = "0x47ACB10")]
	public static float2x2 operator *(float lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010BD")]
	[Address(RVA = "0x47ACB30", Offset = "0x47ACB30", VA = "0x47ACB30")]
	public static float2x2 operator +(float2x2 lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010BE")]
	[Address(RVA = "0x47ACB40", Offset = "0x47ACB40", VA = "0x47ACB40")]
	public static float2x2 operator +(float2x2 lhs, float rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010BF")]
	[Address(RVA = "0x47ACB50", Offset = "0x47ACB50", VA = "0x47ACB50")]
	public static float2x2 operator +(float lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010C0")]
	[Address(RVA = "0x47ACB70", Offset = "0x47ACB70", VA = "0x47ACB70")]
	public static float2x2 operator -(float2x2 lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010C1")]
	[Address(RVA = "0x47ACB80", Offset = "0x47ACB80", VA = "0x47ACB80")]
	public static float2x2 operator -(float2x2 lhs, float rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010C2")]
	[Address(RVA = "0x47ACB90", Offset = "0x47ACB90", VA = "0x47ACB90")]
	public static float2x2 operator -(float lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010C3")]
	[Address(RVA = "0x47ACBB0", Offset = "0x47ACBB0", VA = "0x47ACBB0")]
	public static float2x2 operator /(float2x2 lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010C4")]
	[Address(RVA = "0x47ACBC0", Offset = "0x47ACBC0", VA = "0x47ACBC0")]
	public static float2x2 operator /(float2x2 lhs, float rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010C5")]
	[Address(RVA = "0x47ACBD0", Offset = "0x47ACBD0", VA = "0x47ACBD0")]
	public static float2x2 operator /(float lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010C6")]
	[Address(RVA = "0x47ACBF0", Offset = "0x47ACBF0", VA = "0x47ACBF0")]
	public static float2x2 operator %(float2x2 lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010C7")]
	[Address(RVA = "0x47ACC90", Offset = "0x47ACC90", VA = "0x47ACC90")]
	public static float2x2 operator %(float2x2 lhs, float rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010C8")]
	[Address(RVA = "0x47ACD20", Offset = "0x47ACD20", VA = "0x47ACD20")]
	public static float2x2 operator %(float lhs, float2x2 rhs)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010C9")]
	[Address(RVA = "0x47ACDB0", Offset = "0x47ACDB0", VA = "0x47ACDB0")]
	public static float2x2 operator ++(float2x2 val)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010CA")]
	[Address(RVA = "0x47ACDC0", Offset = "0x47ACDC0", VA = "0x47ACDC0")]
	public static float2x2 operator --(float2x2 val)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010CB")]
	[Address(RVA = "0x47ACDD0", Offset = "0x47ACDD0", VA = "0x47ACDD0")]
	public static bool2x2 operator <(float2x2 lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010CC")]
	[Address(RVA = "0x47ACE10", Offset = "0x47ACE10", VA = "0x47ACE10")]
	public static bool2x2 operator <(float2x2 lhs, float rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010CD")]
	[Address(RVA = "0x47ACE50", Offset = "0x47ACE50", VA = "0x47ACE50")]
	public static bool2x2 operator <(float lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010CE")]
	[Address(RVA = "0x47ACE90", Offset = "0x47ACE90", VA = "0x47ACE90")]
	public static bool2x2 operator <=(float2x2 lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010CF")]
	[Address(RVA = "0x47ACED0", Offset = "0x47ACED0", VA = "0x47ACED0")]
	public static bool2x2 operator <=(float2x2 lhs, float rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010D0")]
	[Address(RVA = "0x47ACF10", Offset = "0x47ACF10", VA = "0x47ACF10")]
	public static bool2x2 operator <=(float lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010D1")]
	[Address(RVA = "0x47ACF50", Offset = "0x47ACF50", VA = "0x47ACF50")]
	public static bool2x2 operator >(float2x2 lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010D2")]
	[Address(RVA = "0x47ACF90", Offset = "0x47ACF90", VA = "0x47ACF90")]
	public static bool2x2 operator >(float2x2 lhs, float rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010D3")]
	[Address(RVA = "0x47ACFD0", Offset = "0x47ACFD0", VA = "0x47ACFD0")]
	public static bool2x2 operator >(float lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010D4")]
	[Address(RVA = "0x47AD010", Offset = "0x47AD010", VA = "0x47AD010")]
	public static bool2x2 operator >=(float2x2 lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010D5")]
	[Address(RVA = "0x47AD050", Offset = "0x47AD050", VA = "0x47AD050")]
	public static bool2x2 operator >=(float2x2 lhs, float rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010D6")]
	[Address(RVA = "0x47AD090", Offset = "0x47AD090", VA = "0x47AD090")]
	public static bool2x2 operator >=(float lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010D7")]
	[Address(RVA = "0x47AD0D0", Offset = "0x47AD0D0", VA = "0x47AD0D0")]
	public static float2x2 operator -(float2x2 val)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010D8")]
	[Address(RVA = "0x47AD0E0", Offset = "0x47AD0E0", VA = "0x47AD0E0")]
	public static float2x2 operator +(float2x2 val)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010D9")]
	[Address(RVA = "0x47AD0F0", Offset = "0x47AD0F0", VA = "0x47AD0F0")]
	public static bool2x2 operator ==(float2x2 lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010DA")]
	[Address(RVA = "0x47AD150", Offset = "0x47AD150", VA = "0x47AD150")]
	public static bool2x2 operator ==(float2x2 lhs, float rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010DB")]
	[Address(RVA = "0x47AD1A0", Offset = "0x47AD1A0", VA = "0x47AD1A0")]
	public static bool2x2 operator ==(float lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010DC")]
	[Address(RVA = "0x47AD1F0", Offset = "0x47AD1F0", VA = "0x47AD1F0")]
	public static bool2x2 operator !=(float2x2 lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010DD")]
	[Address(RVA = "0x47AD250", Offset = "0x47AD250", VA = "0x47AD250")]
	public static bool2x2 operator !=(float2x2 lhs, float rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010DE")]
	[Address(RVA = "0x47AD2A0", Offset = "0x47AD2A0", VA = "0x47AD2A0")]
	public static bool2x2 operator !=(float lhs, float2x2 rhs)
	{
		return default(bool2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010E0")]
	[Address(RVA = "0x47AD300", Offset = "0x47AD300", VA = "0x47AD300", Slot = "4")]
	public bool Equals(float2x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x60010E1")]
	[Address(RVA = "0x47AD340", Offset = "0x47AD340", VA = "0x47AD340", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010E2")]
	[Address(RVA = "0x47AD3E0", Offset = "0x47AD3E0", VA = "0x47AD3E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010E3")]
	[Address(RVA = "0x47AD460", Offset = "0x47AD460", VA = "0x47AD460", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010E4")]
	[Address(RVA = "0x47AD630", Offset = "0x47AD630", VA = "0x47AD630", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010E5")]
	[Address(RVA = "0x47AD800", Offset = "0x47AD800", VA = "0x47AD800")]
	public static float2x2 Rotate(float angle)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010E6")]
	[Address(RVA = "0x47AD8F0", Offset = "0x47AD8F0", VA = "0x47AD8F0")]
	public static float2x2 Scale(float s)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010E7")]
	[Address(RVA = "0x47AD910", Offset = "0x47AD910", VA = "0x47AD910")]
	public static float2x2 Scale(float x, float y)
	{
		return default(float2x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010E8")]
	[Address(RVA = "0x47AD930", Offset = "0x47AD930", VA = "0x47AD930")]
	public static float2x2 Scale(float2 v)
	{
		return default(float2x2);
	}
}
