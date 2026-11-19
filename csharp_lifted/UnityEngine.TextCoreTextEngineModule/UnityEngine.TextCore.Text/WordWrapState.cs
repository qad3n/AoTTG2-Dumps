// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.WordWrapState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000058")]
internal struct WordWrapState
{
	[Token(Token = "0x400034F")]
	[FieldOffset(Offset = "0x0")]
	public int previousWordBreak;

	[Token(Token = "0x4000350")]
	[FieldOffset(Offset = "0x4")]
	public int totalCharacterCount;

	[Token(Token = "0x4000351")]
	[FieldOffset(Offset = "0x8")]
	public int visibleCharacterCount;

	[Token(Token = "0x4000352")]
	[FieldOffset(Offset = "0xC")]
	public int visibleSpaceCount;

	[Token(Token = "0x4000353")]
	[FieldOffset(Offset = "0x10")]
	public int visibleSpriteCount;

	[Token(Token = "0x4000354")]
	[FieldOffset(Offset = "0x14")]
	public int visibleLinkCount;

	[Token(Token = "0x4000355")]
	[FieldOffset(Offset = "0x18")]
	public int firstCharacterIndex;

	[Token(Token = "0x4000356")]
	[FieldOffset(Offset = "0x1C")]
	public int firstVisibleCharacterIndex;

	[Token(Token = "0x4000357")]
	[FieldOffset(Offset = "0x20")]
	public int lastCharacterIndex;

	[Token(Token = "0x4000358")]
	[FieldOffset(Offset = "0x24")]
	public int lastVisibleCharIndex;

	[Token(Token = "0x4000359")]
	[FieldOffset(Offset = "0x28")]
	public int lineNumber;

	[Token(Token = "0x400035A")]
	[FieldOffset(Offset = "0x2C")]
	public float maxCapHeight;

	[Token(Token = "0x400035B")]
	[FieldOffset(Offset = "0x30")]
	public float maxAscender;

	[Token(Token = "0x400035C")]
	[FieldOffset(Offset = "0x34")]
	public float maxDescender;

	[Token(Token = "0x400035D")]
	[FieldOffset(Offset = "0x38")]
	public float maxLineAscender;

	[Token(Token = "0x400035E")]
	[FieldOffset(Offset = "0x3C")]
	public float maxLineDescender;

	[Token(Token = "0x400035F")]
	[FieldOffset(Offset = "0x40")]
	public float startOfLineAscender;

	[Token(Token = "0x4000360")]
	[FieldOffset(Offset = "0x44")]
	public float xAdvance;

	[Token(Token = "0x4000361")]
	[FieldOffset(Offset = "0x48")]
	public float preferredWidth;

	[Token(Token = "0x4000362")]
	[FieldOffset(Offset = "0x4C")]
	public float preferredHeight;

	[Token(Token = "0x4000363")]
	[FieldOffset(Offset = "0x50")]
	public float previousLineScale;

	[Token(Token = "0x4000364")]
	[FieldOffset(Offset = "0x54")]
	public float pageAscender;

	[Token(Token = "0x4000365")]
	[FieldOffset(Offset = "0x58")]
	public int wordCount;

	[Token(Token = "0x4000366")]
	[FieldOffset(Offset = "0x5C")]
	public FontStyles fontStyle;

	[Token(Token = "0x4000367")]
	[FieldOffset(Offset = "0x60")]
	public float fontScale;

	[Token(Token = "0x4000368")]
	[FieldOffset(Offset = "0x64")]
	public float fontScaleMultiplier;

	[Token(Token = "0x4000369")]
	[FieldOffset(Offset = "0x68")]
	public int italicAngle;

	[Token(Token = "0x400036A")]
	[FieldOffset(Offset = "0x6C")]
	public float currentFontSize;

	[Token(Token = "0x400036B")]
	[FieldOffset(Offset = "0x70")]
	public float baselineOffset;

	[Token(Token = "0x400036C")]
	[FieldOffset(Offset = "0x74")]
	public float lineOffset;

	[Token(Token = "0x400036D")]
	[FieldOffset(Offset = "0x78")]
	public TextInfo textInfo;

	[Token(Token = "0x400036E")]
	[FieldOffset(Offset = "0x80")]
	public LineInfo lineInfo;

	[Token(Token = "0x400036F")]
	[FieldOffset(Offset = "0xE0")]
	public Color32 vertexColor;

	[Token(Token = "0x4000370")]
	[FieldOffset(Offset = "0xE4")]
	public Color32 underlineColor;

