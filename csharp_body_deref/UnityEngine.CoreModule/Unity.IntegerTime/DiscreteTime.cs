// ==================== AoTTG2 cross-reference ====================
// Type: Unity.IntegerTime.DiscreteTime
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.IntegerTime;

[Serializable]
[Token(Token = "0x200001F")]
public struct DiscreteTime : IEquatable<DiscreteTime>, IFormattable, IComparable<DiscreteTime>
{
	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	public long Value;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x0")]
	public static readonly DiscreteTime Zero;

	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x8")]
	public static readonly DiscreteTime MinValue;

	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x10")]
	public static readonly DiscreteTime MaxValue;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x18")]
	private static readonly int TicksPerSecondBits;

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x1C")]
	private static readonly int NonPow2TpsBits;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000055")]
	[Address(RVA = "0x68B37D0", Offset = "0x68B27D0", VA = "0x68B37D0")]
	public DiscreteTime(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000056")]
	[Address(RVA = "0x68B38D0", Offset = "0x68B28D0", VA = "0x68B38D0")]
	public DiscreteTime(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x68B39C0", Offset = "0x68B29C0", VA = "0x68B39C0")]
	private DiscreteTime(long v, int _)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000058")]
	[Address(RVA = "0x68B39D0", Offset = "0x68B29D0", VA = "0x68B39D0")]
	public static DiscreteTime FromTicks(long v)
	{
		return default(DiscreteTime);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000059")]
	[Address(RVA = "0x68B39E0", Offset = "0x68B29E0", VA = "0x68B39E0")]
	public static explicit operator float(DiscreteTime d)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005A")]
	[Address(RVA = "0x68B3A00", Offset = "0x68B2A00", VA = "0x68B3A00")]
	public static explicit operator double(DiscreteTime d)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005B")]
	[Address(RVA = "0x68B3A10", Offset = "0x68B2A10", VA = "0x68B3A10")]
	public static bool operator !=(DiscreteTime lhs, DiscreteTime rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005C")]
	[Address(RVA = "0x68B3A20", Offset = "0x68B2A20", VA = "0x68B3A20")]
	public static bool operator >(DiscreteTime lhs, DiscreteTime rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005D")]
	[Address(RVA = "0x68B3A30", Offset = "0x68B2A30", VA = "0x68B3A30")]
	public static bool operator >=(DiscreteTime lhs, DiscreteTime rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005E")]
	[Address(RVA = "0x68B3A40", Offset = "0x68B2A40", VA = "0x68B3A40")]
	public static DiscreteTime operator +(DiscreteTime lhs, DiscreteTime rhs)
	{
		return default(DiscreteTime);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005F")]
	[Address(RVA = "0x68B3A90", Offset = "0x68B2A90", VA = "0x68B3A90")]
	public static DiscreteTime operator -(DiscreteTime lhs, DiscreteTime rhs)
	{
		return default(DiscreteTime);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000060")]
	[Address(RVA = "0x68B3AE0", Offset = "0x68B2AE0", VA = "0x68B3AE0", Slot = "4")]
	public readonly bool Equals(DiscreteTime rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x68B3AF0", Offset = "0x68B2AF0", VA = "0x68B3AF0", Slot = "0")]
	public override readonly bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000062")]
	[Address(RVA = "0x68B3B90", Offset = "0x68B2B90", VA = "0x68B3B90", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x68B3BA0", Offset = "0x68B2BA0", VA = "0x68B3BA0", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x68B3C10", Offset = "0x68B2C10", VA = "0x68B3C10", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x68B3C90", Offset = "0x68B2C90", VA = "0x68B3C90", Slot = "6")]
	public readonly int CompareTo(DiscreteTime other)
	{
		return default(int);
	}
}
