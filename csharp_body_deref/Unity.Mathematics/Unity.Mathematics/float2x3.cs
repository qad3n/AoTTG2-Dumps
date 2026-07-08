using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x200002E")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float2x3 : IEquatable<float2x3>, IFormattable
{
	[Token(Token = "0x40000A3")]
	[FieldOffset(Offset = "0x0")]
	public float2 c0;

	[Token(Token = "0x40000A4")]
	[FieldOffset(Offset = "0x8")]
	public float2 c1;

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x10")]
	public float2 c2;

	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float2x3 zero;

	[Token(Token = "0x170003F9")]
	public unsafe ref float2 this[int index]
	{
		[Token(Token = "0x6001123")]
		[Address(RVA = "0x47AEEA0", Offset = "0x47AEEA0", VA = "0x47AEEA0")]
		get
		{
			return ref *(float2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010EA")]
	[Address(RVA = "0x47AD990", Offset = "0x47AD990", VA = "0x47AD990")]
	public float2x3(float2 c0, float2 c1, float2 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010EB")]
	[Address(RVA = "0x47AD9A0", Offset = "0x47AD9A0", VA = "0x47AD9A0")]
	public float2x3(float m00, float m01, float m02, float m10, float m11, float m12)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010EC")]
	[Address(RVA = "0x47AD9C0", Offset = "0x47AD9C0", VA = "0x47AD9C0")]
	public float2x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010ED")]
	[Address(RVA = "0x47AD9E0", Offset = "0x47AD9E0", VA = "0x47AD9E0")]
	public float2x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010EE")]
	[Address(RVA = "0x47ADA00", Offset = "0x47ADA00", VA = "0x47ADA00")]
	public float2x3(bool2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010EF")]
	[Address(RVA = "0x47ADA90", Offset = "0x47ADA90", VA = "0x47ADA90")]
	public float2x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F0")]
	[Address(RVA = "0x47ADAB0", Offset = "0x47ADAB0", VA = "0x47ADAB0")]
	public float2x3(int2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F1")]
	[Address(RVA = "0x47ADB10", Offset = "0x47ADB10", VA = "0x47ADB10")]
	public float2x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F2")]
	[Address(RVA = "0x47ADB30", Offset = "0x47ADB30", VA = "0x47ADB30")]
	public float2x3(uint2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F3")]
	[Address(RVA = "0x47ADBB0", Offset = "0x47ADBB0", VA = "0x47ADBB0")]
	public float2x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F4")]
	[Address(RVA = "0x47ADBD0", Offset = "0x47ADBD0", VA = "0x47ADBD0")]
	public float2x3(double2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F5")]
	[Address(RVA = "0x47ADC00", Offset = "0x47ADC00", VA = "0x47ADC00")]
	public static implicit operator float2x3(float v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F6")]
	[Address(RVA = "0x47ADC20", Offset = "0x47ADC20", VA = "0x47ADC20")]
	public static explicit operator float2x3(bool v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F7")]
	[Address(RVA = "0x47ADC50", Offset = "0x47ADC50", VA = "0x47ADC50")]
	public static explicit operator float2x3(bool2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F8")]
	[Address(RVA = "0x47ADCE0", Offset = "0x47ADCE0", VA = "0x47ADCE0")]
	public static implicit operator float2x3(int v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010F9")]
	[Address(RVA = "0x47ADD00", Offset = "0x47ADD00", VA = "0x47ADD00")]
	public static implicit operator float2x3(int2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010FA")]
	[Address(RVA = "0x47ADD50", Offset = "0x47ADD50", VA = "0x47ADD50")]
	public static implicit operator float2x3(uint v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010FB")]
	[Address(RVA = "0x47ADD80", Offset = "0x47ADD80", VA = "0x47ADD80")]
	public static implicit operator float2x3(uint2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010FC")]
	[Address(RVA = "0x47ADE00", Offset = "0x47ADE00", VA = "0x47ADE00")]
	public static explicit operator float2x3(double v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010FD")]
	[Address(RVA = "0x47ADE20", Offset = "0x47ADE20", VA = "0x47ADE20")]
	public static explicit operator float2x3(double2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010FE")]
	[Address(RVA = "0x47ADE50", Offset = "0x47ADE50", VA = "0x47ADE50")]
	public static float2x3 operator *(float2x3 lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60010FF")]
	[Address(RVA = "0x47ADE90", Offset = "0x47ADE90", VA = "0x47ADE90")]
	public static float2x3 operator *(float2x3 lhs, float rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001100")]
	[Address(RVA = "0x47ADEC0", Offset = "0x47ADEC0", VA = "0x47ADEC0")]
	public static float2x3 operator *(float lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001101")]
	[Address(RVA = "0x47ADEF0", Offset = "0x47ADEF0", VA = "0x47ADEF0")]
	public static float2x3 operator +(float2x3 lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001102")]
	[Address(RVA = "0x47ADF30", Offset = "0x47ADF30", VA = "0x47ADF30")]
	public static float2x3 operator +(float2x3 lhs, float rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001103")]
	[Address(RVA = "0x47ADF60", Offset = "0x47ADF60", VA = "0x47ADF60")]
	public static float2x3 operator +(float lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001104")]
	[Address(RVA = "0x47ADF90", Offset = "0x47ADF90", VA = "0x47ADF90")]
	public static float2x3 operator -(float2x3 lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001105")]
	[Address(RVA = "0x47ADFD0", Offset = "0x47ADFD0", VA = "0x47ADFD0")]
	public static float2x3 operator -(float2x3 lhs, float rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001106")]
	[Address(RVA = "0x47AE000", Offset = "0x47AE000", VA = "0x47AE000")]
	public static float2x3 operator -(float lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001107")]
	[Address(RVA = "0x47AE040", Offset = "0x47AE040", VA = "0x47AE040")]
	public static float2x3 operator /(float2x3 lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001108")]
	[Address(RVA = "0x47AE080", Offset = "0x47AE080", VA = "0x47AE080")]
	public static float2x3 operator /(float2x3 lhs, float rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001109")]
	[Address(RVA = "0x47AE0B0", Offset = "0x47AE0B0", VA = "0x47AE0B0")]
	public static float2x3 operator /(float lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600110A")]
	[Address(RVA = "0x47AE0F0", Offset = "0x47AE0F0", VA = "0x47AE0F0")]
	public static float2x3 operator %(float2x3 lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600110B")]
	[Address(RVA = "0x47AE1F0", Offset = "0x47AE1F0", VA = "0x47AE1F0")]
	public static float2x3 operator %(float2x3 lhs, float rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600110C")]
	[Address(RVA = "0x47AE2D0", Offset = "0x47AE2D0", VA = "0x47AE2D0")]
	public static float2x3 operator %(float lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600110D")]
	[Address(RVA = "0x47AE3B0", Offset = "0x47AE3B0", VA = "0x47AE3B0")]
	public static float2x3 operator ++(float2x3 val)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600110E")]
	[Address(RVA = "0x47AE3F0", Offset = "0x47AE3F0", VA = "0x47AE3F0")]
	public static float2x3 operator --(float2x3 val)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600110F")]
	[Address(RVA = "0x47AE430", Offset = "0x47AE430", VA = "0x47AE430")]
	public static bool2x3 operator <(float2x3 lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001110")]
	[Address(RVA = "0x47AE4D0", Offset = "0x47AE4D0", VA = "0x47AE4D0")]
	public static bool2x3 operator <(float2x3 lhs, float rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001111")]
	[Address(RVA = "0x47AE550", Offset = "0x47AE550", VA = "0x47AE550")]
	public static bool2x3 operator <(float lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001112")]
	[Address(RVA = "0x47AE5D0", Offset = "0x47AE5D0", VA = "0x47AE5D0")]
	public static bool2x3 operator <=(float2x3 lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001113")]
	[Address(RVA = "0x47AE670", Offset = "0x47AE670", VA = "0x47AE670")]
	public static bool2x3 operator <=(float2x3 lhs, float rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001114")]
	[Address(RVA = "0x47AE6F0", Offset = "0x47AE6F0", VA = "0x47AE6F0")]
	public static bool2x3 operator <=(float lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001115")]
	[Address(RVA = "0x47AE770", Offset = "0x47AE770", VA = "0x47AE770")]
	public static bool2x3 operator >(float2x3 lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001116")]
	[Address(RVA = "0x47AE810", Offset = "0x47AE810", VA = "0x47AE810")]
	public static bool2x3 operator >(float2x3 lhs, float rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001117")]
	[Address(RVA = "0x47AE890", Offset = "0x47AE890", VA = "0x47AE890")]
	public static bool2x3 operator >(float lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001118")]
	[Address(RVA = "0x47AE910", Offset = "0x47AE910", VA = "0x47AE910")]
	public static bool2x3 operator >=(float2x3 lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001119")]
	[Address(RVA = "0x47AE9B0", Offset = "0x47AE9B0", VA = "0x47AE9B0")]
	public static bool2x3 operator >=(float2x3 lhs, float rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600111A")]
	[Address(RVA = "0x47AEA30", Offset = "0x47AEA30", VA = "0x47AEA30")]
	public static bool2x3 operator >=(float lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600111B")]
	[Address(RVA = "0x47AEAB0", Offset = "0x47AEAB0", VA = "0x47AEAB0")]
	public static float2x3 operator -(float2x3 val)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600111C")]
	[Address(RVA = "0x47AEAE0", Offset = "0x47AEAE0", VA = "0x47AEAE0")]
	public static float2x3 operator +(float2x3 val)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600111D")]
	[Address(RVA = "0x47AEB00", Offset = "0x47AEB00", VA = "0x47AEB00")]
	public static bool2x3 operator ==(float2x3 lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600111E")]
	[Address(RVA = "0x47AEBB0", Offset = "0x47AEBB0", VA = "0x47AEBB0")]
	public static bool2x3 operator ==(float2x3 lhs, float rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600111F")]
	[Address(RVA = "0x47AEC40", Offset = "0x47AEC40", VA = "0x47AEC40")]
	public static bool2x3 operator ==(float lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001120")]
	[Address(RVA = "0x47AECD0", Offset = "0x47AECD0", VA = "0x47AECD0")]
	public static bool2x3 operator !=(float2x3 lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001121")]
	[Address(RVA = "0x47AED80", Offset = "0x47AED80", VA = "0x47AED80")]
	public static bool2x3 operator !=(float2x3 lhs, float rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001122")]
	[Address(RVA = "0x47AEE10", Offset = "0x47AEE10", VA = "0x47AEE10")]
	public static bool2x3 operator !=(float lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001124")]
	[Address(RVA = "0x47AEEB0", Offset = "0x47AEEB0", VA = "0x47AEEB0", Slot = "4")]
	public bool Equals(float2x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001125")]
	[Address(RVA = "0x47AEF20", Offset = "0x47AEF20", VA = "0x47AEF20", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001126")]
	[Address(RVA = "0x47AEFE0", Offset = "0x47AEFE0", VA = "0x47AEFE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001127")]
	[Address(RVA = "0x47AF0A0", Offset = "0x47AF0A0", VA = "0x47AF0A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001128")]
	[Address(RVA = "0x47AF310", Offset = "0x47AF310", VA = "0x47AF310", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
