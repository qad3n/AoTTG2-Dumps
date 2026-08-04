// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BitArray256
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
[Token(Token = "0x200019E")]
[DebuggerDisplay("{this.GetType().Name} {humanizedData}")]
public struct BitArray256 : IBitArray
{
	[Token(Token = "0x4000722")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private ulong data1;

	[Token(Token = "0x4000723")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private ulong data2;

	[Token(Token = "0x4000724")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private ulong data3;

	[Token(Token = "0x4000725")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private ulong data4;

	[Token(Token = "0x17000170")]
	public uint capacity
	{
		[Token(Token = "0x6000C1A")]
		[Address(RVA = "0x4BF1F60", Offset = "0x4BF1F60", VA = "0x4BF1F60", Slot = "4")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000171")]
	public bool allFalse
	{
		[Token(Token = "0x6000C1B")]
		[Address(RVA = "0x4BF1F70", Offset = "0x4BF1F70", VA = "0x4BF1F70", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000172")]
	public bool allTrue
	{
		[Token(Token = "0x6000C1C")]
		[Address(RVA = "0x4BF1FA0", Offset = "0x4BF1FA0", VA = "0x4BF1FA0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000173")]
	public string humanizedData
	{
		[Token(Token = "0x6000C1D")]
		[Address(RVA = "0x4BF1FD0", Offset = "0x4BF1FD0", VA = "0x4BF1FD0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000174")]
	public bool this[uint index]
	{
		[Token(Token = "0x6000C1E")]
		[Address(RVA = "0x4BF22B0", Offset = "0x4BF22B0", VA = "0x4BF22B0", Slot = "7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000C1F")]
		[Address(RVA = "0x4BF2360", Offset = "0x4BF2360", VA = "0x4BF2360", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6000C20")]
	[Address(RVA = "0x4BF2430", Offset = "0x4BF2430", VA = "0x4BF2430")]
	public BitArray256(ulong initValue1, ulong initValue2, ulong initValue3, ulong initValue4)
	{
	}

	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x4BF2440", Offset = "0x4BF2440", VA = "0x4BF2440")]
	public BitArray256(IEnumerable<uint> bitIndexTrue)
	{
	}

	[Token(Token = "0x6000C22")]
	[Address(RVA = "0x4BF2530", Offset = "0x4BF2530", VA = "0x4BF2530")]
	public static BitArray256 operator ~(BitArray256 a)
	{
		return default(BitArray256);
	}

	[Token(Token = "0x6000C23")]
	[Address(RVA = "0x4BF2560", Offset = "0x4BF2560", VA = "0x4BF2560")]
	public static BitArray256 operator |(BitArray256 a, BitArray256 b)
	{
		return default(BitArray256);
	}

	[Token(Token = "0x6000C24")]
	[Address(RVA = "0x4BF2580", Offset = "0x4BF2580", VA = "0x4BF2580")]
	public static BitArray256 operator &(BitArray256 a, BitArray256 b)
	{
		return default(BitArray256);
	}

	[Token(Token = "0x6000C25")]
	[Address(RVA = "0x4BF25A0", Offset = "0x4BF25A0", VA = "0x4BF25A0", Slot = "10")]
	public IBitArray BitAnd(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000C26")]
	[Address(RVA = "0x4BF2640", Offset = "0x4BF2640", VA = "0x4BF2640", Slot = "11")]
	public IBitArray BitOr(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000C27")]
	[Address(RVA = "0x4BF26E0", Offset = "0x4BF26E0", VA = "0x4BF26E0", Slot = "12")]
	public IBitArray BitNot()
	{
		return null;
	}

	[Token(Token = "0x6000C28")]
	[Address(RVA = "0x4BF2740", Offset = "0x4BF2740", VA = "0x4BF2740")]
	public static bool operator ==(BitArray256 a, BitArray256 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C29")]
	[Address(RVA = "0x4BF2780", Offset = "0x4BF2780", VA = "0x4BF2780")]
	public static bool operator !=(BitArray256 a, BitArray256 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C2A")]
	[Address(RVA = "0x4BF27C0", Offset = "0x4BF27C0", VA = "0x4BF27C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C2B")]
	[Address(RVA = "0x4BF28E0", Offset = "0x4BF28E0", VA = "0x4BF28E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
