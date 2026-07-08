using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine.Serialization;
using UnityEngine.TextCore.LowLevel;

namespace UnityEngine.TextCore.Text;

[Serializable]
[Token(Token = "0x2000008")]
[ExcludeFromPreset]
public class FontAsset : TextAsset
{
	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	internal string m_SourceFontFileGUID;

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	internal FontAssetCreationEditorSettings m_fontAssetCreationEditorSettings;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x98")]
	[SerializeField]
	private Font m_SourceFontFile;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0xA0")]
	[SerializeField]
	private string m_SourceFontFilePath;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0xA8")]
	[SerializeField]
	private AtlasPopulationMode m_AtlasPopulationMode;

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0xAC")]
	[SerializeField]
	internal bool InternalDynamicOS;

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0xB0")]
	[SerializeField]
	internal FaceInfo m_FaceInfo;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x110")]
	private int m_FamilyNameHashCode;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x114")]
	private int m_StyleNameHashCode;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x118")]
	[SerializeField]
	internal List<Glyph> m_GlyphTable;

	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x120")]
	internal Dictionary<uint, Glyph> m_GlyphLookupDictionary;

	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x128")]
	[SerializeField]
	internal List<Character> m_CharacterTable;

	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x130")]
	internal Dictionary<uint, Character> m_CharacterLookupDictionary;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x138")]
	internal Texture2D m_AtlasTexture;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x140")]
	[SerializeField]
	internal Texture2D[] m_AtlasTextures;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x148")]
	[SerializeField]
	internal int m_AtlasTextureIndex;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x14C")]
	[SerializeField]
	private bool m_IsMultiAtlasTexturesEnabled;

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x14D")]
	[SerializeField]
	private bool m_ClearDynamicDataOnBuild;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x150")]
	[SerializeField]
	internal int m_AtlasWidth;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x154")]
	[SerializeField]
	internal int m_AtlasHeight;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x158")]
	[SerializeField]
	internal int m_AtlasPadding;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x15C")]
	[SerializeField]
	internal GlyphRenderMode m_AtlasRenderMode;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x160")]
	[SerializeField]
	private List<GlyphRect> m_UsedGlyphRects;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x168")]
	[SerializeField]
	private List<GlyphRect> m_FreeGlyphRects;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x170")]
	[SerializeField]
	internal FontFeatureTable m_FontFeatureTable;

	[Token(Token = "0x400003B")]
	[FieldOffset(Offset = "0x178")]
	[SerializeField]
	internal List<FontAsset> m_FallbackFontAssetTable;

	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x180")]
	[SerializeField]
	private FontWeightPair[] m_FontWeightTable;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x188")]
	[FormerlySerializedAs("normalStyle")]
	[SerializeField]
	internal float m_RegularStyleWeight;

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x18C")]
	[SerializeField]
	[FormerlySerializedAs("normalSpacingOffset")]
	internal float m_RegularStyleSpacing;

	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x190")]
	[FormerlySerializedAs("boldStyle")]
	[SerializeField]
	internal float m_BoldStyleWeight;

	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0x194")]
	[SerializeField]
	[FormerlySerializedAs("boldSpacing")]
	internal float m_BoldStyleSpacing;

	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x198")]
	[FormerlySerializedAs("italicStyle")]
	[SerializeField]
	internal byte m_ItalicStyleSlant;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x199")]
	[SerializeField]
	[FormerlySerializedAs("tabSize")]
	internal byte m_TabMultiple;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x19A")]
	internal bool IsFontAssetLookupTablesDirty;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x0")]
	private static ProfilerMarker k_ReadFontAssetDefinitionMarker;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x8")]
	private static ProfilerMarker k_AddSynthesizedCharactersMarker;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x10")]
	private static ProfilerMarker k_TryAddCharacterMarker;

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x18")]
	private static ProfilerMarker k_TryAddCharactersMarker;

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x20")]
	private static ProfilerMarker k_UpdateGlyphAdjustmentRecordsMarker;

