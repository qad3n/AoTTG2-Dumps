using System.Collections.Generic;
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x2000037")]
public class TMP_FontAssetUtilities
{
	[Token(Token = "0x4000136")]
	[FieldOffset(Offset = "0x0")]
	private static readonly TMP_FontAssetUtilities s_Instance;

	[Token(Token = "0x4000137")]
	[FieldOffset(Offset = "0x8")]
	private static HashSet<int> k_SearchedAssets;

	[Token(Token = "0x4000138")]
	[FieldOffset(Offset = "0x10")]
	private static bool k_IsFontEngineInitialized;

	[Token(Token = "0x17000049")]
	public static TMP_FontAssetUtilities instance
	{
		[Token(Token = "0x6000170")]
		[Address(RVA = "0x490A090", Offset = "0x490A090", VA = "0x490A090")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x490A010", Offset = "0x490A010", VA = "0x490A010")]
	static TMP_FontAssetUtilities()
	{
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x490A100", Offset = "0x490A100", VA = "0x490A100")]
	public static TMP_Character GetCharacterFromFontAsset(uint unicode, TMP_FontAsset sourceFontAsset, bool includeFallbacks, FontStyles fontStyle, FontWeight fontWeight, out bool isAlternativeTypeface)
	{
		return null;
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x490A2C0", Offset = "0x490A2C0", VA = "0x490A2C0")]
	private static TMP_Character GetCharacterFromFontAsset_Internal(uint unicode, TMP_FontAsset sourceFontAsset, bool includeFallbacks, FontStyles fontStyle, FontWeight fontWeight, out bool isAlternativeTypeface)
	{
		return null;
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x490A740", Offset = "0x490A740", VA = "0x490A740")]
	public static TMP_Character GetCharacterFromFontAssets(uint unicode, TMP_FontAsset sourceFontAsset, List<TMP_FontAsset> fontAssets, bool includeFallbacks, FontStyles fontStyle, FontWeight fontWeight, out bool isAlternativeTypeface)
	{
		return null;
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x490AA60", Offset = "0x490AA60", VA = "0x490AA60")]
	public static TMP_SpriteCharacter GetSpriteCharacterFromSpriteAsset(uint unicode, TMP_SpriteAsset spriteAsset, bool includeFallbacks)
	{
		return null;
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x490AE00", Offset = "0x490AE00", VA = "0x490AE00")]
	private static TMP_SpriteCharacter GetSpriteCharacterFromSpriteAsset_Internal(uint unicode, TMP_SpriteAsset spriteAsset, bool includeFallbacks)
	{
		return null;
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x490A080", Offset = "0x490A080", VA = "0x490A080")]
	public TMP_FontAssetUtilities()
	{
	}
}
