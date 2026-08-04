// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_LinkInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x200001A")]
public struct TMP_LinkInfo
{
	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0x0")]
	public TMP_Text textComponent;

	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0x8")]
	public int hashCode;

	[Token(Token = "0x40000B6")]
	[FieldOffset(Offset = "0xC")]
	public int linkIdFirstCharacterIndex;

	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0x10")]
	public int linkIdLength;

	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x14")]
	public int linkTextfirstCharacterIndex;

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x18")]
	public int linkTextLength;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x20")]
	internal char[] linkID;

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x4C442D0", Offset = "0x4C442D0", VA = "0x4C442D0")]
	internal void SetLinkID(char[] text, int startIndex, int length)
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x4C443C0", Offset = "0x4C443C0", VA = "0x4C443C0")]
	public string GetLinkText()
	{
		return null;
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x4C444B0", Offset = "0x4C444B0", VA = "0x4C444B0")]
	public string GetLinkID()
	{
		return null;
	}
}
