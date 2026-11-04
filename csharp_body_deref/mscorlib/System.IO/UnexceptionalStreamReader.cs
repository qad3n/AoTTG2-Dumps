// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.UnexceptionalStreamReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Text;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x20006A7")]
internal class UnexceptionalStreamReader : StreamReader
{
	[Token(Token = "0x4001B03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static bool[] newline;

	[Token(Token = "0x4001B04")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static char newlineChar;

	[Token(Token = "0x60033A8")]
	[Address(RVA = "0x1B071B0", Offset = "0x1B057B0", VA = "0x181B071B0")]
	static UnexceptionalStreamReader()
	{
	}

	[Token(Token = "0x60033A9")]
	[Address(RVA = "0x1B07260", Offset = "0x1B05860", VA = "0x181B07260")]
	public UnexceptionalStreamReader(Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x60033AA")]
	[Address(RVA = "0x1B034A0", Offset = "0x1B01AA0", VA = "0x181B034A0", Slot = "9")]
	public override int Peek()
	{
		return default(int);
	}

	[Token(Token = "0x60033AB")]
	[Address(RVA = "0x1B07190", Offset = "0x1B05790", VA = "0x181B07190", Slot = "10")]
	public override int Read()
	{
		return default(int);
	}

	[Token(Token = "0x60033AC")]
	[Address(RVA = "0x1B06F40", Offset = "0x1B05540", VA = "0x181B06F40", Slot = "11")]
	public override int Read([In][Out] char[] dest_buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60033AD")]
	[Address(RVA = "0x1B06D30", Offset = "0x1B05330", VA = "0x181B06D30")]
	private bool CheckEOL(char current)
	{
		return default(bool);
	}

	[Token(Token = "0x60033AE")]
	[Address(RVA = "0x1B06F00", Offset = "0x1B05500", VA = "0x181B06F00", Slot = "14")]
	public override string ReadLine()
	{
		return null;
	}

	[Token(Token = "0x60033AF")]
	[Address(RVA = "0x1B06F20", Offset = "0x1B05520", VA = "0x181B06F20", Slot = "13")]
	public override string ReadToEnd()
	{
		return null;
	}
}
