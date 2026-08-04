// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextGenerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000022")]
internal class TextGenerator
{
	[Token(Token = "0x2000023")]
	public delegate void MissingCharacterEventCallback(uint unicode, int stringIndex, TextInfo text, FontAsset fontAsset);

	[Token(Token = "0x2000024")]
	protected struct SpecialCharacter
	{
		[Token(Token = "0x40001BD")]
		[FieldOffset(Offset = "0x0")]
		public Character character;

		[Token(Token = "0x40001BE")]
		[FieldOffset(Offset = "0x8")]
		public FontAsset fontAsset;

		[Token(Token = "0x40001BF")]
		[FieldOffset(Offset = "0x10")]
		public Material material;

		[Token(Token = "0x40001C0")]
		[FieldOffset(Offset = "0x18")]
		public int materialIndex;

		[Token(Token = "0x6000117")]
		[Address(RVA = "0x4EDB660", Offset = "0x4EDB660", VA = "0x4EDB660")]
		public SpecialCharacter(Character character, int materialIndex)
		{
		}
	}

	[Token(Token = "0x4000146")]
	[FieldOffset(Offset = "0x0")]
	private static TextGenerator s_TextGenerator;

	[Token(Token = "0x4000147")]
	[FieldOffset(Offset = "0x10")]
	private TextBackingContainer m_TextBackingArray;

	[Token(Token = "0x4000148")]
	[FieldOffset(Offset = "0x20")]
	internal TextProcessingElement[] m_TextProcessingArray;

	[Token(Token = "0x4000149")]
	[FieldOffset(Offset = "0x28")]
	internal int m_InternalTextProcessingArraySize;

