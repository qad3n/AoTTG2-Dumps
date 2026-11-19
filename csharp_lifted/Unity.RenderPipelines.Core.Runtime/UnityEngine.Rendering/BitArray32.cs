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
[Token(Token = "0x20001B2")]
[DebuggerDisplay("{this.GetType().Name} {humanizedData}")]
public struct BitArray32 : IBitArray
{
	[Token(Token = "0x4000866")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private uint data;

	[Token(Token = "0x170001AB")]
	public uint capacity
	{
		[Token(Token = "0x6000CFC")]
		[Address(RVA = "0x6538DD0", Offset = "0x6537DD0", VA = "0x6538DD0", Slot = "4")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x170001AC")]
	public bool allFalse
	{
		[Token(Token = "0x6000CFD")]
		[Address(RVA = "0x6538DE0", Offset = "0x6537DE0", VA = "0x6538DE0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001AD")]
	public bool allTrue
	{
		[Token(Token = "0x6000CFE")]
		[Address(RVA = "0x6538DF0", Offset = "0x6537DF0", VA = "0x6538DF0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001AE")]
	private string humanizedVersion
	{
		[Token(Token = "0x6000CFF")]
		[Address(RVA = "0x6538E00", Offset = "0x6537E00", VA = "0x6538E00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AF")]
	public string humanizedData
	{
		[Token(Token = "0x6000D00")]
		[Address(RVA = "0x6538E50", Offset = "0x6537E50", VA = "0x6538E50", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001B0")]
	public bool this[uint index]
	{
		[Token(Token = "0x6000D01")]
		[Address(RVA = "0x6538FA0", Offset = "0x6537FA0", VA = "0x6538FA0", Slot = "7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D02")]
		[Address(RVA = "0x6538FC0", Offset = "0x6537FC0", VA = "0x6538FC0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6000D03")]
	[Address(RVA = "0x6539000", Offset = "0x6538000", VA = "0x6539000")]
	public BitArray32(uint initValue)
	{
	}

	[Token(Token = "0x6000D04")]
	[Address(RVA = "0x6539010", Offset = "0x6538010", VA = "0x6539010")]
	public BitArray32(IEnumerable<uint> bitIndexTrue)
	{
	}

	[Token(Token = "0x6000D05")]
	[Address(RVA = "0x65390B0", Offset = "0x65380B0", VA = "0x65390B0", Slot = "10")]
	public IBitArray BitAnd(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000D06")]
	[Address(RVA = "0x6539140", Offset = "0x6538140", VA = "0x6539140", Slot = "11")]
	public IBitArray BitOr(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000D07")]
	[Address(RVA = "0x65391D0", Offset = "0x65381D0", VA = "0x65391D0", Slot = "12")]
	public IBitArray BitNot()
	{
		return null;
	}

	[Token(Token = "0x6000D08")]
	[Address(RVA = "0x6539220", Offset = "0x6538220", VA = "0x6539220")]
	public static BitArray32 operator ~(BitArray32 a)
	{
		return default(BitArray32);
	}

	[Token(Token = "0x6000D09")]
	[Address(RVA = "0x65391C0", Offset = "0x65381C0", VA = "0x65391C0")]
	public static BitArray32 operator |(BitArray32 a, BitArray32 b)
	{
		return default(BitArray32);
	}

	[Token(Token = "0x6000D0A")]
	[Address(RVA = "0x6539130", Offset = "0x6538130", VA = "0x6539130")]
	public static BitArray32 operator &(BitArray32 a, BitArray32 b)
	{
		return default(BitArray32);
	}

	[Token(Token = "0x6000D0B")]
	[Address(RVA = "0x6539230", Offset = "0x6538230", VA = "0x6539230")]
	public static bool operator ==(BitArray32 a, BitArray32 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D0C")]
	[Address(RVA = "0x6539240", Offset = "0x6538240", VA = "0x6539240")]
	public static bool operator !=(BitArray32 a, BitArray32 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D0D")]
	[Address(RVA = "0x6539250", Offset = "0x6538250", VA = "0x6539250", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D0E")]
	[Address(RVA = "0x65392B0", Offset = "0x65382B0", VA = "0x65392B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
