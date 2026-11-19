// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BitArray8
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
[Token(Token = "0x20001B0")]
[DebuggerDisplay("{this.GetType().Name} {humanizedData}")]
public struct BitArray8 : IBitArray
{
	[Token(Token = "0x4000864")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private byte data;

	[Token(Token = "0x170001A1")]
	public uint capacity
	{
		[Token(Token = "0x6000CD8")]
		[Address(RVA = "0x6538510", Offset = "0x6537510", VA = "0x6538510", Slot = "4")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x170001A2")]
	public bool allFalse
	{
		[Token(Token = "0x6000CD9")]
		[Address(RVA = "0x6538520", Offset = "0x6537520", VA = "0x6538520", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A3")]
	public bool allTrue
	{
		[Token(Token = "0x6000CDA")]
		[Address(RVA = "0x6538530", Offset = "0x6537530", VA = "0x6538530", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A4")]
	public string humanizedData
	{
		[Token(Token = "0x6000CDB")]
		[Address(RVA = "0x6538540", Offset = "0x6537540", VA = "0x6538540", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A5")]
	public bool this[uint index]
	{
		[Token(Token = "0x6000CDC")]
		[Address(RVA = "0x6538620", Offset = "0x6537620", VA = "0x6538620", Slot = "7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000CDD")]
		[Address(RVA = "0x6538640", Offset = "0x6537640", VA = "0x6538640", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6000CDE")]
	[Address(RVA = "0x6538680", Offset = "0x6537680", VA = "0x6538680")]
	public BitArray8(byte initValue)
	{
	}

	[Token(Token = "0x6000CDF")]
	[Address(RVA = "0x6538690", Offset = "0x6537690", VA = "0x6538690")]
	public BitArray8(IEnumerable<uint> bitIndexTrue)
	{
	}

	[Token(Token = "0x6000CE0")]
	[Address(RVA = "0x6538720", Offset = "0x6537720", VA = "0x6538720")]
	public static BitArray8 operator ~(BitArray8 a)
	{
		return default(BitArray8);
	}

	[Token(Token = "0x6000CE1")]
	[Address(RVA = "0x6538730", Offset = "0x6537730", VA = "0x6538730")]
	public static BitArray8 operator |(BitArray8 a, BitArray8 b)
	{
		return default(BitArray8);
	}

	[Token(Token = "0x6000CE2")]
	[Address(RVA = "0x6538740", Offset = "0x6537740", VA = "0x6538740")]
	public static BitArray8 operator &(BitArray8 a, BitArray8 b)
	{
		return default(BitArray8);
	}

	[Token(Token = "0x6000CE3")]
	[Address(RVA = "0x6538750", Offset = "0x6537750", VA = "0x6538750", Slot = "10")]
	public IBitArray BitAnd(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000CE4")]
	[Address(RVA = "0x65387D0", Offset = "0x65377D0", VA = "0x65387D0", Slot = "11")]
	public IBitArray BitOr(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000CE5")]
	[Address(RVA = "0x6538850", Offset = "0x6537850", VA = "0x6538850", Slot = "12")]
	public IBitArray BitNot()
	{
		return null;
	}

	[Token(Token = "0x6000CE6")]
	[Address(RVA = "0x65388A0", Offset = "0x65378A0", VA = "0x65388A0")]
	public static bool operator ==(BitArray8 a, BitArray8 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CE7")]
	[Address(RVA = "0x65388B0", Offset = "0x65378B0", VA = "0x65388B0")]
	public static bool operator !=(BitArray8 a, BitArray8 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CE8")]
	[Address(RVA = "0x65388C0", Offset = "0x65378C0", VA = "0x65388C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CE9")]
	[Address(RVA = "0x6538920", Offset = "0x6537920", VA = "0x6538920", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
