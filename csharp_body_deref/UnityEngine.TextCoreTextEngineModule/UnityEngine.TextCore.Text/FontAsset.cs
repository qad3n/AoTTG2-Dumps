// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.FontAsset
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4EA6B60", Offset = "0x4EA6B60", VA = "0x4EA6B60")]
		get
		{
			return default(FontAssetCreationEditorSettings);
		}
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x4EA6BA0", Offset = "0x4EA6BA0", VA = "0x4EA6BA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000002")]
	public Font sourceFontFile
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x4EA6BF0", Offset = "0x4EA6BF0", VA = "0x4EA6BF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x4EA6C00", Offset = "0x4EA6C00", VA = "0x4EA6C00")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public AtlasPopulationMode atlasPopulationMode
	{
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x4EA6C20", Offset = "0x4EA6C20", VA = "0x4EA6C20")]
		get
		{
			return default(AtlasPopulationMode);
		}
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x4EA6C30", Offset = "0x4EA6C30", VA = "0x4EA6C30")]
		set
		{
		}
	}

	[Token(Token = "0x17000004")]
	public FaceInfo faceInfo
	{
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x4EA6C40", Offset = "0x4EA6C40", VA = "0x4EA6C40")]
		get
		{
			return default(FaceInfo);
		}
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x4EA6C90", Offset = "0x4EA6C90", VA = "0x4EA6C90")]
		set
		{
		}
	}

	[Token(Token = "0x17000005")]
	internal int familyNameHashCode
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x4EA6CF0", Offset = "0x4EA6CF0", VA = "0x4EA6CF0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x4EA6D20", Offset = "0x4EA6D20", VA = "0x4EA6D20")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	internal int styleNameHashCode
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x4EA6D30", Offset = "0x4EA6D30", VA = "0x4EA6D30")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x4EA6D60", Offset = "0x4EA6D60", VA = "0x4EA6D60")]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public List<Glyph> glyphTable
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x4EA6D70", Offset = "0x4EA6D70", VA = "0x4EA6D70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x4EA6D80", Offset = "0x4EA6D80", VA = "0x4EA6D80")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000008")]
	public Dictionary<uint, Glyph> glyphLookupTable
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x4EA6DA0", Offset = "0x4EA6DA0", VA = "0x4EA6DA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000009")]
	public List<Character> characterTable
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x4EA7240", Offset = "0x4EA7240", VA = "0x4EA7240")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x4EA7250", Offset = "0x4EA7250", VA = "0x4EA7250")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public Dictionary<uint, Character> characterLookupTable
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x4EA7270", Offset = "0x4EA7270", VA = "0x4EA7270")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000B")]
	public Texture2D atlasTexture
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x4EA7290", Offset = "0x4EA7290", VA = "0x4EA7290")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700000C")]
	public Texture2D[] atlasTextures
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x4EA7320", Offset = "0x4EA7320", VA = "0x4EA7320")]
		get
		{
			return null;
		}
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x4EA7330", Offset = "0x4EA7330", VA = "0x4EA7330")]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public int atlasTextureCount
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x4EA7350", Offset = "0x4EA7350", VA = "0x4EA7350")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000E")]
	public bool isMultiAtlasTexturesEnabled
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x4EA7360", Offset = "0x4EA7360", VA = "0x4EA7360")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x4EA7370", Offset = "0x4EA7370", VA = "0x4EA7370")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	internal bool clearDynamicDataOnBuild
	{
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x4EA7380", Offset = "0x4EA7380", VA = "0x4EA7380")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x4EA7390", Offset = "0x4EA7390", VA = "0x4EA7390")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public int atlasWidth
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x4EA73A0", Offset = "0x4EA73A0", VA = "0x4EA73A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x4EA73B0", Offset = "0x4EA73B0", VA = "0x4EA73B0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public int atlasHeight
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x4EA73C0", Offset = "0x4EA73C0", VA = "0x4EA73C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x4EA73D0", Offset = "0x4EA73D0", VA = "0x4EA73D0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000012")]
	public int atlasPadding
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x4EA73E0", Offset = "0x4EA73E0", VA = "0x4EA73E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x4EA73F0", Offset = "0x4EA73F0", VA = "0x4EA73F0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000013")]
	public GlyphRenderMode atlasRenderMode
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x4EA7400", Offset = "0x4EA7400", VA = "0x4EA7400")]
		get
		{
			return default(GlyphRenderMode);
		}
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x4EA7410", Offset = "0x4EA7410", VA = "0x4EA7410")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000014")]
	internal List<GlyphRect> usedGlyphRects
	{
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x4EA7420", Offset = "0x4EA7420", VA = "0x4EA7420")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x4EA7430", Offset = "0x4EA7430", VA = "0x4EA7430")]
		set
		{
		}
	}

	[Token(Token = "0x17000015")]
	internal List<GlyphRect> freeGlyphRects
	{
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x4EA7450", Offset = "0x4EA7450", VA = "0x4EA7450")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x4EA7460", Offset = "0x4EA7460", VA = "0x4EA7460")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public FontFeatureTable fontFeatureTable
	{
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x4EA7480", Offset = "0x4EA7480", VA = "0x4EA7480")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x4EA7490", Offset = "0x4EA7490", VA = "0x4EA7490")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public List<FontAsset> fallbackFontAssetTable
	{
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x4EA74B0", Offset = "0x4EA74B0", VA = "0x4EA74B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x4EA74C0", Offset = "0x4EA74C0", VA = "0x4EA74C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public FontWeightPair[] fontWeightTable
	{
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x4EA74E0", Offset = "0x4EA74E0", VA = "0x4EA74E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x4EA74F0", Offset = "0x4EA74F0", VA = "0x4EA74F0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public float regularStyleWeight
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x4EA7510", Offset = "0x4EA7510", VA = "0x4EA7510")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000033")]
		[Address(RVA = "0x4EA7520", Offset = "0x4EA7520", VA = "0x4EA7520")]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public float regularStyleSpacing
	{
		[Token(Token = "0x6000034")]
		[Address(RVA = "0x4EA7530", Offset = "0x4EA7530", VA = "0x4EA7530")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000035")]
		[Address(RVA = "0x4EA7540", Offset = "0x4EA7540", VA = "0x4EA7540")]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public float boldStyleWeight
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x4EA7550", Offset = "0x4EA7550", VA = "0x4EA7550")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x4EA7560", Offset = "0x4EA7560", VA = "0x4EA7560")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public float boldStyleSpacing
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x4EA7570", Offset = "0x4EA7570", VA = "0x4EA7570")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000039")]
		[Address(RVA = "0x4EA7580", Offset = "0x4EA7580", VA = "0x4EA7580")]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public byte italicStyleSlant
	{
		[Token(Token = "0x600003A")]
		[Address(RVA = "0x4EA7590", Offset = "0x4EA7590", VA = "0x4EA7590")]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x4EA75A0", Offset = "0x4EA75A0", VA = "0x4EA75A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public byte tabMultiple
	{
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x4EA75B0", Offset = "0x4EA75B0", VA = "0x4EA75B0")]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x600003D")]
		[Address(RVA = "0x4EA75C0", Offset = "0x4EA75C0", VA = "0x4EA75C0")]
		set
		{
		}
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x4EA75D0", Offset = "0x4EA75D0", VA = "0x4EA75D0")]
	public static FontAsset CreateFontAsset(string familyName, string styleName, int pointSize = 90)
	{
		return null;
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x4EA7940", Offset = "0x4EA7940", VA = "0x4EA7940")]
	public static FontAsset CreateFontAsset(string fontFilePath, int faceIndex, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight)
	{
		return null;
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x4EA77E0", Offset = "0x4EA77E0", VA = "0x4EA77E0")]
	private static FontAsset CreateFontAsset(string fontFilePath, int faceIndex, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode = AtlasPopulationMode.DynamicOS, bool enableMultiAtlasSupport = true)
	{
		return null;
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x4EA7F80", Offset = "0x4EA7F80", VA = "0x4EA7F80")]
	public static FontAsset CreateFontAsset(Font font)
	{
		return null;
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x4EA8060", Offset = "0x4EA8060", VA = "0x4EA8060")]
	public static FontAsset CreateFontAsset(Font font, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode = AtlasPopulationMode.Dynamic, bool enableMultiAtlasSupport = true)
	{
		return null;
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x4EA8100", Offset = "0x4EA8100", VA = "0x4EA8100")]
	private static FontAsset CreateFontAsset(Font font, int faceIndex, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode = AtlasPopulationMode.Dynamic, bool enableMultiAtlasSupport = true)
	{
		return null;
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x4EA79D0", Offset = "0x4EA79D0", VA = "0x4EA79D0")]
	private static FontAsset CreateFontAssetInstance(Font font, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport)
	{
		return null;
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x4EA8430", Offset = "0x4EA8430", VA = "0x4EA8430")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x4EA8440", Offset = "0x4EA8440", VA = "0x4EA8440")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x4EA6DC0", Offset = "0x4EA6DC0", VA = "0x4EA6DC0")]
	public void ReadFontAssetDefinition()
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x4EA8570", Offset = "0x4EA8570", VA = "0x4EA8570")]
	internal void InitializeDictionaryLookupTables()
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x4EA87C0", Offset = "0x4EA87C0", VA = "0x4EA87C0")]
	internal void InitializeGlyphLookupDictionary()
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4EA8AD0", Offset = "0x4EA8AD0", VA = "0x4EA8AD0")]
	internal void InitializeCharacterLookupDictionary()
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4EA8CB0", Offset = "0x4EA8CB0", VA = "0x4EA8CB0")]
	internal void InitializeLigatureSubstitutionLookupDictionary()
	{
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x4EA9040", Offset = "0x4EA9040", VA = "0x4EA9040")]
	internal void InitializeGlyphPaidAdjustmentRecordsLookupDictionary()
	{
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4EA9330", Offset = "0x4EA9330", VA = "0x4EA9330")]
	internal void InitializeMarkToBaseAdjustmentRecordsLookupDictionary()
	{
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4EA9560", Offset = "0x4EA9560", VA = "0x4EA9560")]
	internal void InitializeMarkToMarkAdjustmentRecordsLookupDictionary()
	{
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4EA85B0", Offset = "0x4EA85B0", VA = "0x4EA85B0")]
	internal void AddSynthesizedCharactersAndFaceMetrics()
	{
	}

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4EA9910", Offset = "0x4EA9910", VA = "0x4EA9910")]
	private void AddSynthesizedCharacter(uint unicode, bool isFontFaceLoaded, bool addImmediately = false)
	{
	}

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x4EA9B70", Offset = "0x4EA9B70", VA = "0x4EA9B70")]
	internal void AddCharacterToLookupCache(uint unicode, Character character)
	{
	}

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x4EA97A0", Offset = "0x4EA97A0", VA = "0x4EA97A0")]
	private FontEngineError LoadFontFace()
	{
		return default(FontEngineError);
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x4EA9BD0", Offset = "0x4EA9BD0", VA = "0x4EA9BD0")]
	internal void SortCharacterTable()
	{
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x4EA9D30", Offset = "0x4EA9D30", VA = "0x4EA9D30")]
	internal void SortGlyphTable()
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x4EA9E90", Offset = "0x4EA9E90", VA = "0x4EA9E90")]
	internal void SortFontFeatureTable()
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x4EAA560", Offset = "0x4EAA560", VA = "0x4EAA560")]
	internal void SortAllTables()
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x4EAA5B0", Offset = "0x4EAA5B0", VA = "0x4EAA5B0")]
	public bool HasCharacter(int character)
	{
		return default(bool);
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x4EAA600", Offset = "0x4EAA600", VA = "0x4EAA600")]
	public bool HasCharacter(char character, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x4EAA610", Offset = "0x4EAA610", VA = "0x4EAA610")]
	public bool HasCharacter(uint character, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x4EAB4E0", Offset = "0x4EAB4E0", VA = "0x4EAB4E0")]
	private bool HasCharacter_Internal(uint character, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x4EAB720", Offset = "0x4EAB720", VA = "0x4EAB720")]
	public bool HasCharacters(string text, out List<char> missingCharacters)
	{
		return default(bool);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x4EAB8E0", Offset = "0x4EAB8E0", VA = "0x4EAB8E0")]
	public bool HasCharacters(string text, out uint[] missingCharacters, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x4EABDC0", Offset = "0x4EABDC0", VA = "0x4EABDC0")]
	public bool HasCharacters(string text)
	{
		return default(bool);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x4EABE60", Offset = "0x4EABE60", VA = "0x4EABE60")]
	public static string GetCharacters(FontAsset fontAsset)
	{
		return null;
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x4EABF70", Offset = "0x4EABF70", VA = "0x4EABF70")]
	public static int[] GetCharactersArray(FontAsset fontAsset)
	{
		return null;
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x4EAC070", Offset = "0x4EAC070", VA = "0x4EAC070")]
	internal uint GetGlyphIndex(uint unicode)
	{
		return default(uint);
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x4EAC140", Offset = "0x4EAC140", VA = "0x4EAC140")]
	internal static void RegisterFontAssetForFontFeatureUpdate(FontAsset fontAsset)
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x4EAC2B0", Offset = "0x4EAC2B0", VA = "0x4EAC2B0")]
	internal static void UpdateFontFeaturesForFontAssetsInQueue()
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x4EAC510", Offset = "0x4EAC510", VA = "0x4EAC510")]
	internal static void RegisterAtlasTextureForApply(Texture2D texture)
	{
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x4EAC630", Offset = "0x4EAC630", VA = "0x4EAC630")]
	internal static void UpdateAtlasTexturesInQueue()
	{
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x4EAC800", Offset = "0x4EAC800", VA = "0x4EAC800")]
	internal static void UpdateFontAssetsInUpdateQueue()
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x4EAC860", Offset = "0x4EAC860", VA = "0x4EAC860")]
	public bool TryAddCharacters(uint[] unicodes, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x4EAC880", Offset = "0x4EAC880", VA = "0x4EAC880")]
	public bool TryAddCharacters(uint[] unicodes, out uint[] missingUnicodes, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x4EADE80", Offset = "0x4EADE80", VA = "0x4EADE80")]
	public bool TryAddCharacters(string characters, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x4EADEA0", Offset = "0x4EADEA0", VA = "0x4EADEA0")]
	public bool TryAddCharacters(string characters, out string missingCharacters, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x4EAEE60", Offset = "0x4EAEE60", VA = "0x4EAEE60")]
	internal bool TryAddGlyphInternal(uint glyphIndex, out Glyph glyph)
	{
		return default(bool);
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x4EAA9A0", Offset = "0x4EAA9A0", VA = "0x4EAA9A0")]
	internal bool TryAddCharacterInternal(uint unicode, out Character character, bool shouldGetFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x4EAFE70", Offset = "0x4EAFE70", VA = "0x4EAFE70")]
	internal bool TryGetCharacter_and_QueueRenderToTexture(uint unicode, out Character character, bool shouldGetFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x4EB05B0", Offset = "0x4EB05B0", VA = "0x4EB05B0")]
	internal void TryAddGlyphsToAtlasTextures()
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x4EAD8D0", Offset = "0x4EAD8D0", VA = "0x4EAD8D0")]
	private bool TryAddGlyphsToNewAtlasTexture()
	{
		return default(bool);
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x4EAFC30", Offset = "0x4EAFC30", VA = "0x4EAFC30")]
	private void SetupNewAtlasTexture()
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x4EAC4C0", Offset = "0x4EAC4C0", VA = "0x4EAC4C0")]
	private void UpdateAllFontFeatures()
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x4EB05C0", Offset = "0x4EB05C0", VA = "0x4EB05C0")]
	internal void UpdateGlyphAdjustmentRecords()
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x4EB0F30", Offset = "0x4EB0F30", VA = "0x4EB0F30")]
	internal void UpdateGlyphAdjustmentRecords(uint[] glyphIndexes)
	{
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x4EB15C0", Offset = "0x4EB15C0", VA = "0x4EB15C0")]
	internal void UpdateGlyphAdjustmentRecords(List<uint> glyphIndexes)
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x4EB15D0", Offset = "0x4EB15D0", VA = "0x4EB15D0")]
	internal void UpdateGlyphAdjustmentRecords(List<uint> newGlyphIndexes, List<uint> allGlyphIndexes)
	{
	}

	[Token(Token = "0x6000075")]
	private void CopyListDataToArray<T>(List<T> srcList, ref T[] dstArray)
	{
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x4EB15E0", Offset = "0x4EB15E0", VA = "0x4EB15E0")]
	public void ClearFontAssetData(bool setAtlasSizeToZero = false)
	{
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x4EB1BD0", Offset = "0x4EB1BD0", VA = "0x4EB1BD0")]
	internal void ClearFontAssetDataInternal(bool clearFontFeatures = false)
	{
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x4EB1BF0", Offset = "0x4EB1BF0", VA = "0x4EB1BF0")]
	internal void UpdateFontAssetData()
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x4EB1720", Offset = "0x4EB1720", VA = "0x4EB1720")]
	internal void ClearFontAssetTables(bool clearFontFeatures)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x4EB19B0", Offset = "0x4EB19B0", VA = "0x4EB19B0")]
	internal void ClearAtlasTextures(bool setAtlasSizeToZero = false)
	{
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x4EA84A0", Offset = "0x4EA84A0", VA = "0x4EA84A0")]
	private void DestroyAtlasTextures()
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x4EB1EC0", Offset = "0x4EB1EC0", VA = "0x4EB1EC0")]
	public FontAsset()
	{
	}
}
