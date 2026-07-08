using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x2000099")]
public struct TMP_LinkInfo
{
	[Token(Token = "0x4000544")]
	[FieldOffset(Offset = "0x0")]
	public TMP_Text textComponent;

	[Token(Token = "0x4000545")]
	[FieldOffset(Offset = "0x8")]
	public int hashCode;

	[Token(Token = "0x4000546")]
	[FieldOffset(Offset = "0xC")]
	public int linkIdFirstCharacterIndex;

	[Token(Token = "0x4000547")]
	[FieldOffset(Offset = "0x10")]
	public int linkIdLength;

	[Token(Token = "0x4000548")]
	[FieldOffset(Offset = "0x14")]
	public int linkTextfirstCharacterIndex;

	[Token(Token = "0x4000549")]
	[FieldOffset(Offset = "0x18")]
	public int linkTextLength;

	[Token(Token = "0x400054A")]
	[FieldOffset(Offset = "0x20")]
	internal char[] linkID;

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x49671A0", Offset = "0x49671A0", VA = "0x49671A0")]
	internal void SetLinkID(char[] text, int startIndex, int length)
	{
	}

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x4967290", Offset = "0x4967290", VA = "0x4967290")]
	public string GetLinkText()
	{
		return null;
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x4967380", Offset = "0x4967380", VA = "0x4967380")]
	public string GetLinkID()
	{
		return null;
	}
}
