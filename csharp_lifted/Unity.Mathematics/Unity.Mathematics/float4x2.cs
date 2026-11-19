// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.float4x2
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
[Token(Token = "0x2000035")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float4x2 : IEquatable<float4x2>, IFormattable
{
	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x0")]
	public float4 c0;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x10")]
	public float4 c1;

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float4x2 zero;

	[Token(Token = "0x170005C5")]
	public unsafe ref float4 this[int index]
	{
		[Token(Token = "0x6001567")]
		[Address(RVA = "0x645DA50", Offset = "0x645CA50", VA = "0x645DA50")]
		get
		{
			return ref *(float4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600152E")]
	[Address(RVA = "0x645C0A0", Offset = "0x645B0A0", VA = "0x645C0A0")]
	public float4x2(float4 c0, float4 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600152F")]
	[Address(RVA = "0x645C0B0", Offset = "0x645B0B0", VA = "0x645C0B0")]
	public float4x2(float m00, float m01, float m10, float m11, float m20, float m21, float m30, float m31)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001530")]
	[Address(RVA = "0x645C0E0", Offset = "0x645B0E0", VA = "0x645C0E0")]
	public float4x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001531")]
	[Address(RVA = "0x645C0F0", Offset = "0x645B0F0", VA = "0x645C0F0")]
	public float4x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001532")]
	[Address(RVA = "0x645C120", Offset = "0x645B120", VA = "0x645C120")]
	public float4x2(bool4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001533")]
	[Address(RVA = "0x645C1A0", Offset = "0x645B1A0", VA = "0x645C1A0")]
	public float4x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001534")]
	[Address(RVA = "0x645C1B0", Offset = "0x645B1B0", VA = "0x645C1B0")]
	public float4x2(int4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001535")]
	[Address(RVA = "0x645C220", Offset = "0x645B220", VA = "0x645C220")]
	public float4x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001536")]
	[Address(RVA = "0x645C240", Offset = "0x645B240", VA = "0x645C240")]
	public float4x2(uint4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001537")]
	[Address(RVA = "0x645C2C0", Offset = "0x645B2C0", VA = "0x645C2C0")]
	public float4x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001538")]
	[Address(RVA = "0x645C2D0", Offset = "0x645B2D0", VA = "0x645C2D0")]
	public float4x2(double4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001539")]
	[Address(RVA = "0x645C300", Offset = "0x645B300", VA = "0x645C300")]
	public static implicit operator float4x2(float v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600153A")]
	[Address(RVA = "0x645C310", Offset = "0x645B310", VA = "0x645C310")]
	public static explicit operator float4x2(bool v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600153B")]
	[Address(RVA = "0x645C340", Offset = "0x645B340", VA = "0x645C340")]
	public static explicit operator float4x2(bool4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600153C")]
	[Address(RVA = "0x645C3C0", Offset = "0x645B3C0", VA = "0x645C3C0")]
	public static implicit operator float4x2(int v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600153D")]
	[Address(RVA = "0x645C3E0", Offset = "0x645B3E0", VA = "0x645C3E0")]
	public static implicit operator float4x2(int4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600153E")]
	[Address(RVA = "0x645C450", Offset = "0x645B450", VA = "0x645C450")]
	public static implicit operator float4x2(uint v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600153F")]
	[Address(RVA = "0x645C470", Offset = "0x645B470", VA = "0x645C470")]
	public static implicit operator float4x2(uint4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001540")]
	[Address(RVA = "0x645C4F0", Offset = "0x645B4F0", VA = "0x645C4F0")]
	public static explicit operator float4x2(double v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001541")]
	[Address(RVA = "0x645C510", Offset = "0x645B510", VA = "0x645C510")]
	public static explicit operator float4x2(double4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001542")]
	[Address(RVA = "0x645C540", Offset = "0x645B540", VA = "0x645C540")]
	public static float4x2 operator *(float4x2 lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001543")]
	[Address(RVA = "0x645C590", Offset = "0x645B590", VA = "0x645C590")]
	public static float4x2 operator *(float4x2 lhs, float rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001544")]
	[Address(RVA = "0x645C5D0", Offset = "0x645B5D0", VA = "0x645C5D0")]
	public static float4x2 operator *(float lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001545")]
	[Address(RVA = "0x645C610", Offset = "0x645B610", VA = "0x645C610")]
	public static float4x2 operator +(float4x2 lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001546")]
	[Address(RVA = "0x645C660", Offset = "0x645B660", VA = "0x645C660")]
	public static float4x2 operator +(float4x2 lhs, float rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001547")]
	[Address(RVA = "0x645C6A0", Offset = "0x645B6A0", VA = "0x645C6A0")]
	public static float4x2 operator +(float lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001548")]
	[Address(RVA = "0x645C6E0", Offset = "0x645B6E0", VA = "0x645C6E0")]
	public static float4x2 operator -(float4x2 lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001549")]
	[Address(RVA = "0x645C730", Offset = "0x645B730", VA = "0x645C730")]
	public static float4x2 operator -(float4x2 lhs, float rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600154A")]
	[Address(RVA = "0x645C770", Offset = "0x645B770", VA = "0x645C770")]
	public static float4x2 operator -(float lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600154B")]
	[Address(RVA = "0x645C7C0", Offset = "0x645B7C0", VA = "0x645C7C0")]
	public static float4x2 operator /(float4x2 lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600154C")]
	[Address(RVA = "0x645C810", Offset = "0x645B810", VA = "0x645C810")]
	public static float4x2 operator /(float4x2 lhs, float rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600154D")]
	[Address(RVA = "0x645C850", Offset = "0x645B850", VA = "0x645C850")]
	public static float4x2 operator /(float lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600154E")]
	[Address(RVA = "0x645C8A0", Offset = "0x645B8A0", VA = "0x645C8A0")]
	public static float4x2 operator %(float4x2 lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600154F")]
	[Address(RVA = "0x645CA30", Offset = "0x645BA30", VA = "0x645CA30")]
	public static float4x2 operator %(float4x2 lhs, float rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001550")]
	[Address(RVA = "0x645CB70", Offset = "0x645BB70", VA = "0x645CB70")]
	public static float4x2 operator %(float lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001551")]
	[Address(RVA = "0x645CCB0", Offset = "0x645BCB0", VA = "0x645CCB0")]
	public static float4x2 operator ++(float4x2 val)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001552")]
	[Address(RVA = "0x645CCF0", Offset = "0x645BCF0", VA = "0x645CCF0")]
	public static float4x2 operator --(float4x2 val)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001553")]
	[Address(RVA = "0x645CD30", Offset = "0x645BD30", VA = "0x645CD30")]
	public static bool4x2 operator <(float4x2 lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001554")]
	[Address(RVA = "0x645CDF0", Offset = "0x645BDF0", VA = "0x645CDF0")]
	public static bool4x2 operator <(float4x2 lhs, float rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001555")]
	[Address(RVA = "0x645CE90", Offset = "0x645BE90", VA = "0x645CE90")]
	public static bool4x2 operator <(float lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001556")]
	[Address(RVA = "0x645CF30", Offset = "0x645BF30", VA = "0x645CF30")]
	public static bool4x2 operator <=(float4x2 lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001557")]
	[Address(RVA = "0x645CFF0", Offset = "0x645BFF0", VA = "0x645CFF0")]
	public static bool4x2 operator <=(float4x2 lhs, float rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001558")]
	[Address(RVA = "0x645D090", Offset = "0x645C090", VA = "0x645D090")]
	public static bool4x2 operator <=(float lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001559")]
	[Address(RVA = "0x645D130", Offset = "0x645C130", VA = "0x645D130")]
	public static bool4x2 operator >(float4x2 lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600155A")]
	[Address(RVA = "0x645D1F0", Offset = "0x645C1F0", VA = "0x645D1F0")]
	public static bool4x2 operator >(float4x2 lhs, float rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600155B")]
	[Address(RVA = "0x645D290", Offset = "0x645C290", VA = "0x645D290")]
	public static bool4x2 operator >(float lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600155C")]
	[Address(RVA = "0x645D330", Offset = "0x645C330", VA = "0x645D330")]
	public static bool4x2 operator >=(float4x2 lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600155D")]
	[Address(RVA = "0x645D3F0", Offset = "0x645C3F0", VA = "0x645D3F0")]
	public static bool4x2 operator >=(float4x2 lhs, float rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600155E")]
	[Address(RVA = "0x645D490", Offset = "0x645C490", VA = "0x645D490")]
	public static bool4x2 operator >=(float lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600155F")]
	[Address(RVA = "0x645D530", Offset = "0x645C530", VA = "0x645D530")]
	public static float4x2 operator -(float4x2 val)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001560")]
	[Address(RVA = "0x645D570", Offset = "0x645C570", VA = "0x645D570")]
	public static float4x2 operator +(float4x2 val)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001561")]
	[Address(RVA = "0x645D590", Offset = "0x645C590", VA = "0x645D590")]
	public static bool4x2 operator ==(float4x2 lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001562")]
	[Address(RVA = "0x645D670", Offset = "0x645C670", VA = "0x645D670")]
	public static bool4x2 operator ==(float4x2 lhs, float rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001563")]
	[Address(RVA = "0x645D730", Offset = "0x645C730", VA = "0x645D730")]
	public static bool4x2 operator ==(float lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001564")]
	[Address(RVA = "0x645D7F0", Offset = "0x645C7F0", VA = "0x645D7F0")]
	public static bool4x2 operator !=(float4x2 lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001565")]
	[Address(RVA = "0x645D8D0", Offset = "0x645C8D0", VA = "0x645D8D0")]
	public static bool4x2 operator !=(float4x2 lhs, float rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001566")]
	[Address(RVA = "0x645D990", Offset = "0x645C990", VA = "0x645D990")]
	public static bool4x2 operator !=(float lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001568")]
	[Address(RVA = "0x645DA60", Offset = "0x645CA60", VA = "0x645DA60", Slot = "4")]
	public bool Equals(float4x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001569")]
	[Address(RVA = "0x645DAF0", Offset = "0x645CAF0", VA = "0x645DAF0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600156A")]
	[Address(RVA = "0x645DBE0", Offset = "0x645CBE0", VA = "0x645DBE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600156B")]
	[Address(RVA = "0x645DC70", Offset = "0x645CC70", VA = "0x645DC70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600156C")]
	[Address(RVA = "0x645DFC0", Offset = "0x645CFC0", VA = "0x645DFC0", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
