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
using UnityEngine.TextCore;

namespace TMPro;

[Token(Token = "0x200007F")]
[ExcludeFromPreset]
public class TMP_SpriteAsset : TMP_Asset
{
	[Token(Token = "0x4000423")]
	[FieldOffset(Offset = "0x30")]
	internal Dictionary<int, int> m_NameLookup;

	[Token(Token = "0x4000424")]
	[FieldOffset(Offset = "0x38")]
	internal Dictionary<uint, int> m_GlyphIndexLookup;

	[Token(Token = "0x4000425")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private string m_Version;

	[Token(Token = "0x4000426")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	internal FaceInfo m_FaceInfo;

	[Token(Token = "0x4000427")]
	[FieldOffset(Offset = "0xA8")]
	public Texture spriteSheet;

	[Token(Token = "0x4000428")]
	[FieldOffset(Offset = "0xB0")]
	[SerializeField]
	private List<TMP_SpriteCharacter> m_SpriteCharacterTable;

	[Token(Token = "0x4000429")]
	[FieldOffset(Offset = "0xB8")]
	internal Dictionary<uint, TMP_SpriteCharacter> m_SpriteCharacterLookup;

	[Token(Token = "0x400042A")]
	[FieldOffset(Offset = "0xC0")]
	[SerializeField]
	private List<TMP_SpriteGlyph> m_SpriteGlyphTable;

	[Token(Token = "0x400042B")]
	[FieldOffset(Offset = "0xC8")]
	internal Dictionary<uint, TMP_SpriteGlyph> m_SpriteGlyphLookup;

	[Token(Token = "0x400042C")]
	[FieldOffset(Offset = "0xD0")]
	public List<TMP_Sprite> spriteInfoList;

	[Token(Token = "0x400042D")]
	[FieldOffset(Offset = "0xD8")]
	[SerializeField]
	public List<TMP_SpriteAsset> fallbackSpriteAssets;

	[Token(Token = "0x400042E")]
	[FieldOffset(Offset = "0xE0")]
	internal bool m_IsSpriteAssetLookupTablesDirty;

	[Token(Token = "0x400042F")]
	[FieldOffset(Offset = "0x0")]
	private static HashSet<int> k_searchedSpriteAssets;

	[Token(Token = "0x170000E2")]
	public string version
	{
		[Token(Token = "0x6000413")]
		[Address(RVA = "0x4C8E510", Offset = "0x4C8E510", VA = "0x4C8E510")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000414")]
		[Address(RVA = "0x4C8E520", Offset = "0x4C8E520", VA = "0x4C8E520")]
		internal set
		{
		}
	}

	[Token(Token = "0x170000E3")]
	public FaceInfo faceInfo
	{
		[Token(Token = "0x6000415")]
		[Address(RVA = "0x4C8E530", Offset = "0x4C8E530", VA = "0x4C8E530")]
		get
		{
			return default(FaceInfo);
		}
		[Token(Token = "0x6000416")]
		[Address(RVA = "0x4C8E570", Offset = "0x4C8E570", VA = "0x4C8E570")]
		internal set
		{
		}
	}

	[Token(Token = "0x170000E4")]
	public List<TMP_SpriteCharacter> spriteCharacterTable
	{
		[Token(Token = "0x6000417")]
		[Address(RVA = "0x4C8E480", Offset = "0x4C8E480", VA = "0x4C8E480")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000418")]
		[Address(RVA = "0x4C8EBF0", Offset = "0x4C8EBF0", VA = "0x4C8EBF0")]
		internal set
		{
		}
	}

	[Token(Token = "0x170000E5")]
	public Dictionary<uint, TMP_SpriteCharacter> spriteCharacterLookupTable
	{
		[Token(Token = "0x6000419")]
		[Address(RVA = "0x4C8EC10", Offset = "0x4C8EC10", VA = "0x4C8EC10")]
		get
		{
			return null;
		}
		[Token(Token = "0x600041A")]
		[Address(RVA = "0x4C8EC30", Offset = "0x4C8EC30", VA = "0x4C8EC30")]
		internal set
		{
		}
	}

	[Token(Token = "0x170000E6")]
	public List<TMP_SpriteGlyph> spriteGlyphTable
	{
		[Token(Token = "0x600041B")]
		[Address(RVA = "0x4C8EC50", Offset = "0x4C8EC50", VA = "0x4C8EC50")]
		get
		{
			return null;
		}
		[Token(Token = "0x600041C")]
		[Address(RVA = "0x4C8EC60", Offset = "0x4C8EC60", VA = "0x4C8EC60")]
		internal set
		{
		}
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x4C8EC80", Offset = "0x4C8EC80", VA = "0x4C8EC80")]
	private void Awake()
	{
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x4C8F210", Offset = "0x4C8F210", VA = "0x4C8F210")]
	private Material GetDefaultSpriteMaterial()
	{
		return null;
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x4C8E5C0", Offset = "0x4C8E5C0", VA = "0x4C8E5C0")]
	public void UpdateLookupTables()
	{
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x4C8F2F0", Offset = "0x4C8F2F0", VA = "0x4C8F2F0")]
	public int GetSpriteIndexFromHashcode(int hashCode)
	{
		return default(int);
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x4C8F370", Offset = "0x4C8F370", VA = "0x4C8F370")]
	public int GetSpriteIndexFromUnicode(uint unicode)
	{
		return default(int);
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x4C8F400", Offset = "0x4C8F400", VA = "0x4C8F400")]
	public int GetSpriteIndexFromName(string name)
	{
		return default(int);
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x4C8F5C0", Offset = "0x4C8F5C0", VA = "0x4C8F5C0")]
	public static TMP_SpriteAsset SearchForSpriteByUnicode(TMP_SpriteAsset spriteAsset, uint unicode, bool includeFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x4C8F840", Offset = "0x4C8F840", VA = "0x4C8F840")]
	private static TMP_SpriteAsset SearchForSpriteByUnicodeInternal(List<TMP_SpriteAsset> spriteAssets, uint unicode, bool includeFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x4C8F9D0", Offset = "0x4C8F9D0", VA = "0x4C8F9D0")]
	private static TMP_SpriteAsset SearchForSpriteByUnicodeInternal(TMP_SpriteAsset spriteAsset, uint unicode, bool includeFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x4C8FAD0", Offset = "0x4C8FAD0", VA = "0x4C8FAD0")]
	public static TMP_SpriteAsset SearchForSpriteByHashCode(TMP_SpriteAsset spriteAsset, int hashCode, bool includeFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x4C8FEF0", Offset = "0x4C8FEF0", VA = "0x4C8FEF0")]
	private static TMP_SpriteAsset SearchForSpriteByHashCodeInternal(List<TMP_SpriteAsset> spriteAssets, int hashCode, bool searchFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x4C90080", Offset = "0x4C90080", VA = "0x4C90080")]
	private static TMP_SpriteAsset SearchForSpriteByHashCodeInternal(TMP_SpriteAsset spriteAsset, int hashCode, bool searchFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x4C90170", Offset = "0x4C90170", VA = "0x4C90170")]
	public void SortGlyphTable()
	{
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x4C902D0", Offset = "0x4C902D0", VA = "0x4C902D0")]
	internal void SortCharacterTable()
	{
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x4C90430", Offset = "0x4C90430", VA = "0x4C90430")]
	internal void SortGlyphAndCharacterTables()
	{
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x4C8ED00", Offset = "0x4C8ED00", VA = "0x4C8ED00")]
	private void UpgradeSpriteAsset()
	{
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x4C90540", Offset = "0x4C90540", VA = "0x4C90540")]
	public TMP_SpriteAsset()
	{
	}
}
