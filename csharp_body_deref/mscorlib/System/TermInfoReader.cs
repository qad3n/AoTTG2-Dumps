using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001A4")]
internal class TermInfoReader
{
	[Token(Token = "0x400071B")]
	[FieldOffset(Offset = "0x10")]
	private int boolSize;

	[Token(Token = "0x400071C")]
	[FieldOffset(Offset = "0x14")]
	private int numSize;

	[Token(Token = "0x400071D")]
	[FieldOffset(Offset = "0x18")]
	private int strOffsets;

	[Token(Token = "0x400071E")]
	[FieldOffset(Offset = "0x20")]
	private byte[] buffer;

	[Token(Token = "0x400071F")]
	[FieldOffset(Offset = "0x28")]
	private int booleansOffset;

	[Token(Token = "0x4000720")]
	[FieldOffset(Offset = "0x2C")]
	private int intOffset;

	[Token(Token = "0x6001058")]
	[Address(RVA = "0x502DA90", Offset = "0x502DA90", VA = "0x502DA90")]
	public TermInfoReader(string term, string filename)
	{
	}

	[Token(Token = "0x6001059")]
	[Address(RVA = "0x502DDC0", Offset = "0x502DDC0", VA = "0x502DDC0")]
	public TermInfoReader(string term, byte[] buffer)
	{
	}

	[Token(Token = "0x600105A")]
	[Address(RVA = "0x5035770", Offset = "0x5035770", VA = "0x5035770")]
	private void DetermineVersion(short magic)
	{
	}

	[Token(Token = "0x600105B")]
	[Address(RVA = "0x5035560", Offset = "0x5035560", VA = "0x5035560")]
	private void ReadHeader(byte[] buffer, ref int position)
	{
	}

	[Token(Token = "0x600105C")]
	[Address(RVA = "0x50356E0", Offset = "0x50356E0", VA = "0x50356E0")]
	private void ReadNames(byte[] buffer, ref int position)
	{
	}

	[Token(Token = "0x600105D")]
	[Address(RVA = "0x502EEB0", Offset = "0x502EEB0", VA = "0x502EEB0")]
	public int Get(System.TermInfoNumbers number)
	{
		return default(int);
	}

	[Token(Token = "0x600105E")]
	[Address(RVA = "0x502EDA0", Offset = "0x502EDA0", VA = "0x502EDA0")]
	public string Get(System.TermInfoStrings tstr)
	{
		return null;
	}

	[Token(Token = "0x600105F")]
	[Address(RVA = "0x5033ED0", Offset = "0x5033ED0", VA = "0x5033ED0")]
	public byte[] GetStringBytes(System.TermInfoStrings tstr)
	{
		return null;
	}

	[Token(Token = "0x6001060")]
	[Address(RVA = "0x5035810", Offset = "0x5035810", VA = "0x5035810")]
	private short GetInt16(byte[] buffer, int offset)
	{
		return default(short);
	}

	[Token(Token = "0x6001061")]
	[Address(RVA = "0x5035860", Offset = "0x5035860", VA = "0x5035860")]
	private string GetString(byte[] buffer, int offset)
	{
		return null;
	}

	[Token(Token = "0x6001062")]
	[Address(RVA = "0x50358E0", Offset = "0x50358E0", VA = "0x50358E0")]
	private byte[] GetStringBytes(byte[] buffer, int offset)
	{
		return null;
	}
}