	[Token(Token = "0x400014A")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	protected bool m_VertexBufferAutoSizeReduction;

	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0x30")]
	private char[] m_HtmlTag;

	[Token(Token = "0x400014C")]
	[FieldOffset(Offset = "0x38")]
	internal HighlightState m_HighlightState;

	[Token(Token = "0x400014D")]
	[FieldOffset(Offset = "0x4C")]
	protected bool m_IsIgnoringAlignment;

	[Token(Token = "0x400014E")]
	[FieldOffset(Offset = "0x8")]
	protected static bool m_IsTextTruncated;

	[Token(Token = "0x400014F")]
	[FieldOffset(Offset = "0x10")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static MissingCharacterEventCallback OnMissingCharacter;

	[Token(Token = "0x4000150")]
	[FieldOffset(Offset = "0x50")]
	private Vector3[] m_RectTransformCorners;

	[Token(Token = "0x4000151")]
	[FieldOffset(Offset = "0x58")]
	private float m_MarginWidth;

	[Token(Token = "0x4000152")]
	[FieldOffset(Offset = "0x5C")]
	private float m_MarginHeight;

	[Token(Token = "0x4000153")]
	[FieldOffset(Offset = "0x60")]
	private float m_PreferredWidth;

	[Token(Token = "0x4000154")]
	[FieldOffset(Offset = "0x64")]
	private float m_PreferredHeight;

	[Token(Token = "0x4000155")]
	[FieldOffset(Offset = "0x68")]
	private FontAsset m_CurrentFontAsset;

	[Token(Token = "0x4000156")]
	[FieldOffset(Offset = "0x70")]
	private Material m_CurrentMaterial;

	[Token(Token = "0x4000157")]
	[FieldOffset(Offset = "0x78")]
	private int m_CurrentMaterialIndex;

	[Token(Token = "0x4000158")]
	[FieldOffset(Offset = "0x80")]
	private TextProcessingStack<MaterialReference> m_MaterialReferenceStack;

	[Token(Token = "0x4000159")]
	[FieldOffset(Offset = "0xD8")]
	private float m_Padding;

	[Token(Token = "0x400015A")]
	[FieldOffset(Offset = "0xE0")]
	private SpriteAsset m_CurrentSpriteAsset;

	[Token(Token = "0x400015B")]
	[FieldOffset(Offset = "0xE8")]
	private int m_TotalCharacterCount;

	[Token(Token = "0x400015C")]
	[FieldOffset(Offset = "0xEC")]
	private float m_FontSize;

	[Token(Token = "0x400015D")]
	[FieldOffset(Offset = "0xF0")]
	private float m_FontScaleMultiplier;

	[Token(Token = "0x400015E")]
	[FieldOffset(Offset = "0xF4")]
	private float m_CurrentFontSize;

	[Token(Token = "0x400015F")]
	[FieldOffset(Offset = "0xF8")]
	private TextProcessingStack<float> m_SizeStack;

	[Token(Token = "0x4000160")]
	[FieldOffset(Offset = "0x118")]
	protected TextProcessingStack<int>[] m_TextStyleStacks;

	[Token(Token = "0x4000161")]
	[FieldOffset(Offset = "0x120")]
	protected int m_TextStyleStackDepth;

	[Token(Token = "0x4000162")]
	[FieldOffset(Offset = "0x124")]
	private FontStyles m_FontStyleInternal;

	[Token(Token = "0x4000163")]
	[FieldOffset(Offset = "0x128")]
	private FontStyleStack m_FontStyleStack;

	[Token(Token = "0x4000164")]
	[FieldOffset(Offset = "0x134")]
	private TextFontWeight m_FontWeightInternal;

	[Token(Token = "0x4000165")]
	[FieldOffset(Offset = "0x138")]
	private TextProcessingStack<TextFontWeight> m_FontWeightStack;

	[Token(Token = "0x4000166")]
	[FieldOffset(Offset = "0x158")]
	private TextAlignment m_LineJustification;

	[Token(Token = "0x4000167")]
	[FieldOffset(Offset = "0x160")]
	private TextProcessingStack<TextAlignment> m_LineJustificationStack;

	[Token(Token = "0x4000168")]
	[FieldOffset(Offset = "0x180")]
	private float m_BaselineOffset;

	[Token(Token = "0x4000169")]
	[FieldOffset(Offset = "0x188")]
	private TextProcessingStack<float> m_BaselineOffsetStack;

	[Token(Token = "0x400016A")]
	[FieldOffset(Offset = "0x1A8")]
	private Color32 m_FontColor32;

	[Token(Token = "0x400016B")]
	[FieldOffset(Offset = "0x1AC")]
	private Color32 m_HtmlColor;

	[Token(Token = "0x400016C")]
	[FieldOffset(Offset = "0x1B0")]
	private Color32 m_UnderlineColor;

	[Token(Token = "0x400016D")]
	[FieldOffset(Offset = "0x1B4")]
	private Color32 m_StrikethroughColor;

	[Token(Token = "0x400016E")]
	[FieldOffset(Offset = "0x1B8")]
	private TextProcessingStack<Color32> m_ColorStack;

	[Token(Token = "0x400016F")]
	[FieldOffset(Offset = "0x1D8")]
	private TextProcessingStack<Color32> m_UnderlineColorStack;

	[Token(Token = "0x4000170")]
	[FieldOffset(Offset = "0x1F8")]
	private TextProcessingStack<Color32> m_StrikethroughColorStack;

	[Token(Token = "0x4000171")]
	[FieldOffset(Offset = "0x218")]
	private TextProcessingStack<Color32> m_HighlightColorStack;

	[Token(Token = "0x4000172")]
	[FieldOffset(Offset = "0x238")]
	private TextProcessingStack<HighlightState> m_HighlightStateStack;

	[Token(Token = "0x4000173")]
	[FieldOffset(Offset = "0x268")]
	private TextProcessingStack<int> m_ItalicAngleStack;

	[Token(Token = "0x4000174")]
	[FieldOffset(Offset = "0x288")]
	private TextColorGradient m_ColorGradientPreset;

	[Token(Token = "0x4000175")]
	[FieldOffset(Offset = "0x290")]
	private TextProcessingStack<TextColorGradient> m_ColorGradientStack;

	[Token(Token = "0x4000176")]
	[FieldOffset(Offset = "0x2B8")]
	private bool m_ColorGradientPresetIsTinted;

	[Token(Token = "0x4000177")]
	[FieldOffset(Offset = "0x2C0")]
	private TextProcessingStack<int> m_ActionStack;

	[Token(Token = "0x4000178")]
	[FieldOffset(Offset = "0x2E0")]
	private float m_LineOffset;

	[Token(Token = "0x4000179")]
	[FieldOffset(Offset = "0x2E4")]
	private float m_LineHeight;

	[Token(Token = "0x400017A")]
	[FieldOffset(Offset = "0x2E8")]
	private bool m_IsDrivenLineSpacing;

	[Token(Token = "0x400017B")]
	[FieldOffset(Offset = "0x2EC")]
	private float m_CSpacing;

	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0x2F0")]
	private float m_MonoSpacing;

	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0x2F4")]
	private float m_XAdvance;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0x2F8")]
	private float m_TagLineIndent;

	[Token(Token = "0x400017F")]
	[FieldOffset(Offset = "0x2FC")]
	private float m_TagIndent;

	[Token(Token = "0x4000180")]
	[FieldOffset(Offset = "0x300")]
	private TextProcessingStack<float> m_IndentStack;

	[Token(Token = "0x4000181")]
	[FieldOffset(Offset = "0x320")]
	private bool m_TagNoParsing;

	[Token(Token = "0x4000182")]
	[FieldOffset(Offset = "0x324")]
	private int m_CharacterCount;

	[Token(Token = "0x4000183")]
	[FieldOffset(Offset = "0x328")]
	private int m_FirstCharacterOfLine;

	[Token(Token = "0x4000184")]
	[FieldOffset(Offset = "0x32C")]
	private int m_LastCharacterOfLine;

	[Token(Token = "0x4000185")]
	[FieldOffset(Offset = "0x330")]
	private int m_FirstVisibleCharacterOfLine;

	[Token(Token = "0x4000186")]
	[FieldOffset(Offset = "0x334")]
	private int m_LastVisibleCharacterOfLine;

	[Token(Token = "0x4000187")]
	[FieldOffset(Offset = "0x338")]
	private float m_MaxLineAscender;

	[Token(Token = "0x4000188")]
	[FieldOffset(Offset = "0x33C")]
	private float m_MaxLineDescender;

	[Token(Token = "0x4000189")]
	[FieldOffset(Offset = "0x340")]
	private int m_LineNumber;

	[Token(Token = "0x400018A")]
	[FieldOffset(Offset = "0x344")]
	private int m_LineVisibleCharacterCount;

	[Token(Token = "0x400018B")]
	[FieldOffset(Offset = "0x348")]
	private int m_LineVisibleSpaceCount;

	[Token(Token = "0x400018C")]
	[FieldOffset(Offset = "0x34C")]
	private int m_FirstOverflowCharacterIndex;

	[Token(Token = "0x400018D")]
	[FieldOffset(Offset = "0x350")]
	private int m_PageNumber;

	[Token(Token = "0x400018E")]
	[FieldOffset(Offset = "0x354")]
	private float m_MarginLeft;

	[Token(Token = "0x400018F")]
	[FieldOffset(Offset = "0x358")]
	private float m_MarginRight;

	[Token(Token = "0x4000190")]
	[FieldOffset(Offset = "0x35C")]
	private float m_Width;

	[Token(Token = "0x4000191")]
	[FieldOffset(Offset = "0x360")]
	private Extents m_MeshExtents;

	[Token(Token = "0x4000192")]
	[FieldOffset(Offset = "0x370")]
	private float m_MaxCapHeight;

	[Token(Token = "0x4000193")]
	[FieldOffset(Offset = "0x374")]
	private float m_MaxAscender;

	[Token(Token = "0x4000194")]
	[FieldOffset(Offset = "0x378")]
	private float m_MaxDescender;

	[Token(Token = "0x4000195")]
	[FieldOffset(Offset = "0x37C")]
	private bool m_IsNewPage;

	[Token(Token = "0x4000196")]
	[FieldOffset(Offset = "0x37D")]
	private bool m_IsNonBreakingSpace;

	[Token(Token = "0x4000197")]
	[FieldOffset(Offset = "0x380")]
	private WordWrapState m_SavedWordWrapState;

	[Token(Token = "0x4000198")]
	[FieldOffset(Offset = "0x718")]
	private WordWrapState m_SavedLineState;

	[Token(Token = "0x4000199")]
	[FieldOffset(Offset = "0xAB0")]
	private WordWrapState m_SavedEllipsisState;

	[Token(Token = "0x400019A")]
	[FieldOffset(Offset = "0xE48")]
	private WordWrapState m_SavedLastValidState;

	[Token(Token = "0x400019B")]
	[FieldOffset(Offset = "0x11E0")]
	private WordWrapState m_SavedSoftLineBreakState;

	[Token(Token = "0x400019C")]
	[FieldOffset(Offset = "0x1578")]
	private TextElementType m_TextElementType;

	[Token(Token = "0x400019D")]
	[FieldOffset(Offset = "0x1579")]
	private bool m_isTextLayoutPhase;

	[Token(Token = "0x400019E")]
	[FieldOffset(Offset = "0x157C")]
	private int m_SpriteIndex;

	[Token(Token = "0x400019F")]
	[FieldOffset(Offset = "0x1580")]
	private Color32 m_SpriteColor;

	[Token(Token = "0x40001A0")]
	[FieldOffset(Offset = "0x1588")]
	private TextElement m_CachedTextElement;

	[Token(Token = "0x40001A1")]
	[FieldOffset(Offset = "0x1590")]
	private Color32 m_HighlightColor;

	[Token(Token = "0x40001A2")]
	[FieldOffset(Offset = "0x1594")]
	private float m_CharWidthAdjDelta;

	[Token(Token = "0x40001A3")]
	[FieldOffset(Offset = "0x1598")]
	private float m_MaxFontSize;

	[Token(Token = "0x40001A4")]
	[FieldOffset(Offset = "0x159C")]
	private float m_MinFontSize;

	[Token(Token = "0x40001A5")]
	[FieldOffset(Offset = "0x15A0")]
	private int m_AutoSizeIterationCount;

	[Token(Token = "0x40001A6")]
	[FieldOffset(Offset = "0x15A4")]
	private int m_AutoSizeMaxIterationCount;

	[Token(Token = "0x40001A7")]
	[FieldOffset(Offset = "0x15A8")]
	private bool m_IsAutoSizePointSizeSet;

	[Token(Token = "0x40001A8")]
	[FieldOffset(Offset = "0x15AC")]
	private float m_StartOfLineAscender;

	[Token(Token = "0x40001A9")]
	[FieldOffset(Offset = "0x15B0")]
	private float m_LineSpacingDelta;

	[Token(Token = "0x40001AA")]
	[FieldOffset(Offset = "0x15B8")]
	private MaterialReference[] m_MaterialReferences;

	[Token(Token = "0x40001AB")]
	[FieldOffset(Offset = "0x15C0")]
	private int m_SpriteCount;

	[Token(Token = "0x40001AC")]
	[FieldOffset(Offset = "0x15C8")]
	private TextProcessingStack<int> m_StyleStack;

	[Token(Token = "0x40001AD")]
	[FieldOffset(Offset = "0x15E8")]
	private TextProcessingStack<WordWrapState> m_EllipsisInsertionCandidateStack;

	[Token(Token = "0x40001AE")]
	[FieldOffset(Offset = "0x19A0")]
	private int m_SpriteAnimationId;

	[Token(Token = "0x40001AF")]
	[FieldOffset(Offset = "0x19A4")]
	private int m_ItalicAngle;

	[Token(Token = "0x40001B0")]
	[FieldOffset(Offset = "0x19A8")]
	private Vector3 m_FXScale;

	[Token(Token = "0x40001B1")]
	[FieldOffset(Offset = "0x19B4")]
	private Quaternion m_FXRotation;

	[Token(Token = "0x40001B2")]
	[FieldOffset(Offset = "0x19C4")]
	private int m_LastBaseGlyphIndex;

	[Token(Token = "0x40001B3")]
	[FieldOffset(Offset = "0x19C8")]
	private float m_PageAscender;

	[Token(Token = "0x40001B4")]
	[FieldOffset(Offset = "0x19D0")]
	private RichTextTagAttribute[] m_XmlAttribute;

	[Token(Token = "0x40001B5")]
	[FieldOffset(Offset = "0x19D8")]
	private float[] m_AttributeParameterValues;

	[Token(Token = "0x40001B6")]
	[FieldOffset(Offset = "0x19E0")]
	private Dictionary<int, int> m_MaterialReferenceIndexLookup;

	[Token(Token = "0x40001B7")]
	[FieldOffset(Offset = "0x19E8")]
	private bool m_IsCalculatingPreferredValues;

	[Token(Token = "0x40001B8")]
	[FieldOffset(Offset = "0x19F0")]
	private SpriteAsset m_DefaultSpriteAsset;

	[Token(Token = "0x40001B9")]
	[FieldOffset(Offset = "0x19F8")]
	private bool m_TintSprite;

	[Token(Token = "0x40001BA")]
	[FieldOffset(Offset = "0x1A00")]
	protected SpecialCharacter m_Ellipsis;

	[Token(Token = "0x40001BB")]
	[FieldOffset(Offset = "0x1A20")]
	protected SpecialCharacter m_Underline;

	[Token(Token = "0x40001BC")]
	[FieldOffset(Offset = "0x1A40")]
	private TextElementInfo[] m_InternalTextElementInfo;

	[Token(Token = "0x17000031")]
	public static bool isTextTruncated
	{
		[Token(Token = "0x60000FB")]
		[Address(RVA = "0x4EC9620", Offset = "0x4EC9620", VA = "0x4EC9620")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x4EC8360", Offset = "0x4EC8360", VA = "0x4EC8360")]
	private static TextGenerator GetTextGenerator()
	{
		return null;
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x4EC8E00", Offset = "0x4EC8E00", VA = "0x4EC8E00")]
	public static void GenerateText(TextGenerationSettings settings, TextInfo textInfo)
	{
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x4EC92F0", Offset = "0x4EC92F0", VA = "0x4EC92F0")]
	public static Vector2 GetPreferredValues(TextGenerationSettings settings, TextInfo textInfo)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000FC")]
	[Address(RVA = "0x4EC9080", Offset = "0x4EC9080", VA = "0x4EC9080")]
	private void Prepare(TextGenerationSettings generationSettings, TextInfo textInfo)
	{
	}

	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x4EBDC10", Offset = "0x4EBDC10", VA = "0x4EBDC10")]
	private void GenerateTextMesh(TextGenerationSettings generationSettings, TextInfo textInfo)
	{
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x4ECC320", Offset = "0x4ECC320", VA = "0x4ECC320")]
	private void SaveWordWrappingState(ref WordWrapState state, int index, int count, TextInfo textInfo)
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x4ECC8C0", Offset = "0x4ECC8C0", VA = "0x4ECC8C0")]
	protected int RestoreWordWrappingState(ref WordWrapState state, TextInfo textInfo)
	{
		return default(int);
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x4ECCE60", Offset = "0x4ECCE60", VA = "0x4ECCE60")]
	protected bool ValidateHtmlTag(TextProcessingElement[] chars, int startIndex, out int endIndex, TextGenerationSettings generationSettings, TextInfo textInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x4ED2820", Offset = "0x4ED2820", VA = "0x4ED2820")]
	private void SaveGlyphVertexInfo(float padding, float stylePadding, Color32 vertexColor, TextGenerationSettings generationSettings, TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x4ED3680", Offset = "0x4ED3680", VA = "0x4ED3680")]
	private void SaveSpriteVertexInfo(Color32 vertexColor, TextGenerationSettings generationSettings, TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x4ED40C0", Offset = "0x4ED40C0", VA = "0x4ED40C0")]
	private void DrawUnderlineMesh(Vector3 start, Vector3 end, float startScale, float endScale, float maxScale, float sdfScale, Color32 underlineColor, TextGenerationSettings generationSettings, TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x4ED5C70", Offset = "0x4ED5C70", VA = "0x4ED5C70")]
	private void DrawTextHighlight(Vector3 start, Vector3 end, Color32 highlightColor, TextGenerationSettings generationSettings, TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x4ED6640", Offset = "0x4ED6640", VA = "0x4ED6640")]
	private static void ClearMesh(bool updateMesh, TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x4ECA650", Offset = "0x4ECA650", VA = "0x4ECA650")]
	internal int SetArraySizes(TextProcessingElement[] textProcessingArray, TextGenerationSettings generationSettings, TextInfo textInfo)
	{
		return default(int);
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x4ED6860", Offset = "0x4ED6860", VA = "0x4ED6860")]
	internal TextElement GetTextElement(TextGenerationSettings generationSettings, uint unicode, FontAsset fontAsset, FontStyles fontStyle, TextFontWeight fontWeight, out bool isUsingAlternativeTypeface)
	{
		return null;
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x4EC9690", Offset = "0x4EC9690", VA = "0x4EC9690")]
	private void ComputeMarginSize(Rect rect, Vector4 margins)
	{
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x4EC9660", Offset = "0x4EC9660", VA = "0x4EC9660")]
	protected void GetSpecialCharacters(TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x4ED6660", Offset = "0x4ED6660", VA = "0x4ED6660")]
	protected void GetEllipsisSpecialCharacter(TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x4ED5BC0", Offset = "0x4ED5BC0", VA = "0x4ED5BC0")]
	protected void GetUnderlineSpecialCharacter(TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x4EC94A0", Offset = "0x4EC94A0", VA = "0x4EC94A0")]
	private Vector2 GetPreferredValuesInternal(TextGenerationSettings generationSettings, TextInfo textInfo)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x4ED6C40", Offset = "0x4ED6C40", VA = "0x4ED6C40", Slot = "4")]
	protected virtual Vector2 CalculatePreferredValues(ref float fontSize, Vector2 marginSize, bool isTextAutoSizingEnabled, TextWrappingMode textWrapMode, TextGenerationSettings generationSettings, TextInfo textInfo)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x4EC9720", Offset = "0x4EC9720", VA = "0x4EC9720")]
	private void PopulateTextBackingArray(string sourceText)
	{
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x4EDAE80", Offset = "0x4EDAE80", VA = "0x4EDAE80")]
	private void PopulateTextBackingArray(string sourceText, int start, int length)
	{
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x4EC9740", Offset = "0x4EC9740", VA = "0x4EC9740")]
	private void PopulateTextProcessingArray(TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x4EDAF60", Offset = "0x4EDAF60", VA = "0x4EDAF60")]
	private void InsertNewLine(int i, float baseScale, float currentElementScale, float currentEmScale, float boldSpacingAdjustment, float characterSpacingAdjustment, float width, float lineGap, ref bool isMaxVisibleDescenderSet, ref float maxVisibleDescender, TextGenerationSettings generationSettings, TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x4ED6BC0", Offset = "0x4ED6BC0", VA = "0x4ED6BC0")]
	protected void DoMissingGlyphCallback(uint unicode, int stringIndex, FontAsset fontAsset, TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x4ED27B0", Offset = "0x4ED27B0", VA = "0x4ED27B0")]
	private void ClearMarkupTagAttributes()
	{
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x4EC83E0", Offset = "0x4EC83E0", VA = "0x4EC83E0")]
	public TextGenerator()
	{
	}
}
