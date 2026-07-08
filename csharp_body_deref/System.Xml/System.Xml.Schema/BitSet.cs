using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000166")]
internal sealed class BitSet
{
	[Token(Token = "0x4000745")]
	[FieldOffset(Offset = "0x10")]
	private int count;

	[Token(Token = "0x4000746")]
	[FieldOffset(Offset = "0x18")]
	private uint[] bits;

	[Token(Token = "0x17000402")]
	public int Count
	{
		[Token(Token = "0x6000F85")]
		[Address(RVA = "0x4504F10", Offset = "0x4504F10", VA = "0x4504F10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000403")]
	public bool this[int index]
	{
		[Token(Token = "0x6000F86")]
		[Address(RVA = "0x4504F20", Offset = "0x4504F20", VA = "0x4504F20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000404")]
	public bool IsEmpty
	{
		[Token(Token = "0x6000F90")]
		[Address(RVA = "0x45054F0", Offset = "0x45054F0", VA = "0x45054F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F83")]
	[Address(RVA = "0x4504E80", Offset = "0x4504E80", VA = "0x4504E80")]
	private BitSet()
	{
	}

	[Token(Token = "0x6000F84")]
	[Address(RVA = "0x4504E90", Offset = "0x4504E90", VA = "0x4504E90")]
	public BitSet(int count)
	{
	}

	[Token(Token = "0x6000F87")]
	[Address(RVA = "0x4504FA0", Offset = "0x4504FA0", VA = "0x4504FA0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000F88")]
	[Address(RVA = "0x4504FF0", Offset = "0x4504FF0", VA = "0x4504FF0")]
	public void Set(int index)
	{
	}

	[Token(Token = "0x6000F89")]
	[Address(RVA = "0x4504F60", Offset = "0x4504F60", VA = "0x4504F60")]
	public bool Get(int index)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F8A")]
	[Address(RVA = "0x45050D0", Offset = "0x45050D0", VA = "0x45050D0")]
	public int NextSet(int startFrom)
	{
		return default(int);
	}

	[Token(Token = "0x6000F8B")]
	[Address(RVA = "0x4505160", Offset = "0x4505160", VA = "0x4505160")]
	public void And(BitSet other)
	{
	}

	[Token(Token = "0x6000F8C")]
	[Address(RVA = "0x4505220", Offset = "0x4505220", VA = "0x4505220")]
	public void Or(BitSet other)
	{
	}

	[Token(Token = "0x6000F8D")]
	[Address(RVA = "0x45052B0", Offset = "0x45052B0", VA = "0x45052B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F8E")]
	[Address(RVA = "0x45052E0", Offset = "0x45052E0", VA = "0x45052E0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F8F")]
	[Address(RVA = "0x4505400", Offset = "0x4505400", VA = "0x4505400")]
	public BitSet Clone()
	{
		return null;
	}

	[Token(Token = "0x6000F91")]
	[Address(RVA = "0x4505540", Offset = "0x4505540", VA = "0x4505540")]
	public bool Intersects(BitSet other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F92")]
	[Address(RVA = "0x4504F00", Offset = "0x4504F00", VA = "0x4504F00")]
	private int Subscript(int bitIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000F93")]
	[Address(RVA = "0x4505040", Offset = "0x4505040", VA = "0x4505040")]
	private void EnsureLength(int nRequiredLength)
	{
	}
}
