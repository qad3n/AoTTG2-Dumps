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
[Token(Token = "0x20001B3")]
[DebuggerDisplay("{this.GetType().Name} {humanizedData}")]
public struct BitArray64 : IBitArray
{
	[Token(Token = "0x4000867")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private ulong data;

	[Token(Token = "0x170001B1")]
	public uint capacity
	{
		[Token(Token = "0x6000D0F")]
		[Address(RVA = "0x846FF0", Offset = "0x8455F0", VA = "0x180846FF0", Slot = "4")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x170001B2")]
	public bool allFalse
	{
		[Token(Token = "0x6000D10")]
		[Address(RVA = "0x187E270", Offset = "0x187C870", VA = "0x18187E270", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B3")]
	public bool allTrue
	{
		[Token(Token = "0x6000D11")]
		[Address(RVA = "0x2B37A20", Offset = "0x2B36020", VA = "0x182B37A20", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B4")]
	public string humanizedData
	{
		[Token(Token = "0x6000D12")]
		[Address(RVA = "0x2B37A30", Offset = "0x2B36030", VA = "0x182B37A30", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B5")]
	public bool this[uint index]
	{
		[Token(Token = "0x6000D13")]
		[Address(RVA = "0x2B37A00", Offset = "0x2B36000", VA = "0x182B37A00", Slot = "7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D14")]
		[Address(RVA = "0x2B37BA0", Offset = "0x2B361A0", VA = "0x182B37BA0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6000D15")]
	[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
	public BitArray64(ulong initValue)
	{
	}

	[Token(Token = "0x6000D16")]
	[Address(RVA = "0x2B37960", Offset = "0x2B35F60", VA = "0x182B37960")]
	public BitArray64(IEnumerable<uint> bitIndexTrue)
	{
	}

	[Token(Token = "0x6000D17")]
	[Address(RVA = "0x2B37B90", Offset = "0x2B36190", VA = "0x182B37B90")]
	public static BitArray64 operator ~(BitArray64 a)
	{
		return default(BitArray64);
	}

	[Token(Token = "0x6000D18")]
	[Address(RVA = "0x2B37B80", Offset = "0x2B36180", VA = "0x182B37B80")]
	public static BitArray64 operator |(BitArray64 a, BitArray64 b)
	{
		return default(BitArray64);
	}

	[Token(Token = "0x6000D19")]
	[Address(RVA = "0x2B37B70", Offset = "0x2B36170", VA = "0x182B37B70")]
	public static BitArray64 operator &(BitArray64 a, BitArray64 b)
	{
		return default(BitArray64);
	}

	[Token(Token = "0x6000D1A")]
	[Address(RVA = "0x2B37740", Offset = "0x2B35D40", VA = "0x182B37740", Slot = "10")]
	public IBitArray BitAnd(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000D1B")]
	[Address(RVA = "0x2B37820", Offset = "0x2B35E20", VA = "0x182B37820", Slot = "11")]
	public IBitArray BitOr(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000D1C")]
	[Address(RVA = "0x2B377D0", Offset = "0x2B35DD0", VA = "0x182B377D0", Slot = "12")]
	public IBitArray BitNot()
	{
		return null;
	}

	[Token(Token = "0x6000D1D")]
	[Address(RVA = "0x841F20", Offset = "0x840520", VA = "0x180841F20")]
	public static bool operator ==(BitArray64 a, BitArray64 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D1E")]
	[Address(RVA = "0x5286D0", Offset = "0x526CD0", VA = "0x1805286D0")]
	public static bool operator !=(BitArray64 a, BitArray64 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D1F")]
	[Address(RVA = "0x2B378B0", Offset = "0x2B35EB0", VA = "0x182B378B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D20")]
	[Address(RVA = "0x2B37940", Offset = "0x2B35F40", VA = "0x182B37940", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
