using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x200009A")]
public struct TMP_WordInfo
{
	[Token(Token = "0x400054B")]
	[FieldOffset(Offset = "0x0")]
	public TMP_Text textComponent;

	[Token(Token = "0x400054C")]
	[FieldOffset(Offset = "0x8")]
	public int firstCharacterIndex;

	[Token(Token = "0x400054D")]
	[FieldOffset(Offset = "0xC")]
	public int lastCharacterIndex;

	[Token(Token = "0x400054E")]
	[FieldOffset(Offset = "0x10")]
	public int characterCount;

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x4967410", Offset = "0x4967410", VA = "0x4967410")]
	public string GetWord()
	{
		return null;
	}
}
