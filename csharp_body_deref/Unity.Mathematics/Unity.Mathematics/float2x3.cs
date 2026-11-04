// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Mathematics.float2x3
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
[Token(Token = "0x200002C")]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct float2x3 : IEquatable<float2x3>, IFormattable
{
	[Token(Token = "0x40000AA")]
	[FieldOffset(Offset = "0x0")]
	public float2 c0;

	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x8")]
	public float2 c1;

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x10")]
	public float2 c2;

	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float2x3 zero;

	[Token(Token = "0x170003F9")]
	public unsafe ref float2 this[int index]
	{
		[Token(Token = "0x600116E")]
		[Address(RVA = "0x841B10", Offset = "0x840110", VA = "0x180841B10")]
		get
		{
			return ref *(float2*)null;
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001135")]
	[Address(RVA = "0x1A687C0", Offset = "0x1A66DC0", VA = "0x181A687C0")]
	public float2x3(float2 c0, float2 c1, float2 c2)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001136")]
	[Address(RVA = "0x2A78160", Offset = "0x2A76760", VA = "0x182A78160")]
	public float2x3(float m00, float m01, float m02, float m10, float m11, float m12)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001137")]
	[Address(RVA = "0x2A781E0", Offset = "0x2A767E0", VA = "0x182A781E0")]
	public float2x3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001138")]
	[Address(RVA = "0x2A78200", Offset = "0x2A76800", VA = "0x182A78200")]
	public float2x3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001139")]
	[Address(RVA = "0x2A78230", Offset = "0x2A76830", VA = "0x182A78230")]
	public float2x3(bool2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600113A")]
	[Address(RVA = "0x2A78340", Offset = "0x2A76940", VA = "0x182A78340")]
	public float2x3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600113B")]
	[Address(RVA = "0x2A78100", Offset = "0x2A76700", VA = "0x182A78100")]
	public float2x3(int2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600113C")]
	[Address(RVA = "0x2A782C0", Offset = "0x2A768C0", VA = "0x182A782C0")]
	public float2x3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600113D")]
	[Address(RVA = "0x2A78070", Offset = "0x2A76670", VA = "0x182A78070")]
	public float2x3(uint2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600113E")]
	[Address(RVA = "0x2A78190", Offset = "0x2A76790", VA = "0x182A78190")]
	public float2x3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600113F")]
	[Address(RVA = "0x2A78010", Offset = "0x2A76610", VA = "0x182A78010")]
	public float2x3(double2x3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001140")]
	[Address(RVA = "0x29DF700", Offset = "0x29DDD00", VA = "0x1829DF700")]
	public static implicit operator float2x3(float v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001141")]
	[Address(RVA = "0x29DF7F0", Offset = "0x29DDDF0", VA = "0x1829DF7F0")]
	public static explicit operator float2x3(bool v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001142")]
	[Address(RVA = "0x29DF8D0", Offset = "0x29DDED0", VA = "0x1829DF8D0")]
	public static explicit operator float2x3(bool2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001143")]
	[Address(RVA = "0x29DFA60", Offset = "0x29DE060", VA = "0x1829DFA60")]
	public static implicit operator float2x3(int v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001144")]
	[Address(RVA = "0x29DFAA0", Offset = "0x29DE0A0", VA = "0x1829DFAA0")]
	public static implicit operator float2x3(int2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001145")]
	[Address(RVA = "0x29DF770", Offset = "0x29DDD70", VA = "0x1829DF770")]
	public static implicit operator float2x3(uint v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001146")]
	[Address(RVA = "0x29DF990", Offset = "0x29DDF90", VA = "0x1829DF990")]
	public static implicit operator float2x3(uint2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001147")]
	[Address(RVA = "0x29DF720", Offset = "0x29DDD20", VA = "0x1829DF720")]
	public static explicit operator float2x3(double v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001148")]
	[Address(RVA = "0x29DF830", Offset = "0x29DDE30", VA = "0x1829DF830")]
	public static explicit operator float2x3(double2x3 v)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001149")]
	[Address(RVA = "0x2A791F0", Offset = "0x2A777F0", VA = "0x182A791F0")]
	public static float2x3 operator *(float2x3 lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600114A")]
	[Address(RVA = "0x2A791C0", Offset = "0x2A777C0", VA = "0x182A791C0")]
	public static float2x3 operator *(float2x3 lhs, float rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600114B")]
	[Address(RVA = "0x2A79260", Offset = "0x2A77860", VA = "0x182A79260")]
	public static float2x3 operator *(float lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600114C")]
	[Address(RVA = "0x2A783B0", Offset = "0x2A769B0", VA = "0x182A783B0")]
	public static float2x3 operator +(float2x3 lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600114D")]
	[Address(RVA = "0x2A78420", Offset = "0x2A76A20", VA = "0x182A78420")]
	public static float2x3 operator +(float2x3 lhs, float rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600114E")]
	[Address(RVA = "0x2A78380", Offset = "0x2A76980", VA = "0x182A78380")]
	public static float2x3 operator +(float lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600114F")]
	[Address(RVA = "0x2A79290", Offset = "0x2A77890", VA = "0x182A79290")]
	public static float2x3 operator -(float2x3 lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001150")]
	[Address(RVA = "0x2A79300", Offset = "0x2A77900", VA = "0x182A79300")]
	public static float2x3 operator -(float2x3 lhs, float rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001151")]
	[Address(RVA = "0x2A79330", Offset = "0x2A77930", VA = "0x182A79330")]
	public static float2x3 operator -(float lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001152")]
	[Address(RVA = "0x2A78560", Offset = "0x2A76B60", VA = "0x182A78560")]
	public static float2x3 operator /(float2x3 lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001153")]
	[Address(RVA = "0x2A784D0", Offset = "0x2A76AD0", VA = "0x182A784D0")]
	public static float2x3 operator /(float2x3 lhs, float rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001154")]
	[Address(RVA = "0x2A78500", Offset = "0x2A76B00", VA = "0x182A78500")]
	public static float2x3 operator /(float lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001155")]
	[Address(RVA = "0x2A78FD0", Offset = "0x2A775D0", VA = "0x182A78FD0")]
	public static float2x3 operator %(float2x3 lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001156")]
	[Address(RVA = "0x2A79120", Offset = "0x2A77720", VA = "0x182A79120")]
	public static float2x3 operator %(float2x3 lhs, float rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001157")]
	[Address(RVA = "0x2A79080", Offset = "0x2A77680", VA = "0x182A79080")]
	public static float2x3 operator %(float lhs, float2x3 rhs)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001158")]
	[Address(RVA = "0x2A78A80", Offset = "0x2A77080", VA = "0x182A78A80")]
	public static float2x3 operator ++(float2x3 val)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001159")]
	[Address(RVA = "0x2A78450", Offset = "0x2A76A50", VA = "0x182A78450")]
	public static float2x3 operator --(float2x3 val)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600115A")]
	[Address(RVA = "0x2A78ED0", Offset = "0x2A774D0", VA = "0x182A78ED0")]
	public static bool2x3 operator <(float2x3 lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600115B")]
	[Address(RVA = "0x2A78E70", Offset = "0x2A77470", VA = "0x182A78E70")]
	public static bool2x3 operator <(float2x3 lhs, float rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600115C")]
	[Address(RVA = "0x2A78F50", Offset = "0x2A77550", VA = "0x182A78F50")]
	public static bool2x3 operator <(float lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600115D")]
	[Address(RVA = "0x2A78D70", Offset = "0x2A77370", VA = "0x182A78D70")]
	public static bool2x3 operator <=(float2x3 lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600115E")]
	[Address(RVA = "0x2A78D10", Offset = "0x2A77310", VA = "0x182A78D10")]
	public static bool2x3 operator <=(float2x3 lhs, float rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600115F")]
	[Address(RVA = "0x2A78DF0", Offset = "0x2A773F0", VA = "0x182A78DF0")]
	public static bool2x3 operator <=(float lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001160")]
	[Address(RVA = "0x2A78990", Offset = "0x2A76F90", VA = "0x182A78990")]
	public static bool2x3 operator >(float2x3 lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001161")]
	[Address(RVA = "0x2A78A10", Offset = "0x2A77010", VA = "0x182A78A10")]
	public static bool2x3 operator >(float2x3 lhs, float rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001162")]
	[Address(RVA = "0x2A78930", Offset = "0x2A76F30", VA = "0x182A78930")]
	public static bool2x3 operator >(float lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001163")]
	[Address(RVA = "0x2A788B0", Offset = "0x2A76EB0", VA = "0x182A788B0")]
	public static bool2x3 operator >=(float2x3 lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001164")]
	[Address(RVA = "0x2A787E0", Offset = "0x2A76DE0", VA = "0x182A787E0")]
	public static bool2x3 operator >=(float2x3 lhs, float rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001165")]
	[Address(RVA = "0x2A78850", Offset = "0x2A76E50", VA = "0x182A78850")]
	public static bool2x3 operator >=(float lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001166")]
	[Address(RVA = "0x2A79390", Offset = "0x2A77990", VA = "0x182A79390")]
	public static float2x3 operator -(float2x3 val)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001167")]
	[Address(RVA = "0x2A793C0", Offset = "0x2A779C0", VA = "0x182A793C0")]
	public static float2x3 operator +(float2x3 val)
	{
		return default(float2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001168")]
	[Address(RVA = "0x2A78720", Offset = "0x2A76D20", VA = "0x182A78720")]
	public static bool2x3 operator ==(float2x3 lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001169")]
	[Address(RVA = "0x2A785D0", Offset = "0x2A76BD0", VA = "0x182A785D0")]
	public static bool2x3 operator ==(float2x3 lhs, float rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600116A")]
	[Address(RVA = "0x2A78680", Offset = "0x2A76C80", VA = "0x182A78680")]
	public static bool2x3 operator ==(float lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600116B")]
	[Address(RVA = "0x2A78BB0", Offset = "0x2A771B0", VA = "0x182A78BB0")]
	public static bool2x3 operator !=(float2x3 lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600116C")]
	[Address(RVA = "0x2A78B00", Offset = "0x2A77100", VA = "0x182A78B00")]
	public static bool2x3 operator !=(float2x3 lhs, float rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600116D")]
	[Address(RVA = "0x2A78C70", Offset = "0x2A77270", VA = "0x182A78C70")]
	public static bool2x3 operator !=(float lhs, float2x3 rhs)
	{
		return default(bool2x3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600116F")]
	[Address(RVA = "0x2A3A030", Offset = "0x2A38630", VA = "0x182A3A030", Slot = "4")]
	public bool Equals(float2x3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6001170")]
	[Address(RVA = "0x2A77930", Offset = "0x2A75F30", VA = "0x182A77930", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001171")]
	[Address(RVA = "0x2A77A00", Offset = "0x2A76000", VA = "0x182A77A00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001172")]
	[Address(RVA = "0x2A77A80", Offset = "0x2A76080", VA = "0x182A77A80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001173")]
	[Address(RVA = "0x2A77D60", Offset = "0x2A76360", VA = "0x182A77D60", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
