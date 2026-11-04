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
		[Address(RVA = "0x846EF0", Offset = "0x8454F0", VA = "0x180846EF0", Slot = "4")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x170001A7")]
	public bool allFalse
	{
		[Token(Token = "0x6000CEB")]
		[Address(RVA = "0x299D490", Offset = "0x299BA90", VA = "0x18299D490", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A8")]
	public bool allTrue
	{
		[Token(Token = "0x6000CEC")]
		[Address(RVA = "0x2B36760", Offset = "0x2B34D60", VA = "0x182B36760", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A9")]
	public string humanizedData
	{
		[Token(Token = "0x6000CED")]
		[Address(RVA = "0x2B36770", Offset = "0x2B34D70", VA = "0x182B36770", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AA")]
	public bool this[uint index]
	{
		[Token(Token = "0x6000CEE")]
		[Address(RVA = "0x2B36740", Offset = "0x2B34D40", VA = "0x182B36740", Slot = "7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000CEF")]
		[Address(RVA = "0x2B368E0", Offset = "0x2B34EE0", VA = "0x182B368E0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6000CF0")]
	[Address(RVA = "0x17073B0", Offset = "0x17059B0", VA = "0x1817073B0")]
	public BitArray16(ushort initValue)
	{
	}

	[Token(Token = "0x6000CF1")]
	[Address(RVA = "0x2B366A0", Offset = "0x2B34CA0", VA = "0x182B366A0")]
	public BitArray16(IEnumerable<uint> bitIndexTrue)
	{
	}

	[Token(Token = "0x6000CF2")]
	[Address(RVA = "0x2B368D0", Offset = "0x2B34ED0", VA = "0x182B368D0")]
	public static BitArray16 operator ~(BitArray16 a)
	{
		return default(BitArray16);
	}

	[Token(Token = "0x6000CF3")]
	[Address(RVA = "0x2B368C0", Offset = "0x2B34EC0", VA = "0x182B368C0")]
	public static BitArray16 operator |(BitArray16 a, BitArray16 b)
	{
		return default(BitArray16);
	}

	[Token(Token = "0x6000CF4")]
	[Address(RVA = "0x2B368B0", Offset = "0x2B34EB0", VA = "0x182B368B0")]
	public static BitArray16 operator &(BitArray16 a, BitArray16 b)
	{
		return default(BitArray16);
	}

	[Token(Token = "0x6000CF5")]
	[Address(RVA = "0x2B36480", Offset = "0x2B34A80", VA = "0x182B36480", Slot = "10")]
	public IBitArray BitAnd(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000CF6")]
	[Address(RVA = "0x2B36560", Offset = "0x2B34B60", VA = "0x182B36560", Slot = "11")]
	public IBitArray BitOr(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000CF7")]
	[Address(RVA = "0x2B36510", Offset = "0x2B34B10", VA = "0x182B36510", Slot = "12")]
	public IBitArray BitNot()
	{
		return null;
	}

	[Token(Token = "0x6000CF8")]
	[Address(RVA = "0x29940F0", Offset = "0x29926F0", VA = "0x1829940F0")]
	public static bool operator ==(BitArray16 a, BitArray16 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CF9")]
	[Address(RVA = "0x2994140", Offset = "0x2992740", VA = "0x182994140")]
	public static bool operator !=(BitArray16 a, BitArray16 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CFA")]
	[Address(RVA = "0x2B365F0", Offset = "0x2B34BF0", VA = "0x182B365F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CFB")]
	[Address(RVA = "0x2B36680", Offset = "0x2B34C80", VA = "0x182B36680", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
