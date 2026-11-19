// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgColorSettingRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200015B")]
internal sealed class AottgColorSettingRow : AottgComponent, IAottgSettingsSearchable, IAottgSettingsStateSync, IAottgSettingRowLayoutAware
{
	[Token(Token = "0x40007FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly AottgSettingDescriptor _descriptor;

	[Token(Token = "0x40007FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x4000800")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private AottgSettingRowLayoutMode _layoutMode;

	[Token(Token = "0x6000738")]
	[Address(RVA = "0x5CBC5E0", Offset = "0x5CBB5E0", VA = "0x5CBC5E0")]
	public AottgColorSettingRow(AottgSettingDescriptor descriptor)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgColorSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow$$.ctor): clean
		base();
		this._descriptor = descriptor;
		return;
	}

	[Token(Token = "0x6000739")]
	[Address(RVA = "0x5CBC610", Offset = "0x5CBB610", VA = "0x5CBC610", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgColorSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow$$Build): 1 lines keep C-only constructs
		int layoutMode;
		AottgSettingDescriptor pGVar1;
		String id;
		String label;
		String labelKey;
		String tooltip;
		String searchTitle;
		String tooltipKey;
		Func<string> dirtyValue;
		String searchKeywords;
		String icon;
		AottgSettingsSearchContext searchContext;
		Action<AottgUi> __this_00;
		AottgSettingRowFrame __this_01;

		pGVar1 = this._descriptor;
		if (pGVar1 == null) {
			return;
		}
		id = pGVar1.Id;
		label = pGVar1.Label;
		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_BuildPicker);
		pGVar1 = this._descriptor;
		if (pGVar1 != null) {
			labelKey = pGVar1.LabelKey;
			tooltip = pGVar1.Tooltip;
			searchTitle = pGVar1.SearchTitle;
			searchKeywords = pGVar1.SearchKeywords;
			icon = pGVar1.Icon;
			tooltipKey = pGVar1.TooltipKey;
			dirtyValue = pGVar1.DirtyValue;
			layoutMode = this._layoutMode;
			searchContext = this._searchContext;
			__this_01 = new AottgSettingRowFrame(id, label, 92.0, __this_00, tooltip, searchTitle, searchKeywords, icon, (Nullable<float>)0x0, labelKey, tooltipKey, null, (AottgSettingsSearchContext)searchContext, dirtyValue, null, null, layoutMode);
			if (ui != null) {
				ui.Component((AottgComponent)__this_01);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600073A")]
	[Address(RVA = "0x5CBC800", Offset = "0x5CBB800", VA = "0x5CBC800", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgColorSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow$$ApplySearchContext): clean
		this._searchContext.GroupTitle = context.GroupTitle;
		this._searchContext.CategoryTitle = context.CategoryTitle;
		this._searchContext.GroupId = context.GroupId;
		this._searchContext.ScreenTitle = context.ScreenTitle;
		this._searchContext.CategoryId = context.CategoryId;
		return;
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x5CBC830", Offset = "0x5CBB830", VA = "0x5CBC830", Slot = "7")]
	public void ApplyLayoutMode(AottgSettingRowLayoutMode mode)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgColorSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow$$ApplyLayoutMode): clean
		this._layoutMode = mode;
		return;
	}

	[Token(Token = "0x600073C")]
	[Address(RVA = "0x5CBC840", Offset = "0x5CBB840", VA = "0x5CBC840", Slot = "6")]
	public void SyncState(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgColorSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow$$SyncState): clean
		uint uVar1;
		AottgSettingDescriptor pGVar2;
		object obj;
		bool bVar5;
		String pSVar6;
		String value;
		GameObject source;

		pGVar2 = this._descriptor;
		if (pGVar2 == null) {
			return;
		}
		pSVar6 = String.Concat(pGVar2.Id, "-color");
		pGVar2 = this._descriptor;
		if (pGVar2 != null) {
			obj = (object)pGVar2.Adapter;
			if (obj == null) {
				uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				value = "#FFFFFFFF";
			}
			else {
				value = obj.get_TextValue();
				uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			source = null;
			bVar5 = ((Object)root != null);
			if (bVar5) {
				if (root == null) goto label_05dbca1e;
				source = root.gameObject;
			}
			GisketchUIColorPicker.SetValue(pSVar6, value, true, source);
			pGVar2 = this._descriptor;
			if (pGVar2 != null) {
				pSVar6 = pGVar2.Id;
				if ((typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor == 0) {
				}
				AottgSettingsDirtyRegistry.SyncRow(root, pSVar6);
				return;
			}
		}
	label_05dbca1e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600073D")]
	[Address(RVA = "0x5CBCA30", Offset = "0x5CBBA30", VA = "0x5CBCA30")]
	private void BuildPicker(AottgUi control)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgColorSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow$$BuildPicker): 1 lines keep C-only constructs
		bool disabled;
		AottgSettingDescriptor @object;
		String id;
		IAottgSettingAdapter adapter;
		Action<GisketchActionContext> __this_00;

		@object = this._descriptor;
		if (@object == null) {
			throw new NullReferenceException();
		}
		id = @object.Id;
		adapter = @object.Adapter;
		disabled = @object.Disabled;
		__this_00 = new Action<GisketchActionContext>((object)@object, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_Changed);
		AottgColorSettingRow.BuildPicker(control, adapter, disabled, id, __this_00, null, (Nullable<bool>)0x0);
		return;
	}

	[Token(Token = "0x600073E")]
	[Address(RVA = "0x5CBCAE0", Offset = "0x5CBBAE0", VA = "0x5CBCAE0")]
	internal static void BuildPicker(AottgUi control, IAottgSettingAdapter adapter, bool disabled, [Optional] string id, [Optional] Action<GisketchActionContext> changed, [Optional] string enabledKey, [Optional] bool? pickerDisabled)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgColorSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow$$BuildPicker): 2 lines keep C-only constructs
		object obj;
		bool bVar3;
		AottgColorSettingRow.c__DisplayClass9_0 __this;
		String pSVar5;
		Action<AottgUi> __this_00;
		GisketchLength width;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition pGVar6;
		GisketchUIBindingDefinition __this_01;
		Nullable<bool>[] local_48 = new Nullable<bool>[4];
		String local_40;
		AottgUi local_38;

		local_40 = enabledKey;
		local_38 = control;
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgColorSettingRow.c__DisplayClass9_0));
		__this = new Object();
		if (__this != null) {
			__this.adapter = adapter;
			__this.changed = changed;
			__this.pickerDisabled = pickerDisabled;
			__this.disabled = disabled;
			bVar3 = String.IsNullOrEmpty(id);
			if (bVar3) {
				id = "setting-color";
			}
			__this.pickerId = id;
			obj = (object)__this.adapter;
			if (obj == null) {
				pSVar5 = "#FFFFFFFF";
			}
			else {
				pSVar5 = obj.get_TextValue();
				if (obj == null) goto label_05dbce66;
			}
			__this.value = pSVar5;
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_c__DisplayClass9_0_BuildPicker_b__0);
			pSVar5 = String.Concat(__this.pickerId, "-color-frame");
			width = AottgUi.Points(92.0);
			layout = AottgUi.Layout("Row", "Center", "Center", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (local_38 != null) {
				pGVar6 = local_38.Panel("clear", __this_00, pSVar5, layout, null);
				local_48[0].hasValue = false;
				local_48[0].value = false;
				local_48 = new Nullable<bool>(__this.disabled == false);
				pSVar5 = local_40;
				if (pGVar6 != null) {
					pGVar6.enabled = local_48[0];
					bVar3 = String.IsNullOrEmpty(local_40);
					if (!bVar3) {
						__this_01 = new GisketchUIBindingDefinition();
						if (__this_01 == null) goto label_05dbce66;
						__this_01.enabled = pSVar5;
						pGVar6.bind = __this_01;
					}
					return;
				}
			}
		}
	label_05dbce66: ;
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgColorSettingRow.c.

	// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow.<>c__DisplayClass9_0$$.ctor: clean
	private void c__DisplayClass9_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow.<>c__DisplayClass9_0$$<BuildPicker>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass9_0__BuildPicker_b__0(AottgUi frame)
	{
		Nullable<bool> SVar1;
		String label;
		String value;
		sbyte cVar2;
		String id;
		Action<GisketchActionContext> __this_00;
		GisketchUIColorPicker __this_01;

		id = String.Concat(this.pickerId, "-color");
		label = (String)**(ulong*)(g_data_07556758 + 0xb8);
		value = this.value;
		__this_00 = this.__9__1;
		if (__this_00 == null) {
			__this_00 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgColorSettingRow_c__DisplayClass9_0_BuildPicker_b__1);
			this.__9__1 = __this_00;
			SVar1 = this.pickerDisabled;
			cVar2 = SVar1.hasValue;
		}
		else {
			SVar1 = this.pickerDisabled;
			cVar2 = SVar1.hasValue;
		}
		if (cVar2 == false) {
			cVar2 = this.disabled;
		}
		else {
			cVar2 = SVar1.value;
		}
		__this_01 = new GisketchUIColorPicker(id, label, value, __this_00, true, false, true, cVar2 != false);
		if (frame == null) {
			throw new NullReferenceException();
		}
		frame.Component((AottgComponent)__this_01);
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow.<>c__DisplayClass9_0$$<BuildPicker>b__1: 4 lines keep C-only constructs
	private void c__DisplayClass9_0__BuildPicker_b__1(GisketchActionContext context)
	{
		object obj;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		Action<GisketchActionContext> pSVar3;
		VirtualInvokeData pVVar4;
		ulong uVar5;
		long lVar6;

		obj = (object)this.adapter;
		if (obj != null) {
			pIVar1 = obj.klass;
			uVar5 = (ulong)(pIVar1._2).interface_offsets_count;
			if (uVar5 != 0) {
				pIVar2 = (pIVar1._1).interfaceOffsets;
				lVar6 = 0;
				do {
					if (*(IAottgSettingAdapter*)((long)&pIVar2.interfaceType + lVar6) == typeof(IAottgSettingAdapter)) {
						pVVar4 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar6) + 0xb);
						goto label_05dbd085;
					}
					lVar6 = lVar6 + 0x10;
				} while (uVar5 * 0x10 != lVar6);
			}
			pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IAottgSettingAdapter), 0xb) ;
	label_05dbd085: ;
			(*pVVar4.methodPtr)(obj,context,pVVar4.method);
		}
		pSVar3 = this.changed;
		if (pSVar3 == null) {
			return;
		}
		(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar3.method);
		return;
	}
}
