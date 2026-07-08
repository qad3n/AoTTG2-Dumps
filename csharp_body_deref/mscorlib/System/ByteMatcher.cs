using System.Collections;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001A2")]
internal class ByteMatcher
{
	[Token(Token = "0x40006F6")]
	[FieldOffset(Offset = "0x10")]
	private Hashtable map;

	[Token(Token = "0x40006F7")]
	[FieldOffset(Offset = "0x18")]
	private Hashtable starts;

	[Token(Token = "0x6001053")]
	[Address(RVA = "0x5033DC0", Offset = "0x5033DC0", VA = "0x5033DC0")]
	public void AddMapping(System.TermInfoStrings key, byte[] val)
	{
	}

	[Token(Token = "0x6001054")]
	[Address(RVA = "0x5033EC0", Offset = "0x5033EC0", VA = "0x5033EC0")]
	public void Sort()
	{
	}

	[Token(Token = "0x6001055")]
	[Address(RVA = "0x502FF60", Offset = "0x502FF60", VA = "0x502FF60")]
	public bool StartsWith(int c)
	{
		return default(bool);
	}

	[Token(Token = "0x6001056")]
	[Address(RVA = "0x502FFB0", Offset = "0x502FFB0", VA = "0x502FFB0")]
	public System.TermInfoStrings Match(char[] buffer, int offset, int length, out int used)
	{
		return default(System.TermInfoStrings);
	}

	[Token(Token = "0x6001057")]
	[Address(RVA = "0x5033D00", Offset = "0x5033D00", VA = "0x5033D00")]
	public ByteMatcher()
	{
	}
}
