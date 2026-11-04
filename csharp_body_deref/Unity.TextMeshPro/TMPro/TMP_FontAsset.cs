// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.TMP_FontAsset
// Update status: CHANGED in this game update
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
[Token(Token = "0x2000032")]
[ExcludeFromPreset]
[TMPro.TMPHelpURL("FontAssets")]
public class TMP_FontAsset : TMP_Asset
{
	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x98")]
	[SerializeField]
	internal string m_SourceFontFileGUID;

	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0xA0")]
	[SerializeField]
	internal FontAssetCreationSettings m_CreationSettings;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x100")]
	[SerializeField]
	private Font m_SourceFontFile;

	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x108")]
	[SerializeField]
	private string m_SourceFontFilePath;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x110")]
	[SerializeField]
	private AtlasPopulationMode m_AtlasPopulationMode;

	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x114")]
	[SerializeField]
	internal bool InternalDynamicOS;

	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0x118")]
	private int m_FamilyNameHashCode;

	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x11C")]
	private int m_StyleNameHashCode;

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x120")]
	[SerializeField]
	internal List<Glyph> m_GlyphTable;

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x128")]
	internal Dictionary<uint, Glyph> m_GlyphLookupDictionary;

	[Token(Token = "0x40000E2")]
	[FieldOffset(Offset = "0x130")]
	[SerializeField]
	internal List<TMP_Character> m_CharacterTable;

	[Token(Token = "0x40000E3")]
	[FieldOffset(Offset = "0x138")]
	internal Dictionary<uint, TMP_Character> m_CharacterLookupDictionary;

	[Token(Token = "0x40000E4")]
	[FieldOffset(Offset = "0x140")]
	internal Texture2D m_AtlasTexture;

	[Token(Token = "0x40000E5")]
	[FieldOffset(Offset = "0x148")]
	[SerializeField]
	internal Texture2D[] m_AtlasTextures;

	[Token(Token = "0x40000E6")]
	[FieldOffset(Offset = "0x150")]
	[SerializeField]
	internal int m_AtlasTextureIndex;

	[Token(Token = "0x40000E7")]
	[FieldOffset(Offset = "0x154")]
	[SerializeField]
	private bool m_IsMultiAtlasTexturesEnabled;

	[Token(Token = "0x40000E8")]
	[FieldOffset(Offset = "0x155")]
	[SerializeField]
	private bool m_GetFontFeatures;

	[Token(Token = "0x40000E9")]
	[FieldOffset(Offset = "0x156")]
	[SerializeField]
	private bool m_ClearDynamicDataOnBuild;

	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0x158")]
	[SerializeField]
	internal int m_AtlasWidth;

	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0x15C")]
	[SerializeField]
	internal int m_AtlasHeight;

	[Token(Token = "0x40000EC")]
	[FieldOffset(Offset = "0x160")]
	[SerializeField]
	internal int m_AtlasPadding;

	[Token(Token = "0x40000ED")]
	[FieldOffset(Offset = "0x164")]
	[SerializeField]
	internal GlyphRenderMode m_AtlasRenderMode;

	[Token(Token = "0x40000EE")]
	[FieldOffset(Offset = "0x168")]
	[SerializeField]
	private List<GlyphRect> m_UsedGlyphRects;

	[Token(Token = "0x40000EF")]
	[FieldOffset(Offset = "0x170")]
	[SerializeField]
	private List<GlyphRect> m_FreeGlyphRects;

	[Token(Token = "0x40000F0")]
	[FieldOffset(Offset = "0x178")]
	[SerializeField]
	internal TMP_FontFeatureTable m_FontFeatureTable;

	[Token(Token = "0x40000F1")]
	[FieldOffset(Offset = "0x180")]
	[SerializeField]
	internal bool m_ShouldReimportFontFeatures;

	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0x188")]
	[SerializeField]
	internal List<TMP_FontAsset> m_FallbackFontAssetTable;

	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0x190")]
	[SerializeField]
	private TMP_FontWeightPair[] m_FontWeightTable;

	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0x198")]
	[SerializeField]
	private TMP_FontWeightPair[] fontWeights;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x1A0")]
	public float normalStyle;

	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x1A4")]
	public float normalSpacingOffset;

