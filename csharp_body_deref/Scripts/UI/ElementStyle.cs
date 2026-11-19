// ==================== AoTTG2 cross-reference ====================
// Type: UI.ElementStyle
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ElementStyle.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/ElementStyle.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20007DD")]
internal class ElementStyle
{
	[Token(Token = "0x4002772")]
	[FieldOffset(Offset = "0x10")]
	public int FontSize;

	[Token(Token = "0x4002773")]
	[FieldOffset(Offset = "0x14")]
	public float TitleWidth;

	[Token(Token = "0x4002774")]
	[FieldOffset(Offset = "0x18")]
	public string ThemePanel;

	[Token(Token = "0x4002775")]
	[FieldOffset(Offset = "0x20")]
	public float Spacing;

	[Token(Token = "0x4002776")]
	[FieldOffset(Offset = "0x0")]
	public static ElementStyle Default;

	[Token(Token = "0x6004BF5")]
	[Address(RVA = "0x5BEC570", Offset = "0x5BEB570", VA = "0x5BEC570")]
	public ElementStyle(int fontSize = 24, float titleWidth = 120f, float spacing = 20f, string themePanel = "DefaultPanel")
	{
	}
}
