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

[Token(Token = "0x200004C")]
public static class TMP_FontUtilities
{
	[Token(Token = "0x4000229")]
	[FieldOffset(Offset = "0x0")]
	private static List<int> k_searchedFontAssets;

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x4C57110", Offset = "0x4C57110", VA = "0x4C57110")]
	public static TMP_FontAsset SearchForCharacter(TMP_FontAsset font, uint unicode, out TMP_Character character)
	{
		return null;
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x4C57490", Offset = "0x4C57490", VA = "0x4C57490")]
	public static TMP_FontAsset SearchForCharacter(List<TMP_FontAsset> fonts, uint unicode, out TMP_Character character)
	{
		return null;
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x4C57200", Offset = "0x4C57200", VA = "0x4C57200")]
	private static TMP_FontAsset SearchForCharacterInternal(TMP_FontAsset font, uint unicode, out TMP_Character character)
	{
		return null;
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x4C574A0", Offset = "0x4C574A0", VA = "0x4C574A0")]
	private static TMP_FontAsset SearchForCharacterInternal(List<TMP_FontAsset> fonts, uint unicode, out TMP_Character character)
	{
		return null;
	}
}
