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
[Token(Token = "0x200019A")]
[DebuggerDisplay("{this.GetType().Name} {humanizedData}")]
public struct BitArray16 : IBitArray
{
	[Token(Token = "0x400071D")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private ushort data;

	[Token(Token = "0x1700015B")]
	public uint capacity
	{
		[Token(Token = "0x6000BD1")]
		[Address(RVA = "0x4BF0AD0", Offset = "0x4BF0AD0", VA = "0x4BF0AD0", Slot = "4")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x1700015C")]
	public bool allFalse
	{
		[Token(Token = "0x6000BD2")]
		[Address(RVA = "0x4BF0AE0", Offset = "0x4BF0AE0", VA = "0x4BF0AE0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700015D")]
	public bool allTrue
	{
		[Token(Token = "0x6000BD3")]
		[Address(RVA = "0x4BF0AF0", Offset = "0x4BF0AF0", VA = "0x4BF0AF0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700015E")]
	public string humanizedData
	{
		[Token(Token = "0x6000BD4")]
		[Address(RVA = "0x4BF0B00", Offset = "0x4BF0B00", VA = "0x4BF0B00", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015F")]
	public bool this[uint index]
	{
		[Token(Token = "0x6000BD5")]
		[Address(RVA = "0x4BF0C50", Offset = "0x4BF0C50", VA = "0x4BF0C50", Slot = "7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000BD6")]
		[Address(RVA = "0x4BF0C70", Offset = "0x4BF0C70", VA = "0x4BF0C70", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x4BF0CB0", Offset = "0x4BF0CB0", VA = "0x4BF0CB0")]
	public BitArray16(ushort initValue)
	{
	}

	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x4BF0CC0", Offset = "0x4BF0CC0", VA = "0x4BF0CC0")]
	public BitArray16(IEnumerable<uint> bitIndexTrue)
	{
	}

	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x4BF0D70", Offset = "0x4BF0D70", VA = "0x4BF0D70")]
	public static BitArray16 operator ~(BitArray16 a)
	{
		return default(BitArray16);
	}

	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x4BF0D80", Offset = "0x4BF0D80", VA = "0x4BF0D80")]
	public static BitArray16 operator |(BitArray16 a, BitArray16 b)
	{
		return default(BitArray16);
	}

	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x4BF0D90", Offset = "0x4BF0D90", VA = "0x4BF0D90")]
	public static BitArray16 operator &(BitArray16 a, BitArray16 b)
	{
		return default(BitArray16);
	}

	[Token(Token = "0x6000BDC")]
	[Address(RVA = "0x4BF0DA0", Offset = "0x4BF0DA0", VA = "0x4BF0DA0", Slot = "10")]
	public IBitArray BitAnd(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000BDD")]
	[Address(RVA = "0x4BF0E20", Offset = "0x4BF0E20", VA = "0x4BF0E20", Slot = "11")]
	public IBitArray BitOr(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000BDE")]
	[Address(RVA = "0x4BF0EA0", Offset = "0x4BF0EA0", VA = "0x4BF0EA0", Slot = "12")]
	public IBitArray BitNot()
	{
		return null;
	}

	[Token(Token = "0x6000BDF")]
	[Address(RVA = "0x4BF0EF0", Offset = "0x4BF0EF0", VA = "0x4BF0EF0")]
	public static bool operator ==(BitArray16 a, BitArray16 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x4BF0F00", Offset = "0x4BF0F00", VA = "0x4BF0F00")]
	public static bool operator !=(BitArray16 a, BitArray16 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x4BF0F10", Offset = "0x4BF0F10", VA = "0x4BF0F10", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x4BF0F70", Offset = "0x4BF0F70", VA = "0x4BF0F70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