	[Token(Token = "0x4000371")]
	[FieldOffset(Offset = "0xE8")]
	public Color32 strikethroughColor;

	[Token(Token = "0x4000372")]
	[FieldOffset(Offset = "0xEC")]
	public Color32 highlightColor;

	[Token(Token = "0x4000373")]
	[FieldOffset(Offset = "0xF0")]
	public HighlightState highlightState;

	[Token(Token = "0x4000374")]
	[FieldOffset(Offset = "0x104")]
	public FontStyleStack basicStyleStack;

	[Token(Token = "0x4000375")]
	[FieldOffset(Offset = "0x110")]
	public TextProcessingStack<int> italicAngleStack;

	[Token(Token = "0x4000376")]
	[FieldOffset(Offset = "0x130")]
	public TextProcessingStack<Color32> colorStack;

	[Token(Token = "0x4000377")]
	[FieldOffset(Offset = "0x150")]
	public TextProcessingStack<Color32> underlineColorStack;

	[Token(Token = "0x4000378")]
	[FieldOffset(Offset = "0x170")]
	public TextProcessingStack<Color32> strikethroughColorStack;

	[Token(Token = "0x4000379")]
	[FieldOffset(Offset = "0x190")]
	public TextProcessingStack<Color32> highlightColorStack;

	[Token(Token = "0x400037A")]
	[FieldOffset(Offset = "0x1B0")]
	public TextProcessingStack<HighlightState> highlightStateStack;

	[Token(Token = "0x400037B")]
	[FieldOffset(Offset = "0x1E0")]
	public TextProcessingStack<TextColorGradient> colorGradientStack;

	[Token(Token = "0x400037C")]
	[FieldOffset(Offset = "0x208")]
	public TextProcessingStack<float> sizeStack;

	[Token(Token = "0x400037D")]
	[FieldOffset(Offset = "0x228")]
	public TextProcessingStack<float> indentStack;

	[Token(Token = "0x400037E")]
	[FieldOffset(Offset = "0x248")]
	public TextProcessingStack<TextFontWeight> fontWeightStack;

	[Token(Token = "0x400037F")]
	[FieldOffset(Offset = "0x268")]
	public TextProcessingStack<int> styleStack;

	[Token(Token = "0x4000380")]
	[FieldOffset(Offset = "0x288")]
	public TextProcessingStack<float> baselineStack;

	[Token(Token = "0x4000381")]
	[FieldOffset(Offset = "0x2A8")]
	public TextProcessingStack<int> actionStack;

	[Token(Token = "0x4000382")]
	[FieldOffset(Offset = "0x2C8")]
	public TextProcessingStack<MaterialReference> materialReferenceStack;

	[Token(Token = "0x4000383")]
	[FieldOffset(Offset = "0x320")]
	public TextProcessingStack<TextAlignment> lineJustificationStack;

	[Token(Token = "0x4000384")]
	[FieldOffset(Offset = "0x340")]
	public int lastBaseGlyphIndex;

	[Token(Token = "0x4000385")]
	[FieldOffset(Offset = "0x344")]
	public int spriteAnimationId;

	[Token(Token = "0x4000386")]
	[FieldOffset(Offset = "0x348")]
	public FontAsset currentFontAsset;

	[Token(Token = "0x4000387")]
	[FieldOffset(Offset = "0x350")]
	public SpriteAsset currentSpriteAsset;

	[Token(Token = "0x4000388")]
	[FieldOffset(Offset = "0x358")]
	public Material currentMaterial;

	[Token(Token = "0x4000389")]
	[FieldOffset(Offset = "0x360")]
	public int currentMaterialIndex;

	[Token(Token = "0x400038A")]
	[FieldOffset(Offset = "0x364")]
	public Extents meshExtents;

	[Token(Token = "0x400038B")]
	[FieldOffset(Offset = "0x374")]
	public bool tagNoParsing;

	[Token(Token = "0x400038C")]
	[FieldOffset(Offset = "0x375")]
	public bool isNonBreakingSpace;

	[Token(Token = "0x400038D")]
	[FieldOffset(Offset = "0x376")]
	public bool isDrivenLineSpacing;

	[Token(Token = "0x400038E")]
	[FieldOffset(Offset = "0x378")]
	public Vector3 fxScale;

	[Token(Token = "0x400038F")]
	[FieldOffset(Offset = "0x384")]
	public Quaternion fxRotation;
}
