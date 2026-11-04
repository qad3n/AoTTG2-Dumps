// ==================== AoTTG2 cross-reference ====================
// Type: Unity.IntegerTime.DiscreteTime
// Update status: NEW in this game update
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
	[Address(RVA = "0x2EC4180", Offset = "0x2EC2780", VA = "0x182EC4180")]
	public DiscreteTime(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000056")]
	[Address(RVA = "0x2EC4110", Offset = "0x2EC2710", VA = "0x182EC4110")]
	public DiscreteTime(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
	private DiscreteTime(long v, int _)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000058")]
	[Address(RVA = "0x1B827F0", Offset = "0x1B80DF0", VA = "0x181B827F0")]
	public static DiscreteTime FromTicks(long v)
	{
		return default(DiscreteTime);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000059")]
	[Address(RVA = "0x2EC4260", Offset = "0x2EC2860", VA = "0x182EC4260")]
	public static explicit operator float(DiscreteTime d)
	{
		return default(float);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005A")]
	[Address(RVA = "0x2EC4240", Offset = "0x2EC2840", VA = "0x182EC4240")]
	public static explicit operator double(DiscreteTime d)
	{
		return default(double);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005B")]
	[Address(RVA = "0x2EC42A0", Offset = "0x2EC28A0", VA = "0x182EC42A0")]
	public static bool operator !=(DiscreteTime lhs, DiscreteTime rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005C")]
	[Address(RVA = "0x2EC4290", Offset = "0x2EC2890", VA = "0x182EC4290")]
	public static bool operator >(DiscreteTime lhs, DiscreteTime rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005D")]
	[Address(RVA = "0x2EC4280", Offset = "0x2EC2880", VA = "0x182EC4280")]
	public static bool operator >=(DiscreteTime lhs, DiscreteTime rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005E")]
	[Address(RVA = "0x2EC41F0", Offset = "0x2EC27F0", VA = "0x182EC41F0")]
	public static DiscreteTime operator +(DiscreteTime lhs, DiscreteTime rhs)
	{
		return default(DiscreteTime);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600005F")]
	[Address(RVA = "0x2EC42B0", Offset = "0x2EC28B0", VA = "0x182EC42B0")]
	public static DiscreteTime operator -(DiscreteTime lhs, DiscreteTime rhs)
	{
		return default(DiscreteTime);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000060")]
	[Address(RVA = "0xD147E0", Offset = "0xD12DE0", VA = "0x180D147E0", Slot = "4")]
	public readonly bool Equals(DiscreteTime rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x2EC3E30", Offset = "0x2EC2430", VA = "0x182EC3E30", Slot = "0")]
	public override readonly bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000062")]
	[Address(RVA = "0x2EC3EC0", Offset = "0x2EC24C0", VA = "0x182EC3EC0", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x2EC3F60", Offset = "0x2EC2560", VA = "0x182EC3F60", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x2EC3ED0", Offset = "0x2EC24D0", VA = "0x182EC3ED0", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x2EC3E20", Offset = "0x2EC2420", VA = "0x182EC3E20", Slot = "6")]
	public readonly int CompareTo(DiscreteTime other)
	{
		return default(int);
	}
}
