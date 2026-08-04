// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BitArray32
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
		[Address(RVA = "0x4BF0F80", Offset = "0x4BF0F80", VA = "0x4BF0F80", Slot = "4")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000161")]
	public bool allFalse
	{
		[Token(Token = "0x6000BE4")]
		[Address(RVA = "0x4BF0F90", Offset = "0x4BF0F90", VA = "0x4BF0F90", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000162")]
	public bool allTrue
	{
		[Token(Token = "0x6000BE5")]
		[Address(RVA = "0x4BF0FA0", Offset = "0x4BF0FA0", VA = "0x4BF0FA0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000163")]
	private string humanizedVersion
	{
		[Token(Token = "0x6000BE6")]
		[Address(RVA = "0x4BF0FB0", Offset = "0x4BF0FB0", VA = "0x4BF0FB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000164")]
	public string humanizedData
	{
		[Token(Token = "0x6000BE7")]
		[Address(RVA = "0x4BF1000", Offset = "0x4BF1000", VA = "0x4BF1000", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000165")]
	public bool this[uint index]
	{
		[Token(Token = "0x6000BE8")]
		[Address(RVA = "0x4BF1150", Offset = "0x4BF1150", VA = "0x4BF1150", Slot = "7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000BE9")]
		[Address(RVA = "0x4BF1170", Offset = "0x4BF1170", VA = "0x4BF1170", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6000BEA")]
	[Address(RVA = "0x4BF11B0", Offset = "0x4BF11B0", VA = "0x4BF11B0")]
	public BitArray32(uint initValue)
	{
	}

	[Token(Token = "0x6000BEB")]
	[Address(RVA = "0x4BF11C0", Offset = "0x4BF11C0", VA = "0x4BF11C0")]
	public BitArray32(IEnumerable<uint> bitIndexTrue)
	{
	}

	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x4BF1260", Offset = "0x4BF1260", VA = "0x4BF1260", Slot = "10")]
	public IBitArray BitAnd(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x4BF12F0", Offset = "0x4BF12F0", VA = "0x4BF12F0", Slot = "11")]
	public IBitArray BitOr(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x4BF1380", Offset = "0x4BF1380", VA = "0x4BF1380", Slot = "12")]
	public IBitArray BitNot()
	{
		return null;
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x4BF13D0", Offset = "0x4BF13D0", VA = "0x4BF13D0")]
	public static BitArray32 operator ~(BitArray32 a)
	{
		return default(BitArray32);
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x4BF1370", Offset = "0x4BF1370", VA = "0x4BF1370")]
	public static BitArray32 operator |(BitArray32 a, BitArray32 b)
	{
		return default(BitArray32);
	}

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x4BF12E0", Offset = "0x4BF12E0", VA = "0x4BF12E0")]
	public static BitArray32 operator &(BitArray32 a, BitArray32 b)
	{
		return default(BitArray32);
	}

	[Token(Token = "0x6000BF2")]
	[Address(RVA = "0x4BF13E0", Offset = "0x4BF13E0", VA = "0x4BF13E0")]
	public static bool operator ==(BitArray32 a, BitArray32 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BF3")]
	[Address(RVA = "0x4BF13F0", Offset = "0x4BF13F0", VA = "0x4BF13F0")]
	public static bool operator !=(BitArray32 a, BitArray32 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x4BF1400", Offset = "0x4BF1400", VA = "0x4BF1400", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x4BF1460", Offset = "0x4BF1460", VA = "0x4BF1460", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
