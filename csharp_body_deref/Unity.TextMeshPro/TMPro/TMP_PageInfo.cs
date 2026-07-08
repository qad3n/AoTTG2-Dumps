using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x2000098")]
public struct TMP_PageInfo
{
	[Token(Token = "0x400053F")]
	[FieldOffset(Offset = "0x0")]
	public int firstCharacterIndex;

	[Token(Token = "0x4000540")]
	[FieldOffset(Offset = "0x4")]
	public int lastCharacterIndex;

	[Token(Token = "0x4000541")]
	[FieldOffset(Offset = "0x8")]
	public float ascender;

	[Token(Token = "0x4000542")]
	[FieldOffset(Offset = "0xC")]
	public float baseLine;

	[Token(Token = "0x4000543")]
	[FieldOffset(Offset = "0x10")]
	public float descender;
}
