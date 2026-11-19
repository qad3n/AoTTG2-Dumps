// ==================== AoTTG2 cross-reference ====================
// Type: Unity.IntegerTime.RationalTime
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Bindings;

namespace Unity.IntegerTime;

[Serializable]
[Token(Token = "0x2000020")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/RationalTime.h")]
public struct RationalTime
{
	[Serializable]
	[Token(Token = "0x2000021")]
	public struct TicksPerSecond : IEquatable<TicksPerSecond>
	{
		[Token(Token = "0x4000026")]
		[FieldOffset(Offset = "0x0")]
		[SerializeField]
		private uint m_Numerator;

		[Token(Token = "0x4000027")]
		[FieldOffset(Offset = "0x4")]
		[SerializeField]
		private uint m_Denominator;

		[Token(Token = "0x4000028")]
		[FieldOffset(Offset = "0x0")]
		public static readonly TicksPerSecond DefaultTicksPerSecond;

		[Token(Token = "0x4000029")]
		[FieldOffset(Offset = "0x8")]
		public static readonly TicksPerSecond TicksPerSecond24;

		[Token(Token = "0x400002A")]
		[FieldOffset(Offset = "0x10")]
		public static readonly TicksPerSecond TicksPerSecond25;

		[Token(Token = "0x400002B")]
		[FieldOffset(Offset = "0x18")]
		public static readonly TicksPerSecond TicksPerSecond30;

		[Token(Token = "0x400002C")]
		[FieldOffset(Offset = "0x20")]
		public static readonly TicksPerSecond TicksPerSecond50;

		[Token(Token = "0x400002D")]
		[FieldOffset(Offset = "0x28")]
		public static readonly TicksPerSecond TicksPerSecond60;

		[Token(Token = "0x400002E")]
		[FieldOffset(Offset = "0x30")]
		public static readonly TicksPerSecond TicksPerSecond120;

		[Token(Token = "0x400002F")]
		[FieldOffset(Offset = "0x38")]
		public static readonly TicksPerSecond TicksPerSecond2397;

		[Token(Token = "0x4000030")]
		[FieldOffset(Offset = "0x40")]
		public static readonly TicksPerSecond TicksPerSecond2425;

		[Token(Token = "0x4000031")]
		[FieldOffset(Offset = "0x48")]
		public static readonly TicksPerSecond TicksPerSecond2997;

		[Token(Token = "0x4000032")]
		[FieldOffset(Offset = "0x50")]
		public static readonly TicksPerSecond TicksPerSecond5994;

		[Token(Token = "0x4000033")]
		[FieldOffset(Offset = "0x58")]
		public static readonly TicksPerSecond TicksPerSecond11988;

		[Token(Token = "0x4000034")]
		[FieldOffset(Offset = "0x60")]
		internal static readonly TicksPerSecond DiscreteTimeRate;

		[Token(Token = "0x6000069")]
		[Address(RVA = "0x68B3F40", Offset = "0x68B2F40", VA = "0x68B3F40")]
		public TicksPerSecond(uint num, uint den = 1u)
		{
		}

		[Token(Token = "0x600006A")]
		[Address(RVA = "0x68B40B0", Offset = "0x68B30B0", VA = "0x68B40B0", Slot = "4")]
		public readonly bool Equals(TicksPerSecond rhs)
		{
			return default(bool);
		}

		[Token(Token = "0x600006B")]
		[Address(RVA = "0x68B40D0", Offset = "0x68B30D0", VA = "0x68B40D0", Slot = "0")]
		public override readonly bool Equals(object rhs)
		{
			return default(bool);
		}

		[Token(Token = "0x600006C")]
		[Address(RVA = "0x68B4150", Offset = "0x68B3150", VA = "0x68B4150", Slot = "2")]
		public override readonly int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x600006D")]
		[Address(RVA = "0x68B4020", Offset = "0x68B3020", VA = "0x68B4020")]
		private static void Simplify(ref uint num, ref uint den)
		{
		}

		[Token(Token = "0x600006E")]
		[Address(RVA = "0x68B41C0", Offset = "0x68B31C0", VA = "0x68B41C0")]
		private static uint Gcd(uint a, uint b)
		{
			return default(uint);
		}
	}

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private long m_Count;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private TicksPerSecond m_TicksPerSecond;

	[Token(Token = "0x17000007")]
	public long Count
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x68B3E00", Offset = "0x68B2E00", VA = "0x68B3E00")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x68B3E10", Offset = "0x68B2E10", VA = "0x68B3E10")]
	public static explicit operator DiscreteTime(RationalTime t)
	{
		return default(DiscreteTime);
	}
}
