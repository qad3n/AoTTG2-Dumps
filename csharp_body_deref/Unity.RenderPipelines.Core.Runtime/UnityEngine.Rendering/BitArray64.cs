// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BitArray64
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
		[Address(RVA = "0x4BF1470", Offset = "0x4BF1470", VA = "0x4BF1470", Slot = "4")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000167")]
	public bool allFalse
	{
		[Token(Token = "0x6000BF7")]
		[Address(RVA = "0x4BF1480", Offset = "0x4BF1480", VA = "0x4BF1480", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000168")]
	public bool allTrue
	{
		[Token(Token = "0x6000BF8")]
		[Address(RVA = "0x4BF1490", Offset = "0x4BF1490", VA = "0x4BF1490", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000169")]
	public string humanizedData
	{
		[Token(Token = "0x6000BF9")]
		[Address(RVA = "0x4BF14A0", Offset = "0x4BF14A0", VA = "0x4BF14A0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016A")]
	public bool this[uint index]
	{
		[Token(Token = "0x6000BFA")]
		[Address(RVA = "0x4BF15F0", Offset = "0x4BF15F0", VA = "0x4BF15F0", Slot = "7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000BFB")]
		[Address(RVA = "0x4BF1610", Offset = "0x4BF1610", VA = "0x4BF1610", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6000BFC")]
	[Address(RVA = "0x4BF1650", Offset = "0x4BF1650", VA = "0x4BF1650")]
	public BitArray64(ulong initValue)
	{
	}

	[Token(Token = "0x6000BFD")]
	[Address(RVA = "0x4BF1660", Offset = "0x4BF1660", VA = "0x4BF1660")]
	public BitArray64(IEnumerable<uint> bitIndexTrue)
	{
	}

	[Token(Token = "0x6000BFE")]
	[Address(RVA = "0x4BF1710", Offset = "0x4BF1710", VA = "0x4BF1710")]
	public static BitArray64 operator ~(BitArray64 a)
	{
		return default(BitArray64);
	}

	[Token(Token = "0x6000BFF")]
	[Address(RVA = "0x4BF1720", Offset = "0x4BF1720", VA = "0x4BF1720")]
	public static BitArray64 operator |(BitArray64 a, BitArray64 b)
	{
		return default(BitArray64);
	}

	[Token(Token = "0x6000C00")]
	[Address(RVA = "0x4BF1730", Offset = "0x4BF1730", VA = "0x4BF1730")]
	public static BitArray64 operator &(BitArray64 a, BitArray64 b)
	{
		return default(BitArray64);
	}

	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x4BF1740", Offset = "0x4BF1740", VA = "0x4BF1740", Slot = "10")]
	public IBitArray BitAnd(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x4BF17C0", Offset = "0x4BF17C0", VA = "0x4BF17C0", Slot = "11")]
	public IBitArray BitOr(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000C03")]
	[Address(RVA = "0x4BF1840", Offset = "0x4BF1840", VA = "0x4BF1840", Slot = "12")]
	public IBitArray BitNot()
	{
		return null;
	}

	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x4BF1890", Offset = "0x4BF1890", VA = "0x4BF1890")]
	public static bool operator ==(BitArray64 a, BitArray64 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C05")]
	[Address(RVA = "0x4BF18A0", Offset = "0x4BF18A0", VA = "0x4BF18A0")]
	public static bool operator !=(BitArray64 a, BitArray64 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C06")]
	[Address(RVA = "0x4BF18B0", Offset = "0x4BF18B0", VA = "0x4BF18B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C07")]
	[Address(RVA = "0x4BF1910", Offset = "0x4BF1910", VA = "0x4BF1910", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
