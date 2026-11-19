// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000179")]
internal sealed class AottgSettingRow : AottgComponent, IAottgSettingsSearchable, IAottgSettingsStateSync, IAottgSettingRowLayoutAware
{
	[Token(Token = "0x4000885")]
	private const float SliderValueButtonWidth = 80f;

	[Token(Token = "0x4000886")]
	[FieldOffset(Offset = "0x10")]
	private readonly AottgSettingDescriptor _descriptor;

	[Token(Token = "0x4000887")]
	[FieldOffset(Offset = "0x18")]
	private AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x4000888")]
	[FieldOffset(Offset = "0x40")]
	private AottgSettingRowLayoutMode _layoutMode;

	[Token(Token = "0x600080B")]
	[Address(RVA = "0x5CC6D70", Offset = "0x5CC5D70", VA = "0x5CC6D70")]
	public AottgSettingRow(AottgSettingDescriptor descriptor)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$.ctor): clean
		base();
		this._descriptor = descriptor;
		return;
	}

	[Token(Token = "0x600080C")]
	[Address(RVA = "0x5CC6DA0", Offset = "0x5CC5DA0", VA = "0x5CC6DA0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$Build): 8 lines keep C-only constructs
		int layoutMode;
		AottgSettingDescriptor pGVar1;
		String pSVar2;
		String pSVar3;
		String icon;
		Func<string> dirtyValue;
		AottgSettingsSearchContext searchContext;
		Action<AottgUi> __this_00;
		AottgSettingRowFrame __this_01;
		ulong uVar4;
		byte puVar5;
		float controlWidth;
		float value;
		Nullable<float> SStack_98;
		String pSStack_90;
		String pSStack_88;
		String pSStack_80;
		Action<AottgUi> pSStack_78;
		String pSStack_70;
		String pSStack_68;
		AottgUi pGStack_60;
		String pSStack_58;
		String pSStack_50;
		String pSStack_48;
		String pSStack_40;
		String pSStack_38;

		pGVar1 = this._descriptor;
		if (pGVar1 == null) {
			return;
		}
		switch(pGVar1.Kind) {
		case 0:
			controlWidth = 58.0;
			break;
		case 1:
		case 2:
			controlWidth = 300.0;
			break;
		case 3:
			uVar4 = (ulong)(this._layoutMode == 1);
			puVar5 = &g_data_0100ae58;
			goto label_05dc6e6f;
		case 4:
		case 6:
			uVar4 = (ulong)(this._layoutMode == 1);
			puVar5 = &g_data_0100ac50;
			goto label_05dc6e6f;
		case 5:
			uVar4 = (ulong)(this._layoutMode == 1);
			puVar5 = &g_data_0100acc0;
	label_05dc6e6f: ;
			controlWidth = *(float)(puVar5 + uVar4 * 4);
			break;
		default: ;
			controlWidth = 360.0;
		}
		pSVar2 = pGVar1.Id;
		pSVar3 = pGVar1.Label;
		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_BuildControl);
		pGVar1 = this._descriptor;
		if (pGVar1 == null) goto label_05dc70b6;
		value = 58.0;
		switch(pGVar1.Kind) {
		case 0:
			break;
		case 1:
		case 2:
			value = 300.0;
			break;
		case 3:
			uVar4 = (ulong)(this._layoutMode == 1);
			puVar5 = &g_data_0100ae58;
			goto label_05dc6f34;
		case 4:
		case 6:
			uVar4 = (ulong)(this._layoutMode == 1);
			puVar5 = &g_data_0100ac50;
			goto label_05dc6f34;
		case 5:
			uVar4 = (ulong)(this._layoutMode == 1);
			puVar5 = &g_data_0100acc0;
	label_05dc6f34: ;
			value = *(float)(puVar5 + uVar4 * 4);
			break;
		default: ;
			value = 360.0;
		}
		pSStack_80 = pGVar1.Tooltip;
		pSStack_88 = pGVar1.SearchTitle;
		pSStack_90 = pGVar1.SearchKeywords;
		icon = pGVar1.Icon;
		SStack_98.hasValue = false;
		SStack_98._1_3_ = 0;
		SStack_98.value = 0.0;
		pSStack_78 = __this_00;
		pSStack_70 = pSVar3;
		pSStack_68 = pSVar2;
		pGStack_60 = ui;
		SStack_98 = new Nullable<float>(value);
		pGVar1 = this._descriptor;
		if (pGVar1 != null) {
			pSVar2 = pGVar1.LabelKey;
			pSVar3 = pGVar1.TooltipKey;
			pSStack_38 = this._searchContext.GroupTitle;
			pSStack_58 = this._searchContext.ScreenTitle;
			pSStack_50 = this._searchContext.CategoryId;
			pSStack_48 = this._searchContext.CategoryTitle;
			pSStack_40 = this._searchContext.GroupId;
			dirtyValue = pGVar1.DirtyValue;
			layoutMode = this._layoutMode;
			searchContext.CategoryId = pSStack_50;
			searchContext.ScreenTitle = pSStack_58;
			searchContext.CategoryTitle = pSStack_48;
			searchContext.GroupId = pSStack_40;
			searchContext.GroupTitle = pSStack_38;
			__this_01 = new AottgSettingRowFrame(pSStack_68, pSStack_70, controlWidth, pSStack_78, pSStack_80, pSStack_88, pSStack_90, icon, (Nullable<float>)SStack_98, pSVar2, pSVar3, null, searchContext, dirtyValue, null, null, layoutMode);
			if (pGStack_60 != null) {
				pGStack_60.Component((AottgComponent)__this_01);
				return;
			}
		}
	label_05dc70b6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600080D")]
	[Address(RVA = "0x5CC71E0", Offset = "0x5CC61E0", VA = "0x5CC71E0", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$ApplySearchContext): clean
		this._searchContext.GroupTitle = context.GroupTitle;
		this._searchContext.CategoryTitle = context.CategoryTitle;
		this._searchContext.GroupId = context.GroupId;
		this._searchContext.ScreenTitle = context.ScreenTitle;
		this._searchContext.CategoryId = context.CategoryId;
		return;
	}

	[Token(Token = "0x600080E")]
	[Address(RVA = "0x5CC7210", Offset = "0x5CC6210", VA = "0x5CC7210", Slot = "6")]
	public void SyncState(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$SyncState): clean
		uint uVar1;
		AottgSettingDescriptor pGVar2;
		String rowId;

		AottgSettingRow.SyncValue(root, this._descriptor);
		pGVar2 = this._descriptor;
		if (pGVar2 == null) {
			rowId = null;
			uVar1 = (typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor;
		}
		else {
			rowId = pGVar2.Id;
			uVar1 = (typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		AottgSettingsDirtyRegistry.SyncRow(root, rowId);
		return;
	}

	[Token(Token = "0x600080F")]
	[Address(RVA = "0x5CC73D0", Offset = "0x5CC63D0", VA = "0x5CC73D0", Slot = "7")]
	public void ApplyLayoutMode(AottgSettingRowLayoutMode mode)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$ApplyLayoutMode): clean
		this._layoutMode = mode;
		return;
	}

	[Token(Token = "0x6000810")]
	[Address(RVA = "0x5CC73E0", Offset = "0x5CC63E0", VA = "0x5CC73E0")]
	private void BuildControl(AottgUi control)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildControl): clean
		AottgSettingDescriptor pGVar1;

		pGVar1 = this._descriptor;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		switch(pGVar1.Kind) {
		case 0:
			this.BuildSwitch(control);
			return;
		case 1:
			this.BuildDropdown(control, true);
			return;
		case 2:
			this.BuildDropdown(control, false);
			return;
		case 3:
			this.BuildSlider(control);
			return;
		case 4:
			this.BuildInput(control);
			return;
		case 5:
			this.BuildActionButton(control);
			return;
		default: ;
			this.BuildReadOnly(control);
			return;
		}
	}

	[Token(Token = "0x6000811")]
	[Address(RVA = "0x5CC7440", Offset = "0x5CC6440", VA = "0x5CC7440")]
	private void BuildSwitch(AottgUi control)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildSwitch): 5 lines keep C-only constructs
		AottgSettingDescriptor pGVar1;
		object obj;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		bool value;
		String pSVar4;
		VirtualInvokeData pVVar5;
		Action<GisketchActionContext> __this_00;
		GisketchNodeDefinition node;
		GisketchUIBindingDefinition __this_01;
		ulong uVar6;
		long lVar7;

		pGVar1 = this._descriptor;
		if (pGVar1 != null) {
			pSVar4 = String.Concat(pGVar1.Id, "-switch");
			pGVar1 = this._descriptor;
			if (pGVar1 != null) {
				obj = (object)pGVar1.Adapter;
				if (obj == null) {
					value = false;
				}
				else {
					pIVar2 = obj.klass;
					uVar6 = (ulong)(pIVar2._2).interface_offsets_count;
					if (uVar6 != 0) {
						pIVar3 = (pIVar2._1).interfaceOffsets;
						lVar7 = 0;
						do {
							if (*(IAottgSettingAdapter*)((long)&pIVar3.interfaceType + lVar7) == typeof(IAottgSettingAdapter)) {
								pVVar5 = pIVar2.vtable + (*(int)((long)&pIVar3.offset + lVar7) + 2);
								goto label_05dc7553;
							}
							lVar7 = lVar7 + 0x10;
						} while (uVar6 * 0x10 != lVar7);
					}
					pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IAottgSettingAdapter), 2);
	label_05dc7553: ;
					value = (*pVVar5.methodPtr)(obj,pVVar5.method);
				}
				__this_00 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_BuildSwitch_b__10_0);
				if (control != null) {
					node = control.Switch(pSVar4, value, __this_00);
					__this_01 = new GisketchUIBindingDefinition();
					pGVar1 = this._descriptor;
					if (pGVar1 != null) {
						pSVar4 = pGVar1.Id;
						pSVar4 = String.Concat(pSVar4, ".controlValue");
						if (__this_01 != null) {
							__this_01.value = pSVar4;
							if (node != null) {
								node.bind = __this_01;
								this.ApplyControlLayout(node, 58.0) ;
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000812")]
	[Address(RVA = "0x5CC7670", Offset = "0x5CC6670", VA = "0x5CC7670")]
	private void BuildDropdown(AottgUi control, bool dropdown)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildDropdown): 6 lines keep C-only constructs
		object obj;
		Il2CppClass pIVar1;
		GisketchChoiceOptionDefinition[] options;
		AottgSettingDescriptor pGVar4;
		String pSVar5;
		String pSVar6;
		Action<GisketchActionContext> pSVar7;
		GisketchNodeDefinition node;
		GisketchUIBindingDefinition __this_00;
		ulong uVar8;
		byte puVar9;
		float minWidth;

		options = this.ChoiceOptions();
		pGVar4 = this._descriptor;
		if (pGVar4 == null) goto label_05dc79e6;
		obj = (object)pGVar4.Adapter;
		if (obj == null) {
			pSVar5 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			pGVar4 = this._descriptor;
			if (dropdown) goto label_05dc782b;
	label_05dc777b: ;
			if (pGVar4 == null) goto label_05dc79e6;
			pSVar6 = String.Concat(pGVar4.Id, "-select");
			pSVar7 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_OnValueChanged);
			pGVar4 = this._descriptor;
			if ((pGVar4 == null) ||(control == null)) goto label_05dc79e6;
			node = control.Select(pSVar6, pSVar5, options, pSVar7, null, pGVar4.MaxVisibleItems);
		}
		else {
			pIVar1 = obj.klass;
			uVar8 = (ulong)(pIVar1._2).interface_offsets_count;
			pSVar5 = obj.get_TextValue();
			pGVar4 = this._descriptor;
			if (!dropdown) goto label_05dc777b;
	label_05dc782b: ;
			if (pGVar4 == null) goto label_05dc79e6;
			pSVar6 = String.Concat(pGVar4.Id, "-dropdown");
			pSVar7 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_OnValueChanged);
			pGVar4 = this._descriptor;
			if ((pGVar4 == null) ||(control == null)) goto label_05dc79e6;
			node = control.Dropdown(pSVar6, pSVar5, options, pSVar7, null, pGVar4.MaxVisibleItems);
		}
		__this_00 = new GisketchUIBindingDefinition();
		pGVar4 = this._descriptor;
		if (pGVar4 == null) {
	label_05dc79e6: ;
			throw new NullReferenceException();
		}
		pSVar5 = pGVar4.Id;
		pSVar5 = String.Concat(pSVar5, ".controlValue");
		if (__this_00 == null) goto label_05dc79e6;
		__this_00.value = pSVar5;
		if (node == null) goto label_05dc79e6;
		node.bind = __this_00;
		pGVar4 = this._descriptor;
		if (pGVar4 == null) goto label_05dc79e6;
		switch(pGVar4.Kind) {
		case 0:
			minWidth = 58.0;
			goto label_05dc79cd;
		case 1:
		case 2:
			minWidth = 300.0;
			goto label_05dc79cd;
		case 3:
			uVar8 = (ulong)(this._layoutMode == 1);
			puVar9 = &g_data_0100ae58;
			break;
		case 4:
		case 6:
			uVar8 = (ulong)(this._layoutMode == 1);
			puVar9 = &g_data_0100ac50;
			break;
		case 5:
			uVar8 = (ulong)(this._layoutMode == 1);
			puVar9 = &g_data_0100acc0;
			break;
			minWidth = 360.0;
			goto label_05dc79cd;
		}
		minWidth = *(float)(puVar9 + uVar8 * 4);
	label_05dc79cd: ;
		this.ApplyControlLayout(node, minWidth);
		return;
	}

	[Token(Token = "0x6000813")]
	[Address(RVA = "0x5CC79F0", Offset = "0x5CC69F0", VA = "0x5CC79F0")]
	private void BuildSlider(AottgUi control)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildSlider): 6 lines keep C-only constructs
		AottgSettingDescriptor pGVar1;
		Action<AottgUi> __this_00;
		String pSVar2;
		GisketchLength width;
		GisketchLength maxWidth;
		GisketchLayoutDefinition layout;
		GisketchNodeDefinition node;
		MethodInfo pMVar3;
		MethodInfo method_00;
		byte puVar4;
		float minWidth;

		pGVar1 = this._descriptor;
		if (pGVar1 == null) goto label_05dc7c62;
		pMVar3 = (MethodInfo)(ulong)(uint)pGVar1.Kind;
		if ((MethodInfo)&g_data_00000006 < pMVar3) {
			minWidth = 360.0;
			method_00 = pMVar3;
			goto label_05dc7ae2;
		}
		method_00 = (MethodInfo)((long)&switchD_05dc7a89::switchdataD_010a5f78 +(long)(int)(&switchD_05dc7a89::switchdataD_010a5f78)[(long)pMVar3]);
		switch(pMVar3) {
		case null:
			minWidth = 58.0;
			goto label_05dc7ae2;
		default: ;
			minWidth = 300.0;
			goto label_05dc7ae2;
		case (MethodInfo)0x3:
			method_00 = (MethodInfo)(ulong)(this._layoutMode == 1);
			puVar4 = &g_data_0100ae58;
			break;
		case (MethodInfo)0x4:
		case (MethodInfo)0x6:
			method_00 = (MethodInfo)(ulong)(this._layoutMode == 1);
			puVar4 = &g_data_0100ac50;
			break;
		case (MethodInfo)0x5:
			method_00 = (MethodInfo)(ulong)(this._layoutMode == 1);
			puVar4 = &g_data_0100acc0;
		}
		minWidth = *(float)(puVar4 + (long)method_00 * 4);
	label_05dc7ae2: ;
		if (pGVar1.ShowValue == false) {
			pSVar2 = String.Concat(pGVar1.Id, "-slider");
			node = this.SliderNode(control, pSVar2);
			this.ApplyControlLayout(node, minWidth);
			return;
		}
		__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_BuildSlider_b__12_0);
		pGVar1 = this._descriptor;
		if (pGVar1 != null) {
			pSVar2 = String.Concat(pGVar1.Id, "-slider-with-value");
			width = AottgUi.Points(minWidth);
			maxWidth = AottgUi.Percent(100.0);
			layout = AottgUi.Layout("Row", null, "Center", null, null, 10.0, width, null, null, null, maxWidth, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			if (control != null) {
				control.Panel("clear", __this_00, pSVar2, layout, null);
				return;
			}
		}
	label_05dc7c62: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000814")]
	[Address(RVA = "0x5CC8890", Offset = "0x5CC7890", VA = "0x5CC8890")]
	private GisketchNodeDefinition SliderNode(AottgUi control, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$SliderNode): 14 lines keep C-only constructs
		object pIVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		String id_00;
		AottgUi __this_00;
		AottgSettingRow pGVar4;
		VirtualInvokeData pVVar5;
		Action<GisketchActionContext> __this_01;
		AottgSettingDescriptor pGVar6;
		GisketchNodeDefinition pGVar7;
		GisketchUIBindingDefinition __this_02;
		String pSVar8;
		ulong uVar9;
		long lVar10;
		float min;
		float max;
		float value;
		Nullable<bool>[] local_58 = new Nullable<bool>[2];
		float fStack_54;
		float local_50;
		float local_4c;
		String local_48;
		AottgUi local_40;
		AottgSettingRow local_38;

		pGVar6 = this._descriptor;
		if (pGVar6 != null) {
			pIVar1 = (object)pGVar6.Adapter;
			local_48 = id;
			local_40 = control;
			if (pIVar1 == null) {
				fStack_54 = 0.0;
			}
			else {
				pIVar2 = pIVar1.klass;
				uVar9 = (ulong)(pIVar2._2).interface_offsets_count;
				if (uVar9 != 0) {
					pIVar3 = (pIVar2._1).interfaceOffsets;
					lVar10 = 0;
					do {
						if (*(IAottgSettingAdapter*)((long)&pIVar3.interfaceType + lVar10) == typeof(IAottgSettingAdapter)) {
							pVVar5 = pIVar2.vtable + (*(int)((long)&pIVar3.offset + lVar10) + 1);
							goto label_05dc89a9;
						}
						lVar10 = lVar10 + 0x10;
					} while (uVar9 * 0x10 != lVar10);
				}
				pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar1, typeof(IAottgSettingAdapter), 1);
	label_05dc89a9: ;
				fStack_54 = (*pVVar5.methodPtr)(pIVar1,pVVar5.method);
			}
			__this_01 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_SliderNode_b__13_0);
			pSVar8 = "slider";
			pGVar6 = this._descriptor;
			if (pGVar6 != null) {
				pIVar1 = (object)pGVar6.Adapter;
				min = 0.0;
				if (pIVar1 != null) {
					pIVar2 = pIVar1.klass;
					uVar9 = (ulong)(pIVar2._2).interface_offsets_count;
					if (uVar9 != 0) {
						pIVar3 = (pIVar2._1).interfaceOffsets;
						lVar10 = 0;
						do {
							if (*(IAottgSettingAdapter*)((long)&pIVar3.interfaceType + lVar10) == typeof(IAottgSettingAdapter)) {
								pVVar5 = pIVar2.vtable + (*(int)((long)&pIVar3.offset + lVar10) + 3);
								goto label_05dc8a75;
							}
							lVar10 = lVar10 + 0x10;
						} while (uVar9 * 0x10 != lVar10);
					}
					pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar1, (Il2CppClass)typeof(IAottgSettingAdapter), 3);
	label_05dc8a75: ;
					min = (*pVVar5.methodPtr)(pIVar1,pVVar5.method);
					pGVar6 = this._descriptor;
					if (pGVar6 == null) goto label_05dc8c8b;
				}
				__this_00 = local_40;
				id_00 = local_48;
				pIVar1 = (object)pGVar6.Adapter;
				local_38 = this;
				if (pIVar1 == null) {
					max = 1.0;
					value = fStack_54;
				}
				else {
					pIVar2 = pIVar1.klass;
					uVar9 = (ulong)(pIVar2._2).interface_offsets_count;
					local_50 = fStack_54;
					local_4c = min;
					if (uVar9 != 0) {
						pIVar3 = (pIVar2._1).interfaceOffsets;
						lVar10 = 0;
						do {
							if (*(IAottgSettingAdapter*)((long)&pIVar3.interfaceType + lVar10) == typeof(IAottgSettingAdapter)) {
								pVVar5 = pIVar2.vtable + (*(int)((long)&pIVar3.offset + lVar10) + 4);
								goto label_05dc8b64;
							}
							lVar10 = lVar10 + 0x10;
						} while (uVar9 * 0x10 != lVar10);
					}
					pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar1, (Il2CppClass)typeof(IAottgSettingAdapter), 4);
	label_05dc8b64: ;
					max = (*pVVar5.methodPtr)(pIVar1,pVVar5.method);
					value = local_50;
					min = local_4c;
				}
				if (__this_00 != null) {
					pGVar7 = __this_00.Slider(id_00, value, false, __this_01, pSVar8, min, max, null);
					pGVar4 = local_38;
					pGVar6 = local_38._descriptor;
					if (pGVar6 != null) {
						local_58[0].hasValue = false;
						local_58[0].value = false;
						local_58 = new Nullable<bool>(pGVar6.Disabled == false);
						if (pGVar7 != null) {
							pGVar7.enabled = local_58[0];
							__this_02 = il2cpp_codegen_object_new(typeof(GisketchUIBindingDefinition)) ;
							__this_02 = new GisketchUIBindingDefinition();
							pGVar6 = pGVar4._descriptor;
							if (pGVar6 != null) {
								pSVar8 = pGVar6.Id;
								pSVar8 = String.Concat(pSVar8, ".controlValue");
								if (__this_02 != null) {
									__this_02.value = pSVar8;
									pGVar7.bind = __this_02;
									return pGVar7;
								}
							}
						}
					}
				}
			}
		}
	label_05dc8c8b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000815")]
	[Address(RVA = "0x5CC8C90", Offset = "0x5CC7C90", VA = "0x5CC8C90")]
	private void UpdateSliderValueText(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$UpdateSliderValueText): clean
		bool bVar1;
		GisketchUIRoot root;

		root = null;
		bVar1 = ((Object)context.GameObject != null);
		if (bVar1) {
			if (context.GameObject == null) {
				throw new NullReferenceException();
			}
			root = context.GameObject.GetComponentInParent<GisketchUIRoot>();
		}
		AottgSettingRow.SyncValue(root, this._descriptor);
		return;
	}

	[Token(Token = "0x6000816")]
	[Address(RVA = "0x5CC8D40", Offset = "0x5CC7D40", VA = "0x5CC8D40")]
	private string SliderValueKey()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$SliderValueKey): clean
		AottgSettingDescriptor pGVar1;
		String pSVar2;

		pGVar1 = this._descriptor;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		pSVar2 = pGVar1.Id;
		pSVar2 = String.Concat(pSVar2, ".value");
		return pSVar2;
	}

	[Token(Token = "0x6000817")]
	[Address(RVA = "0x5CC8DD0", Offset = "0x5CC7DD0", VA = "0x5CC8DD0")]
	private string SliderValueText()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$SliderValueText): clean
		String pSVar1;

		return pSVar1;
	}

	[Token(Token = "0x6000818")]
	[Address(RVA = "0x5CC7C70", Offset = "0x5CC6C70", VA = "0x5CC7C70")]
	private void BuildInput(AottgUi control)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildInput): 15 lines keep C-only constructs
		AottgSettingDescriptor pGVar1;
		IAottgSettingAdapter pGVar2;
		IAottgSettingAdapter pGVar3;
		object pIVar4;
		Il2CppClass pIVar5;
		Il2CppRuntimeInterfaceOffsetPair pIVar6;
		int maxCharacters;
		String pSVar7;
		ulong uVar8;
		GisketchLength width;
		GisketchLength maxWidth;
		Action<GisketchActionContext> __this_00;
		VirtualInvokeData pVVar9;
		Action<GisketchActionContext> __this_01;
		GisketchNodeDefinition pGVar10;
		String pSVar11;
		GisketchUIBindingDefinition __this_02;
		byte puVar12;
		long lVar13;
		float value;
		Nullable<bool>[] aSStack_58 = new Nullable<bool>[2];
		int iStack_54;
		GisketchLayoutDefinition pGStack_50;
		String pSStack_48;
		String pSStack_40;
		AottgUi pGStack_38;

		pGVar1 = this._descriptor;
		if (pGVar1 == null) goto label_05dc8180;
		pSVar7 = String.Concat(pGVar1.Id, "-input");
		pSVar11 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		pGVar1 = this._descriptor;
		if (pGVar1 == null) goto label_05dc8180;
		pGVar2 = pGVar1.Adapter;
		if (pGVar2 == null) {
			iStack_54 = 2;
		}
		else {
			pGVar3 = pGVar2.klass;
			if (pGVar3 == (IAottgSettingAdapter)typeof(AottgStringSettingAdapter)) {
				iStack_54 = 0;
			}
			else {
				iStack_54 = 2 - (uint)(pGVar3 ==(IAottgSettingAdapter)typeof(AottgIntSettingAdapter));
			}
		}
		switch(pGVar1.Kind) {
		case 0:
			value = 58.0;
			break;
		case 1:
		case 2:
			value = 300.0;
			break;
		case 3:
			uVar8 = (ulong)(this._layoutMode == 1);
			puVar12 = &g_data_0100ae58;
			goto label_05dc7e28;
		case 4:
		case 6:
			uVar8 = (ulong)(this._layoutMode == 1);
			puVar12 = &g_data_0100ac50;
			goto label_05dc7e28;
		case 5:
			uVar8 = (ulong)(this._layoutMode == 1);
			puVar12 = &g_data_0100acc0;
	label_05dc7e28: ;
			value = *(float)(puVar12 + uVar8 * 4);
			break;
		default: ;
			value = 360.0;
		}
		maxCharacters = 0;
		pSStack_48 = pSVar11;
		pSStack_40 = pSVar7;
		pGStack_38 = control;
		width = AottgUi.Points(value);
		maxWidth = AottgUi.Percent(100.0);
		pGStack_50 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, maxWidth, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		__this_00 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_OnInputChanged);
		pSVar11 = "inputField";
		pGVar1 = this._descriptor;
		if (pGVar1 != null) {
			pIVar4 = (object)pGVar1.Adapter;
			if (pIVar4 != null) {
				pIVar5 = pIVar4.klass;
				uVar8 = (ulong)(pIVar5._2).interface_offsets_count;
				if (uVar8 != 0) {
					pIVar6 = (pIVar5._1).interfaceOffsets;
					lVar13 = 0;
					do {
						if (*(IAottgSettingAdapter*)((long)&pIVar6.interfaceType + lVar13) == typeof(IAottgSettingAdapter)) {
							pVVar9 = pIVar5.vtable + (*(int)((long)&pIVar6.offset + lVar13) + 7);
							goto label_05dc7f89;
						}
						lVar13 = lVar13 + 0x10;
					} while (uVar8 * 0x10 != lVar13);
				}
				pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar4, typeof(IAottgSettingAdapter), 7);
	label_05dc7f89: ;
				maxCharacters = (*pVVar9.methodPtr)(pIVar4,pVVar9.method);
			}
			__this_01 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_OnInputCommitted);
			if (pGStack_38 != null) {
				pGVar10 = pGStack_38.InputField(pSStack_40, pSStack_48, iStack_54, pSVar11, pGStack_50, null, __this_00, 0.05, maxCharacters, __this_01);
				pGVar1 = this._descriptor;
				if (pGVar1 != null) {
					pIVar4 = (object)pGVar1.Adapter;
					if (pIVar4 == null) {
						pSVar11 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					}
					else {
						pIVar5 = pIVar4.klass;
						uVar8 = (ulong)(pIVar5._2).interface_offsets_count;
						if (uVar8 != 0) {
							pIVar6 = (pIVar5._1).interfaceOffsets;
							lVar13 = 0;
							do {
								if (*(IAottgSettingAdapter*)((long)&pIVar6.interfaceType + lVar13) == typeof(IAottgSettingAdapter)) {
									pVVar9 = pIVar5.vtable + *(int)((long)&pIVar6.offset + lVar13);
									goto label_05dc808e;
								}
								lVar13 = lVar13 + 0x10;
							} while (uVar8 * 0x10 != lVar13);
						}
						pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar4, (Il2CppClass)typeof(IAottgSettingAdapter), 0);
	label_05dc808e: ;
						pSVar11 = (*pVVar9.methodPtr)(pIVar4,pVVar9.method);
					}
					if (pGVar10 != null) {
						pGVar10.value = pSVar11;
						pGVar1 = this._descriptor;
						if (pGVar1 != null) {
							aSStack_58[0].hasValue = false;
							aSStack_58[0].value = false;
							aSStack_58 = new Nullable<bool>(pGVar1.Disabled == false);
							pGVar10.enabled = aSStack_58[0];
							__this_02 = il2cpp_codegen_object_new(typeof(GisketchUIBindingDefinition)) ;
							__this_02 = new GisketchUIBindingDefinition();
							pGVar1 = this._descriptor;
							if (pGVar1 != null) {
								pSVar11 = pGVar1.Id;
								pSVar11 = String.Concat(pSVar11, ".controlValue");
								if (__this_02 != null) {
									__this_02.value = pSVar11;
									pGVar10.bind = __this_02;
									return;
								}
							}
						}
					}
				}
			}
		}
	label_05dc8180: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000819")]
	[Address(RVA = "0x5CC8F80", Offset = "0x5CC7F80", VA = "0x5CC8F80")]
	private AottgInputType InputType()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$InputType): 1 lines keep C-only constructs
		AottgSettingDescriptor pGVar1;
		IAottgSettingAdapter pGVar2;
		IAottgSettingAdapter pGVar3;

		pGVar1 = this._descriptor;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		pGVar2 = pGVar1.Adapter;
		if (pGVar2 == null) {
			return 2;
		}
		pGVar3 = pGVar2.klass;
		if (pGVar3 == (IAottgSettingAdapter)typeof(AottgStringSettingAdapter)) {
			return 0;
		}
		return 2 - (uint)(pGVar3 ==(IAottgSettingAdapter)typeof(AottgIntSettingAdapter));
	}

	[Token(Token = "0x600081A")]
	[Address(RVA = "0x5CC8190", Offset = "0x5CC7190", VA = "0x5CC8190")]
	private void BuildActionButton(AottgUi control)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildActionButton): 8 lines keep C-only constructs
		AottgSettingDescriptor pGVar1;
		Action<GisketchActionContext> action;
		MethodInfo pMVar2;
		String pSVar3;
		GisketchNodeDefinition node;
		String id;
		ulong uVar4;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		uint method_00;
		String text;
		float minWidth;

		pGVar1 = this._descriptor;
		if (pGVar1 == null) {
	label_05dc8325: ;
			throw new NullReferenceException();
		}
		text = pGVar1.ActionText;
		action = pGVar1.Action;
		if (action == null) {
			if (text == null) {
				text = pGVar1.Label;
			}
			pSVar3 = pGVar1.ActionId;
			id = String.Concat(pGVar1.Id, "-button");
			if (control == null) goto label_05dc8325;
			node = control.Button(1, text, pSVar3, id, null, null, null);
			pGVar1 = this._descriptor;
			pMVar2 = extraout_RDX_00;
		}
		else {
			if (text == null) {
				text = pGVar1.Label;
			}
			pSVar3 = String.Concat(pGVar1.Id, "-button");
			if (control == null) goto label_05dc8325;
			node = control.Button(1, text, action, pSVar3, null, null, null);
			pGVar1 = this._descriptor;
			pMVar2 = extraout_RDX;
		}
		if (pGVar1 == null) goto label_05dc8325;
		method_00 = &switchD_05dc82b3::switchdataD_010a5fb0;
		switch(pGVar1.Kind) {
		case 0:
			minWidth = 58.0;
			goto label_05dc830f;
		case 1:
		case 2:
			minWidth = 300.0;
			goto label_05dc830f;
		case 3:
			uVar4 = (ulong)(this._layoutMode == 1);
			method_00 = (uint)&g_data_0100ae58;
			break;
		case 4:
		case 6:
			uVar4 = (ulong)(this._layoutMode == 1);
			method_00 = (uint)&g_data_0100ac50;
			break;
		case 5:
			uVar4 = (ulong)(this._layoutMode == 1);
			method_00 = (uint)&g_data_0100acc0;
			break;
		default: ;
			minWidth = 360.0;
			method_00 = (uint)pMVar2;
			goto label_05dc830f;
		}
		minWidth = *(float)((long)&((MethodInfo)method_00).methodPointer + uVar4 * 4);
	label_05dc830f: ;
		this.ApplyControlLayout(node, minWidth);
		return;
	}

	[Token(Token = "0x600081B")]
	[Address(RVA = "0x5CC8330", Offset = "0x5CC7330", VA = "0x5CC8330")]
	private void BuildReadOnly(AottgUi control)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$BuildReadOnly): 4 lines keep C-only constructs
		object obj;
		Il2CppClass pIVar1;
		String text;
		AottgSettingDescriptor pGVar4;
		String id;
		GisketchNodeDefinition pGVar5;
		ulong uVar6;
		GisketchLength width;
		GisketchLength maxWidth;
		GisketchLayoutDefinition pGVar7;
		byte puVar8;
		float value;

		pGVar4 = this._descriptor;
		if (pGVar4 == null) goto label_05dc85d5;
		text = pGVar4.ReadOnlyText;
		if (text == null) {
			obj = (object)pGVar4.Adapter;
			if (obj == null) {
				text = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			else {
				pIVar1 = obj.klass;
				uVar6 = (ulong)(pIVar1._2).interface_offsets_count;
				text = obj.get_TextValue();
				pGVar4 = this._descriptor;
				if (pGVar4 == null) goto label_05dc85d5;
			}
		}
		id = String.Concat(pGVar4.Id, "-value");
		if (control == null) goto label_05dc85d5;
		pGVar5 = control.Text(text, "text", id, null, null);
		pGVar4 = this._descriptor;
		if (pGVar4 == null) goto label_05dc85d5;
		switch(pGVar4.Kind) {
		case 0:
			value = 58.0;
			break;
		case 1:
		case 2:
			value = 300.0;
			break;
		case 3:
			uVar6 = (ulong)(this._layoutMode == 1);
			puVar8 = &g_data_0100ae58;
			goto label_05dc8509;
		case 4:
		case 6:
			uVar6 = (ulong)(this._layoutMode == 1);
			puVar8 = &g_data_0100ac50;
			goto label_05dc8509;
		case 5:
			uVar6 = (ulong)(this._layoutMode == 1);
			puVar8 = &g_data_0100acc0;
	label_05dc8509: ;
			value = *(float)(puVar8 + uVar6 * 4);
			break;
			value = 360.0;
		}
		width = AottgUi.Points(value);
		maxWidth = AottgUi.Percent(100.0);
		pGVar7 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, null, null, null, maxWidth, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
		if (pGVar5 != null) {
			pGVar5.layout = pGVar7;
			return;
		}
	label_05dc85d5: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600081C")]
	[Address(RVA = "0x5CC9000", Offset = "0x5CC8000", VA = "0x5CC9000")]
	private void OnValueChanged(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$OnValueChanged): 4 lines keep C-only constructs
		object obj;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		bool bVar3;
		VirtualInvokeData pVVar4;
		GisketchUIRoot root;
		ulong uVar5;
		long lVar6;
		AottgSettingDescriptor __this_00;

		__this_00 = this._descriptor;
		if (__this_00 == null) {
	label_05dc91a3: ;
			throw new NullReferenceException();
		}
		obj = (object)__this_00.Adapter;
		if (obj != null) {
			pIVar1 = obj.klass;
			uVar5 = (ulong)(pIVar1._2).interface_offsets_count;
			if (uVar5 != 0) {
				pIVar2 = (pIVar1._1).interfaceOffsets;
				lVar6 = 0;
				do {
					if (*(IAottgSettingAdapter*)((long)&pIVar2.interfaceType + lVar6) == typeof(IAottgSettingAdapter)) {
						pVVar4 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar6) + 0xb);
						goto label_05dc90c5;
					}
					lVar6 = lVar6 + 0x10;
				} while (uVar5 * 0x10 != lVar6);
			}
			pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IAottgSettingAdapter), 0xb) ;
	label_05dc90c5: ;
			method = pVVar4.method;
			(*pVVar4.methodPtr)(obj,context,method);
			__this_00 = this._descriptor;
			if (__this_00 == null) goto label_05dc91a3;
		}
		if (__this_00.Kind != 4) {
			root = null;
			bVar3 = ((Object)context.GameObject != null);
			if (bVar3) {
				if (context.GameObject == null) goto label_05dc91a3;
				root = context.GameObject.GetComponentInParent<GisketchUIRoot>();
			}
			method = (MethodInfo)this._descriptor;
			AottgSettingRow.SyncValue(root, (AottgSettingDescriptor)method);
			__this_00 = this._descriptor;
			if (__this_00 == null) goto label_05dc91a3;
		}
		__this_00.Changed(context);
		return;
	}

	[Token(Token = "0x600081D")]
	[Address(RVA = "0x5CC91B0", Offset = "0x5CC81B0", VA = "0x5CC91B0")]
	private void OnInputChanged(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$OnInputChanged): 4 lines keep C-only constructs
		object obj;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		VirtualInvokeData pVVar3;
		ulong uVar4;
		long lVar5;
		AottgSettingDescriptor __this_00;

		__this_00 = this._descriptor;
		if (__this_00 == null) {
	label_05dc92c3: ;
			throw new NullReferenceException();
		}
		obj = (object)__this_00.Adapter;
		if (obj != null) {
			pIVar1 = obj.klass;
			uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
			if (uVar4 != 0) {
				pIVar2 = (pIVar1._1).interfaceOffsets;
				lVar5 = 0;
				do {
					if (*(IAottgSettingAdapter*)((long)&pIVar2.interfaceType + lVar5) == typeof(IAottgSettingAdapter)) {
						pVVar3 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 0xb);
						goto label_05dc926a;
					}
					lVar5 = lVar5 + 0x10;
				} while (uVar4 * 0x10 != lVar5);
			}
			pVVar3 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IAottgSettingAdapter), 0xb) ;
	label_05dc926a: ;
			method = pVVar3.method;
			(*pVVar3.methodPtr)(obj,context,method);
			__this_00 = this._descriptor;
			if (__this_00 == null) goto label_05dc92c3;
		}
		__this_00.Changed(context);
		return;
	}

	[Token(Token = "0x600081E")]
	[Address(RVA = "0x5CC92D0", Offset = "0x5CC82D0", VA = "0x5CC92D0")]
	private void OnInputCommitted(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$OnInputCommitted): 4 lines keep C-only constructs
		object obj;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		AottgSettingDescriptor __this_00;
		Action<GisketchActionContext> pSVar3;
		bool bVar4;
		VirtualInvokeData pVVar5;
		GisketchUIRoot root;
		ulong uVar6;
		AottgSettingDescriptor pGVar7;
		long lVar8;

		pGVar7 = this._descriptor;
		if (pGVar7 != null) {
			obj = (object)pGVar7.Adapter;
			if (obj != null) {
				pIVar1 = obj.klass;
				uVar6 = (ulong)(pIVar1._2).interface_offsets_count;
				if (uVar6 != 0) {
					pIVar2 = (pIVar1._1).interfaceOffsets;
					lVar8 = 0;
					do {
						if (*(IAottgSettingAdapter*)((long)&pIVar2.interfaceType + lVar8) == typeof(IAottgSettingAdapter)) {
							pVVar5 = pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar8) + 0xb);
							goto label_05dc9395;
						}
						lVar8 = lVar8 + 0x10;
					} while (uVar6 * 0x10 != lVar8);
				}
				pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IAottgSettingAdapter), 0xb);
	label_05dc9395: ;
				(*pVVar5.methodPtr)(obj,context,pVVar5.method);
			}
			root = null;
			bVar4 = ((Object)context.GameObject != null);
			if (bVar4) {
				if (context.GameObject == null) goto label_05dc9463;
				root = context.GameObject.GetComponentInParent<GisketchUIRoot>();
			}
			pGVar7 = this._descriptor;
			AottgSettingRow.SyncValue(root, pGVar7);
			__this_00 = this._descriptor;
			if (__this_00 != null) {
				__this_00.Changed(context) ;
				pGVar7 = this._descriptor;
				if (pGVar7 != null) {
					pSVar3 = pGVar7.OnCommitted;
					if (pSVar3 == null) {
						return;
					}
					(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar3.method);
					return;
				}
			}
		}
	label_05dc9463: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600081F")]
	[Address(RVA = "0x5CC8D30", Offset = "0x5CC7D30", VA = "0x5CC8D30")]
	internal static void SyncSliderValue(GisketchUIRoot root, AottgSettingDescriptor descriptor)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$SyncSliderValue): clean
		AottgSettingRow.SyncValue(root, descriptor);
		return;
	}

	[Token(Token = "0x6000820")]
	[Address(RVA = "0x5CC72A0", Offset = "0x5CC62A0", VA = "0x5CC72A0")]
	internal static void SyncValue(GisketchUIRoot root, AottgSettingDescriptor descriptor)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$SyncValue): clean
		GisketchUIState pGVar1;
		bool bVar2;
		MethodInfo method_00;
		String pSVar3;
		String value;
		MethodInfo method_01;

		method_00 = null;
		bVar2 = ((Object)root == null);
		if (((descriptor != null) && (!bVar2)) &&(descriptor.Adapter != null)) {
			if (root == null) {
				throw new NullReferenceException();
			}
			pGVar1 = root._State_k__BackingField;
			if (pGVar1 != null) {
				pSVar3 = descriptor.Id;
				method_01 = (MethodInfo *)".controlValue";
				method_00 = (MethodInfo)String.Concat(pSVar3, ".controlValue");
				pSVar3 = AottgSettingRow.ControlValueText(descriptor.Adapter);
				pGVar1.Set((String)method_00, pSVar3);
			}
			if ((descriptor.ShowValue != false) &&(pGVar1 = root._State_k__BackingField, pGVar1 != null)) {
				pSVar3 = AottgSettingRow.SliderValueKey(descriptor.Id);
				value = AottgSettingRow.SliderValueText(descriptor);
				pGVar1.Set(pSVar3, value);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000821")]
	[Address(RVA = "0x5CC8D90", Offset = "0x5CC7D90", VA = "0x5CC8D90")]
	private static string SliderValueKey(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$SliderValueKey): clean
		String pSVar1;

		pSVar1 = String.Concat(id, ".value");
		return pSVar1;
	}

	[Token(Token = "0x6000822")]
	[Address(RVA = "0x5CC85E0", Offset = "0x5CC75E0", VA = "0x5CC85E0")]
	private static string ControlValueKey(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$ControlValueKey): clean
		String pSVar1;

		pSVar1 = String.Concat(id, ".controlValue");
		return pSVar1;
	}

	[Token(Token = "0x6000823")]
	[Address(RVA = "0x5CC8DE0", Offset = "0x5CC7DE0", VA = "0x5CC8DE0")]
	private static string SliderValueText(AottgSettingDescriptor descriptor)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$SliderValueText): 1 lines keep C-only constructs
		object obj;
		Il2CppClass pIVar1;
		ulong uVar3;
		String pSVar5;
		CultureInfo provider;
		float local_c;

		if ((descriptor == null) ||(obj = (object)descriptor.Adapter, obj == null)) {
			return "0";
		}
		pIVar1 = obj.klass;
		if (pIVar1 == typeof(AottgFloatSettingAdapter)) {
			uVar3 = (ulong)(typeof(AottgFloatSettingAdapter)._2). interface_offsets_count;
			local_c = obj.get_TextValue();
			provider = CultureInfo.InvariantCulture;
			pSVar5 = local_c.ToString("0.##", (IFormatProvider)provider) ;
			return pSVar5;
		}
		return pSVar5;
	}

	[Token(Token = "0x6000824")]
	[Address(RVA = "0x5CC9470", Offset = "0x5CC8470", VA = "0x5CC9470")]
	private static string ControlValueText(IAottgSettingAdapter adapter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$ControlValueText): 1 lines keep C-only constructs
		IAottgSettingAdapter pGVar1;
		ulong uVar3;
		String pSVar5;
		CultureInfo provider;
		float local_c;

		if (adapter == null) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		pGVar1 = adapter.klass;
		if (pGVar1 == (IAottgSettingAdapter)typeof(AottgFloatSettingAdapter)) {
			uVar3 = (ulong)(typeof(AottgFloatSettingAdapter)._2). interface_offsets_count;
			local_c = adapter.get_TextValue();
			provider = CultureInfo.InvariantCulture;
			pSVar5 = local_c.ToString((IFormatProvider)provider);
			return pSVar5;
		}
		return pSVar5;
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x5CC8780", Offset = "0x5CC7780", VA = "0x5CC8780")]
	private GisketchChoiceOptionDefinition[] ChoiceOptions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$ChoiceOptions): 1 lines keep C-only constructs
		uint uVar1;
		AottgSettingDescriptor pGVar2;
		AottgSettingOption[] pGVar3;
		GisketchChoiceOptionDefinition[] pGVar4;
		ulong uVar5;
		MethodInfo method_00;
		ulong uVar6;
		AottgSettingOption __this_00;
		GisketchChoiceOptionDefinition* targetAddress;

		pGVar2 = this._descriptor;
		if (pGVar2 == null) {
	label_05dc8870: ;
			throw new NullReferenceException();
		}
		pGVar3 = pGVar2.Options;
		if (pGVar3 == null) {
			pGVar3 = (AottgSettingOption[])new AottgSettingOption[0];
			if (pGVar3 == null) goto label_05dc8870;
		}
		uVar1 = (uint)pGVar3.Length;
		method_00 = (MethodInfo)(ulong)uVar1;
		pGVar4 = (GisketchChoiceOptionDefinition[])new GisketchChoiceOptionDefinition[uVar1];
		if (0 < (int)pGVar3.Length) {
			__this_00 = pGVar3.m_Items;
			if (pGVar4 == null) {
				__this_00.ToChoice();
				throw new NullReferenceException();
			}
			uVar5 = pGVar3.Length & 0xffffffff;
			targetAddress = pGVar4.m_Items;
			uVar6 = 0;
			do {
				if (uVar5 <= uVar6) {
	label_05dc886b: ;
					throw new IndexOutOfRangeException();
				}
				method_00 = (MethodInfo)__this_00.ToChoice();
				if ((uint)pGVar4.Length <= uVar6) goto label_05dc886b;
				*targetAddress = (GisketchChoiceOptionDefinition)method_00;
				uVar6 = uVar6 + 1;
				uVar1 = (uint)pGVar3.Length;
				uVar5 = (ulong)uVar1;
				__this_00 = __this_00 + 1;
				targetAddress = targetAddress + 1;
			} while ((long)uVar6 < (long)(int)uVar1);
		}
		return pGVar4;
	}

	[Token(Token = "0x6000826")]
	[Address(RVA = "0x5CC70C0", Offset = "0x5CC60C0", VA = "0x5CC70C0")]
	private float PreferredControlWidth()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$PreferredControlWidth): 3 lines keep C-only constructs
		AottgSettingDescriptor pGVar1;

		pGVar1 = this._descriptor;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		switch(pGVar1.Kind) {
		case 0:
			return 58.0;
		case 1:
		case 2:
			return 300.0;
		case 3:
			return *(float)(&g_data_0100ae58 + (ulong)(this._layoutMode == 1) * 4);
		case 4:
		case 6:
			return *(float)(&g_data_0100ac50 + (ulong)(this._layoutMode == 1) * 4);
		case 5:
			return *(float)(&g_data_0100acc0 + (ulong)(this._layoutMode == 1) * 4);
		default: ;
			return 360.0;
		}
	}

	[Token(Token = "0x6000827")]
	[Address(RVA = "0x5CC7150", Offset = "0x5CC6150", VA = "0x5CC7150")]
	private float PreferredControlVisualWidth()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$PreferredControlVisualWidth): 3 lines keep C-only constructs
		AottgSettingDescriptor pGVar1;
		float fVar2;

		pGVar1 = this._descriptor;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		switch(pGVar1.Kind) {
		case 0:
			break;
		case 1:
		case 2:
			return 300.0;
		case 3:
			return *(float)(&g_data_0100ae58 + (ulong)(this._layoutMode == 1) * 4);
		case 4:
		case 6:
			return *(float)(&g_data_0100ac50 + (ulong)(this._layoutMode == 1) * 4);
		case 5:
			return *(float)(&g_data_0100acc0 + (ulong)(this._layoutMode == 1) * 4);
		default: ;
		}
		return fVar2;
	}

	[Token(Token = "0x6000828")]
	[Address(RVA = "0x5CC8620", Offset = "0x5CC7620", VA = "0x5CC8620")]
	private void ApplyControlLayout(GisketchNodeDefinition node, float minWidth)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$ApplyControlLayout): clean
		AottgSettingDescriptor pGVar1;
		GisketchLength width;
		GisketchLength maxWidth;
		GisketchLayoutDefinition pGVar2;
		Nullable<bool>[] local_18 = new Nullable<bool>[2];
		float local_14;

		local_14 = minWidth;
		if (node != null) {
			pGVar1 = this._descriptor;
			if (pGVar1 == null) {
				throw new NullReferenceException();
			}
			local_18[0].hasValue = false;
			local_18[0].value = false;
			local_18 = new Nullable<bool>(pGVar1.Disabled == false);
			node.enabled = local_18[0];
			width = AottgUi.Points(local_14);
			maxWidth = AottgUi.Percent(100.0);
			pGVar2 = AottgUi.Layout("Row", "Center", "Center", null, null, 0.0, width, null, null, null, maxWidth, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			node.layout = pGVar2;
		}
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRow.c.

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$<BuildSwitch>b__10_0: clean
	private void BuildSwitch_b__10_0(GisketchActionContext context)
	{
		object obj;
		AottgSettingDescriptor __this_00;
		bool bVar3;
		GisketchUIRoot root;
		AottgSettingDescriptor pGVar6;

		pGVar6 = this._descriptor;
		if (pGVar6 != null) {
			obj = (object)pGVar6.Adapter;
			if (obj != null) {
				if (context.Node == null) {
					bVar3 = false;
				}
				else {
					bVar3 = (((context.Node).fields).value == "true");
				}
				obj.SetBool(bVar3);
			}
			root = null;
			bVar3 = ((Object)context.GameObject != null);
			if (bVar3) {
				if (context.GameObject == null) goto label_05dc975e;
				root = context.GameObject.GetComponentInParent<GisketchUIRoot>();
			}
			pGVar6 = this._descriptor;
			AottgSettingRow.SyncValue(root, pGVar6);
			__this_00 = this._descriptor;
			if (__this_00 != null) {
				__this_00.Changed(context) ;
				return;
			}
		}
	label_05dc975e: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$<BuildSlider>b__12_0: 1 lines keep C-only constructs
	private void BuildSlider_b__12_0(AottgUi row)
	{
		AottgSettingDescriptor pGVar1;
		String pSVar2;
		GisketchNodeDefinition pGVar3;
		GisketchLength pGVar4;
		GisketchLayoutDefinition pGVar5;
		Action<GisketchActionContext> __this_00;
		String id;
		GisketchUIBindingDefinition __this_01;
		GisketchLength minWidth;
		GisketchLength maxWidth;
		Nullable<bool>[] local_30 = new Nullable<bool>[4];

		pGVar1 = this._descriptor;
		if (pGVar1 != null) {
			pSVar2 = String.Concat(pGVar1.Id, "-slider");
			pGVar3 = this.SliderNode(row, pSVar2);
			pGVar4 = AottgUi.Percent(100.0);
			pGVar5 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar4, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
			if (pGVar3 != null) {
				pGVar3.layout = pGVar5;
				pSVar2 = AottgSettingRow.SliderValueText(this._descriptor);
				__this_00 = new Action<GisketchActionContext>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_BuildSlider_b__12_1);
				pGVar1 = this._descriptor;
				if (pGVar1 != null) {
					id = String.Concat(pGVar1.Id, "-value-button");
					if (row != null) {
						pGVar3 = row.Button(5, pSVar2, __this_00, id, null, null, null);
						__this_01 = new GisketchUIBindingDefinition();
						pGVar1 = this._descriptor;
						if (pGVar1 != null) {
							pSVar2 = pGVar1.Id;
							pSVar2 = String.Concat(pSVar2, ".value");
							if (__this_01 != null) {
								__this_01.text = pSVar2;
								if (pGVar3 != null) {
									pGVar3.bind = __this_01;
									pGVar1 = this._descriptor;
									if (pGVar1 != null) {
										local_30[0].hasValue = false;
										local_30[0].value = false;
										local_30 = new Nullable<bool>(pGVar1.Disabled == false);
										pGVar3.enabled = local_30[0];
										pGVar3.clip = true;
										pGVar4 = AottgUi.Points(80.0);
										minWidth = AottgUi.Points(80.0);
										maxWidth = AottgUi.Points(80.0);
										pGVar5 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar4, null, minWidth, null, maxWidth, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
										pGVar3.layout = pGVar5;
										return;
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$<BuildSlider>b__12_1: clean
	private void BuildSlider_b__12_1(GisketchActionContext context)
	{
		AottgSettingSliderValueDialog.Open(context, this._descriptor);
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingRow$$<SliderNode>b__13_0: clean
	private void SliderNode_b__13_0(GisketchActionContext context)
	{
		object obj;
		String s;
		AottgSettingDescriptor __this_00;
		bool bVar3;
		CultureInfo provider;
		GisketchUIRoot root;
		AottgSettingDescriptor pGVar6;
		float fVar8;

		pGVar6 = this._descriptor;
		if (pGVar6 != null) {
			obj = (object)pGVar6.Adapter;
			if (obj != null) {
				if (context.Node == null) goto label_05dc9c90;
				s = ((context.Node).fields).value;
				provider = CultureInfo.InvariantCulture;
				fVar8 = Single.Parse(s, (IFormatProvider)provider);
				fVar8.SetFloat();
			}
			root = null;
			bVar3 = ((Object)context.GameObject != null);
			if (bVar3) {
				if (context.GameObject == null) goto label_05dc9c90;
				root = (GisketchUIRoot)context.GameObject.GetComponentInParent<GisketchUIRoot>();
			}
			pGVar6 = this._descriptor;
			AottgSettingRow.SyncValue(root, pGVar6);
			__this_00 = this._descriptor;
			if (__this_00 != null) {
				__this_00.Changed(context) ;
				return;
			}
		}
	label_05dc9c90: ;
		throw new NullReferenceException();
	}
}
