// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextGenerationSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4EEC140", Offset = "0x4EEC140", VA = "0x4EEC140")]
	private bool CompareColors(Color left, Color right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000002")]
	[Address(RVA = "0x4EEC280", Offset = "0x4EEC280", VA = "0x4EEC280")]
	private bool CompareVector2(Vector2 left, Vector2 right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4EEC340", Offset = "0x4EEC340", VA = "0x4EEC340")]
	public bool Equals(TextGenerationSettings other)
	{
		return default(bool);
	}
}