	[Token(Token = "0x40000F7")]
	[FieldOffset(Offset = "0x1A8")]
	public float boldStyle;

	[Token(Token = "0x40000F8")]
	[FieldOffset(Offset = "0x1AC")]
	public float boldSpacing;

	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x1B0")]
	public byte italicStyle;

	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0x1B1")]
	public byte tabSize;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x1B2")]
	internal bool IsFontAssetLookupTablesDirty;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x1B8")]
	private UnityEngine.TextCore.LowLevel.FontFaceHandle m_FontFaceHandle;

	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0x1C8")]
	[SerializeField]
	private FaceInfo_Legacy m_fontInfo;

	[Token(Token = "0x40000FE")]
	[FieldOffset(Offset = "0x1D0")]
	[SerializeField]
	internal List<TMP_Glyph> m_glyphInfoList;

	[Token(Token = "0x40000FF")]
	[FieldOffset(Offset = "0x1D8")]
	[SerializeField]
	[FormerlySerializedAs("m_kerningInfo")]
	internal KerningTable m_KerningTable;

	[Token(Token = "0x4000100")]
	[FieldOffset(Offset = "0x1E0")]
	[SerializeField]
	private List<TMP_FontAsset> fallbackFontAssets;

	[Token(Token = "0x4000101")]
	[FieldOffset(Offset = "0x1E8")]
	[SerializeField]
	public Texture2D atlas;

	[Token(Token = "0x4000102")]
	[FieldOffset(Offset = "0x0")]
	private static readonly List<WeakReference<TMP_FontAsset>> s_CallbackInstances;

	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0x8")]
	private static ProfilerMarker k_ReadFontAssetDefinitionMarker;

	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0x10")]
	private static ProfilerMarker k_AddSynthesizedCharactersMarker;

	[Token(Token = "0x4000105")]
	[FieldOffset(Offset = "0x18")]
	private static ProfilerMarker k_TryAddGlyphMarker;

	[Token(Token = "0x4000106")]
	[FieldOffset(Offset = "0x20")]
	private static ProfilerMarker k_TryAddCharacterMarker;

	[Token(Token = "0x4000107")]
	[FieldOffset(Offset = "0x28")]
	private static ProfilerMarker k_TryAddCharactersMarker;

	[Token(Token = "0x4000108")]
	[FieldOffset(Offset = "0x30")]
	private static ProfilerMarker k_UpdateLigatureSubstitutionRecordsMarker;

	[Token(Token = "0x4000109")]
	[FieldOffset(Offset = "0x38")]
	private static ProfilerMarker k_UpdateGlyphAdjustmentRecordsMarker;

	[Token(Token = "0x400010A")]
	[FieldOffset(Offset = "0x40")]
	private static ProfilerMarker k_UpdateDiacriticalMarkAdjustmentRecordsMarker;

	[Token(Token = "0x400010B")]
	[FieldOffset(Offset = "0x48")]
	private static ProfilerMarker k_ClearFontAssetDataMarker;

	[Token(Token = "0x400010C")]
	[FieldOffset(Offset = "0x50")]
	private static ProfilerMarker k_UpdateFontAssetDataMarker;

	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x58")]
	private static string s_DefaultMaterialSuffix;

	[Token(Token = "0x400010E")]
	[FieldOffset(Offset = "0x60")]
	private static HashSet<int> k_SearchedFontAssetLookup;

	[Token(Token = "0x400010F")]
	[FieldOffset(Offset = "0x68")]
	private static List<TMP_FontAsset> k_FontAssets_FontFeaturesUpdateQueue;

	[Token(Token = "0x4000110")]
	[FieldOffset(Offset = "0x70")]
	private static HashSet<int> k_FontAssets_FontFeaturesUpdateQueueLookup;

