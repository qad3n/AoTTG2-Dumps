// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.LinkInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000025")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
internal struct LinkInfo
{
	[Token(Token = "0x40000F7")]
	[FieldOffset(Offset = "0x0")]
	public int hashCode;

	[Token(Token = "0x40000F8")]
	[FieldOffset(Offset = "0x4")]
	public int linkIdFirstCharacterIndex;

	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x8")]
	public int linkIdLength;

	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0xC")]
	public int linkTextfirstCharacterIndex;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x10")]
	public int linkTextLength;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x18")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
	internal char[] linkId;

	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0x20")]
	private string m_LinkIdString;

	[Token(Token = "0x40000FE")]
	[FieldOffset(Offset = "0x28")]
	private string m_LinkTextString;

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x3013480", Offset = "0x3011A80", VA = "0x183013480")]
	internal void SetLinkId(char[] text, int startIndex, int length)
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x3013390", Offset = "0x3011990", VA = "0x183013390")]
	public string GetLinkText(TextInfo textInfo)
	{
		return null;
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x3013340", Offset = "0x3011940", VA = "0x183013340")]
	public string GetLinkId()
	{
		return null;
	}
}
