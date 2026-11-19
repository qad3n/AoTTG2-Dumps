// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorErrorPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorErrorPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorErrorPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace UI;

[Token(Token = "0x20008A4")]
internal class MapEditorErrorPopup : ExportPopup
{
	[Token(Token = "0x17000E7F")]
	protected override string Title
	{
		[Token(Token = "0x600524E")]
		[Address(RVA = "0x5C71790", Offset = "0x5C70790", VA = "0x5C71790", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorErrorPopup.c (UI.MapEditorErrorPopup$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocale("MapEditor", "Errors", "Title", "", "");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000E80")]
	protected override float Width
	{
		[Token(Token = "0x600524F")]
		[Address(RVA = "0x5C71830", Offset = "0x5C70830", VA = "0x5C71830", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorErrorPopup.c (UI.MapEditorErrorPopup$$get_Width): clean
			return 500.0;
		}
	}

	[Token(Token = "0x17000E81")]
	protected override float Height
	{
		[Token(Token = "0x6005250")]
		[Address(RVA = "0x5C71840", Offset = "0x5C70840", VA = "0x5C71840", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorErrorPopup.c (UI.MapEditorErrorPopup$$get_Height): clean
			return 590.0;
		}
	}

	[Token(Token = "0x17000E82")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6005251")]
		[Address(RVA = "0x5C71850", Offset = "0x5C70850", VA = "0x5C71850", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorErrorPopup.c (UI.MapEditorErrorPopup$$get_VerticalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000E83")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6005252")]
		[Address(RVA = "0x5C71860", Offset = "0x5C70860", VA = "0x5C71860", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorErrorPopup.c (UI.MapEditorErrorPopup$$get_HorizontalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x6005253")]
	[Address(RVA = "0x5C71870", Offset = "0x5C70870", VA = "0x5C71870")]
	public MapEditorErrorPopup()
	{
		// Lifted from source/cpp/UI/MapEditorErrorPopup.c (UI.MapEditorErrorPopup$$.ctor): clean
		base();
		return;
	}
}
