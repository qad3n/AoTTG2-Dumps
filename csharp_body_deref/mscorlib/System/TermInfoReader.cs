// ==================== AoTTG2 cross-reference ====================
// Type: System.TermInfoReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001CF")]
internal class TermInfoReader
{
	[Token(Token = "0x400077F")]
	[FieldOffset(Offset = "0x10")]
	private int boolSize;

	[Token(Token = "0x4000780")]
	[FieldOffset(Offset = "0x14")]
	private int numSize;

	[Token(Token = "0x4000781")]
	[FieldOffset(Offset = "0x18")]
	private int strOffsets;

	[Token(Token = "0x4000782")]
	[FieldOffset(Offset = "0x20")]
	private byte[] buffer;

	[Token(Token = "0x4000783")]
	[FieldOffset(Offset = "0x28")]
	private int booleansOffset;

	[Token(Token = "0x4000784")]
	[FieldOffset(Offset = "0x2C")]
	private int intOffset;

	[Token(Token = "0x60010AF")]
	[Address(RVA = "0x1B90D90", Offset = "0x1B8F390", VA = "0x181B90D90")]
	public TermInfoReader(string term, string filename)
	{
	}

	[Token(Token = "0x60010B0")]
	[Address(RVA = "0x1B90C70", Offset = "0x1B8F270", VA = "0x181B90C70")]
	public TermInfoReader(string term, byte[] buffer)
	{
	}

	[Token(Token = "0x60010B1")]
	[Address(RVA = "0x1B903C0", Offset = "0x1B8E9C0", VA = "0x181B903C0")]
	private void DetermineVersion(short magic)
	{
	}

	[Token(Token = "0x60010B2")]
	[Address(RVA = "0x1B90980", Offset = "0x1B8EF80", VA = "0x181B90980")]
	private void ReadHeader(byte[] buffer, ref int position)
	{
	}

	[Token(Token = "0x60010B3")]
	[Address(RVA = "0x1B90BE0", Offset = "0x1B8F1E0", VA = "0x181B90BE0")]
	private void ReadNames(byte[] buffer, ref int position)
	{
	}

	[Token(Token = "0x60010B4")]
	[Address(RVA = "0x1B908D0", Offset = "0x1B8EED0", VA = "0x181B908D0")]
	public int Get(System.TermInfoNumbers number)
	{
		return default(int);
	}

	[Token(Token = "0x60010B5")]
	[Address(RVA = "0x1B90780", Offset = "0x1B8ED80", VA = "0x181B90780")]
	public string Get(System.TermInfoStrings tstr)
	{
		return null;
	}

	[Token(Token = "0x60010B6")]
	[Address(RVA = "0x1B90590", Offset = "0x1B8EB90", VA = "0x181B90590")]
	public byte[] GetStringBytes(System.TermInfoStrings tstr)
	{
		return null;
	}

	[Token(Token = "0x60010B7")]
	[Address(RVA = "0x1B90480", Offset = "0x1B8EA80", VA = "0x181B90480")]
	private short GetInt16(byte[] buffer, int offset)
	{
		return default(short);
	}

	[Token(Token = "0x60010B8")]
	[Address(RVA = "0x1B90700", Offset = "0x1B8ED00", VA = "0x181B90700")]
	private string GetString(byte[] buffer, int offset)
	{
		return null;
	}

	[Token(Token = "0x60010B9")]
	[Address(RVA = "0x1B904E0", Offset = "0x1B8EAE0", VA = "0x181B904E0")]
	private byte[] GetStringBytes(byte[] buffer, int offset)
	{
		return null;
	}
}
