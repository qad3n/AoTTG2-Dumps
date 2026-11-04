// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.FontAssetUtilities
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000035")]
internal static class FontAssetUtilities
{
	[Token(Token = "0x400018E")]
	[ThreadStatic]
	private static HashSet<int> k_SearchedAssets;

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x3041F20", Offset = "0x3040520", VA = "0x183041F20")]
	internal static Character GetCharacterFromFontAsset(uint unicode, FontAsset sourceFontAsset, bool includeFallbacks, FontStyles fontStyle, TextFontWeight fontWeight, out bool isAlternativeTypeface, bool populateLigatures)
	{
		return null;
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x30417D0", Offset = "0x303FDD0", VA = "0x1830417D0")]
	private static Character GetCharacterFromFontAsset_Internal(uint unicode, FontAsset sourceFontAsset, bool includeFallbacks, FontStyles fontStyle, TextFontWeight fontWeight, out bool isAlternativeTypeface, bool populateLigatures)
	{
		return null;
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x3042250", Offset = "0x3040850", VA = "0x183042250")]
	internal static Character GetCharacterFromFontAssetsInternal(uint unicode, FontAsset sourceFontAsset, List<FontAsset> fontAssets, List<FontAsset> OSFallbackList, bool includeFallbacks, FontStyles fontStyle, TextFontWeight fontWeight, out bool isAlternativeTypeface, bool populateLigatures = true)
	{
		return null;
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x3042050", Offset = "0x3040650", VA = "0x183042050")]
	private static Character GetCharacterFromFontAssetsInternal(uint unicode, List<FontAsset> fontAssets, bool includeFallbacks, FontStyles fontStyle, TextFontWeight fontWeight, out bool isAlternativeTypeface, bool populateLigatures = true)
	{
		return null;
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x3042AB0", Offset = "0x30410B0", VA = "0x183042AB0")]
	internal static TextElement GetTextElementFromTextAssets(uint unicode, FontAsset sourceFontAsset, List<TextAsset> textAssets, bool includeFallbacks, FontStyles fontStyle, TextFontWeight fontWeight, out bool isAlternativeTypeface, bool populateLigatures)
	{
		return null;
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x30427C0", Offset = "0x3040DC0", VA = "0x1830427C0")]
	public static SpriteCharacter GetSpriteCharacterFromSpriteAsset(uint unicode, SpriteAsset spriteAsset, bool includeFallbacks)
	{
		return null;
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x30425F0", Offset = "0x3040BF0", VA = "0x1830425F0")]
	private static SpriteCharacter GetSpriteCharacterFromSpriteAsset_Internal(uint unicode, SpriteAsset spriteAsset, bool includeFallbacks)
	{
		return null;
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x30424F0", Offset = "0x3040AF0", VA = "0x1830424F0")]
	public static uint GetCodePoint(string text, ref int index)
	{
		return default(uint);
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x30423E0", Offset = "0x30409E0", VA = "0x1830423E0")]
	public static uint GetCodePoint(uint[] codesPoints, ref int index)
	{
		return default(uint);
	}
}
