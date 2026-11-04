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
[Token(Token = "0x20001B4")]
[DebuggerDisplay("{this.GetType().Name} {humanizedData}")]
public struct BitArray128 : IBitArray
{
	[Token(Token = "0x4000868")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private ulong data1;

	[Token(Token = "0x4000869")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private ulong data2;

	[Token(Token = "0x170001B6")]
	public uint capacity
	{
		[Token(Token = "0x6000D21")]
		[Address(RVA = "0x8471B0", Offset = "0x8457B0", VA = "0x1808471B0", Slot = "4")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x170001B7")]
	public bool allFalse
	{
		[Token(Token = "0x6000D22")]
		[Address(RVA = "0x2B361C0", Offset = "0x2B347C0", VA = "0x182B361C0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B8")]
	public bool allTrue
	{
		[Token(Token = "0x6000D23")]
		[Address(RVA = "0x2B361E0", Offset = "0x2B347E0", VA = "0x182B361E0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B9")]
	public string humanizedData
	{
		[Token(Token = "0x6000D24")]
		[Address(RVA = "0x2B36200", Offset = "0x2B34800", VA = "0x182B36200", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BA")]
	public bool this[uint index]
	{
		[Token(Token = "0x6000D25")]
		[Address(RVA = "0x2B36190", Offset = "0x2B34790", VA = "0x182B36190", Slot = "7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D26")]
		[Address(RVA = "0x2B36440", Offset = "0x2B34A40", VA = "0x182B36440", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6000D27")]
	[Address(RVA = "0xB546F0", Offset = "0xB52CF0", VA = "0x180B546F0")]
	public BitArray128(ulong initValue1, ulong initValue2)
	{
	}

	[Token(Token = "0x6000D28")]
	[Address(RVA = "0x2B360D0", Offset = "0x2B346D0", VA = "0x182B360D0")]
	public BitArray128(IEnumerable<uint> bitIndexTrue)
	{
	}

	[Token(Token = "0x6000D29")]
	[Address(RVA = "0x2B36420", Offset = "0x2B34A20", VA = "0x182B36420")]
	public static BitArray128 operator ~(BitArray128 a)
	{
		return default(BitArray128);
	}

	[Token(Token = "0x6000D2A")]
	[Address(RVA = "0x298E770", Offset = "0x298CD70", VA = "0x18298E770")]
	public static BitArray128 operator |(BitArray128 a, BitArray128 b)
	{
		return default(BitArray128);
	}

	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x298CC80", Offset = "0x298B280", VA = "0x18298CC80")]
	public static BitArray128 operator &(BitArray128 a, BitArray128 b)
	{
		return default(BitArray128);
	}

	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x2B35E40", Offset = "0x2B34440", VA = "0x182B35E40", Slot = "10")]
	public IBitArray BitAnd(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000D2D")]
	[Address(RVA = "0x2B35F40", Offset = "0x2B34540", VA = "0x182B35F40", Slot = "11")]
	public IBitArray BitOr(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000D2E")]
	[Address(RVA = "0x2B35EF0", Offset = "0x2B344F0", VA = "0x182B35EF0", Slot = "12")]
	public IBitArray BitNot()
	{
		return null;
	}

	[Token(Token = "0x6000D2F")]
	[Address(RVA = "0x2B363E0", Offset = "0x2B349E0", VA = "0x182B363E0")]
	public static bool operator ==(BitArray128 a, BitArray128 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D30")]
	[Address(RVA = "0x2B36400", Offset = "0x2B34A00", VA = "0x182B36400")]
	public static bool operator !=(BitArray128 a, BitArray128 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D31")]
	[Address(RVA = "0x2B35FF0", Offset = "0x2B345F0", VA = "0x182B35FF0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D32")]
	[Address(RVA = "0x2B36090", Offset = "0x2B34690", VA = "0x182B36090", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
