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
[Token(Token = "0x2000199")]
[DebuggerDisplay("{this.GetType().Name} {humanizedData}")]
public struct BitArray8 : IBitArray
{
	[Token(Token = "0x400071C")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	private byte data;

	[Token(Token = "0x17000156")]
	public uint capacity
	{
		[Token(Token = "0x6000BBF")]
		[Address(RVA = "0x4BF06B0", Offset = "0x4BF06B0", VA = "0x4BF06B0", Slot = "4")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000157")]
	public bool allFalse
	{
		[Token(Token = "0x6000BC0")]
		[Address(RVA = "0x4BF06C0", Offset = "0x4BF06C0", VA = "0x4BF06C0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000158")]
	public bool allTrue
	{
		[Token(Token = "0x6000BC1")]
		[Address(RVA = "0x4BF06D0", Offset = "0x4BF06D0", VA = "0x4BF06D0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000159")]
	public string humanizedData
	{
		[Token(Token = "0x6000BC2")]
		[Address(RVA = "0x4BF06E0", Offset = "0x4BF06E0", VA = "0x4BF06E0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015A")]
	public bool this[uint index]
	{
		[Token(Token = "0x6000BC3")]
		[Address(RVA = "0x4BF07C0", Offset = "0x4BF07C0", VA = "0x4BF07C0", Slot = "7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000BC4")]
		[Address(RVA = "0x4BF07E0", Offset = "0x4BF07E0", VA = "0x4BF07E0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x4BF0820", Offset = "0x4BF0820", VA = "0x4BF0820")]
	public BitArray8(byte initValue)
	{
	}

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x4BF0830", Offset = "0x4BF0830", VA = "0x4BF0830")]
	public BitArray8(IEnumerable<uint> bitIndexTrue)
	{
	}

	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x4BF08C0", Offset = "0x4BF08C0", VA = "0x4BF08C0")]
	public static BitArray8 operator ~(BitArray8 a)
	{
		return default(BitArray8);
	}

	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x4BF08D0", Offset = "0x4BF08D0", VA = "0x4BF08D0")]
	public static BitArray8 operator |(BitArray8 a, BitArray8 b)
	{
		return default(BitArray8);
	}

	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x4BF08E0", Offset = "0x4BF08E0", VA = "0x4BF08E0")]
	public static BitArray8 operator &(BitArray8 a, BitArray8 b)
	{
		return default(BitArray8);
	}

	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x4BF08F0", Offset = "0x4BF08F0", VA = "0x4BF08F0", Slot = "10")]
	public IBitArray BitAnd(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x4BF0970", Offset = "0x4BF0970", VA = "0x4BF0970", Slot = "11")]
	public IBitArray BitOr(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x4BF09F0", Offset = "0x4BF09F0", VA = "0x4BF09F0", Slot = "12")]
	public IBitArray BitNot()
	{
		return null;
	}

	[Token(Token = "0x6000BCD")]
	[Address(RVA = "0x4BF0A40", Offset = "0x4BF0A40", VA = "0x4BF0A40")]
	public static bool operator ==(BitArray8 a, BitArray8 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BCE")]
	[Address(RVA = "0x4BF0A50", Offset = "0x4BF0A50", VA = "0x4BF0A50")]
	public static bool operator !=(BitArray8 a, BitArray8 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BCF")]
	[Address(RVA = "0x4BF0A60", Offset = "0x4BF0A60", VA = "0x4BF0A60", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD0")]
	[Address(RVA = "0x4BF0AC0", Offset = "0x4BF0AC0", VA = "0x4BF0AC0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
