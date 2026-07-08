using System;
using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x200019C")]
[DebuggerDisplay("{this.GetType().Name} {humanizedData}")]
public struct BitArray64 : IBitArray
{
	[Token(Token = "0x400071F")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private ulong data;

	[Token(Token = "0x17000166")]
	public uint capacity
	{
		[Token(Token = "0x6000BF6")]
		[Address(RVA = "0x48CC400", Offset = "0x48CC400", VA = "0x48CC400", Slot = "4")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000167")]
	public bool allFalse
	{
		[Token(Token = "0x6000BF7")]
		[Address(RVA = "0x48CC410", Offset = "0x48CC410", VA = "0x48CC410", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000168")]
	public bool allTrue
	{
		[Token(Token = "0x6000BF8")]
		[Address(RVA = "0x48CC420", Offset = "0x48CC420", VA = "0x48CC420", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000169")]
	public string humanizedData
	{
		[Token(Token = "0x6000BF9")]
		[Address(RVA = "0x48CC430", Offset = "0x48CC430", VA = "0x48CC430", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016A")]
	public bool this[uint index]
	{
		[Token(Token = "0x6000BFA")]
		[Address(RVA = "0x48CC580", Offset = "0x48CC580", VA = "0x48CC580", Slot = "7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000BFB")]
		[Address(RVA = "0x48CC5A0", Offset = "0x48CC5A0", VA = "0x48CC5A0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x48CC5E0", Offset = "0x48CC5E0", VA = "0x48CC5E0")]
	public BitArray64(ulong initValue)
	{
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x48CC5F0", Offset = "0x48CC5F0", VA = "0x48CC5F0")]
	public BitArray64(IEnumerable<uint> bitIndexTrue)
	{
	}

	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x48CC6A0", Offset = "0x48CC6A0", VA = "0x48CC6A0")]
	public static BitArray64 operator ~(BitArray64 a)
	{
		return default(BitArray64);
	}

	[Token(Token = "0x6000BFF")]
	[Address(RVA = "0x48CC6B0", Offset = "0x48CC6B0", VA = "0x48CC6B0")]
	public static BitArray64 operator |(BitArray64 a, BitArray64 b)
	{
		return default(BitArray64);
	}

	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x48CC6C0", Offset = "0x48CC6C0", VA = "0x48CC6C0")]
	public static BitArray64 operator &(BitArray64 a, BitArray64 b)
	{
		return default(BitArray64);
	}

	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x48CC6D0", Offset = "0x48CC6D0", VA = "0x48CC6D0", Slot = "10")]
	public IBitArray BitAnd(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x48CC750", Offset = "0x48CC750", VA = "0x48CC750", Slot = "11")]
	public IBitArray BitOr(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000C03")]
	[Address(RVA = "0x48CC7D0", Offset = "0x48CC7D0", VA = "0x48CC7D0", Slot = "12")]
	public IBitArray BitNot()
	{
		return null;
	}

	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x48CC820", Offset = "0x48CC820", VA = "0x48CC820")]
	public static bool operator ==(BitArray64 a, BitArray64 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C05")]
	[Address(RVA = "0x48CC830", Offset = "0x48CC830", VA = "0x48CC830")]
	public static bool operator !=(BitArray64 a, BitArray64 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C06")]
	[Address(RVA = "0x48CC840", Offset = "0x48CC840", VA = "0x48CC840", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C07")]
	[Address(RVA = "0x48CC8A0", Offset = "0x48CC8A0", VA = "0x48CC8A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
