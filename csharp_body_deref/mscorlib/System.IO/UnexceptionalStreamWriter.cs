using System.Text;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000580")]
internal class UnexceptionalStreamWriter : StreamWriter
{
	[Token(Token = "0x6002AE6")]
	[Address(RVA = "0x4F510C0", Offset = "0x4F510C0", VA = "0x4F510C0")]
	public UnexceptionalStreamWriter(Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x6002AE7")]
	[Address(RVA = "0x4F51130", Offset = "0x4F51130", VA = "0x4F51130", Slot = "10")]
	public override void Flush()
	{
	}

	[Token(Token = "0x6002AE8")]
	[Address(RVA = "0x4F511B0", Offset = "0x4F511B0", VA = "0x4F511B0", Slot = "15")]
	public override void Write(char[] buffer, int index, int count)
	{
	}

	[Token(Token = "0x6002AE9")]
	[Address(RVA = "0x4F51230", Offset = "0x4F51230", VA = "0x4F51230", Slot = "13")]
	public override void Write(char value)
	{
	}

	[Token(Token = "0x6002AEA")]
	[Address(RVA = "0x4F512B0", Offset = "0x4F512B0", VA = "0x4F512B0", Slot = "14")]
	public override void Write(char[] value)
	{
	}

	[Token(Token = "0x6002AEB")]
	[Address(RVA = "0x4F51330", Offset = "0x4F51330", VA = "0x4F51330", Slot = "18")]
	public override void Write(string value)
	{
	}
}
