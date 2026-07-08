using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x200003B")]
internal struct FontStyleStack
{
	[Token(Token = "0x4000326")]
	[FieldOffset(Offset = "0x0")]
	public byte bold;

	[Token(Token = "0x4000327")]
	[FieldOffset(Offset = "0x1")]
	public byte italic;

	[Token(Token = "0x4000328")]
	[FieldOffset(Offset = "0x2")]
	public byte underline;

	[Token(Token = "0x4000329")]
	[FieldOffset(Offset = "0x3")]
	public byte strikethrough;

	[Token(Token = "0x400032A")]
	[FieldOffset(Offset = "0x4")]
	public byte highlight;

	[Token(Token = "0x400032B")]
	[FieldOffset(Offset = "0x5")]
	public byte superscript;

	[Token(Token = "0x400032C")]
	[FieldOffset(Offset = "0x6")]
	public byte subscript;

	[Token(Token = "0x400032D")]
	[FieldOffset(Offset = "0x7")]
	public byte uppercase;

	[Token(Token = "0x400032E")]
	[FieldOffset(Offset = "0x8")]
	public byte lowercase;

	[Token(Token = "0x400032F")]
	[FieldOffset(Offset = "0x9")]
	public byte smallcaps;

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x4BC0A50", Offset = "0x4BC0A50", VA = "0x4BC0A50")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x4BC0A60", Offset = "0x4BC0A60", VA = "0x4BC0A60")]
	public byte Add(FontStyles style)
	{
		return default(byte);
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x4BC0B00", Offset = "0x4BC0B00", VA = "0x4BC0B00")]
	public byte Remove(FontStyles style)
	{
		return default(byte);
	}
}
