using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000031")]
internal struct WordWrapState
{
	[Token(Token = "0x400021E")]
	[FieldOffset(Offset = "0x0")]
	public int previousWordBreak;

	[Token(Token = "0x400021F")]
	[FieldOffset(Offset = "0x4")]
	public int totalCharacterCount;

	[Token(Token = "0x4000220")]
	[FieldOffset(Offset = "0x8")]
	public int visibleCharacterCount;

	[Token(Token = "0x4000221")]
	[FieldOffset(Offset = "0xC")]
	public int visibleSpaceCount;

	[Token(Token = "0x4000222")]
	[FieldOffset(Offset = "0x10")]
	public int visibleSpriteCount;

	[Token(Token = "0x4000223")]
	[FieldOffset(Offset = "0x14")]
	public int visibleLinkCount;

	[Token(Token = "0x4000224")]
	[FieldOffset(Offset = "0x18")]
	public int firstCharacterIndex;

	[Token(Token = "0x4000225")]
	[FieldOffset(Offset = "0x1C")]
	public int firstVisibleCharacterIndex;

	[Token(Token = "0x4000226")]
	[FieldOffset(Offset = "0x20")]
	public int lastCharacterIndex;

	[Token(Token = "0x4000227")]
	[FieldOffset(Offset = "0x24")]
	public int lastVisibleCharIndex;

	[Token(Token = "0x4000228")]
	[FieldOffset(Offset = "0x28")]
	public int lineNumber;

	[Token(Token = "0x4000229")]
	[FieldOffset(Offset = "0x2C")]
	public float maxCapHeight;

	[Token(Token = "0x400022A")]
	[FieldOffset(Offset = "0x30")]
	public float maxAscender;

	[Token(Token = "0x400022B")]
	[FieldOffset(Offset = "0x34")]
	public float maxDescender;

	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x38")]
	public float maxLineAscender;

	[Token(Token = "0x400022D")]
	[FieldOffset(Offset = "0x3C")]
	public float maxLineDescender;

	[Token(Token = "0x400022E")]
	[FieldOffset(Offset = "0x40")]
	public float startOfLineAscender;

	[Token(Token = "0x400022F")]
	[FieldOffset(Offset = "0x44")]
	public float xAdvance;

	[Token(Token = "0x4000230")]
	[FieldOffset(Offset = "0x48")]
	public float preferredWidth;

	[Token(Token = "0x4000231")]
	[FieldOffset(Offset = "0x4C")]
	public float preferredHeight;

	[Token(Token = "0x4000232")]
	[FieldOffset(Offset = "0x50")]
	public float previousLineScale;

	[Token(Token = "0x4000233")]
	[FieldOffset(Offset = "0x54")]
	public float pageAscender;

	[Token(Token = "0x4000234")]
	[FieldOffset(Offset = "0x58")]
	public int wordCount;

	[Token(Token = "0x4000235")]
	[FieldOffset(Offset = "0x5C")]
	public FontStyles fontStyle;

	[Token(Token = "0x4000236")]
	[FieldOffset(Offset = "0x60")]
	public float fontScale;

	[Token(Token = "0x4000237")]
	[FieldOffset(Offset = "0x64")]
	public float fontScaleMultiplier;

	[Token(Token = "0x4000238")]
	[FieldOffset(Offset = "0x68")]
	public int italicAngle;

	[Token(Token = "0x4000239")]
	[FieldOffset(Offset = "0x6C")]
	public float currentFontSize;

	[Token(Token = "0x400023A")]
	[FieldOffset(Offset = "0x70")]
	public float baselineOffset;

	[Token(Token = "0x400023B")]
	[FieldOffset(Offset = "0x74")]
	public float lineOffset;

	[Token(Token = "0x400023C")]
	[FieldOffset(Offset = "0x78")]
	public TextInfo textInfo;

	[Token(Token = "0x400023D")]
	[FieldOffset(Offset = "0x80")]
	public LineInfo lineInfo;

	[Token(Token = "0x400023E")]
	[FieldOffset(Offset = "0xE0")]
	public Color32 vertexColor;

	[Token(Token = "0x400023F")]
	[FieldOffset(Offset = "0xE4")]
	public Color32 underlineColor;

	[Token(Token = "0x4000240")]
	[FieldOffset(Offset = "0xE8")]
	public Color32 strikethroughColor;

