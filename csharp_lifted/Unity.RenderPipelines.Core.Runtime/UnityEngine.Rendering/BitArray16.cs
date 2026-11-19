// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BitArray16
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
[Token(Token = "0x20001B1")]
[DebuggerDisplay("{this.GetType().Name} {humanizedData}")]
public struct BitArray16 : IBitArray
{
	[Token(Token = "0x4000865")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private ushort data;

	[Token(Token = "0x170001A6")]
	public uint capacity
	{
		[Token(Token = "0x6000CEA")]
		[Address(RVA = "0x6538930", Offset = "0x6537930", VA = "0x6538930", Slot = "4")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x170001A7")]
	public bool allFalse
	{
		[Token(Token = "0x6000CEB")]
		[Address(RVA = "0x6538940", Offset = "0x6537940", VA = "0x6538940", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A8")]
	public bool allTrue
	{
		[Token(Token = "0x6000CEC")]
		[Address(RVA = "0x6538950", Offset = "0x6537950", VA = "0x6538950", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A9")]
	public string humanizedData
	{
		[Token(Token = "0x6000CED")]
		[Address(RVA = "0x6538960", Offset = "0x6537960", VA = "0x6538960", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AA")]
	public bool this[uint index]
	{
		[Token(Token = "0x6000CEE")]
		[Address(RVA = "0x6538AB0", Offset = "0x6537AB0", VA = "0x6538AB0", Slot = "7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000CEF")]
		[Address(RVA = "0x6538AD0", Offset = "0x6537AD0", VA = "0x6538AD0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6000CF0")]
	[Address(RVA = "0x6538B10", Offset = "0x6537B10", VA = "0x6538B10")]
	public BitArray16(ushort initValue)
	{
	}

	[Token(Token = "0x6000CF1")]
	[Address(RVA = "0x6538B20", Offset = "0x6537B20", VA = "0x6538B20")]
	public BitArray16(IEnumerable<uint> bitIndexTrue)
	{
	}

	[Token(Token = "0x6000CF2")]
	[Address(RVA = "0x6538BC0", Offset = "0x6537BC0", VA = "0x6538BC0")]
	public static BitArray16 operator ~(BitArray16 a)
	{
		return default(BitArray16);
	}

	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x6538BD0", Offset = "0x6537BD0", VA = "0x6538BD0")]
	public static BitArray16 operator |(BitArray16 a, BitArray16 b)
	{
		return default(BitArray16);
	}

	[Token(Token = "0x6000CF4")]
	[Address(RVA = "0x6538BE0", Offset = "0x6537BE0", VA = "0x6538BE0")]
	public static BitArray16 operator &(BitArray16 a, BitArray16 b)
	{
		return default(BitArray16);
	}

	[Token(Token = "0x6000CF5")]
	[Address(RVA = "0x6538BF0", Offset = "0x6537BF0", VA = "0x6538BF0", Slot = "10")]
	public IBitArray BitAnd(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000CF6")]
	[Address(RVA = "0x6538C70", Offset = "0x6537C70", VA = "0x6538C70", Slot = "11")]
	public IBitArray BitOr(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000CF7")]
	[Address(RVA = "0x6538CF0", Offset = "0x6537CF0", VA = "0x6538CF0", Slot = "12")]
	public IBitArray BitNot()
	{
		return null;
	}

	[Token(Token = "0x6000CF8")]
	[Address(RVA = "0x6538D40", Offset = "0x6537D40", VA = "0x6538D40")]
	public static bool operator ==(BitArray16 a, BitArray16 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CF9")]
	[Address(RVA = "0x6538D50", Offset = "0x6537D50", VA = "0x6538D50")]
	public static bool operator !=(BitArray16 a, BitArray16 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CFA")]
	[Address(RVA = "0x6538D60", Offset = "0x6537D60", VA = "0x6538D60", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CFB")]
	[Address(RVA = "0x6538DC0", Offset = "0x6537DC0", VA = "0x6538DC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
