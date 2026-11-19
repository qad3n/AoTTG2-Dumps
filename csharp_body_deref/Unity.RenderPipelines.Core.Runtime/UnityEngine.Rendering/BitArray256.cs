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
[Token(Token = "0x20001B5")]
[DebuggerDisplay("{this.GetType().Name} {humanizedData}")]
public struct BitArray256 : IBitArray
{
	[Token(Token = "0x400086A")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private ulong data1;

	[Token(Token = "0x400086B")]
	[FieldOffset(Offset = "0x8")]
	[SerializeField]
	private ulong data2;

	[Token(Token = "0x400086C")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	private ulong data3;

	[Token(Token = "0x400086D")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	private ulong data4;

	[Token(Token = "0x170001BB")]
	public uint capacity
	{
		[Token(Token = "0x6000D33")]
		[Address(RVA = "0x6539D30", Offset = "0x6538D30", VA = "0x6539D30", Slot = "4")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x170001BC")]
	public bool allFalse
	{
		[Token(Token = "0x6000D34")]
		[Address(RVA = "0x6539D40", Offset = "0x6538D40", VA = "0x6539D40", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001BD")]
	public bool allTrue
	{
		[Token(Token = "0x6000D35")]
		[Address(RVA = "0x6539D70", Offset = "0x6538D70", VA = "0x6539D70", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001BE")]
	public string humanizedData
	{
		[Token(Token = "0x6000D36")]
		[Address(RVA = "0x6539DA0", Offset = "0x6538DA0", VA = "0x6539DA0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BF")]
	public bool this[uint index]
	{
		[Token(Token = "0x6000D37")]
		[Address(RVA = "0x653A080", Offset = "0x6539080", VA = "0x653A080", Slot = "7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D38")]
		[Address(RVA = "0x653A120", Offset = "0x6539120", VA = "0x653A120", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6000D39")]
	[Address(RVA = "0x653A220", Offset = "0x6539220", VA = "0x653A220")]
	public BitArray256(ulong initValue1, ulong initValue2, ulong initValue3, ulong initValue4)
	{
	}

	[Token(Token = "0x6000D3A")]
	[Address(RVA = "0x653A230", Offset = "0x6539230", VA = "0x653A230")]
	public BitArray256(IEnumerable<uint> bitIndexTrue)
	{
	}

	[Token(Token = "0x6000D3B")]
	[Address(RVA = "0x653A320", Offset = "0x6539320", VA = "0x653A320")]
	public static BitArray256 operator ~(BitArray256 a)
	{
		return default(BitArray256);
	}

	[Token(Token = "0x6000D3C")]
	[Address(RVA = "0x653A350", Offset = "0x6539350", VA = "0x653A350")]
	public static BitArray256 operator |(BitArray256 a, BitArray256 b)
	{
		return default(BitArray256);
	}

	[Token(Token = "0x6000D3D")]
	[Address(RVA = "0x653A370", Offset = "0x6539370", VA = "0x653A370")]
	public static BitArray256 operator &(BitArray256 a, BitArray256 b)
	{
		return default(BitArray256);
	}

	[Token(Token = "0x6000D3E")]
	[Address(RVA = "0x653A390", Offset = "0x6539390", VA = "0x653A390", Slot = "10")]
	public IBitArray BitAnd(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000D3F")]
	[Address(RVA = "0x653A430", Offset = "0x6539430", VA = "0x653A430", Slot = "11")]
	public IBitArray BitOr(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000D40")]
	[Address(RVA = "0x653A4D0", Offset = "0x65394D0", VA = "0x653A4D0", Slot = "12")]
	public IBitArray BitNot()
	{
		return null;
	}

	[Token(Token = "0x6000D41")]
	[Address(RVA = "0x653A530", Offset = "0x6539530", VA = "0x653A530")]
	public static bool operator ==(BitArray256 a, BitArray256 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D42")]
	[Address(RVA = "0x653A570", Offset = "0x6539570", VA = "0x653A570")]
	public static bool operator !=(BitArray256 a, BitArray256 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D43")]
	[Address(RVA = "0x653A5B0", Offset = "0x65395B0", VA = "0x653A5B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D44")]
	[Address(RVA = "0x653A670", Offset = "0x6539670", VA = "0x653A670", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
