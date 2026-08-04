// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_FontAssetUtilities
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x200004D")]
public class TMP_FontAssetUtilities
{
	[Token(Token = "0x400022A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly TMP_FontAssetUtilities s_Instance;

	[Token(Token = "0x400022B")]
	[FieldOffset(Offset = "0x8")]
	private static HashSet<int> k_SearchedAssets;

	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x10")]
	private static bool k_IsFontEngineInitialized;

	[Token(Token = "0x1700006A")]
	public static TMP_FontAssetUtilities instance
	{
		[Token(Token = "0x6000261")]
		[Address(RVA = "0x4C57610", Offset = "0x4C57610", VA = "0x4C57610")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x4C57590", Offset = "0x4C57590", VA = "0x4C57590")]
	static TMP_FontAssetUtilities()
	{
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x4C57680", Offset = "0x4C57680", VA = "0x4C57680")]
	public static TMP_Character GetCharacterFromFontAsset(uint unicode, TMP_FontAsset sourceFontAsset, bool includeFallbacks, FontStyles fontStyle, FontWeight fontWeight, out bool isAlternativeTypeface)
	{
		return null;
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x4C57840", Offset = "0x4C57840", VA = "0x4C57840")]
	private static TMP_Character GetCharacterFromFontAsset_Internal(uint unicode, TMP_FontAsset sourceFontAsset, bool includeFallbacks, FontStyles fontStyle, FontWeight fontWeight, out bool isAlternativeTypeface)
	{
		return null;
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x4C57CC0", Offset = "0x4C57CC0", VA = "0x4C57CC0")]
	public static TMP_Character GetCharacterFromFontAssets(uint unicode, TMP_FontAsset sourceFontAsset, List<TMP_FontAsset> fontAssets, bool includeFallbacks, FontStyles fontStyle, FontWeight fontWeight, out bool isAlternativeTypeface)
	{
		return null;
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x4C57FE0", Offset = "0x4C57FE0", VA = "0x4C57FE0")]
	public static TMP_SpriteCharacter GetSpriteCharacterFromSpriteAsset(uint unicode, TMP_SpriteAsset spriteAsset, bool includeFallbacks)
	{
		return null;
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x4C58380", Offset = "0x4C58380", VA = "0x4C58380")]
	private static TMP_SpriteCharacter GetSpriteCharacterFromSpriteAsset_Internal(uint unicode, TMP_SpriteAsset spriteAsset, bool includeFallbacks)
	{
		return null;
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x4C57600", Offset = "0x4C57600", VA = "0x4C57600")]
	public TMP_FontAssetUtilities()
	{
	}
}
