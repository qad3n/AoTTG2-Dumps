// ==================== AoTTG2 cross-reference ====================
// Type: UI.ElementStyle
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ElementStyle.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/ElementStyle.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
		// Lifted from source/cpp/UI/ElementStyle.c (UI.ElementStyle$$.ctor): clean
		base();
		this.FontSize = fontSize;
		this.TitleWidth = titleWidth;
		this.Spacing = spacing;
		this.ThemePanel = themePanel;
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/ElementStyle.c.

	// UI.ElementStyle$$.cctor: clean
	static ElementStyle()
	{
		String pSVar1;
		ElementStyle __this;

		pSVar1 = "DefaultPanel";
		__this = new ElementStyle();
		__this.FontSize = 0x18;
		__this.TitleWidth = 120.0;
		__this.Spacing = 20.0;
		__this.ThemePanel = pSVar1;
		ElementStyle.Default = __this;
		return;
	}
}
