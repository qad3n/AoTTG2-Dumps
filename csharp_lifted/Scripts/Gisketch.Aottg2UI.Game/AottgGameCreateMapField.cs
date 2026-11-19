// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGameCreateMapField
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateMapField.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200022E")]
internal sealed class AottgGameCreateMapField : AottgComponent
{
	[Token(Token = "0x4000B86")]
	private const string HoverNodeType = "GameCreateMapHover";

	[Token(Token = "0x4000B87")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000B88")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _mapName;

	[Token(Token = "0x4000B89")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _actionId;

	[Token(Token = "0x4000B8A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly bool _editable;

	[Token(Token = "0x4000B8B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private readonly int _selectableMapCount;

	[Token(Token = "0x4000B8C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly string _tooltip;

	[Token(Token = "0x4000B8D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly string _label;

	[Token(Token = "0x6000D00")]
	[Address(RVA = "0x5D97550", Offset = "0x5D96550", VA = "0x5D97550")]
	static AottgGameCreateMapField()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateMapField.c (Gisketch.Aottg2UI.Game.AottgGameCreateMapField$$.cctor): 2 lines keep C-only constructs
		GisketchComponentRegistry __this;
		GisketchComponentFactory __this_00;

		if (Il2CppMethodInitialized_075488ca == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_075488ca = true;
		}
		__this = GisketchComponentRegistry.Default;
		__this_00 = new GisketchComponentFactory(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_BuildHoverRuntime);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Register("GameCreateMapHover", __this_00);
		return;
	}

	[Token(Token = "0x6000D01")]
	[Address(RVA = "0x5D97610", Offset = "0x5D96610", VA = "0x5D97610")]
	public AottgGameCreateMapField(string id, string mapName, string actionId, bool editable, int selectableMapCount, string tooltip, [Optional] string label)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateMapField.c (Gisketch.Aottg2UI.Game.AottgGameCreateMapField$$.ctor): clean
		bool bVar1;

		base();
		this._id = id;
		if (mapName == null) {
			mapName = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		this._mapName = mapName;
		if (!editable) {
			actionId = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		this._actionId = actionId;
		this._editable = editable;
		this._selectableMapCount = selectableMapCount;
		this._tooltip = tooltip;
		bVar1 = String.IsNullOrEmpty(label);
		if (bVar1) {
			label = Aottg2GisketchLocale.Text("Common.Map") ;
		}
		this._label = label;
		return;
	}

	[Token(Token = "0x6000D02")]
	[Address(RVA = "0x5D97760", Offset = "0x5D96760", VA = "0x5D97760", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateMapField.c (Gisketch.Aottg2UI.Game.AottgGameCreateMapField$$Build): 1 lines keep C-only constructs
		Action<AottgUi> __this_00;
		String id;
		GisketchLength width;
		GisketchLayoutDefinition layout;

		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_Build_b__10_0);
		id = String.Concat(this._id, "-map-field");
		width = AottgUi.Points(330.0);
		layout = AottgUi.Layout("Column", null, "FlexStart", null, null, 8.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Panel("clear", __this_00, id, layout, null);
		return;
	}

	[Token(Token = "0x6000D03")]
	[Address(RVA = "0x5D978E0", Offset = "0x5D968E0", VA = "0x5D978E0")]
	private static bool BuildHoverRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateMapField.c (Gisketch.Aottg2UI.Game.AottgGameCreateMapField$$BuildHoverRuntime): clean
		bool bVar1;
		LayoutElement pUVar2;
		Transform pUVar3;
		GameObject __this;

		if ((go != null) &&(pUVar2 = go.AddComponent<LayoutElement>(), pUVar2 != null)) {
			pUVar2.set_ignoreLayout(true);
			pUVar3 = go.transform;
			if (pUVar3 != null) {
				pUVar3 = pUVar3.parent;
				bVar1 = ((Object)pUVar3 != null);
				if (!bVar1) {
					return true;
				}
				pUVar3 = go.transform;
				if (((pUVar3 != null) &&(pUVar3 = pUVar3.parent, pUVar3 != null)) &&(__this = pUVar3.gameObject, __this != null)) {
					__this.AddComponent<AottgGameCreateMapHover>();
					return true;
				}
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGameCreateMapField.c.

	// Gisketch.Aottg2UI.Game.AottgGameCreateMapField$$<Build>b__10_0: 1 lines keep C-only constructs
	private void Build_b__10_0(AottgUi field)
	{
		Action<AottgUi> __this_00;
		String id;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;

		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_Build_b__10_1);
		id = String.Concat(this._id, "-preview-frame");
		width = AottgUi.Points(330.0);
		height = AottgUi.Points(330.0);
		layout = AottgUi.Layout("Column", null, "Stretch", null, null, 8.0, width, height, null, null, null, null, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (field == null) {
			throw new NullReferenceException();
		}
		field.Panel("card", __this_00, id, layout, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateMapField$$<Build>b__10_1: 3 lines keep C-only constructs
	private void Build_b__10_1(AottgUi card)
	{
		bool bVar1;
		String pSVar2;
		Action<AottgUi> pSVar3;
		GisketchLength pGVar4;
		GisketchLength pGVar5;
		GisketchLayoutDefinition pGVar6;
		String id;
		GisketchNodeDefinition pGVar7;
		Nullable<bool>[] aSStack_38 = new Nullable<bool>[4];

		pSVar2 = AottgGameCreatePicker.PreviewSprite(this._mapName);
		bVar1 = String.IsNullOrEmpty(pSVar2);
		if (bVar1) {
			pSVar3 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_Build_b__10_2);
			pSVar2 = String.Concat(this._id, "-preview-placeholder");
			pGVar4 = AottgUi.Percent(100.0);
			pGVar5 = AottgUi.Points(244.0);
			pGVar6 = AottgUi.Layout("Column", "Center", "Center", null, null, 0.0, pGVar4, pGVar5, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (card == null) goto label_05e9832e;
			card.Panel("clear", pSVar3, pSVar2, pGVar6, null);
		}
		else {
			id = String.Concat(this._id, "-preview");
			pGVar4 = AottgUi.Percent(100.0);
			pGVar5 = AottgUi.Points(244.0);
			pGVar6 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar4, pGVar5, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (card == null) goto label_05e9832e;
			card.Image(pSVar2, "image", id, pGVar6, null);
		}
		pSVar3 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_Build_b__10_3);
		pSVar2 = String.Concat(this._id, "-caption");
		pGVar4 = AottgUi.Percent(100.0);
		pGVar5 = AottgUi.Points(44.0);
		pGVar6 = AottgUi.Layout("Row", "Center", "Center", null, null, 0.0, pGVar4, null, null, pGVar5, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		card.Panel("clear", pSVar3, pSVar2, pGVar6, null);
		if ((this._editable != false) && (1 < this._selectableMapCount)) {
			pSVar3 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_Build_b__10_4);
			pSVar2 = String.Concat(this._id, "-other-map-count-overlay");
			pGVar4 = AottgUi.Percent(100.0);
			pGVar5 = AottgUi.Points(244.0);
			pGVar6 = AottgUi.Layout("Column", null, "FlexEnd", "Absolute", null, 0.0, pGVar4, pGVar5, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 8.0, 8.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			card.Panel("clear", pSVar3, pSVar2, pGVar6, null);
		}
		pGVar7 = card.Button(5, (String)**(ulong*)(g_data_07556758 + 0xb8), this._actionId, this._id, this._tooltip, null, null);
		aSStack_38[0].hasValue = false;
		aSStack_38[0].value = false;
		aSStack_38 = new Nullable<bool>(this._editable);
		if (pGVar7 != null) {
			pGVar7.enabled = aSStack_38[0];
			pGVar7.style = "clear";
			pGVar7.formLabel = this._label;
			pGVar4 = AottgUi.Percent(100.0);
			pGVar5 = AottgUi.Percent(100.0);
			pGVar6 = AottgUi.Layout("Column", null, null, "Absolute", null, 0.0, pGVar4, pGVar5, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			pGVar7.layout = pGVar6;
			pGVar7 = new GisketchNodeDefinition();
			if (pGVar7 != null) {
				pGVar7.type = "GameCreateMapHover";
				pSVar2 = String.Concat(this._id, "-hover");
				pGVar7.id = pSVar2;
				pGVar4 = AottgUi.Points(0.0);
				pGVar5 = AottgUi.Points(0.0);
				pGVar6 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar4, pGVar5, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
				pGVar7.layout = pGVar6;
				card.Add(pGVar7);
				return;
			}
		}
	label_05e9832e: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateMapField$$<Build>b__10_2: clean
	private void Build_b__10_2(AottgUi empty)
	{
		String text;
		String id;

		text = Aottg2GisketchLocale.Text("GameCreate.Map.NoPreview");
		id = String.Concat(this._id, "-preview-empty");
		if (empty == null) {
			throw new NullReferenceException();
		}
		empty.Text(text, "subtext", id, null, null);
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateMapField$$<Build>b__10_3: clean
	private void Build_b__10_3(AottgUi caption)
	{
		String text;
		String id;
		GisketchNodeDefinition pGVar1;
		GisketchLength maxWidth;
		GisketchLayoutDefinition pGVar2;

		text = this._mapName;
		id = String.Concat(this._id, "-map-name");
		if (caption != null) {
			pGVar1 = caption.Text(text, "header", id, null, null);
			if (pGVar1 != null) {
				pGVar1.clip = true;
				maxWidth = AottgUi.Percent(100.0);
				pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, null, null, null, null, maxWidth, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
				pGVar1.layout = pGVar2;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateMapField$$<Build>b__10_4: 1 lines keep C-only constructs
	private void Build_b__10_4(AottgUi overlay)
	{
		object @object;
		String pSVar1;
		Gisketch_Aottg2UI_Game_AottgGameCreateMapField___c_StaticFields pGVar2;
		Action<GisketchActionContext> __this_00;
		String id;
		GisketchNodeDefinition pGVar3;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar4;
		int iStack_34;

		iStack_34 = this._selectableMapCount + -1;
		pSVar1 = iStack_34.ToString();
		pSVar1 = String.Concat("+", pSVar1);
		if ((typeof(AottgGameCreateMapField.c)._2).cctor_finished_or_no_cctor == 0) {
			pGVar2 = typeof(AottgGameCreateMapField.c).static_fields;
			__this_00 = pGVar2.__9__10_5;
		}
		else {
			pGVar2 = typeof(AottgGameCreateMapField.c).static_fields;
			__this_00 = pGVar2.__9__10_5;
		}
		if (__this_00 == null) {
			if (((typeof(AottgGameCreateMapField.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar2 = typeof(AottgGameCreateMapField.c).static_fields;
			}
			@object = (object)pGVar2.__9;
			__this_00 = new Action<GisketchActionContext>(@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgGameCreateMapField_c_Build_b__10_5);
			pGVar2 = typeof(AottgGameCreateMapField.c).static_fields;
			pGVar2.__9__10_5 = __this_00;
		}
		id = String.Concat(this._id, "-other-map-count");
		if (overlay != null) {
			pGVar3 = overlay.Button(0, pSVar1, __this_00, id, null, null, null);
			width = AottgUi.Points(42.0);
			height = AottgUi.Points(42.0);
			pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (pGVar3 != null) {
				pGVar3.layout = pGVar4;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateMapField.<>c$$.cctor: 1 lines keep C-only constructs
	private static void c__cctor()
	{
		object __this;

		__this = (object)il2cpp_codegen_object_new(typeof(AottgGameCreateMapField.c)) ;
		__this = new Object();
		AottgGameCreateMapField.c.__9 =(AottgGameCreateMapField.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateMapField.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGameCreateMapField.<>c$$<Build>b__10_5: clean
	private void c__Build_b__10_5(GisketchActionContext __)
	{
		return;
	}
}