	[Token(Token = "0x4000241")]
	[FieldOffset(Offset = "0xEC")]
	public Color32 highlightColor;

	[Token(Token = "0x4000242")]
	[FieldOffset(Offset = "0xF0")]
	public HighlightState highlightState;

	[Token(Token = "0x4000243")]
	[FieldOffset(Offset = "0x104")]
	public FontStyleStack basicStyleStack;

	[Token(Token = "0x4000244")]
	[FieldOffset(Offset = "0x110")]
	public TextProcessingStack<int> italicAngleStack;

	[Token(Token = "0x4000245")]
	[FieldOffset(Offset = "0x130")]
	public TextProcessingStack<Color32> colorStack;

	[Token(Token = "0x4000246")]
	[FieldOffset(Offset = "0x150")]
	public TextProcessingStack<Color32> underlineColorStack;

	[Token(Token = "0x4000247")]
	[FieldOffset(Offset = "0x170")]
	public TextProcessingStack<Color32> strikethroughColorStack;

	[Token(Token = "0x4000248")]
	[FieldOffset(Offset = "0x190")]
	public TextProcessingStack<Color32> highlightColorStack;

	[Token(Token = "0x4000249")]
	[FieldOffset(Offset = "0x1B0")]
	public TextProcessingStack<HighlightState> highlightStateStack;

	[Token(Token = "0x400024A")]
	[FieldOffset(Offset = "0x1E0")]
	public TextProcessingStack<TextColorGradient> colorGradientStack;

	[Token(Token = "0x400024B")]
	[FieldOffset(Offset = "0x208")]
	public TextProcessingStack<float> sizeStack;

	[Token(Token = "0x400024C")]
	[FieldOffset(Offset = "0x228")]
	public TextProcessingStack<float> indentStack;

	[Token(Token = "0x400024D")]
	[FieldOffset(Offset = "0x248")]
	public TextProcessingStack<TextFontWeight> fontWeightStack;

	[Token(Token = "0x400024E")]
	[FieldOffset(Offset = "0x268")]
	public TextProcessingStack<int> styleStack;

	[Token(Token = "0x400024F")]
	[FieldOffset(Offset = "0x288")]
	public TextProcessingStack<float> baselineStack;

	[Token(Token = "0x4000250")]
	[FieldOffset(Offset = "0x2A8")]
	public TextProcessingStack<int> actionStack;

	[Token(Token = "0x4000251")]
	[FieldOffset(Offset = "0x2C8")]
	public TextProcessingStack<MaterialReference> materialReferenceStack;

	[Token(Token = "0x4000252")]
	[FieldOffset(Offset = "0x320")]
	public TextProcessingStack<TextAlignment> lineJustificationStack;

	[Token(Token = "0x4000253")]
	[FieldOffset(Offset = "0x340")]
	public int lastBaseGlyphIndex;

	[Token(Token = "0x4000254")]
	[FieldOffset(Offset = "0x344")]
	public int spriteAnimationId;

	[Token(Token = "0x4000255")]
	[FieldOffset(Offset = "0x348")]
	public FontAsset currentFontAsset;

	[Token(Token = "0x4000256")]
	[FieldOffset(Offset = "0x350")]
	public SpriteAsset currentSpriteAsset;

	[Token(Token = "0x4000257")]
	[FieldOffset(Offset = "0x358")]
	public Material currentMaterial;

	[Token(Token = "0x4000258")]
	[FieldOffset(Offset = "0x360")]
	public int currentMaterialIndex;

	[Token(Token = "0x4000259")]
	[FieldOffset(Offset = "0x364")]
	public Extents meshExtents;

	[Token(Token = "0x400025A")]
	[FieldOffset(Offset = "0x374")]
	public bool tagNoParsing;

	[Token(Token = "0x400025B")]
	[FieldOffset(Offset = "0x375")]
	public bool isNonBreakingSpace;

	[Token(Token = "0x400025C")]
	[FieldOffset(Offset = "0x376")]
	public bool isDrivenLineSpacing;

	[Token(Token = "0x400025D")]
	[FieldOffset(Offset = "0x378")]
	public Vector3 fxScale;

	[Token(Token = "0x400025E")]
	[FieldOffset(Offset = "0x384")]
	public Quaternion fxRotation;
}