	[Token(Token = "0x4000049")]
	[FieldOffset(Offset = "0x28")]
	private static ProfilerMarker k_UpdateDiacriticalMarkAdjustmentRecordsMarker;

	[Token(Token = "0x400004A")]
	[FieldOffset(Offset = "0x30")]
	private static ProfilerMarker k_ClearFontAssetDataMarker;

	[Token(Token = "0x400004B")]
	[FieldOffset(Offset = "0x38")]
	private static ProfilerMarker k_UpdateFontAssetDataMarker;

	[Token(Token = "0x400004C")]
	[FieldOffset(Offset = "0x40")]
	private static ProfilerMarker k_TryAddGlyphMarker;

	[Token(Token = "0x400004D")]
	[FieldOffset(Offset = "0x48")]
	private static string s_DefaultMaterialSuffix;

	[Token(Token = "0x400004E")]
	[FieldOffset(Offset = "0x50")]
	private static HashSet<int> k_SearchedFontAssetLookup;

	[Token(Token = "0x400004F")]
	[FieldOffset(Offset = "0x58")]
	private static List<FontAsset> k_FontAssets_FontFeaturesUpdateQueue;

	[Token(Token = "0x4000050")]
	[FieldOffset(Offset = "0x60")]
	private static HashSet<int> k_FontAssets_FontFeaturesUpdateQueueLookup;

	[Token(Token = "0x4000051")]
	[FieldOffset(Offset = "0x68")]
	private static List<Texture2D> k_FontAssets_AtlasTexturesUpdateQueue;

	[Token(Token = "0x4000052")]
	[FieldOffset(Offset = "0x70")]
	private static HashSet<int> k_FontAssets_AtlasTexturesUpdateQueueLookup;

	[Token(Token = "0x4000053")]
	[FieldOffset(Offset = "0x1A0")]
	private List<Glyph> m_GlyphsToRender;

	[Token(Token = "0x4000054")]
	[FieldOffset(Offset = "0x1A8")]
	private List<Glyph> m_GlyphsRendered;

	[Token(Token = "0x4000055")]
	[FieldOffset(Offset = "0x1B0")]
	private List<uint> m_GlyphIndexList;

	[Token(Token = "0x4000056")]
	[FieldOffset(Offset = "0x1B8")]
	private List<uint> m_GlyphIndexListNewlyAdded;

	[Token(Token = "0x4000057")]
	[FieldOffset(Offset = "0x1C0")]
	internal List<uint> m_GlyphsToAdd;

	[Token(Token = "0x4000058")]
	[FieldOffset(Offset = "0x1C8")]
	internal HashSet<uint> m_GlyphsToAddLookup;

	[Token(Token = "0x4000059")]
	[FieldOffset(Offset = "0x1D0")]
	internal List<Character> m_CharactersToAdd;

	[Token(Token = "0x400005A")]
	[FieldOffset(Offset = "0x1D8")]
	internal HashSet<uint> m_CharactersToAddLookup;

	[Token(Token = "0x400005B")]
	[FieldOffset(Offset = "0x1E0")]
	internal List<uint> s_MissingCharacterList;

	[Token(Token = "0x400005C")]
	[FieldOffset(Offset = "0x1E8")]
	internal HashSet<uint> m_MissingUnicodesFromFontFile;

	[Token(Token = "0x400005D")]
	[FieldOffset(Offset = "0x78")]
	internal static uint[] k_GlyphIndexArray;

