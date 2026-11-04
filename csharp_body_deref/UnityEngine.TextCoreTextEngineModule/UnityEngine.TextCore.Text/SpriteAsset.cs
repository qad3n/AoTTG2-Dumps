// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.SpriteAsset
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x3045450", Offset = "0x3043A50", VA = "0x183045450")]
		get
		{
			return default(FaceInfo);
		}
		[Token(Token = "0x600015D")]
		[Address(RVA = "0x3045510", Offset = "0x3043B10", VA = "0x183045510")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public Texture spriteSheet
	{
		[Token(Token = "0x600015E")]
		[Address(RVA = "0x2E8A930", Offset = "0x2E88F30", VA = "0x182E8A930")]
		get
		{
			return null;
		}
		[Token(Token = "0x600015F")]
		[Address(RVA = "0x3045560", Offset = "0x3043B60", VA = "0x183045560")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000035")]
	internal float width
	{
		[Token(Token = "0x6000160")]
		[Address(RVA = "0x1D98200", Offset = "0x1D96800", VA = "0x181D98200")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000161")]
		[Address(RVA = "0x1D98440", Offset = "0x1D96A40", VA = "0x181D98440")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000036")]
	internal float height
	{
		[Token(Token = "0x6000162")]
		[Address(RVA = "0x1D981F0", Offset = "0x1D967F0", VA = "0x181D981F0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000163")]
		[Address(RVA = "0x1D98430", Offset = "0x1D96A30", VA = "0x181D98430")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000037")]
	public List<SpriteCharacter> spriteCharacterTable
	{
		[Token(Token = "0x6000164")]
		[Address(RVA = "0x30454D0", Offset = "0x3043AD0", VA = "0x1830454D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000165")]
		[Address(RVA = "0xC8FFC0", Offset = "0xC8E5C0", VA = "0x180C8FFC0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public Dictionary<uint, SpriteCharacter> spriteCharacterLookupTable
	{
		[Token(Token = "0x6000166")]
		[Address(RVA = "0x3045490", Offset = "0x3043A90", VA = "0x183045490")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000167")]
		[Address(RVA = "0x1C42420", Offset = "0x1C40A20", VA = "0x181C42420")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000039")]
	public List<SpriteGlyph> spriteGlyphTable
	{
		[Token(Token = "0x6000168")]
		[Address(RVA = "0x2F8EC90", Offset = "0x2F8D290", VA = "0x182F8EC90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000169")]
		[Address(RVA = "0x1BE7800", Offset = "0x1BE5E00", VA = "0x181BE7800")]
		internal set
		{
		}
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	private void Awake()
	{
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x3044D20", Offset = "0x3043320", VA = "0x183044D20")]
	public void UpdateLookupTables()
	{
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x3043C10", Offset = "0x3042210", VA = "0x183043C10")]
	public int GetSpriteIndexFromHashcode(int hashCode)
	{
		return default(int);
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x3043CE0", Offset = "0x30422E0", VA = "0x183043CE0")]
	public int GetSpriteIndexFromUnicode(uint unicode)
	{
		return default(int);
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x3043CA0", Offset = "0x30422A0", VA = "0x183043CA0")]
	public int GetSpriteIndexFromName(string name)
	{
		return default(int);
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x30445E0", Offset = "0x3042BE0", VA = "0x1830445E0")]
	public static SpriteAsset SearchForSpriteByUnicode(SpriteAsset spriteAsset, uint unicode, bool includeFallbacks, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x30443A0", Offset = "0x30429A0", VA = "0x1830443A0")]
	private static SpriteAsset SearchForSpriteByUnicodeInternal(List<SpriteAsset> spriteAssets, uint unicode, bool includeFallbacks, HashSet<int> searchedSpriteAssets, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x3044520", Offset = "0x3042B20", VA = "0x183044520")]
	private static SpriteAsset SearchForSpriteByUnicodeInternal(SpriteAsset spriteAsset, uint unicode, bool includeFallbacks, HashSet<int> searchedSpriteAssets, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x3043FC0", Offset = "0x30425C0", VA = "0x183043FC0")]
	public static SpriteAsset SearchForSpriteByHashCode(SpriteAsset spriteAsset, int hashCode, bool includeFallbacks, out int spriteIndex, [Optional] TextSettings textSettings)
	{
		return null;
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x3043E40", Offset = "0x3042440", VA = "0x183043E40")]
	private static SpriteAsset SearchForSpriteByHashCodeInternal(List<SpriteAsset> spriteAssets, int hashCode, bool searchFallbacks, HashSet<int> searchedSpriteAssets, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x3043D80", Offset = "0x3042380", VA = "0x183043D80")]
	private static SpriteAsset SearchForSpriteByHashCodeInternal(SpriteAsset spriteAsset, int hashCode, bool searchFallbacks, HashSet<int> searchedSpriteAssets, out int spriteIndex)
	{
		return null;
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x3044BA0", Offset = "0x30431A0", VA = "0x183044BA0")]
	public void SortGlyphTable()
	{
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x3044750", Offset = "0x3042D50", VA = "0x183044750")]
	internal void SortCharacterTable()
	{
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x30448D0", Offset = "0x3042ED0", VA = "0x1830448D0")]
	internal void SortGlyphAndCharacterTables()
	{
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x3045380", Offset = "0x3043980", VA = "0x183045380")]
	public SpriteAsset()
	{
	}
}
