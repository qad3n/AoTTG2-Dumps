// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BitArray128
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x200019D")]
[DebuggerDisplay("{this.GetType().Name} {humanizedData}")]
public struct BitArray128 : IBitArray
{
	[Token(Token = "0x4000720")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private ulong data1;

	[Token(Token = "0x4000721")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private ulong data2;

	[Token(Token = "0x1700016B")]
	public uint capacity
	{
		[Token(Token = "0x6000C08")]
		[Address(RVA = "0x4BF1920", Offset = "0x4BF1920", VA = "0x4BF1920", Slot = "4")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x1700016C")]
	public bool allFalse
	{
		[Token(Token = "0x6000C09")]
		[Address(RVA = "0x4BF1930", Offset = "0x4BF1930", VA = "0x4BF1930", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700016D")]
	public bool allTrue
	{
		[Token(Token = "0x6000C0A")]
		[Address(RVA = "0x4BF1950", Offset = "0x4BF1950", VA = "0x4BF1950", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700016E")]
	public string humanizedData
	{
		[Token(Token = "0x6000C0B")]
		[Address(RVA = "0x4BF1970", Offset = "0x4BF1970", VA = "0x4BF1970", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016F")]
	public bool this[uint index]
	{
		[Token(Token = "0x6000C0C")]
		[Address(RVA = "0x4BF1B50", Offset = "0x4BF1B50", VA = "0x4BF1B50", Slot = "7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C0D")]
		[Address(RVA = "0x4BF1B80", Offset = "0x4BF1B80", VA = "0x4BF1B80", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x4BF1C00", Offset = "0x4BF1C00", VA = "0x4BF1C00")]
	public BitArray128(ulong initValue1, ulong initValue2)
	{
	}

	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x4BF1C10", Offset = "0x4BF1C10", VA = "0x4BF1C10")]
	public BitArray128(IEnumerable<uint> bitIndexTrue)
	{
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x4BF1CC0", Offset = "0x4BF1CC0", VA = "0x4BF1CC0")]
	public static BitArray128 operator ~(BitArray128 a)
	{
		return default(BitArray128);
	}

	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x4BF1CD0", Offset = "0x4BF1CD0", VA = "0x4BF1CD0")]
	public static BitArray128 operator |(BitArray128 a, BitArray128 b)
	{
		return default(BitArray128);
	}

	[Token(Token = "0x6000C12")]
	[Address(RVA = "0x4BF1CE0", Offset = "0x4BF1CE0", VA = "0x4BF1CE0")]
	public static BitArray128 operator &(BitArray128 a, BitArray128 b)
	{
		return default(BitArray128);
	}

	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x4BF1CF0", Offset = "0x4BF1CF0", VA = "0x4BF1CF0", Slot = "10")]
	public IBitArray BitAnd(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000C14")]
	[Address(RVA = "0x4BF1D80", Offset = "0x4BF1D80", VA = "0x4BF1D80", Slot = "11")]
	public IBitArray BitOr(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x4BF1E10", Offset = "0x4BF1E10", VA = "0x4BF1E10", Slot = "12")]
	public IBitArray BitNot()
	{
		return null;
	}

	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x4BF1E60", Offset = "0x4BF1E60", VA = "0x4BF1E60")]
	public static bool operator ==(BitArray128 a, BitArray128 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x4BF1E70", Offset = "0x4BF1E70", VA = "0x4BF1E70")]
	public static bool operator !=(BitArray128 a, BitArray128 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C18")]
	[Address(RVA = "0x4BF1E80", Offset = "0x4BF1E80", VA = "0x4BF1E80", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C19")]
	[Address(RVA = "0x4BF1F20", Offset = "0x4BF1F20", VA = "0x4BF1F20", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
