using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x200009E")]
public struct WordWrapState
{
	[Token(Token = "0x4000558")]
	[FieldOffset(Offset = "0x0")]
	public int previous_WordBreak;

	[Token(Token = "0x4000559")]
	[FieldOffset(Offset = "0x4")]
	public int total_CharacterCount;

	[Token(Token = "0x400055A")]
	[FieldOffset(Offset = "0x8")]
	public int visible_CharacterCount;

	[Token(Token = "0x400055B")]
	[FieldOffset(Offset = "0xC")]
	public int visible_SpriteCount;

	[Token(Token = "0x400055C")]
	[FieldOffset(Offset = "0x10")]
	public int visible_LinkCount;

	[Token(Token = "0x400055D")]
	[FieldOffset(Offset = "0x14")]
	public int firstCharacterIndex;

	[Token(Token = "0x400055E")]
	[FieldOffset(Offset = "0x18")]
	public int firstVisibleCharacterIndex;

	[Token(Token = "0x400055F")]
	[FieldOffset(Offset = "0x1C")]
	public int lastCharacterIndex;

	[Token(Token = "0x4000560")]
	[FieldOffset(Offset = "0x20")]
	public int lastVisibleCharIndex;

	[Token(Token = "0x4000561")]
	[FieldOffset(Offset = "0x24")]
	public int lineNumber;

	[Token(Token = "0x4000562")]
	[FieldOffset(Offset = "0x28")]
	public float maxCapHeight;

	[Token(Token = "0x4000563")]
	[FieldOffset(Offset = "0x2C")]
	public float maxAscender;

	[Token(Token = "0x4000564")]
	[FieldOffset(Offset = "0x30")]
	public float maxDescender;

	[Token(Token = "0x4000565")]
	[FieldOffset(Offset = "0x34")]
	public float startOfLineAscender;

	[Token(Token = "0x4000566")]
	[FieldOffset(Offset = "0x38")]
	public float maxLineAscender;

	[Token(Token = "0x4000567")]
	[FieldOffset(Offset = "0x3C")]
	public float maxLineDescender;

	[Token(Token = "0x4000568")]
	[FieldOffset(Offset = "0x40")]
	public float pageAscender;

	[Token(Token = "0x4000569")]
	[FieldOffset(Offset = "0x44")]
	public HorizontalAlignmentOptions horizontalAlignment;

	[Token(Token = "0x400056A")]
	[FieldOffset(Offset = "0x48")]
	public float marginLeft;

	[Token(Token = "0x400056B")]
	[FieldOffset(Offset = "0x4C")]
	public float marginRight;

	[Token(Token = "0x400056C")]
	[FieldOffset(Offset = "0x50")]
	public float xAdvance;

	[Token(Token = "0x400056D")]
	[FieldOffset(Offset = "0x54")]
	public float preferredWidth;

	[Token(Token = "0x400056E")]
	[FieldOffset(Offset = "0x58")]
	public float preferredHeight;

	[Token(Token = "0x400056F")]
	[FieldOffset(Offset = "0x5C")]
	public float previousLineScale;

	[Token(Token = "0x4000570")]
	[FieldOffset(Offset = "0x60")]
	public int wordCount;

	[Token(Token = "0x4000571")]
	[FieldOffset(Offset = "0x64")]
	public FontStyles fontStyle;

	[Token(Token = "0x4000572")]
	[FieldOffset(Offset = "0x68")]
	public int italicAngle;

	[Token(Token = "0x4000573")]
	[FieldOffset(Offset = "0x6C")]
	public float fontScaleMultiplier;

	[Token(Token = "0x4000574")]
	[FieldOffset(Offset = "0x70")]
	public float currentFontSize;

	[Token(Token = "0x4000575")]
	[FieldOffset(Offset = "0x74")]
	public float baselineOffset;

	[Token(Token = "0x4000576")]
	[FieldOffset(Offset = "0x78")]
	public float lineOffset;

	[Token(Token = "0x4000577")]
	[FieldOffset(Offset = "0x7C")]
	public bool isDrivenLineSpacing;

	[Token(Token = "0x4000578")]
	[FieldOffset(Offset = "0x80")]
	public float glyphHorizontalAdvanceAdjustment;

	[Token(Token = "0x4000579")]
	[FieldOffset(Offset = "0x84")]
	public float cSpace;

	[Token(Token = "0x400057A")]
	[FieldOffset(Offset = "0x88")]
	public float mSpace;

