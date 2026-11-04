// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_LinkInfo
// Update status: CHANGED in this game update
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
	[Address(RVA = "0x2D619D0", Offset = "0x2D5FFD0", VA = "0x182D619D0")]
	internal void SetLinkID(char[] text, int startIndex, int length)
	{
	}

	[Token(Token = "0x6000655")]
	[Address(RVA = "0x2D618F0", Offset = "0x2D5FEF0", VA = "0x182D618F0")]
	public string GetLinkText()
	{
		return null;
	}

	[Token(Token = "0x6000656")]
	[Address(RVA = "0x2D619C0", Offset = "0x2D5FFC0", VA = "0x182D619C0")]
	public string GetLink()
	{
		return null;
	}

	[Token(Token = "0x6000657")]
	[Address(RVA = "0x2D61850", Offset = "0x2D5FE50", VA = "0x182D61850")]
	public string GetLinkID()
	{
		return null;
	}
}
