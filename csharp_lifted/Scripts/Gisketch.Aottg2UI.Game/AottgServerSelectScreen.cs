// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgServerSelectScreen
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002E3")]
[AottgScreen("server-select", TitleKey = "MainMenu.Intro.MultiplayerButton", SearchTitleKey = "MainMenu.Intro.MultiplayerButton", SearchGroup = "main-menu", BackActionId = "multiplayer.server-select.back")]
public sealed class AottgServerSelectScreen : AottgScreen
{
	[Token(Token = "0x4000E9D")]
	public const string Id = "server-select";

	[Token(Token = "0x4000E9E")]
	public const float SidePanelOffsetY = 120f;

	[Token(Token = "0x4000E9F")]
	private const string TitleKey = "MainMenu.Intro.MultiplayerButton";

	[Token(Token = "0x4000EA0")]
	private const float WarningWidth = 860f;

	[Token(Token = "0x170001F7")]
	protected override string RootStyle
	{
		[Token(Token = "0x6001180")]
		[Address(RVA = "0x57D4AE0", Offset = "0x57D3AE0", VA = "0x57D4AE0", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectScreen.c (Gisketch.Aottg2UI.Game.AottgServerSelectScreen$$get_RootStyle): clean
			return "mainMenuOverlay";
		}
	}

	[Token(Token = "0x170001F8")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6001181")]
		[Address(RVA = "0x57D4B10", Offset = "0x57D3B10", VA = "0x57D4B10", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectScreen.c (Gisketch.Aottg2UI.Game.AottgServerSelectScreen$$get_RootLayout): clean
			GisketchLength width;
			GisketchLength height;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Percent(100.0);
			height = AottgUi.Percent(100.0);
			pGVar1 = AottgUi.Layout("Column", "FlexStart", "FlexStart", null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6001182")]
	[Address(RVA = "0x57D4BE0", Offset = "0x57D3BE0", VA = "0x57D4BE0", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectScreen.c (Gisketch.Aottg2UI.Game.AottgServerSelectScreen$$Build): 3 lines keep C-only constructs
		String pSVar1;
		String pSVar2;
		AottgBrushSidePanelOption[] options;
		AottgBrushSidePanelOption[] footerOptions;
		AottgBrushSidePanel __this_00;
		Action<AottgUi> __this_01;
		AottgScreenWithBrushSidePanel __this_02;
		AottgMenuStatusLabel __this_03;
		String* ppSVar3;

		if (Il2CppMethodInitialized_07545498 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgScreenWithBrushSidePanel)) ;
			ppSVar3 = &"server-select-status";
			Il2CppMethodInitialized_07545498 = true;
			this = (AottgServerSelectScreen)ppSVar3;
		}
		options = AottgServerSelectScreen.Options();
		footerOptions = AottgServerSelectScreen.FooterOptions();
		__this_00 = new AottgBrushSidePanel("MainMenu.Intro.MultiplayerButton", options, footerOptions, 120.0);
		__this_01 = new Action<AottgUi>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgServerSelectScreen_BuildContent);
		__this_02 = new AottgScreenWithBrushSidePanel(__this_00, __this_01, null, 1);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Component((AottgComponent)__this_02);
		pSVar2 = "server-select-status";
		pSVar1 = "menuStatusText";
		__this_03 = new AottgMenuStatusLabel();
		__this_03._id = pSVar2;
		__this_03._style = pSVar1;
		ui.Component((AottgComponent)__this_03);
		return;
	}

	[Token(Token = "0x6001183")]
	[Address(RVA = "0x57D51B0", Offset = "0x57D41B0", VA = "0x57D51B0")]
	private static void BuildContent(AottgUi content)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectScreen.c (Gisketch.Aottg2UI.Game.AottgServerSelectScreen$$BuildContent): clean
		String pSVar1;
		AottgServerSelectMap __this;
		GisketchLength width;
		GisketchLayoutDefinition pGVar2;
		AottgCustomServerWarning __this_00;

		__this = new AottgServerSelectMap();
		if (content == null) {
			throw new NullReferenceException();
		}
		content.Component((AottgComponent)__this);
		width = AottgUi.Points(860.0);
		pGVar2 = AottgUi.Layout("Column", null, null, "Absolute", null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 582.0, -56.0, 0.0, 1.0);
		pSVar1 = "server-select-custom-warning";
		__this_00 = new AottgCustomServerWarning();
		__this_00._id = pSVar1;
		__this_00._placement = pGVar2;
		content.Component((AottgComponent)__this_00);
		return;
	}

	[Token(Token = "0x6001184")]
	[Address(RVA = "0x57D4D80", Offset = "0x57D3D80", VA = "0x57D4D80")]
	private static AottgBrushSidePanelOption[] Options()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectScreen.c (Gisketch.Aottg2UI.Game.AottgServerSelectScreen$$Options): 2 lines keep C-only constructs
		AottgBrushSidePanelOption[] pGVar1;
		AottgBrushSidePanelOption local_58;

		pGVar1 = (AottgBrushSidePanelOption[])new AottgBrushSidePanelOption[1];
		local_58.Searchable = false;
		local_58._49_7_ = 0;
		local_58.Tooltip = null;
		local_58.ActionId = null;
		local_58.Action = null;
		local_58.TextKey = null;
		local_58.Icon = null;
		local_58._text = null;
		local_58.Id = null;
		local_58.StackedOptions = null;
		local_58 = new AottgBrushSidePanelOption("quick-play", "MainMenu.QuickPlay.Title", "multiplayer.quick-play", "multiplayer", false, null);
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		if ((int)pGVar1.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		pGVar1[0].StackedOptions = local_58.StackedOptions;
		pGVar1[0].Searchable = local_58.Searchable;
		*(undefined7)&pGVar1[0].field_0x31 = local_58._49_7_;
		pGVar1[0].Tooltip = local_58.Tooltip;
		pGVar1[0].ActionId = local_58.ActionId;
		pGVar1[0].Action = local_58.Action;
		pGVar1[0].TextKey = local_58.TextKey;
		pGVar1[0].Icon = local_58.Icon;
		pGVar1[0]._text = local_58._text;
		pGVar1[0].Id = local_58.Id;
		return pGVar1;
	}

	[Token(Token = "0x6001185")]
	[Address(RVA = "0x57D4EA0", Offset = "0x57D3EA0", VA = "0x57D4EA0")]
	private static AottgBrushSidePanelOption[] FooterOptions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectScreen.c (Gisketch.Aottg2UI.Game.AottgServerSelectScreen$$FooterOptions): 6 lines keep C-only constructs
		AottgBrushSidePanelOption[] pGVar1;
		AottgBrushSidePanelOption local_f8;
		AottgBrushSidePanelOption local_a8;
		AottgBrushSidePanelOption local_58;

		pGVar1 = (AottgBrushSidePanelOption[])new AottgBrushSidePanelOption[3];
		local_58.Searchable = false;
		local_58._49_7_ = 0;
		local_58.Tooltip = null;
		local_58.ActionId = null;
		local_58.Action = null;
		local_58.TextKey = null;
		local_58.Icon = null;
		local_58._text = null;
		local_58.Id = null;
		local_58.StackedOptions = null;
		local_58 = new AottgBrushSidePanelOption("server-settings", "MainMenu.MultiplayerMapPopup.ServerSettings", "dialog.multiplayer-settings", "gear", false, null);
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		if ((int)pGVar1.Length != 0) {
			pGVar1[0].StackedOptions = local_58.StackedOptions;
			pGVar1[0].Searchable = local_58.Searchable;
			*(undefined7)&pGVar1[0].field_0x31 = local_58._49_7_;
			pGVar1[0].Tooltip = local_58.Tooltip;
			pGVar1[0].ActionId = local_58.ActionId;
			pGVar1[0].Action = local_58.Action;
			pGVar1[0].TextKey = local_58.TextKey;
			pGVar1[0].Icon = local_58.Icon;
			pGVar1[0]._text = local_58._text;
			pGVar1[0].Id = local_58.Id;
			local_a8.Searchable = false;
			local_a8._49_7_ = 0;
			local_a8.Tooltip = null;
			local_a8.ActionId = null;
			local_a8.Action = null;
			local_a8.TextKey = null;
			local_a8.Icon = null;
			local_a8._text = null;
			local_a8.Id = null;
			local_a8.StackedOptions = null;
			local_a8 = new AottgBrushSidePanelOption("direct-connect", "MainMenu.MultiplayerLanPopup.Title", "dialog.multiplayer-direct-connect", "share2", false, null);
			if ((pGVar1.Length & 0xfffffffe) != 0) {
				pGVar1[1].StackedOptions = local_a8.StackedOptions;
				pGVar1[1].Searchable = local_a8.Searchable;
				*(undefined7)&pGVar1[1].field_0x31 = local_a8._49_7_;
				pGVar1[1].Tooltip = local_a8.Tooltip;
				pGVar1[1].ActionId = local_a8.ActionId;
				pGVar1[1].Action = local_a8.Action;
				pGVar1[1].TextKey = local_a8.TextKey;
				pGVar1[1].Icon = local_a8.Icon;
				pGVar1[1]._text = local_a8._text;
				pGVar1[1].Id = local_a8.Id;
				local_f8.Searchable = false;
				local_f8._49_7_ = 0;
				local_f8.Tooltip = null;
				local_f8.ActionId = null;
				local_f8.Action = null;
				local_f8.TextKey = null;
				local_f8.Icon = null;
				local_f8._text = null;
				local_f8.Id = null;
				local_f8.StackedOptions = null;
				local_f8 = new AottgBrushSidePanelOption("back", "Common.Back", "multiplayer.server-select.back", "exitLeft", false, null);
				if (2 < (uint)pGVar1.Length) {
					pGVar1[2].StackedOptions = local_f8.StackedOptions;
					pGVar1[2].Searchable = local_f8.Searchable;
					*(undefined7)&pGVar1[2].field_0x31 = local_f8._49_7_;
					pGVar1[2].Tooltip = local_f8.Tooltip;
					pGVar1[2].ActionId = local_f8.ActionId;
					pGVar1[2].Action = local_f8.Action;
					pGVar1[2].TextKey = local_f8.TextKey;
					pGVar1[2].Icon = local_f8.Icon;
					pGVar1[2]._text = local_f8._text;
					pGVar1[2].Id = local_f8.Id;
					return pGVar1;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6001186")]
	[Address(RVA = "0x57D5330", Offset = "0x57D4330", VA = "0x57D5330")]
	public AottgServerSelectScreen()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgServerSelectScreen.c (Gisketch.Aottg2UI.Game.AottgServerSelectScreen$$.ctor): clean
		base();
		return;
	}
}
