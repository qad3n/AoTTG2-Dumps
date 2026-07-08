using System;
using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x200019B")]
[DebuggerDisplay("{this.GetType().Name} {humanizedData}")]
public struct BitArray32 : IBitArray
{
	[Token(Token = "0x400071E")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private uint data;

	[Token(Token = "0x17000160")]
	public uint capacity
	{
		[Token(Token = "0x6000BE3")]
		[Address(RVA = "0x48CBF10", Offset = "0x48CBF10", VA = "0x48CBF10", Slot = "4")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000161")]
	public bool allFalse
	{
		[Token(Token = "0x6000BE4")]
		[Address(RVA = "0x48CBF20", Offset = "0x48CBF20", VA = "0x48CBF20", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000162")]
	public bool allTrue
	{
		[Token(Token = "0x6000BE5")]
		[Address(RVA = "0x48CBF30", Offset = "0x48CBF30", VA = "0x48CBF30", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000163")]
	private string humanizedVersion
	{
		[Token(Token = "0x6000BE6")]
		[Address(RVA = "0x48CBF40", Offset = "0x48CBF40", VA = "0x48CBF40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000164")]
	public string humanizedData
	{
		[Token(Token = "0x6000BE7")]
		[Address(RVA = "0x48CBF90", Offset = "0x48CBF90", VA = "0x48CBF90", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000165")]
	public bool this[uint index]
	{
		[Token(Token = "0x6000BE8")]
		[Address(RVA = "0x48CC0E0", Offset = "0x48CC0E0", VA = "0x48CC0E0", Slot = "7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000BE9")]
		[Address(RVA = "0x48CC100", Offset = "0x48CC100", VA = "0x48CC100", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x48CC140", Offset = "0x48CC140", VA = "0x48CC140")]
	public BitArray32(uint initValue)
	{
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x48CC150", Offset = "0x48CC150", VA = "0x48CC150")]
	public BitArray32(IEnumerable<uint> bitIndexTrue)
	{
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x48CC1F0", Offset = "0x48CC1F0", VA = "0x48CC1F0", Slot = "10")]
	public IBitArray BitAnd(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x48CC280", Offset = "0x48CC280", VA = "0x48CC280", Slot = "11")]
	public IBitArray BitOr(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x48CC310", Offset = "0x48CC310", VA = "0x48CC310", Slot = "12")]
	public IBitArray BitNot()
	{
		return null;
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x48CC360", Offset = "0x48CC360", VA = "0x48CC360")]
	public static BitArray32 operator ~(BitArray32 a)
	{
		return default(BitArray32);
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x48CC300", Offset = "0x48CC300", VA = "0x48CC300")]
	public static BitArray32 operator |(BitArray32 a, BitArray32 b)
	{
		return default(BitArray32);
	}

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x48CC270", Offset = "0x48CC270", VA = "0x48CC270")]
	public static BitArray32 operator &(BitArray32 a, BitArray32 b)
	{
		return default(BitArray32);
	}

	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x48CC370", Offset = "0x48CC370", VA = "0x48CC370")]
	public static bool operator ==(BitArray32 a, BitArray32 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x48CC380", Offset = "0x48CC380", VA = "0x48CC380")]
	public static bool operator !=(BitArray32 a, BitArray32 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x48CC390", Offset = "0x48CC390", VA = "0x48CC390", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x48CC3F0", Offset = "0x48CC3F0", VA = "0x48CC3F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
