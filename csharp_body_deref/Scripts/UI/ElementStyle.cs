using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x200059C")]
internal class ElementStyle
{
	[Token(Token = "0x4001B63")]
	[FieldOffset(Offset = "0x10")]
	public int FontSize;

	[Token(Token = "0x4001B64")]
	[FieldOffset(Offset = "0x14")]
	public float TitleWidth;

	[Token(Token = "0x4001B65")]
	[FieldOffset(Offset = "0x18")]
	public string ThemePanel;

	[Token(Token = "0x4001B66")]
	[FieldOffset(Offset = "0x20")]
	public float Spacing;

	[Token(Token = "0x4001B67")]
	[FieldOffset(Offset = "0x0")]
	public static ElementStyle Default;

	[Token(Token = "0x6003A13")]
	[Address(RVA = "0x3F6A4B0", Offset = "0x3F6A4B0", VA = "0x3F6A4B0")]
	public ElementStyle(int fontSize = 24, float titleWidth = 120f, float spacing = 20f, string themePanel = "DefaultPanel")
	{
	}
}
