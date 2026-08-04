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
	[Address(RVA = "0x3C36480", Offset = "0x3C36480", VA = "0x3C36480")]
	static UnexceptionalStreamReader()
	{
	}

	[Token(Token = "0x6002ADF")]
	[Address(RVA = "0x3C36520", Offset = "0x3C36520", VA = "0x3C36520")]
	public UnexceptionalStreamReader(Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x6002AE0")]
	[Address(RVA = "0x3C36580", Offset = "0x3C36580", VA = "0x3C36580", Slot = "9")]
	public override int Peek()
	{
		return default(int);
	}

	[Token(Token = "0x6002AE1")]
	[Address(RVA = "0x3C36600", Offset = "0x3C36600", VA = "0x3C36600", Slot = "10")]
	public override int Read()
	{
		return default(int);
	}

	[Token(Token = "0x6002AE2")]
	[Address(RVA = "0x3C36680", Offset = "0x3C36680", VA = "0x3C36680", Slot = "11")]
	public override int Read([In][Out] char[] dest_buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6002AE3")]
	[Address(RVA = "0x3C36940", Offset = "0x3C36940", VA = "0x3C36940")]
	private bool CheckEOL(char current)
	{
		return default(bool);
	}

	[Token(Token = "0x6002AE4")]
	[Address(RVA = "0x3C36AE0", Offset = "0x3C36AE0", VA = "0x3C36AE0", Slot = "14")]
	public override string ReadLine()
	{
		return null;
	}

	[Token(Token = "0x6002AE5")]
	[Address(RVA = "0x3C36B60", Offset = "0x3C36B60", VA = "0x3C36B60", Slot = "13")]
	public override string ReadToEnd()
	{
		return null;
	}
}