	[Token(Token = "0x17000001")]
	public FontAssetCreationEditorSettings fontAssetCreationEditorSettings
	{
		[Token(Token = "0x6000006")]
		[Address(RVA = "0x4B7F230", Offset = "0x4B7F230", VA = "0x4B7F230")]
		get
		{
			return default(FontAssetCreationEditorSettings);
		}
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x4B7F270", Offset = "0x4B7F270", VA = "0x4B7F270")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public Font sourceFontFile
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x4B7F2C0", Offset = "0x4B7F2C0", VA = "0x4B7F2C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x4B7F2D0", Offset = "0x4B7F2D0", VA = "0x4B7F2D0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public AtlasPopulationMode atlasPopulationMode
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x4B7F2F0", Offset = "0x4B7F2F0", VA = "0x4B7F2F0")]
		get
		{
			return default(AtlasPopulationMode);
		}
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x4B7F300", Offset = "0x4B7F300", VA = "0x4B7F300")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public FaceInfo faceInfo
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x4B7F310", Offset = "0x4B7F310", VA = "0x4B7F310")]
		get
		{
			return default(FaceInfo);
		}
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x4B7F360", Offset = "0x4B7F360", VA = "0x4B7F360")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	internal int familyNameHashCode
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x4B7F3C0", Offset = "0x4B7F3C0", VA = "0x4B7F3C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x4B7F3F0", Offset = "0x4B7F3F0", VA = "0x4B7F3F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	internal int styleNameHashCode
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x4B7F400", Offset = "0x4B7F400", VA = "0x4B7F400")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x4B7F430", Offset = "0x4B7F430", VA = "0x4B7F430")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public List<Glyph> glyphTable
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x4B7F440", Offset = "0x4B7F440", VA = "0x4B7F440")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x4B7F450", Offset = "0x4B7F450", VA = "0x4B7F450")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public Dictionary<uint, Glyph> glyphLookupTable
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x4B7F470", Offset = "0x4B7F470", VA = "0x4B7F470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000009")]
	public List<Character> characterTable
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x4B7F910", Offset = "0x4B7F910", VA = "0x4B7F910")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x4B7F920", Offset = "0x4B7F920", VA = "0x4B7F920")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public Dictionary<uint, Character> characterLookupTable
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x4B7F940", Offset = "0x4B7F940", VA = "0x4B7F940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000B")]
	public Texture2D atlasTexture
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x4B7F960", Offset = "0x4B7F960", VA = "0x4B7F960")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000C")]
	public Texture2D[] atlasTextures
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x4B7F9F0", Offset = "0x4B7F9F0", VA = "0x4B7F9F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x4B7FA00", Offset = "0x4B7FA00", VA = "0x4B7FA00")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public int atlasTextureCount
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x4B7FA20", Offset = "0x4B7FA20", VA = "0x4B7FA20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000E")]
	public bool isMultiAtlasTexturesEnabled
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x4B7FA30", Offset = "0x4B7FA30", VA = "0x4B7FA30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x4B7FA40", Offset = "0x4B7FA40", VA = "0x4B7FA40")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	internal bool clearDynamicDataOnBuild
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x4B7FA50", Offset = "0x4B7FA50", VA = "0x4B7FA50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x4B7FA60", Offset = "0x4B7FA60", VA = "0x4B7FA60")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public int atlasWidth
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x4B7FA70", Offset = "0x4B7FA70", VA = "0x4B7FA70")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x4B7FA80", Offset = "0x4B7FA80", VA = "0x4B7FA80")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public int atlasHeight
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x4B7FA90", Offset = "0x4B7FA90", VA = "0x4B7FA90")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x4B7FAA0", Offset = "0x4B7FAA0", VA = "0x4B7FAA0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public int atlasPadding
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x4B7FAB0", Offset = "0x4B7FAB0", VA = "0x4B7FAB0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x4B7FAC0", Offset = "0x4B7FAC0", VA = "0x4B7FAC0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public GlyphRenderMode atlasRenderMode
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x4B7FAD0", Offset = "0x4B7FAD0", VA = "0x4B7FAD0")]
		get
		{
			return default(GlyphRenderMode);
		}
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x4B7FAE0", Offset = "0x4B7FAE0", VA = "0x4B7FAE0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000014")]
	internal List<GlyphRect> usedGlyphRects
	{
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x4B7FAF0", Offset = "0x4B7FAF0", VA = "0x4B7FAF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x4B7FB00", Offset = "0x4B7FB00", VA = "0x4B7FB00")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	internal List<GlyphRect> freeGlyphRects
	{
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x4B7FB20", Offset = "0x4B7FB20", VA = "0x4B7FB20")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x4B7FB30", Offset = "0x4B7FB30", VA = "0x4B7FB30")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public FontFeatureTable fontFeatureTable
	{
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x4B7FB50", Offset = "0x4B7FB50", VA = "0x4B7FB50")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x4B7FB60", Offset = "0x4B7FB60", VA = "0x4B7FB60")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public List<FontAsset> fallbackFontAssetTable
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x4B7FB80", Offset = "0x4B7FB80", VA = "0x4B7FB80")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x4B7FB90", Offset = "0x4B7FB90", VA = "0x4B7FB90")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public FontWeightPair[] fontWeightTable
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x4B7FBB0", Offset = "0x4B7FBB0", VA = "0x4B7FBB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x4B7FBC0", Offset = "0x4B7FBC0", VA = "0x4B7FBC0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public float regularStyleWeight
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x4B7FBE0", Offset = "0x4B7FBE0", VA = "0x4B7FBE0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x4B7FBF0", Offset = "0x4B7FBF0", VA = "0x4B7FBF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public float regularStyleSpacing
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x4B7FC00", Offset = "0x4B7FC00", VA = "0x4B7FC00")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x4B7FC10", Offset = "0x4B7FC10", VA = "0x4B7FC10")]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public float boldStyleWeight
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x4B7FC20", Offset = "0x4B7FC20", VA = "0x4B7FC20")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x4B7FC30", Offset = "0x4B7FC30", VA = "0x4B7FC30")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public float boldStyleSpacing
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x4B7FC40", Offset = "0x4B7FC40", VA = "0x4B7FC40")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x4B7FC50", Offset = "0x4B7FC50", VA = "0x4B7FC50")]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public byte italicStyleSlant
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x4B7FC60", Offset = "0x4B7FC60", VA = "0x4B7FC60")]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x4B7FC70", Offset = "0x4B7FC70", VA = "0x4B7FC70")]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public byte tabMultiple
	{
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x4B7FC80", Offset = "0x4B7FC80", VA = "0x4B7FC80")]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x4B7FC90", Offset = "0x4B7FC90", VA = "0x4B7FC90")]
		set
		{
		}
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4B7FCA0", Offset = "0x4B7FCA0", VA = "0x4B7FCA0")]
	public static FontAsset CreateFontAsset(string familyName, string styleName, int pointSize = 90)
	{
		return null;
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x4B80010", Offset = "0x4B80010", VA = "0x4B80010")]
	public static FontAsset CreateFontAsset(string fontFilePath, int faceIndex, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight)
	{
		return null;
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x4B7FEB0", Offset = "0x4B7FEB0", VA = "0x4B7FEB0")]
	private static FontAsset CreateFontAsset(string fontFilePath, int faceIndex, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode = AtlasPopulationMode.DynamicOS, bool enableMultiAtlasSupport = true)
	{
		return null;
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x4B80650", Offset = "0x4B80650", VA = "0x4B80650")]
	public static FontAsset CreateFontAsset(Font font)
	{
		return null;
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4B80730", Offset = "0x4B80730", VA = "0x4B80730")]
	public static FontAsset CreateFontAsset(Font font, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode = AtlasPopulationMode.Dynamic, bool enableMultiAtlasSupport = true)
	{
		return null;
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x4B807D0", Offset = "0x4B807D0", VA = "0x4B807D0")]
	private static FontAsset CreateFontAsset(Font font, int faceIndex, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode = AtlasPopulationMode.Dynamic, bool enableMultiAtlasSupport = true)
	{
		return null;
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x4B800A0", Offset = "0x4B800A0", VA = "0x4B800A0")]
	private static FontAsset CreateFontAssetInstance(Font font, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport)
	{
		return null;
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x4B80B00", Offset = "0x4B80B00", VA = "0x4B80B00")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x4B80B10", Offset = "0x4B80B10", VA = "0x4B80B10")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x4B7F490", Offset = "0x4B7F490", VA = "0x4B7F490")]
	public void ReadFontAssetDefinition()
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x4B80C40", Offset = "0x4B80C40", VA = "0x4B80C40")]
	internal void InitializeDictionaryLookupTables()
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x4B80E90", Offset = "0x4B80E90", VA = "0x4B80E90")]
	internal void InitializeGlyphLookupDictionary()
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4B811A0", Offset = "0x4B811A0", VA = "0x4B811A0")]
	internal void InitializeCharacterLookupDictionary()
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4B81380", Offset = "0x4B81380", VA = "0x4B81380")]
	internal void InitializeLigatureSubstitutionLookupDictionary()
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x4B81710", Offset = "0x4B81710", VA = "0x4B81710")]
	internal void InitializeGlyphPaidAdjustmentRecordsLookupDictionary()
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4B81A00", Offset = "0x4B81A00", VA = "0x4B81A00")]
	internal void InitializeMarkToBaseAdjustmentRecordsLookupDictionary()
	{
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4B81C30", Offset = "0x4B81C30", VA = "0x4B81C30")]
	internal void InitializeMarkToMarkAdjustmentRecordsLookupDictionary()
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4B80C80", Offset = "0x4B80C80", VA = "0x4B80C80")]
	internal void AddSynthesizedCharactersAndFaceMetrics()
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4B81FE0", Offset = "0x4B81FE0", VA = "0x4B81FE0")]
	private void AddSynthesizedCharacter(uint unicode, bool isFontFaceLoaded, bool addImmediately = false)
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x4B82240", Offset = "0x4B82240", VA = "0x4B82240")]
	internal void AddCharacterToLookupCache(uint unicode, Character character)
	{
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x4B81E70", Offset = "0x4B81E70", VA = "0x4B81E70")]
	private FontEngineError LoadFontFace()
	{
		return default(FontEngineError);
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x4B822A0", Offset = "0x4B822A0", VA = "0x4B822A0")]
	internal void SortCharacterTable()
	{
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x4B82400", Offset = "0x4B82400", VA = "0x4B82400")]
	internal void SortGlyphTable()
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x4B82560", Offset = "0x4B82560", VA = "0x4B82560")]
	internal void SortFontFeatureTable()
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x4B82C30", Offset = "0x4B82C30", VA = "0x4B82C30")]
	internal void SortAllTables()
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x4B82C80", Offset = "0x4B82C80", VA = "0x4B82C80")]
	public bool HasCharacter(int character)
	{
		return default(bool);
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x4B82CD0", Offset = "0x4B82CD0", VA = "0x4B82CD0")]
	public bool HasCharacter(char character, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x4B82CE0", Offset = "0x4B82CE0", VA = "0x4B82CE0")]
	public bool HasCharacter(uint character, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x4B83BB0", Offset = "0x4B83BB0", VA = "0x4B83BB0")]
	private bool HasCharacter_Internal(uint character, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x4B83DF0", Offset = "0x4B83DF0", VA = "0x4B83DF0")]
	public bool HasCharacters(string text, out List<char> missingCharacters)
	{
		return default(bool);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x4B83FB0", Offset = "0x4B83FB0", VA = "0x4B83FB0")]
	public bool HasCharacters(string text, out uint[] missingCharacters, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x4B84490", Offset = "0x4B84490", VA = "0x4B84490")]
	public bool HasCharacters(string text)
	{
		return default(bool);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x4B84530", Offset = "0x4B84530", VA = "0x4B84530")]
	public static string GetCharacters(FontAsset fontAsset)
	{
		return null;
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x4B84640", Offset = "0x4B84640", VA = "0x4B84640")]
	public static int[] GetCharactersArray(FontAsset fontAsset)
	{
		return null;
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x4B84740", Offset = "0x4B84740", VA = "0x4B84740")]
	internal uint GetGlyphIndex(uint unicode)
	{
		return default(uint);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x4B84810", Offset = "0x4B84810", VA = "0x4B84810")]
	internal static void RegisterFontAssetForFontFeatureUpdate(FontAsset fontAsset)
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x4B84980", Offset = "0x4B84980", VA = "0x4B84980")]
	internal static void UpdateFontFeaturesForFontAssetsInQueue()
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x4B84BE0", Offset = "0x4B84BE0", VA = "0x4B84BE0")]
	internal static void RegisterAtlasTextureForApply(Texture2D texture)
	{
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x4B84D00", Offset = "0x4B84D00", VA = "0x4B84D00")]
	internal static void UpdateAtlasTexturesInQueue()
	{
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x4B84ED0", Offset = "0x4B84ED0", VA = "0x4B84ED0")]
	internal static void UpdateFontAssetsInUpdateQueue()
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x4B84F30", Offset = "0x4B84F30", VA = "0x4B84F30")]
	public bool TryAddCharacters(uint[] unicodes, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x4B84F50", Offset = "0x4B84F50", VA = "0x4B84F50")]
	public bool TryAddCharacters(uint[] unicodes, out uint[] missingUnicodes, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x4B86550", Offset = "0x4B86550", VA = "0x4B86550")]
	public bool TryAddCharacters(string characters, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x4B86570", Offset = "0x4B86570", VA = "0x4B86570")]
	public bool TryAddCharacters(string characters, out string missingCharacters, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x4B87530", Offset = "0x4B87530", VA = "0x4B87530")]
	internal bool TryAddGlyphInternal(uint glyphIndex, out Glyph glyph)
	{
		return default(bool);
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x4B83070", Offset = "0x4B83070", VA = "0x4B83070")]
	internal bool TryAddCharacterInternal(uint unicode, out Character character, bool shouldGetFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x4B88540", Offset = "0x4B88540", VA = "0x4B88540")]
	internal bool TryGetCharacter_and_QueueRenderToTexture(uint unicode, out Character character, bool shouldGetFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x4B88C80", Offset = "0x4B88C80", VA = "0x4B88C80")]
	internal void TryAddGlyphsToAtlasTextures()
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x4B85FA0", Offset = "0x4B85FA0", VA = "0x4B85FA0")]
	private bool TryAddGlyphsToNewAtlasTexture()
	{
		return default(bool);
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x4B88300", Offset = "0x4B88300", VA = "0x4B88300")]
	private void SetupNewAtlasTexture()
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x4B84B90", Offset = "0x4B84B90", VA = "0x4B84B90")]
	private void UpdateAllFontFeatures()
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x4B88C90", Offset = "0x4B88C90", VA = "0x4B88C90")]
	internal void UpdateGlyphAdjustmentRecords()
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x4B89600", Offset = "0x4B89600", VA = "0x4B89600")]
	internal void UpdateGlyphAdjustmentRecords(uint[] glyphIndexes)
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x4B89C90", Offset = "0x4B89C90", VA = "0x4B89C90")]
	internal void UpdateGlyphAdjustmentRecords(List<uint> glyphIndexes)
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x4B89CA0", Offset = "0x4B89CA0", VA = "0x4B89CA0")]
	internal void UpdateGlyphAdjustmentRecords(List<uint> newGlyphIndexes, List<uint> allGlyphIndexes)
	{
	}

	[Token(Token = "0x6000075")]
	private void CopyListDataToArray<T>(List<T> srcList, ref T[] dstArray)
	{
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x4B89CB0", Offset = "0x4B89CB0", VA = "0x4B89CB0")]
	public void ClearFontAssetData(bool setAtlasSizeToZero = false)
	{
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x4B8A2A0", Offset = "0x4B8A2A0", VA = "0x4B8A2A0")]
	internal void ClearFontAssetDataInternal(bool clearFontFeatures = false)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x4B8A2C0", Offset = "0x4B8A2C0", VA = "0x4B8A2C0")]
	internal void UpdateFontAssetData()
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x4B89DF0", Offset = "0x4B89DF0", VA = "0x4B89DF0")]
	internal void ClearFontAssetTables(bool clearFontFeatures)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x4B8A080", Offset = "0x4B8A080", VA = "0x4B8A080")]
	internal void ClearAtlasTextures(bool setAtlasSizeToZero = false)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x4B80B70", Offset = "0x4B80B70", VA = "0x4B80B70")]
	private void DestroyAtlasTextures()
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x4B8A590", Offset = "0x4B8A590", VA = "0x4B8A590")]
	public FontAsset()
	{
	}
}
