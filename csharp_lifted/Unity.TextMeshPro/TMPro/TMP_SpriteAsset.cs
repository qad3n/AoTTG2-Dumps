// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_SpriteAsset
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Serialization;

namespace TMPro;

[Token(Token = "0x2000074")]
[TMPro.TMPHelpURL("Sprites")]
[ExcludeFromPreset]
public class TMP_SpriteAsset : TMP_Asset
{
	[Token(Token = "0x4000393")]
	[FieldOffset(Offset = "0x98")]
	internal Dictionary<int, int> m_NameLookup;

	[Token(Token = "0x4000394")]
	[FieldOffset(Offset = "0xA0")]
	internal Dictionary<uint, int> m_GlyphIndexLookup;

	[Token(Token = "0x4000395")]
	[FieldOffset(Offset = "0xA8")]
	public Texture spriteSheet;

	[Token(Token = "0x4000396")]
	[FieldOffset(Offset = "0xB0")]
	[SerializeField]
	private List<TMP_SpriteCharacter> m_SpriteCharacterTable;

	[Token(Token = "0x4000397")]
	[FieldOffset(Offset = "0xB8")]
	internal Dictionary<uint, TMP_SpriteCharacter> m_SpriteCharacterLookup;

	[Token(Token = "0x4000398")]
	[FieldOffset(Offset = "0xC0")]
	[FormerlySerializedAs("m_SpriteGlyphTable")]
	[SerializeField]
	private List<TMP_SpriteGlyph> m_GlyphTable;

	[Token(Token = "0x4000399")]
	[FieldOffset(Offset = "0xC8")]
	internal Dictionary<uint, TMP_SpriteGlyph> m_SpriteGlyphLookup;

	[Token(Token = "0x400039A")]
	[FieldOffset(Offset = "0xD0")]
	public List<TMP_Sprite> spriteInfoList;

	[Token(Token = "0x400039B")]
	[FieldOffset(Offset = "0xD8")]
	[SerializeField]
	public List<TMP_SpriteAsset> fallbackSpriteAssets;

	[Token(Token = "0x400039C")]
	[FieldOffset(Offset = "0xE0")]
	internal bool m_IsSpriteAssetLookupTablesDirty;

	[Token(Token = "0x400039D")]
	[FieldOffset(Offset = "0x0")]
	private static HashSet<int> k_searchedSpriteAssets;

	[Token(Token = "0x170000E6")]
	public List<TMP_SpriteCharacter> spriteCharacterTable
	{
		[Token(Token = "0x60003B7")]
		[Address(RVA = "0x673A990", Offset = "0x6739990", VA = "0x673A990")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003B8")]
		[Address(RVA = "0x673B060", Offset = "0x673A060", VA = "0x673B060")]
		internal set
		{
		}
	}

	[Token(Token = "0x170000E7")]
	public Dictionary<uint, TMP_SpriteCharacter> spriteCharacterLookupTable
	{
		[Token(Token = "0x60003B9")]
		[Address(RVA = "0x673B080", Offset = "0x673A080", VA = "0x673B080")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003BA")]
		[Address(RVA = "0x673B0A0", Offset = "0x673A0A0", VA = "0x673B0A0")]
		internal set
		{
		}
	}

	[Token(Token = "0x170000E8")]
	public List<TMP_SpriteGlyph> spriteGlyphTable
	{
		[Token(Token = "0x60003BB")]
		[Address(RVA = "0x673B0C0", Offset = "0x673A0C0", VA = "0x673B0C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003BC")]
		[Address(RVA = "0x673B0D0", Offset = "0x673A0D0", VA = "0x673B0D0")]
		internal set
		{
		}
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x673B0F0", Offset = "0x673A0F0", VA = "0x673B0F0")]
	private void Awake()
	{
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x673B660", Offset = "0x673A660", VA = "0x673B660")]
	private Material GetDefaultSpriteMaterial()
	{
		return null;
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x673AA20", Offset = "0x6739A20", VA = "0x673AA20")]
	public void UpdateLookupTables()
	{
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x673B730", Offset = "0x673A730", VA = "0x673B730")]
	public int GetSpriteIndexFromHashcode(int hashCode)
	{
		return default(int);
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x673B7B0", Offset = "0x673A7B0", VA = "0x673B7B0")]
	public int GetSpriteIndexFromUnicode(uint unicode)
	{
		return default(int);
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x673B840", Offset = "0x673A840", VA = "0x673B840")]
	public int GetSpriteIndexFromName(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x673B950", Offset = "0x673A950", VA = "0x673B950")]
	public static TMP_SpriteAsset SearchForSpriteByUnicode(TMP_SpriteAsset spriteAsset, uint unicode, bool includeFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x673BCC0", Offset = "0x673ACC0", VA = "0x673BCC0")]
	private static TMP_SpriteAsset SearchForSpriteByUnicodeInternal(List<TMP_SpriteAsset> spriteAssets, uint unicode, bool includeFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x673BE50", Offset = "0x673AE50", VA = "0x673BE50")]
	private static TMP_SpriteAsset SearchForSpriteByUnicodeInternal(TMP_SpriteAsset spriteAsset, uint unicode, bool includeFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x673BF50", Offset = "0x673AF50", VA = "0x673BF50")]
	public static TMP_SpriteAsset SearchForSpriteByHashCode(TMP_SpriteAsset spriteAsset, int hashCode, bool includeFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x673C580", Offset = "0x673B580", VA = "0x673C580")]
	private static TMP_SpriteAsset SearchForSpriteByHashCodeInternal(List<TMP_SpriteAsset> spriteAssets, int hashCode, bool searchFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x673C710", Offset = "0x673B710", VA = "0x673C710")]
	private static TMP_SpriteAsset SearchForSpriteByHashCodeInternal(TMP_SpriteAsset spriteAsset, int hashCode, bool searchFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x673C800", Offset = "0x673B800", VA = "0x673C800")]
	public void SortGlyphTable()
	{
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x673C960", Offset = "0x673B960", VA = "0x673C960")]
	internal void SortCharacterTable()
	{
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x673CAC0", Offset = "0x673BAC0", VA = "0x673CAC0")]
	internal void SortGlyphAndCharacterTables()
	{
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x673B170", Offset = "0x673A170", VA = "0x673B170")]
	private void UpgradeSpriteAsset()
	{
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x673CB10", Offset = "0x673BB10", VA = "0x673CB10")]
	public TMP_SpriteAsset()
	{
	}
}
