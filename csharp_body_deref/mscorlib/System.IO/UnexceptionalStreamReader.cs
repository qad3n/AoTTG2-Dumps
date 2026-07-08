using System.Runtime.InteropServices;
using System.Text;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x200057F")]
internal class UnexceptionalStreamReader : StreamReader
{
	[Token(Token = "0x4001728")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static bool[] newline;

	[Token(Token = "0x4001729")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static char newlineChar;

	[Token(Token = "0x6002ADE")]
	[Address(RVA = "0x4F50960", Offset = "0x4F50960", VA = "0x4F50960")]
	static UnexceptionalStreamReader()
	{
	}

	[Token(Token = "0x6002ADF")]
	[Address(RVA = "0x4F50A00", Offset = "0x4F50A00", VA = "0x4F50A00")]
	public UnexceptionalStreamReader(Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x6002AE0")]
	[Address(RVA = "0x4F50A60", Offset = "0x4F50A60", VA = "0x4F50A60", Slot = "9")]
	public override int Peek()
	{
		return default(int);
	}

	[Token(Token = "0x6002AE1")]
	[Address(RVA = "0x4F50AE0", Offset = "0x4F50AE0", VA = "0x4F50AE0", Slot = "10")]
	public override int Read()
	{
		return default(int);
	}

	[Token(Token = "0x6002AE2")]
	[Address(RVA = "0x4F50B60", Offset = "0x4F50B60", VA = "0x4F50B60", Slot = "11")]
	public override int Read([In][Out] char[] dest_buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6002AE3")]
	[Address(RVA = "0x4F50E20", Offset = "0x4F50E20", VA = "0x4F50E20")]
	private bool CheckEOL(char current)
	{
		return default(bool);
	}

	[Token(Token = "0x6002AE4")]
	[Address(RVA = "0x4F50FC0", Offset = "0x4F50FC0", VA = "0x4F50FC0", Slot = "14")]
	public override string ReadLine()
	{
		return null;
	}

	[Token(Token = "0x6002AE5")]
	[Address(RVA = "0x4F51040", Offset = "0x4F51040", VA = "0x4F51040", Slot = "13")]
	public override string ReadToEnd()
	{
		return null;
	}
}
