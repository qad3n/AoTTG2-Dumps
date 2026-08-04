// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.LinkInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x200000F")]
internal struct LinkInfo
{
	[Token(Token = "0x4000089")]
	[FieldOffset(Offset = "0x0")]
	public int hashCode;

	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0x4")]
	public int linkIdFirstCharacterIndex;

	[Token(Token = "0x400008B")]
	[FieldOffset(Offset = "0x8")]
	public int linkIdLength;

	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0xC")]
	public int linkTextfirstCharacterIndex;

	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x10")]
	public int linkTextLength;

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x18")]
	internal char[] linkId;

	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x20")]
	private string m_LinkIdString;

	[Token(Token = "0x4000090")]
	[FieldOffset(Offset = "0x28")]
	private string m_LinkTextString;

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x4EB36A0", Offset = "0x4EB36A0", VA = "0x4EB36A0")]
	internal void SetLinkId(char[] text, int startIndex, int length)
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x4EB37C0", Offset = "0x4EB37C0", VA = "0x4EB37C0")]
	public string GetLinkText(TextInfo textInfo)
	{
		return null;
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x4EB38D0", Offset = "0x4EB38D0", VA = "0x4EB38D0")]
	public string GetLinkId()
	{
		return null;
	}
}
