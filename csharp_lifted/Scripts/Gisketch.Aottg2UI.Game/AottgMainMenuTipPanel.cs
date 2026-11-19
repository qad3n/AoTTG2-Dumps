// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuTipPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002AF")]
public sealed class AottgMainMenuTipPanel : AottgComponent
{
	[Token(Token = "0x4000DB8")]
	public const string LayerId = "main-menu-tip-layer";

	[Token(Token = "0x4000DB9")]
	public const string PanelId = "main-menu-tip-panel";

	[Token(Token = "0x4000DBA")]
	public const string BackgroundId = "main-menu-tip-bg";

	[Token(Token = "0x4000DBB")]
	public const string TextId = "main-menu-tip-text";

	[Token(Token = "0x4000DBC")]
	private const string TipMotion = "mainMenuTipPanel";

	[Token(Token = "0x4000DBD")]
	private const string TipSprite = "UI/Sprites/Elements/Brush";

	[Token(Token = "0x4000DBE")]
	private const float TipOffsetY = -10f;

	[Token(Token = "0x600104D")]
	[Address(RVA = "0x57C1C40", Offset = "0x57C0C40", VA = "0x57C1C40", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuTipPanel.c (Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel$$Build): 1 lines keep C-only constructs
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c_StaticFields pGVar1;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;

		style = "mainMenuOverlayBody";
		pGVar1 = typeof(AottgMainMenuTipPanel.c).static_fields;
		__this_00 = pGVar1.__9__7_0;
		if (__this_00 == null) {
			if ((typeof(AottgMainMenuTipPanel.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgMainMenuTipPanel.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this_00 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c_Build_b__7_0);
			pGVar1 = typeof(AottgMainMenuTipPanel.c).static_fields;
			pGVar1.__9__7_0 = __this_00;
		}
		width = AottgUi.Percent(100.0);
		height = AottgUi.Percent(100.0);
		layout = AottgUi.Layout("Row", "FlexEnd", "FlexEnd", "Absolute", null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel(style, __this_00, "main-menu-tip-layer", layout, null);
		return;
	}

	[Token(Token = "0x600104E")]
	[Address(RVA = "0x57C1B00", Offset = "0x57C0B00", VA = "0x57C1B00")]
	public AottgMainMenuTipPanel()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuTipPanel.c (Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgMainMenuTipPanel.c.

	// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgMainMenuTipPanel.c();
		AottgMainMenuTipPanel.c.__9 =(AottgMainMenuTipPanel.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel.<>c$$<Build>b__7_0: 1 lines keep C-only constructs
	private void c__Build_b__7_0(AottgUi layer)
	{
		object @object;
		String style;
		Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c_StaticFields pGVar1;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;
		GisketchMotionDefinition pGVar2;
		GisketchNodeDefinition pGVar3;

		style = "mainMenuTipPanel";
		pGVar1 = typeof(AottgMainMenuTipPanel.c).static_fields;
		__this_00 = pGVar1.__9__7_1;
		if (__this_00 == null) {
			if ((typeof(AottgMainMenuTipPanel.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgMainMenuTipPanel.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this_00 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c_Build_b__7_1);
			pGVar1 = typeof(AottgMainMenuTipPanel.c).static_fields;
			pGVar1.__9__7_1 = __this_00;
		}
		width = AottgUi.Points(600.0);
		height = AottgUi.Points(200.0);
		layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 10.0, -10.0, 0.0, 0.0);
		pGVar2 = AottgUi.Motion("mainMenuTipPanel", null, 0.28, 0.0, 0.0, 0x28);
		if (layer != null) {
			pGVar3 = layer.Panel(style, __this_00, "main-menu-tip-panel", layout, pGVar2);
			pGVar2 = AottgUi.Motion("mainMenuTipPanel", null, 0.12, 0.0, 0.0, 0);
			if (pGVar3 != null) {
				pGVar3.exit = pGVar2;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel.<>c$$<Build>b__7_1: clean
	private void c__Build_b__7_1(AottgUi tip)
	{
		GisketchLength pGVar1;
		GisketchLength pGVar2;
		GisketchLayoutDefinition pGVar3;
		GisketchNodeDefinition pGVar4;
		GisketchUIBindingDefinition __this_00;

		pGVar1 = AottgUi.Points(720.0);
		pGVar2 = AottgUi.Points(240.0);
		pGVar3 = AottgUi.Layout("Column", null, null, "Absolute", null, 0.0, pGVar1, pGVar2, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -80.0, 30.0, 0.0, 1.0);
		if (tip != null) {
			tip.Image("UI/Sprites/Elements/Brush", "mainMenuTipBackground", "main-menu-tip-bg", pGVar3, null);
			pGVar4 = tip.Text((String)**(ulong*)(g_data_07556758 + 0xb8), "mainMenuTipText", "main-menu-tip-text", null, null);
			__this_00 = new GisketchUIBindingDefinition();
			if (__this_00 != null) {
				__this_00.text = "mainMenu.tipText";
				if (pGVar4 != null) {
					pGVar4.bind = __this_00;
					pGVar1 = AottgUi.Points(540.0);
					pGVar2 = AottgUi.Percent(100.0);
					pGVar3 = AottgUi.Layout("Column", null, null, "Absolute", null, 0.0, pGVar1, pGVar2, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 5.0, 10.0, 0.0, 16.0, 0.0, 1.0);
					pGVar4.layout = pGVar3;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}
}
