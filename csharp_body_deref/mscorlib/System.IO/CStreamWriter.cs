// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.CStreamWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x20006AA")]
internal class CStreamWriter : StreamWriter
{
	[Token(Token = "0x4001B06")]
	[FieldOffset(Offset = "0x70")]
	private System.TermInfoDriver driver;

	[Token(Token = "0x60033BC")]
	[Address(RVA = "0x1B03CC0", Offset = "0x1B022C0", VA = "0x181B03CC0")]
	public CStreamWriter(Stream stream, Encoding encoding, bool leaveOpen)
	{
	}

	[Token(Token = "0x60033BD")]
	[Address(RVA = "0x1B03910", Offset = "0x1B01F10", VA = "0x181B03910", Slot = "15")]
	public override void Write(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x60033BE")]
	[Address(RVA = "0x1B03B30", Offset = "0x1B02130", VA = "0x181B03B30", Slot = "13")]
	public override void Write(char val)
	{
	}

	[Token(Token = "0x60033BF")]
	[Address(RVA = "0x1B038A0", Offset = "0x1B01EA0", VA = "0x181B038A0")]
	public void InternalWriteString(string val)
	{
	}

	[Token(Token = "0x60033C0")]
	[Address(RVA = "0x1B03860", Offset = "0x1B01E60", VA = "0x181B03860")]
	public void InternalWriteChar(char val)
	{
	}

	[Token(Token = "0x60033C1")]
	[Address(RVA = "0x1B03880", Offset = "0x1B01E80", VA = "0x181B03880")]
	public void InternalWriteChars(char[] buffer, int n)
	{
	}

	[Token(Token = "0x60033C2")]
	[Address(RVA = "0x1B03C80", Offset = "0x1B02280", VA = "0x181B03C80", Slot = "14")]
	public override void Write(char[] val)
	{
	}

	[Token(Token = "0x60033C3")]
	[Address(RVA = "0x1B03C20", Offset = "0x1B02220", VA = "0x181B03C20", Slot = "18")]
	public override void Write(string val)
	{
	}

	[Token(Token = "0x60033C4")]
	[Address(RVA = "0x1B038C0", Offset = "0x1B01EC0", VA = "0x181B038C0", Slot = "21")]
	public override void WriteLine(string val)
	{
	}
}
