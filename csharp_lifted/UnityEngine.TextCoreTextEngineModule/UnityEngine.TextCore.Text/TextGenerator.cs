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
using UnityEngine.Bindings;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000048")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
internal class TextGenerator
{
	[Token(Token = "0x2000049")]
	public delegate void MissingCharacterEventCallback(uint unicode, int stringIndex, TextInfo text, FontAsset fontAsset);

	[Token(Token = "0x200004A")]
	protected struct SpecialCharacter
	{
		[Token(Token = "0x40002C7")]
		[FieldOffset(Offset = "0x0")]
		public Character character;

		[Token(Token = "0x40002C8")]
		[FieldOffset(Offset = "0x8")]
		public FontAsset fontAsset;

		[Token(Token = "0x40002C9")]
		[FieldOffset(Offset = "0x10")]
		public Material material;

		[Token(Token = "0x40002CA")]
		[FieldOffset(Offset = "0x18")]
		public int materialIndex;

		[Token(Token = "0x6000229")]
		[Address(RVA = "0x6A45EA0", Offset = "0x6A44EA0", VA = "0x6A45EA0")]
		public SpecialCharacter(Character character, int materialIndex)
		{
		}
	}

	[Token(Token = "0x4000221")]
	private const int k_Tab = 9;

	[Token(Token = "0x4000222")]
	private const int k_LineFeed = 10;

	[Token(Token = "0x4000223")]
	private const int k_VerticalTab = 11;

	[Token(Token = "0x4000224")]
	private const int k_CarriageReturn = 13;

	[Token(Token = "0x4000225")]
	private const int k_Space = 32;

	[Token(Token = "0x4000226")]
	private const int k_DoubleQuotes = 34;

	[Token(Token = "0x4000227")]
	private const int k_NumberSign = 35;

	[Token(Token = "0x4000228")]
	private const int k_PercentSign = 37;

	[Token(Token = "0x4000229")]
	private const int k_SingleQuote = 39;

	[Token(Token = "0x400022A")]
	private const int k_Plus = 43;

	[Token(Token = "0x400022B")]
	private const int k_Period = 46;

	[Token(Token = "0x400022C")]
	private const int k_LesserThan = 60;

	[Token(Token = "0x400022D")]
	private const int k_Equal = 61;

	[Token(Token = "0x400022E")]
	private const int k_GreaterThan = 62;

	[Token(Token = "0x400022F")]
	private const int k_Underline = 95;

	[Token(Token = "0x4000230")]
	private const int k_NoBreakSpace = 160;

	[Token(Token = "0x4000231")]
	private const int k_SoftHyphen = 173;

	[Token(Token = "0x4000232")]
	private const int k_HyphenMinus = 45;

	[Token(Token = "0x4000233")]
	private const int k_FigureSpace = 8199;

	[Token(Token = "0x4000234")]
	private const int k_Hyphen = 8208;

	[Token(Token = "0x4000235")]
	private const int k_NonBreakingHyphen = 8209;

	[Token(Token = "0x4000236")]
	private const int k_ZeroWidthSpace = 8203;

	[Token(Token = "0x4000237")]
	private const int k_NarrowNoBreakSpace = 8239;

	[Token(Token = "0x4000238")]
	private const int k_WordJoiner = 8288;

	[Token(Token = "0x4000239")]
	private const int k_HorizontalEllipsis = 8230;

	[Token(Token = "0x400023A")]
	private const int k_LineSeparator = 8232;

	[Token(Token = "0x400023B")]
	private const int k_ParagraphSeparator = 8233;

	[Token(Token = "0x400023C")]
	private const int k_RightSingleQuote = 8217;

	[Token(Token = "0x400023D")]
	private const int k_Square = 9633;

	[Token(Token = "0x400023E")]
	private const int k_HangulJamoStart = 4352;

	[Token(Token = "0x400023F")]
	private const int k_HangulJamoEnd = 4607;

	[Token(Token = "0x4000240")]
	private const int k_CjkStart = 11904;

	[Token(Token = "0x4000241")]
	private const int k_CjkEnd = 40959;

