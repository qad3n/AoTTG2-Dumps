// ==================== AoTTG2 cross-reference ====================
// Type: UI.ElementStyle
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ElementStyle.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/ElementStyle.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x2000735")]
internal class ElementStyle
{
	[Token(Token = "0x4002402")]
	[FieldOffset(Offset = "0x10")]
	public int FontSize;

	[Token(Token = "0x4002403")]
	[FieldOffset(Offset = "0x14")]
	public float TitleWidth;

	[Token(Token = "0x4002404")]
	[FieldOffset(Offset = "0x18")]
	public string ThemePanel;

	[Token(Token = "0x4002405")]
	[FieldOffset(Offset = "0x20")]
	public float Spacing;

	[Token(Token = "0x4002406")]
	[FieldOffset(Offset = "0x0")]
	public static ElementStyle Default;

	[Token(Token = "0x60046D5")]
	[Address(RVA = "0x2211560", Offset = "0x220FB60", VA = "0x182211560")]
	public ElementStyle(int fontSize = 24, float titleWidth = 120f, float spacing = 20f, string themePanel = "DefaultPanel")
	{
	}
}
