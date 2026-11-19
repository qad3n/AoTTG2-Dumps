// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreviewPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002EB")]
internal sealed class AottgCharacterNamePreviewPanel : AottgComponent
{
	[Token(Token = "0x4000EBC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000EBD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly float _width;

	[Token(Token = "0x4000EBE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private readonly bool _liveDialog;

	[Token(Token = "0x4000EBF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _alignSelf;

	[Token(Token = "0x4000EC0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly bool _fullWidth;

	[Token(Token = "0x60011E0")]
	[Address(RVA = "0x57DCFF0", Offset = "0x57DBFF0", VA = "0x57DCFF0")]
	public AottgCharacterNamePreviewPanel(string id, [Optional][DefaultParameterValue(420f)] float width, [Optional][DefaultParameterValue(false)] bool liveDialog, [Optional] string alignSelf, bool fullWidth = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreviewPanel.c (Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel$$.ctor): clean
		base();
		this._id = id;
		this._width = width;
		this._liveDialog = liveDialog;
		this._alignSelf = alignSelf;
		this._fullWidth = fullWidth;
		return;
	}

	[Token(Token = "0x60011E1")]
	[Address(RVA = "0x57DD060", Offset = "0x57DC060", VA = "0x57DD060", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreviewPanel.c (Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel$$Build): 1 lines keep C-only constructs
		GisketchLength width;
		GisketchLayoutDefinition layout;
		Action<AottgUi> __this_00;
		GisketchMotionDefinition pGVar1;
		GisketchNodeDefinition pGVar2;
		String pSVar3;
		float grow;
		float shrink;

		if (this._fullWidth == false) {
			width = AottgUi.Points(this._width);
			pSVar3 = this._alignSelf;
			shrink = 0.0;
			grow = 0.0;
		}
		else {
			width = AottgUi.Percent(100.0);
			pSVar3 = this._alignSelf;
			shrink = 1.0;
			grow = 1.0;
		}
		layout = AottgUi.Layout("Column", null, null, pSVar3, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, grow, shrink);
		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_Build_b__6_0);
		pSVar3 = this._id;
		pGVar1 = ProfileDialogUi.PreviewEnterMotion();
		if (ui != null) {
			pGVar2 = ui.Panel("profilePreviewDialog", __this_00, pSVar3, layout, pGVar1);
			pGVar1 = ProfileDialogUi.PreviewExitMotion();
			if (pGVar2 != null) {
				pGVar2.exit = pGVar1;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgCharacterNamePreviewPanel.c.

	// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel$$<Build>b__6_0: 2 lines keep C-only constructs
	private void Build_b__6_0(AottgUi preview)
	{
		object @object;
		Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel___c_StaticFields pGVar1;
		Action<AottgUi> pSVar2;
		String id;
		GisketchLength pGVar3;
		GisketchLayoutDefinition pGVar4;
		String pSVar5;
		GisketchLength height;

		pSVar5 = "profilePreviewTitleBar";
		pGVar1 = typeof(AottgCharacterNamePreviewPanel.c).static_fields;
		pSVar2 = pGVar1.__9__6_1;
		if (pSVar2 == null) {
			if ((typeof(AottgCharacterNamePreviewPanel.c)._2).cctor_finished_or_no_cctor == 0 ) {
				pGVar1 = typeof(AottgCharacterNamePreviewPanel.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			pSVar2 = new Action<AottgUi>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_c_Build_b__6_1);
			pGVar1 = typeof(AottgCharacterNamePreviewPanel.c).static_fields;
			pGVar1.__9__6_1 = pSVar2;
		}
		id = String.Concat(this._id, "-title-bar");
		pGVar3 = AottgUi.Percent(100.0);
		pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar3, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (preview == null) {
			throw new NullReferenceException();
		}
		preview.Panel(pSVar5, pSVar2, id, pGVar4, null);
		pSVar2 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCharacterNamePreviewPanel_Build_b__6_2);
		pSVar5 = String.Concat(this._id, "-body");
		pGVar3 = AottgUi.Percent(100.0);
		height = AottgUi.Points(200.0);
		pGVar4 = AottgUi.Layout("Column", "Center", "Center", null, null, 0.0, pGVar3, height, null, null, null, null, 18.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		preview.Panel("default", pSVar2, pSVar5, pGVar4, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel$$<Build>b__6_2: clean
	private void Build_b__6_2(AottgUi body)
	{
		bool liveDialog;
		String id;
		AottgCharacterNamePreview __this_00;

		id = String.Concat(this._id, "-nameplate");
		liveDialog = this._liveDialog;
		__this_00 = new AottgCharacterNamePreview(id, liveDialog);
		if (body == null) {
			throw new NullReferenceException();
		}
		body.Component((AottgComponent)__this_00);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgCharacterNamePreviewPanel.c();
		AottgCharacterNamePreviewPanel.c.__9 =(AottgCharacterNamePreviewPanel.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgCharacterNamePreviewPanel.<>c$$<Build>b__6_1: clean
	private void c__Build_b__6_1(AottgUi title)
	{
		if (title == null) {
			throw new NullReferenceException();
		}
		title.TextKey("MainMenu.Profile.NamePreview", "profilePreviewTitle", null, null, null);
		return;
	}
}
