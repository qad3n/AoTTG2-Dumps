// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgRoomListScreen
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgRoomListScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002D6")]
[AottgScreen("room-list", TitleKey = "MainMenu.MultiplayerSettingsPopup.Lobby", SearchTitleKey = "MainMenu.MultiplayerSettingsPopup.Lobby", BackActionId = "multiplayer.room-list.back")]
public sealed class AottgRoomListScreen : AottgScreen
{
	[Token(Token = "0x4000E65")]
	public const string Id = "room-list";

	[Token(Token = "0x4000E66")]
	private const string TitleKey = "MainMenu.MultiplayerSettingsPopup.Lobby";

	[Token(Token = "0x4000E67")]
	private const float ListGap = 12f;

	[Token(Token = "0x170001F0")]
	protected override string RootStyle
	{
		[Token(Token = "0x600113B")]
		[Address(RVA = "0x57D0D80", Offset = "0x57CFD80", VA = "0x57D0D80", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomListScreen.c (Gisketch.Aottg2UI.Game.AottgRoomListScreen$$get_RootStyle): clean
			return "mainMenuOverlay";
		}
	}

	[Token(Token = "0x170001F1")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x600113C")]
		[Address(RVA = "0x57D0DB0", Offset = "0x57CFDB0", VA = "0x57D0DB0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomListScreen.c (Gisketch.Aottg2UI.Game.AottgRoomListScreen$$get_RootLayout): clean
			GisketchLength width;
			GisketchLength height;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Percent(100.0);
			height = AottgUi.Percent(100.0);
			pGVar1 = AottgUi.Layout("Column", "FlexStart", "FlexStart", null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x600113D")]
	[Address(RVA = "0x57D0E80", Offset = "0x57CFE80", VA = "0x57D0E80", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomListScreen.c (Gisketch.Aottg2UI.Game.AottgRoomListScreen$$Build): 2 lines keep C-only constructs
		String pSVar1;
		String pSVar2;
		AottgBrushSidePanelOption[] options;
		AottgBrushSidePanelOption[] footerOptions;
		AottgBrushSidePanel __this_00;
		Action<AottgUi> __this_01;
		AottgScreenWithBrushSidePanel __this_02;
		AottgMenuStatusLabel __this_03;

		if (Il2CppMethodInitialized_0754546f == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgScreenWithBrushSidePanel)) ;
			Il2CppMethodInitialized_0754546f = true;
		}
		options = AottgRoomListScreen.Options();
		footerOptions = AottgRoomListScreen.FooterOptions();
		__this_00 = new AottgBrushSidePanel("MainMenu.MultiplayerSettingsPopup.Lobby", options, footerOptions, 120.0);
		__this_01 = new Action<AottgUi>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomListScreen_BuildContent);
		__this_02 = new AottgScreenWithBrushSidePanel(__this_00, __this_01, null, 0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Component((AottgComponent)__this_02);
		pSVar2 = "room-list-status";
		pSVar1 = "menuStatusText";
		__this_03 = new AottgMenuStatusLabel();
		__this_03._id = pSVar2;
		__this_03._style = pSVar1;
		ui.Component((AottgComponent)__this_03);
		return;
	}

	[Token(Token = "0x600113E")]
	[Address(RVA = "0x57D1040", Offset = "0x57D0040", VA = "0x57D1040")]
	private static AottgBrushSidePanelOption[] Options()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomListScreen.c (Gisketch.Aottg2UI.Game.AottgRoomListScreen$$Options): 2 lines keep C-only constructs
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
		local_58 = new AottgBrushSidePanelOption("create", "Common.Create", "multiplayer.room-list.create", "plus", false, null);
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

	[Token(Token = "0x600113F")]
	[Address(RVA = "0x57D1160", Offset = "0x57D0160", VA = "0x57D1160")]
	private static AottgBrushSidePanelOption[] FooterOptions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomListScreen.c (Gisketch.Aottg2UI.Game.AottgRoomListScreen$$FooterOptions): 2 lines keep C-only constructs
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
		local_58 = new AottgBrushSidePanelOption("back", "Common.Back", "multiplayer.room-list.back", "exitLeft", false, null);
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

	[Token(Token = "0x6001140")]
	[Address(RVA = "0x57D1280", Offset = "0x57D0280", VA = "0x57D1280")]
	private static void BuildContent(AottgUi content)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomListScreen.c (Gisketch.Aottg2UI.Game.AottgRoomListScreen$$BuildContent): 1 lines keep C-only constructs
		object @object;
		String pSVar1;
		AottgCustomServerWarning __this;
		Gisketch_Aottg2UI_Game_AottgRoomListScreen___c_StaticFields pGVar2;
		Action<AottgUi> __this_00;
		GisketchLength pGVar3;
		GisketchLayoutDefinition pGVar4;
		GisketchNodeDefinition __this_01;
		GisketchLength height;

		pSVar1 = "room-list-custom-warning";
		__this = new AottgCustomServerWarning();
		__this._id = pSVar1;
		__this._placement = null;
		if (content != null) {
			content.Component((AottgComponent)__this);
			pSVar1 = "clear";
			pGVar2 = typeof(AottgRoomListScreen.c).static_fields;
			__this_00 = pGVar2.__9__10_0;
			if (__this_00 == null) {
				if ((typeof(AottgRoomListScreen.c)._2).cctor_finished_or_no_cctor == 0) {
					pGVar2 = typeof(AottgRoomListScreen.c).static_fields;
				}
				@object = (object)pGVar2.__9;
				__this_00 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgRoomListScreen_c_BuildContent_b__10_0);
				pGVar2 = typeof(AottgRoomListScreen.c).static_fields;
				pGVar2.__9__10_0 = __this_00;
			}
			pGVar3 = AottgUi.Percent(100.0);
			pGVar4 = AottgUi.Layout("Column", null, "Stretch", null, null, 12.0, pGVar3, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			content.Panel(pSVar1, __this_00, "room-list-list", pGVar4, null);
			__this_01 = new GisketchNodeDefinition();
			if (__this_01 != null) {
				__this_01.type = "AottgRoomListRefresher";
				__this_01.id = "room-list-refresher";
				pGVar3 = AottgUi.Points(0.0);
				height = AottgUi.Points(0.0);
				pGVar4 = AottgUi.Layout("Column", null, null, "Absolute", null, 0.0, pGVar3, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				__this_01.layout = pGVar4;
				content.Add(__this_01);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001141")]
	[Address(RVA = "0x57D1610", Offset = "0x57D0610", VA = "0x57D1610")]
	static AottgRoomListScreen()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomListScreen.c (Gisketch.Aottg2UI.Game.AottgRoomListScreen$$.cctor): clean
		AottgRoomListRefresher.RegisterFactory();
		return;
	}

	[Token(Token = "0x6001142")]
	[Address(RVA = "0x57D17A0", Offset = "0x57D07A0", VA = "0x57D17A0")]
	public AottgRoomListScreen()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomListScreen.c (Gisketch.Aottg2UI.Game.AottgRoomListScreen$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgRoomListScreen.c.

	// Gisketch.Aottg2UI.Game.AottgRoomListScreen.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgRoomListScreen.c();
		AottgRoomListScreen.c.__9 =(AottgRoomListScreen.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgRoomListScreen.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgRoomListScreen.<>c$$<BuildContent>b__10_0: clean
	private void c__BuildContent_b__10_0(AottgUi list)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_07545474 == false) {
			Il2CppMethodInitialized_07545474 = true;
			uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgRoomList)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			AottgRoomList.BuildHeader(list);
		}
		else {
			AottgRoomList.BuildHeader(list);
		}
		if (list == null) {
			throw new NullReferenceException();
		}
		list.Separator(null, null);
		AottgRoomList.Build(list);
		return;
	}
}
