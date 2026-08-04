// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.CStreamReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3C36ED0", Offset = "0x3C36ED0", VA = "0x3C36ED0")]
	public CStreamReader(Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x6002AED")]
	[Address(RVA = "0x3C36FE0", Offset = "0x3C36FE0", VA = "0x3C36FE0", Slot = "9")]
	public override int Peek()
	{
		return default(int);
	}

	[Token(Token = "0x6002AEE")]
	[Address(RVA = "0x3C37060", Offset = "0x3C37060", VA = "0x3C37060", Slot = "10")]
	public override int Read()
	{
		return default(int);
	}

	[Token(Token = "0x6002AEF")]
	[Address(RVA = "0x3C37130", Offset = "0x3C37130", VA = "0x3C37130", Slot = "11")]
	public override int Read([In][Out] char[] dest, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6002AF0")]
	[Address(RVA = "0x3C372E0", Offset = "0x3C372E0", VA = "0x3C372E0", Slot = "14")]
	public override string ReadLine()
	{
		return null;
	}

	[Token(Token = "0x6002AF1")]
	[Address(RVA = "0x3C37380", Offset = "0x3C37380", VA = "0x3C37380", Slot = "13")]
	public override string ReadToEnd()
	{
		return null;
	}
}