	[Token(Token = "0x4000242")]
	private const int k_HangulJameExtendedStart = 43360;

	[Token(Token = "0x4000243")]
	private const int k_HangulJameExtendedEnd = 43391;

	[Token(Token = "0x4000244")]
	private const int k_HangulSyllablesStart = 44032;

	[Token(Token = "0x4000245")]
	private const int k_HangulSyllablesEnd = 55295;

	[Token(Token = "0x4000246")]
	private const int k_CjkIdeographsStart = 63744;

	[Token(Token = "0x4000247")]
	private const int k_CjkIdeographsEnd = 64255;

	[Token(Token = "0x4000248")]
	private const int k_CjkFormsStart = 65072;

	[Token(Token = "0x4000249")]
	private const int k_CjkFormsEnd = 65103;

	[Token(Token = "0x400024A")]
	private const int k_CjkHalfwidthStart = 65280;

	[Token(Token = "0x400024B")]
	private const int k_CjkHalfwidthEnd = 65519;

	[Token(Token = "0x400024C")]
	private const int k_EndOfText = 3;

	[Token(Token = "0x400024D")]
	private const float k_FloatUnset = -32767f;

	[Token(Token = "0x400024E")]
	private const int k_MaxCharacters = 8;

	[Token(Token = "0x400024F")]
	[FieldOffset(Offset = "0x0")]
	private static TextGenerator s_TextGenerator;

	[Token(Token = "0x4000251")]
	[FieldOffset(Offset = "0x10")]
	private TextBackingContainer m_TextBackingArray;

	[Token(Token = "0x4000252")]
	[FieldOffset(Offset = "0x20")]
	internal TextProcessingElement[] m_TextProcessingArray;

	[Token(Token = "0x4000253")]
	[FieldOffset(Offset = "0x28")]
	internal int m_InternalTextProcessingArraySize;

