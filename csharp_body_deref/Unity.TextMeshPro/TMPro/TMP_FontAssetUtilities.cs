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
		[Address(RVA = "0x66F4680", Offset = "0x66F3680", VA = "0x66F4680")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x66F4600", Offset = "0x66F3600", VA = "0x66F4600")]
	static TMP_FontAssetUtilities()
	{
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x66F46F0", Offset = "0x66F36F0", VA = "0x66F46F0")]
	public static TMP_Character GetCharacterFromFontAsset(uint unicode, TMP_FontAsset sourceFontAsset, bool includeFallbacks, FontStyles fontStyle, FontWeight fontWeight, out bool isAlternativeTypeface)
	{
		return null;
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x66F48B0", Offset = "0x66F38B0", VA = "0x66F48B0")]
	private static TMP_Character GetCharacterFromFontAsset_Internal(uint unicode, TMP_FontAsset sourceFontAsset, bool includeFallbacks, FontStyles fontStyle, FontWeight fontWeight, out bool isAlternativeTypeface)
	{
		return null;
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x66F4E00", Offset = "0x66F3E00", VA = "0x66F4E00")]
	private static TMP_Character SearchFallbacksForCharacter(uint unicode, TMP_FontAsset sourceFontAsset, FontStyles fontStyle, FontWeight fontWeight, out bool isAlternativeTypeface)
	{
		return null;
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x66F4FD0", Offset = "0x66F3FD0", VA = "0x66F4FD0")]
	public static TMP_Character GetCharacterFromFontAssets(uint unicode, TMP_FontAsset sourceFontAsset, List<TMP_FontAsset> fontAssets, bool includeFallbacks, FontStyles fontStyle, FontWeight fontWeight, out bool isAlternativeTypeface)
	{
		return null;
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x66F5200", Offset = "0x66F4200", VA = "0x66F5200")]
	internal static TMP_TextElement GetTextElementFromTextAssets(uint unicode, TMP_FontAsset sourceFontAsset, List<TMP_Asset> textAssets, bool includeFallbacks, FontStyles fontStyle, FontWeight fontWeight, out bool isAlternativeTypeface)
	{
		return null;
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x66F5780", Offset = "0x66F4780", VA = "0x66F5780")]
	public static TMP_SpriteCharacter GetSpriteCharacterFromSpriteAsset(uint unicode, TMP_SpriteAsset spriteAsset, bool includeFallbacks)
	{
		return null;
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x66F5580", Offset = "0x66F4580", VA = "0x66F5580")]
	private static TMP_SpriteCharacter GetSpriteCharacterFromSpriteAsset_Internal(uint unicode, TMP_SpriteAsset spriteAsset, bool includeFallbacks)
	{
		return null;
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x66F5AF0", Offset = "0x66F4AF0", VA = "0x66F5AF0")]
	internal static uint GetCodePoint(string text, ref int index)
	{
		return default(uint);
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x66F5BD0", Offset = "0x66F4BD0", VA = "0x66F5BD0")]
	internal static uint GetCodePoint(uint[] codesPoints, ref int index)
	{
		return default(uint);
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x66F4670", Offset = "0x66F3670", VA = "0x66F4670")]
	public TMP_FontAssetUtilities()
	{
	}
}