	[Token(Token = "0x4000111")]
	[FieldOffset(Offset = "0x78")]
	private static List<Texture2D> k_FontAssets_AtlasTexturesUpdateQueue;

	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0x80")]
	private static HashSet<int> k_FontAssets_AtlasTexturesUpdateQueueLookup;

	[Token(Token = "0x4000113")]
	[FieldOffset(Offset = "0x1F0")]
	private List<Glyph> m_GlyphsToRender;

	[Token(Token = "0x4000114")]
	[FieldOffset(Offset = "0x1F8")]
	private List<Glyph> m_GlyphsRendered;

	[Token(Token = "0x4000115")]
	[FieldOffset(Offset = "0x200")]
	private List<uint> m_GlyphIndexList;

	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0x208")]
	private List<uint> m_GlyphIndexListNewlyAdded;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x210")]
	internal List<uint> m_GlyphsToAdd;

	[Token(Token = "0x4000118")]
	[FieldOffset(Offset = "0x218")]
	internal HashSet<uint> m_GlyphsToAddLookup;

	[Token(Token = "0x4000119")]
	[FieldOffset(Offset = "0x220")]
	internal List<TMP_Character> m_CharactersToAdd;

	[Token(Token = "0x400011A")]
	[FieldOffset(Offset = "0x228")]
	internal HashSet<uint> m_CharactersToAddLookup;

	[Token(Token = "0x400011B")]
	[FieldOffset(Offset = "0x230")]
	internal List<uint> s_MissingCharacterList;

	[Token(Token = "0x400011C")]
	[FieldOffset(Offset = "0x238")]
	internal HashSet<uint> m_MissingUnicodesFromFontFile;

	[Token(Token = "0x400011D")]
	[FieldOffset(Offset = "0x88")]
	internal static uint[] k_GlyphIndexArray;

