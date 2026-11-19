// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.StringReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000675")]
[ComVisible(true)]
public class StringReader : TextReader
{
	[Token(Token = "0x4001A13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string _s;

	[Token(Token = "0x4001A14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private int _pos;

	[Token(Token = "0x4001A15")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private int _length;

	[Token(Token = "0x60032D5")]
	[Address(RVA = "0x54844B0", Offset = "0x54834B0", VA = "0x54844B0")]
	public StringReader(string s)
	{
	}

	[Token(Token = "0x60032D6")]
	[Address(RVA = "0x5484570", Offset = "0x5483570", VA = "0x5484570", Slot = "7")]
	public override void Close()
	{
	}

	[Token(Token = "0x60032D7")]
	[Address(RVA = "0x5484590", Offset = "0x5483590", VA = "0x5484590", Slot = "8")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60032D8")]
	[Address(RVA = "0x54845C0", Offset = "0x54835C0", VA = "0x54845C0", Slot = "9")]
	public override int Peek()
	{
		return default(int);
	}

	[Token(Token = "0x60032D9")]
	[Address(RVA = "0x5484650", Offset = "0x5483650", VA = "0x5484650", Slot = "10")]
	public override int Read()
	{
		return default(int);
	}

	[Token(Token = "0x60032DA")]
	[Address(RVA = "0x54846E0", Offset = "0x54836E0", VA = "0x54846E0", Slot = "11")]
	public override int Read([In][Out] char[] buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x60032DB")]
	[Address(RVA = "0x54848C0", Offset = "0x54838C0", VA = "0x54848C0", Slot = "13")]
	public override string ReadToEnd()
	{
		return null;
	}

	[Token(Token = "0x60032DC")]
	[Address(RVA = "0x5484950", Offset = "0x5483950", VA = "0x5484950", Slot = "14")]
	public override string ReadLine()
	{
		return null;
	}

	[Token(Token = "0x60032DD")]
	[Address(RVA = "0x5484A80", Offset = "0x5483A80", VA = "0x5484A80", Slot = "15")]
	[ComVisible(false)]
	public override Task<int> ReadAsync(char[] buffer, int index, int count)
	{
		return null;
	}
}
