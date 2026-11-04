// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.FontAsset
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x30124E0", Offset = "0x3010AE0", VA = "0x1830124E0")]
		get
		{
			return default(FontAssetCreationEditorSettings);
		}
		[Token(Token = "0x6000092")]
		[Address(RVA = "0x3012920", Offset = "0x3010F20", VA = "0x183012920")]
		set
		{
		}
	}

	[Token(Token = "0x17000014")]
	public Font sourceFontFile
	{
		[Token(Token = "0x6000093")]
		[Address(RVA = "0x2E8CB50", Offset = "0x2E8B150", VA = "0x182E8CB50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000094")]
		[Address(RVA = "0x189BA60", Offset = "0x189A060", VA = "0x18189BA60")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000015")]
	public AtlasPopulationMode atlasPopulationMode
	{
		[Token(Token = "0x6000095")]
		[Address(RVA = "0x30122C0", Offset = "0x30108C0", VA = "0x1830122C0")]
		get
		{
			return default(AtlasPopulationMode);
		}
		[Token(Token = "0x6000096")]
		[Address(RVA = "0x1C43490", Offset = "0x1C41A90", VA = "0x181C43490")]
		set
		{
		}
	}

	[Token(Token = "0x17000016")]
	public FaceInfo faceInfo
	{
		[Token(Token = "0x6000097")]
		[Address(RVA = "0x3012430", Offset = "0x3010A30", VA = "0x183012430")]
		get
		{
			return default(FaceInfo);
		}
		[Token(Token = "0x6000098")]
		[Address(RVA = "0x3012710", Offset = "0x3010D10", VA = "0x183012710")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	internal int familyNameHashCode
	{
		[Token(Token = "0x6000099")]
		[Address(RVA = "0x3012490", Offset = "0x3010A90", VA = "0x183012490")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600009A")]
		[Address(RVA = "0x3012910", Offset = "0x3010F10", VA = "0x183012910")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	internal int styleNameHashCode
	{
		[Token(Token = "0x600009B")]
		[Address(RVA = "0x3012610", Offset = "0x3010C10", VA = "0x183012610")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600009C")]
		[Address(RVA = "0x30129F0", Offset = "0x3010FF0", VA = "0x1830129F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public List<Glyph> glyphTable
	{
		[Token(Token = "0x600009D")]
		[Address(RVA = "0x30125A0", Offset = "0x3010BA0", VA = "0x1830125A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600009E")]
		[Address(RVA = "0x24C0B20", Offset = "0x24BF120", VA = "0x1824C0B20")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public Dictionary<uint, Glyph> glyphLookupTable
	{
		[Token(Token = "0x600009F")]
		[Address(RVA = "0x3012560", Offset = "0x3010B60", VA = "0x183012560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001B")]
	public List<Character> characterTable
	{
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x3012410", Offset = "0x3010A10", VA = "0x183012410")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x1D1FE00", Offset = "0x1D1E400", VA = "0x181D1FE00")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public Dictionary<uint, Character> characterLookupTable
	{
		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x30123D0", Offset = "0x30109D0", VA = "0x1830123D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001D")]
	public Texture2D atlasTexture
	{
		[Token(Token = "0x60000A3")]
		[Address(RVA = "0x30122F0", Offset = "0x30108F0", VA = "0x1830122F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001E")]
	public Texture2D[] atlasTextures
	{
		[Token(Token = "0x60000A4")]
		[Address(RVA = "0x3012390", Offset = "0x3010990", VA = "0x183012390")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000A5")]
		[Address(RVA = "0x30126B0", Offset = "0x3010CB0", VA = "0x1830126B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public int atlasTextureCount
	{
		[Token(Token = "0x60000A6")]
		[Address(RVA = "0x30122E0", Offset = "0x30108E0", VA = "0x1830122E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000020")]
	public bool isMultiAtlasTexturesEnabled
	{
		[Token(Token = "0x60000A7")]
		[Address(RVA = "0x30125B0", Offset = "0x3010BB0", VA = "0x1830125B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000A8")]
		[Address(RVA = "0x30129C0", Offset = "0x3010FC0", VA = "0x1830129C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public bool getFontFeatures
	{
		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x3012550", Offset = "0x3010B50", VA = "0x183012550")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000AA")]
		[Address(RVA = "0x30129B0", Offset = "0x3010FB0", VA = "0x1830129B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	internal bool clearDynamicDataOnBuild
	{
		[Token(Token = "0x60000AB")]
		[Address(RVA = "0x3012420", Offset = "0x3010A20", VA = "0x183012420")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x3012700", Offset = "0x3010D00", VA = "0x183012700")]
		set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public int atlasWidth
	{
		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x30123A0", Offset = "0x30109A0", VA = "0x1830123A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000AE")]
		[Address(RVA = "0x30126D0", Offset = "0x3010CD0", VA = "0x1830126D0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public int atlasHeight
	{
		[Token(Token = "0x60000AF")]
		[Address(RVA = "0x30122A0", Offset = "0x30108A0", VA = "0x1830122A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000B0")]
		[Address(RVA = "0x3012680", Offset = "0x3010C80", VA = "0x183012680")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public int atlasPadding
	{
		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x30122B0", Offset = "0x30108B0", VA = "0x1830122B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000B2")]
		[Address(RVA = "0x3012690", Offset = "0x3010C90", VA = "0x183012690")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000026")]
	public GlyphRenderMode atlasRenderMode
	{
		[Token(Token = "0x60000B3")]
		[Address(RVA = "0x30122D0", Offset = "0x30108D0", VA = "0x1830122D0")]
		get
		{
			return default(GlyphRenderMode);
		}
		[Token(Token = "0x60000B4")]
		[Address(RVA = "0x30126A0", Offset = "0x3010CA0", VA = "0x1830126A0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000027")]
	internal List<GlyphRect> usedGlyphRects
	{
		[Token(Token = "0x60000B8")]
		[Address(RVA = "0x3012670", Offset = "0x3010C70", VA = "0x183012670")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B9")]
		[Address(RVA = "0x26ABCB0", Offset = "0x26AA2B0", VA = "0x1826ABCB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	internal List<GlyphRect> freeGlyphRects
	{
		[Token(Token = "0x60000BA")]
		[Address(RVA = "0x3012540", Offset = "0x3010B40", VA = "0x183012540")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000BB")]
		[Address(RVA = "0x3012990", Offset = "0x3010F90", VA = "0x183012990")]
		set
		{
		}
	}

	[Token(Token = "0x17000029")]
	public FontFeatureTable fontFeatureTable
	{
		[Token(Token = "0x60000BC")]
		[Address(RVA = "0x3012520", Offset = "0x3010B20", VA = "0x183012520")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000BD")]
		[Address(RVA = "0x2CF3EB0", Offset = "0x2CF24B0", VA = "0x182CF3EB0")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public List<FontAsset> fallbackFontAssetTable
	{
		[Token(Token = "0x60000BE")]
		[Address(RVA = "0x3012480", Offset = "0x3010A80", VA = "0x183012480")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x30128F0", Offset = "0x3010EF0", VA = "0x1830128F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public FontWeightPair[] fontWeightTable
	{
		[Token(Token = "0x60000C0")]
		[Address(RVA = "0x3012530", Offset = "0x3010B30", VA = "0x183012530")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x3012970", Offset = "0x3010F70", VA = "0x183012970")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700002C")]
	public float regularStyleWeight
	{
		[Token(Token = "0x60000C2")]
		[Address(RVA = "0x3012600", Offset = "0x3010C00", VA = "0x183012600")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000C3")]
		[Address(RVA = "0x2F6E510", Offset = "0x2F6CB10", VA = "0x182F6E510")]
		set
		{
		}
	}

	[Token(Token = "0x1700002D")]
	public float regularStyleSpacing
	{
		[Token(Token = "0x60000C4")]
		[Address(RVA = "0x30125F0", Offset = "0x3010BF0", VA = "0x1830125F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x30129E0", Offset = "0x3010FE0", VA = "0x1830129E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002E")]
	public float boldStyleWeight
	{
		[Token(Token = "0x60000C6")]
		[Address(RVA = "0x30123C0", Offset = "0x30109C0", VA = "0x1830123C0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000C7")]
		[Address(RVA = "0x30126F0", Offset = "0x3010CF0", VA = "0x1830126F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public float boldStyleSpacing
	{
		[Token(Token = "0x60000C8")]
		[Address(RVA = "0x30123B0", Offset = "0x30109B0", VA = "0x1830123B0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000C9")]
		[Address(RVA = "0x30126E0", Offset = "0x3010CE0", VA = "0x1830126E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public byte italicStyleSlant
	{
		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x30125C0", Offset = "0x3010BC0", VA = "0x1830125C0")]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x60000CB")]
		[Address(RVA = "0x30129D0", Offset = "0x3010FD0", VA = "0x1830129D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public byte tabMultiple
	{
		[Token(Token = "0x60000CC")]
		[Address(RVA = "0x3012660", Offset = "0x3010C60", VA = "0x183012660")]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x60000CD")]
		[Address(RVA = "0x3012A00", Offset = "0x3011000", VA = "0x183012A00")]
		set
		{
		}
	}

	[Token(Token = "0x17000032")]
	internal IntPtr nativeFontAsset
	{
		[Token(Token = "0x600012B")]
		[Address(RVA = "0x30125D0", Offset = "0x3010BD0", VA = "0x1830125D0")]
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
	[Address(RVA = "0x300B5A0", Offset = "0x3009BA0", VA = "0x18300B5A0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
	internal bool IsBitmap()
	{
		return default(bool);
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x300B5D0", Offset = "0x3009BD0", VA = "0x18300B5D0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
	internal bool IsRaster()
	{
		return default(bool);
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x300B5C0", Offset = "0x3009BC0", VA = "0x18300B5C0")]
	internal bool IsColor()
	{
		return default(bool);
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x3006FB0", Offset = "0x30055B0", VA = "0x183006FB0")]
	public static FontAsset CreateFontAsset(string familyName, string styleName, int pointSize = 90)
	{
		return null;
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x3006790", Offset = "0x3004D90", VA = "0x183006790")]
	internal static FontAsset CreateFontAssetInternal(string familyName, string styleName, int pointSize = 90)
	{
		return null;
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x3006E20", Offset = "0x3005420", VA = "0x183006E20")]
	public static FontAsset CreateFontAsset(string familyName, string styleName, int pointSize, int padding, GlyphRenderMode renderMode)
	{
		return null;
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x3006890", Offset = "0x3004E90", VA = "0x183006890")]
	internal static List<FontAsset> CreateFontAssetOSFallbackList(string[] fallbacksFamilyNames, int pointSize = 90)
	{
		return null;
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x30069D0", Offset = "0x3004FD0", VA = "0x1830069D0")]
	internal static FontAsset CreateFontAssetWithOSFallbackList(string[] fallbacksFamilyNames, int pointSize = 90)
	{
		return null;
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x3005DE0", Offset = "0x30043E0", VA = "0x183005DE0")]
	private static FontAsset CreateFontAssetFromFamilyName(string familyName, int pointSize = 90)
	{
		return null;
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x3006F10", Offset = "0x3005510", VA = "0x183006F10")]
	public static FontAsset CreateFontAsset(string fontFilePath, int faceIndex, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight)
	{
		return null;
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x3006B80", Offset = "0x3005180", VA = "0x183006B80")]
	private static FontAsset CreateFontAsset(string fontFilePath, int faceIndex, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport = true)
	{
		return null;
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x3006D60", Offset = "0x3005360", VA = "0x183006D60")]
	public static FontAsset CreateFontAsset(Font font)
	{
		return null;
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x3007250", Offset = "0x3005850", VA = "0x183007250")]
	public static FontAsset CreateFontAsset(Font font, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode = AtlasPopulationMode.Dynamic, bool enableMultiAtlasSupport = true)
	{
		return null;
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x30072F0", Offset = "0x30058F0", VA = "0x1830072F0")]
	private static FontAsset CreateFontAsset(Font font, int faceIndex, int samplingPointSize, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode = AtlasPopulationMode.Dynamic, bool enableMultiAtlasSupport = true)
	{
		return null;
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x3005F50", Offset = "0x3004550", VA = "0x183005F50")]
	private static FontAsset CreateFontAssetInstance(Font font, int atlasPadding, GlyphRenderMode renderMode, int atlasWidth, int atlasHeight, AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport, UnityEngine.TextCore.LowLevel.FontFaceHandle faceHandle)
	{
		return null;
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x300C230", Offset = "0x300A830", VA = "0x18300C230")]
	private void RegisterCallbackInstance(FontAsset instance)
	{
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x300B780", Offset = "0x3009D80", VA = "0x18300B780", Slot = "4")]
	internal override void OnDestroy()
	{
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x300B990", Offset = "0x3009F90", VA = "0x18300B990")]
	public void ReadFontAssetDefinition()
	{
	}

	[Token(Token = "0x60000DD")]
	[Address(RVA = "0x300A720", Offset = "0x3008D20", VA = "0x18300A720")]
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
	[Address(RVA = "0x300A8D0", Offset = "0x3008ED0", VA = "0x18300A8D0")]
	internal void InitializeGlyphLookupDictionary()
	{
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x300A4C0", Offset = "0x3008AC0", VA = "0x18300A4C0")]
	internal void InitializeCharacterLookupDictionary()
	{
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x3005480", Offset = "0x3003A80", VA = "0x183005480")]
	internal void ClearFallbackCharacterTable()
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x300ADF0", Offset = "0x30093F0", VA = "0x18300ADF0")]
	internal void InitializeLigatureSubstitutionLookupDictionary()
	{
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x300AAF0", Offset = "0x30090F0", VA = "0x18300AAF0")]
	internal void InitializeGlyphPairAdjustmentRecordsLookupDictionary()
	{
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x300B140", Offset = "0x3009740", VA = "0x18300B140")]
	internal void InitializeMarkToBaseAdjustmentRecordsLookupDictionary()
	{
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x300B370", Offset = "0x3009970", VA = "0x18300B370")]
	internal void InitializeMarkToMarkAdjustmentRecordsLookupDictionary()
	{
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x3004E10", Offset = "0x3003410", VA = "0x183004E10")]
	internal void AddSynthesizedCharactersAndFaceMetrics()
	{
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x3004610", Offset = "0x3002C10", VA = "0x183004610")]
	private void AddSynthesizedCharacter(uint unicode, bool isFontFaceLoaded, bool addImmediately = false)
	{
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x30036C0", Offset = "0x3001CC0", VA = "0x1830036C0")]
	internal void AddCharacterToLookupCache(uint unicode, Character character)
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x3003600", Offset = "0x3001C00", VA = "0x183003600")]
	internal void AddCharacterToLookupCache(uint unicode, Character character, FontStyles fontStyle, TextFontWeight fontWeight)
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x3008390", Offset = "0x3006990", VA = "0x183008390")]
	internal bool GetCharacterInLookupCache(uint unicode, FontStyles fontStyle, TextFontWeight fontWeight, out Character character)
	{
		return default(bool);
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x300C760", Offset = "0x300AD60", VA = "0x18300C760")]
	internal void RemoveCharacterInLookupCache(uint unicode, FontStyles fontStyle, TextFontWeight fontWeight)
	{
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x3005B00", Offset = "0x3004100", VA = "0x183005B00")]
	internal bool ContainsCharacterInLookupCache(uint unicode, FontStyles fontStyle, TextFontWeight fontWeight)
	{
		return default(bool);
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x3005D70", Offset = "0x3004370", VA = "0x183005D70")]
	private uint CreateCompositeKey(uint unicode, FontStyles fontStyle = FontStyles.Normal, TextFontWeight fontWeight = TextFontWeight.Regular)
	{
		return default(uint);
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x300B5E0", Offset = "0x3009BE0", VA = "0x18300B5E0")]
	internal FontEngineError LoadFontFace()
	{
		return default(FontEngineError);
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x300CE30", Offset = "0x300B430", VA = "0x18300CE30")]
	internal void SortCharacterTable()
	{
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x300D000", Offset = "0x300B600", VA = "0x18300D000")]
	internal void SortGlyphTable()
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x300CFB0", Offset = "0x300B5B0", VA = "0x18300CFB0")]
	internal void SortFontFeatureTable()
	{
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x300CB20", Offset = "0x300B120", VA = "0x18300CB20")]
	internal void SortAllTables()
	{
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x3009780", Offset = "0x3007D80", VA = "0x183009780")]
	public bool HasCharacter(int character)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x3009800", Offset = "0x3007E00", VA = "0x183009800")]
	public bool HasCharacter(char character, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x30093F0", Offset = "0x30079F0", VA = "0x1830093F0")]
	public bool HasCharacter(uint character, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x30090D0", Offset = "0x30076D0", VA = "0x1830090D0")]
	private bool HasCharacterWithStyle_Internal(uint character, FontStyles fontStyle, TextFontWeight fontWeight, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x3009100", Offset = "0x3007700", VA = "0x183009100")]
	private bool HasCharacter_Internal(uint character, FontStyles fontStyle = FontStyles.Normal, TextFontWeight fontWeight = TextFontWeight.Regular, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x3009DA0", Offset = "0x30083A0", VA = "0x183009DA0")]
	public bool HasCharacters(string text, out List<char> missingCharacters)
	{
		return default(bool);
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x30098E0", Offset = "0x3007EE0", VA = "0x1830098E0")]
	public bool HasCharacters(string text, out uint[] missingCharacters, bool searchFallbacks = false, bool tryAddCharacter = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60000FB")]
	[Address(RVA = "0x3009820", Offset = "0x3007E20", VA = "0x183009820")]
	public bool HasCharacters(string text)
	{
		return default(bool);
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x3008530", Offset = "0x3006B30", VA = "0x183008530")]
	public static string GetCharacters(FontAsset fontAsset)
	{
		return null;
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x3008450", Offset = "0x3006A50", VA = "0x183008450")]
	public static int[] GetCharactersArray(FontAsset fontAsset)
	{
		return null;
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x3008C00", Offset = "0x3007200", VA = "0x183008C00")]
	internal uint GetGlyphIndex(uint unicode)
	{
		return default(uint);
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x3008940", Offset = "0x3006F40", VA = "0x183008940")]
	internal Glyph GetGlyphInCache(uint glyphID)
	{
		return null;
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x3008AB0", Offset = "0x30070B0", VA = "0x183008AB0")]
	internal uint GetGlyphIndex(uint unicode, out bool success)
	{
		return default(uint);
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x3008D30", Offset = "0x3007330", VA = "0x183008D30")]
	internal uint GetGlyphVariantIndex(uint unicode, uint variantSelectorUnicode)
	{
		return default(uint);
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x3010A60", Offset = "0x300F060", VA = "0x183010A60")]
	internal void UpdateFontAssetData()
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x30057A0", Offset = "0x3003DA0", VA = "0x1830057A0")]
	public void ClearFontAssetData(bool setAtlasSizeToZero = false)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x3005240", Offset = "0x3003840", VA = "0x183005240")]
	internal void ClearCharacterAndGlyphTablesInternal()
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x3005270", Offset = "0x3003870", VA = "0x183005270")]
	private void ClearCharacterAndGlyphTables()
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x3005A00", Offset = "0x3004000", VA = "0x183005A00")]
	private void ClearFontFeaturesTables()
	{
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x3005010", Offset = "0x3003610", VA = "0x183005010")]
	internal void ClearAtlasTextures(bool setAtlasSizeToZero = false)
	{
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x3007E60", Offset = "0x3006460", VA = "0x183007E60")]
	private void DestroyAtlasTextures()
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x30089C0", Offset = "0x3006FC0", VA = "0x1830089C0")]
	private uint GetGlyphIndexWithFallback(uint unicode)
	{
		return default(uint);
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x300C580", Offset = "0x300AB80", VA = "0x18300C580")]
	internal static void RegisterFontAssetForFontFeatureUpdate(FontAsset fontAsset)
	{
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x300C670", Offset = "0x300AC70", VA = "0x18300C670")]
	internal static void RegisterFontAssetForKerningUpdate(FontAsset fontAsset)
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x3010D90", Offset = "0x300F390", VA = "0x183010D90")]
	internal static void UpdateFontFeaturesForFontAssetsInQueue()
	{
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x300C0E0", Offset = "0x300A6E0", VA = "0x18300C0E0")]
	internal static void RegisterAtlasTextureForApply(Texture2D texture)
	{
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x30100E0", Offset = "0x300E6E0", VA = "0x1830100E0")]
	internal static void UpdateAtlasTexturesInQueue()
	{
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x3010BC0", Offset = "0x300F1C0", VA = "0x183010BC0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
	internal static void UpdateFontAssetsInUpdateQueue()
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x300D4F0", Offset = "0x300BAF0", VA = "0x18300D4F0")]
	public bool TryAddCharacters(uint[] unicodes, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x300D520", Offset = "0x300BB20", VA = "0x18300D520")]
	public bool TryAddCharacters(uint[] unicodes, out uint[] missingUnicodes, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x300F8A0", Offset = "0x300DEA0", VA = "0x18300F8A0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal bool TryAddGlyphs(List<uint> glyphsToAdd)
	{
		return default(bool);
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x300D4C0", Offset = "0x300BAC0", VA = "0x18300D4C0")]
	public bool TryAddCharacters(string characters, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x300E6E0", Offset = "0x300CCE0", VA = "0x18300E6E0")]
	public bool TryAddCharacters(string characters, out string missingCharacters, bool includeFontFeatures = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x300F2F0", Offset = "0x300D8F0", VA = "0x18300F2F0")]
	internal bool TryAddGlyphVariantIndexInternal(uint unicode, uint nextCharacter, uint variantGlyphIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x300FFF0", Offset = "0x300E5F0", VA = "0x18300FFF0")]
	internal bool TryGetGlyphVariantIndexInternal(uint unicode, uint nextCharacter, out uint variantGlyphIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x300E870", Offset = "0x300CE70", VA = "0x18300E870")]
	internal bool TryAddGlyphInternal(uint glyphIndex, out Glyph glyph, bool populateLigatures = true)
	{
		return default(bool);
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x300D490", Offset = "0x300BA90", VA = "0x18300D490")]
	internal bool TryAddCharacterInternal(uint unicode, out Character character)
	{
		return default(bool);
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x300D180", Offset = "0x300B780", VA = "0x18300D180")]
	internal bool TryAddCharacterInternal(uint unicode, FontStyles fontStyle, TextFontWeight fontWeight, out Character character, bool populateLigatures = true)
	{
		return default(bool);
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x300EA20", Offset = "0x300D020", VA = "0x18300EA20")]
	private bool TryAddGlyphToAtlas(uint glyphIndex, out Glyph glyph, bool populateLigatures = true)
	{
		return default(bool);
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x300EE90", Offset = "0x300D490", VA = "0x18300EE90")]
	private bool TryAddGlyphToTexture(uint glyphIndex, out Glyph glyph, bool populateLigatures = true)
	{
		return default(bool);
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x300F380", Offset = "0x300D980", VA = "0x18300F380")]
	private bool TryAddGlyphsToNewAtlasTexture()
	{
		return default(bool);
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x300C810", Offset = "0x300AE10", VA = "0x18300C810")]
	private void SetupNewAtlasTexture()
	{
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x3005BB0", Offset = "0x30041B0", VA = "0x183005BB0")]
	private Character CreateCharacterAndAddToCache(uint unicode, Glyph glyph, FontStyles fontStyle, TextFontWeight fontWeight)
	{
		return null;
	}

	[Token(Token = "0x600011F")]
	[Address(RVA = "0x30110A0", Offset = "0x300F6A0", VA = "0x1830110A0")]
	private void UpdateFontFeaturesForNewlyAddedGlyphs()
	{
	}

	[Token(Token = "0x6000120")]
	[Address(RVA = "0x3011270", Offset = "0x300F870", VA = "0x183011270")]
	private void UpdateGlyphAdjustmentRecordsForNewGlyphs()
	{
	}

	[Token(Token = "0x6000121")]
	[Address(RVA = "0x3011180", Offset = "0x300F780", VA = "0x183011180")]
	private void UpdateGPOSFontFeaturesForNewlyAddedGlyphs()
	{
	}

	[Token(Token = "0x6000122")]
	[Address(RVA = "0x300A360", Offset = "0x3008960", VA = "0x18300A360")]
	internal void ImportFontFeatures()
	{
	}

	[Token(Token = "0x6000123")]
	[Address(RVA = "0x30111E0", Offset = "0x300F7E0", VA = "0x1830111E0")]
	private void UpdateGSUBFontFeaturesForNewGlyphIndex(uint glyphIndex)
	{
	}

	[Token(Token = "0x6000124")]
	[Address(RVA = "0x3011450", Offset = "0x300FA50", VA = "0x183011450")]
	internal void UpdateLigatureSubstitutionRecords()
	{
	}

	[Token(Token = "0x6000125")]
	[Address(RVA = "0x3003740", Offset = "0x3001D40", VA = "0x183003740")]
	private void AddLigatureSubstitutionRecords(UnityEngine.TextCore.LowLevel.LigatureSubstitutionRecord[] records)
	{
	}

	[Token(Token = "0x6000126")]
	[Address(RVA = "0x30112D0", Offset = "0x300F8D0", VA = "0x1830112D0")]
	internal void UpdateGlyphAdjustmentRecords()
	{
	}

	[Token(Token = "0x6000127")]
	[Address(RVA = "0x30042B0", Offset = "0x30028B0", VA = "0x1830042B0")]
	private void AddPairAdjustmentRecords(GlyphPairAdjustmentRecord[] records)
	{
	}

	[Token(Token = "0x6000128")]
	[Address(RVA = "0x3010440", Offset = "0x300EA40", VA = "0x183010440")]
	internal void UpdateDiacriticalMarkAdjustmentRecords()
	{
	}

	[Token(Token = "0x6000129")]
	[Address(RVA = "0x3003BB0", Offset = "0x30021B0", VA = "0x183003BB0")]
	private void AddMarkToBaseAdjustmentRecords(UnityEngine.TextCore.LowLevel.MarkToBaseAdjustmentRecord[] records)
	{
	}

	[Token(Token = "0x600012A")]
	[Address(RVA = "0x3003F20", Offset = "0x3002520", VA = "0x183003F20")]
	private void AddMarkToMarkAdjustmentRecords(UnityEngine.TextCore.LowLevel.MarkToMarkAdjustmentRecord[] records)
	{
	}

	[Token(Token = "0x600012C")]
	[Address(RVA = "0x3007FC0", Offset = "0x30065C0", VA = "0x183007FC0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal void EnsureNativeFontAssetIsCreated()
	{
	}

	[Token(Token = "0x600012D")]
	[Address(RVA = "0x3010830", Offset = "0x300EE30", VA = "0x183010830")]
	internal void UpdateFallbacks()
	{
	}

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x3011610", Offset = "0x300FC10", VA = "0x183011610")]
	internal void UpdateWeightFallbacks()
	{
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x3010690", Offset = "0x300EC90", VA = "0x183010690")]
	internal void UpdateFaceInfo()
	{
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x3011520", Offset = "0x300FB20", VA = "0x183011520")]
	internal void UpdateRenderMode()
	{
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x3011370", Offset = "0x300F970", VA = "0x183011370")]
	internal void UpdateItalicAngle()
	{
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x3010350", Offset = "0x300E950", VA = "0x183010350")]
	internal void UpdateBoldWeight()
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x30102B0", Offset = "0x300E8B0", VA = "0x1830102B0")]
	internal void UpdateBoldSpacing()
	{
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x3008620", Offset = "0x3006C20", VA = "0x183008620")]
	internal IntPtr[] GetFallbacks()
	{
		return null;
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x300A2C0", Offset = "0x30088C0", VA = "0x18300A2C0")]
	private bool HasRecursion(FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x3009F10", Offset = "0x3008510", VA = "0x183009F10")]
	private bool HasRecursionInternal(FontAsset fontAsset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x3008DD0", Offset = "0x30073D0", VA = "0x183008DD0")]
	private (IntPtr[], IntPtr[]) GetWeightFallbacks()
	{
		return default((IntPtr[], IntPtr[]));
	}

	[Token(Token = "0x6000138")]
	[Address(RVA = "0x3010970", Offset = "0x300EF70", VA = "0x183010970")]
	private static void UpdateFallbacks(IntPtr ptr, IntPtr[] fallbacks)
	{
	}

	[Token(Token = "0x6000139")]
	[Address(RVA = "0x30117C0", Offset = "0x300FDC0", VA = "0x1830117C0")]
	private static void UpdateWeightFallbacks(IntPtr ptr, IntPtr[] regularFallbacks, IntPtr[] italicFallbacks)
	{
	}

	[Token(Token = "0x600013A")]
	[Address(RVA = "0x30079A0", Offset = "0x3005FA0", VA = "0x1830079A0")]
	private static IntPtr Create(FaceInfo faceInfo, Font sourceFontFile, Font sourceFont_EditorRef, string sourceFontFilePath, EntityId fontEntityId, IntPtr[] fallbacks, IntPtr[] weightFallbacks, IntPtr[] italicFallbacks, GlyphRenderMode renderMode, byte italicSlant, float boldWeight, int boldSpacing, IntPtr managedObject)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600013B")]
	[Address(RVA = "0x3010610", Offset = "0x300EC10", VA = "0x183010610")]
	private static void UpdateFaceInfo(IntPtr ptr, FaceInfo faceInfo)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013C")]
	[Address(RVA = "0x30114E0", Offset = "0x300FAE0", VA = "0x1830114E0")]
	private static extern void UpdateRenderMode(IntPtr ptr, GlyphRenderMode renderMode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013D")]
	[Address(RVA = "0x3011400", Offset = "0x300FA00", VA = "0x183011400")]
	private static extern void UpdateItalicAngle(IntPtr ptr, byte italicAngle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013E")]
	[Address(RVA = "0x30103F0", Offset = "0x300E9F0", VA = "0x1830103F0")]
	private static extern void UpdateBoldWeight(IntPtr ptr, float boldWeight);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600013F")]
	[Address(RVA = "0x3010270", Offset = "0x300E870", VA = "0x183010270")]
	private static extern void UpdateBoldSpacing(IntPtr ptr, int boldSpacing);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000140")]
	[Address(RVA = "0x3007F70", Offset = "0x3006570", VA = "0x183007F70")]
	[UnityEngine.Bindings.FreeFunction("FontAsset::Destroy")]
	private static extern void Destroy(IntPtr ptr, IntPtr managedObject);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000141")]
	[Address(RVA = "0x3007910", Offset = "0x3005F10", VA = "0x183007910")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	[UnityEngine.Bindings.FreeFunction("FontAsset::CreateHbFaceIfNeeded")]
	internal static extern void CreateHbFaceIfNeeded();

	[Token(Token = "0x6000142")]
	[Address(RVA = "0x3011E90", Offset = "0x3010490", VA = "0x183011E90")]
	public FontAsset()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000145")]
	[Address(RVA = "0x30107E0", Offset = "0x300EDE0", VA = "0x1830107E0")]
	private static extern void UpdateFallbacks_Injected(IntPtr ptr, ref UnityEngine.Bindings.ManagedSpanWrapper fallbacks);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000146")]
	[Address(RVA = "0x30115B0", Offset = "0x300FBB0", VA = "0x1830115B0")]
	private static extern void UpdateWeightFallbacks_Injected(IntPtr ptr, ref UnityEngine.Bindings.ManagedSpanWrapper regularFallbacks, ref UnityEngine.Bindings.ManagedSpanWrapper italicFallbacks);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000147")]
	[Address(RVA = "0x3007940", Offset = "0x3005F40", VA = "0x183007940")]
	private static extern IntPtr Create_Injected([In] ref FaceInfo faceInfo, IntPtr sourceFontFile, IntPtr sourceFont_EditorRef, ref UnityEngine.Bindings.ManagedSpanWrapper sourceFontFilePath, [In] ref EntityId fontEntityId, ref UnityEngine.Bindings.ManagedSpanWrapper fallbacks, ref UnityEngine.Bindings.ManagedSpanWrapper weightFallbacks, ref UnityEngine.Bindings.ManagedSpanWrapper italicFallbacks, GlyphRenderMode renderMode, byte italicSlant, float boldWeight, int boldSpacing, IntPtr managedObject);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000148")]
	[Address(RVA = "0x30105C0", Offset = "0x300EBC0", VA = "0x1830105C0")]
	private static extern void UpdateFaceInfo_Injected(IntPtr ptr, [In] ref FaceInfo faceInfo);
}