	[Token(Token = "0x17000043")]
	public FontAssetCreationSettings creationSettings
	{
		[Token(Token = "0x6000121")]
		[Address(RVA = "0x2CF3C20", Offset = "0x2CF2220", VA = "0x182CF3C20")]
		get
		{
			return default(FontAssetCreationSettings);
		}
		[Token(Token = "0x6000122")]
		[Address(RVA = "0x2CF3E60", Offset = "0x2CF2460", VA = "0x182CF3E60")]
		set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public Font sourceFontFile
	{
		[Token(Token = "0x6000123")]
		[Address(RVA = "0x187BC70", Offset = "0x187A270", VA = "0x18187BC70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000124")]
		[Address(RVA = "0x1BD5920", Offset = "0x1BD3F20", VA = "0x181BD5920")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public AtlasPopulationMode atlasPopulationMode
	{
		[Token(Token = "0x6000125")]
		[Address(RVA = "0x1CD3470", Offset = "0x1CD1A70", VA = "0x181CD3470")]
		get
		{
			return default(AtlasPopulationMode);
		}
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x1CD3E60", Offset = "0x1CD2460", VA = "0x181CD3E60")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	internal int familyNameHashCode
	{
		[Token(Token = "0x6000127")]
		[Address(RVA = "0x2CF3C70", Offset = "0x2CF2270", VA = "0x182CF3C70")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000128")]
		[Address(RVA = "0x1D1FE90", Offset = "0x1D1E490", VA = "0x181D1FE90")]
		set
		{
		}
	}

	[Token(Token = "0x17000047")]
	internal int styleNameHashCode
	{
		[Token(Token = "0x6000129")]
		[Address(RVA = "0x2CF3D80", Offset = "0x2CF2380", VA = "0x182CF3D80")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600012A")]
		[Address(RVA = "0x1D1FE80", Offset = "0x1D1E480", VA = "0x181D1FE80")]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	public List<Glyph> glyphTable
	{
		[Token(Token = "0x600012B")]
		[Address(RVA = "0xA2F260", Offset = "0xA2D860", VA = "0x180A2F260")]
		get
		{
			return null;
		}
		[Token(Token = "0x600012C")]
		[Address(RVA = "0x2CF3F20", Offset = "0x2CF2520", VA = "0x182CF3F20")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public Dictionary<uint, Glyph> glyphLookupTable
	{
		[Token(Token = "0x600012D")]
		[Address(RVA = "0x2CF3D30", Offset = "0x2CF2330", VA = "0x182CF3D30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004A")]
	public List<TMP_Character> characterTable
	{
		[Token(Token = "0x600012E")]
		[Address(RVA = "0x2CF3C00", Offset = "0x2CF2200", VA = "0x182CF3C00")]
		get
		{
			return null;
		}
		[Token(Token = "0x600012F")]
		[Address(RVA = "0x24C0B20", Offset = "0x24BF120", VA = "0x1824C0B20")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700004B")]
	public Dictionary<uint, TMP_Character> characterLookupTable
	{
		[Token(Token = "0x6000130")]
		[Address(RVA = "0x2CF3BC0", Offset = "0x2CF21C0", VA = "0x182CF3BC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004C")]
	public Texture2D atlasTexture
	{
		[Token(Token = "0x6000131")]
		[Address(RVA = "0x2CF3B10", Offset = "0x2CF2110", VA = "0x182CF3B10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004D")]
	public Texture2D[] atlasTextures
	{
		[Token(Token = "0x6000132")]
		[Address(RVA = "0xA29A50", Offset = "0xA28050", VA = "0x180A29A50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000133")]
		[Address(RVA = "0x1D1FE20", Offset = "0x1D1E420", VA = "0x181D1FE20")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public int atlasTextureCount
	{
		[Token(Token = "0x6000134")]
		[Address(RVA = "0x2CF3B00", Offset = "0x2CF2100", VA = "0x182CF3B00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700004F")]
	public bool isMultiAtlasTexturesEnabled
	{
		[Token(Token = "0x6000135")]
		[Address(RVA = "0x2CF3D70", Offset = "0x2CF2370", VA = "0x182CF3D70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000136")]
		[Address(RVA = "0x2CF3F40", Offset = "0x2CF2540", VA = "0x182CF3F40")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	public bool getFontFeatures
	{
		[Token(Token = "0x6000137")]
		[Address(RVA = "0x2CF3D20", Offset = "0x2CF2320", VA = "0x182CF3D20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000138")]
		[Address(RVA = "0x2CF3F10", Offset = "0x2CF2510", VA = "0x182CF3F10")]
		set
		{
		}
	}

	[Token(Token = "0x17000051")]
	internal bool clearDynamicDataOnBuild
	{
		[Token(Token = "0x6000139")]
		[Address(RVA = "0x2CF3C10", Offset = "0x2CF2210", VA = "0x182CF3C10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600013A")]
		[Address(RVA = "0x2CF3E50", Offset = "0x2CF2450", VA = "0x182CF3E50")]
		set
		{
		}
	}

	[Token(Token = "0x17000052")]
	public int atlasWidth
	{
		[Token(Token = "0x600013B")]
		[Address(RVA = "0x2CF3BB0", Offset = "0x2CF21B0", VA = "0x182CF3BB0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600013C")]
		[Address(RVA = "0x2CF3E40", Offset = "0x2CF2440", VA = "0x182CF3E40")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000053")]
	public int atlasHeight
	{
		[Token(Token = "0x600013D")]
		[Address(RVA = "0x2CF3AE0", Offset = "0x2CF20E0", VA = "0x182CF3AE0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600013E")]
		[Address(RVA = "0x2CF3E10", Offset = "0x2CF2410", VA = "0x182CF3E10")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000054")]
	public int atlasPadding
	{
		[Token(Token = "0x600013F")]
		[Address(RVA = "0x2182B20", Offset = "0x2181120", VA = "0x182182B20")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000140")]
		[Address(RVA = "0x2CF3E20", Offset = "0x2CF2420", VA = "0x182CF3E20")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000055")]
	public GlyphRenderMode atlasRenderMode
	{
		[Token(Token = "0x6000141")]
		[Address(RVA = "0x2CF3AF0", Offset = "0x2CF20F0", VA = "0x182CF3AF0")]
		get
		{
			return default(GlyphRenderMode);
		}
		[Token(Token = "0x6000142")]
		[Address(RVA = "0x2CF3E30", Offset = "0x2CF2430", VA = "0x182CF3E30")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000056")]
	internal List<GlyphRect> usedGlyphRects
	{
		[Token(Token = "0x6000143")]
		[Address(RVA = "0x2CF3E00", Offset = "0x2CF2400", VA = "0x182CF3E00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000144")]
		[Address(RVA = "0x2CF3F50", Offset = "0x2CF2550", VA = "0x182CF3F50")]
		set
		{
		}
	}

	[Token(Token = "0x17000057")]
	internal List<GlyphRect> freeGlyphRects
	{
		[Token(Token = "0x6000145")]
		[Address(RVA = "0x2602B00", Offset = "0x2601100", VA = "0x182602B00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000146")]
		[Address(RVA = "0x2CF3EF0", Offset = "0x2CF24F0", VA = "0x182CF3EF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000058")]
	public TMP_FontFeatureTable fontFeatureTable
	{
		[Token(Token = "0x6000147")]
		[Address(RVA = "0x2CF3CF0", Offset = "0x2CF22F0", VA = "0x182CF3CF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000148")]
		[Address(RVA = "0x26ABCB0", Offset = "0x26AA2B0", VA = "0x1826ABCB0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000059")]
	public List<TMP_FontAsset> fallbackFontAssetTable
	{
		[Token(Token = "0x6000149")]
		[Address(RVA = "0x1D6BB50", Offset = "0x1D6A150", VA = "0x181D6BB50")]
		get
		{
			return null;
		}
		[Token(Token = "0x600014A")]
		[Address(RVA = "0x2CF3EB0", Offset = "0x2CF24B0", VA = "0x182CF3EB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	public TMP_FontWeightPair[] fontWeightTable
	{
		[Token(Token = "0x600014B")]
		[Address(RVA = "0x2CF3D10", Offset = "0x2CF2310", VA = "0x182CF3D10")]
		get
		{
			return null;
		}
		[Token(Token = "0x600014C")]
		[Address(RVA = "0x2CF3ED0", Offset = "0x2CF24D0", VA = "0x182CF3ED0")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700005B")]
	[Obsolete("The fontInfo property and underlying type is now obsolete. Please use the faceInfo property and FaceInfo type instead.")]
	public FaceInfo_Legacy fontInfo
	{
		[Token(Token = "0x600014D")]
		[Address(RVA = "0x2CF3D00", Offset = "0x2CF2300", VA = "0x182CF3D00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x2CE9B90", Offset = "0x2CE8190", VA = "0x182CE9B90")]
	public static TMP_FontAsset CreateFontAsset(string familyName, string styleName, int pointSize = 90)
	{
		return null;
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x2CEA4B0", Offset = "0x2CE8AB0", VA = "0x182CEA4B0")]
	public static TMP_FontAsset CreateFontAsset(string fontFilePath, int faceIndex, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight)
	{
		return null;
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x2CEA300", Offset = "0x2CE8900", VA = "0x182CEA300")]
	private static TMP_FontAsset CreateFontAsset(string fontFilePath, int faceIndex, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport = true)
	{
		return null;
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x2CE9DC0", Offset = "0x2CE83C0", VA = "0x182CE9DC0")]
	public static TMP_FontAsset CreateFontAsset(Font font)
	{
		return null;
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x2CEA140", Offset = "0x2CE8740", VA = "0x182CEA140")]
	public static TMP_FontAsset CreateFontAsset(Font font, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode = AtlasPopulationMode.Dynamic, bool enableMultiAtlasSupport = true)
	{
		return null;
	}

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x2CE9FA0", Offset = "0x2CE85A0", VA = "0x182CE9FA0")]
	private static TMP_FontAsset CreateFontAsset(Font font, int faceIndex, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode = AtlasPopulationMode.Dynamic, bool enableMultiAtlasSupport = true)
	{
		return null;
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x2CE9560", Offset = "0x2CE7B60", VA = "0x182CE9560")]
	private static TMP_FontAsset CreateFontAssetInstance(Font font, UnityEngine.TextCore.LowLevel.FontFaceHandle faceHandle, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport)
	{
		return null;
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x2CEDC90", Offset = "0x2CEC290", VA = "0x182CEDC90")]
	private void RegisterCallbackInstance(TMP_FontAsset instance)
	{
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x2CED290", Offset = "0x2CEB890", VA = "0x182CED290")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x2CED3C0", Offset = "0x2CEB9C0", VA = "0x182CED3C0")]
	public void ReadFontAssetDefinition()
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x2CEBFD0", Offset = "0x2CEA5D0", VA = "0x182CEBFD0")]
	internal void InitializeDictionaryLookupTables()
	{
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x2CEC4D0", Offset = "0x2CEAAD0", VA = "0x182CEC4D0")]
	internal void InitializeGlyphLookupDictionary()
	{
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x2CEBDC0", Offset = "0x2CEA3C0", VA = "0x182CEBDC0")]
	internal void InitializeCharacterLookupDictionary()
	{
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x2CE8F50", Offset = "0x2CE7550", VA = "0x182CE8F50")]
	internal void ClearFallbackCharacterTable()
	{
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x2CECA10", Offset = "0x2CEB010", VA = "0x182CECA10")]
	internal void InitializeLigatureSubstitutionLookupDictionary()
	{
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x2CEC760", Offset = "0x2CEAD60", VA = "0x182CEC760")]
	internal void InitializeGlyphPaidAdjustmentRecordsLookupDictionary()
	{
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x2CECCD0", Offset = "0x2CEB2D0", VA = "0x182CECCD0")]
	internal void InitializeMarkToBaseAdjustmentRecordsLookupDictionary()
	{
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x2CECEC0", Offset = "0x2CEB4C0", VA = "0x182CECEC0")]
	internal void InitializeMarkToMarkAdjustmentRecordsLookupDictionary()
	{
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x2CE88A0", Offset = "0x2CE6EA0", VA = "0x182CE88A0")]
	internal void AddSynthesizedCharactersAndFaceMetrics()
	{
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x2CE8550", Offset = "0x2CE6B50", VA = "0x182CE8550")]
	private void AddSynthesizedCharacter(uint unicode, bool isFontFaceLoaded, bool addImmediately = false)
	{
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x2CE76B0", Offset = "0x2CE5CB0", VA = "0x182CE76B0")]
	internal void AddCharacterToLookupCache(uint unicode, TMP_Character character, FontStyles fontStyle = FontStyles.Normal, FontWeight fontWeight = FontWeight.Regular, bool isAlternativeTypeface = false)
	{
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x2CED0B0", Offset = "0x2CEB6B0", VA = "0x182CED0B0")]
	internal FontEngineError LoadFontFace(out UnityEngine.TextCore.LowLevel.FontFaceHandle faceHandle)
	{
		return default(FontEngineError);
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x2CED0E0", Offset = "0x2CEB6E0", VA = "0x182CED0E0")]
	internal FontEngineError LoadFontFace()
	{
		return default(FontEngineError);
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x2CEE6F0", Offset = "0x2CECCF0", VA = "0x182CEE6F0")]
	internal void SortCharacterTable()
	{
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x2CEE8C0", Offset = "0x2CECEC0", VA = "0x182CEE8C0")]
	internal void SortGlyphTable()
	{
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x2CEE870", Offset = "0x2CECE70", VA = "0x182CEE870")]
	internal void SortFontFeatureTable()
	{
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x2CEE3E0", Offset = "0x2CEC9E0", VA = "0x182CEE3E0")]
	internal void SortAllTables()
	{
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x2CEABE0", Offset = "0x2CE91E0", VA = "0x182CEABE0")]
	public bool HasCharacter(int character)
	{
		return default(bool);
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x2CEAC60", Offset = "0x2CE9260", VA = "0x182CEAC60")]
	public bool HasCharacter(char character, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x2CEA990", Offset = "0x2CE8F90", VA = "0x182CEA990")]
	private bool HasCharacter_Internal(uint character, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x2CEB260", Offset = "0x2CE9860", VA = "0x182CEB260")]
	public bool HasCharacters(string text, out List<char> missingCharacters)
	{
		return default(bool);
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x2CEB400", Offset = "0x2CE9A00", VA = "0x182CEB400")]
	public bool HasCharacters(string text, out uint[] missingCharacters, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x2CEBB70", Offset = "0x2CEA170", VA = "0x182CEBB70")]
	public bool HasCharacters(string text)
	{
		return default(bool);
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x2CEA700", Offset = "0x2CE8D00", VA = "0x182CEA700")]
	public static string GetCharacters(TMP_FontAsset fontAsset)
	{
		return null;
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x2CEA630", Offset = "0x2CE8C30", VA = "0x182CEA630")]
	public static int[] GetCharactersArray(TMP_FontAsset fontAsset)
	{
		return null;
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x2CEA7F0", Offset = "0x2CE8DF0", VA = "0x182CEA7F0")]
	internal uint GetGlyphIndex(uint unicode)
	{
		return default(uint);
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x2CEA8F0", Offset = "0x2CE8EF0", VA = "0x182CEA8F0")]
	internal uint GetGlyphVariantIndex(uint unicode, uint variantSelectorUnicode)
	{
		return default(uint);
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x2CEDFE0", Offset = "0x2CEC5E0", VA = "0x182CEDFE0")]
	internal static void RegisterFontAssetForFontFeatureUpdate(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x2CF2670", Offset = "0x2CF0C70", VA = "0x182CF2670")]
	internal static void UpdateFontFeaturesForFontAssetsInQueue()
	{
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x2CEDB40", Offset = "0x2CEC140", VA = "0x182CEDB40")]
	internal static void RegisterAtlasTextureForApply(Texture2D texture)
	{
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x2CF1F00", Offset = "0x2CF0500", VA = "0x182CF1F00")]
	internal static void UpdateAtlasTexturesInQueue()
	{
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x2CF2300", Offset = "0x2CF0900", VA = "0x182CF2300")]
	internal static void UpdateFontAssetsInUpdateQueue()
	{
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x2CF0C50", Offset = "0x2CEF250", VA = "0x182CF0C50")]
	public bool TryAddCharacters(uint[] unicodes, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x2CEF3B0", Offset = "0x2CED9B0", VA = "0x182CEF3B0")]
	public bool TryAddCharacters(uint[] unicodes, out uint[] missingUnicodes, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x2CF0010", Offset = "0x2CEE610", VA = "0x182CF0010")]
	public bool TryAddCharacters(string characters, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x2CF0040", Offset = "0x2CEE640", VA = "0x182CF0040")]
	public bool TryAddCharacters(string characters, out string missingCharacters, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x2CE7740", Offset = "0x2CE5D40", VA = "0x182CE7740")]
	internal bool AddGlyphInternal(uint glyphIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x2CF0C80", Offset = "0x2CEF280", VA = "0x182CF0C80")]
	internal bool TryAddGlyphInternal(uint glyphIndex, out Glyph glyph)
	{
		return default(bool);
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x2CEEA40", Offset = "0x2CED040", VA = "0x182CEEA40")]
	internal bool TryAddCharacterInternal(uint unicode, out TMP_Character character)
	{
		return default(bool);
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x2CF1830", Offset = "0x2CEFE30", VA = "0x182CF1830")]
	internal bool TryGetCharacter_and_QueueRenderToTexture(uint unicode, out TMP_Character character)
	{
		return default(bool);
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal void TryAddGlyphsToAtlasTextures()
	{
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x2CF1330", Offset = "0x2CEF930", VA = "0x182CF1330")]
	private bool TryAddGlyphsToNewAtlasTexture()
	{
		return default(bool);
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x2CEE130", Offset = "0x2CEC730", VA = "0x182CEE130")]
	private void SetupNewAtlasTexture()
	{
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x2CF1D50", Offset = "0x2CF0350", VA = "0x182CF1D50")]
	internal void UpdateAtlasTexture()
	{
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x2CF2840", Offset = "0x2CF0E40", VA = "0x182CF2840")]
	private void UpdateFontFeaturesForNewlyAddedGlyphs()
	{
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x2CF2920", Offset = "0x2CF0F20", VA = "0x182CF2920")]
	private void UpdateGPOSFontFeaturesForNewlyAddedGlyphs()
	{
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x2CEBC60", Offset = "0x2CEA260", VA = "0x182CEBC60")]
	internal void ImportFontFeatures()
	{
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x2CF2980", Offset = "0x2CF0F80", VA = "0x182CF2980")]
	private void UpdateGSUBFontFeaturesForNewGlyphIndex(uint glyphIndex)
	{
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x2CF2DB0", Offset = "0x2CF13B0", VA = "0x182CF2DB0")]
	internal void UpdateLigatureSubstitutionRecords()
	{
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x2CE7760", Offset = "0x2CE5D60", VA = "0x182CE7760")]
	private void AddLigatureSubstitutionRecords(UnityEngine.TextCore.LowLevel.LigatureSubstitutionRecord[] records)
	{
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x2CF2A10", Offset = "0x2CF1010", VA = "0x182CF2A10")]
	internal void UpdateGlyphAdjustmentRecords()
	{
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x2CE8240", Offset = "0x2CE6840", VA = "0x182CE8240")]
	private void AddPairAdjustmentRecords(GlyphPairAdjustmentRecord[] records)
	{
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x2CF2AA0", Offset = "0x2CF10A0", VA = "0x182CF2AA0")]
	internal void UpdateGlyphAdjustmentRecords(uint[] glyphIndexes)
	{
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x2CF2090", Offset = "0x2CF0690", VA = "0x182CF2090")]
	internal void UpdateDiacriticalMarkAdjustmentRecords()
	{
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x2CE7C40", Offset = "0x2CE6240", VA = "0x182CE7C40")]
	private void AddMarkToBaseAdjustmentRecords(UnityEngine.TextCore.LowLevel.MarkToBaseAdjustmentRecord[] records)
	{
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x2CE7F40", Offset = "0x2CE6540", VA = "0x182CE7F40")]
	private void AddMarkToMarkAdjustmentRecords(UnityEngine.TextCore.LowLevel.MarkToMarkAdjustmentRecord[] records)
	{
	}

	[Token(Token = "0x6000190")]
	private void CopyListDataToArray<T>(List<T> srcList, ref T[] dstArray)
	{
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x2CF2170", Offset = "0x2CF0770", VA = "0x182CF2170")]
	internal void UpdateFontAssetData()
	{
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x2CE9270", Offset = "0x2CE7870", VA = "0x182CE9270")]
	public void ClearFontAssetData(bool setAtlasSizeToZero = false)
	{
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x2CE8D10", Offset = "0x2CE7310", VA = "0x182CE8D10")]
	internal void ClearCharacterAndGlyphTablesInternal()
	{
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x2CE9440", Offset = "0x2CE7A40", VA = "0x182CE9440")]
	internal void ClearFontFeaturesInternal()
	{
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x2CE8D40", Offset = "0x2CE7340", VA = "0x182CE8D40")]
	private void ClearCharacterAndGlyphTables()
	{
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x2CE9460", Offset = "0x2CE7A60", VA = "0x182CE9460")]
	private void ClearFontFeaturesTables()
	{
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x2CE8AD0", Offset = "0x2CE70D0", VA = "0x182CE8AD0")]
	internal void ClearAtlasTextures(bool setAtlasSizeToZero = false)
	{
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x2CEA550", Offset = "0x2CE8B50", VA = "0x182CEA550")]
	private void DestroyAtlasTextures()
	{
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x2CF2E40", Offset = "0x2CF1440", VA = "0x182CF2E40")]
	private void UpgradeGlyphAdjustmentTableToFontFeatureTable()
	{
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x2CF3700", Offset = "0x2CF1D00", VA = "0x182CF3700")]
	public TMP_FontAsset()
	{
	}
}
