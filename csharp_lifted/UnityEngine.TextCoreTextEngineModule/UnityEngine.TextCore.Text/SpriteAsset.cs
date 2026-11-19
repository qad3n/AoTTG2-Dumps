// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.SpriteAsset
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Serialization;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000036")]
[ExcludeFromPreset]
[HelpURL("https://docs.unity3d.com/2023.3/Documentation/Manual/UIE-sprite.html")]
public class SpriteAsset : TextAsset
{
	[Token(Token = "0x400018F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal Dictionary<int, int> m_NameLookup;

	[Token(Token = "0x4000190")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	internal Dictionary<uint, int> m_GlyphIndexLookup;

	[Token(Token = "0x4000191")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	[SerializeField]
	internal FaceInfo m_FaceInfo;

	[Token(Token = "0x4000192")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	[SerializeField]
	[FormerlySerializedAs("spriteSheet")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal Texture m_SpriteAtlasTexture;

	[Token(Token = "0x4000195")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	[SerializeField]
	private List<SpriteCharacter> m_SpriteCharacterTable;

	[Token(Token = "0x4000196")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	internal Dictionary<uint, SpriteCharacter> m_SpriteCharacterLookup;

	[Token(Token = "0x4000197")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	[SerializeField]
	private List<SpriteGlyph> m_SpriteGlyphTable;

	[Token(Token = "0x4000198")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	internal Dictionary<uint, SpriteGlyph> m_SpriteGlyphLookup;

	[Token(Token = "0x4000199")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	[SerializeField]
	public List<SpriteAsset> fallbackSpriteAssets;

	[Token(Token = "0x400019A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	internal bool m_IsSpriteAssetLookupTablesDirty;

	[Token(Token = "0x17000033")]
	public FaceInfo faceInfo
	{
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x6A3F740", Offset = "0x6A3E740", VA = "0x6A3F740")]
		get
		{
			return default(FaceInfo);
		}
		[Token(Token = "0x600015D")]
		[Address(RVA = "0x6A3F780", Offset = "0x6A3E780", VA = "0x6A3F780")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public Texture spriteSheet
	{
		[Token(Token = "0x600015E")]
		[Address(RVA = "0x6A3F7D0", Offset = "0x6A3E7D0", VA = "0x6A3F7D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600015F")]
		[Address(RVA = "0x6A3F7E0", Offset = "0x6A3E7E0", VA = "0x6A3F7E0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000035")]
	internal float width
	{
		[Token(Token = "0x6000160")]
		[Address(RVA = "0x6A3F860", Offset = "0x6A3E860", VA = "0x6A3F860")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000161")]
		[Address(RVA = "0x6A3F870", Offset = "0x6A3E870", VA = "0x6A3F870")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000036")]
	internal float height
	{
		[Token(Token = "0x6000162")]
		[Address(RVA = "0x6A3F880", Offset = "0x6A3E880", VA = "0x6A3F880")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000163")]
		[Address(RVA = "0x6A3F890", Offset = "0x6A3E890", VA = "0x6A3F890")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000037")]
	public List<SpriteCharacter> spriteCharacterTable
	{
		[Token(Token = "0x6000164")]
		[Address(RVA = "0x6A3F8A0", Offset = "0x6A3E8A0", VA = "0x6A3F8A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000165")]
		[Address(RVA = "0x6A3FF80", Offset = "0x6A3EF80", VA = "0x6A3FF80")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public Dictionary<uint, SpriteCharacter> spriteCharacterLookupTable
	{
		[Token(Token = "0x6000166")]
		[Address(RVA = "0x6A3F560", Offset = "0x6A3E560", VA = "0x6A3F560")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000167")]
		[Address(RVA = "0x6A3FFA0", Offset = "0x6A3EFA0", VA = "0x6A3FFA0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000039")]
	public List<SpriteGlyph> spriteGlyphTable
	{
		[Token(Token = "0x6000168")]
		[Address(RVA = "0x6A3FFC0", Offset = "0x6A3EFC0", VA = "0x6A3FFC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000169")]
		[Address(RVA = "0x6A3FFD0", Offset = "0x6A3EFD0", VA = "0x6A3FFD0")]
		internal set
		{
		}
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x6A3FFF0", Offset = "0x6A3EFF0", VA = "0x6A3FFF0")]
	private void Awake()
	{
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x6A3F8D0", Offset = "0x6A3E8D0", VA = "0x6A3F8D0")]
	public void UpdateLookupTables()
	{
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x6A40040", Offset = "0x6A3F040", VA = "0x6A40040")]
	public int GetSpriteIndexFromHashcode(int hashCode)
	{
		return default(int);
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x6A400C0", Offset = "0x6A3F0C0", VA = "0x6A400C0")]
	public int GetSpriteIndexFromUnicode(uint unicode)
	{
		return default(int);
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x6A40150", Offset = "0x6A3F150", VA = "0x6A40150")]
	public int GetSpriteIndexFromName(string name)
	{
		return default(int);
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x6A401F0", Offset = "0x6A3F1F0", VA = "0x6A401F0")]
	public static SpriteAsset SearchForSpriteByUnicode(SpriteAsset spriteAsset, uint unicode, bool includeFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x6A403B0", Offset = "0x6A3F3B0", VA = "0x6A403B0")]
	private static SpriteAsset SearchForSpriteByUnicodeInternal(List<SpriteAsset> spriteAssets, uint unicode, bool includeFallbacks, HashSet<int> searchedSpriteAssets, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x6A405A0", Offset = "0x6A3F5A0", VA = "0x6A405A0")]
	private static SpriteAsset SearchForSpriteByUnicodeInternal(SpriteAsset spriteAsset, uint unicode, bool includeFallbacks, HashSet<int> searchedSpriteAssets, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x6A406C0", Offset = "0x6A3F6C0", VA = "0x6A406C0")]
	public static SpriteAsset SearchForSpriteByHashCode(SpriteAsset spriteAsset, int hashCode, bool includeFallbacks, out int spriteIndex, [Optional] TextSettings textSettings)
	{
		return null;
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x6A40A80", Offset = "0x6A3FA80", VA = "0x6A40A80")]
	private static SpriteAsset SearchForSpriteByHashCodeInternal(List<SpriteAsset> spriteAssets, int hashCode, bool searchFallbacks, HashSet<int> searchedSpriteAssets, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x6A40C80", Offset = "0x6A3FC80", VA = "0x6A40C80")]
	private static SpriteAsset SearchForSpriteByHashCodeInternal(SpriteAsset spriteAsset, int hashCode, bool searchFallbacks, HashSet<int> searchedSpriteAssets, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x6A40D80", Offset = "0x6A3FD80", VA = "0x6A40D80")]
	public void SortGlyphTable()
	{
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x6A40EE0", Offset = "0x6A3FEE0", VA = "0x6A40EE0")]
	internal void SortCharacterTable()
	{
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x6A41040", Offset = "0x6A40040", VA = "0x6A41040")]
	internal void SortGlyphAndCharacterTables()
	{
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x6A41060", Offset = "0x6A40060", VA = "0x6A41060")]
	public SpriteAsset()
	{
	}
}
