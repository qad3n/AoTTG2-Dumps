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

[Token(Token = "0x20006A9")]
internal class CStreamReader : StreamReader
{
	[Token(Token = "0x4001B05")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private System.TermInfoDriver driver;

	[Token(Token = "0x60033B6")]
	[Address(RVA = "0x1B03730", Offset = "0x1B01D30", VA = "0x181B03730")]
	public CStreamReader(Stream stream, Encoding encoding)
	{
	}

	[Token(Token = "0x60033B7")]
	[Address(RVA = "0x1B034A0", Offset = "0x1B01AA0", VA = "0x181B034A0", Slot = "9")]
	public override int Peek()
	{
		return default(int);
	}

	[Token(Token = "0x60033B8")]
	[Address(RVA = "0x1B03520", Offset = "0x1B01B20", VA = "0x181B03520", Slot = "10")]
	public override int Read()
	{
		return default(int);
	}

	[Token(Token = "0x60033B9")]
	[Address(RVA = "0x1B03580", Offset = "0x1B01B80", VA = "0x181B03580", Slot = "11")]
	public override int Read([In][Out] char[] dest, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60033BA")]
	[Address(RVA = "0x1B034C0", Offset = "0x1B01AC0", VA = "0x181B034C0", Slot = "14")]
	public override string ReadLine()
	{
		return null;
	}

	[Token(Token = "0x60033BB")]
	[Address(RVA = "0x1B034F0", Offset = "0x1B01AF0", VA = "0x181B034F0", Slot = "13")]
	public override string ReadToEnd()
	{
		return null;
	}
}
