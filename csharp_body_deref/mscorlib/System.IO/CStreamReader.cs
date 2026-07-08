using System.Runtime.InteropServices;
using System.Text;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000581")]
internal class CStreamReader : StreamReader
{
	[Token(Token = "0x400172A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private System.TermInfoDriver driver;

	[Token(Token = "0x6002AEC")]
	[Address(RVA = "0x4F513B0", Offset = "0x4F513B0", VA = "0x4F513B0")]
	public CStreamReader(Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x6002AED")]
	[Address(RVA = "0x4F514C0", Offset = "0x4F514C0", VA = "0x4F514C0", Slot = "9")]
	public override int Peek()
	{
		return default(int);
	}

	[Token(Token = "0x6002AEE")]
	[Address(RVA = "0x4F51540", Offset = "0x4F51540", VA = "0x4F51540", Slot = "10")]
	public override int Read()
	{
		return default(int);
	}

	[Token(Token = "0x6002AEF")]
	[Address(RVA = "0x4F51610", Offset = "0x4F51610", VA = "0x4F51610", Slot = "11")]
	public override int Read([In][Out] char[] dest, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6002AF0")]
	[Address(RVA = "0x4F517C0", Offset = "0x4F517C0", VA = "0x4F517C0", Slot = "14")]
	public override string ReadLine()
	{
		return null;
	}

	[Token(Token = "0x6002AF1")]
	[Address(RVA = "0x4F51860", Offset = "0x4F51860", VA = "0x4F51860", Slot = "13")]
	public override string ReadToEnd()
	{
		return null;
	}
}
