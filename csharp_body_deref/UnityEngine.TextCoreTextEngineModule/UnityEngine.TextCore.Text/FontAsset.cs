// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.FontAsset
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine.Bindings;
using UnityEngine.Serialization;
using UnityEngine.TextCore.LowLevel;

namespace UnityEngine.TextCore.Text;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000031")]
[UnityEngine.Bindings.NativeHeader("Modules/TextCoreTextEngine/Native/FontAsset.h")]
[ExcludeFromPreset]
public class FontAsset : TextAsset
{
	[Token(Token = "0x4000141")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[SerializeField]
	internal string m_SourceFontFileGUID;

	[Token(Token = "0x4000142")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	[SerializeField]
	internal FontAssetCreationEditorSettings m_fontAssetCreationEditorSettings;

	[Token(Token = "0x4000143")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	[SerializeField]
	private Font m_SourceFontFile;

	[Token(Token = "0x4000144")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	[SerializeField]
	internal string m_SourceFontFilePath;

	[Token(Token = "0x4000145")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private UnityEngine.TextCore.LowLevel.FontFaceHandle m_FontFaceHandle;

	[Token(Token = "0x4000146")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	[SerializeField]
	private AtlasPopulationMode m_AtlasPopulationMode;

	[Token(Token = "0x4000147")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC4")]
	[SerializeField]
	internal bool InternalDynamicOS;

	[Token(Token = "0x4000148")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC5")]
	[SerializeField]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
	internal bool IsEditorFont;

	[Token(Token = "0x4000149")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	[SerializeField]
	internal FaceInfo m_FaceInfo;

	[Token(Token = "0x400014A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private int m_FamilyNameHashCode;

	[Token(Token = "0x400014B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x12C")]
	private int m_StyleNameHashCode;

	[Token(Token = "0x400014C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	[SerializeField]
	internal List<Glyph> m_GlyphTable;

	[Token(Token = "0x400014D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	internal Dictionary<uint, Glyph> m_GlyphLookupDictionary;

	[Token(Token = "0x400014E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	[SerializeField]
	internal List<Character> m_CharacterTable;

	[Token(Token = "0x400014F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
	internal Dictionary<uint, Character> m_CharacterLookupDictionary;

	[Token(Token = "0x4000150")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	internal Texture2D m_AtlasTexture;

	[Token(Token = "0x4000151")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	[SerializeField]
	internal Texture2D[] m_AtlasTextures;

	[Token(Token = "0x4000152")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	[SerializeField]
	internal int m_AtlasTextureIndex;

	[Token(Token = "0x4000153")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x164")]
	[SerializeField]
	private bool m_IsMultiAtlasTexturesEnabled;

	[Token(Token = "0x4000154")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x165")]
	[SerializeField]
	private bool m_GetFontFeatures;

	[Token(Token = "0x4000155")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x166")]
	[SerializeField]
	private bool m_ClearDynamicDataOnBuild;

	[Token(Token = "0x4000156")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	[SerializeField]
	internal int m_AtlasWidth;

	[Token(Token = "0x4000157")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x16C")]
	[SerializeField]
	internal int m_AtlasHeight;

	[Token(Token = "0x4000158")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	[SerializeField]
	internal int m_AtlasPadding;

	[Token(Token = "0x4000159")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x174")]
	[SerializeField]
	internal GlyphRenderMode m_AtlasRenderMode;

	[Token(Token = "0x400015A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	[SerializeField]
	private List<GlyphRect> m_UsedGlyphRects;

	[Token(Token = "0x400015B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	[SerializeField]
	private List<GlyphRect> m_FreeGlyphRects;

	[Token(Token = "0x400015C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	[SerializeField]
	internal FontFeatureTable m_FontFeatureTable;

	[Token(Token = "0x400015D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	[SerializeField]
	internal bool m_ShouldReimportFontFeatures;

	[Token(Token = "0x400015E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	[SerializeField]
	internal List<FontAsset> m_FallbackFontAssetTable;

	[Token(Token = "0x400015F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	[SerializeField]
	private FontWeightPair[] m_FontWeightTable;

	[Token(Token = "0x4000160")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A8")]
	[SerializeField]
	[FormerlySerializedAs("normalStyle")]
	internal float m_RegularStyleWeight;

	[Token(Token = "0x4000161")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1AC")]
	[FormerlySerializedAs("normalSpacingOffset")]
	[SerializeField]
	internal float m_RegularStyleSpacing;

	[Token(Token = "0x4000162")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B0")]
	[FormerlySerializedAs("boldStyle")]
	[SerializeField]
	internal float m_BoldStyleWeight;

	[Token(Token = "0x4000163")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B4")]
	[FormerlySerializedAs("boldSpacing")]
	[SerializeField]
	internal float m_BoldStyleSpacing;

	[Token(Token = "0x4000164")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B8")]
	[FormerlySerializedAs("italicStyle")]
	[SerializeField]
	internal byte m_ItalicStyleSlant;

	[Token(Token = "0x4000165")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B9")]
	[FormerlySerializedAs("tabSize")]
	[SerializeField]
	internal byte m_TabMultiple;

	[Token(Token = "0x4000166")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1BA")]
	internal bool IsFontAssetLookupTablesDirty;

	[Token(Token = "0x4000167")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C0")]
	private IntPtr m_NativeFontAsset;

	[Token(Token = "0x4000168")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C8")]
	private List<Glyph> m_GlyphsToRender;

	[Token(Token = "0x4000169")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D0")]
	private List<Glyph> m_GlyphsRendered;

	[Token(Token = "0x400016A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D8")]
	private List<uint> m_GlyphIndexList;

	[Token(Token = "0x400016B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E0")]
	private List<uint> m_GlyphIndexListNewlyAdded;

	[Token(Token = "0x400016C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E8")]
	internal List<uint> m_GlyphsToAdd;

	[Token(Token = "0x400016D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F0")]
	internal HashSet<uint> m_GlyphsToAddLookup;

	[Token(Token = "0x400016E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F8")]
	internal List<Character> m_CharactersToAdd;

	[Token(Token = "0x400016F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x200")]
	internal HashSet<uint> m_CharactersToAddLookup;

	[Token(Token = "0x4000170")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x208")]
	internal List<uint> s_MissingCharacterList;

	[Token(Token = "0x4000171")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x210")]
	internal HashSet<uint> m_MissingUnicodesFromFontFile;

	[Token(Token = "0x4000172")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x218")]
	internal Dictionary<(uint, uint), uint> m_VariantGlyphIndexes;

	[Token(Token = "0x4000173")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x220")]
	internal bool m_IsClone;

	[Token(Token = "0x4000174")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly List<WeakReference<FontAsset>> s_CallbackInstances;

	[Token(Token = "0x4000175")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static ProfilerMarker k_ReadFontAssetDefinitionMarker;

	[Token(Token = "0x4000176")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static ProfilerMarker k_AddSynthesizedCharactersMarker;

	[Token(Token = "0x4000177")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static ProfilerMarker k_TryAddGlyphMarker;

	[Token(Token = "0x4000178")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static ProfilerMarker k_TryAddCharacterMarker;

	[Token(Token = "0x4000179")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static ProfilerMarker k_TryAddCharactersMarker;

	[Token(Token = "0x400017A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static ProfilerMarker k_UpdateLigatureSubstitutionRecordsMarker;

	[Token(Token = "0x400017B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static ProfilerMarker k_UpdateGlyphAdjustmentRecordsMarker;

	[Token(Token = "0x400017C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static ProfilerMarker k_UpdateDiacriticalMarkAdjustmentRecordsMarker;

	[Token(Token = "0x400017D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private static ProfilerMarker k_ClearFontAssetDataMarker;

	[Token(Token = "0x400017E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private static ProfilerMarker k_UpdateFontAssetDataMarker;

	[Token(Token = "0x400017F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private static string s_DefaultMaterialSuffix;

	[Token(Token = "0x4000180")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private static HashSet<int> k_SearchedFontAssetLookup;

	[Token(Token = "0x4000181")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private static List<FontAsset> k_FontAssets_FontFeaturesUpdateQueue;

	[Token(Token = "0x4000182")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private static HashSet<int> k_FontAssets_FontFeaturesUpdateQueueLookup;

	[Token(Token = "0x4000183")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private static List<FontAsset> k_FontAssets_KerningUpdateQueue;

	[Token(Token = "0x4000184")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private static HashSet<int> k_FontAssets_KerningUpdateQueueLookup;

	[Token(Token = "0x4000185")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private static List<Texture2D> k_FontAssets_AtlasTexturesUpdateQueue;

	[Token(Token = "0x4000186")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private static HashSet<int> k_FontAssets_AtlasTexturesUpdateQueueLookup;

	[Token(Token = "0x4000187")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	internal static uint[] k_GlyphIndexArray;

	[Token(Token = "0x4000188")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private static HashSet<int> visitedFontAssets;

	[Token(Token = "0x17000013")]
	public FontAssetCreationEditorSettings fontAssetCreationEditorSettings
	{
		[Token(Token = "0x6000091")]
		[Address(RVA = "0x6A102D0", Offset = "0x6A0F2D0", VA = "0x6A102D0")]
		get
		{
			return default(FontAssetCreationEditorSettings);
		}
		[Token(Token = "0x6000092")]
		[Address(RVA = "0x6A10310", Offset = "0x6A0F310", VA = "0x6A10310")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public Font sourceFontFile
	{
		[Token(Token = "0x6000093")]
		[Address(RVA = "0x6A10360", Offset = "0x6A0F360", VA = "0x6A10360")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000094")]
		[Address(RVA = "0x6A10370", Offset = "0x6A0F370", VA = "0x6A10370")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public AtlasPopulationMode atlasPopulationMode
	{
		[Token(Token = "0x6000095")]
		[Address(RVA = "0x6A10390", Offset = "0x6A0F390", VA = "0x6A10390")]
		get
		{
			return default(AtlasPopulationMode);
		}
		[Token(Token = "0x6000096")]
		[Address(RVA = "0x6A103A0", Offset = "0x6A0F3A0", VA = "0x6A103A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public FaceInfo faceInfo
	{
		[Token(Token = "0x6000097")]
		[Address(RVA = "0x6A103B0", Offset = "0x6A0F3B0", VA = "0x6A103B0")]
		get
		{
			return default(FaceInfo);
		}
		[Token(Token = "0x6000098")]
		[Address(RVA = "0x6A10400", Offset = "0x6A0F400", VA = "0x6A10400")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	internal int familyNameHashCode
	{
		[Token(Token = "0x6000099")]
		[Address(RVA = "0x6A105D0", Offset = "0x6A0F5D0", VA = "0x6A105D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600009A")]
		[Address(RVA = "0x6A10600", Offset = "0x6A0F600", VA = "0x6A10600")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	internal int styleNameHashCode
	{
		[Token(Token = "0x600009B")]
		[Address(RVA = "0x6A10610", Offset = "0x6A0F610", VA = "0x6A10610")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600009C")]
		[Address(RVA = "0x6A10640", Offset = "0x6A0F640", VA = "0x6A10640")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public List<Glyph> glyphTable
	{
		[Token(Token = "0x600009D")]
		[Address(RVA = "0x6A10650", Offset = "0x6A0F650", VA = "0x6A10650")]
		get
		{
			return null;
		}
		[Token(Token = "0x600009E")]
		[Address(RVA = "0x6A10660", Offset = "0x6A0F660", VA = "0x6A10660")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public Dictionary<uint, Glyph> glyphLookupTable
	{
		[Token(Token = "0x600009F")]
		[Address(RVA = "0x6A10680", Offset = "0x6A0F680", VA = "0x6A10680")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001B")]
	public List<Character> characterTable
	{
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x6A10E70", Offset = "0x6A0FE70", VA = "0x6A10E70")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x6A10E80", Offset = "0x6A0FE80", VA = "0x6A10E80")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public Dictionary<uint, Character> characterLookupTable
	{
		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x6A10EA0", Offset = "0x6A0FEA0", VA = "0x6A10EA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001D")]
	public Texture2D atlasTexture
	{
		[Token(Token = "0x60000A3")]
		[Address(RVA = "0x6A10EC0", Offset = "0x6A0FEC0", VA = "0x6A10EC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001E")]
	public Texture2D[] atlasTextures
	{
		[Token(Token = "0x60000A4")]
		[Address(RVA = "0x6A10F50", Offset = "0x6A0FF50", VA = "0x6A10F50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000A5")]
		[Address(RVA = "0x6A10F60", Offset = "0x6A0FF60", VA = "0x6A10F60")]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public int atlasTextureCount
	{
		[Token(Token = "0x60000A6")]
		[Address(RVA = "0x6A10F80", Offset = "0x6A0FF80", VA = "0x6A10F80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000020")]
	public bool isMultiAtlasTexturesEnabled
	{
		[Token(Token = "0x60000A7")]
		[Address(RVA = "0x6A10F90", Offset = "0x6A0FF90", VA = "0x6A10F90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000A8")]
		[Address(RVA = "0x6A10FA0", Offset = "0x6A0FFA0", VA = "0x6A10FA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public bool getFontFeatures
	{
		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x6A10FB0", Offset = "0x6A0FFB0", VA = "0x6A10FB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000AA")]
		[Address(RVA = "0x6A10FC0", Offset = "0x6A0FFC0", VA = "0x6A10FC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	internal bool clearDynamicDataOnBuild
	{
		[Token(Token = "0x60000AB")]
		[Address(RVA = "0x6A10FD0", Offset = "0x6A0FFD0", VA = "0x6A10FD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x6A10FE0", Offset = "0x6A0FFE0", VA = "0x6A10FE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public int atlasWidth
	{
		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x6A10FF0", Offset = "0x6A0FFF0", VA = "0x6A10FF0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000AE")]
		[Address(RVA = "0x6A11000", Offset = "0x6A10000", VA = "0x6A11000")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public int atlasHeight
	{
		[Token(Token = "0x60000AF")]
		[Address(RVA = "0x6A11010", Offset = "0x6A10010", VA = "0x6A11010")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000B0")]
		[Address(RVA = "0x6A11020", Offset = "0x6A10020", VA = "0x6A11020")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public int atlasPadding
	{
		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x6A11030", Offset = "0x6A10030", VA = "0x6A11030")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000B2")]
		[Address(RVA = "0x6A11040", Offset = "0x6A10040", VA = "0x6A11040")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000026")]
	public GlyphRenderMode atlasRenderMode
	{
		[Token(Token = "0x60000B3")]
		[Address(RVA = "0x6A11050", Offset = "0x6A10050", VA = "0x6A11050")]
		get
		{
			return default(GlyphRenderMode);
		}
		[Token(Token = "0x60000B4")]
		[Address(RVA = "0x6A11060", Offset = "0x6A10060", VA = "0x6A11060")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000027")]
	internal List<GlyphRect> usedGlyphRects
	{
		[Token(Token = "0x60000B8")]
		[Address(RVA = "0x6A110B0", Offset = "0x6A100B0", VA = "0x6A110B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B9")]
		[Address(RVA = "0x6A110C0", Offset = "0x6A100C0", VA = "0x6A110C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	internal List<GlyphRect> freeGlyphRects
	{
		[Token(Token = "0x60000BA")]
		[Address(RVA = "0x6A110E0", Offset = "0x6A100E0", VA = "0x6A110E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000BB")]
		[Address(RVA = "0x6A110F0", Offset = "0x6A100F0", VA = "0x6A110F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000029")]
	public FontFeatureTable fontFeatureTable
	{
		[Token(Token = "0x60000BC")]
		[Address(RVA = "0x6A11110", Offset = "0x6A10110", VA = "0x6A11110")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000BD")]
		[Address(RVA = "0x6A11120", Offset = "0x6A10120", VA = "0x6A11120")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public List<FontAsset> fallbackFontAssetTable
	{
		[Token(Token = "0x60000BE")]
		[Address(RVA = "0x6A11140", Offset = "0x6A10140", VA = "0x6A11140")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x6A11150", Offset = "0x6A10150", VA = "0x6A11150")]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public FontWeightPair[] fontWeightTable
	{
		[Token(Token = "0x60000C0")]
		[Address(RVA = "0x6A11170", Offset = "0x6A10170", VA = "0x6A11170")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x6A11180", Offset = "0x6A10180", VA = "0x6A11180")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700002C")]
	public float regularStyleWeight
	{
		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x6A111A0", Offset = "0x6A101A0", VA = "0x6A111A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x6A111B0", Offset = "0x6A101B0", VA = "0x6A111B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002D")]
	public float regularStyleSpacing
	{
		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x6A111C0", Offset = "0x6A101C0", VA = "0x6A111C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x6A111D0", Offset = "0x6A101D0", VA = "0x6A111D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002E")]
	public float boldStyleWeight
	{
		[Token(Token = "0x60000C6")]
		[Address(RVA = "0x6A111E0", Offset = "0x6A101E0", VA = "0x6A111E0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000C7")]
		[Address(RVA = "0x6A111F0", Offset = "0x6A101F0", VA = "0x6A111F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public float boldStyleSpacing
	{
		[Token(Token = "0x60000C8")]
		[Address(RVA = "0x6A11200", Offset = "0x6A10200", VA = "0x6A11200")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000C9")]
		[Address(RVA = "0x6A11210", Offset = "0x6A10210", VA = "0x6A11210")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public byte italicStyleSlant
	{
		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x6A11220", Offset = "0x6A10220", VA = "0x6A11220")]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x6A11230", Offset = "0x6A10230", VA = "0x6A11230")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public byte tabMultiple
	{
		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x6A11240", Offset = "0x6A10240", VA = "0x6A11240")]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x6A11250", Offset = "0x6A10250", VA = "0x6A11250")]
		set
		{
		}
	}

	[Token(Token = "0x17000032")]
	internal IntPtr nativeFontAsset
	{
		[Token(Token = "0x600012B")]
		[Address(RVA = "0x6A01AD0", Offset = "0x6A00AD0", VA = "0x6A01AD0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x600008F")]
	private static void EnsureAdditionalCapacity<T>(List<T> container, int additionalCapacity)
	{
	}

	[Token(Token = "0x6000090")]
	private static void EnsureAdditionalCapacity<TKey, TValue>(Dictionary<TKey, TValue> container, int additionalCapacity)
	{
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x6A11070", Offset = "0x6A10070", VA = "0x6A11070")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
	internal bool IsBitmap()
	{
		return default(bool);
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x6A11090", Offset = "0x6A10090", VA = "0x6A11090")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
	internal bool IsRaster()
	{
		return default(bool);
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x6A110A0", Offset = "0x6A100A0", VA = "0x6A110A0")]
	internal bool IsColor()
	{
		return default(bool);
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x6A11260", Offset = "0x6A10260", VA = "0x6A11260")]
	public static FontAsset CreateFontAsset(string familyName, string styleName, int pointSize = 90)
	{
		return null;
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x6A11430", Offset = "0x6A10430", VA = "0x6A11430")]
	internal static FontAsset CreateFontAssetInternal(string familyName, string styleName, int pointSize = 90)
	{
		return null;
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x6A116D0", Offset = "0x6A106D0", VA = "0x6A116D0")]
	public static FontAsset CreateFontAsset(string familyName, string styleName, int pointSize, int padding, GlyphRenderMode renderMode)
	{
		return null;
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x6A117B0", Offset = "0x6A107B0", VA = "0x6A117B0")]
	internal static List<FontAsset> CreateFontAssetOSFallbackList(string[] fallbacksFamilyNames, int pointSize = 90)
	{
		return null;
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x6A11B10", Offset = "0x6A10B10", VA = "0x6A11B10")]
	internal static FontAsset CreateFontAssetWithOSFallbackList(string[] fallbacksFamilyNames, int pointSize = 90)
	{
		return null;
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x6A119C0", Offset = "0x6A109C0", VA = "0x6A119C0")]
	private static FontAsset CreateFontAssetFromFamilyName(string familyName, int pointSize = 90)
	{
		return null;
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x6A11D20", Offset = "0x6A10D20", VA = "0x6A11D20")]
	public static FontAsset CreateFontAsset(string fontFilePath, int faceIndex, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight)
	{
		return null;
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x6A11510", Offset = "0x6A10510", VA = "0x6A11510")]
	private static FontAsset CreateFontAsset(string fontFilePath, int faceIndex, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport = true)
	{
		return null;
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x6A124C0", Offset = "0x6A114C0", VA = "0x6A124C0")]
	public static FontAsset CreateFontAsset(Font font)
	{
		return null;
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x6A125A0", Offset = "0x6A115A0", VA = "0x6A125A0")]
	public static FontAsset CreateFontAsset(Font font, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode = AtlasPopulationMode.Dynamic, bool enableMultiAtlasSupport = true)
	{
		return null;
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x6A12640", Offset = "0x6A11640", VA = "0x6A12640")]
	private static FontAsset CreateFontAsset(Font font, int faceIndex, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode = AtlasPopulationMode.Dynamic, bool enableMultiAtlasSupport = true)
	{
		return null;
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x6A11DB0", Offset = "0x6A10DB0", VA = "0x6A11DB0")]
	private static FontAsset CreateFontAssetInstance(Font font, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport, UnityEngine.TextCore.LowLevel.FontFaceHandle faceHandle)
	{
		return null;
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x6A129B0", Offset = "0x6A119B0", VA = "0x6A129B0")]
	private void RegisterCallbackInstance(FontAsset instance)
	{
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x6A12D00", Offset = "0x6A11D00", VA = "0x6A12D00", Slot = "4")]
	internal override void OnDestroy()
	{
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x6A106A0", Offset = "0x6A0F6A0", VA = "0x6A106A0")]
	public void ReadFontAssetDefinition()
	{
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x6A12F80", Offset = "0x6A11F80", VA = "0x6A12F80")]
	internal void InitializeDictionaryLookupTables()
	{
	}

	[Token(Token = "0x60000DE")]
	private static void InitializeLookup<T>(ICollection source, ref Dictionary<uint, T> lookup, int defaultCapacity = 16)
	{
	}

	[Token(Token = "0x60000DF")]
	private static void InitializeList<T>(ICollection source, ref List<T> list, int defaultCapacity = 16)
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x6A131D0", Offset = "0x6A121D0", VA = "0x6A131D0")]
	internal void InitializeGlyphLookupDictionary()
	{
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x6A13480", Offset = "0x6A12480", VA = "0x6A13480")]
	internal void InitializeCharacterLookupDictionary()
	{
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x6A14420", Offset = "0x6A13420", VA = "0x6A14420")]
	internal void ClearFallbackCharacterTable()
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x6A13870", Offset = "0x6A12870", VA = "0x6A13870")]
	internal void InitializeLigatureSubstitutionLookupDictionary()
	{
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x6A13CA0", Offset = "0x6A12CA0", VA = "0x6A13CA0")]
	internal void InitializeGlyphPairAdjustmentRecordsLookupDictionary()
	{
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x6A13FA0", Offset = "0x6A12FA0", VA = "0x6A13FA0")]
	internal void InitializeMarkToBaseAdjustmentRecordsLookupDictionary()
	{
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x6A141E0", Offset = "0x6A131E0", VA = "0x6A141E0")]
	internal void InitializeMarkToMarkAdjustmentRecordsLookupDictionary()
	{
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x6A12FD0", Offset = "0x6A11FD0", VA = "0x6A12FD0")]
	internal void AddSynthesizedCharactersAndFaceMetrics()
	{
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x6A149D0", Offset = "0x6A139D0", VA = "0x6A149D0")]
	private void AddSynthesizedCharacter(uint unicode, bool isFontFaceLoaded, bool addImmediately = false)
	{
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x6A153B0", Offset = "0x6A143B0", VA = "0x6A153B0")]
	internal void AddCharacterToLookupCache(uint unicode, Character character)
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x6A15420", Offset = "0x6A14420", VA = "0x6A15420")]
	internal void AddCharacterToLookupCache(uint unicode, Character character, FontStyles fontStyle, TextFontWeight fontWeight)
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x6A154F0", Offset = "0x6A144F0", VA = "0x6A154F0")]
	internal bool GetCharacterInLookupCache(uint unicode, FontStyles fontStyle, TextFontWeight fontWeight, out Character character)
	{
		return default(bool);
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x6A155C0", Offset = "0x6A145C0", VA = "0x6A155C0")]
	internal void RemoveCharacterInLookupCache(uint unicode, FontStyles fontStyle, TextFontWeight fontWeight)
	{
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x6A15680", Offset = "0x6A14680", VA = "0x6A15680")]
	internal bool ContainsCharacterInLookupCache(uint unicode, FontStyles fontStyle, TextFontWeight fontWeight)
	{
		return default(bool);
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x6A15360", Offset = "0x6A14360", VA = "0x6A15360")]
	private uint CreateCompositeKey(uint unicode, FontStyles fontStyle = FontStyles.Normal, TextFontWeight fontWeight = TextFontWeight.Regular)
	{
		return default(uint);
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x6A14830", Offset = "0x6A13830", VA = "0x6A14830")]
	internal FontEngineError LoadFontFace()
	{
		return default(FontEngineError);
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x6A15740", Offset = "0x6A14740", VA = "0x6A15740")]
	internal void SortCharacterTable()
	{
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x6A158A0", Offset = "0x6A148A0", VA = "0x6A158A0")]
	internal void SortGlyphTable()
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x6A15A00", Offset = "0x6A14A00", VA = "0x6A15A00")]
	internal void SortFontFeatureTable()
	{
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x6A15A40", Offset = "0x6A14A40", VA = "0x6A15A40")]
	internal void SortAllTables()
	{
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x6A15A90", Offset = "0x6A14A90", VA = "0x6A15A90")]
	public bool HasCharacter(int character)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x6A15B00", Offset = "0x6A14B00", VA = "0x6A15B00")]
	public bool HasCharacter(char character, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x6A15B10", Offset = "0x6A14B10", VA = "0x6A15B10")]
	public bool HasCharacter(uint character, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x6A16410", Offset = "0x6A15410", VA = "0x6A16410")]
	private bool HasCharacterWithStyle_Internal(uint character, FontStyles fontStyle, TextFontWeight fontWeight, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x6A161A0", Offset = "0x6A151A0", VA = "0x6A161A0")]
	private bool HasCharacter_Internal(uint character, FontStyles fontStyle = FontStyles.Normal, TextFontWeight fontWeight = TextFontWeight.Regular, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x6A16420", Offset = "0x6A15420", VA = "0x6A16420")]
	public bool HasCharacters(string text, out List<char> missingCharacters)
	{
		return default(bool);
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x6A165C0", Offset = "0x6A155C0", VA = "0x6A165C0")]
	public bool HasCharacters(string text, out uint[] missingCharacters, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x6A16AD0", Offset = "0x6A15AD0", VA = "0x6A16AD0")]
	public bool HasCharacters(string text)
	{
		return default(bool);
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x6A16B90", Offset = "0x6A15B90", VA = "0x6A16B90")]
	public static string GetCharacters(FontAsset fontAsset)
	{
		return null;
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x6A16C90", Offset = "0x6A15C90", VA = "0x6A16C90")]
	public static int[] GetCharactersArray(FontAsset fontAsset)
	{
		return null;
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x6A16DA0", Offset = "0x6A15DA0", VA = "0x6A16DA0")]
	internal uint GetGlyphIndex(uint unicode)
	{
		return default(uint);
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x6A16EE0", Offset = "0x6A15EE0", VA = "0x6A16EE0")]
	internal Glyph GetGlyphInCache(uint glyphID)
	{
		return null;
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x6A16DB0", Offset = "0x6A15DB0", VA = "0x6A16DB0")]
	internal uint GetGlyphIndex(uint unicode, out bool success)
	{
		return default(uint);
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x6A16F50", Offset = "0x6A15F50", VA = "0x6A16F50")]
	internal uint GetGlyphVariantIndex(uint unicode, uint variantSelectorUnicode)
	{
		return default(uint);
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x6A16FE0", Offset = "0x6A15FE0", VA = "0x6A16FE0")]
	internal void UpdateFontAssetData()
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x6A17690", Offset = "0x6A16690", VA = "0x6A17690")]
	public void ClearFontAssetData(bool setAtlasSizeToZero = false)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x6A17920", Offset = "0x6A16920", VA = "0x6A17920")]
	internal void ClearCharacterAndGlyphTablesInternal()
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x6A171B0", Offset = "0x6A161B0", VA = "0x6A171B0")]
	private void ClearCharacterAndGlyphTables()
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x6A17380", Offset = "0x6A16380", VA = "0x6A17380")]
	private void ClearFontFeaturesTables()
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x6A17440", Offset = "0x6A16440", VA = "0x6A17440")]
	internal void ClearAtlasTextures(bool setAtlasSizeToZero = false)
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x6A12E30", Offset = "0x6A11E30", VA = "0x6A12E30")]
	private void DestroyAtlasTextures()
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x6A17940", Offset = "0x6A16940", VA = "0x6A17940")]
	private uint GetGlyphIndexWithFallback(uint unicode)
	{
		return default(uint);
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x6A17A40", Offset = "0x6A16A40", VA = "0x6A17A40")]
	internal static void RegisterFontAssetForFontFeatureUpdate(FontAsset fontAsset)
	{
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x6A17B60", Offset = "0x6A16B60", VA = "0x6A17B60")]
	internal static void RegisterFontAssetForKerningUpdate(FontAsset fontAsset)
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x6A17C80", Offset = "0x6A16C80", VA = "0x6A17C80")]
	internal static void UpdateFontFeaturesForFontAssetsInQueue()
	{
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x6A18050", Offset = "0x6A17050", VA = "0x6A18050")]
	internal static void RegisterAtlasTextureForApply(Texture2D texture)
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x6A18180", Offset = "0x6A17180", VA = "0x6A18180")]
	internal static void UpdateAtlasTexturesInQueue()
	{
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x6A18330", Offset = "0x6A17330", VA = "0x6A18330")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
	internal static void UpdateFontAssetsInUpdateQueue()
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x6A17670", Offset = "0x6A16670", VA = "0x6A17670")]
	public bool TryAddCharacters(uint[] unicodes, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x6A18390", Offset = "0x6A17390", VA = "0x6A18390")]
	public bool TryAddCharacters(uint[] unicodes, out uint[] missingUnicodes, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x6A19F00", Offset = "0x6A18F00", VA = "0x6A19F00")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal bool TryAddGlyphs(List<uint> glyphsToAdd)
	{
		return default(bool);
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x6A1A9F0", Offset = "0x6A199F0", VA = "0x6A1A9F0")]
	public bool TryAddCharacters(string characters, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x6A1AA10", Offset = "0x6A19A10", VA = "0x6A1AA10")]
	public bool TryAddCharacters(string characters, out string missingCharacters, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x6A1ABB0", Offset = "0x6A19BB0", VA = "0x6A1ABB0")]
	internal bool TryAddGlyphVariantIndexInternal(uint unicode, uint nextCharacter, uint variantGlyphIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x6A1AC40", Offset = "0x6A19C40", VA = "0x6A1AC40")]
	internal bool TryGetGlyphVariantIndexInternal(uint unicode, uint nextCharacter, out uint variantGlyphIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x6A1ACD0", Offset = "0x6A19CD0", VA = "0x6A1ACD0")]
	internal bool TryAddGlyphInternal(uint glyphIndex, out Glyph glyph, bool populateLigatures = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x6A1B310", Offset = "0x6A1A310", VA = "0x6A1B310")]
	internal bool TryAddCharacterInternal(uint unicode, out Character character)
	{
		return default(bool);
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x6A15ED0", Offset = "0x6A14ED0", VA = "0x6A15ED0")]
	internal bool TryAddCharacterInternal(uint unicode, FontStyles fontStyle, TextFontWeight fontWeight, out Character character, bool populateLigatures = true)
	{
		return default(bool);
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x6A1AEB0", Offset = "0x6A19EB0", VA = "0x6A1AEB0")]
	private bool TryAddGlyphToAtlas(uint glyphIndex, out Glyph glyph, bool populateLigatures = true)
	{
		return default(bool);
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x6A1B4E0", Offset = "0x6A1A4E0", VA = "0x6A1B4E0")]
	private bool TryAddGlyphToTexture(uint glyphIndex, out Glyph glyph, bool populateLigatures = true)
	{
		return default(bool);
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x6A19910", Offset = "0x6A18910", VA = "0x6A19910")]
	private bool TryAddGlyphsToNewAtlasTexture()
	{
		return default(bool);
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x6A1A750", Offset = "0x6A19750", VA = "0x6A1A750")]
	private void SetupNewAtlasTexture()
	{
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x6A1B330", Offset = "0x6A1A330", VA = "0x6A1B330")]
	private Character CreateCharacterAndAddToCache(uint unicode, Glyph glyph, FontStyles fontStyle, TextFontWeight fontWeight)
	{
		return null;
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x6A19EA0", Offset = "0x6A18EA0", VA = "0x6A19EA0")]
	private void UpdateFontFeaturesForNewlyAddedGlyphs()
	{
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x6A18000", Offset = "0x6A17000", VA = "0x6A18000")]
	private void UpdateGlyphAdjustmentRecordsForNewGlyphs()
	{
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x6A17FB0", Offset = "0x6A16FB0", VA = "0x6A17FB0")]
	private void UpdateGPOSFontFeaturesForNewlyAddedGlyphs()
	{
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x6A13720", Offset = "0x6A12720", VA = "0x6A13720")]
	internal void ImportFontFeatures()
	{
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x6A1B890", Offset = "0x6A1A890", VA = "0x6A1B890")]
	private void UpdateGSUBFontFeaturesForNewGlyphIndex(uint glyphIndex)
	{
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x6A1B920", Offset = "0x6A1A920", VA = "0x6A1B920")]
	internal void UpdateLigatureSubstitutionRecords()
	{
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x6A1C970", Offset = "0x6A1B970", VA = "0x6A1C970")]
	private void AddLigatureSubstitutionRecords(UnityEngine.TextCore.LowLevel.LigatureSubstitutionRecord[] records)
	{
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x6A1BA10", Offset = "0x6A1AA10", VA = "0x6A1BA10")]
	internal void UpdateGlyphAdjustmentRecords()
	{
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x6A1BCD0", Offset = "0x6A1ACD0", VA = "0x6A1BCD0")]
	private void AddPairAdjustmentRecords(GlyphPairAdjustmentRecord[] records)
	{
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x6A1BB00", Offset = "0x6A1AB00", VA = "0x6A1BB00")]
	internal void UpdateDiacriticalMarkAdjustmentRecords()
	{
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x6A1C120", Offset = "0x6A1B120", VA = "0x6A1C120")]
	private void AddMarkToBaseAdjustmentRecords(UnityEngine.TextCore.LowLevel.MarkToBaseAdjustmentRecord[] records)
	{
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x6A1C540", Offset = "0x6A1B540", VA = "0x6A1C540")]
	private void AddMarkToMarkAdjustmentRecords(UnityEngine.TextCore.LowLevel.MarkToMarkAdjustmentRecord[] records)
	{
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x6A01780", Offset = "0x6A00780", VA = "0x6A01780")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal void EnsureNativeFontAssetIsCreated()
	{
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x6A1DC10", Offset = "0x6A1CC10", VA = "0x6A1DC10")]
	internal void UpdateFallbacks()
	{
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x6A1DD80", Offset = "0x6A1CD80", VA = "0x6A1DD80")]
	internal void UpdateWeightFallbacks()
	{
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x6A10470", Offset = "0x6A0F470", VA = "0x6A10470")]
	internal void UpdateFaceInfo()
	{
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x6A1DFE0", Offset = "0x6A1CFE0", VA = "0x6A1DFE0")]
	internal void UpdateRenderMode()
	{
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x6A1E0B0", Offset = "0x6A1D0B0", VA = "0x6A1E0B0")]
	internal void UpdateItalicAngle()
	{
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x6A1E180", Offset = "0x6A1D180", VA = "0x6A1E180")]
	internal void UpdateBoldWeight()
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x6A1E280", Offset = "0x6A1D280", VA = "0x6A1E280")]
	internal void UpdateBoldSpacing()
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x6A1CFC0", Offset = "0x6A1BFC0", VA = "0x6A1CFC0")]
	internal IntPtr[] GetFallbacks()
	{
		return null;
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x6A1E370", Offset = "0x6A1D370", VA = "0x6A1E370")]
	private bool HasRecursion(FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x6A1E420", Offset = "0x6A1D420", VA = "0x6A1E420")]
	private bool HasRecursionInternal(FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x6A1D410", Offset = "0x6A1C410", VA = "0x6A1D410")]
	private (IntPtr[], IntPtr[]) GetWeightFallbacks()
	{
		return default((IntPtr[], IntPtr[]));
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x6A1DC80", Offset = "0x6A1CC80", VA = "0x6A1DC80")]
	private static void UpdateFallbacks(IntPtr ptr, IntPtr[] fallbacks)
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x6A1DDF0", Offset = "0x6A1CDF0", VA = "0x6A1DDF0")]
	private static void UpdateWeightFallbacks(IntPtr ptr, IntPtr[] regularFallbacks, IntPtr[] italicFallbacks)
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x6A1D860", Offset = "0x6A1C860", VA = "0x6A1D860")]
	private static IntPtr Create(FaceInfo faceInfo, Font sourceFontFile, Font sourceFont_EditorRef, string sourceFontFilePath, EntityId fontEntityId, IntPtr[] fallbacks, IntPtr[] weightFallbacks, IntPtr[] italicFallbacks, GlyphRenderMode renderMode, byte italicSlant, float boldWeight, int boldSpacing, IntPtr managedObject)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x6A1DF40", Offset = "0x6A1CF40", VA = "0x6A1DF40")]
	private static void UpdateFaceInfo(IntPtr ptr, FaceInfo faceInfo)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013C")]
	[Address(RVA = "0x6A1E070", Offset = "0x6A1D070", VA = "0x6A1E070")]
	private static extern void UpdateRenderMode(IntPtr ptr, GlyphRenderMode renderMode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013D")]
	[Address(RVA = "0x6A1E140", Offset = "0x6A1D140", VA = "0x6A1E140")]
	private static extern void UpdateItalicAngle(IntPtr ptr, byte italicAngle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013E")]
	[Address(RVA = "0x6A1E230", Offset = "0x6A1D230", VA = "0x6A1E230")]
	private static extern void UpdateBoldWeight(IntPtr ptr, float boldWeight);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013F")]
	[Address(RVA = "0x6A1E330", Offset = "0x6A1D330", VA = "0x6A1E330")]
	private static extern void UpdateBoldSpacing(IntPtr ptr, int boldSpacing);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000140")]
	[Address(RVA = "0x6A12F40", Offset = "0x6A11F40", VA = "0x6A12F40")]
	[UnityEngine.Bindings.FreeFunction("FontAsset::Destroy")]
	private static extern void Destroy(IntPtr ptr, IntPtr managedObject);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000141")]
	[Address(RVA = "0x6A1E920", Offset = "0x6A1D920", VA = "0x6A1E920")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	[UnityEngine.Bindings.FreeFunction("FontAsset::CreateHbFaceIfNeeded")]
	internal static extern void CreateHbFaceIfNeeded();

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x6A1E950", Offset = "0x6A1D950", VA = "0x6A1E950")]
	public FontAsset()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000145")]
	[Address(RVA = "0x6A1E7F0", Offset = "0x6A1D7F0", VA = "0x6A1E7F0")]
	private static extern void UpdateFallbacks_Injected(IntPtr ptr, ref UnityEngine.Bindings.ManagedSpanWrapper fallbacks);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000146")]
	[Address(RVA = "0x6A1E830", Offset = "0x6A1D830", VA = "0x6A1E830")]
	private static extern void UpdateWeightFallbacks_Injected(IntPtr ptr, ref UnityEngine.Bindings.ManagedSpanWrapper regularFallbacks, ref UnityEngine.Bindings.ManagedSpanWrapper italicFallbacks);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000147")]
	[Address(RVA = "0x6A1E870", Offset = "0x6A1D870", VA = "0x6A1E870")]
	private static extern IntPtr Create_Injected([In] ref FaceInfo faceInfo, IntPtr sourceFontFile, IntPtr sourceFont_EditorRef, ref UnityEngine.Bindings.ManagedSpanWrapper sourceFontFilePath, [In] ref EntityId fontEntityId, ref UnityEngine.Bindings.ManagedSpanWrapper fallbacks, ref UnityEngine.Bindings.ManagedSpanWrapper weightFallbacks, ref UnityEngine.Bindings.ManagedSpanWrapper italicFallbacks, GlyphRenderMode renderMode, byte italicSlant, float boldWeight, int boldSpacing, IntPtr managedObject);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000148")]
	[Address(RVA = "0x6A1E8E0", Offset = "0x6A1D8E0", VA = "0x6A1E8E0")]
	private static extern void UpdateFaceInfo_Injected(IntPtr ptr, [In] ref FaceInfo faceInfo);
}
