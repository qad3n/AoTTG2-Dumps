// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_FontAssetUtilities
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x2000041")]
public class TMP_FontAssetUtilities
{
	[Token(Token = "0x4000163")]
	[FieldOffset(Offset = "0x0")]
	private static readonly TMP_FontAssetUtilities s_Instance;

	[Token(Token = "0x4000164")]
	[FieldOffset(Offset = "0x8")]
	private static HashSet<int> k_SearchedAssets;

	[Token(Token = "0x17000061")]
	public static TMP_FontAssetUtilities instance
	{
		[Token(Token = "0x60001C9")]
		[Address(RVA = "0x2CF6570", Offset = "0x2CF4B70", VA = "0x182CF6570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x2CF6500", Offset = "0x2CF4B00", VA = "0x182CF6500")]
	static TMP_FontAssetUtilities()
	{
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x2CF54A0", Offset = "0x2CF3AA0", VA = "0x182CF54A0")]
	public static TMP_Character GetCharacterFromFontAsset(uint unicode, TMP_FontAsset sourceFontAsset, bool includeFallbacks, FontStyles fontStyle, FontWeight fontWeight, out bool isAlternativeTypeface)
	{
		return null;
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x2CF4F90", Offset = "0x2CF3590", VA = "0x182CF4F90")]
	private static TMP_Character GetCharacterFromFontAsset_Internal(uint unicode, TMP_FontAsset sourceFontAsset, bool includeFallbacks, FontStyles fontStyle, FontWeight fontWeight, out bool isAlternativeTypeface)
	{
		return null;
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x2CF6330", Offset = "0x2CF4930", VA = "0x182CF6330")]
	private static TMP_Character SearchFallbacksForCharacter(uint unicode, TMP_FontAsset sourceFontAsset, FontStyles fontStyle, FontWeight fontWeight, out bool isAlternativeTypeface)
	{
		return null;
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x2CF5610", Offset = "0x2CF3C10", VA = "0x182CF5610")]
	public static TMP_Character GetCharacterFromFontAssets(uint unicode, TMP_FontAsset sourceFontAsset, List<TMP_FontAsset> fontAssets, bool includeFallbacks, FontStyles fontStyle, FontWeight fontWeight, out bool isAlternativeTypeface)
	{
		return null;
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x2CF5FB0", Offset = "0x2CF45B0", VA = "0x182CF5FB0")]
	internal static TMP_TextElement GetTextElementFromTextAssets(uint unicode, TMP_FontAsset sourceFontAsset, List<TMP_Asset> textAssets, bool includeFallbacks, FontStyles fontStyle, FontWeight fontWeight, out bool isAlternativeTypeface)
	{
		return null;
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x2CF5C70", Offset = "0x2CF4270", VA = "0x182CF5C70")]
	public static TMP_SpriteCharacter GetSpriteCharacterFromSpriteAsset(uint unicode, TMP_SpriteAsset spriteAsset, bool includeFallbacks)
	{
		return null;
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x2CF5A80", Offset = "0x2CF4080", VA = "0x182CF5A80")]
	private static TMP_SpriteCharacter GetSpriteCharacterFromSpriteAsset_Internal(uint unicode, TMP_SpriteAsset spriteAsset, bool includeFallbacks)
	{
		return null;
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x2CF5870", Offset = "0x2CF3E70", VA = "0x182CF5870")]
	internal static uint GetCodePoint(string text, ref int index)
	{
		return default(uint);
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x2CF5970", Offset = "0x2CF3F70", VA = "0x182CF5970")]
	internal static uint GetCodePoint(uint[] codesPoints, ref int index)
	{
		return default(uint);
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public TMP_FontAssetUtilities()
	{
	}
}
