// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_FontAsset
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.TextCore;
using UnityEngine.TextCore.LowLevel;

namespace TMPro;

[Serializable]
[Token(Token = "0x200003E")]
[ExcludeFromPreset]
public class TMP_FontAsset : TMP_Asset
{
	[Token(Token = "0x40001A9")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private string m_Version;

	[Token(Token = "0x40001AA")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	internal string m_SourceFontFileGUID;

	[Token(Token = "0x40001AB")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private Font m_SourceFontFile;

	[Token(Token = "0x40001AC")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	private AtlasPopulationMode m_AtlasPopulationMode;

	[Token(Token = "0x40001AD")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	internal FaceInfo m_FaceInfo;

	[Token(Token = "0x40001AE")]
	[FieldOffset(Offset = "0xB0")]
	[SerializeField]
	internal List<Glyph> m_GlyphTable;

	[Token(Token = "0x40001AF")]
	[FieldOffset(Offset = "0xB8")]
	internal Dictionary<uint, Glyph> m_GlyphLookupDictionary;

	[Token(Token = "0x40001B0")]
	[FieldOffset(Offset = "0xC0")]
	[SerializeField]
	internal List<TMP_Character> m_CharacterTable;

	[Token(Token = "0x40001B1")]
	[FieldOffset(Offset = "0xC8")]
	internal Dictionary<uint, TMP_Character> m_CharacterLookupDictionary;

	[Token(Token = "0x40001B2")]
	[FieldOffset(Offset = "0xD0")]
	internal Texture2D m_AtlasTexture;

	[Token(Token = "0x40001B3")]
	[FieldOffset(Offset = "0xD8")]
	[SerializeField]
	internal Texture2D[] m_AtlasTextures;

	[Token(Token = "0x40001B4")]
	[FieldOffset(Offset = "0xE0")]
	[SerializeField]
	internal int m_AtlasTextureIndex;

	[Token(Token = "0x40001B5")]
	[FieldOffset(Offset = "0xE4")]
	[SerializeField]
	private bool m_IsMultiAtlasTexturesEnabled;

	[Token(Token = "0x40001B6")]
	[FieldOffset(Offset = "0xE5")]
	[SerializeField]
	private bool m_ClearDynamicDataOnBuild;

	[Token(Token = "0x40001B7")]
	[FieldOffset(Offset = "0xE8")]
	[SerializeField]
	private List<GlyphRect> m_UsedGlyphRects;

	[Token(Token = "0x40001B8")]
	[FieldOffset(Offset = "0xF0")]
	[SerializeField]
	private List<GlyphRect> m_FreeGlyphRects;

	[Token(Token = "0x40001B9")]
	[FieldOffset(Offset = "0xF8")]
	[SerializeField]
	private FaceInfo_Legacy m_fontInfo;

	[Token(Token = "0x40001BA")]
	[FieldOffset(Offset = "0x100")]
	[SerializeField]
	public Texture2D atlas;

	[Token(Token = "0x40001BB")]
	[FieldOffset(Offset = "0x108")]
	[SerializeField]
	internal int m_AtlasWidth;

	[Token(Token = "0x40001BC")]
	[FieldOffset(Offset = "0x10C")]
	[SerializeField]
	internal int m_AtlasHeight;

	[Token(Token = "0x40001BD")]
	[FieldOffset(Offset = "0x110")]
	[SerializeField]
	internal int m_AtlasPadding;

	[Token(Token = "0x40001BE")]
	[FieldOffset(Offset = "0x114")]
	[SerializeField]
	internal GlyphRenderMode m_AtlasRenderMode;

	[Token(Token = "0x40001BF")]
	[FieldOffset(Offset = "0x118")]
	[SerializeField]
	internal List<TMP_Glyph> m_glyphInfoList;

	[Token(Token = "0x40001C0")]
	[FieldOffset(Offset = "0x120")]
	[SerializeField]
	[FormerlySerializedAs("m_kerningInfo")]
	internal KerningTable m_KerningTable;

	[Token(Token = "0x40001C1")]
	[FieldOffset(Offset = "0x128")]
	[SerializeField]
	internal TMP_FontFeatureTable m_FontFeatureTable;

	[Token(Token = "0x40001C2")]
	[FieldOffset(Offset = "0x130")]
	[SerializeField]
	private List<TMP_FontAsset> fallbackFontAssets;

	[Token(Token = "0x40001C3")]
	[FieldOffset(Offset = "0x138")]
	[SerializeField]
	internal List<TMP_FontAsset> m_FallbackFontAssetTable;

	[Token(Token = "0x40001C4")]
	[FieldOffset(Offset = "0x140")]
	[SerializeField]
	internal FontAssetCreationSettings m_CreationSettings;

	[Token(Token = "0x40001C5")]
	[FieldOffset(Offset = "0x198")]
	[SerializeField]
	private TMP_FontWeightPair[] m_FontWeightTable;

	[Token(Token = "0x40001C6")]
	[FieldOffset(Offset = "0x1A0")]
	[SerializeField]
	private TMP_FontWeightPair[] fontWeights;

	[Token(Token = "0x40001C7")]
	[FieldOffset(Offset = "0x1A8")]
	public float normalStyle;

	[Token(Token = "0x40001C8")]
	[FieldOffset(Offset = "0x1AC")]
	public float normalSpacingOffset;

	[Token(Token = "0x40001C9")]
	[FieldOffset(Offset = "0x1B0")]
	public float boldStyle;

	[Token(Token = "0x40001CA")]
	[FieldOffset(Offset = "0x1B4")]
	public float boldSpacing;

	[Token(Token = "0x40001CB")]
	[FieldOffset(Offset = "0x1B8")]
	public byte italicStyle;

	[Token(Token = "0x40001CC")]
	[FieldOffset(Offset = "0x1B9")]
	public byte tabSize;

	[Token(Token = "0x40001CD")]
	[FieldOffset(Offset = "0x1BA")]
	internal bool IsFontAssetLookupTablesDirty;

	[Token(Token = "0x40001CE")]
	[FieldOffset(Offset = "0x0")]
	private static ProfilerMarker k_ReadFontAssetDefinitionMarker;

	[Token(Token = "0x40001CF")]
	[FieldOffset(Offset = "0x8")]
	private static ProfilerMarker k_AddSynthesizedCharactersMarker;

	[Token(Token = "0x40001D0")]
	[FieldOffset(Offset = "0x10")]
	private static ProfilerMarker k_TryAddCharacterMarker;

	[Token(Token = "0x40001D1")]
	[FieldOffset(Offset = "0x18")]
	private static ProfilerMarker k_TryAddCharactersMarker;

	[Token(Token = "0x40001D2")]
	[FieldOffset(Offset = "0x20")]
	private static ProfilerMarker k_UpdateGlyphAdjustmentRecordsMarker;

	[Token(Token = "0x40001D3")]
	[FieldOffset(Offset = "0x28")]
	private static ProfilerMarker k_ClearFontAssetDataMarker;

	[Token(Token = "0x40001D4")]
	[FieldOffset(Offset = "0x30")]
	private static ProfilerMarker k_UpdateFontAssetDataMarker;

	[Token(Token = "0x40001D5")]
	[FieldOffset(Offset = "0x38")]
	private static string s_DefaultMaterialSuffix;

	[Token(Token = "0x40001D6")]
	[FieldOffset(Offset = "0x1C0")]
	internal HashSet<int> FallbackSearchQueryLookup;

	[Token(Token = "0x40001D7")]
	[FieldOffset(Offset = "0x40")]
	private static HashSet<int> k_SearchedFontAssetLookup;

	[Token(Token = "0x40001D8")]
	[FieldOffset(Offset = "0x48")]
	private static List<TMP_FontAsset> k_FontAssets_FontFeaturesUpdateQueue;

	[Token(Token = "0x40001D9")]
	[FieldOffset(Offset = "0x50")]
	private static HashSet<int> k_FontAssets_FontFeaturesUpdateQueueLookup;

	[Token(Token = "0x40001DA")]
	[FieldOffset(Offset = "0x58")]
	private static List<TMP_FontAsset> k_FontAssets_AtlasTexturesUpdateQueue;

	[Token(Token = "0x40001DB")]
	[FieldOffset(Offset = "0x60")]
	private static HashSet<int> k_FontAssets_AtlasTexturesUpdateQueueLookup;

	[Token(Token = "0x40001DC")]
	[FieldOffset(Offset = "0x1C8")]
	private List<Glyph> m_GlyphsToRender;

	[Token(Token = "0x40001DD")]
	[FieldOffset(Offset = "0x1D0")]
	private List<Glyph> m_GlyphsRendered;

	[Token(Token = "0x40001DE")]
	[FieldOffset(Offset = "0x1D8")]
	private List<uint> m_GlyphIndexList;

	[Token(Token = "0x40001DF")]
	[FieldOffset(Offset = "0x1E0")]
	private List<uint> m_GlyphIndexListNewlyAdded;

	[Token(Token = "0x40001E0")]
	[FieldOffset(Offset = "0x1E8")]
	internal List<uint> m_GlyphsToAdd;

	[Token(Token = "0x40001E1")]
	[FieldOffset(Offset = "0x1F0")]
	internal HashSet<uint> m_GlyphsToAddLookup;

	[Token(Token = "0x40001E2")]
	[FieldOffset(Offset = "0x1F8")]
	internal List<TMP_Character> m_CharactersToAdd;

	[Token(Token = "0x40001E3")]
	[FieldOffset(Offset = "0x200")]
	internal HashSet<uint> m_CharactersToAddLookup;

	[Token(Token = "0x40001E4")]
	[FieldOffset(Offset = "0x208")]
	internal List<uint> s_MissingCharacterList;

	[Token(Token = "0x40001E5")]
	[FieldOffset(Offset = "0x210")]
	internal HashSet<uint> m_MissingUnicodesFromFontFile;

	[Token(Token = "0x40001E6")]
	[FieldOffset(Offset = "0x68")]
	internal static uint[] k_GlyphIndexArray;

	[Token(Token = "0x1700004D")]
	public string version
	{
		[Token(Token = "0x60001D5")]
		[Address(RVA = "0x4C4C270", Offset = "0x4C4C270", VA = "0x4C4C270")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x4C4C280", Offset = "0x4C4C280", VA = "0x4C4C280")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public Font sourceFontFile
	{
		[Token(Token = "0x60001D7")]
		[Address(RVA = "0x4C4C290", Offset = "0x4C4C290", VA = "0x4C4C290")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x4C4C2A0", Offset = "0x4C4C2A0", VA = "0x4C4C2A0")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700004F")]
	public AtlasPopulationMode atlasPopulationMode
	{
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0x4C4C2B0", Offset = "0x4C4C2B0", VA = "0x4C4C2B0")]
		get
		{
			return default(AtlasPopulationMode);
		}
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x4C4C2C0", Offset = "0x4C4C2C0", VA = "0x4C4C2C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	public FaceInfo faceInfo
	{
		[Token(Token = "0x60001DB")]
		[Address(RVA = "0x4C4C2D0", Offset = "0x4C4C2D0", VA = "0x4C4C2D0")]
		get
		{
			return default(FaceInfo);
		}
		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x4C4C310", Offset = "0x4C4C310", VA = "0x4C4C310")]
		set
		{
		}
	}

	[Token(Token = "0x17000051")]
	public List<Glyph> glyphTable
	{
		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x4C4C360", Offset = "0x4C4C360", VA = "0x4C4C360")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001DE")]
		[Address(RVA = "0x4C4C370", Offset = "0x4C4C370", VA = "0x4C4C370")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000052")]
	public Dictionary<uint, Glyph> glyphLookupTable
	{
		[Token(Token = "0x60001DF")]
		[Address(RVA = "0x4C4C390", Offset = "0x4C4C390", VA = "0x4C4C390")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000053")]
	public List<TMP_Character> characterTable
	{
		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x4C4C5E0", Offset = "0x4C4C5E0", VA = "0x4C4C5E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001E1")]
		[Address(RVA = "0x4C4C5F0", Offset = "0x4C4C5F0", VA = "0x4C4C5F0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000054")]
	public Dictionary<uint, TMP_Character> characterLookupTable
	{
		[Token(Token = "0x60001E2")]
		[Address(RVA = "0x4C4C610", Offset = "0x4C4C610", VA = "0x4C4C610")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000055")]
	public Texture2D atlasTexture
	{
		[Token(Token = "0x60001E3")]
		[Address(RVA = "0x4C4C630", Offset = "0x4C4C630", VA = "0x4C4C630")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000056")]
	public Texture2D[] atlasTextures
	{
		[Token(Token = "0x60001E4")]
		[Address(RVA = "0x4C4C6C0", Offset = "0x4C4C6C0", VA = "0x4C4C6C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001E5")]
		[Address(RVA = "0x4C4C6D0", Offset = "0x4C4C6D0", VA = "0x4C4C6D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000057")]
	public int atlasTextureCount
	{
		[Token(Token = "0x60001E6")]
		[Address(RVA = "0x4C4C6F0", Offset = "0x4C4C6F0", VA = "0x4C4C6F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000058")]
	public bool isMultiAtlasTexturesEnabled
	{
		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x4C4C700", Offset = "0x4C4C700", VA = "0x4C4C700")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001E8")]
		[Address(RVA = "0x4C4C710", Offset = "0x4C4C710", VA = "0x4C4C710")]
		set
		{
		}
	}

	[Token(Token = "0x17000059")]
	internal bool clearDynamicDataOnBuild
	{
		[Token(Token = "0x60001E9")]
		[Address(RVA = "0x4C4C720", Offset = "0x4C4C720", VA = "0x4C4C720")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x4C4C730", Offset = "0x4C4C730", VA = "0x4C4C730")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	internal List<GlyphRect> usedGlyphRects
	{
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x4C4C740", Offset = "0x4C4C740", VA = "0x4C4C740")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x4C4C750", Offset = "0x4C4C750", VA = "0x4C4C750")]
		set
		{
		}
	}

	[Token(Token = "0x1700005B")]
	internal List<GlyphRect> freeGlyphRects
	{
		[Token(Token = "0x60001ED")]
		[Address(RVA = "0x4C4C770", Offset = "0x4C4C770", VA = "0x4C4C770")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x4C4C780", Offset = "0x4C4C780", VA = "0x4C4C780")]
		set
		{
		}
	}

	[Token(Token = "0x1700005C")]
	[Obsolete("The fontInfo property and underlying type is now obsolete. Please use the faceInfo property and FaceInfo type instead.")]
	public FaceInfo_Legacy fontInfo
	{
		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x4C4C7A0", Offset = "0x4C4C7A0", VA = "0x4C4C7A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005D")]
	public int atlasWidth
	{
		[Token(Token = "0x60001F0")]
		[Address(RVA = "0x4C4C7B0", Offset = "0x4C4C7B0", VA = "0x4C4C7B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001F1")]
		[Address(RVA = "0x4C4C7C0", Offset = "0x4C4C7C0", VA = "0x4C4C7C0")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700005E")]
	public int atlasHeight
	{
		[Token(Token = "0x60001F2")]
		[Address(RVA = "0x4C4C7D0", Offset = "0x4C4C7D0", VA = "0x4C4C7D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001F3")]
		[Address(RVA = "0x4C4C7E0", Offset = "0x4C4C7E0", VA = "0x4C4C7E0")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700005F")]
	public int atlasPadding
	{
		[Token(Token = "0x60001F4")]
		[Address(RVA = "0x4C4C7F0", Offset = "0x4C4C7F0", VA = "0x4C4C7F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001F5")]
		[Address(RVA = "0x4C4C800", Offset = "0x4C4C800", VA = "0x4C4C800")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000060")]
	public GlyphRenderMode atlasRenderMode
	{
		[Token(Token = "0x60001F6")]
		[Address(RVA = "0x4C4C810", Offset = "0x4C4C810", VA = "0x4C4C810")]
		get
		{
			return default(GlyphRenderMode);
		}
		[Token(Token = "0x60001F7")]
		[Address(RVA = "0x4C4C820", Offset = "0x4C4C820", VA = "0x4C4C820")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000061")]
	public TMP_FontFeatureTable fontFeatureTable
	{
		[Token(Token = "0x60001F8")]
		[Address(RVA = "0x4C4C830", Offset = "0x4C4C830", VA = "0x4C4C830")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001F9")]
		[Address(RVA = "0x4C4C840", Offset = "0x4C4C840", VA = "0x4C4C840")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000062")]
	public List<TMP_FontAsset> fallbackFontAssetTable
	{
		[Token(Token = "0x60001FA")]
		[Address(RVA = "0x4C4C860", Offset = "0x4C4C860", VA = "0x4C4C860")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x4C4C870", Offset = "0x4C4C870", VA = "0x4C4C870")]
		set
		{
		}
	}

	[Token(Token = "0x17000063")]
	public FontAssetCreationSettings creationSettings
	{
		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x4C4C890", Offset = "0x4C4C890", VA = "0x4C4C890")]
		get
		{
			return default(FontAssetCreationSettings);
		}
		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x4C4C8E0", Offset = "0x4C4C8E0", VA = "0x4C4C8E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000064")]
	public TMP_FontWeightPair[] fontWeightTable
	{
		[Token(Token = "0x60001FE")]
		[Address(RVA = "0x4C4C940", Offset = "0x4C4C940", VA = "0x4C4C940")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001FF")]
		[Address(RVA = "0x4C4C950", Offset = "0x4C4C950", VA = "0x4C4C950")]
		internal set
		{
		}
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x4C4C970", Offset = "0x4C4C970", VA = "0x4C4C970")]
	public static TMP_FontAsset CreateFontAsset(Font font)
	{
		return null;
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x4C4C9E0", Offset = "0x4C4C9E0", VA = "0x4C4C9E0")]
	public static TMP_FontAsset CreateFontAsset(Font font, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode = AtlasPopulationMode.Dynamic, bool enableMultiAtlasSupport = true)
	{
		return null;
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x4C4CFE0", Offset = "0x4C4CFE0", VA = "0x4C4CFE0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x4C4C3B0", Offset = "0x4C4C3B0", VA = "0x4C4C3B0")]
	public void ReadFontAssetDefinition()
	{
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x4C4DDD0", Offset = "0x4C4DDD0", VA = "0x4C4DDD0")]
	internal void InitializeDictionaryLookupTables()
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x4C4E110", Offset = "0x4C4E110", VA = "0x4C4E110")]
	internal void InitializeGlyphLookupDictionary()
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x4C4E420", Offset = "0x4C4E420", VA = "0x4C4E420")]
	internal void InitializeCharacterLookupDictionary()
	{
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x4C4E690", Offset = "0x4C4E690", VA = "0x4C4E690")]
	internal void InitializeGlyphPaidAdjustmentRecordsLookupDictionary()
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x4C4DDF0", Offset = "0x4C4DDF0", VA = "0x4C4DDF0")]
	internal void AddSynthesizedCharactersAndFaceMetrics()
	{
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x4C4EC70", Offset = "0x4C4EC70", VA = "0x4C4EC70")]
	private void AddSynthesizedCharacter(uint unicode, bool isFontFaceLoaded, bool addImmediately = false)
	{
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x4C4EED0", Offset = "0x4C4EED0", VA = "0x4C4EED0")]
	internal void AddCharacterToLookupCache(uint unicode, TMP_Character character)
	{
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x4C4EF70", Offset = "0x4C4EF70", VA = "0x4C4EF70")]
	internal void SortCharacterTable()
	{
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x4C4F0D0", Offset = "0x4C4F0D0", VA = "0x4C4F0D0")]
	internal void SortGlyphTable()
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x4C4F230", Offset = "0x4C4F230", VA = "0x4C4F230")]
	internal void SortFontFeatureTable()
	{
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x4C4F480", Offset = "0x4C4F480", VA = "0x4C4F480")]
	internal void SortAllTables()
	{
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x4C4F4B0", Offset = "0x4C4F4B0", VA = "0x4C4F4B0")]
	public bool HasCharacter(int character)
	{
		return default(bool);
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x4C4F500", Offset = "0x4C4F500", VA = "0x4C4F500")]
	public bool HasCharacter(char character, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000211")]
	[Address(RVA = "0x4C50510", Offset = "0x4C50510", VA = "0x4C50510")]
	private bool HasCharacter_Internal(uint character, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x4C50750", Offset = "0x4C50750", VA = "0x4C50750")]
	public bool HasCharacters(string text, out List<char> missingCharacters)
	{
		return default(bool);
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x4C50910", Offset = "0x4C50910", VA = "0x4C50910")]
	public bool HasCharacters(string text, out uint[] missingCharacters, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x4C51020", Offset = "0x4C51020", VA = "0x4C51020")]
	public bool HasCharacters(string text)
	{
		return default(bool);
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x4C510C0", Offset = "0x4C510C0", VA = "0x4C510C0")]
	public static string GetCharacters(TMP_FontAsset fontAsset)
	{
		return null;
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x4C511D0", Offset = "0x4C511D0", VA = "0x4C511D0")]
	public static int[] GetCharactersArray(TMP_FontAsset fontAsset)
	{
		return null;
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x4C512D0", Offset = "0x4C512D0", VA = "0x4C512D0")]
	internal uint GetGlyphIndex(uint unicode)
	{
		return default(uint);
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x4C513E0", Offset = "0x4C513E0", VA = "0x4C513E0")]
	internal static void RegisterFontAssetForFontFeatureUpdate(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x4C51530", Offset = "0x4C51530", VA = "0x4C51530")]
	internal static void UpdateFontFeaturesForFontAssetsInQueue()
	{
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x4C51AA0", Offset = "0x4C51AA0", VA = "0x4C51AA0")]
	internal static void RegisterFontAssetForAtlasTextureUpdate(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x4C51BF0", Offset = "0x4C51BF0", VA = "0x4C51BF0")]
	internal static void UpdateAtlasTexturesForFontAssetsInQueue()
	{
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x4C51DC0", Offset = "0x4C51DC0", VA = "0x4C51DC0")]
	public bool TryAddCharacters(uint[] unicodes, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x4C51DE0", Offset = "0x4C51DE0", VA = "0x4C51DE0")]
	public bool TryAddCharacters(uint[] unicodes, out uint[] missingUnicodes, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x4C53300", Offset = "0x4C53300", VA = "0x4C53300")]
	public bool TryAddCharacters(string characters, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x4C53320", Offset = "0x4C53320", VA = "0x4C53320")]
	public bool TryAddCharacters(string characters, out string missingCharacters, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x4C4FA90", Offset = "0x4C4FA90", VA = "0x4C4FA90")]
	internal bool TryAddCharacterInternal(uint unicode, out TMP_Character character)
	{
		return default(bool);
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x4C54430", Offset = "0x4C54430", VA = "0x4C54430")]
	internal bool TryGetCharacter_and_QueueRenderToTexture(uint unicode, out TMP_Character character)
	{
		return default(bool);
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x4C51DB0", Offset = "0x4C51DB0", VA = "0x4C51DB0")]
	internal void TryAddGlyphsToAtlasTextures()
	{
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x4C52D50", Offset = "0x4C52D50", VA = "0x4C52D50")]
	private bool TryAddGlyphsToNewAtlasTexture()
	{
		return default(bool);
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x4C541F0", Offset = "0x4C541F0", VA = "0x4C541F0")]
	private void SetupNewAtlasTexture()
	{
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x4C54B30", Offset = "0x4C54B30", VA = "0x4C54B30")]
	internal void UpdateAtlasTexture()
	{
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x4C516F0", Offset = "0x4C516F0", VA = "0x4C516F0")]
	internal void UpdateGlyphAdjustmentRecords()
	{
	}

	[Token(Token = "0x6000227")]
	[Address(RVA = "0x4C54F40", Offset = "0x4C54F40", VA = "0x4C54F40")]
	internal void UpdateGlyphAdjustmentRecords(uint[] glyphIndexes)
	{
	}

	[Token(Token = "0x6000228")]
	[Address(RVA = "0x4C552C0", Offset = "0x4C552C0", VA = "0x4C552C0")]
	internal void UpdateGlyphAdjustmentRecords(List<uint> glyphIndexes)
	{
	}

	[Token(Token = "0x6000229")]
	[Address(RVA = "0x4C552D0", Offset = "0x4C552D0", VA = "0x4C552D0")]
	internal void UpdateGlyphAdjustmentRecords(List<uint> newGlyphIndexes, List<uint> allGlyphIndexes)
	{
	}

	[Token(Token = "0x600022A")]
	private void CopyListDataToArray<T>(List<T> srcList, ref T[] dstArray)
	{
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x4C552E0", Offset = "0x4C552E0", VA = "0x4C552E0")]
	public void ClearFontAssetData(bool setAtlasSizeToZero = false)
	{
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x4C558A0", Offset = "0x4C558A0", VA = "0x4C558A0")]
	internal void ClearFontAssetDataInternal()
	{
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x4C558C0", Offset = "0x4C558C0", VA = "0x4C558C0")]
	internal void UpdateFontAssetData()
	{
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x4C55310", Offset = "0x4C55310", VA = "0x4C55310")]
	internal void ClearFontAssetTables()
	{
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x4C55530", Offset = "0x4C55530", VA = "0x4C55530")]
	internal void ClearAtlasTextures(bool setAtlasSizeToZero = false)
	{
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x4C4D060", Offset = "0x4C4D060", VA = "0x4C4D060")]
	internal void UpgradeFontAsset()
	{
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x4C4E890", Offset = "0x4C4E890", VA = "0x4C4E890")]
	private void UpgradeGlyphAdjustmentTableToFontFeatureTable()
	{
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x4C55A70", Offset = "0x4C55A70", VA = "0x4C55A70")]
	public TMP_FontAsset()
	{
	}
}
