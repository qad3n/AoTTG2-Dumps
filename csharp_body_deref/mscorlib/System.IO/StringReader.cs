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
[Token(Token = "0x2000573")]
[ComVisible(true)]
public class StringReader : TextReader
{
	[Token(Token = "0x40016D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string _s;

	[Token(Token = "0x40016D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private int _pos;

	[Token(Token = "0x40016D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private int _length;

	[Token(Token = "0x6002A40")]
	[Address(RVA = "0x3C2BAA0", Offset = "0x3C2BAA0", VA = "0x3C2BAA0")]
	public StringReader(string s)
	{
	}

	[Token(Token = "0x6002A41")]
	[Address(RVA = "0x3C2BB60", Offset = "0x3C2BB60", VA = "0x3C2BB60", Slot = "7")]
	public override void Close()
	{
	}

	[Token(Token = "0x6002A42")]
	[Address(RVA = "0x3C2BB80", Offset = "0x3C2BB80", VA = "0x3C2BB80", Slot = "8")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002A43")]
	[Address(RVA = "0x3C2BBC0", Offset = "0x3C2BBC0", VA = "0x3C2BBC0", Slot = "9")]
	public override int Peek()
	{
		return default(int);
	}

	[Token(Token = "0x6002A44")]
	[Address(RVA = "0x3C2BBF0", Offset = "0x3C2BBF0", VA = "0x3C2BBF0", Slot = "10")]
	public override int Read()
	{
		return default(int);
	}

	[Token(Token = "0x6002A45")]
	[Address(RVA = "0x3C2BC30", Offset = "0x3C2BC30", VA = "0x3C2BC30", Slot = "11")]
	public override int Read([In][Out] char[] buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6002A46")]
	[Address(RVA = "0x3C2BDD0", Offset = "0x3C2BDD0", VA = "0x3C2BDD0", Slot = "13")]
	public override string ReadToEnd()
	{
		return null;
	}

	[Token(Token = "0x6002A47")]
	[Address(RVA = "0x3C2BE00", Offset = "0x3C2BE00", VA = "0x3C2BE00", Slot = "14")]
	public override string ReadLine()
	{
		return null;
	}

	[Token(Token = "0x6002A48")]
	[Address(RVA = "0x3C2BEF0", Offset = "0x3C2BEF0", VA = "0x3C2BEF0", Slot = "15")]
	[ComVisible(false)]
	public override Task<int> ReadAsync(char[] buffer, int index, int count)
	{
		return null;
	}
}
