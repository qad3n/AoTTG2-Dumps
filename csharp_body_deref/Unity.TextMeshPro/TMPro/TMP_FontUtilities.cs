// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_FontUtilities
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x2000040")]
public static class TMP_FontUtilities
{
	[Token(Token = "0x4000162")]
	[FieldOffset(Offset = "0x0")]
	private static List<int> k_searchedFontAssets;

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x2CF72B0", Offset = "0x2CF58B0", VA = "0x182CF72B0")]
	public static TMP_FontAsset SearchForCharacter(TMP_FontAsset font, uint unicode, out TMP_Character character)
	{
		return null;
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x2CF71C0", Offset = "0x2CF57C0", VA = "0x182CF71C0")]
	public static TMP_FontAsset SearchForCharacter(List<TMP_FontAsset> fonts, uint unicode, out TMP_Character character)
	{
		return null;
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x2CF6EF0", Offset = "0x2CF54F0", VA = "0x182CF6EF0")]
	private static TMP_FontAsset SearchForCharacterInternal(TMP_FontAsset font, uint unicode, out TMP_Character character)
	{
		return null;
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x2CF71C0", Offset = "0x2CF57C0", VA = "0x182CF71C0")]
	private static TMP_FontAsset SearchForCharacterInternal(List<TMP_FontAsset> fonts, uint unicode, out TMP_Character character)
	{
		return null;
	}
}
