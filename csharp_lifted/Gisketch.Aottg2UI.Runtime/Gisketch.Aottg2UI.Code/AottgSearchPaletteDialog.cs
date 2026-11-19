// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Code/AottgSearchPaletteDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Code;

[Token(Token = "0x2000086")]
[AottgDialog("aottg-search-palette")]
public sealed class AottgSearchPaletteDialog : AottgDialog
{
	[Token(Token = "0x17000081")]
	protected override string Title
	{
		[Token(Token = "0x6000412")]
		[Address(RVA = "0x52677D0", Offset = "0x52667D0", VA = "0x52677D0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgSearchPaletteDialog.c (Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog$$get_Title): clean
			return "AoTTG Search Palette";
		}
	}

	[Token(Token = "0x17000082")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000413")]
		[Address(RVA = "0x5267800", Offset = "0x5266800", VA = "0x5267800", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgSearchPaletteDialog.c (Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog$$get_TitleIcon): clean
			return "zoom";
		}
	}

	[Token(Token = "0x17000083")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000414")]
		[Address(RVA = "0x5267830", Offset = "0x5266830", VA = "0x5267830", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgSearchPaletteDialog.c (Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog$$get_RootLayout): clean
			GisketchLength __this_00;
			GisketchLength __this_01;
			GisketchLayoutDefinition pGVar1;

			__this_00 = new GisketchLength();
			if (__this_00 != null) {
				__this_00.value = 100.0;
				__this_00.unit = "percent";
				__this_01 = new GisketchLength();
				if (__this_01 != null) {
					__this_01.value = 960.0;
					__this_01.unit = "point";
					pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, __this_00, null, null, null, __this_01, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 180.0, 0.0, 1.0);
					return pGVar1;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x52679C0", Offset = "0x52669C0", VA = "0x52679C0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgSearchPaletteDialog.c (Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog$$BuildBody): clean


		if (body == null) {
			throw new NullReferenceException();
		}
		body.SearchPalette("aottg-search-palette", "Search current screen", null, false, null);
		return;
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x5267B50", Offset = "0x5266B50", VA = "0x5267B50")]
	public AottgSearchPaletteDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Code/AottgSearchPaletteDialog.c (Gisketch.Aottg2UI.Code.AottgSearchPaletteDialog$$.ctor): clean
		base();
		return;
	}
}
