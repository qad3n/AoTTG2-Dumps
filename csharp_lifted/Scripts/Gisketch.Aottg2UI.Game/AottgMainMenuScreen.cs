// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMainMenuScreen
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuScreen.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002AC")]
[AottgScreen("main-menu", TitleKey = "MainMenu.Intro.Title", SearchTitleKey = "Common.Menu", SearchGroup = "main-menu")]
public sealed class AottgMainMenuScreen : AottgScreen
{
	[Token(Token = "0x4000DB2")]
	public const string Id = "main-menu";

	[Token(Token = "0x4000DB3")]
	private const string AccountBannerMotion = "mainMenuTipPanel";

	[Token(Token = "0x4000DB4")]
	private const float AccountBannerMobileSafeOffsetY = 0f;

	[Token(Token = "0x170001C7")]
	protected override string RootStyle
	{
		[Token(Token = "0x6001046")]
		[Address(RVA = "0x57C1660", Offset = "0x57C0660", VA = "0x57C1660", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuScreen.c (Gisketch.Aottg2UI.Game.AottgMainMenuScreen$$get_RootStyle): clean
			return "mainMenuOverlay";
		}
	}

	[Token(Token = "0x170001C8")]
	protected override GisketchLayoutDefinition RootLayout
	{
		[Token(Token = "0x6001047")]
		[Address(RVA = "0x57C1690", Offset = "0x57C0690", VA = "0x57C1690", Slot = "5")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuScreen.c (Gisketch.Aottg2UI.Game.AottgMainMenuScreen$$get_RootLayout): clean
			GisketchLength width;
			GisketchLength height;
			GisketchLayoutDefinition pGVar1;

			width = AottgUi.Percent(100.0);
			height = AottgUi.Percent(100.0);
			pGVar1 = AottgUi.Layout("Column", "FlexStart", "FlexStart", null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			return pGVar1;
		}
	}

	[Token(Token = "0x6001048")]
	[Address(RVA = "0x57C1760", Offset = "0x57C0760", VA = "0x57C1760", Slot = "6")]
	protected override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuScreen.c (Gisketch.Aottg2UI.Game.AottgMainMenuScreen$$Build): 1 lines keep C-only constructs
		object @object;
		String pSVar1;
		String pSVar2;
		AottgMainMenuPanel __this_00;
		AottgMainMenuTipPanel __this_01;
		Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c_StaticFields pGVar3;
		Action<AottgUi> __this_02;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar4;
		GisketchMotionDefinition pGVar5;
		AottgMenuStatusLabel __this_03;

		__this_00 = new AottgMainMenuPanel("main.quit");
		if (ui != null) {
			ui.Component((AottgComponent)__this_00);
			__this_01 = new AottgMainMenuTipPanel();
			ui.Component((AottgComponent)__this_01);
			pSVar1 = "default";
			pGVar3 = typeof(AottgMainMenuScreen.c).static_fields;
			__this_02 = pGVar3.__9__7_0;
			if (__this_02 == null) {
				if ((typeof(AottgMainMenuScreen.c)._2).cctor_finished_or_no_cctor == 0) {
					pGVar3 = typeof(AottgMainMenuScreen.c).static_fields;
				}
				@object = (object)pGVar3.__9;
				__this_02 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuScreen_c_Build_b__7_0);
				pGVar3 = typeof(AottgMainMenuScreen.c).static_fields;
				pGVar3.__9__7_0 = __this_02;
			}
			width = AottgUi.Percent(100.0);
			height = AottgUi.Points(112.0);
			layout = AottgUi.Layout("Row", "FlexEnd", "FlexStart", "Absolute", null, 0.0, width, height, null, null, null, null, 16.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			pGVar4 = ui.Panel(pSVar1, __this_02, "account-banner-layer", layout, null);
			pGVar5 = AottgUi.Motion("mainMenuTipPanel", null, 0.28, 0.0, 0.0, 0);
			if (pGVar4 != null) {
				pGVar4.enter = pGVar5;
				pGVar5 = AottgUi.Motion("mainMenuTipPanel", null, 0.12, 0.0, 0.0, 0);
				pGVar4.exit = pGVar5;
				pSVar2 = "mainMenuStatusText";
				pSVar1 = "main-menu-status";
				__this_03 = new AottgMenuStatusLabel();
				__this_03._id = pSVar1;
				__this_03._style = pSVar2;
				ui.Component((AottgComponent)__this_03);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001049")]
	[Address(RVA = "0x57C1B50", Offset = "0x57C0B50", VA = "0x57C1B50")]
	public AottgMainMenuScreen()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuScreen.c (Gisketch.Aottg2UI.Game.AottgMainMenuScreen$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuScreen.c.

	// Gisketch.Aottg2UI.Game.AottgMainMenuScreen.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgMainMenuScreen.c();
		AottgMainMenuScreen.c.__9 =(AottgMainMenuScreen.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgMainMenuScreen.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgMainMenuScreen.<>c$$<Build>b__7_0: clean
	private void c__Build_b__7_0(AottgUi account)
	{
		AottgProfileBanner __this_00;

		__this_00 = new AottgProfileBanner();
		if (account == null) {
			throw new NullReferenceException();
		}
		account.Component((AottgComponent)__this_00);
		return;
	}
}
