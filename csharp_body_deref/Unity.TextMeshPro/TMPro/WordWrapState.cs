// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.WordWrapState
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x20000B0")]
internal struct WordWrapState
{
	[Token(Token = "0x40005DA")]
	[FieldOffset(Offset = "0x0")]
	public int previous_WordBreak;

	[Token(Token = "0x40005DB")]
	[FieldOffset(Offset = "0x4")]
	public int total_CharacterCount;

	[Token(Token = "0x40005DC")]
	[FieldOffset(Offset = "0x8")]
	public int visible_CharacterCount;

	[Token(Token = "0x40005DD")]
	[FieldOffset(Offset = "0xC")]
	public int visibleSpaceCount;

	[Token(Token = "0x40005DE")]
	[FieldOffset(Offset = "0x10")]
	public int visible_SpriteCount;

	[Token(Token = "0x40005DF")]
	[FieldOffset(Offset = "0x14")]
	public int visible_LinkCount;

	[Token(Token = "0x40005E0")]
	[FieldOffset(Offset = "0x18")]
	public int firstCharacterIndex;

	[Token(Token = "0x40005E1")]
	[FieldOffset(Offset = "0x1C")]
	public int firstVisibleCharacterIndex;

	[Token(Token = "0x40005E2")]
	[FieldOffset(Offset = "0x20")]
	public int lastCharacterIndex;

	[Token(Token = "0x40005E3")]
	[FieldOffset(Offset = "0x24")]
	public int lastVisibleCharIndex;

	[Token(Token = "0x40005E4")]
	[FieldOffset(Offset = "0x28")]
	public int lineNumber;

	[Token(Token = "0x40005E5")]
	[FieldOffset(Offset = "0x2C")]
	public float maxCapHeight;

	[Token(Token = "0x40005E6")]
	[FieldOffset(Offset = "0x30")]
	public float maxAscender;

	[Token(Token = "0x40005E7")]
	[FieldOffset(Offset = "0x34")]
	public float maxDescender;

	[Token(Token = "0x40005E8")]
	[FieldOffset(Offset = "0x38")]
	public float startOfLineAscender;

	[Token(Token = "0x40005E9")]
	[FieldOffset(Offset = "0x3C")]
	public float maxLineAscender;

	[Token(Token = "0x40005EA")]
	[FieldOffset(Offset = "0x40")]
	public float maxLineDescender;

	[Token(Token = "0x40005EB")]
	[FieldOffset(Offset = "0x44")]
	public float pageAscender;

	[Token(Token = "0x40005EC")]
	[FieldOffset(Offset = "0x48")]
	public HorizontalAlignmentOptions horizontalAlignment;

	[Token(Token = "0x40005ED")]
	[FieldOffset(Offset = "0x4C")]
	public float marginLeft;

	[Token(Token = "0x40005EE")]
	[FieldOffset(Offset = "0x50")]
	public float marginRight;

	[Token(Token = "0x40005EF")]
	[FieldOffset(Offset = "0x54")]
	public float xAdvance;

	[Token(Token = "0x40005F0")]
	[FieldOffset(Offset = "0x58")]
	public float preferredWidth;

	[Token(Token = "0x40005F1")]
	[FieldOffset(Offset = "0x5C")]
	public float preferredHeight;

	[Token(Token = "0x40005F2")]
	[FieldOffset(Offset = "0x60")]
	public float renderedWidth;

	[Token(Token = "0x40005F3")]
	[FieldOffset(Offset = "0x64")]
	public float renderedHeight;

	[Token(Token = "0x40005F4")]
	[FieldOffset(Offset = "0x68")]
	public float previousLineScale;

	[Token(Token = "0x40005F5")]
	[FieldOffset(Offset = "0x6C")]
	public int wordCount;

	[Token(Token = "0x40005F6")]
	[FieldOffset(Offset = "0x70")]
	public FontStyles fontStyle;

	[Token(Token = "0x40005F7")]
	[FieldOffset(Offset = "0x74")]
	public int italicAngle;

	[Token(Token = "0x40005F8")]
	[FieldOffset(Offset = "0x78")]
	public float fontScaleMultiplier;

	[Token(Token = "0x40005F9")]
	[FieldOffset(Offset = "0x7C")]
	public float currentFontSize;

	[Token(Token = "0x40005FA")]
	[FieldOffset(Offset = "0x80")]
	public float baselineOffset;

	[Token(Token = "0x40005FB")]
	[FieldOffset(Offset = "0x84")]
	public float lineOffset;

	[Token(Token = "0x40005FC")]
	[FieldOffset(Offset = "0x88")]
	public bool isDrivenLineSpacing;

	[Token(Token = "0x40005FD")]
	[FieldOffset(Offset = "0x8C")]
	public int lastBaseGlyphIndex;

	[Token(Token = "0x40005FE")]
	[FieldOffset(Offset = "0x90")]
	public float cSpace;

