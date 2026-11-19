// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgPauseSearchPaletteDialog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgPauseSearchPaletteDialog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200028E")]
[AottgDialog("aottg-pause-search-palette", Lifecycle = GisketchOverlayLifecycle.CachedReset)]
public sealed class AottgPauseSearchPaletteDialog : AottgDialog
{
	[Token(Token = "0x4000D15")]
	public const string Id = "aottg-pause-search-palette";

	[Token(Token = "0x1700019F")]
	protected override string Title
	{
		[Token(Token = "0x6000F93")]
		[Address(RVA = "0x57B4E40", Offset = "0x57B3E40", VA = "0x57B4E40", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPauseSearchPaletteDialog.c (Gisketch.Aottg2UI.Game.AottgPauseSearchPaletteDialog$$get_Title): clean
			String pSVar1;

			pSVar1 = Aottg2GisketchLocale.Text("Common.Search");
			return pSVar1;
		}
	}

	[Token(Token = "0x170001A0")]
	protected override string TitleIcon
	{
		[Token(Token = "0x6000F94")]
		[Address(RVA = "0x57B4EA0", Offset = "0x57B3EA0", VA = "0x57B4EA0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPauseSearchPaletteDialog.c (Gisketch.Aottg2UI.Game.AottgPauseSearchPaletteDialog$$get_TitleIcon): clean
			return "zoom";
		}
	}

	[Token(Token = "0x170001A1")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000F95")]
		[Address(RVA = "0x57B4ED0", Offset = "0x57B3ED0", VA = "0x57B4ED0", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPauseSearchPaletteDialog.c (Gisketch.Aottg2UI.Game.AottgPauseSearchPaletteDialog$$get_RootLayout): clean
			GisketchLength width;
			GisketchLength maxWidth;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Percent(100.0);
			maxWidth = AottgUi.Points(960.0);
			pGVar1 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, width, null, null, null, maxWidth, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 180.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6000F96")]
	[Address(RVA = "0x57B4FB0", Offset = "0x57B3FB0", VA = "0x57B4FB0", Slot = "20")]
	protected override void BuildBody(AottgUi body)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPauseSearchPaletteDialog.c (Gisketch.Aottg2UI.Game.AottgPauseSearchPaletteDialog$$BuildBody): clean
		String placeholder;
		String[] extraScopeScreenIds;

		placeholder = Aottg2GisketchLocale.Text("Common.Search");
		extraScopeScreenIds = (String[])new string[1];
		if (extraScopeScreenIds != null) {
			if ((int)extraScopeScreenIds.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			extraScopeScreenIds[0] = "settings";
			if (body != null) {
				body.SearchPalette("aottg-pause-search-palette", placeholder, "pause", false, extraScopeScreenIds);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F97")]
	[Address(RVA = "0x57B50D0", Offset = "0x57B40D0", VA = "0x57B50D0")]
	public AottgPauseSearchPaletteDialog()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPauseSearchPaletteDialog.c (Gisketch.Aottg2UI.Game.AottgPauseSearchPaletteDialog$$.ctor): clean
		base();
		return;
	}
}
