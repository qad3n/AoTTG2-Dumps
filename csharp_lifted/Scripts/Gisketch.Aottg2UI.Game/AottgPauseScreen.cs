// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgPauseScreen
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgPauseScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200028D")]
[AottgScreen("pause", TitleKey = "Common.Paused", SearchTitleKey = "Common.Paused", SearchGroup = "in-game", BackActionId = "pause.back")]
public sealed class AottgPauseScreen : AottgScreen
{
	[Token(Token = "0x4000D14")]
	public const string Id = "pause";

	[Token(Token = "0x1700019D")]
	protected override string RootStyle
	{
		[Token(Token = "0x6000F8F")]
		[Address(RVA = "0x57B4680", Offset = "0x57B3680", VA = "0x57B4680", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPauseScreen.c (Gisketch.Aottg2UI.Game.AottgPauseScreen$$get_RootStyle): clean
			return "mainMenuOverlay";
		}
	}

	[Token(Token = "0x1700019E")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6000F90")]
		[Address(RVA = "0x57B46B0", Offset = "0x57B36B0", VA = "0x57B46B0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPauseScreen.c (Gisketch.Aottg2UI.Game.AottgPauseScreen$$get_RootLayout): clean
			GisketchLength width;
			GisketchLength height;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Percent(100.0);
			height = AottgUi.Percent(100.0);
			pGVar1 = AottgUi.Layout("Column", "FlexStart", "FlexStart", null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6000F91")]
	[Address(RVA = "0x57B4780", Offset = "0x57B3780", VA = "0x57B4780", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPauseScreen.c (Gisketch.Aottg2UI.Game.AottgPauseScreen$$Build): 10 lines keep C-only constructs
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;
		AottgBrushSidePanelOption[] options;
		AottgBrushSidePanelOption[] footerOptions;
		String tooltip;
		AottgBrushSidePanel __this_00;
		AottgBrushSidePanelOption local_1a8;
		AottgBrushSidePanelOption local_158;
		AottgBrushSidePanelOption local_108;
		AottgBrushSidePanelOption local_b8;
		AottgBrushSidePanelOption local_68;

		width = AottgUi.Percent(100.0);
		height = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Column", null, null, "Absolute", null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (ui != null) {
			ui.Panel("inGamePauseDimOverlay", null, "pause-dim-overlay", layout, null);
			options = (AottgBrushSidePanelOption[])new AottgBrushSidePanelOption[2];
			local_68.Searchable = false;
			local_68._49_7_ = 0;
			local_68.Tooltip = null;
			local_68.ActionId = null;
			local_68.Action = null;
			local_68.TextKey = null;
			local_68.Icon = null;
			local_68._text = null;
			local_68.Id = null;
			local_68.StackedOptions = null;
			local_68 = new AottgBrushSidePanelOption("settings", "Common.Settings", "pause.settings", "gear", true, null);
			if (options != null) {
				if ((int)options.Length != 0) {
					options[0].StackedOptions = local_68.StackedOptions;
					options[0].Searchable = local_68.Searchable;
					*(undefined7)&options[0].field_0x31 = local_68._49_7_;
					options[0].Tooltip = local_68.Tooltip;
					options[0].ActionId = local_68.ActionId;
					options[0].Action = local_68.Action;
					options[0].TextKey = local_68.TextKey;
					options[0].Icon = local_68.Icon;
					options[0]._text = local_68._text;
					options[0].Id = local_68.Id;
					local_b8.Searchable = false;
					local_b8._49_7_ = 0;
					local_b8.Tooltip = null;
					local_b8.ActionId = null;
					local_b8.Action = null;
					local_b8.TextKey = null;
					local_b8.Icon = null;
					local_b8._text = null;
					local_b8.Id = null;
					local_b8.StackedOptions = null;
					local_b8 = new AottgBrushSidePanelOption("game", "Common.Game", "pause.game", "singleplayer", false, null);
					if ((options.Length & 0xfffffffe) != 0) {
						options[1].StackedOptions = local_b8.StackedOptions;
						options[1].Searchable = local_b8.Searchable;
						*(undefined7)&options[1].field_0x31 = local_b8._49_7_;
						options[1].Tooltip = local_b8.Tooltip;
						options[1].ActionId = local_b8.ActionId;
						options[1].Action = local_b8.Action;
						options[1].TextKey = local_b8.TextKey;
						options[1].Icon = local_b8.Icon;
						options[1]._text = local_b8._text;
						options[1].Id = local_b8.Id;
						footerOptions =(AottgBrushSidePanelOption[])new AottgBrushSidePanelOption[3];
						local_108.Searchable = false;
						local_108._49_7_ = 0;
						local_108.Tooltip = null;
						local_108.ActionId = null;
						local_108.Action = null;
						local_108.TextKey = null;
						local_108.Icon = null;
						local_108._text = null;
						local_108.Id = null;
						local_108.StackedOptions = null;
						local_108 = new AottgBrushSidePanelOption("quit", "Common.Quit", "pause.quit", "exit", false, null);
						if (footerOptions == null) goto label_058b4e28;
						if ((int)footerOptions.Length != 0) {
							footerOptions[0].StackedOptions = local_108.StackedOptions;
							footerOptions[0].Searchable = local_108.Searchable;
							*(undefined7)&footerOptions[0].field_0x31 = local_108._49_7_;
							footerOptions[0].Tooltip = local_108.Tooltip;
							footerOptions[0].ActionId = local_108.ActionId;
							footerOptions[0].Action = local_108.Action;
							footerOptions[0].TextKey = local_108.TextKey;
							footerOptions[0].Icon = local_108.Icon;
							footerOptions[0]._text = local_108._text;
							footerOptions[0].Id = local_108.Id;
							tooltip = AottgSearchShortcuts.CurrentScreenTooltip();
							local_158.Searchable = false;
							local_158._49_7_ = 0;
							local_158.Tooltip = null;
							local_158.ActionId = null;
							local_158.Action = null;
							local_158.TextKey = null;
							local_158.Icon = null;
							local_158._text = null;
							local_158.Id = null;
							local_158.StackedOptions = null;
							local_158 = new AottgBrushSidePanelOption("search", "Common.Search", "dialog.aottg-pause-search-palette", "zoom", false, tooltip);
							if ((footerOptions.Length & 0xfffffffe) != 0) {
								footerOptions[1].StackedOptions = local_158.StackedOptions;
								footerOptions[1].Searchable = local_158.Searchable;
								*(undefined7)&footerOptions[1].field_0x31 = local_158._49_7_;
								footerOptions[1].Tooltip = local_158.Tooltip;
								footerOptions[1].ActionId = local_158.ActionId;
								footerOptions[1].Action = local_158.Action;
								footerOptions[1].TextKey = local_158.TextKey;
								footerOptions[1].Icon = local_158.Icon;
								footerOptions[1]._text = local_158._text;
								footerOptions[1].Id = local_158.Id;
								local_1a8.Searchable = false;
								local_1a8._49_7_ = 0;
								local_1a8.Tooltip = null;
								local_1a8.ActionId = null;
								local_1a8.Action = null;
								local_1a8.TextKey = null;
								local_1a8.Icon = null;
								local_1a8._text = null;
								local_1a8.Id = null;
								local_1a8.StackedOptions = null;
								local_1a8 = new AottgBrushSidePanelOption("back", "Common.Back", "pause.back", "return", false, null);
								if (2 < (uint)footerOptions.Length) {
									footerOptions[2].StackedOptions = local_1a8.StackedOptions;
									footerOptions[2].Searchable = local_1a8.Searchable;
									*(undefined7)&footerOptions[2].field_0x31 = local_1a8._49_7_;
									footerOptions[2].Tooltip = local_1a8.Tooltip;
									footerOptions[2].ActionId = local_1a8.ActionId;
									footerOptions[2].Action = local_1a8.Action;
									footerOptions[2].TextKey = local_1a8.TextKey;
									footerOptions[2].Icon = local_1a8.Icon;
									footerOptions[2]._text = local_1a8._text;
									footerOptions[2].Id = local_1a8.Id;
									__this_00 = new AottgBrushSidePanel("Common.Paused", options, footerOptions, 0.0);
									ui.Component((AottgComponent)__this_00);
									return;
								}
							}
						}
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
	label_058b4e28: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F92")]
	[Address(RVA = "0x57B4E30", Offset = "0x57B3E30", VA = "0x57B4E30")]
	public AottgPauseScreen()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgPauseScreen.c (Gisketch.Aottg2UI.Game.AottgPauseScreen$$.ctor): clean
		base();
		return;
	}
}
