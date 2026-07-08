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
	[Address(RVA = "0x4B8AD50", Offset = "0x4B8AD50", VA = "0x4B8AD50")]
	internal static Character GetCharacterFromFontAsset(uint unicode, FontAsset sourceFontAsset, bool includeFallbacks, FontStyles fontStyle, TextFontWeight fontWeight, out bool isAlternativeTypeface)
	{
		return null;
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x4B8AE70", Offset = "0x4B8AE70", VA = "0x4B8AE70")]
	private static Character GetCharacterFromFontAsset_Internal(uint unicode, FontAsset sourceFontAsset, bool includeFallbacks, FontStyles fontStyle, TextFontWeight fontWeight, out bool isAlternativeTypeface)
	{
		return null;
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x4B8B3A0", Offset = "0x4B8B3A0", VA = "0x4B8B3A0")]
	public static Character GetCharacterFromFontAssets(uint unicode, FontAsset sourceFontAsset, List<FontAsset> fontAssets, bool includeFallbacks, FontStyles fontStyle, TextFontWeight fontWeight, out bool isAlternativeTypeface)
	{
		return null;
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x4B8B560", Offset = "0x4B8B560", VA = "0x4B8B560")]
	public static SpriteCharacter GetSpriteCharacterFromSpriteAsset(uint unicode, SpriteAsset spriteAsset, bool includeFallbacks)
	{
		return null;
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x4B8B850", Offset = "0x4B8B850", VA = "0x4B8B850")]
	private static SpriteCharacter GetSpriteCharacterFromSpriteAsset_Internal(uint unicode, SpriteAsset spriteAsset, bool includeFallbacks)
	{
		return null;
	}
}
