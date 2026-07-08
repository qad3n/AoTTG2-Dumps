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
	[Address(RVA = "0x4F45F80", Offset = "0x4F45F80", VA = "0x4F45F80")]
	public StringReader(string s)
	{
	}

	[Token(Token = "0x6002A41")]
	[Address(RVA = "0x4F46040", Offset = "0x4F46040", VA = "0x4F46040", Slot = "7")]
	public override void Close()
	{
	}

	[Token(Token = "0x6002A42")]
	[Address(RVA = "0x4F46060", Offset = "0x4F46060", VA = "0x4F46060", Slot = "8")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002A43")]
	[Address(RVA = "0x4F460A0", Offset = "0x4F460A0", VA = "0x4F460A0", Slot = "9")]
	public override int Peek()
	{
		return default(int);
	}

	[Token(Token = "0x6002A44")]
	[Address(RVA = "0x4F460D0", Offset = "0x4F460D0", VA = "0x4F460D0", Slot = "10")]
	public override int Read()
	{
		return default(int);
	}

	[Token(Token = "0x6002A45")]
	[Address(RVA = "0x4F46110", Offset = "0x4F46110", VA = "0x4F46110", Slot = "11")]
	public override int Read([In][Out] char[] buffer, int index, int count)
	{
		return default(int);
	}

	[Token(Token = "0x6002A46")]
	[Address(RVA = "0x4F462B0", Offset = "0x4F462B0", VA = "0x4F462B0", Slot = "13")]
	public override string ReadToEnd()
	{
		return null;
	}

	[Token(Token = "0x6002A47")]
	[Address(RVA = "0x4F462E0", Offset = "0x4F462E0", VA = "0x4F462E0", Slot = "14")]
	public override string ReadLine()
	{
		return null;
	}

	[Token(Token = "0x6002A48")]
	[Address(RVA = "0x4F463D0", Offset = "0x4F463D0", VA = "0x4F463D0", Slot = "15")]
	[ComVisible(false)]
	public override Task<int> ReadAsync(char[] buffer, int index, int count)
	{
		return null;
	}
}
