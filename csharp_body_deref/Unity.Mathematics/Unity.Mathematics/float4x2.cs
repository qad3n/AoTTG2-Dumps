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
		[Address(RVA = "0x841B00", Offset = "0x840100", VA = "0x180841B00")]
		get
		{
			return ref *(float4*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600152E")]
	[Address(RVA = "0x547570", Offset = "0x545B70", VA = "0x180547570")]
	public float4x2(float4 c0, float4 c1)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600152F")]
	[Address(RVA = "0x2A8A010", Offset = "0x2A88610", VA = "0x182A8A010")]
	public float4x2(float m00, float m01, float m10, float m11, float m20, float m21, float m30, float m31)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001530")]
	[Address(RVA = "0x2A79DD0", Offset = "0x2A783D0", VA = "0x182A79DD0")]
	public float4x2(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001531")]
	[Address(RVA = "0x2A8A060", Offset = "0x2A88660", VA = "0x182A8A060")]
	public float4x2(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001532")]
	[Address(RVA = "0x29C7D10", Offset = "0x29C6310", VA = "0x1829C7D10")]
	public float4x2(bool4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001533")]
	[Address(RVA = "0x2A89ED0", Offset = "0x2A884D0", VA = "0x182A89ED0")]
	public float4x2(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001534")]
	[Address(RVA = "0x2A89F50", Offset = "0x2A88550", VA = "0x182A89F50")]
	public float4x2(int4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001535")]
	[Address(RVA = "0x2A89F70", Offset = "0x2A88570", VA = "0x182A89F70")]
	public float4x2(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001536")]
	[Address(RVA = "0x2A89E30", Offset = "0x2A88430", VA = "0x182A89E30")]
	public float4x2(uint4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001537")]
	[Address(RVA = "0x2A89EF0", Offset = "0x2A884F0", VA = "0x182A89EF0")]
	public float4x2(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001538")]
	[Address(RVA = "0x2A79D40", Offset = "0x2A78340", VA = "0x182A79D40")]
	public float4x2(double4x2 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001539")]
	[Address(RVA = "0x29DFE30", Offset = "0x29DE430", VA = "0x1829DFE30")]
	public static implicit operator float4x2(float v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600153A")]
	[Address(RVA = "0x29E1D70", Offset = "0x29E0370", VA = "0x1829E1D70")]
	public static explicit operator float4x2(bool v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600153B")]
	[Address(RVA = "0x2A8A620", Offset = "0x2A88C20", VA = "0x182A8A620")]
	public static explicit operator float4x2(bool4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600153C")]
	[Address(RVA = "0x29E1C90", Offset = "0x29E0290", VA = "0x1829E1C90")]
	public static implicit operator float4x2(int v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600153D")]
	[Address(RVA = "0x29E1BA0", Offset = "0x29E01A0", VA = "0x1829E1BA0")]
	public static implicit operator float4x2(int4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600153E")]
	[Address(RVA = "0x29E1CD0", Offset = "0x29E02D0", VA = "0x1829E1CD0")]
	public static implicit operator float4x2(uint v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600153F")]
	[Address(RVA = "0x29E1A40", Offset = "0x29E0040", VA = "0x1829E1A40")]
	public static implicit operator float4x2(uint4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001540")]
	[Address(RVA = "0x29E19D0", Offset = "0x29DFFD0", VA = "0x1829E19D0")]
	public static explicit operator float4x2(double v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001541")]
	[Address(RVA = "0x29E1B10", Offset = "0x29E0110", VA = "0x1829E1B10")]
	public static explicit operator float4x2(double4x2 v)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001542")]
	[Address(RVA = "0x2A8B200", Offset = "0x2A89800", VA = "0x182A8B200")]
	public static float4x2 operator *(float4x2 lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001543")]
	[Address(RVA = "0x2A8B300", Offset = "0x2A89900", VA = "0x182A8B300")]
	public static float4x2 operator *(float4x2 lhs, float rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001544")]
	[Address(RVA = "0x2A8B2A0", Offset = "0x2A898A0", VA = "0x182A8B2A0")]
	public static float4x2 operator *(float lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001545")]
	[Address(RVA = "0x2A8A160", Offset = "0x2A88760", VA = "0x182A8A160")]
	public static float4x2 operator +(float4x2 lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001546")]
	[Address(RVA = "0x2A8A0A0", Offset = "0x2A886A0", VA = "0x182A8A0A0")]
	public static float4x2 operator +(float4x2 lhs, float rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001547")]
	[Address(RVA = "0x2A8A100", Offset = "0x2A88700", VA = "0x182A8A100")]
	public static float4x2 operator +(float lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001548")]
	[Address(RVA = "0x2A8B360", Offset = "0x2A89960", VA = "0x182A8B360")]
	public static float4x2 operator -(float4x2 lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001549")]
	[Address(RVA = "0x2A8B490", Offset = "0x2A89A90", VA = "0x182A8B490")]
	public static float4x2 operator -(float4x2 lhs, float rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600154A")]
	[Address(RVA = "0x2A8B400", Offset = "0x2A89A00", VA = "0x182A8B400")]
	public static float4x2 operator -(float lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600154B")]
	[Address(RVA = "0x2A8A2E0", Offset = "0x2A888E0", VA = "0x182A8A2E0")]
	public static float4x2 operator /(float4x2 lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600154C")]
	[Address(RVA = "0x2A8A380", Offset = "0x2A88980", VA = "0x182A8A380")]
	public static float4x2 operator /(float4x2 lhs, float rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600154D")]
	[Address(RVA = "0x2A8A250", Offset = "0x2A88850", VA = "0x182A8A250")]
	public static float4x2 operator /(float lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600154E")]
	[Address(RVA = "0x2A8AFE0", Offset = "0x2A895E0", VA = "0x182A8AFE0")]
	public static float4x2 operator %(float4x2 lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600154F")]
	[Address(RVA = "0x2A8AED0", Offset = "0x2A894D0", VA = "0x182A8AED0")]
	public static float4x2 operator %(float4x2 lhs, float rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001550")]
	[Address(RVA = "0x2A8B0F0", Offset = "0x2A896F0", VA = "0x182A8B0F0")]
	public static float4x2 operator %(float lhs, float4x2 rhs)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001551")]
	[Address(RVA = "0x2A8A930", Offset = "0x2A88F30", VA = "0x182A8A930")]
	public static float4x2 operator ++(float4x2 val)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001552")]
	[Address(RVA = "0x2A8A200", Offset = "0x2A88800", VA = "0x182A8A200")]
	public static float4x2 operator --(float4x2 val)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001553")]
	[Address(RVA = "0x2A8AD60", Offset = "0x2A89360", VA = "0x182A8AD60")]
	public static bool4x2 operator <(float4x2 lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001554")]
	[Address(RVA = "0x2A8ADF0", Offset = "0x2A893F0", VA = "0x182A8ADF0")]
	public static bool4x2 operator <(float4x2 lhs, float rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001555")]
	[Address(RVA = "0x2A8AE50", Offset = "0x2A89450", VA = "0x182A8AE50")]
	public static bool4x2 operator <(float lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001556")]
	[Address(RVA = "0x2A8AC70", Offset = "0x2A89270", VA = "0x182A8AC70")]
	public static bool4x2 operator <=(float4x2 lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001557")]
	[Address(RVA = "0x2A8AD00", Offset = "0x2A89300", VA = "0x182A8AD00")]
	public static bool4x2 operator <=(float4x2 lhs, float rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001558")]
	[Address(RVA = "0x2A8ABF0", Offset = "0x2A891F0", VA = "0x182A8ABF0")]
	public static bool4x2 operator <=(float lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001559")]
	[Address(RVA = "0x2A8A820", Offset = "0x2A88E20", VA = "0x182A8A820")]
	public static bool4x2 operator >(float4x2 lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600155A")]
	[Address(RVA = "0x2A8A8B0", Offset = "0x2A88EB0", VA = "0x182A8A8B0")]
	public static bool4x2 operator >(float4x2 lhs, float rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600155B")]
	[Address(RVA = "0x2A8A7C0", Offset = "0x2A88DC0", VA = "0x182A8A7C0")]
	public static bool4x2 operator >(float lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600155C")]
	[Address(RVA = "0x2A8A730", Offset = "0x2A88D30", VA = "0x182A8A730")]
	public static bool4x2 operator >=(float4x2 lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600155D")]
	[Address(RVA = "0x2A8A6B0", Offset = "0x2A88CB0", VA = "0x182A8A6B0")]
	public static bool4x2 operator >=(float4x2 lhs, float rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600155E")]
	[Address(RVA = "0x2A8A650", Offset = "0x2A88C50", VA = "0x182A8A650")]
	public static bool4x2 operator >=(float lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600155F")]
	[Address(RVA = "0x2A8B4C0", Offset = "0x2A89AC0", VA = "0x182A8B4C0")]
	public static float4x2 operator -(float4x2 val)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001560")]
	[Address(RVA = "0x2A8B4F0", Offset = "0x2A89AF0", VA = "0x182A8B4F0")]
	public static float4x2 operator +(float4x2 val)
	{
		return default(float4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001561")]
	[Address(RVA = "0x2A8A540", Offset = "0x2A88B40", VA = "0x182A8A540")]
	public static bool4x2 operator ==(float4x2 lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001562")]
	[Address(RVA = "0x2A8A470", Offset = "0x2A88A70", VA = "0x182A8A470")]
	public static bool4x2 operator ==(float4x2 lhs, float rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001563")]
	[Address(RVA = "0x2A8A3B0", Offset = "0x2A889B0", VA = "0x182A8A3B0")]
	public static bool4x2 operator ==(float lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001564")]
	[Address(RVA = "0x2A8AB10", Offset = "0x2A89110", VA = "0x182A8AB10")]
	public static bool4x2 operator !=(float4x2 lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001565")]
	[Address(RVA = "0x2A8A980", Offset = "0x2A88F80", VA = "0x182A8A980")]
	public static bool4x2 operator !=(float4x2 lhs, float rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001566")]
	[Address(RVA = "0x2A8AA50", Offset = "0x2A89050", VA = "0x182A8AA50")]
	public static bool4x2 operator !=(float lhs, float4x2 rhs)
	{
		return default(bool4x2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001568")]
	[Address(RVA = "0x2A793F0", Offset = "0x2A779F0", VA = "0x182A793F0", Slot = "4")]
	public bool Equals(float4x2 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001569")]
	[Address(RVA = "0x2A89590", Offset = "0x2A87B90", VA = "0x182A89590", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600156A")]
	[Address(RVA = "0x2A89690", Offset = "0x2A87C90", VA = "0x182A89690", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600156B")]
	[Address(RVA = "0x2A89A80", Offset = "0x2A88080", VA = "0x182A89A80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600156C")]
	[Address(RVA = "0x2A89720", Offset = "0x2A87D20", VA = "0x182A89720", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
