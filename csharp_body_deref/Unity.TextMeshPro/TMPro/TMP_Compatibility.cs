using Il2CppDummyDll;

namespace TMPro;

[Token(Token = "0x2000014")]
public static class TMP_Compatibility
{
	[Token(Token = "0x2000015")]
	public enum AnchorPositions
	{
		[Token(Token = "0x4000065")]
		TopLeft,
		[Token(Token = "0x4000066")]
		Top,
		[Token(Token = "0x4000067")]
		TopRight,
		[Token(Token = "0x4000068")]
		Left,
		[Token(Token = "0x4000069")]
		Center,
		[Token(Token = "0x400006A")]
		Right,
		[Token(Token = "0x400006B")]
		BottomLeft,
		[Token(Token = "0x400006C")]
		Bottom,
		[Token(Token = "0x400006D")]
		BottomRight,
		[Token(Token = "0x400006E")]
		BaseLine,
		[Token(Token = "0x400006F")]
		None
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x48F8000", Offset = "0x48F8000", VA = "0x48F8000")]
	public static TextAlignmentOptions ConvertTextAlignmentEnumValues(TextAlignmentOptions oldValue)
	{
		return default(TextAlignmentOptions);
	}
}
