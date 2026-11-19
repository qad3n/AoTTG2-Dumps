// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgSettingsSearchPaletteDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsSearchPaletteDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200033E")]
[AottgDialog("aottg-settings-search-palette", Lifecycle = GisketchOverlayLifecycle.CachedReset)]
public sealed class AottgSettingsSearchPaletteDialog : AottgDialog
{
	[Token(Token = "0x4001031")]
	public const string Id = "aottg-settings-search-palette";

	[Token(Token = "0x17000238")]
	protected override string Title
	{
		[Token(Token = "0x6001458")]
		[Address(RVA = "0x5811ED0", Offset = "0x5810ED0", VA = "0x5811ED0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsSearchPaletteDialog.c (Gisketch.Aottg2UI.Game.AottgSettingsSearchPaletteDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("SettingsPopup.Search");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000239")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6001459")]
		[Address(RVA = "0x5811F30", Offset = "0x5810F30", VA = "0x5811F30", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsSearchPaletteDialog.c (Gisketch.Aottg2UI.Game.AottgSettingsSearchPaletteDialog$$get_TitleIcon): clean
			return "zoom";
		}
	}

	[Token(Token = "0x1700023A")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x600145A")]
		[Address(RVA = "0x5811F60", Offset = "0x5810F60", VA = "0x5811F60", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsSearchPaletteDialog.c (Gisketch.Aottg2UI.Game.AottgSettingsSearchPaletteDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLength maxWidth;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Percent(100.0);
			maxWidth = AottgUi.Points(960.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, maxWidth, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 180.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x600145B")]
	[Address(RVA = "0x5812040", Offset = "0x5811040", VA = "0x5812040", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsSearchPaletteDialog.c (Gisketch.Aottg2UI.Game.AottgSettingsSearchPaletteDialog$$BuildBody): clean
		String placeholder;

		placeholder = Aottg2GisketchLocale.Text("SettingsPopup.Search");
		if (body == null) {
			throw new NullReferenceException();
		}
		body.SearchPalette("aottg-settings-search-palette", placeholder, "settings", false, null);
		return;
	}

	[Token(Token = "0x600145C")]
	[Address(RVA = "0x58120F0", Offset = "0x58110F0", VA = "0x58120F0")]
	public AottgSettingsSearchPaletteDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSettingsSearchPaletteDialog.c (Gisketch.Aottg2UI.Game.AottgSettingsSearchPaletteDialog$$.ctor): clean
		base();
		return;
	}
}
