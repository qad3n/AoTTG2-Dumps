using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000004")]
public struct TextGenerationSettings
{
	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x0")]
	public Font font;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x8")]
	public Color color;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x18")]
	public int fontSize;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x1C")]
	public float lineSpacing;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x20")]
	public bool richText;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x24")]
	public float scaleFactor;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x28")]
	public FontStyle fontStyle;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x2C")]
	public TextAnchor textAnchor;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x30")]
	public bool alignByGeometry;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x31")]
	public bool resizeTextForBestFit;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x34")]
	public int resizeTextMinSize;

	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x38")]
	public int resizeTextMaxSize;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x3C")]
	public bool updateBounds;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x40")]
	public VerticalWrapMode verticalOverflow;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x44")]
	public HorizontalWrapMode horizontalOverflow;

	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x48")]
	public Vector2 generationExtents;

	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x50")]
	public Vector2 pivot;

	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x58")]
	public bool generateOutOfBounds;

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x4BC4810", Offset = "0x4BC4810", VA = "0x4BC4810")]
	private bool CompareColors(Color left, Color right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4BC4950", Offset = "0x4BC4950", VA = "0x4BC4950")]
	private bool CompareVector2(Vector2 left, Vector2 right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4BC4A10", Offset = "0x4BC4A10", VA = "0x4BC4A10")]
	public bool Equals(TextGenerationSettings other)
	{
		return default(bool);
	}
}