	[Token(Token = "0x40005FF")]
	[FieldOffset(Offset = "0x94")]
	public float mSpace;

	[Token(Token = "0x4000600")]
	[FieldOffset(Offset = "0x98")]
	public TMP_TextInfo textInfo;

	[Token(Token = "0x4000601")]
	[FieldOffset(Offset = "0xA0")]
	public TMP_LineInfo lineInfo;

	[Token(Token = "0x4000602")]
	[FieldOffset(Offset = "0x100")]
	public Color32 vertexColor;

	[Token(Token = "0x4000603")]
	[FieldOffset(Offset = "0x104")]
	public Color32 underlineColor;

	[Token(Token = "0x4000604")]
	[FieldOffset(Offset = "0x108")]
	public Color32 strikethroughColor;

	[Token(Token = "0x4000605")]
	[FieldOffset(Offset = "0x10C")]
	public HighlightState highlightState;

	[Token(Token = "0x4000606")]
	[FieldOffset(Offset = "0x120")]
	public TMP_FontStyleStack basicStyleStack;

	[Token(Token = "0x4000607")]
	[FieldOffset(Offset = "0x130")]
	public TMP_TextProcessingStack<int> italicAngleStack;

	[Token(Token = "0x4000608")]
	[FieldOffset(Offset = "0x150")]
	public TMP_TextProcessingStack<Color32> colorStack;

	[Token(Token = "0x4000609")]
	[FieldOffset(Offset = "0x170")]
	public TMP_TextProcessingStack<Color32> underlineColorStack;

	[Token(Token = "0x400060A")]
	[FieldOffset(Offset = "0x190")]
	public TMP_TextProcessingStack<Color32> strikethroughColorStack;

	[Token(Token = "0x400060B")]
	[FieldOffset(Offset = "0x1B0")]
	public TMP_TextProcessingStack<Color32> highlightColorStack;

	[Token(Token = "0x400060C")]
	[FieldOffset(Offset = "0x1D0")]
	public TMP_TextProcessingStack<HighlightState> highlightStateStack;

	[Token(Token = "0x400060D")]
	[FieldOffset(Offset = "0x200")]
	public TMP_TextProcessingStack<TMP_ColorGradient> colorGradientStack;

	[Token(Token = "0x400060E")]
	[FieldOffset(Offset = "0x228")]
	public TMP_TextProcessingStack<float> sizeStack;

	[Token(Token = "0x400060F")]
	[FieldOffset(Offset = "0x248")]
	public TMP_TextProcessingStack<float> indentStack;

	[Token(Token = "0x4000610")]
	[FieldOffset(Offset = "0x268")]
	public TMP_TextProcessingStack<FontWeight> fontWeightStack;

	[Token(Token = "0x4000611")]
	[FieldOffset(Offset = "0x288")]
	public TMP_TextProcessingStack<int> styleStack;

	[Token(Token = "0x4000612")]
	[FieldOffset(Offset = "0x2A8")]
	public TMP_TextProcessingStack<float> baselineStack;

	[Token(Token = "0x4000613")]
	[FieldOffset(Offset = "0x2C8")]
	public TMP_TextProcessingStack<int> actionStack;

	[Token(Token = "0x4000614")]
	[FieldOffset(Offset = "0x2E8")]
	public TMP_TextProcessingStack<MaterialReference> materialReferenceStack;

	[Token(Token = "0x4000615")]
	[FieldOffset(Offset = "0x340")]
	public TMP_TextProcessingStack<HorizontalAlignmentOptions> lineJustificationStack;

	[Token(Token = "0x4000616")]
	[FieldOffset(Offset = "0x360")]
	public int spriteAnimationID;

	[Token(Token = "0x4000617")]
	[FieldOffset(Offset = "0x368")]
	public TMP_FontAsset currentFontAsset;

	[Token(Token = "0x4000618")]
	[FieldOffset(Offset = "0x370")]
	public TMP_SpriteAsset currentSpriteAsset;

	[Token(Token = "0x4000619")]
	[FieldOffset(Offset = "0x378")]
	public Material currentMaterial;

	[Token(Token = "0x400061A")]
	[FieldOffset(Offset = "0x380")]
	public int currentMaterialIndex;

	[Token(Token = "0x400061B")]
	[FieldOffset(Offset = "0x384")]
	public Extents meshExtents;

	[Token(Token = "0x400061C")]
	[FieldOffset(Offset = "0x394")]
	public bool tagNoParsing;

	[Token(Token = "0x400061D")]
	[FieldOffset(Offset = "0x395")]
	public bool isNonBreakingSpace;

	[Token(Token = "0x400061E")]
	[FieldOffset(Offset = "0x398")]
	public Quaternion fxRotation;

	[Token(Token = "0x400061F")]
	[FieldOffset(Offset = "0x3A8")]
	public Vector3 fxScale;
}
