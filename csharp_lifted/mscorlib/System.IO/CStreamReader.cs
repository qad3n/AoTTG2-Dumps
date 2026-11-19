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

[Token(Token = "0x2000683")]
internal class CStreamReader : StreamReader
{
	[Token(Token = "0x4001A6B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private System.TermInfoDriver driver;

	[Token(Token = "0x600337F")]
	[Address(RVA = "0x548F320", Offset = "0x548E320", VA = "0x548F320")]
	public CStreamReader(Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x6003380")]
	[Address(RVA = "0x548F430", Offset = "0x548E430", VA = "0x548F430", Slot = "9")]
	public override int Peek()
	{
		return default(int);
	}

	[Token(Token = "0x6003381")]
	[Address(RVA = "0x548F4B0", Offset = "0x548E4B0", VA = "0x548F4B0", Slot = "10")]
	public override int Read()
	{
		return default(int);
	}

	[Token(Token = "0x6003382")]
	[Address(RVA = "0x548F570", Offset = "0x548E570", VA = "0x548F570", Slot = "11")]
	public override int Read([In][Out] char[] dest, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6003383")]
	[Address(RVA = "0x548F710", Offset = "0x548E710", VA = "0x548F710", Slot = "14")]
	public override string ReadLine()
	{
		return null;
	}

	[Token(Token = "0x6003384")]
	[Address(RVA = "0x548F7A0", Offset = "0x548E7A0", VA = "0x548F7A0", Slot = "13")]
	public override string ReadToEnd()
	{
		return null;
	}
}
