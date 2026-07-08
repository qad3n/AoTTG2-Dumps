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
	[Address(RVA = "0x4F51900", Offset = "0x4F51900", VA = "0x4F51900")]
	public CStreamWriter(Stream stream, Encoding encoding, bool leaveOpen)
	{
	}

	[Token(Token = "0x6002AF3")]
	[Address(RVA = "0x4F51A30", Offset = "0x4F51A30", VA = "0x4F51A30", Slot = "15")]
	public override void Write(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6002AF4")]
	[Address(RVA = "0x4F51DB0", Offset = "0x4F51DB0", VA = "0x4F51DB0", Slot = "13")]
	public override void Write(char val)
	{
	}

	[Token(Token = "0x6002AF5")]
	[Address(RVA = "0x4F51FB0", Offset = "0x4F51FB0", VA = "0x4F51FB0")]
	public void InternalWriteString(string val)
	{
	}

	[Token(Token = "0x6002AF6")]
	[Address(RVA = "0x4F51F30", Offset = "0x4F51F30", VA = "0x4F51F30")]
	public void InternalWriteChar(char val)
	{
	}

	[Token(Token = "0x6002AF7")]
	[Address(RVA = "0x4F52030", Offset = "0x4F52030", VA = "0x4F52030")]
	public void InternalWriteChars(char[] buffer, int n)
	{
	}

	[Token(Token = "0x6002AF8")]
	[Address(RVA = "0x4F520B0", Offset = "0x4F520B0", VA = "0x4F520B0", Slot = "14")]
	public override void Write(char[] val)
	{
	}

	[Token(Token = "0x6002AF9")]
	[Address(RVA = "0x4F520E0", Offset = "0x4F520E0", VA = "0x4F520E0", Slot = "18")]
	public override void Write(string val)
	{
	}

	[Token(Token = "0x6002AFA")]
	[Address(RVA = "0x4F521B0", Offset = "0x4F521B0", VA = "0x4F521B0", Slot = "21")]
	public override void WriteLine(string val)
	{
	}
}
