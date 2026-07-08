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
[Token(Token = "0x2000028")]
[ExcludeFromPreset]
public class TMP_FontAsset : TMP_Asset
{
	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private string m_Version;

	[Token(Token = "0x40000B6")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	internal string m_SourceFontFileGUID;

	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private Font m_SourceFontFile;

	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	private AtlasPopulationMode m_AtlasPopulationMode;

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	internal FaceInfo m_FaceInfo;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0xB0")]
	[SerializeField]
	internal List<Glyph> m_GlyphTable;

	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0xB8")]
	internal Dictionary<uint, Glyph> m_GlyphLookupDictionary;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0xC0")]
	[SerializeField]
	internal List<TMP_Character> m_CharacterTable;

	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0xC8")]
	internal Dictionary<uint, TMP_Character> m_CharacterLookupDictionary;

	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0xD0")]
	internal Texture2D m_AtlasTexture;

	[Token(Token = "0x40000BF")]
	[FieldOffset(Offset = "0xD8")]
	[SerializeField]
	internal Texture2D[] m_AtlasTextures;

	[Token(Token = "0x40000C0")]
	[FieldOffset(Offset = "0xE0")]
	[SerializeField]
	internal int m_AtlasTextureIndex;

	[Token(Token = "0x40000C1")]
	[FieldOffset(Offset = "0xE4")]
	[SerializeField]
	private bool m_IsMultiAtlasTexturesEnabled;

	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0xE5")]
	[SerializeField]
	private bool m_ClearDynamicDataOnBuild;

	[Token(Token = "0x40000C3")]
	[FieldOffset(Offset = "0xE8")]
	[SerializeField]
	private List<GlyphRect> m_UsedGlyphRects;

	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0xF0")]
	[SerializeField]
	private List<GlyphRect> m_FreeGlyphRects;

	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0xF8")]
	[SerializeField]
	private FaceInfo_Legacy m_fontInfo;

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x100")]
	[SerializeField]
	public Texture2D atlas;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x108")]
	[SerializeField]
	internal int m_AtlasWidth;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x10C")]
	[SerializeField]
	internal int m_AtlasHeight;

	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x110")]
	[SerializeField]
	internal int m_AtlasPadding;

	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x114")]
	[SerializeField]
	internal GlyphRenderMode m_AtlasRenderMode;

	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x118")]
	[SerializeField]
	internal List<TMP_Glyph> m_glyphInfoList;

	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x120")]
	[SerializeField]
	[FormerlySerializedAs("m_kerningInfo")]
	internal KerningTable m_KerningTable;

	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x128")]
	[SerializeField]
	internal TMP_FontFeatureTable m_FontFeatureTable;

	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x130")]
	[SerializeField]
	private List<TMP_FontAsset> fallbackFontAssets;

	[Token(Token = "0x40000CF")]
	[FieldOffset(Offset = "0x138")]
	[SerializeField]
	internal List<TMP_FontAsset> m_FallbackFontAssetTable;

	[Token(Token = "0x40000D0")]
	[FieldOffset(Offset = "0x140")]
	[SerializeField]
	internal FontAssetCreationSettings m_CreationSettings;

	[Token(Token = "0x40000D1")]
	[FieldOffset(Offset = "0x198")]
	[SerializeField]
	private TMP_FontWeightPair[] m_FontWeightTable;

	[Token(Token = "0x40000D2")]
	[FieldOffset(Offset = "0x1A0")]
	[SerializeField]
	private TMP_FontWeightPair[] fontWeights;

	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x1A8")]
	public float normalStyle;

	[Token(Token = "0x40000D4")]
	[FieldOffset(Offset = "0x1AC")]
	public float normalSpacingOffset;

	[Token(Token = "0x40000D5")]
	[FieldOffset(Offset = "0x1B0")]
	public float boldStyle;

	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0x1B4")]
	public float boldSpacing;

	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x1B8")]
	public byte italicStyle;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x1B9")]
	public byte tabSize;

	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x1BA")]
	internal bool IsFontAssetLookupTablesDirty;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x0")]
	private static ProfilerMarker k_ReadFontAssetDefinitionMarker;

	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x8")]
	private static ProfilerMarker k_AddSynthesizedCharactersMarker;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x10")]
	private static ProfilerMarker k_TryAddCharacterMarker;

	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x18")]
	private static ProfilerMarker k_TryAddCharactersMarker;

	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0x20")]
	private static ProfilerMarker k_UpdateGlyphAdjustmentRecordsMarker;

	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x28")]
	private static ProfilerMarker k_ClearFontAssetDataMarker;

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x30")]
	private static ProfilerMarker k_UpdateFontAssetDataMarker;

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x38")]
	private static string s_DefaultMaterialSuffix;

	[Token(Token = "0x40000E2")]
	[FieldOffset(Offset = "0x1C0")]
	internal HashSet<int> FallbackSearchQueryLookup;

	[Token(Token = "0x40000E3")]
	[FieldOffset(Offset = "0x40")]
	private static HashSet<int> k_SearchedFontAssetLookup;

	[Token(Token = "0x40000E4")]
	[FieldOffset(Offset = "0x48")]
	private static List<TMP_FontAsset> k_FontAssets_FontFeaturesUpdateQueue;

	[Token(Token = "0x40000E5")]
	[FieldOffset(Offset = "0x50")]
	private static HashSet<int> k_FontAssets_FontFeaturesUpdateQueueLookup;

	[Token(Token = "0x40000E6")]
	[FieldOffset(Offset = "0x58")]
	private static List<TMP_FontAsset> k_FontAssets_AtlasTexturesUpdateQueue;

	[Token(Token = "0x40000E7")]
	[FieldOffset(Offset = "0x60")]
	private static HashSet<int> k_FontAssets_AtlasTexturesUpdateQueueLookup;

	[Token(Token = "0x40000E8")]
	[FieldOffset(Offset = "0x1C8")]
	private List<Glyph> m_GlyphsToRender;

	[Token(Token = "0x40000E9")]
	[FieldOffset(Offset = "0x1D0")]
	private List<Glyph> m_GlyphsRendered;

	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0x1D8")]
	private List<uint> m_GlyphIndexList;

	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0x1E0")]
	private List<uint> m_GlyphIndexListNewlyAdded;

	[Token(Token = "0x40000EC")]
	[FieldOffset(Offset = "0x1E8")]
	internal List<uint> m_GlyphsToAdd;

	[Token(Token = "0x40000ED")]
	[FieldOffset(Offset = "0x1F0")]
	internal HashSet<uint> m_GlyphsToAddLookup;

	[Token(Token = "0x40000EE")]
	[FieldOffset(Offset = "0x1F8")]
	internal List<TMP_Character> m_CharactersToAdd;

	[Token(Token = "0x40000EF")]
	[FieldOffset(Offset = "0x200")]
	internal HashSet<uint> m_CharactersToAddLookup;

	[Token(Token = "0x40000F0")]
	[FieldOffset(Offset = "0x208")]
	internal List<uint> s_MissingCharacterList;

	[Token(Token = "0x40000F1")]
	[FieldOffset(Offset = "0x210")]
	internal HashSet<uint> m_MissingUnicodesFromFontFile;

	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0x68")]
	internal static uint[] k_GlyphIndexArray;

	[Token(Token = "0x1700002C")]
	public string version
	{
		[Token(Token = "0x60000E4")]
		[Address(RVA = "0x48FECF0", Offset = "0x48FECF0", VA = "0x48FECF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x48FED00", Offset = "0x48FED00", VA = "0x48FED00")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700002D")]
	public Font sourceFontFile
	{
		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x48FED10", Offset = "0x48FED10", VA = "0x48FED10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x48FED20", Offset = "0x48FED20", VA = "0x48FED20")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700002E")]
	public AtlasPopulationMode atlasPopulationMode
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x48FED30", Offset = "0x48FED30", VA = "0x48FED30")]
		get
		{
			return default(AtlasPopulationMode);
		}
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x48FED40", Offset = "0x48FED40", VA = "0x48FED40")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public FaceInfo faceInfo
	{
		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x48FED50", Offset = "0x48FED50", VA = "0x48FED50")]
		get
		{
			return default(FaceInfo);
		}
		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x48FED90", Offset = "0x48FED90", VA = "0x48FED90")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public List<Glyph> glyphTable
	{
		[Token(Token = "0x60000EC")]
		[Address(RVA = "0x48FEDE0", Offset = "0x48FEDE0", VA = "0x48FEDE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x48FEDF0", Offset = "0x48FEDF0", VA = "0x48FEDF0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public Dictionary<uint, Glyph> glyphLookupTable
	{
		[Token(Token = "0x60000EE")]
		[Address(RVA = "0x48FEE10", Offset = "0x48FEE10", VA = "0x48FEE10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000032")]
	public List<TMP_Character> characterTable
	{
		[Token(Token = "0x60000EF")]
		[Address(RVA = "0x48FF060", Offset = "0x48FF060", VA = "0x48FF060")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000F0")]
		[Address(RVA = "0x48FF070", Offset = "0x48FF070", VA = "0x48FF070")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000033")]
	public Dictionary<uint, TMP_Character> characterLookupTable
	{
		[Token(Token = "0x60000F1")]
		[Address(RVA = "0x48FF090", Offset = "0x48FF090", VA = "0x48FF090")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000034")]
	public Texture2D atlasTexture
	{
		[Token(Token = "0x60000F2")]
		[Address(RVA = "0x48FF0B0", Offset = "0x48FF0B0", VA = "0x48FF0B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000035")]
	public Texture2D[] atlasTextures
	{
		[Token(Token = "0x60000F3")]
		[Address(RVA = "0x48FF140", Offset = "0x48FF140", VA = "0x48FF140")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000F4")]
		[Address(RVA = "0x48FF150", Offset = "0x48FF150", VA = "0x48FF150")]
		set
		{
		}
	}

	[Token(Token = "0x17000036")]
	public int atlasTextureCount
	{
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x48FF170", Offset = "0x48FF170", VA = "0x48FF170")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000037")]
	public bool isMultiAtlasTexturesEnabled
	{
		[Token(Token = "0x60000F6")]
		[Address(RVA = "0x48FF180", Offset = "0x48FF180", VA = "0x48FF180")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000F7")]
		[Address(RVA = "0x48FF190", Offset = "0x48FF190", VA = "0x48FF190")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	internal bool clearDynamicDataOnBuild
	{
		[Token(Token = "0x60000F8")]
		[Address(RVA = "0x48FF1A0", Offset = "0x48FF1A0", VA = "0x48FF1A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000F9")]
		[Address(RVA = "0x48FF1B0", Offset = "0x48FF1B0", VA = "0x48FF1B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000039")]
	internal List<GlyphRect> usedGlyphRects
	{
		[Token(Token = "0x60000FA")]
		[Address(RVA = "0x48FF1C0", Offset = "0x48FF1C0", VA = "0x48FF1C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000FB")]
		[Address(RVA = "0x48FF1D0", Offset = "0x48FF1D0", VA = "0x48FF1D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700003A")]
	internal List<GlyphRect> freeGlyphRects
	{
		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x48FF1F0", Offset = "0x48FF1F0", VA = "0x48FF1F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000FD")]
		[Address(RVA = "0x48FF200", Offset = "0x48FF200", VA = "0x48FF200")]
		set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	[Obsolete("The fontInfo property and underlying type is now obsolete. Please use the faceInfo property and FaceInfo type instead.")]
	public FaceInfo_Legacy fontInfo
	{
		[Token(Token = "0x60000FE")]
		[Address(RVA = "0x48FF220", Offset = "0x48FF220", VA = "0x48FF220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003C")]
	public int atlasWidth
	{
		[Token(Token = "0x60000FF")]
		[Address(RVA = "0x48FF230", Offset = "0x48FF230", VA = "0x48FF230")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000100")]
		[Address(RVA = "0x48FF240", Offset = "0x48FF240", VA = "0x48FF240")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700003D")]
	public int atlasHeight
	{
		[Token(Token = "0x6000101")]
		[Address(RVA = "0x48FF250", Offset = "0x48FF250", VA = "0x48FF250")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000102")]
		[Address(RVA = "0x48FF260", Offset = "0x48FF260", VA = "0x48FF260")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700003E")]
	public int atlasPadding
	{
		[Token(Token = "0x6000103")]
		[Address(RVA = "0x48FF270", Offset = "0x48FF270", VA = "0x48FF270")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000104")]
		[Address(RVA = "0x48FF280", Offset = "0x48FF280", VA = "0x48FF280")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700003F")]
	public GlyphRenderMode atlasRenderMode
	{
		[Token(Token = "0x6000105")]
		[Address(RVA = "0x48FF290", Offset = "0x48FF290", VA = "0x48FF290")]
		get
		{
			return default(GlyphRenderMode);
		}
		[Token(Token = "0x6000106")]
		[Address(RVA = "0x48FF2A0", Offset = "0x48FF2A0", VA = "0x48FF2A0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public TMP_FontFeatureTable fontFeatureTable
	{
		[Token(Token = "0x6000107")]
		[Address(RVA = "0x48FF2B0", Offset = "0x48FF2B0", VA = "0x48FF2B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000108")]
		[Address(RVA = "0x48FF2C0", Offset = "0x48FF2C0", VA = "0x48FF2C0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public List<TMP_FontAsset> fallbackFontAssetTable
	{
		[Token(Token = "0x6000109")]
		[Address(RVA = "0x48FF2E0", Offset = "0x48FF2E0", VA = "0x48FF2E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600010A")]
		[Address(RVA = "0x48FF2F0", Offset = "0x48FF2F0", VA = "0x48FF2F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000042")]
	public FontAssetCreationSettings creationSettings
	{
		[Token(Token = "0x600010B")]
		[Address(RVA = "0x48FF310", Offset = "0x48FF310", VA = "0x48FF310")]
		get
		{
			return default(FontAssetCreationSettings);
		}
		[Token(Token = "0x600010C")]
		[Address(RVA = "0x48FF360", Offset = "0x48FF360", VA = "0x48FF360")]
		set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public TMP_FontWeightPair[] fontWeightTable
	{
		[Token(Token = "0x600010D")]
		[Address(RVA = "0x48FF3C0", Offset = "0x48FF3C0", VA = "0x48FF3C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600010E")]
		[Address(RVA = "0x48FF3D0", Offset = "0x48FF3D0", VA = "0x48FF3D0")]
		internal set
		{
		}
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x48FF3F0", Offset = "0x48FF3F0", VA = "0x48FF3F0")]
	public static TMP_FontAsset CreateFontAsset(Font font)
	{
		return null;
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x48FF460", Offset = "0x48FF460", VA = "0x48FF460")]
	public static TMP_FontAsset CreateFontAsset(Font font, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode = AtlasPopulationMode.Dynamic, bool enableMultiAtlasSupport = true)
	{
		return null;
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x48FFA60", Offset = "0x48FFA60", VA = "0x48FFA60")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x48FEE30", Offset = "0x48FEE30", VA = "0x48FEE30")]
	public void ReadFontAssetDefinition()
	{
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x4900850", Offset = "0x4900850", VA = "0x4900850")]
	internal void InitializeDictionaryLookupTables()
	{
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x4900B90", Offset = "0x4900B90", VA = "0x4900B90")]
	internal void InitializeGlyphLookupDictionary()
	{
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x4900EA0", Offset = "0x4900EA0", VA = "0x4900EA0")]
	internal void InitializeCharacterLookupDictionary()
	{
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x4901110", Offset = "0x4901110", VA = "0x4901110")]
	internal void InitializeGlyphPaidAdjustmentRecordsLookupDictionary()
	{
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x4900870", Offset = "0x4900870", VA = "0x4900870")]
	internal void AddSynthesizedCharactersAndFaceMetrics()
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x49016F0", Offset = "0x49016F0", VA = "0x49016F0")]
	private void AddSynthesizedCharacter(uint unicode, bool isFontFaceLoaded, bool addImmediately = false)
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x4901950", Offset = "0x4901950", VA = "0x4901950")]
	internal void AddCharacterToLookupCache(uint unicode, TMP_Character character)
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x49019F0", Offset = "0x49019F0", VA = "0x49019F0")]
	internal void SortCharacterTable()
	{
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x4901B50", Offset = "0x4901B50", VA = "0x4901B50")]
	internal void SortGlyphTable()
	{
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x4901CB0", Offset = "0x4901CB0", VA = "0x4901CB0")]
	internal void SortFontFeatureTable()
	{
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x4901F00", Offset = "0x4901F00", VA = "0x4901F00")]
	internal void SortAllTables()
	{
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x4901F30", Offset = "0x4901F30", VA = "0x4901F30")]
	public bool HasCharacter(int character)
	{
		return default(bool);
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x4901F80", Offset = "0x4901F80", VA = "0x4901F80")]
	public bool HasCharacter(char character, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x4902F90", Offset = "0x4902F90", VA = "0x4902F90")]
	private bool HasCharacter_Internal(uint character, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x49031D0", Offset = "0x49031D0", VA = "0x49031D0")]
	public bool HasCharacters(string text, out List<char> missingCharacters)
	{
		return default(bool);
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x4903390", Offset = "0x4903390", VA = "0x4903390")]
	public bool HasCharacters(string text, out uint[] missingCharacters, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x4903AA0", Offset = "0x4903AA0", VA = "0x4903AA0")]
	public bool HasCharacters(string text)
	{
		return default(bool);
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x4903B40", Offset = "0x4903B40", VA = "0x4903B40")]
	public static string GetCharacters(TMP_FontAsset fontAsset)
	{
		return null;
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x4903C50", Offset = "0x4903C50", VA = "0x4903C50")]
	public static int[] GetCharactersArray(TMP_FontAsset fontAsset)
	{
		return null;
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x4903D50", Offset = "0x4903D50", VA = "0x4903D50")]
	internal uint GetGlyphIndex(uint unicode)
	{
		return default(uint);
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x4903E60", Offset = "0x4903E60", VA = "0x4903E60")]
	internal static void RegisterFontAssetForFontFeatureUpdate(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x4903FB0", Offset = "0x4903FB0", VA = "0x4903FB0")]
	internal static void UpdateFontFeaturesForFontAssetsInQueue()
	{
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x4904520", Offset = "0x4904520", VA = "0x4904520")]
	internal static void RegisterFontAssetForAtlasTextureUpdate(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x4904670", Offset = "0x4904670", VA = "0x4904670")]
	internal static void UpdateAtlasTexturesForFontAssetsInQueue()
	{
	}

	[Token(Token = "0x600012B")]
	[Address(RVA = "0x4904840", Offset = "0x4904840", VA = "0x4904840")]
	public bool TryAddCharacters(uint[] unicodes, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x4904860", Offset = "0x4904860", VA = "0x4904860")]
	public bool TryAddCharacters(uint[] unicodes, out uint[] missingUnicodes, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x4905D80", Offset = "0x4905D80", VA = "0x4905D80")]
	public bool TryAddCharacters(string characters, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x4905DA0", Offset = "0x4905DA0", VA = "0x4905DA0")]
	public bool TryAddCharacters(string characters, out string missingCharacters, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x4902510", Offset = "0x4902510", VA = "0x4902510")]
	internal bool TryAddCharacterInternal(uint unicode, out TMP_Character character)
	{
		return default(bool);
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x4906EB0", Offset = "0x4906EB0", VA = "0x4906EB0")]
	internal bool TryGetCharacter_and_QueueRenderToTexture(uint unicode, out TMP_Character character)
	{
		return default(bool);
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x4904830", Offset = "0x4904830", VA = "0x4904830")]
	internal void TryAddGlyphsToAtlasTextures()
	{
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x49057D0", Offset = "0x49057D0", VA = "0x49057D0")]
	private bool TryAddGlyphsToNewAtlasTexture()
	{
		return default(bool);
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x4906C70", Offset = "0x4906C70", VA = "0x4906C70")]
	private void SetupNewAtlasTexture()
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x49075B0", Offset = "0x49075B0", VA = "0x49075B0")]
	internal void UpdateAtlasTexture()
	{
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x4904170", Offset = "0x4904170", VA = "0x4904170")]
	internal void UpdateGlyphAdjustmentRecords()
	{
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x49079C0", Offset = "0x49079C0", VA = "0x49079C0")]
	internal void UpdateGlyphAdjustmentRecords(uint[] glyphIndexes)
	{
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x4907D40", Offset = "0x4907D40", VA = "0x4907D40")]
	internal void UpdateGlyphAdjustmentRecords(List<uint> glyphIndexes)
	{
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x4907D50", Offset = "0x4907D50", VA = "0x4907D50")]
	internal void UpdateGlyphAdjustmentRecords(List<uint> newGlyphIndexes, List<uint> allGlyphIndexes)
	{
	}

	[Token(Token = "0x6000139")]
	private void CopyListDataToArray<T>(List<T> srcList, ref T[] dstArray)
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x4907D60", Offset = "0x4907D60", VA = "0x4907D60")]
	public void ClearFontAssetData(bool setAtlasSizeToZero = false)
	{
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x4908320", Offset = "0x4908320", VA = "0x4908320")]
	internal void ClearFontAssetDataInternal()
	{
	}

	[Token(Token = "0x600013C")]
	[Address(RVA = "0x4908340", Offset = "0x4908340", VA = "0x4908340")]
	internal void UpdateFontAssetData()
	{
	}

	[Token(Token = "0x600013D")]
	[Address(RVA = "0x4907D90", Offset = "0x4907D90", VA = "0x4907D90")]
	internal void ClearFontAssetTables()
	{
	}

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x4907FB0", Offset = "0x4907FB0", VA = "0x4907FB0")]
	internal void ClearAtlasTextures(bool setAtlasSizeToZero = false)
	{
	}

	[Token(Token = "0x600013F")]
	[Address(RVA = "0x48FFAE0", Offset = "0x48FFAE0", VA = "0x48FFAE0")]
	internal void UpgradeFontAsset()
	{
	}

	[Token(Token = "0x6000140")]
	[Address(RVA = "0x4901310", Offset = "0x4901310", VA = "0x4901310")]
	private void UpgradeGlyphAdjustmentTableToFontFeatureTable()
	{
	}

	[Token(Token = "0x6000141")]
	[Address(RVA = "0x49084F0", Offset = "0x49084F0", VA = "0x49084F0")]
	public TMP_FontAsset()
	{
	}
}
