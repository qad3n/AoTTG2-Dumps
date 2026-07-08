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
		[Address(RVA = "0x48CC8B0", Offset = "0x48CC8B0", VA = "0x48CC8B0", Slot = "4")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x1700016C")]
	public bool allFalse
	{
		[Token(Token = "0x6000C09")]
		[Address(RVA = "0x48CC8C0", Offset = "0x48CC8C0", VA = "0x48CC8C0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700016D")]
	public bool allTrue
	{
		[Token(Token = "0x6000C0A")]
		[Address(RVA = "0x48CC8E0", Offset = "0x48CC8E0", VA = "0x48CC8E0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700016E")]
	public string humanizedData
	{
		[Token(Token = "0x6000C0B")]
		[Address(RVA = "0x48CC900", Offset = "0x48CC900", VA = "0x48CC900", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016F")]
	public bool this[uint index]
	{
		[Token(Token = "0x6000C0C")]
		[Address(RVA = "0x48CCAE0", Offset = "0x48CCAE0", VA = "0x48CCAE0", Slot = "7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C0D")]
		[Address(RVA = "0x48CCB10", Offset = "0x48CCB10", VA = "0x48CCB10", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6000C0E")]
	[Address(RVA = "0x48CCB90", Offset = "0x48CCB90", VA = "0x48CCB90")]
	public BitArray128(ulong initValue1, ulong initValue2)
	{
	}

	[Token(Token = "0x6000C0F")]
	[Address(RVA = "0x48CCBA0", Offset = "0x48CCBA0", VA = "0x48CCBA0")]
	public BitArray128(IEnumerable<uint> bitIndexTrue)
	{
	}

	[Token(Token = "0x6000C10")]
	[Address(RVA = "0x48CCC50", Offset = "0x48CCC50", VA = "0x48CCC50")]
	public static BitArray128 operator ~(BitArray128 a)
	{
		return default(BitArray128);
	}

	[Token(Token = "0x6000C11")]
	[Address(RVA = "0x48CCC60", Offset = "0x48CCC60", VA = "0x48CCC60")]
	public static BitArray128 operator |(BitArray128 a, BitArray128 b)
	{
		return default(BitArray128);
	}

	[Token(Token = "0x6000C12")]
	[Address(RVA = "0x48CCC70", Offset = "0x48CCC70", VA = "0x48CCC70")]
	public static BitArray128 operator &(BitArray128 a, BitArray128 b)
	{
		return default(BitArray128);
	}

	[Token(Token = "0x6000C13")]
	[Address(RVA = "0x48CCC80", Offset = "0x48CCC80", VA = "0x48CCC80", Slot = "10")]
	public IBitArray BitAnd(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000C14")]
	[Address(RVA = "0x48CCD10", Offset = "0x48CCD10", VA = "0x48CCD10", Slot = "11")]
	public IBitArray BitOr(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x48CCDA0", Offset = "0x48CCDA0", VA = "0x48CCDA0", Slot = "12")]
	public IBitArray BitNot()
	{
		return null;
	}

	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x48CCDF0", Offset = "0x48CCDF0", VA = "0x48CCDF0")]
	public static bool operator ==(BitArray128 a, BitArray128 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x48CCE00", Offset = "0x48CCE00", VA = "0x48CCE00")]
	public static bool operator !=(BitArray128 a, BitArray128 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C18")]
	[Address(RVA = "0x48CCE10", Offset = "0x48CCE10", VA = "0x48CCE10", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C19")]
	[Address(RVA = "0x48CCEB0", Offset = "0x48CCEB0", VA = "0x48CCEB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
