// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.FontAssetUtilities
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x6A3E0B0", Offset = "0x6A3D0B0", VA = "0x6A3E0B0")]
	internal static Character GetCharacterFromFontAsset(uint unicode, FontAsset sourceFontAsset, bool includeFallbacks, FontStyles fontStyle, TextFontWeight fontWeight, out bool isAlternativeTypeface, bool populateLigatures)
	{
		return null;
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x6A3E1F0", Offset = "0x6A3D1F0", VA = "0x6A3E1F0")]
	private static Character GetCharacterFromFontAsset_Internal(uint unicode, FontAsset sourceFontAsset, bool includeFallbacks, FontStyles fontStyle, TextFontWeight fontWeight, out bool isAlternativeTypeface, bool populateLigatures)
	{
		return null;
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x6A3E9B0", Offset = "0x6A3D9B0", VA = "0x6A3E9B0")]
	internal static Character GetCharacterFromFontAssetsInternal(uint unicode, FontAsset sourceFontAsset, List<FontAsset> fontAssets, List<FontAsset> OSFallbackList, bool includeFallbacks, FontStyles fontStyle, TextFontWeight fontWeight, out bool isAlternativeTypeface, bool populateLigatures = true)
	{
		return null;
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x6A3EB20", Offset = "0x6A3DB20", VA = "0x6A3EB20")]
	private static Character GetCharacterFromFontAssetsInternal(uint unicode, List<FontAsset> fontAssets, bool includeFallbacks, FontStyles fontStyle, TextFontWeight fontWeight, out bool isAlternativeTypeface, bool populateLigatures = true)
	{
		return null;
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x6A3ED00", Offset = "0x6A3DD00", VA = "0x6A3ED00")]
	internal static TextElement GetTextElementFromTextAssets(uint unicode, FontAsset sourceFontAsset, List<TextAsset> textAssets, bool includeFallbacks, FontStyles fontStyle, TextFontWeight fontWeight, out bool isAlternativeTypeface, bool populateLigatures)
	{
		return null;
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x6A3F200", Offset = "0x6A3E200", VA = "0x6A3F200")]
	public static SpriteCharacter GetSpriteCharacterFromSpriteAsset(uint unicode, SpriteAsset spriteAsset, bool includeFallbacks)
	{
		return null;
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x6A3F010", Offset = "0x6A3E010", VA = "0x6A3F010")]
	private static SpriteCharacter GetSpriteCharacterFromSpriteAsset_Internal(uint unicode, SpriteAsset spriteAsset, bool includeFallbacks)
	{
		return null;
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x6A3F580", Offset = "0x6A3E580", VA = "0x6A3F580")]
	public static uint GetCodePoint(string text, ref int index)
	{
		return default(uint);
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x6A3F660", Offset = "0x6A3E660", VA = "0x6A3F660")]
	public static uint GetCodePoint(uint[] codesPoints, ref int index)
	{
		return default(uint);
	}
}
