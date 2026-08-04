// ==================== AoTTG2 cross-reference ====================
// Type: UI.ElementStyle
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ElementStyle.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/ElementStyle.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20005E1")]
internal class ElementStyle
{
	[Token(Token = "0x4001C76")]
	[FieldOffset(Offset = "0x10")]
	public int FontSize;

	[Token(Token = "0x4001C77")]
	[FieldOffset(Offset = "0x14")]
	public float TitleWidth;

	[Token(Token = "0x4001C78")]
	[FieldOffset(Offset = "0x18")]
	public string ThemePanel;

	[Token(Token = "0x4001C79")]
	[FieldOffset(Offset = "0x20")]
	public float Spacing;

	[Token(Token = "0x4001C7A")]
	[FieldOffset(Offset = "0x0")]
	public static ElementStyle Default;

	[Token(Token = "0x6003C23")]
	[Address(RVA = "0x4277C30", Offset = "0x4277C30", VA = "0x4277C30")]
	public ElementStyle(int fontSize = 24, float titleWidth = 120f, float spacing = 20f, string themePanel = "DefaultPanel")
	{
	}
}
