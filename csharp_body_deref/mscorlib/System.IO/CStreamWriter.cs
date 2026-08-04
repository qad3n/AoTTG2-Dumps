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

[Token(Token = "0x2000582")]
internal class CStreamWriter : StreamWriter
{
	[Token(Token = "0x400172B")]
	[FieldOffset(Offset = "0x70")]
	private System.TermInfoDriver driver;

	[Token(Token = "0x6002AF2")]
	[Address(RVA = "0x3C37420", Offset = "0x3C37420", VA = "0x3C37420")]
	public CStreamWriter(Stream stream, Encoding encoding, bool leaveOpen)
	{
	}

	[Token(Token = "0x6002AF3")]
	[Address(RVA = "0x3C37550", Offset = "0x3C37550", VA = "0x3C37550", Slot = "15")]
	public override void Write(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6002AF4")]
	[Address(RVA = "0x3C378D0", Offset = "0x3C378D0", VA = "0x3C378D0", Slot = "13")]
	public override void Write(char val)
	{
	}

	[Token(Token = "0x6002AF5")]
	[Address(RVA = "0x3C37AD0", Offset = "0x3C37AD0", VA = "0x3C37AD0")]
	public void InternalWriteString(string val)
	{
	}

	[Token(Token = "0x6002AF6")]
	[Address(RVA = "0x3C37A50", Offset = "0x3C37A50", VA = "0x3C37A50")]
	public void InternalWriteChar(char val)
	{
	}

	[Token(Token = "0x6002AF7")]
	[Address(RVA = "0x3C37B50", Offset = "0x3C37B50", VA = "0x3C37B50")]
	public void InternalWriteChars(char[] buffer, int n)
	{
	}

	[Token(Token = "0x6002AF8")]
	[Address(RVA = "0x3C37BD0", Offset = "0x3C37BD0", VA = "0x3C37BD0", Slot = "14")]
	public override void Write(char[] val)
	{
	}

	[Token(Token = "0x6002AF9")]
	[Address(RVA = "0x3C37C00", Offset = "0x3C37C00", VA = "0x3C37C00", Slot = "18")]
	public override void Write(string val)
	{
	}

	[Token(Token = "0x6002AFA")]
	[Address(RVA = "0x3C37CD0", Offset = "0x3C37CD0", VA = "0x3C37CD0", Slot = "21")]
	public override void WriteLine(string val)
	{
	}
}
