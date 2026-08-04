// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.FontAssetUtilities
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x200000A")]
internal static class FontAssetUtilities
{
	[Token(Token = "0x4000061")]
	[FieldOffset(Offset = "0x0")]
	private static HashSet<int> k_SearchedAssets;

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x4EB2680", Offset = "0x4EB2680", VA = "0x4EB2680")]
	internal static Character GetCharacterFromFontAsset(uint unicode, FontAsset sourceFontAsset, bool includeFallbacks, FontStyles fontStyle, TextFontWeight fontWeight, out bool isAlternativeTypeface)
	{
		return null;
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x4EB27A0", Offset = "0x4EB27A0", VA = "0x4EB27A0")]
	private static Character GetCharacterFromFontAsset_Internal(uint unicode, FontAsset sourceFontAsset, bool includeFallbacks, FontStyles fontStyle, TextFontWeight fontWeight, out bool isAlternativeTypeface)
	{
		return null;
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x4EB2CD0", Offset = "0x4EB2CD0", VA = "0x4EB2CD0")]
	public static Character GetCharacterFromFontAssets(uint unicode, FontAsset sourceFontAsset, List<FontAsset> fontAssets, bool includeFallbacks, FontStyles fontStyle, TextFontWeight fontWeight, out bool isAlternativeTypeface)
	{
		return null;
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x4EB2E90", Offset = "0x4EB2E90", VA = "0x4EB2E90")]
	public static SpriteCharacter GetSpriteCharacterFromSpriteAsset(uint unicode, SpriteAsset spriteAsset, bool includeFallbacks)
	{
		return null;
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x4EB3180", Offset = "0x4EB3180", VA = "0x4EB3180")]
	private static SpriteCharacter GetSpriteCharacterFromSpriteAsset_Internal(uint unicode, SpriteAsset spriteAsset, bool includeFallbacks)
	{
		return null;
	}
}
