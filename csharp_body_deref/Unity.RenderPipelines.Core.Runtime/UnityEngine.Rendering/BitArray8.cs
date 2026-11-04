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
		[Address(RVA = "0x846F50", Offset = "0x845550", VA = "0x180846F50", Slot = "4")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x170001A2")]
	public bool allFalse
	{
		[Token(Token = "0x6000CD9")]
		[Address(RVA = "0x12906C0", Offset = "0x128ECC0", VA = "0x1812906C0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A3")]
	public bool allTrue
	{
		[Token(Token = "0x6000CDA")]
		[Address(RVA = "0x2B37EA0", Offset = "0x2B364A0", VA = "0x182B37EA0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A4")]
	public string humanizedData
	{
		[Token(Token = "0x6000CDB")]
		[Address(RVA = "0x2B37EB0", Offset = "0x2B364B0", VA = "0x182B37EB0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A5")]
	public bool this[uint index]
	{
		[Token(Token = "0x6000CDC")]
		[Address(RVA = "0x2B37E80", Offset = "0x2B36480", VA = "0x182B37E80", Slot = "7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000CDD")]
		[Address(RVA = "0x2B37FE0", Offset = "0x2B365E0", VA = "0x182B37FE0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6000CDE")]
	[Address(RVA = "0xFA0680", Offset = "0xF9EC80", VA = "0x180FA0680")]
	public BitArray8(byte initValue)
	{
	}

	[Token(Token = "0x6000CDF")]
	[Address(RVA = "0x2B37DE0", Offset = "0x2B363E0", VA = "0x182B37DE0")]
	public BitArray8(IEnumerable<uint> bitIndexTrue)
	{
	}

	[Token(Token = "0x6000CE0")]
	[Address(RVA = "0x2B37FD0", Offset = "0x2B365D0", VA = "0x182B37FD0")]
	public static BitArray8 operator ~(BitArray8 a)
	{
		return default(BitArray8);
	}

	[Token(Token = "0x6000CE1")]
	[Address(RVA = "0x2B37FA0", Offset = "0x2B365A0", VA = "0x182B37FA0")]
	public static BitArray8 operator |(BitArray8 a, BitArray8 b)
	{
		return default(BitArray8);
	}

	[Token(Token = "0x6000CE2")]
	[Address(RVA = "0x2B37F90", Offset = "0x2B36590", VA = "0x182B37F90")]
	public static BitArray8 operator &(BitArray8 a, BitArray8 b)
	{
		return default(BitArray8);
	}

	[Token(Token = "0x6000CE3")]
	[Address(RVA = "0x2B37BC0", Offset = "0x2B361C0", VA = "0x182B37BC0", Slot = "10")]
	public IBitArray BitAnd(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000CE4")]
	[Address(RVA = "0x2B37CA0", Offset = "0x2B362A0", VA = "0x182B37CA0", Slot = "11")]
	public IBitArray BitOr(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000CE5")]
	[Address(RVA = "0x2B37C50", Offset = "0x2B36250", VA = "0x182B37C50", Slot = "12")]
	public IBitArray BitNot()
	{
		return null;
	}

	[Token(Token = "0x6000CE6")]
	[Address(RVA = "0x2B37FB0", Offset = "0x2B365B0", VA = "0x182B37FB0")]
	public static bool operator ==(BitArray8 a, BitArray8 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CE7")]
	[Address(RVA = "0x2B37FC0", Offset = "0x2B365C0", VA = "0x182B37FC0")]
	public static bool operator !=(BitArray8 a, BitArray8 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CE8")]
	[Address(RVA = "0x2B37D30", Offset = "0x2B36330", VA = "0x182B37D30", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CE9")]
	[Address(RVA = "0x2B37DC0", Offset = "0x2B363C0", VA = "0x182B37DC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
