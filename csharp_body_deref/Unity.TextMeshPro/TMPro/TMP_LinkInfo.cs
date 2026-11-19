// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_LinkInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x20000AB")]
public struct TMP_LinkInfo
{
	[Token(Token = "0x40005C6")]
	[FieldOffset(Offset = "0x0")]
	public TMP_Text textComponent;

	[Token(Token = "0x40005C7")]
	[FieldOffset(Offset = "0x8")]
	public int hashCode;

	[Token(Token = "0x40005C8")]
	[FieldOffset(Offset = "0xC")]
	public int linkIdFirstCharacterIndex;

	[Token(Token = "0x40005C9")]
	[FieldOffset(Offset = "0x10")]
	public int linkIdLength;

	[Token(Token = "0x40005CA")]
	[FieldOffset(Offset = "0x14")]
	public int linkTextfirstCharacterIndex;

	[Token(Token = "0x40005CB")]
	[FieldOffset(Offset = "0x18")]
	public int linkTextLength;

	[Token(Token = "0x40005CC")]
	[FieldOffset(Offset = "0x20")]
	internal char[] linkID;

	[Token(Token = "0x6000654")]
	[Address(RVA = "0x6760890", Offset = "0x675F890", VA = "0x6760890")]
	internal void SetLinkID(char[] text, int startIndex, int length)
	{
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x6760970", Offset = "0x675F970", VA = "0x6760970")]
	public string GetLinkText()
	{
		return null;
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x6760A50", Offset = "0x675FA50", VA = "0x6760A50")]
	public string GetLink()
	{
		return null;
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x6760AE0", Offset = "0x675FAE0", VA = "0x6760AE0")]
	public string GetLinkID()
	{
		return null;
	}
}
