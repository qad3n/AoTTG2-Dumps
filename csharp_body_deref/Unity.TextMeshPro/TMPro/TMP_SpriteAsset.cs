// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_SpriteAsset
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x2D42750", Offset = "0x2D40D50", VA = "0x182D42750")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003B8")]
		[Address(RVA = "0x1537500", Offset = "0x1535B00", VA = "0x181537500")]
		internal set
		{
		}
	}

	[Token(Token = "0x170000E7")]
	public Dictionary<uint, TMP_SpriteCharacter> spriteCharacterLookupTable
	{
		[Token(Token = "0x60003B9")]
		[Address(RVA = "0x2D42710", Offset = "0x2D40D10", VA = "0x182D42710")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003BA")]
		[Address(RVA = "0x87BC50", Offset = "0x87A250", VA = "0x18087BC50")]
		internal set
		{
		}
	}

	[Token(Token = "0x170000E8")]
	public List<TMP_SpriteGlyph> spriteGlyphTable
	{
		[Token(Token = "0x60003BB")]
		[Address(RVA = "0xC8FF80", Offset = "0xC8E580", VA = "0x180C8FF80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60003BC")]
		[Address(RVA = "0xC8FFC0", Offset = "0xC8E5C0", VA = "0x180C8FFC0")]
		internal set
		{
		}
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x2D40680", Offset = "0x2D3EC80", VA = "0x182D40680")]
	private void Awake()
	{
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x2D40700", Offset = "0x2D3ED00", VA = "0x182D40700")]
	private Material GetDefaultSpriteMaterial()
	{
		return null;
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x2D41B40", Offset = "0x2D40140", VA = "0x182D41B40")]
	public void UpdateLookupTables()
	{
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x2D407D0", Offset = "0x2D3EDD0", VA = "0x182D407D0")]
	public int GetSpriteIndexFromHashcode(int hashCode)
	{
		return default(int);
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x2D408E0", Offset = "0x2D3EEE0", VA = "0x182D408E0")]
	public int GetSpriteIndexFromUnicode(uint unicode)
	{
		return default(int);
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x2D40860", Offset = "0x2D3EE60", VA = "0x182D40860")]
	public int GetSpriteIndexFromName(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x2D41280", Offset = "0x2D3F880", VA = "0x182D41280")]
	public static TMP_SpriteAsset SearchForSpriteByUnicode(TMP_SpriteAsset spriteAsset, uint unicode, bool includeFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x2D41060", Offset = "0x2D3F660", VA = "0x182D41060")]
	private static TMP_SpriteAsset SearchForSpriteByUnicodeInternal(List<TMP_SpriteAsset> spriteAssets, uint unicode, bool includeFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x2D411D0", Offset = "0x2D3F7D0", VA = "0x182D411D0")]
	private static TMP_SpriteAsset SearchForSpriteByUnicodeInternal(TMP_SpriteAsset spriteAsset, uint unicode, bool includeFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x2D40BA0", Offset = "0x2D3F1A0", VA = "0x182D40BA0")]
	public static TMP_SpriteAsset SearchForSpriteByHashCode(TMP_SpriteAsset spriteAsset, int hashCode, bool includeFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x2D40A30", Offset = "0x2D3F030", VA = "0x182D40A30")]
	private static TMP_SpriteAsset SearchForSpriteByHashCodeInternal(List<TMP_SpriteAsset> spriteAssets, int hashCode, bool searchFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x2D40980", Offset = "0x2D3EF80", VA = "0x182D40980")]
	private static TMP_SpriteAsset SearchForSpriteByHashCodeInternal(TMP_SpriteAsset spriteAsset, int hashCode, bool searchFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x2D419C0", Offset = "0x2D3FFC0", VA = "0x182D419C0")]
	public void SortGlyphTable()
	{
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x2D41570", Offset = "0x2D3FB70", VA = "0x182D41570")]
	internal void SortCharacterTable()
	{
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x2D416F0", Offset = "0x2D3FCF0", VA = "0x182D416F0")]
	internal void SortGlyphAndCharacterTables()
	{
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x2D42120", Offset = "0x2D40720", VA = "0x182D42120")]
	private void UpgradeSpriteAsset()
	{
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x2D42640", Offset = "0x2D40C40", VA = "0x182D42640")]
	public TMP_SpriteAsset()
	{
	}
}
