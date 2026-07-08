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
		[Address(RVA = "0x48CBA60", Offset = "0x48CBA60", VA = "0x48CBA60", Slot = "4")]
		get
		{
			return default(uint);
		}
	}

	[Token(Token = "0x1700015C")]
	public bool allFalse
	{
		[Token(Token = "0x6000BD2")]
		[Address(RVA = "0x48CBA70", Offset = "0x48CBA70", VA = "0x48CBA70", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700015D")]
	public bool allTrue
	{
		[Token(Token = "0x6000BD3")]
		[Address(RVA = "0x48CBA80", Offset = "0x48CBA80", VA = "0x48CBA80", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700015E")]
	public string humanizedData
	{
		[Token(Token = "0x6000BD4")]
		[Address(RVA = "0x48CBA90", Offset = "0x48CBA90", VA = "0x48CBA90", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015F")]
	public bool this[uint index]
	{
		[Token(Token = "0x6000BD5")]
		[Address(RVA = "0x48CBBE0", Offset = "0x48CBBE0", VA = "0x48CBBE0", Slot = "7")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000BD6")]
		[Address(RVA = "0x48CBC00", Offset = "0x48CBC00", VA = "0x48CBC00", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x48CBC40", Offset = "0x48CBC40", VA = "0x48CBC40")]
	public BitArray16(ushort initValue)
	{
	}

	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x48CBC50", Offset = "0x48CBC50", VA = "0x48CBC50")]
	public BitArray16(IEnumerable<uint> bitIndexTrue)
	{
	}

	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x48CBD00", Offset = "0x48CBD00", VA = "0x48CBD00")]
	public static BitArray16 operator ~(BitArray16 a)
	{
		return default(BitArray16);
	}

	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x48CBD10", Offset = "0x48CBD10", VA = "0x48CBD10")]
	public static BitArray16 operator |(BitArray16 a, BitArray16 b)
	{
		return default(BitArray16);
	}

	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x48CBD20", Offset = "0x48CBD20", VA = "0x48CBD20")]
	public static BitArray16 operator &(BitArray16 a, BitArray16 b)
	{
		return default(BitArray16);
	}

	[Token(Token = "0x6000BDC")]
	[Address(RVA = "0x48CBD30", Offset = "0x48CBD30", VA = "0x48CBD30", Slot = "10")]
	public IBitArray BitAnd(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000BDD")]
	[Address(RVA = "0x48CBDB0", Offset = "0x48CBDB0", VA = "0x48CBDB0", Slot = "11")]
	public IBitArray BitOr(IBitArray other)
	{
		return null;
	}

	[Token(Token = "0x6000BDE")]
	[Address(RVA = "0x48CBE30", Offset = "0x48CBE30", VA = "0x48CBE30", Slot = "12")]
	public IBitArray BitNot()
	{
		return null;
	}

	[Token(Token = "0x6000BDF")]
	[Address(RVA = "0x48CBE80", Offset = "0x48CBE80", VA = "0x48CBE80")]
	public static bool operator ==(BitArray16 a, BitArray16 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x48CBE90", Offset = "0x48CBE90", VA = "0x48CBE90")]
	public static bool operator !=(BitArray16 a, BitArray16 b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x48CBEA0", Offset = "0x48CBEA0", VA = "0x48CBEA0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x48CBF00", Offset = "0x48CBF00", VA = "0x48CBF00", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
