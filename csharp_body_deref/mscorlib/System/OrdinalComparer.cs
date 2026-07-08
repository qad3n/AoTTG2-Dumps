using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200010F")]
public class OrdinalComparer : StringComparer
{
	[Token(Token = "0x40003CD")]
	[FieldOffset(Offset = "0x10")]
	private readonly bool _ignoreCase;

	[Token(Token = "0x6000A18")]
	[Address(RVA = "0x4FEBF20", Offset = "0x4FEBF20", VA = "0x4FEBF20")]
	internal OrdinalComparer(bool ignoreCase)
	{
	}

	[Token(Token = "0x6000A19")]
	[Address(RVA = "0x4FEBF80", Offset = "0x4FEBF80", VA = "0x4FEBF80", Slot = "10")]
	public override int Compare(string x, string y)
	{
		return default(int);
	}

	[Token(Token = "0x6000A1A")]
	[Address(RVA = "0x4FEBFD0", Offset = "0x4FEBFD0", VA = "0x4FEBFD0", Slot = "11")]
	public override bool Equals(string x, string y)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A1B")]
	[Address(RVA = "0x4FEC020", Offset = "0x4FEC020", VA = "0x4FEC020", Slot = "12")]
	public override int GetHashCode(string obj)
	{
		return default(int);
	}

	[Token(Token = "0x6000A1C")]
	[Address(RVA = "0x4FEC0A0", Offset = "0x4FEC0A0", VA = "0x4FEC0A0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A1D")]
	[Address(RVA = "0x4FEC130", Offset = "0x4FEC130", VA = "0x4FEC130", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
