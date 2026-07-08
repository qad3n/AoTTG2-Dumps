using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x2000089")]
public struct TMP_FontStyleStack
{
	[Token(Token = "0x40004EA")]
	[FieldOffset(Offset = "0x0")]
	public byte bold;

	[Token(Token = "0x40004EB")]
	[FieldOffset(Offset = "0x1")]
	public byte italic;

	[Token(Token = "0x40004EC")]
	[FieldOffset(Offset = "0x2")]
	public byte underline;

	[Token(Token = "0x40004ED")]
	[FieldOffset(Offset = "0x3")]
	public byte strikethrough;

	[Token(Token = "0x40004EE")]
	[FieldOffset(Offset = "0x4")]
	public byte highlight;

	[Token(Token = "0x40004EF")]
	[FieldOffset(Offset = "0x5")]
	public byte superscript;

	[Token(Token = "0x40004F0")]
	[FieldOffset(Offset = "0x6")]
	public byte subscript;

	[Token(Token = "0x40004F1")]
	[FieldOffset(Offset = "0x7")]
	public byte uppercase;

	[Token(Token = "0x40004F2")]
	[FieldOffset(Offset = "0x8")]
	public byte lowercase;

	[Token(Token = "0x40004F3")]
	[FieldOffset(Offset = "0x9")]
	public byte smallcaps;

	[Token(Token = "0x6000514")]
	[Address(RVA = "0x4948020", Offset = "0x4948020", VA = "0x4948020")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000515")]
	[Address(RVA = "0x4948030", Offset = "0x4948030", VA = "0x4948030")]
	public byte Add(FontStyles style)
	{
		return default(byte);
	}

	[Token(Token = "0x6000516")]
	[Address(RVA = "0x49480D0", Offset = "0x49480D0", VA = "0x49480D0")]
	public byte Remove(FontStyles style)
	{
		return default(byte);
	}
}
