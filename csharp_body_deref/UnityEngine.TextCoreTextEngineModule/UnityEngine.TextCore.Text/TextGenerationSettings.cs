using System;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000021")]
internal class TextGenerationSettings : IEquatable<TextGenerationSettings>
{
	[Token(Token = "0x4000111")]
	[FieldOffset(Offset = "0x10")]
	public string text;

	[Token(Token = "0x4000112")]
	[FieldOffset(Offset = "0x18")]
	public Rect screenRect;

	[Token(Token = "0x4000113")]
	[FieldOffset(Offset = "0x28")]
	public Vector4 margins;

	[Token(Token = "0x4000114")]
	[FieldOffset(Offset = "0x38")]
	public float scale;

	[Token(Token = "0x4000115")]
	[FieldOffset(Offset = "0x40")]
	public FontAsset fontAsset;

	[Token(Token = "0x4000116")]
	[FieldOffset(Offset = "0x48")]
	public Material material;

	[Token(Token = "0x4000117")]
	[FieldOffset(Offset = "0x50")]
	public SpriteAsset spriteAsset;

	[Token(Token = "0x4000118")]
	[FieldOffset(Offset = "0x58")]
	public TextStyleSheet styleSheet;

	[Token(Token = "0x4000119")]
	[FieldOffset(Offset = "0x60")]
	public FontStyles fontStyle;

	[Token(Token = "0x400011A")]
	[FieldOffset(Offset = "0x68")]
	public TextSettings textSettings;

	[Token(Token = "0x400011B")]
	[FieldOffset(Offset = "0x70")]
	public TextAlignment textAlignment;

	[Token(Token = "0x400011C")]
	[FieldOffset(Offset = "0x74")]
	public TextOverflowMode overflowMode;

	[Token(Token = "0x400011D")]
	[FieldOffset(Offset = "0x78")]
	public bool wordWrap;

	[Token(Token = "0x400011E")]
	[FieldOffset(Offset = "0x7C")]
	public float wordWrappingRatio;

	[Token(Token = "0x400011F")]
	[FieldOffset(Offset = "0x80")]
	public Color color;

	[Token(Token = "0x4000120")]
	[FieldOffset(Offset = "0x90")]
	public TextColorGradient fontColorGradient;

	[Token(Token = "0x4000121")]
	[FieldOffset(Offset = "0x98")]
	public TextColorGradient fontColorGradientPreset;

	[Token(Token = "0x4000122")]
	[FieldOffset(Offset = "0xA0")]
	public bool tintSprites;

	[Token(Token = "0x4000123")]
	[FieldOffset(Offset = "0xA1")]
	public bool overrideRichTextColors;

	[Token(Token = "0x4000124")]
	[FieldOffset(Offset = "0xA2")]
	public bool shouldConvertToLinearSpace;

	[Token(Token = "0x4000125")]
	[FieldOffset(Offset = "0xA4")]
	public float fontSize;

	[Token(Token = "0x4000126")]
	[FieldOffset(Offset = "0xA8")]
	public bool autoSize;

	[Token(Token = "0x4000127")]
	[FieldOffset(Offset = "0xAC")]
	public float fontSizeMin;

	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0xB0")]
	public float fontSizeMax;

	[Token(Token = "0x4000129")]
	[FieldOffset(Offset = "0xB4")]
	public bool enableKerning;

	[Token(Token = "0x400012A")]
	[FieldOffset(Offset = "0xB5")]
	public bool richText;

	[Token(Token = "0x400012B")]
	[FieldOffset(Offset = "0xB6")]
	public bool isRightToLeft;

	[Token(Token = "0x400012C")]
	[FieldOffset(Offset = "0xB8")]
	public float extraPadding;

	[Token(Token = "0x400012D")]
	[FieldOffset(Offset = "0xBC")]
	public bool parseControlCharacters;

	[Token(Token = "0x400012E")]
	[FieldOffset(Offset = "0xBD")]
	public bool isOrthographic;

	[Token(Token = "0x400012F")]
	[FieldOffset(Offset = "0xBE")]
	public bool isPlaceholder;

	[Token(Token = "0x4000130")]
	[FieldOffset(Offset = "0xBF")]
	public bool tagNoParsing;

	[Token(Token = "0x4000131")]
	[FieldOffset(Offset = "0xC0")]
	public float characterSpacing;

	[Token(Token = "0x4000132")]
	[FieldOffset(Offset = "0xC4")]
	public float wordSpacing;

	[Token(Token = "0x4000133")]
	[FieldOffset(Offset = "0xC8")]
	public float lineSpacing;

	[Token(Token = "0x4000134")]
	[FieldOffset(Offset = "0xCC")]
	public float paragraphSpacing;

	[Token(Token = "0x4000135")]
	[FieldOffset(Offset = "0xD0")]
	public float lineSpacingMax;

	[Token(Token = "0x4000136")]
	[FieldOffset(Offset = "0xD4")]
	public TextWrappingMode textWrappingMode;

	[Token(Token = "0x4000137")]
	[FieldOffset(Offset = "0xD8")]
	public int maxVisibleCharacters;

	[Token(Token = "0x4000138")]
	[FieldOffset(Offset = "0xDC")]
	public int maxVisibleWords;

	[Token(Token = "0x4000139")]
	[FieldOffset(Offset = "0xE0")]
	public int maxVisibleLines;

	[Token(Token = "0x400013A")]
	[FieldOffset(Offset = "0xE4")]
	public int firstVisibleCharacter;

	[Token(Token = "0x400013B")]
	[FieldOffset(Offset = "0xE8")]
	public bool useMaxVisibleDescender;

	[Token(Token = "0x400013C")]
	[FieldOffset(Offset = "0xEC")]
	public TextFontWeight fontWeight;

	[Token(Token = "0x400013D")]
	[FieldOffset(Offset = "0xF0")]
	public int pageToDisplay;

	[Token(Token = "0x400013E")]
	[FieldOffset(Offset = "0xF4")]
	public TextureMapping horizontalMapping;

	[Token(Token = "0x400013F")]
	[FieldOffset(Offset = "0xF8")]
	public TextureMapping verticalMapping;

	[Token(Token = "0x4000140")]
	[FieldOffset(Offset = "0xFC")]
	public float uvLineOffset;

	[Token(Token = "0x4000141")]
	[FieldOffset(Offset = "0x100")]
	public VertexSortingOrder geometrySortingOrder;

	[Token(Token = "0x4000142")]
	[FieldOffset(Offset = "0x104")]
	public bool inverseYAxis;

	[Token(Token = "0x4000143")]
	[FieldOffset(Offset = "0x105")]
	public bool isIMGUI;

	[Token(Token = "0x4000144")]
	[FieldOffset(Offset = "0x108")]
	public float charWidthMaxAdj;

	[Token(Token = "0x4000145")]
	[FieldOffset(Offset = "0x10C")]
	internal TextInputSource inputSource;

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x4B92E20", Offset = "0x4B92E20", VA = "0x4B92E20", Slot = "4")]
	public bool Equals(TextGenerationSettings other)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x4B93440", Offset = "0x4B93440", VA = "0x4B93440", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x4B93520", Offset = "0x4B93520", VA = "0x4B93520", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x4B93A50", Offset = "0x4B93A50", VA = "0x4B93A50")]
	public static bool operator !=(TextGenerationSettings left, TextGenerationSettings right)
	{
		return default(bool);
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x4B93A60", Offset = "0x4B93A60", VA = "0x4B93A60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x4B96240", Offset = "0x4B96240", VA = "0x4B96240")]
	public TextGenerationSettings()
	{
	}
}