	[Token(Token = "0x400057B")]
	[FieldOffset(Offset = "0x90")]
	public TMP_TextInfo textInfo;

	[Token(Token = "0x400057C")]
	[FieldOffset(Offset = "0x98")]
	public TMP_LineInfo lineInfo;

	[Token(Token = "0x400057D")]
	[FieldOffset(Offset = "0xF4")]
	public Color32 vertexColor;

	[Token(Token = "0x400057E")]
	[FieldOffset(Offset = "0xF8")]
	public Color32 underlineColor;

	[Token(Token = "0x400057F")]
	[FieldOffset(Offset = "0xFC")]
	public Color32 strikethroughColor;

	[Token(Token = "0x4000580")]
	[FieldOffset(Offset = "0x100")]
	public Color32 highlightColor;

	[Token(Token = "0x4000581")]
	[FieldOffset(Offset = "0x104")]
	public TMP_FontStyleStack basicStyleStack;

	[Token(Token = "0x4000582")]
	[FieldOffset(Offset = "0x110")]
	public TMP_TextProcessingStack<int> italicAngleStack;

	[Token(Token = "0x4000583")]
	[FieldOffset(Offset = "0x130")]
	public TMP_TextProcessingStack<Color32> colorStack;

	[Token(Token = "0x4000584")]
	[FieldOffset(Offset = "0x150")]
	public TMP_TextProcessingStack<Color32> underlineColorStack;

	[Token(Token = "0x4000585")]
	[FieldOffset(Offset = "0x170")]
	public TMP_TextProcessingStack<Color32> strikethroughColorStack;

	[Token(Token = "0x4000586")]
	[FieldOffset(Offset = "0x190")]
	public TMP_TextProcessingStack<Color32> highlightColorStack;

	[Token(Token = "0x4000587")]
	[FieldOffset(Offset = "0x1B0")]
	public TMP_TextProcessingStack<HighlightState> highlightStateStack;

	[Token(Token = "0x4000588")]
	[FieldOffset(Offset = "0x1E0")]
	public TMP_TextProcessingStack<TMP_ColorGradient> colorGradientStack;

	[Token(Token = "0x4000589")]
	[FieldOffset(Offset = "0x208")]
	public TMP_TextProcessingStack<float> sizeStack;

	[Token(Token = "0x400058A")]
	[FieldOffset(Offset = "0x228")]
	public TMP_TextProcessingStack<float> indentStack;

	[Token(Token = "0x400058B")]
	[FieldOffset(Offset = "0x248")]
	public TMP_TextProcessingStack<FontWeight> fontWeightStack;

	[Token(Token = "0x400058C")]
	[FieldOffset(Offset = "0x268")]
	public TMP_TextProcessingStack<int> styleStack;

	[Token(Token = "0x400058D")]
	[FieldOffset(Offset = "0x288")]
	public TMP_TextProcessingStack<float> baselineStack;

	[Token(Token = "0x400058E")]
	[FieldOffset(Offset = "0x2A8")]
	public TMP_TextProcessingStack<int> actionStack;

	[Token(Token = "0x400058F")]
	[FieldOffset(Offset = "0x2C8")]
	public TMP_TextProcessingStack<MaterialReference> materialReferenceStack;

	[Token(Token = "0x4000590")]
	[FieldOffset(Offset = "0x320")]
	public TMP_TextProcessingStack<HorizontalAlignmentOptions> lineJustificationStack;

	[Token(Token = "0x4000591")]
	[FieldOffset(Offset = "0x340")]
	public int spriteAnimationID;

	[Token(Token = "0x4000592")]
	[FieldOffset(Offset = "0x348")]
	public TMP_FontAsset currentFontAsset;

	[Token(Token = "0x4000593")]
	[FieldOffset(Offset = "0x350")]
	public TMP_SpriteAsset currentSpriteAsset;

	[Token(Token = "0x4000594")]
	[FieldOffset(Offset = "0x358")]
	public Material currentMaterial;

	[Token(Token = "0x4000595")]
	[FieldOffset(Offset = "0x360")]
	public int currentMaterialIndex;

	[Token(Token = "0x4000596")]
	[FieldOffset(Offset = "0x364")]
	public Extents meshExtents;

	[Token(Token = "0x4000597")]
	[FieldOffset(Offset = "0x374")]
	public bool tagNoParsing;

	[Token(Token = "0x4000598")]
	[FieldOffset(Offset = "0x375")]
	public bool isNonBreakingSpace;
}
