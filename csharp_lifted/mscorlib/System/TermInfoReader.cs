// ==================== AoTTG2 cross-reference ====================
// Type: System.TermInfoReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001A7")]
internal class TermInfoReader
{
	[Token(Token = "0x40006DD")]
	[FieldOffset(Offset = "0x10")]
	private int boolSize;

	[Token(Token = "0x40006DE")]
	[FieldOffset(Offset = "0x14")]
	private int numSize;

	[Token(Token = "0x40006DF")]
	[FieldOffset(Offset = "0x18")]
	private int strOffsets;

	[Token(Token = "0x40006E0")]
	[FieldOffset(Offset = "0x20")]
	private byte[] buffer;

	[Token(Token = "0x40006E1")]
	[FieldOffset(Offset = "0x28")]
	private int booleansOffset;

	[Token(Token = "0x40006E2")]
	[FieldOffset(Offset = "0x2C")]
	private int intOffset;

	[Token(Token = "0x6001086")]
	[Address(RVA = "0x5516E50", Offset = "0x5515E50", VA = "0x5516E50")]
	public TermInfoReader(string term, string filename)
	{
	}

	[Token(Token = "0x6001087")]
	[Address(RVA = "0x55170D0", Offset = "0x55160D0", VA = "0x55170D0")]
	public TermInfoReader(string term, byte[] buffer)
	{
	}

	[Token(Token = "0x6001088")]
	[Address(RVA = "0x551E5E0", Offset = "0x551D5E0", VA = "0x551E5E0")]
	private void DetermineVersion(short magic)
	{
	}

	[Token(Token = "0x6001089")]
	[Address(RVA = "0x551E3E0", Offset = "0x551D3E0", VA = "0x551E3E0")]
	private void ReadHeader(byte[] buffer, ref int position)
	{
	}

	[Token(Token = "0x600108A")]
	[Address(RVA = "0x551E550", Offset = "0x551D550", VA = "0x551E550")]
	private void ReadNames(byte[] buffer, ref int position)
	{
	}

	[Token(Token = "0x600108B")]
	[Address(RVA = "0x5517C30", Offset = "0x5516C30", VA = "0x5517C30")]
	public int Get(System.TermInfoNumbers number)
	{
		return default(int);
	}

	[Token(Token = "0x600108C")]
	[Address(RVA = "0x5517B30", Offset = "0x5516B30", VA = "0x5517B30")]
	public string Get(System.TermInfoStrings tstr)
	{
		return null;
	}

	[Token(Token = "0x600108D")]
	[Address(RVA = "0x551CD90", Offset = "0x551BD90", VA = "0x551CD90")]
	public byte[] GetStringBytes(System.TermInfoStrings tstr)
	{
		return null;
	}

	[Token(Token = "0x600108E")]
	[Address(RVA = "0x551E680", Offset = "0x551D680", VA = "0x551E680")]
	private short GetInt16(byte[] buffer, int offset)
	{
		return default(short);
	}

	[Token(Token = "0x600108F")]
	[Address(RVA = "0x551E6D0", Offset = "0x551D6D0", VA = "0x551E6D0")]
	private string GetString(byte[] buffer, int offset)
	{
		return null;
	}

	[Token(Token = "0x6001090")]
	[Address(RVA = "0x551E750", Offset = "0x551D750", VA = "0x551E750")]
	private byte[] GetStringBytes(byte[] buffer, int offset)
	{
		return null;
	}
}
