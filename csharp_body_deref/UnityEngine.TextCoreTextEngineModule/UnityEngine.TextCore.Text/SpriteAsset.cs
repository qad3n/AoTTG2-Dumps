using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Serialization;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000016")]
[ExcludeFromPreset]
public class SpriteAsset : TextAsset
{
	[Token(Token = "0x40000B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal Dictionary<int, int> m_NameLookup;

	[Token(Token = "0x40000B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal Dictionary<uint, int> m_GlyphIndexLookup;

	[Token(Token = "0x40000BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	[SerializeField]
	internal FaceInfo m_FaceInfo;

	[Token(Token = "0x40000BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	[SerializeField]
	[FormerlySerializedAs("spriteSheet")]
	internal Texture m_SpriteAtlasTexture;

	[Token(Token = "0x40000BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	[SerializeField]
	private List<SpriteCharacter> m_SpriteCharacterTable;

	[Token(Token = "0x40000BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	internal Dictionary<uint, SpriteCharacter> m_SpriteCharacterLookup;

	[Token(Token = "0x40000BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	[SerializeField]
	private List<SpriteGlyph> m_SpriteGlyphTable;

	[Token(Token = "0x40000BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	internal Dictionary<uint, SpriteGlyph> m_SpriteGlyphLookup;

	[Token(Token = "0x40000C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	[SerializeField]
	public List<SpriteAsset> fallbackSpriteAssets;

	[Token(Token = "0x40000C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	internal bool m_IsSpriteAssetLookupTablesDirty;

	[Token(Token = "0x40000C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static HashSet<int> k_searchedSpriteAssets;

	[Token(Token = "0x17000020")]
	public FaceInfo faceInfo
	{
		[Token(Token = "0x60000B7")]
		[Address(RVA = "0x4B8EFB0", Offset = "0x4B8EFB0", VA = "0x4B8EFB0")]
		get
		{
			return default(FaceInfo);
		}
		[Token(Token = "0x60000B8")]
		[Address(RVA = "0x4B8EFF0", Offset = "0x4B8EFF0", VA = "0x4B8EFF0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public Texture spriteSheet
	{
		[Token(Token = "0x60000B9")]
		[Address(RVA = "0x4B8F040", Offset = "0x4B8F040", VA = "0x4B8F040")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000BA")]
		[Address(RVA = "0x4B8F050", Offset = "0x4B8F050", VA = "0x4B8F050")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public List<SpriteCharacter> spriteCharacterTable
	{
		[Token(Token = "0x60000BB")]
		[Address(RVA = "0x4B8F070", Offset = "0x4B8F070", VA = "0x4B8F070")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000BC")]
		[Address(RVA = "0x4B8F680", Offset = "0x4B8F680", VA = "0x4B8F680")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public Dictionary<uint, SpriteCharacter> spriteCharacterLookupTable
	{
		[Token(Token = "0x60000BD")]
		[Address(RVA = "0x4B8B830", Offset = "0x4B8B830", VA = "0x4B8B830")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000BE")]
		[Address(RVA = "0x4B8F6A0", Offset = "0x4B8F6A0", VA = "0x4B8F6A0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public List<SpriteGlyph> spriteGlyphTable
	{
		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x4B8F6C0", Offset = "0x4B8F6C0", VA = "0x4B8F6C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000C0")]
		[Address(RVA = "0x4B8F6D0", Offset = "0x4B8F6D0", VA = "0x4B8F6D0")]
		internal set
		{
		}
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x4B8F6F0", Offset = "0x4B8F6F0", VA = "0x4B8F6F0")]
	private void Awake()
	{
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x4B8F0A0", Offset = "0x4B8F0A0", VA = "0x4B8F0A0")]
	public void UpdateLookupTables()
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x4B8F710", Offset = "0x4B8F710", VA = "0x4B8F710")]
	public int GetSpriteIndexFromHashcode(int hashCode)
	{
		return default(int);
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x4B8F7A0", Offset = "0x4B8F7A0", VA = "0x4B8F7A0")]
	public int GetSpriteIndexFromUnicode(uint unicode)
	{
		return default(int);
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x4B8F840", Offset = "0x4B8F840", VA = "0x4B8F840")]
	public int GetSpriteIndexFromName(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x4B8F8F0", Offset = "0x4B8F8F0", VA = "0x4B8F8F0")]
	public static SpriteAsset SearchForSpriteByUnicode(SpriteAsset spriteAsset, uint unicode, bool includeFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x4B8FB30", Offset = "0x4B8FB30", VA = "0x4B8FB30")]
	private static SpriteAsset SearchForSpriteByUnicodeInternal(List<SpriteAsset> spriteAssets, uint unicode, bool includeFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x4B8FCC0", Offset = "0x4B8FCC0", VA = "0x4B8FCC0")]
	private static SpriteAsset SearchForSpriteByUnicodeInternal(SpriteAsset spriteAsset, uint unicode, bool includeFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x4B8FDE0", Offset = "0x4B8FDE0", VA = "0x4B8FDE0")]
	public static SpriteAsset SearchForSpriteByHashCode(SpriteAsset spriteAsset, int hashCode, bool includeFallbacks, out int spriteIndex, [Optional] TextSettings textSettings)
	{
		return null;
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x4B90290", Offset = "0x4B90290", VA = "0x4B90290")]
	private static SpriteAsset SearchForSpriteByHashCodeInternal(List<SpriteAsset> spriteAssets, int hashCode, bool searchFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x4B90430", Offset = "0x4B90430", VA = "0x4B90430")]
	private static SpriteAsset SearchForSpriteByHashCodeInternal(SpriteAsset spriteAsset, int hashCode, bool searchFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x4B90540", Offset = "0x4B90540", VA = "0x4B90540")]
	public void SortGlyphTable()
	{
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x4B906A0", Offset = "0x4B906A0", VA = "0x4B906A0")]
	internal void SortCharacterTable()
	{
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x4B90800", Offset = "0x4B90800", VA = "0x4B90800")]
	internal void SortGlyphAndCharacterTables()
	{
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x4B90820", Offset = "0x4B90820", VA = "0x4B90820")]
	public SpriteAsset()
	{
	}
}
