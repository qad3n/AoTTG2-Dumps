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
		[Address(RVA = "0x66E63B0", Offset = "0x66E53B0", VA = "0x66E63B0")]
		get
		{
			return default(FontAssetCreationSettings);
		}
		[Token(Token = "0x6000122")]
		[Address(RVA = "0x66E6400", Offset = "0x66E5400", VA = "0x66E6400")]
		set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public Font sourceFontFile
	{
		[Token(Token = "0x6000123")]
		[Address(RVA = "0x66E6460", Offset = "0x66E5460", VA = "0x66E6460")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000124")]
		[Address(RVA = "0x66E6470", Offset = "0x66E5470", VA = "0x66E6470")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000045")]
	public AtlasPopulationMode atlasPopulationMode
	{
		[Token(Token = "0x6000125")]
		[Address(RVA = "0x66E6490", Offset = "0x66E5490", VA = "0x66E6490")]
		get
		{
			return default(AtlasPopulationMode);
		}
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x66E64A0", Offset = "0x66E54A0", VA = "0x66E64A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000046")]
	internal int familyNameHashCode
	{
		[Token(Token = "0x6000127")]
		[Address(RVA = "0x66E64B0", Offset = "0x66E54B0", VA = "0x66E64B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000128")]
		[Address(RVA = "0x66E6530", Offset = "0x66E5530", VA = "0x66E6530")]
		set
		{
		}
	}

	[Token(Token = "0x17000047")]
	internal int styleNameHashCode
	{
		[Token(Token = "0x6000129")]
		[Address(RVA = "0x66E6540", Offset = "0x66E5540", VA = "0x66E6540")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600012A")]
		[Address(RVA = "0x66E65C0", Offset = "0x66E55C0", VA = "0x66E65C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000048")]
	public List<Glyph> glyphTable
	{
		[Token(Token = "0x600012B")]
		[Address(RVA = "0x66E65D0", Offset = "0x66E55D0", VA = "0x66E65D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600012C")]
		[Address(RVA = "0x66E65E0", Offset = "0x66E55E0", VA = "0x66E65E0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public Dictionary<uint, Glyph> glyphLookupTable
	{
		[Token(Token = "0x600012D")]
		[Address(RVA = "0x66E6600", Offset = "0x66E5600", VA = "0x66E6600")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004A")]
	public List<TMP_Character> characterTable
	{
		[Token(Token = "0x600012E")]
		[Address(RVA = "0x66E6E00", Offset = "0x66E5E00", VA = "0x66E6E00")]
		get
		{
			return null;
		}
		[Token(Token = "0x600012F")]
		[Address(RVA = "0x66E6E10", Offset = "0x66E5E10", VA = "0x66E6E10")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700004B")]
	public Dictionary<uint, TMP_Character> characterLookupTable
	{
		[Token(Token = "0x6000130")]
		[Address(RVA = "0x66E6E30", Offset = "0x66E5E30", VA = "0x66E6E30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004C")]
	public Texture2D atlasTexture
	{
		[Token(Token = "0x6000131")]
		[Address(RVA = "0x66E6E50", Offset = "0x66E5E50", VA = "0x66E6E50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700004D")]
	public Texture2D[] atlasTextures
	{
		[Token(Token = "0x6000132")]
		[Address(RVA = "0x66E6EE0", Offset = "0x66E5EE0", VA = "0x66E6EE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000133")]
		[Address(RVA = "0x66E6EF0", Offset = "0x66E5EF0", VA = "0x66E6EF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700004E")]
	public int atlasTextureCount
	{
		[Token(Token = "0x6000134")]
		[Address(RVA = "0x66E6F10", Offset = "0x66E5F10", VA = "0x66E6F10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700004F")]
	public bool isMultiAtlasTexturesEnabled
	{
		[Token(Token = "0x6000135")]
		[Address(RVA = "0x66E6F20", Offset = "0x66E5F20", VA = "0x66E6F20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000136")]
		[Address(RVA = "0x66E6F30", Offset = "0x66E5F30", VA = "0x66E6F30")]
		set
		{
		}
	}

	[Token(Token = "0x17000050")]
	public bool getFontFeatures
	{
		[Token(Token = "0x6000137")]
		[Address(RVA = "0x66E6F40", Offset = "0x66E5F40", VA = "0x66E6F40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000138")]
		[Address(RVA = "0x66E6F50", Offset = "0x66E5F50", VA = "0x66E6F50")]
		set
		{
		}
	}

	[Token(Token = "0x17000051")]
	internal bool clearDynamicDataOnBuild
	{
		[Token(Token = "0x6000139")]
		[Address(RVA = "0x66E6F60", Offset = "0x66E5F60", VA = "0x66E6F60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600013A")]
		[Address(RVA = "0x66E6F70", Offset = "0x66E5F70", VA = "0x66E6F70")]
		set
		{
		}
	}

	[Token(Token = "0x17000052")]
	public int atlasWidth
	{
		[Token(Token = "0x600013B")]
		[Address(RVA = "0x66E6F80", Offset = "0x66E5F80", VA = "0x66E6F80")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600013C")]
		[Address(RVA = "0x66E6F90", Offset = "0x66E5F90", VA = "0x66E6F90")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000053")]
	public int atlasHeight
	{
		[Token(Token = "0x600013D")]
		[Address(RVA = "0x66E6FA0", Offset = "0x66E5FA0", VA = "0x66E6FA0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600013E")]
		[Address(RVA = "0x66E6FB0", Offset = "0x66E5FB0", VA = "0x66E6FB0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000054")]
	public int atlasPadding
	{
		[Token(Token = "0x600013F")]
		[Address(RVA = "0x66E6FC0", Offset = "0x66E5FC0", VA = "0x66E6FC0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000140")]
		[Address(RVA = "0x66E6FD0", Offset = "0x66E5FD0", VA = "0x66E6FD0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000055")]
	public GlyphRenderMode atlasRenderMode
	{
		[Token(Token = "0x6000141")]
		[Address(RVA = "0x66E6FE0", Offset = "0x66E5FE0", VA = "0x66E6FE0")]
		get
		{
			return default(GlyphRenderMode);
		}
		[Token(Token = "0x6000142")]
		[Address(RVA = "0x66E6FF0", Offset = "0x66E5FF0", VA = "0x66E6FF0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000056")]
	internal List<GlyphRect> usedGlyphRects
	{
		[Token(Token = "0x6000143")]
		[Address(RVA = "0x66E7000", Offset = "0x66E6000", VA = "0x66E7000")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000144")]
		[Address(RVA = "0x66E7010", Offset = "0x66E6010", VA = "0x66E7010")]
		set
		{
		}
	}

	[Token(Token = "0x17000057")]
	internal List<GlyphRect> freeGlyphRects
	{
		[Token(Token = "0x6000145")]
		[Address(RVA = "0x66E7030", Offset = "0x66E6030", VA = "0x66E7030")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000146")]
		[Address(RVA = "0x66E7040", Offset = "0x66E6040", VA = "0x66E7040")]
		set
		{
		}
	}

	[Token(Token = "0x17000058")]
	public TMP_FontFeatureTable fontFeatureTable
	{
		[Token(Token = "0x6000147")]
		[Address(RVA = "0x66E7060", Offset = "0x66E6060", VA = "0x66E7060")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000148")]
		[Address(RVA = "0x66E7070", Offset = "0x66E6070", VA = "0x66E7070")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000059")]
	public List<TMP_FontAsset> fallbackFontAssetTable
	{
		[Token(Token = "0x6000149")]
		[Address(RVA = "0x66E7090", Offset = "0x66E6090", VA = "0x66E7090")]
		get
		{
			return null;
		}
		[Token(Token = "0x600014A")]
		[Address(RVA = "0x66E70A0", Offset = "0x66E60A0", VA = "0x66E70A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	public TMP_FontWeightPair[] fontWeightTable
	{
		[Token(Token = "0x600014B")]
		[Address(RVA = "0x66E70C0", Offset = "0x66E60C0", VA = "0x66E70C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600014C")]
		[Address(RVA = "0x66E70D0", Offset = "0x66E60D0", VA = "0x66E70D0")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700005B")]
	[Obsolete("The fontInfo property and underlying type is now obsolete. Please use the faceInfo property and FaceInfo type instead.")]
	public FaceInfo_Legacy fontInfo
	{
		[Token(Token = "0x600014D")]
		[Address(RVA = "0x66E70F0", Offset = "0x66E60F0", VA = "0x66E70F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600014E")]
	[Address(RVA = "0x66E7100", Offset = "0x66E6100", VA = "0x66E7100")]
	public static TMP_FontAsset CreateFontAsset(string familyName, string styleName, int pointSize = 90)
	{
		return null;
	}

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x66E74A0", Offset = "0x66E64A0", VA = "0x66E74A0")]
	public static TMP_FontAsset CreateFontAsset(string fontFilePath, int faceIndex, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight)
	{
		return null;
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x66E7310", Offset = "0x66E6310", VA = "0x66E7310")]
	private static TMP_FontAsset CreateFontAsset(string fontFilePath, int faceIndex, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport = true)
	{
		return null;
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x66E7B40", Offset = "0x66E6B40", VA = "0x66E7B40")]
	public static TMP_FontAsset CreateFontAsset(Font font)
	{
		return null;
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x66E7C20", Offset = "0x66E6C20", VA = "0x66E7C20")]
	public static TMP_FontAsset CreateFontAsset(Font font, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode = AtlasPopulationMode.Dynamic, bool enableMultiAtlasSupport = true)
	{
		return null;
	}

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x66E7CC0", Offset = "0x66E6CC0", VA = "0x66E7CC0")]
	private static TMP_FontAsset CreateFontAsset(Font font, int faceIndex, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode = AtlasPopulationMode.Dynamic, bool enableMultiAtlasSupport = true)
	{
		return null;
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x66E7530", Offset = "0x66E6530", VA = "0x66E7530")]
	private static TMP_FontAsset CreateFontAssetInstance(Font font, UnityEngine.TextCore.LowLevel.FontFaceHandle faceHandle, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport)
	{
		return null;
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x66E7E50", Offset = "0x66E6E50", VA = "0x66E7E50")]
	private void RegisterCallbackInstance(TMP_FontAsset instance)
	{
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x66E81A0", Offset = "0x66E71A0", VA = "0x66E81A0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x66E6620", Offset = "0x66E5620", VA = "0x66E6620")]
	public void ReadFontAssetDefinition()
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x66E82C0", Offset = "0x66E72C0", VA = "0x66E82C0")]
	internal void InitializeDictionaryLookupTables()
	{
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x66E84E0", Offset = "0x66E74E0", VA = "0x66E84E0")]
	internal void InitializeGlyphLookupDictionary()
	{
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x66E87E0", Offset = "0x66E77E0", VA = "0x66E87E0")]
	internal void InitializeCharacterLookupDictionary()
	{
	}

	[Token(Token = "0x600015B")]
	[Address(RVA = "0x66E95E0", Offset = "0x66E85E0", VA = "0x66E95E0")]
	internal void ClearFallbackCharacterTable()
	{
	}

	[Token(Token = "0x600015C")]
	[Address(RVA = "0x66E8B50", Offset = "0x66E7B50", VA = "0x66E8B50")]
	internal void InitializeLigatureSubstitutionLookupDictionary()
	{
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x66E8EB0", Offset = "0x66E7EB0", VA = "0x66E8EB0")]
	internal void InitializeGlyphPaidAdjustmentRecordsLookupDictionary()
	{
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x66E91A0", Offset = "0x66E81A0", VA = "0x66E91A0")]
	internal void InitializeMarkToBaseAdjustmentRecordsLookupDictionary()
	{
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x66E93C0", Offset = "0x66E83C0", VA = "0x66E93C0")]
	internal void InitializeMarkToMarkAdjustmentRecordsLookupDictionary()
	{
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x66E8310", Offset = "0x66E7310", VA = "0x66E8310")]
	internal void AddSynthesizedCharactersAndFaceMetrics()
	{
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x66EA080", Offset = "0x66E9080", VA = "0x66EA080")]
	private void AddSynthesizedCharacter(uint unicode, bool isFontFaceLoaded, bool addImmediately = false)
	{
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x66EA390", Offset = "0x66E9390", VA = "0x66EA390")]
	internal void AddCharacterToLookupCache(uint unicode, TMP_Character character, FontStyles fontStyle = FontStyles.Normal, FontWeight fontWeight = FontWeight.Regular, bool isAlternativeTypeface = false)
	{
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x66EA430", Offset = "0x66E9430", VA = "0x66EA430")]
	internal FontEngineError LoadFontFace(out UnityEngine.TextCore.LowLevel.FontFaceHandle faceHandle)
	{
		return default(FontEngineError);
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x66E9EE0", Offset = "0x66E8EE0", VA = "0x66E9EE0")]
	internal FontEngineError LoadFontFace()
	{
		return default(FontEngineError);
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x66EA460", Offset = "0x66E9460", VA = "0x66EA460")]
	internal void SortCharacterTable()
	{
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x66EA5C0", Offset = "0x66E95C0", VA = "0x66EA5C0")]
	internal void SortGlyphTable()
	{
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x66EA720", Offset = "0x66E9720", VA = "0x66EA720")]
	internal void SortFontFeatureTable()
	{
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x66EA770", Offset = "0x66E9770", VA = "0x66EA770")]
	internal void SortAllTables()
	{
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x66EA7C0", Offset = "0x66E97C0", VA = "0x66EA7C0")]
	public bool HasCharacter(int character)
	{
		return default(bool);
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x66EA830", Offset = "0x66E9830", VA = "0x66EA830")]
	public bool HasCharacter(char character, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x66EBA80", Offset = "0x66EAA80", VA = "0x66EBA80")]
	private bool HasCharacter_Internal(uint character, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x66EBCE0", Offset = "0x66EACE0", VA = "0x66EBCE0")]
	public bool HasCharacters(string text, out List<char> missingCharacters)
	{
		return default(bool);
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x66EBED0", Offset = "0x66EAED0", VA = "0x66EBED0")]
	public bool HasCharacters(string text, out uint[] missingCharacters, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x66EC6B0", Offset = "0x66EB6B0", VA = "0x66EC6B0")]
	public bool HasCharacters(string text)
	{
		return default(bool);
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x66EC7A0", Offset = "0x66EB7A0", VA = "0x66EC7A0")]
	public static string GetCharacters(TMP_FontAsset fontAsset)
	{
		return null;
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x66EC8A0", Offset = "0x66EB8A0", VA = "0x66EC8A0")]
	public static int[] GetCharactersArray(TMP_FontAsset fontAsset)
	{
		return null;
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x66EC9A0", Offset = "0x66EB9A0", VA = "0x66EC9A0")]
	internal uint GetGlyphIndex(uint unicode)
	{
		return default(uint);
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x66ECA80", Offset = "0x66EBA80", VA = "0x66ECA80")]
	internal uint GetGlyphVariantIndex(uint unicode, uint variantSelectorUnicode)
	{
		return default(uint);
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x66ECB10", Offset = "0x66EBB10", VA = "0x66ECB10")]
	internal static void RegisterFontAssetForFontFeatureUpdate(TMP_FontAsset fontAsset)
	{
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x66ECC60", Offset = "0x66EBC60", VA = "0x66ECC60")]
	internal static void UpdateFontFeaturesForFontAssetsInQueue()
	{
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x66ECEB0", Offset = "0x66EBEB0", VA = "0x66ECEB0")]
	internal static void RegisterAtlasTextureForApply(Texture2D texture)
	{
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x66ECFD0", Offset = "0x66EBFD0", VA = "0x66ECFD0")]
	internal static void UpdateAtlasTexturesInQueue()
	{
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x66ED180", Offset = "0x66EC180", VA = "0x66ED180")]
	internal static void UpdateFontAssetsInUpdateQueue()
	{
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x66ED1E0", Offset = "0x66EC1E0", VA = "0x66ED1E0")]
	public bool TryAddCharacters(uint[] unicodes, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x66ED200", Offset = "0x66EC200", VA = "0x66ED200")]
	public bool TryAddCharacters(uint[] unicodes, out uint[] missingUnicodes, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x66EE7B0", Offset = "0x66ED7B0", VA = "0x66EE7B0")]
	public bool TryAddCharacters(string characters, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x66EE7D0", Offset = "0x66ED7D0", VA = "0x66EE7D0")]
	public bool TryAddCharacters(string characters, out string missingCharacters, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x66EF690", Offset = "0x66EE690", VA = "0x66EF690")]
	internal bool AddGlyphInternal(uint glyphIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x66EF6B0", Offset = "0x66EE6B0", VA = "0x66EF6B0")]
	internal bool TryAddGlyphInternal(uint glyphIndex, out Glyph glyph)
	{
		return default(bool);
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x66EAE60", Offset = "0x66E9E60", VA = "0x66EAE60")]
	internal bool TryAddCharacterInternal(uint unicode, out TMP_Character character)
	{
		return default(bool);
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x66F01D0", Offset = "0x66EF1D0", VA = "0x66F01D0")]
	internal bool TryGetCharacter_and_QueueRenderToTexture(uint unicode, out TMP_Character character)
	{
		return default(bool);
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x66F08B0", Offset = "0x66EF8B0", VA = "0x66F08B0")]
	internal void TryAddGlyphsToAtlasTextures()
	{
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x66EE130", Offset = "0x66ED130", VA = "0x66EE130")]
	private bool TryAddGlyphsToNewAtlasTexture()
	{
		return default(bool);
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x66EFF80", Offset = "0x66EEF80", VA = "0x66EFF80")]
	private void SetupNewAtlasTexture()
	{
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x66F08C0", Offset = "0x66EF8C0", VA = "0x66F08C0")]
	internal void UpdateAtlasTexture()
	{
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x66EE680", Offset = "0x66ED680", VA = "0x66EE680")]
	private void UpdateFontFeaturesForNewlyAddedGlyphs()
	{
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x66ECDF0", Offset = "0x66EBDF0", VA = "0x66ECDF0")]
	private void UpdateGPOSFontFeaturesForNewlyAddedGlyphs()
	{
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x66E8A00", Offset = "0x66E7A00", VA = "0x66E8A00")]
	internal void ImportFontFeatures()
	{
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x66EFEF0", Offset = "0x66EEEF0", VA = "0x66EFEF0")]
	private void UpdateGSUBFontFeaturesForNewGlyphIndex(uint glyphIndex)
	{
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x66F0A60", Offset = "0x66EFA60", VA = "0x66F0A60")]
	internal void UpdateLigatureSubstitutionRecords()
	{
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x66F17A0", Offset = "0x66F07A0", VA = "0x66F17A0")]
	private void AddLigatureSubstitutionRecords(UnityEngine.TextCore.LowLevel.LigatureSubstitutionRecord[] records)
	{
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x66F0AF0", Offset = "0x66EFAF0", VA = "0x66F0AF0")]
	internal void UpdateGlyphAdjustmentRecords()
	{
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x66F0C50", Offset = "0x66EFC50", VA = "0x66F0C50")]
	private void AddPairAdjustmentRecords(GlyphPairAdjustmentRecord[] records)
	{
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x66F1D80", Offset = "0x66F0D80", VA = "0x66F1D80")]
	internal void UpdateGlyphAdjustmentRecords(uint[] glyphIndexes)
	{
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x66F0B80", Offset = "0x66EFB80", VA = "0x66F0B80")]
	internal void UpdateDiacriticalMarkAdjustmentRecords()
	{
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x66F1020", Offset = "0x66F0020", VA = "0x66F1020")]
	private void AddMarkToBaseAdjustmentRecords(UnityEngine.TextCore.LowLevel.MarkToBaseAdjustmentRecord[] records)
	{
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x66F13E0", Offset = "0x66F03E0", VA = "0x66F13E0")]
	private void AddMarkToMarkAdjustmentRecords(UnityEngine.TextCore.LowLevel.MarkToMarkAdjustmentRecord[] records)
	{
	}

	[Token(Token = "0x6000190")]
	private void CopyListDataToArray<T>(List<T> srcList, ref T[] dstArray)
	{
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x66F2180", Offset = "0x66F1180", VA = "0x66F2180")]
	internal void UpdateFontAssetData()
	{
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x66F27D0", Offset = "0x66F17D0", VA = "0x66F27D0")]
	public void ClearFontAssetData(bool setAtlasSizeToZero = false)
	{
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x66F29A0", Offset = "0x66F19A0", VA = "0x66F29A0")]
	internal void ClearCharacterAndGlyphTablesInternal()
	{
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x66F29C0", Offset = "0x66F19C0", VA = "0x66F29C0")]
	internal void ClearFontFeaturesInternal()
	{
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x66F2300", Offset = "0x66F1300", VA = "0x66F2300")]
	private void ClearCharacterAndGlyphTables()
	{
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x66F24D0", Offset = "0x66F14D0", VA = "0x66F24D0")]
	private void ClearFontFeaturesTables()
	{
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x66F2590", Offset = "0x66F1590", VA = "0x66F2590")]
	internal void ClearAtlasTextures(bool setAtlasSizeToZero = false)
	{
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x66E8200", Offset = "0x66E7200", VA = "0x66E8200")]
	private void DestroyAtlasTextures()
	{
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x66E99F0", Offset = "0x66E89F0", VA = "0x66E99F0")]
	private void UpgradeGlyphAdjustmentTableToFontFeatureTable()
	{
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x66F29E0", Offset = "0x66F19E0", VA = "0x66F29E0")]
	public TMP_FontAsset()
	{
	}
}
