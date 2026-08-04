// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.SpriteAsset
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4EB68E0", Offset = "0x4EB68E0", VA = "0x4EB68E0")]
		get
		{
			return default(FaceInfo);
		}
		[Token(Token = "0x60000B8")]
		[Address(RVA = "0x4EB6920", Offset = "0x4EB6920", VA = "0x4EB6920")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public Texture spriteSheet
	{
		[Token(Token = "0x60000B9")]
		[Address(RVA = "0x4EB6970", Offset = "0x4EB6970", VA = "0x4EB6970")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000BA")]
		[Address(RVA = "0x4EB6980", Offset = "0x4EB6980", VA = "0x4EB6980")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public List<SpriteCharacter> spriteCharacterTable
	{
		[Token(Token = "0x60000BB")]
		[Address(RVA = "0x4EB69A0", Offset = "0x4EB69A0", VA = "0x4EB69A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000BC")]
		[Address(RVA = "0x4EB6FB0", Offset = "0x4EB6FB0", VA = "0x4EB6FB0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public Dictionary<uint, SpriteCharacter> spriteCharacterLookupTable
	{
		[Token(Token = "0x60000BD")]
		[Address(RVA = "0x4EB3160", Offset = "0x4EB3160", VA = "0x4EB3160")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000BE")]
		[Address(RVA = "0x4EB6FD0", Offset = "0x4EB6FD0", VA = "0x4EB6FD0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public List<SpriteGlyph> spriteGlyphTable
	{
		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x4EB6FF0", Offset = "0x4EB6FF0", VA = "0x4EB6FF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000C0")]
		[Address(RVA = "0x4EB7000", Offset = "0x4EB7000", VA = "0x4EB7000")]
		internal set
		{
		}
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x4EB7020", Offset = "0x4EB7020", VA = "0x4EB7020")]
	private void Awake()
	{
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x4EB69D0", Offset = "0x4EB69D0", VA = "0x4EB69D0")]
	public void UpdateLookupTables()
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x4EB7040", Offset = "0x4EB7040", VA = "0x4EB7040")]
	public int GetSpriteIndexFromHashcode(int hashCode)
	{
		return default(int);
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x4EB70D0", Offset = "0x4EB70D0", VA = "0x4EB70D0")]
	public int GetSpriteIndexFromUnicode(uint unicode)
	{
		return default(int);
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x4EB7170", Offset = "0x4EB7170", VA = "0x4EB7170")]
	public int GetSpriteIndexFromName(string name)
	{
		return default(int);
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x4EB7220", Offset = "0x4EB7220", VA = "0x4EB7220")]
	public static SpriteAsset SearchForSpriteByUnicode(SpriteAsset spriteAsset, uint unicode, bool includeFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x4EB7460", Offset = "0x4EB7460", VA = "0x4EB7460")]
	private static SpriteAsset SearchForSpriteByUnicodeInternal(List<SpriteAsset> spriteAssets, uint unicode, bool includeFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x4EB75F0", Offset = "0x4EB75F0", VA = "0x4EB75F0")]
	private static SpriteAsset SearchForSpriteByUnicodeInternal(SpriteAsset spriteAsset, uint unicode, bool includeFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x4EB7710", Offset = "0x4EB7710", VA = "0x4EB7710")]
	public static SpriteAsset SearchForSpriteByHashCode(SpriteAsset spriteAsset, int hashCode, bool includeFallbacks, out int spriteIndex, [Optional] TextSettings textSettings)
	{
		return null;
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x4EB7BC0", Offset = "0x4EB7BC0", VA = "0x4EB7BC0")]
	private static SpriteAsset SearchForSpriteByHashCodeInternal(List<SpriteAsset> spriteAssets, int hashCode, bool searchFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x4EB7D60", Offset = "0x4EB7D60", VA = "0x4EB7D60")]
	private static SpriteAsset SearchForSpriteByHashCodeInternal(SpriteAsset spriteAsset, int hashCode, bool searchFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x4EB7E70", Offset = "0x4EB7E70", VA = "0x4EB7E70")]
	public void SortGlyphTable()
	{
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x4EB7FD0", Offset = "0x4EB7FD0", VA = "0x4EB7FD0")]
	internal void SortCharacterTable()
	{
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x4EB8130", Offset = "0x4EB8130", VA = "0x4EB8130")]
	internal void SortGlyphAndCharacterTables()
	{
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x4EB8150", Offset = "0x4EB8150", VA = "0x4EB8150")]
	public SpriteAsset()
	{
	}
}