	[Token(Token = "0x4000254")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	protected bool m_VertexBufferAutoSizeReduction;

	[Token(Token = "0x4000255")]
	[FieldOffset(Offset = "0x30")]
	private char[] m_HtmlTag;

	[Token(Token = "0x4000256")]
	[FieldOffset(Offset = "0x38")]
	internal HighlightState m_HighlightState;

	[Token(Token = "0x4000257")]
	[FieldOffset(Offset = "0x4C")]
	protected bool m_IsIgnoringAlignment;

	[Token(Token = "0x4000258")]
	[FieldOffset(Offset = "0x4D")]
	protected bool m_IsTextTruncated;

	[Token(Token = "0x4000259")]
	[FieldOffset(Offset = "0x10")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static MissingCharacterEventCallback OnMissingCharacter;

	[Token(Token = "0x400025A")]
	[FieldOffset(Offset = "0x50")]
	private Vector3[] m_RectTransformCorners;

	[Token(Token = "0x400025B")]
	[FieldOffset(Offset = "0x58")]
	private float m_MarginWidth;

	[Token(Token = "0x400025C")]
	[FieldOffset(Offset = "0x5C")]
	private float m_MarginHeight;

	[Token(Token = "0x400025D")]
	[FieldOffset(Offset = "0x60")]
	private float m_PreferredWidth;

	[Token(Token = "0x400025E")]
	[FieldOffset(Offset = "0x64")]
	private float m_PreferredHeight;

	[Token(Token = "0x400025F")]
	[FieldOffset(Offset = "0x68")]
	private FontAsset m_CurrentFontAsset;

	[Token(Token = "0x4000260")]
	[FieldOffset(Offset = "0x70")]
	private Material m_CurrentMaterial;

	[Token(Token = "0x4000261")]
	[FieldOffset(Offset = "0x78")]
	private int m_CurrentMaterialIndex;

	[Token(Token = "0x4000262")]
	[FieldOffset(Offset = "0x80")]
	private TextProcessingStack<MaterialReference> m_MaterialReferenceStack;

	[Token(Token = "0x4000263")]
	[FieldOffset(Offset = "0xD8")]
	private float m_Padding;

	[Token(Token = "0x4000264")]
	[FieldOffset(Offset = "0xE0")]
	private SpriteAsset m_CurrentSpriteAsset;

	[Token(Token = "0x4000265")]
	[FieldOffset(Offset = "0xE8")]
	private int m_TotalCharacterCount;

	[Token(Token = "0x4000266")]
	[FieldOffset(Offset = "0xEC")]
	private float m_FontSize;

	[Token(Token = "0x4000267")]
	[FieldOffset(Offset = "0xF0")]
	private float m_FontScaleMultiplier;

	[Token(Token = "0x4000268")]
	[FieldOffset(Offset = "0xF4")]
	private bool m_ShouldRenderBitmap;

	[Token(Token = "0x4000269")]
	[FieldOffset(Offset = "0xF8")]
	private float m_CurrentFontSize;

	[Token(Token = "0x400026A")]
	[FieldOffset(Offset = "0x100")]
	private TextProcessingStack<float> m_SizeStack;

	[Token(Token = "0x400026B")]
	[FieldOffset(Offset = "0x120")]
	protected TextProcessingStack<int>[] m_TextStyleStacks;

	[Token(Token = "0x400026C")]
	[FieldOffset(Offset = "0x128")]
	protected int m_TextStyleStackDepth;

	[Token(Token = "0x400026D")]
	[FieldOffset(Offset = "0x12C")]
	private FontStyles m_FontStyleInternal;

	[Token(Token = "0x400026E")]
	[FieldOffset(Offset = "0x130")]
	private FontStyleStack m_FontStyleStack;

	[Token(Token = "0x400026F")]
	[FieldOffset(Offset = "0x13C")]
	private TextFontWeight m_FontWeightInternal;

	[Token(Token = "0x4000270")]
	[FieldOffset(Offset = "0x140")]
	private TextProcessingStack<TextFontWeight> m_FontWeightStack;

	[Token(Token = "0x4000271")]
	[FieldOffset(Offset = "0x160")]
	private TextAlignment m_LineJustification;

	[Token(Token = "0x4000272")]
	[FieldOffset(Offset = "0x168")]
	private TextProcessingStack<TextAlignment> m_LineJustificationStack;

	[Token(Token = "0x4000273")]
	[FieldOffset(Offset = "0x188")]
	private float _m_BaselineOffset;

	[Token(Token = "0x4000274")]
	[FieldOffset(Offset = "0x190")]
	private TextProcessingStack<float> m_BaselineOffsetStack;

	[Token(Token = "0x4000275")]
	[FieldOffset(Offset = "0x1B0")]
	private Color32 m_FontColor32;

	[Token(Token = "0x4000276")]
	[FieldOffset(Offset = "0x1B4")]
	private Color32 m_HtmlColor;

	[Token(Token = "0x4000277")]
	[FieldOffset(Offset = "0x1B8")]
	private Color32 m_UnderlineColor;

	[Token(Token = "0x4000278")]
	[FieldOffset(Offset = "0x1BC")]
	private Color32 m_StrikethroughColor;

	[Token(Token = "0x4000279")]
	[FieldOffset(Offset = "0x1C0")]
	private TextProcessingStack<Color32> m_ColorStack;

	[Token(Token = "0x400027A")]
	[FieldOffset(Offset = "0x1E0")]
	private TextProcessingStack<Color32> m_UnderlineColorStack;

	[Token(Token = "0x400027B")]
	[FieldOffset(Offset = "0x200")]
	private TextProcessingStack<Color32> m_StrikethroughColorStack;

	[Token(Token = "0x400027C")]
	[FieldOffset(Offset = "0x220")]
	private TextProcessingStack<Color32> m_HighlightColorStack;

	[Token(Token = "0x400027D")]
	[FieldOffset(Offset = "0x240")]
	private TextProcessingStack<HighlightState> m_HighlightStateStack;

	[Token(Token = "0x400027E")]
	[FieldOffset(Offset = "0x270")]
	private TextProcessingStack<int> m_ItalicAngleStack;

	[Token(Token = "0x400027F")]
	[FieldOffset(Offset = "0x290")]
	private TextColorGradient m_ColorGradientPreset;

	[Token(Token = "0x4000280")]
	[FieldOffset(Offset = "0x298")]
	private TextProcessingStack<TextColorGradient> m_ColorGradientStack;

	[Token(Token = "0x4000281")]
	[FieldOffset(Offset = "0x2C0")]
	private bool m_ColorGradientPresetIsTinted;

	[Token(Token = "0x4000282")]
	[FieldOffset(Offset = "0x2C8")]
	private TextProcessingStack<int> m_ActionStack;

	[Token(Token = "0x4000283")]
	[FieldOffset(Offset = "0x2E8")]
	private float _m_LineOffset;

	[Token(Token = "0x4000284")]
	[FieldOffset(Offset = "0x2EC")]
	private float _m_LineHeight;

	[Token(Token = "0x4000285")]
	[FieldOffset(Offset = "0x2F0")]
	private bool m_IsDrivenLineSpacing;

	[Token(Token = "0x4000286")]
	[FieldOffset(Offset = "0x2F4")]
	private float m_CSpacing;

	[Token(Token = "0x4000287")]
	[FieldOffset(Offset = "0x2F8")]
	private float m_MonoSpacing;

	[Token(Token = "0x4000288")]
	[FieldOffset(Offset = "0x2FC")]
	private bool m_DuoSpace;

	[Token(Token = "0x4000289")]
	[FieldOffset(Offset = "0x300")]
	private float _m_XAdvance;

	[Token(Token = "0x400028A")]
	[FieldOffset(Offset = "0x304")]
	private float m_TagLineIndent;

	[Token(Token = "0x400028B")]
	[FieldOffset(Offset = "0x308")]
	private float m_TagIndent;

	[Token(Token = "0x400028C")]
	[FieldOffset(Offset = "0x310")]
	private TextProcessingStack<float> m_IndentStack;

	[Token(Token = "0x400028D")]
	[FieldOffset(Offset = "0x330")]
	private bool m_TagNoParsing;

	[Token(Token = "0x400028E")]
	[FieldOffset(Offset = "0x334")]
	private int m_CharacterCount;

	[Token(Token = "0x400028F")]
	[FieldOffset(Offset = "0x338")]
	private int m_FirstCharacterOfLine;

	[Token(Token = "0x4000290")]
	[FieldOffset(Offset = "0x33C")]
	private int m_LastCharacterOfLine;

	[Token(Token = "0x4000291")]
	[FieldOffset(Offset = "0x340")]
	private int m_FirstVisibleCharacterOfLine;

	[Token(Token = "0x4000292")]
	[FieldOffset(Offset = "0x344")]
	private int m_LastVisibleCharacterOfLine;

	[Token(Token = "0x4000293")]
	[FieldOffset(Offset = "0x348")]
	private float m_MaxLineAscender;

	[Token(Token = "0x4000294")]
	[FieldOffset(Offset = "0x34C")]
	private float m_MaxLineDescender;

	[Token(Token = "0x4000295")]
	[FieldOffset(Offset = "0x350")]
	private int m_LineNumber;

	[Token(Token = "0x4000296")]
	[FieldOffset(Offset = "0x354")]
	private int m_LineVisibleCharacterCount;

	[Token(Token = "0x4000297")]
	[FieldOffset(Offset = "0x358")]
	private int m_LineVisibleSpaceCount;

	[Token(Token = "0x4000298")]
	[FieldOffset(Offset = "0x35C")]
	private int m_FirstOverflowCharacterIndex;

	[Token(Token = "0x4000299")]
	[FieldOffset(Offset = "0x360")]
	private float m_MarginLeft;

	[Token(Token = "0x400029A")]
	[FieldOffset(Offset = "0x364")]
	private float m_MarginRight;

	[Token(Token = "0x400029B")]
	[FieldOffset(Offset = "0x368")]
	private float m_Width;

	[Token(Token = "0x400029C")]
	[FieldOffset(Offset = "0x36C")]
	private Extents m_MeshExtents;

	[Token(Token = "0x400029D")]
	[FieldOffset(Offset = "0x37C")]
	private float m_MaxCapHeight;

	[Token(Token = "0x400029E")]
	[FieldOffset(Offset = "0x380")]
	private float m_MaxAscender;

	[Token(Token = "0x400029F")]
	[FieldOffset(Offset = "0x384")]
	private float m_MaxDescender;

	[Token(Token = "0x40002A0")]
	[FieldOffset(Offset = "0x388")]
	private bool m_IsNonBreakingSpace;

	[Token(Token = "0x40002A1")]
	[FieldOffset(Offset = "0x390")]
	private WordWrapState m_SavedWordWrapState;

	[Token(Token = "0x40002A2")]
	[FieldOffset(Offset = "0x728")]
	private WordWrapState m_SavedLineState;

	[Token(Token = "0x40002A3")]
	[FieldOffset(Offset = "0xAC0")]
	private WordWrapState m_SavedEllipsisState;

	[Token(Token = "0x40002A4")]
	[FieldOffset(Offset = "0xE58")]
	private WordWrapState m_SavedLastValidState;

	[Token(Token = "0x40002A5")]
	[FieldOffset(Offset = "0x11F0")]
	private WordWrapState m_SavedSoftLineBreakState;

	[Token(Token = "0x40002A6")]
	[FieldOffset(Offset = "0x1588")]
	private TextElementType m_TextElementType;

	[Token(Token = "0x40002A7")]
	[FieldOffset(Offset = "0x1589")]
	private bool m_isTextLayoutPhase;

	[Token(Token = "0x40002A8")]
	[FieldOffset(Offset = "0x158C")]
	private int m_SpriteIndex;

	[Token(Token = "0x40002A9")]
	[FieldOffset(Offset = "0x1590")]
	private Color32 m_SpriteColor;

	[Token(Token = "0x40002AA")]
	[FieldOffset(Offset = "0x1598")]
	private TextElement m_CachedTextElement;

	[Token(Token = "0x40002AB")]
	[FieldOffset(Offset = "0x15A0")]
	private Color32 m_HighlightColor;

	[Token(Token = "0x40002AC")]
	[FieldOffset(Offset = "0x15A4")]
	private float m_CharWidthAdjDelta;

	[Token(Token = "0x40002AD")]
	[FieldOffset(Offset = "0x15A8")]
	private float m_MaxFontSize;

	[Token(Token = "0x40002AE")]
	[FieldOffset(Offset = "0x15AC")]
	private float m_MinFontSize;

	[Token(Token = "0x40002AF")]
	[FieldOffset(Offset = "0x15B0")]
	private int m_AutoSizeIterationCount;

	[Token(Token = "0x40002B0")]
	[FieldOffset(Offset = "0x15B4")]
	private int m_AutoSizeMaxIterationCount;

	[Token(Token = "0x40002B1")]
	[FieldOffset(Offset = "0x15B8")]
	private float m_StartOfLineAscender;

	[Token(Token = "0x40002B2")]
	[FieldOffset(Offset = "0x15BC")]
	private float m_LineSpacingDelta;

	[Token(Token = "0x40002B3")]
	[FieldOffset(Offset = "0x15C0")]
	internal MaterialReference[] m_MaterialReferences;

	[Token(Token = "0x40002B4")]
	[FieldOffset(Offset = "0x15C8")]
	private int m_SpriteCount;

	[Token(Token = "0x40002B5")]
	[FieldOffset(Offset = "0x15D0")]
	private TextProcessingStack<int> m_StyleStack;

	[Token(Token = "0x40002B6")]
	[FieldOffset(Offset = "0x15F0")]
	private TextProcessingStack<WordWrapState> m_EllipsisInsertionCandidateStack;

	[Token(Token = "0x40002B7")]
	[FieldOffset(Offset = "0x19A8")]
	private int m_SpriteAnimationId;

	[Token(Token = "0x40002B8")]
	[FieldOffset(Offset = "0x19AC")]
	private int m_ItalicAngle;

	[Token(Token = "0x40002B9")]
	[FieldOffset(Offset = "0x19B0")]
	private Vector3 m_FXScale;

	[Token(Token = "0x40002BA")]
	[FieldOffset(Offset = "0x19BC")]
	private Quaternion m_FXRotation;

	[Token(Token = "0x40002BB")]
	[FieldOffset(Offset = "0x19CC")]
	private int m_LastBaseGlyphIndex;

	[Token(Token = "0x40002BC")]
	[FieldOffset(Offset = "0x19D0")]
	private float m_PageAscender;

	[Token(Token = "0x40002BD")]
	[FieldOffset(Offset = "0x19D8")]
	private RichTextTagAttribute[] m_XmlAttribute;

	[Token(Token = "0x40002BE")]
	[FieldOffset(Offset = "0x19E0")]
	private float[] m_AttributeParameterValues;

	[Token(Token = "0x40002BF")]
	[FieldOffset(Offset = "0x19E8")]
	private Dictionary<int, int> m_MaterialReferenceIndexLookup;

	[Token(Token = "0x40002C0")]
	[FieldOffset(Offset = "0x19F0")]
	private bool m_IsCalculatingPreferredValues;

	[Token(Token = "0x40002C1")]
	[FieldOffset(Offset = "0x19F1")]
	private bool m_TintSprite;

	[Token(Token = "0x40002C2")]
	[FieldOffset(Offset = "0x19F8")]
	protected SpecialCharacter m_Ellipsis;

	[Token(Token = "0x40002C3")]
	[FieldOffset(Offset = "0x1A18")]
	protected SpecialCharacter m_Underline;

	[Token(Token = "0x40002C4")]
	[FieldOffset(Offset = "0x1A38")]
	private TextElementInfo[] m_InternalTextElementInfo;

	[Token(Token = "0x40002C5")]
	[FieldOffset(Offset = "0x18")]
	internal static readonly bool EnableTextAlignmentAssertions;

	[Token(Token = "0x40002C6")]
	[FieldOffset(Offset = "0x19")]
	internal static readonly bool EnableCheckerboardPattern;

	[Token(Token = "0x17000064")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static bool IsExecutingJob
	{
		[Token(Token = "0x60001F6")]
		[Address(RVA = "0x6A1F470", Offset = "0x6A1E470", VA = "0x6A1F470")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001F7")]
		[Address(RVA = "0x6A1F4B0", Offset = "0x6A1E4B0", VA = "0x6A1F4B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000065")]
	public bool isTextTruncated
	{
		[Token(Token = "0x60001F9")]
		[Address(RVA = "0x6A20060", Offset = "0x6A1F060", VA = "0x6A20060")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000066")]
	private float m_BaselineOffset
	{
		[Token(Token = "0x60001FA")]
		[Address(RVA = "0x6A20070", Offset = "0x6A1F070", VA = "0x6A20070")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x6A20080", Offset = "0x6A1F080", VA = "0x6A20080")]
		set
		{
		}
	}

	[Token(Token = "0x17000067")]
	private float m_LineOffset
	{
		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x6A200D0", Offset = "0x6A1F0D0", VA = "0x6A200D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001FD")]
		[Address(RVA = "0x6A200E0", Offset = "0x6A1F0E0", VA = "0x6A200E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000068")]
	private float m_LineHeight
	{
		[Token(Token = "0x60001FE")]
		[Address(RVA = "0x6A20110", Offset = "0x6A1F110", VA = "0x6A20110")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001FF")]
		[Address(RVA = "0x6A20120", Offset = "0x6A1F120", VA = "0x6A20120")]
		set
		{
		}
	}

	[Token(Token = "0x17000069")]
	private float m_XAdvance
	{
		[Token(Token = "0x6000200")]
		[Address(RVA = "0x6A20150", Offset = "0x6A1F150", VA = "0x6A20150")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000201")]
		[Address(RVA = "0x6A20160", Offset = "0x6A1F160", VA = "0x6A20160")]
		set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	private bool NeedToRound
	{
		[Token(Token = "0x6000211")]
		[Address(RVA = "0x6A32D90", Offset = "0x6A31D90", VA = "0x6A32D90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x6A1F4F0", Offset = "0x6A1E4F0", VA = "0x6A1F4F0")]
	public void GenerateText(TextGenerationSettings settings, TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x6A1F940", Offset = "0x6A1E940", VA = "0x6A1F940")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal void GenerateTextMesh(TextGenerationSettings generationSettings, TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x6A29950", Offset = "0x6A28950", VA = "0x6A29950")]
	private bool ValidateHtmlTag(TextProcessingElement[] chars, int startIndex, out int endIndex, TextGenerationSettings generationSettings, TextInfo textInfo, out bool isThreadSuccess)
	{
		return default(bool);
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x6A2F1D0", Offset = "0x6A2E1D0", VA = "0x6A2F1D0")]
	internal void CloseLastLinkTag(TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x6A2F280", Offset = "0x6A2E280", VA = "0x6A2F280")]
	internal void CloseAllLinkTags(TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x6A2F230", Offset = "0x6A2E230", VA = "0x6A2F230")]
	private void CloseLinkTag(TextInfo textInfo, int index)
	{
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x6A2F160", Offset = "0x6A2E160", VA = "0x6A2F160")]
	private void ClearMarkupTagAttributes()
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x6A2F2F0", Offset = "0x6A2E2F0", VA = "0x6A2F2F0")]
	private void SaveWordWrappingState(ref WordWrapState state, int index, int count, TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x6A2F8A0", Offset = "0x6A2E8A0", VA = "0x6A2F8A0")]
	private int RestoreWordWrappingState(ref WordWrapState state, TextInfo textInfo)
	{
		return default(int);
	}

	[Token(Token = "0x600020A")]
	[Address(RVA = "0x6A2FE60", Offset = "0x6A2EE60", VA = "0x6A2FE60")]
	private void SaveGlyphVertexInfo(float padding, float stylePadding, Color32 vertexColor, TextGenerationSettings generationSettings, TextInfo textInfo)
	{
	}

	[Token(Token = "0x600020B")]
	[Address(RVA = "0x6A30810", Offset = "0x6A2F810", VA = "0x6A30810")]
	private void SaveSpriteVertexInfo(Color32 vertexColor, TextGenerationSettings generationSettings, TextInfo textInfo)
	{
	}

	[Token(Token = "0x600020C")]
	[Address(RVA = "0x6A30ED0", Offset = "0x6A2FED0", VA = "0x6A30ED0")]
	private void EnsureMeshInfoCapacityForMaterialReferences(TextInfo textInfo, TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x600020D")]
	[Address(RVA = "0x6A311B0", Offset = "0x6A301B0", VA = "0x6A311B0")]
	private void DrawUnderlineMesh(Vector3 start, Vector3 end, float startScale, float endScale, float maxScale, float sdfScale, Color32 underlineColor, TextGenerationSettings generationSettings, TextInfo textInfo)
	{
	}

	[Token(Token = "0x600020E")]
	[Address(RVA = "0x6A327E0", Offset = "0x6A317E0", VA = "0x6A327E0")]
	private void DrawTextHighlight(Vector3 start, Vector3 end, Color32 highlightColor, TextGenerationSettings generationSettings, TextInfo textInfo)
	{
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x6A20190", Offset = "0x6A1F190", VA = "0x6A20190")]
	private static void ClearMesh(bool updateMesh, TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x6A26870", Offset = "0x6A25870", VA = "0x6A26870")]
	public void LayoutPhase(TextInfo textInfo, TextGenerationSettings generationSettings, float maxVisibleDescender)
	{
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x6A200B0", Offset = "0x6A1F0B0", VA = "0x6A200B0")]
	private float Round(float v)
	{
		return default(float);
	}

	[Token(Token = "0x6000213")]
	[Address(RVA = "0x6A201B0", Offset = "0x6A1F1B0", VA = "0x6A201B0")]
	public void ParsingPhase(TextInfo textInfo, TextGenerationSettings generationSettings, out uint charCode, out float maxVisibleDescender)
	{
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x6A32DA0", Offset = "0x6A31DA0", VA = "0x6A32DA0")]
	private void InsertNewLine(int i, float baseScale, float currentElementScale, float currentEmScale, float boldSpacingAdjustment, float characterSpacingAdjustment, float width, float lineGap, ref bool isMaxVisibleDescenderSet, ref float maxVisibleDescender, TextGenerationSettings generationSettings, TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000215")]
	[Address(RVA = "0x6A334E0", Offset = "0x6A324E0", VA = "0x6A334E0")]
	public Vector2 GetPreferredValues(TextGenerationSettings settings, TextInfo textInfo)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x6A33610", Offset = "0x6A32610", VA = "0x6A33610")]
	private Vector2 GetPreferredValuesInternal(TextGenerationSettings generationSettings, TextInfo textInfo)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x6A33720", Offset = "0x6A32720", VA = "0x6A33720", Slot = "4")]
	protected virtual Vector2 CalculatePreferredValues(ref float fontSize, Vector2 marginSize, bool isTextAutoSizingEnabled, TextGenerationSettings generationSettings, TextInfo textInfo)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x6A1F720", Offset = "0x6A1E720", VA = "0x6A1F720")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal void Prepare(TextGenerationSettings generationSettings, TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x6A3B0E0", Offset = "0x6A3A0E0", VA = "0x6A3B0E0")]
	internal bool PrepareFontAsset(TextGenerationSettings generationSettings)
	{
		return default(bool);
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x6A39220", Offset = "0x6A38220", VA = "0x6A39220")]
	private int SetArraySizes(TextProcessingElement[] textProcessingArray, TextGenerationSettings generationSettings, TextInfo textInfo)
	{
		return default(int);
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x6A3C9F0", Offset = "0x6A3B9F0", VA = "0x6A3C9F0")]
	private TextElement GetTextElement(TextGenerationSettings generationSettings, uint unicode, FontAsset fontAsset, FontStyles fontStyle, TextFontWeight fontWeight, out bool isUsingAlternativeTypeface, bool populateLigatures)
	{
		return null;
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x6A381B0", Offset = "0x6A371B0", VA = "0x6A381B0")]
	private void PopulateTextBackingArray(in RenderedText sourceText)
	{
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x6A38270", Offset = "0x6A37270", VA = "0x6A38270")]
	private void PopulateTextProcessingArray(TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x6A3B1A0", Offset = "0x6A3A1A0", VA = "0x6A3B1A0")]
	private bool PopulateFontAsset(TextGenerationSettings generationSettings, TextProcessingElement[] textProcessingArray)
	{
		return default(bool);
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x6A380D0", Offset = "0x6A370D0", VA = "0x6A380D0")]
	private void ComputeMarginSize(Rect rect, Vector4 margins)
	{
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x6A38090", Offset = "0x6A37090", VA = "0x6A38090")]
	protected bool GetSpecialCharacters(TextGenerationSettings generationSettings)
	{
		return default(bool);
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x6A3C6E0", Offset = "0x6A3B6E0", VA = "0x6A3C6E0")]
	protected bool GetEllipsisSpecialCharacter(TextGenerationSettings generationSettings)
	{
		return default(bool);
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x6A322F0", Offset = "0x6A312F0", VA = "0x6A322F0")]
	protected bool GetUnderlineSpecialCharacter(TextGenerationSettings generationSettings)
	{
		return default(bool);
	}

	[Token(Token = "0x6000223")]
	[Address(RVA = "0x6A3CEF0", Offset = "0x6A3BEF0", VA = "0x6A3CEF0")]
	protected void DoMissingGlyphCallback(uint unicode, int stringIndex, FontAsset fontAsset, TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000224")]
	[Address(RVA = "0x6A3CF70", Offset = "0x6A3BF70", VA = "0x6A3CF70")]
	private static SpriteCharacter GetSpriteCharacterFromSpriteAssetThreadSafe(uint unicode, SpriteAsset spriteAsset)
	{
		return null;
	}

	[Token(Token = "0x6000225")]
	[Address(RVA = "0x6A3D080", Offset = "0x6A3C080", VA = "0x6A3D080")]
	private static SpriteCharacter GetSpriteFromFallbacksThreadSafe(uint unicode, List<SpriteAsset> fallbacks, HashSet<int> searched)
	{
		return null;
	}

	[Token(Token = "0x6000226")]
	[Address(RVA = "0x6A3D2A0", Offset = "0x6A3C2A0", VA = "0x6A3D2A0")]
	public TextGenerator()
	{
	}
}
