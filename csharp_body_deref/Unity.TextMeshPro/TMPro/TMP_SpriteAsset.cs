using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.TextCore;

namespace TMPro;

[Token(Token = "0x2000069")]
[ExcludeFromPreset]
public class TMP_SpriteAsset : TMP_Asset
{
	[Token(Token = "0x400032F")]
	[FieldOffset(Offset = "0x30")]
	internal Dictionary<int, int> m_NameLookup;

	[Token(Token = "0x4000330")]
	[FieldOffset(Offset = "0x38")]
	internal Dictionary<uint, int> m_GlyphIndexLookup;

	[Token(Token = "0x4000331")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private string m_Version;

	[Token(Token = "0x4000332")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	internal FaceInfo m_FaceInfo;

	[Token(Token = "0x4000333")]
	[FieldOffset(Offset = "0xA8")]
	public Texture spriteSheet;

	[Token(Token = "0x4000334")]
	[FieldOffset(Offset = "0xB0")]
	[SerializeField]
	private List<TMP_SpriteCharacter> m_SpriteCharacterTable;

	[Token(Token = "0x4000335")]
	[FieldOffset(Offset = "0xB8")]
	internal Dictionary<uint, TMP_SpriteCharacter> m_SpriteCharacterLookup;

	[Token(Token = "0x4000336")]
	[FieldOffset(Offset = "0xC0")]
	[SerializeField]
	private List<TMP_SpriteGlyph> m_SpriteGlyphTable;

	[Token(Token = "0x4000337")]
	[FieldOffset(Offset = "0xC8")]
	internal Dictionary<uint, TMP_SpriteGlyph> m_SpriteGlyphLookup;

	[Token(Token = "0x4000338")]
	[FieldOffset(Offset = "0xD0")]
	public List<TMP_Sprite> spriteInfoList;

	[Token(Token = "0x4000339")]
	[FieldOffset(Offset = "0xD8")]
	[SerializeField]
	public List<TMP_SpriteAsset> fallbackSpriteAssets;

	[Token(Token = "0x400033A")]
	[FieldOffset(Offset = "0xE0")]
	internal bool m_IsSpriteAssetLookupTablesDirty;

	[Token(Token = "0x400033B")]
	[FieldOffset(Offset = "0x0")]
	private static HashSet<int> k_searchedSpriteAssets;

	[Token(Token = "0x170000C1")]
	public string version
	{
		[Token(Token = "0x6000322")]
		[Address(RVA = "0x4940F90", Offset = "0x4940F90", VA = "0x4940F90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000323")]
		[Address(RVA = "0x4940FA0", Offset = "0x4940FA0", VA = "0x4940FA0")]
		internal set
		{
		}
	}

	[Token(Token = "0x170000C2")]
	public FaceInfo faceInfo
	{
		[Token(Token = "0x6000324")]
		[Address(RVA = "0x4940FB0", Offset = "0x4940FB0", VA = "0x4940FB0")]
		get
		{
			return default(FaceInfo);
		}
		[Token(Token = "0x6000325")]
		[Address(RVA = "0x4940FF0", Offset = "0x4940FF0", VA = "0x4940FF0")]
		internal set
		{
		}
	}

	[Token(Token = "0x170000C3")]
	public List<TMP_SpriteCharacter> spriteCharacterTable
	{
		[Token(Token = "0x6000326")]
		[Address(RVA = "0x4940F00", Offset = "0x4940F00", VA = "0x4940F00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000327")]
		[Address(RVA = "0x4941670", Offset = "0x4941670", VA = "0x4941670")]
		internal set
		{
		}
	}

	[Token(Token = "0x170000C4")]
	public Dictionary<uint, TMP_SpriteCharacter> spriteCharacterLookupTable
	{
		[Token(Token = "0x6000328")]
		[Address(RVA = "0x4941690", Offset = "0x4941690", VA = "0x4941690")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000329")]
		[Address(RVA = "0x49416B0", Offset = "0x49416B0", VA = "0x49416B0")]
		internal set
		{
		}
	}

	[Token(Token = "0x170000C5")]
	public List<TMP_SpriteGlyph> spriteGlyphTable
	{
		[Token(Token = "0x600032A")]
		[Address(RVA = "0x49416D0", Offset = "0x49416D0", VA = "0x49416D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600032B")]
		[Address(RVA = "0x49416E0", Offset = "0x49416E0", VA = "0x49416E0")]
		internal set
		{
		}
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x4941700", Offset = "0x4941700", VA = "0x4941700")]
	private void Awake()
	{
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x4941C90", Offset = "0x4941C90", VA = "0x4941C90")]
	private Material GetDefaultSpriteMaterial()
	{
		return null;
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x4941040", Offset = "0x4941040", VA = "0x4941040")]
	public void UpdateLookupTables()
	{
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x4941D70", Offset = "0x4941D70", VA = "0x4941D70")]
	public int GetSpriteIndexFromHashcode(int hashCode)
	{
		return default(int);
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x4941DF0", Offset = "0x4941DF0", VA = "0x4941DF0")]
	public int GetSpriteIndexFromUnicode(uint unicode)
	{
		return default(int);
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x4941E80", Offset = "0x4941E80", VA = "0x4941E80")]
	public int GetSpriteIndexFromName(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x4942040", Offset = "0x4942040", VA = "0x4942040")]
	public static TMP_SpriteAsset SearchForSpriteByUnicode(TMP_SpriteAsset spriteAsset, uint unicode, bool includeFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x49422C0", Offset = "0x49422C0", VA = "0x49422C0")]
	private static TMP_SpriteAsset SearchForSpriteByUnicodeInternal(List<TMP_SpriteAsset> spriteAssets, uint unicode, bool includeFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x4942450", Offset = "0x4942450", VA = "0x4942450")]
	private static TMP_SpriteAsset SearchForSpriteByUnicodeInternal(TMP_SpriteAsset spriteAsset, uint unicode, bool includeFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x4942550", Offset = "0x4942550", VA = "0x4942550")]
	public static TMP_SpriteAsset SearchForSpriteByHashCode(TMP_SpriteAsset spriteAsset, int hashCode, bool includeFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x4942970", Offset = "0x4942970", VA = "0x4942970")]
	private static TMP_SpriteAsset SearchForSpriteByHashCodeInternal(List<TMP_SpriteAsset> spriteAssets, int hashCode, bool searchFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x4942B00", Offset = "0x4942B00", VA = "0x4942B00")]
	private static TMP_SpriteAsset SearchForSpriteByHashCodeInternal(TMP_SpriteAsset spriteAsset, int hashCode, bool searchFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x4942BF0", Offset = "0x4942BF0", VA = "0x4942BF0")]
	public void SortGlyphTable()
	{
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x4942D50", Offset = "0x4942D50", VA = "0x4942D50")]
	internal void SortCharacterTable()
	{
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x4942EB0", Offset = "0x4942EB0", VA = "0x4942EB0")]
	internal void SortGlyphAndCharacterTables()
	{
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x4941780", Offset = "0x4941780", VA = "0x4941780")]
	private void UpgradeSpriteAsset()
	{
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x4942FC0", Offset = "0x4942FC0", VA = "0x4942FC0")]
	public TMP_SpriteAsset()
	{
	}
}
