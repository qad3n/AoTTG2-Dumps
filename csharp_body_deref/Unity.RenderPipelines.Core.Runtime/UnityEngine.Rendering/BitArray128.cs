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
		[Address(RVA = "0x6539760", Offset = "0x6538760", VA = "0x6539760", Slot = "4")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x170001B7")]
	public bool allFalse
	{
		[Token(Token = "0x6000D22")]
		[Address(RVA = "0x6539770", Offset = "0x6538770", VA = "0x6539770", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B8")]
	public bool allTrue
	{
		[Token(Token = "0x6000D23")]
		[Address(RVA = "0x6539790", Offset = "0x6538790", VA = "0x6539790", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B9")]
	public string humanizedData
	{
		[Token(Token = "0x6000D24")]
		[Address(RVA = "0x65397B0", Offset = "0x65387B0", VA = "0x65397B0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BA")]
	public bool this[uint index]
	{
		[Token(Token = "0x6000D25")]
		[Address(RVA = "0x6539990", Offset = "0x6538990", VA = "0x6539990", Slot = "7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D26")]
		[Address(RVA = "0x65399B0", Offset = "0x65389B0", VA = "0x65399B0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6000D27")]
	[Address(RVA = "0x65399F0", Offset = "0x65389F0", VA = "0x65399F0")]
	public BitArray128(ulong initValue1, ulong initValue2)
	{
	}

	[Token(Token = "0x6000D28")]
	[Address(RVA = "0x6539A00", Offset = "0x6538A00", VA = "0x6539A00")]
	public BitArray128(IEnumerable<uint> bitIndexTrue)
	{
	}

	[Token(Token = "0x6000D29")]
	[Address(RVA = "0x6539AB0", Offset = "0x6538AB0", VA = "0x6539AB0")]
	public static BitArray128 operator ~(BitArray128 a)
	{
		return default(BitArray128);
	}

	[Token(Token = "0x6000D2A")]
	[Address(RVA = "0x6539AC0", Offset = "0x6538AC0", VA = "0x6539AC0")]
	public static BitArray128 operator |(BitArray128 a, BitArray128 b)
	{
		return default(BitArray128);
	}

	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x6539AD0", Offset = "0x6538AD0", VA = "0x6539AD0")]
	public static BitArray128 operator &(BitArray128 a, BitArray128 b)
	{
		return default(BitArray128);
	}

	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x6539AE0", Offset = "0x6538AE0", VA = "0x6539AE0", Slot = "10")]
	public IBitArray BitAnd(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000D2D")]
	[Address(RVA = "0x6539B70", Offset = "0x6538B70", VA = "0x6539B70", Slot = "11")]
	public IBitArray BitOr(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000D2E")]
	[Address(RVA = "0x6539C00", Offset = "0x6538C00", VA = "0x6539C00", Slot = "12")]
	public IBitArray BitNot()
	{
		return null;
	}

	[Token(Token = "0x6000D2F")]
	[Address(RVA = "0x6539C50", Offset = "0x6538C50", VA = "0x6539C50")]
	public static bool operator ==(BitArray128 a, BitArray128 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D30")]
	[Address(RVA = "0x6539C60", Offset = "0x6538C60", VA = "0x6539C60")]
	public static bool operator !=(BitArray128 a, BitArray128 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D31")]
	[Address(RVA = "0x6539C70", Offset = "0x6538C70", VA = "0x6539C70", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D32")]
	[Address(RVA = "0x6539CF0", Offset = "0x6538CF0", VA = "0x6539CF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
