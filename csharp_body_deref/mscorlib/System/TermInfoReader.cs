// ==================== AoTTG2 cross-reference ====================
// Type: System.TermInfoReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3D135B0", Offset = "0x3D135B0", VA = "0x3D135B0")]
	public TermInfoReader(string term, string filename)
	{
	}

	[Token(Token = "0x6001059")]
	[Address(RVA = "0x3D138E0", Offset = "0x3D138E0", VA = "0x3D138E0")]
	public TermInfoReader(string term, byte[] buffer)
	{
	}

	[Token(Token = "0x600105A")]
	[Address(RVA = "0x3D1B290", Offset = "0x3D1B290", VA = "0x3D1B290")]
	private void DetermineVersion(short magic)
	{
	}

	[Token(Token = "0x600105B")]
	[Address(RVA = "0x3D1B080", Offset = "0x3D1B080", VA = "0x3D1B080")]
	private void ReadHeader(byte[] buffer, ref int position)
	{
	}

	[Token(Token = "0x600105C")]
	[Address(RVA = "0x3D1B200", Offset = "0x3D1B200", VA = "0x3D1B200")]
	private void ReadNames(byte[] buffer, ref int position)
	{
	}

	[Token(Token = "0x600105D")]
	[Address(RVA = "0x3D149D0", Offset = "0x3D149D0", VA = "0x3D149D0")]
	public int Get(System.TermInfoNumbers number)
	{
		return default(int);
	}

	[Token(Token = "0x600105E")]
	[Address(RVA = "0x3D148C0", Offset = "0x3D148C0", VA = "0x3D148C0")]
	public string Get(System.TermInfoStrings tstr)
	{
		return null;
	}

	[Token(Token = "0x600105F")]
	[Address(RVA = "0x3D199F0", Offset = "0x3D199F0", VA = "0x3D199F0")]
	public byte[] GetStringBytes(System.TermInfoStrings tstr)
	{
		return null;
	}

	[Token(Token = "0x6001060")]
	[Address(RVA = "0x3D1B330", Offset = "0x3D1B330", VA = "0x3D1B330")]
	private short GetInt16(byte[] buffer, int offset)
	{
		return default(short);
	}

	[Token(Token = "0x6001061")]
	[Address(RVA = "0x3D1B380", Offset = "0x3D1B380", VA = "0x3D1B380")]
	private string GetString(byte[] buffer, int offset)
	{
		return null;
	}

	[Token(Token = "0x6001062")]
	[Address(RVA = "0x3D1B400", Offset = "0x3D1B400", VA = "0x3D1B400")]
	private byte[] GetStringBytes(byte[] buffer, int offset)
	{
		return null;
	}
}
