using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000020")]
internal struct TextElementInfo
{
	[Token(Token = "0x40000E6")]
	[FieldOffset(Offset = "0x0")]
	public char character;

	[Token(Token = "0x40000E7")]
	[FieldOffset(Offset = "0x4")]
	public int index;

	[Token(Token = "0x40000E8")]
	[FieldOffset(Offset = "0x8")]
	public TextElementType elementType;

	[Token(Token = "0x40000E9")]
	[FieldOffset(Offset = "0xC")]
	public int stringLength;

	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0x10")]
	public TextElement textElement;

	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0x18")]
	public Glyph alternativeGlyph;

	[Token(Token = "0x40000EC")]
	[FieldOffset(Offset = "0x20")]
	public FontAsset fontAsset;

	[Token(Token = "0x40000ED")]
	[FieldOffset(Offset = "0x28")]
	public SpriteAsset spriteAsset;

	[Token(Token = "0x40000EE")]
	[FieldOffset(Offset = "0x30")]
	public int spriteIndex;

	[Token(Token = "0x40000EF")]
	[FieldOffset(Offset = "0x38")]
	public Material material;

	[Token(Token = "0x40000F0")]
	[FieldOffset(Offset = "0x40")]
	public int materialReferenceIndex;

	[Token(Token = "0x40000F1")]
	[FieldOffset(Offset = "0x44")]
	public bool isUsingAlternateTypeface;

	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0x48")]
	public float pointSize;

	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0x4C")]
	public int lineNumber;

	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0x50")]
	public int pageNumber;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x54")]
	public int vertexIndex;

	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x58")]
	public TextVertex vertexTopLeft;

	[Token(Token = "0x40000F7")]
	[FieldOffset(Offset = "0x80")]
	public TextVertex vertexBottomLeft;

	[Token(Token = "0x40000F8")]
	[FieldOffset(Offset = "0xA8")]
	public TextVertex vertexTopRight;

	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0xD0")]
	public TextVertex vertexBottomRight;

	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0xF8")]
	public Vector3 topLeft;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x104")]
	public Vector3 bottomLeft;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x110")]
	public Vector3 topRight;

	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0x11C")]
	public Vector3 bottomRight;

	[Token(Token = "0x40000FE")]
	[FieldOffset(Offset = "0x128")]
	public float origin;

	[Token(Token = "0x40000FF")]
	[FieldOffset(Offset = "0x12C")]
	public float ascender;

	[Token(Token = "0x4000100")]
	[FieldOffset(Offset = "0x130")]
	public float baseLine;

	[Token(Token = "0x4000101")]
	[FieldOffset(Offset = "0x134")]
	public float descender;

	[Token(Token = "0x4000102")]
	[FieldOffset(Offset = "0x138")]
	internal float adjustedAscender;

	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0x13C")]
	internal float adjustedDescender;

	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0x140")]
	internal float adjustedHorizontalAdvance;

	[Token(Token = "0x4000105")]
	[FieldOffset(Offset = "0x144")]
	public float xAdvance;

	[Token(Token = "0x4000106")]
	[FieldOffset(Offset = "0x148")]
	public float aspectRatio;

	[Token(Token = "0x4000107")]
	[FieldOffset(Offset = "0x14C")]
	public float scale;

	[Token(Token = "0x4000108")]
	[FieldOffset(Offset = "0x150")]
	public Color32 color;

	[Token(Token = "0x4000109")]
	[FieldOffset(Offset = "0x154")]
	public Color32 underlineColor;

	[Token(Token = "0x400010A")]
	[FieldOffset(Offset = "0x158")]
	public int underlineVertexIndex;

	[Token(Token = "0x400010B")]
	[FieldOffset(Offset = "0x15C")]
	public Color32 strikethroughColor;

	[Token(Token = "0x400010C")]
	[FieldOffset(Offset = "0x160")]
	public int strikethroughVertexIndex;

	[Token(Token = "0x400010D")]
	[FieldOffset(Offset = "0x164")]
	public Color32 highlightColor;

	[Token(Token = "0x400010E")]
	[FieldOffset(Offset = "0x168")]
	public HighlightState highlightState;

	[Token(Token = "0x400010F")]
	[FieldOffset(Offset = "0x17C")]
	public FontStyles style;

	[Token(Token = "0x4000110")]
	[FieldOffset(Offset = "0x180")]
	public bool isVisible;

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x4B90C30", Offset = "0x4B90C30", VA = "0x4B90C30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
