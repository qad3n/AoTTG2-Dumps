// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfilePickerPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePickerPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200031C")]
internal sealed class AottgProfilePickerPanel : AottgComponent
{
	[Token(Token = "0x4000FA9")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000FAA")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _title;

	[Token(Token = "0x4000FAB")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _titleIcon;

	[Token(Token = "0x4000FAC")]
	[FieldOffset(Offset = "0x28")]
	private readonly AottgComponent _picker;

	[Token(Token = "0x4000FAD")]
	[FieldOffset(Offset = "0x30")]
	private readonly string _saveActionId;

	[Token(Token = "0x600138D")]
	[Address(RVA = "0x57FC030", Offset = "0x57FB030", VA = "0x57FC030")]
	public AottgProfilePickerPanel(string id, string title, string titleIcon, AottgComponent picker, string saveActionId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePickerPanel.c (Gisketch.Aottg2UI.Game.AottgProfilePickerPanel$$.ctor): clean
		base();
		this._id = id;
		this._title = title;
		this._titleIcon = titleIcon;
		this._picker = picker;
		this._saveActionId = saveActionId;
		return;
	}

	[Token(Token = "0x600138E")]
	[Address(RVA = "0x5803C30", Offset = "0x5802C30", VA = "0x5803C30", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePickerPanel.c (Gisketch.Aottg2UI.Game.AottgProfilePickerPanel$$Build): 8 lines keep C-only constructs
		String pSVar1;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchMotionDefinition pGVar2;
		GisketchNodeDefinition pGVar3;
		GisketchUiPerfLog.Scope local_68;
		GisketchUiPerfLog.Scope local_48;

		local_68._startMs._0_4_ = 0;
		local_68._startMs._4_2_ = 0;
		local_68._startMs._6_2_ = 0;
		local_68._enabled = false;
		local_68._hotLoop = false;
		local_68._26_6_ = 0;
		local_68._area = null;
		local_68._detail = null;
		pSVar1 = String.Concat(this._id, " title=", this._title);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		local_48 = GisketchUiPerfLog.Time("ProfilePickerPanel.Build", pSVar1);
		local_68._startMs = local_48._startMs;
		local_68._enabled = local_48._enabled;
		local_68._hotLoop = local_48._hotLoop;
		local_68._26_6_ = local_48._26_6_;
		local_68._area = local_48._area;
		local_68._detail = local_48._detail;
		local_48._area = null;
		local_48._detail = (String)&local_68;
		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_Build_b__6_0);
		pSVar1 = this._id;
		width = AottgUi.Points(630.0);
		layout = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		pGVar2 = AottgUi.Motion("slideRight", null, 0.16, 0.0, 0.0, 0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		pGVar3 = ui.Panel("profilePreviewDialog", __this_00, pSVar1, layout, pGVar2);
		pGVar2 = AottgUi.Motion("slideRight", null, 0.16, 0.0, 0.0, 0);
		if (pGVar3 == null) {
			throw new NullReferenceException();
		}
		pGVar3.exit = pGVar2;
		local_68.Dispose();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfilePickerPanel.c.

	// Gisketch.Aottg2UI.Game.AottgProfilePickerPanel$$<Build>b__6_0: 2 lines keep C-only constructs
	private void Build_b__6_0(AottgUi panel)
	{
		String icon;
		AottgDialogHeader __this_00;
		Action<AottgUi> pSVar1;
		String pSVar2;
		GisketchLength pGVar3;
		GisketchLayoutDefinition pGVar4;

		pSVar2 = this._title;
		icon = this._titleIcon;
		__this_00 = new AottgDialogHeader(pSVar2, 0, icon, null, null);
		if (panel == null) {
			throw new NullReferenceException();
		}
		panel.Component((AottgComponent)__this_00);
		pSVar1 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_Build_b__6_1);
		pSVar2 = String.Concat(this._id, "-body");
		pGVar3 = AottgUi.Percent(100.0);
		pGVar4 = AottgUi.Layout("Column", null, "Stretch", null, null, 12.0, pGVar3, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		panel.Panel("dialogBody", pSVar1, pSVar2, pGVar4, null);
		pSVar1 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_Build_b__6_2);
		pSVar2 = String.Concat(this._id, "-footer");
		pGVar3 = AottgUi.Percent(100.0);
		pGVar4 = AottgUi.Layout("Row", "FlexEnd", "Center", null, null, 12.0, pGVar3, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		panel.Panel("dialogFooter", pSVar1, pSVar2, pGVar4, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfilePickerPanel$$<Build>b__6_1: clean
	private void Build_b__6_1(AottgUi body)
	{
		ProfileDialogUi.SaveCallout(body);
		if (body == null) {
			throw new NullReferenceException();
		}
		body.Component(this._picker);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfilePickerPanel$$<Build>b__6_2: clean
	private void Build_b__6_2(AottgUi footer)
	{
		ProfileDialogUi.SaveFooter(footer, this._saveActionId);
		return;
	}
}
