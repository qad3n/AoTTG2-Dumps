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
		[Address(RVA = "0x48CB640", Offset = "0x48CB640", VA = "0x48CB640", Slot = "4")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x17000157")]
	public bool allFalse
	{
		[Token(Token = "0x6000BC0")]
		[Address(RVA = "0x48CB650", Offset = "0x48CB650", VA = "0x48CB650", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000158")]
	public bool allTrue
	{
		[Token(Token = "0x6000BC1")]
		[Address(RVA = "0x48CB660", Offset = "0x48CB660", VA = "0x48CB660", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000159")]
	public string humanizedData
	{
		[Token(Token = "0x6000BC2")]
		[Address(RVA = "0x48CB670", Offset = "0x48CB670", VA = "0x48CB670", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015A")]
	public bool this[uint index]
	{
		[Token(Token = "0x6000BC3")]
		[Address(RVA = "0x48CB750", Offset = "0x48CB750", VA = "0x48CB750", Slot = "7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000BC4")]
		[Address(RVA = "0x48CB770", Offset = "0x48CB770", VA = "0x48CB770", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x48CB7B0", Offset = "0x48CB7B0", VA = "0x48CB7B0")]
	public BitArray8(byte initValue)
	{
	}

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x48CB7C0", Offset = "0x48CB7C0", VA = "0x48CB7C0")]
	public BitArray8(IEnumerable<uint> bitIndexTrue)
	{
	}

	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x48CB850", Offset = "0x48CB850", VA = "0x48CB850")]
	public static BitArray8 operator ~(BitArray8 a)
	{
		return default(BitArray8);
	}

	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x48CB860", Offset = "0x48CB860", VA = "0x48CB860")]
	public static BitArray8 operator |(BitArray8 a, BitArray8 b)
	{
		return default(BitArray8);
	}

	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x48CB870", Offset = "0x48CB870", VA = "0x48CB870")]
	public static BitArray8 operator &(BitArray8 a, BitArray8 b)
	{
		return default(BitArray8);
	}

	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x48CB880", Offset = "0x48CB880", VA = "0x48CB880", Slot = "10")]
	public IBitArray BitAnd(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x48CB900", Offset = "0x48CB900", VA = "0x48CB900", Slot = "11")]
	public IBitArray BitOr(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x48CB980", Offset = "0x48CB980", VA = "0x48CB980", Slot = "12")]
	public IBitArray BitNot()
	{
		return null;
	}

	[Token(Token = "0x6000BCD")]
	[Address(RVA = "0x48CB9D0", Offset = "0x48CB9D0", VA = "0x48CB9D0")]
	public static bool operator ==(BitArray8 a, BitArray8 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BCE")]
	[Address(RVA = "0x48CB9E0", Offset = "0x48CB9E0", VA = "0x48CB9E0")]
	public static bool operator !=(BitArray8 a, BitArray8 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BCF")]
	[Address(RVA = "0x48CB9F0", Offset = "0x48CB9F0", VA = "0x48CB9F0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BD0")]
	[Address(RVA = "0x48CBA50", Offset = "0x48CBA50", VA = "0x48CBA50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
