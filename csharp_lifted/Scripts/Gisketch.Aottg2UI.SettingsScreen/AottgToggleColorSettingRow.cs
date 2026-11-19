// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgToggleColorSettingRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x20001B3")]
internal sealed class AottgToggleColorSettingRow : AottgComponent, IAottgSettingsSearchable, IAottgSettingsStateSync, IAottgSettingRowLayoutAware
{
	[Token(Token = "0x400092E")]
	[FieldOffset(Offset = "0x10")]
	private readonly AottgSettingDescriptor _descriptor;

	[Token(Token = "0x400092F")]
	[FieldOffset(Offset = "0x18")]
	private AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x4000930")]
	[FieldOffset(Offset = "0x40")]
	private AottgSettingRowLayoutMode _layoutMode;

	[Token(Token = "0x600098E")]
	[Address(RVA = "0x5D4AD80", Offset = "0x5D49D80", VA = "0x5D4AD80")]
	public AottgToggleColorSettingRow(AottgSettingDescriptor descriptor)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgToggleColorSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$.ctor): clean
		base();
		this._descriptor = descriptor;
		return;
	}

	[Token(Token = "0x600098F")]
	[Address(RVA = "0x5D56EC0", Offset = "0x5D55EC0", VA = "0x5D56EC0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgToggleColorSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$Build): 2 lines keep C-only constructs
		int layoutMode;
		AottgSettingDescriptor pGVar1;
		String id;
		String label;
		String labelKey;
		String tooltip;
		String searchTitle;
		String tooltipKey;
		String searchKeywords;
		String icon;
		AottgSettingsSearchContext searchContext;
		Func<string> pSVar2;
		Action<AottgUi> __this_00;
		AottgSettingRowFrame __this_01;

		pGVar1 = this._descriptor;
		if (pGVar1 == null) {
			return;
		}
		pSVar2 = new Func<string>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_Build_b__4_0);
		pGVar1.DirtyValue = pSVar2;
		pGVar1 = this._descriptor;
		if (pGVar1 != null) {
			id = pGVar1.Id;
			label = pGVar1.Label;
			__this_00 = new Action<AottgUi>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_BuildControl);
			pGVar1 = this._descriptor;
			if (pGVar1 != null) {
				labelKey = pGVar1.LabelKey;
				tooltip = pGVar1.Tooltip;
				searchTitle = pGVar1.SearchTitle;
				searchKeywords = pGVar1.SearchKeywords;
				icon = pGVar1.Icon;
				tooltipKey = pGVar1.TooltipKey;
				pSVar2 = pGVar1.DirtyValue;
				layoutMode = this._layoutMode;
				searchContext = this._searchContext;
				__this_01 = new AottgSettingRowFrame(id, label, 200.0, __this_00, tooltip, searchTitle, searchKeywords, icon, (Nullable<float>)0x0, labelKey, tooltipKey, null, (AottgSettingsSearchContext)searchContext, pSVar2, null, null, layoutMode);
				if (ui != null) {
					ui.Component((AottgComponent)__this_01);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000990")]
	[Address(RVA = "0x5D57130", Offset = "0x5D56130", VA = "0x5D57130", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgToggleColorSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$ApplySearchContext): clean
		this._searchContext.GroupTitle = context.GroupTitle;
		this._searchContext.CategoryTitle = context.CategoryTitle;
		this._searchContext.GroupId = context.GroupId;
		this._searchContext.ScreenTitle = context.ScreenTitle;
		this._searchContext.CategoryId = context.CategoryId;
		return;
	}

	[Token(Token = "0x6000991")]
	[Address(RVA = "0x5D57160", Offset = "0x5D56160", VA = "0x5D57160", Slot = "7")]
	public void ApplyLayoutMode(AottgSettingRowLayoutMode mode)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgToggleColorSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$ApplyLayoutMode): clean
		this._layoutMode = mode;
		return;
	}

	[Token(Token = "0x6000992")]
	[Address(RVA = "0x5D57170", Offset = "0x5D56170", VA = "0x5D57170", Slot = "6")]
	public void SyncState(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgToggleColorSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$SyncState): 12 lines keep C-only constructs
		uint uVar1;
		GisketchUIState pGVar2;
		object pIVar3;
		Il2CppClass pIVar4;
		Il2CppRuntimeInterfaceOffsetPair pIVar5;
		bool bVar6;
		AottgSettingDescriptor pGVar7;
		String pSVar8;
		VirtualInvokeData pVVar9;
		String pSVar10;
		GameObject source;
		ulong uVar11;
		long lVar12;

		pGVar7 = this._descriptor;
		if (pGVar7 == null) {
			return;
		}
		if (root != null) {
			pGVar2 = root._State_k__BackingField;
			if (pGVar2 != null) {
				if (Il2CppMethodInitialized_07548682 == false) {
					Il2CppMethodInitialized_07548682 = true;
					pGVar7 = this._descriptor;
					if (pGVar7 == null) goto label_05e57562;
				}
				pSVar8 = String.Concat(pGVar7.Id, ".controlValue");
				pGVar7 = this._descriptor;
				if (pGVar7 == null) goto label_05e57562;
				pIVar3 = (object)pGVar7.Adapter;
				if (pIVar3 == null) {
					pSVar10 = "false";
				}
				else {
					pIVar4 = pIVar3.klass;
					uVar11 = (ulong)(pIVar4._2).interface_offsets_count;
					if (uVar11 != 0) {
						pIVar5 = (pIVar4._1).interfaceOffsets;
						lVar12 = 0;
						do {
							if (*(IAottgSettingAdapter*)((long)&pIVar5.interfaceType + lVar12) == typeof(IAottgSettingAdapter)) {
								pVVar9 = pIVar4.vtable + *(int)((long)&pIVar5.offset + lVar12);
								goto label_05e572da;
							}
							lVar12 = lVar12 + 0x10;
						} while (uVar11 * 0x10 != lVar12);
					}
					pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar3, (Il2CppClass)typeof(IAottgSettingAdapter), 0);
	label_05e572da: ;
					pSVar10 = (*pVVar9.methodPtr)(pIVar3,pVVar9.method);
					if (pIVar3 == null) goto label_05e57562;
				}
				pGVar2.Set(pSVar8, pSVar10);
				pGVar2 = root._State_k__BackingField;
				if (pGVar2 != null) {
					pGVar7 = this._descriptor;
					if (pGVar7 == null) goto label_05e57562;
					pSVar8 = String.Concat(pGVar7.Id, ".color.enabled");
					pGVar7 = this._descriptor;
					if (pGVar7 == null) goto label_05e57562;
					pIVar3 = (object)pGVar7.Adapter;
					if (pIVar3 == null) {
						bVar6 = false;
					}
					else {
						pIVar4 = pIVar3.klass;
						uVar11 = (ulong)(pIVar4._2).interface_offsets_count;
						if (uVar11 != 0) {
							pIVar5 = (pIVar4._1).interfaceOffsets;
							lVar12 = 0;
							do {
								if (*(IAottgSettingAdapter*)((long)&pIVar5.interfaceType + lVar12) == typeof(IAottgSettingAdapter)) {
									pVVar9 = pIVar4.vtable + (*(int)((long)&pIVar5.offset + lVar12) + 2);
									goto label_05e573d0;
								}
								lVar12 = lVar12 + 0x10;
							} while (uVar11 * 0x10 != lVar12);
						}
						pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar3, (Il2CppClass)typeof(IAottgSettingAdapter), 2);
	label_05e573d0: ;
						bVar6 = (*pVVar9.methodPtr)(pIVar3,pVVar9.method);
						if (pIVar3 == null) goto label_05e57562;
					}
					pGVar2.SetBool(pSVar8, bVar6);
				}
			}
			pGVar7 = this._descriptor;
			if (pGVar7 == null) goto label_05e57562;
		}
		pSVar8 = String.Concat(pGVar7.Id, "-color");
		pGVar7 = this._descriptor;
		if (pGVar7 != null) {
			pIVar3 = (object)pGVar7.SecondaryAdapter;
			if (pIVar3 == null) {
				uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				pSVar10 = "#FFFFFFFF";
			}
			else {
				pIVar4 = pIVar3.klass;
				uVar11 = (ulong)(pIVar4._2).interface_offsets_count;
				if (uVar11 != 0) {
					pIVar5 = (pIVar4._1).interfaceOffsets;
					lVar12 = 0;
					do {
						if (*(IAottgSettingAdapter*)((long)&pIVar5.interfaceType + lVar12) == typeof(IAottgSettingAdapter)) {
							pVVar9 = pIVar4.vtable + *(int)((long)&pIVar5.offset + lVar12);
							goto label_05e574b3;
						}
						lVar12 = lVar12 + 0x10;
					} while (uVar11 * 0x10 != lVar12);
				}
				pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar3, typeof(IAottgSettingAdapter), 0);
	label_05e574b3: ;
				pSVar10 = (*pVVar9.methodPtr)(pIVar3,pVVar9.method);
				uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			source = null;
			bVar6 = ((Object)root != null);
			if (bVar6) {
				if (root == null) goto label_05e57562;
				source = root.gameObject;
			}
			GisketchUIColorPicker.SetValue(pSVar8, pSVar10, true, source);
			pGVar7 = this._descriptor;
			if (pGVar7 != null) {
				pSVar8 = pGVar7.Id;
				if ((typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor == 0) {
				}
				AottgSettingsDirtyRegistry.SyncRow(root, pSVar8);
				return;
			}
		}
	label_05e57562: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000993")]
	[Address(RVA = "0x5D57610", Offset = "0x5D56610", VA = "0x5D57610")]
	private void BuildControl(AottgUi control)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgToggleColorSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$BuildControl): 1 lines keep C-only constructs
		AottgSettingDescriptor pGVar1;
		Action<AottgUi> __this_00;
		String id;
		GisketchLength width;
		GisketchLength maxWidth;
		GisketchLayoutDefinition layout;

		__this_00 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_BuildControl_b__8_0);
		pGVar1 = this._descriptor;
		if (pGVar1 != null) {
			id = String.Concat(pGVar1.Id, "-toggle-color");
			width = AottgUi.Points(200.0);
			maxWidth = AottgUi.Percent(100.0);
			layout = AottgUi.Layout("Row", "Center", "Center", null, null, 10.0, width, null, null, null, maxWidth, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
			if (control != null) {
				control.Panel("clear", __this_00, id, layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000994")]
	[Address(RVA = "0x5D575C0", Offset = "0x5D565C0", VA = "0x5D575C0")]
	private string ColorEnabledKey()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgToggleColorSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$ColorEnabledKey): clean
		AottgSettingDescriptor pGVar1;
		String pSVar2;

		pGVar1 = this._descriptor;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		pSVar2 = String.Concat(pGVar1.Id, ".color.enabled");
		return pSVar2;
	}

	[Token(Token = "0x6000995")]
	[Address(RVA = "0x5D57570", Offset = "0x5D56570", VA = "0x5D57570")]
	private string ControlValueKey()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgToggleColorSettingRow.c (Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$ControlValueKey): clean
		AottgSettingDescriptor pGVar1;
		String pSVar2;

		pGVar1 = this._descriptor;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		pSVar2 = String.Concat(pGVar1.Id, ".controlValue");
		return pSVar2;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgToggleColorSettingRow.c.

	// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$<Build>b__4_0: 8 lines keep C-only constructs
	private String Build_b__4_0()
	{
		object pIVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		String str1;
		VirtualInvokeData pVVar4;
		String pSVar5;
		AottgSettingDescriptor pGVar6;
		String str2;
		ulong uVar7;
		long lVar8;

		pGVar6 = this._descriptor;
		if (pGVar6 == null) {
	label_05e57929: ;
			throw new NullReferenceException();
		}
		pIVar1 = (object)pGVar6.Adapter;
		if (pIVar1 == null) {
			pSVar5 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			pIVar2 = pIVar1.klass;
			uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
			if (uVar7 != 0) {
				pIVar3 = (pIVar2._1).interfaceOffsets;
				lVar8 = 0;
				do {
					if (*(IAottgSettingAdapter*)((long)&pIVar3.interfaceType + lVar8) == typeof(IAottgSettingAdapter)) {
						pVVar4 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar8);
						goto label_05e5786b;
					}
					lVar8 = lVar8 + 0x10;
				} while (uVar7 * 0x10 != lVar8);
			}
			pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar1, typeof(IAottgSettingAdapter), 0);
	label_05e5786b: ;
			pSVar5 = (*pVVar4.methodPtr)(pIVar1,pVVar4.method);
			pGVar6 = this._descriptor;
			if (pGVar6 == null) goto label_05e57929;
		}
		str1 = "|";
		pIVar1 = (object)pGVar6.SecondaryAdapter;
		if (pIVar1 == null) {
			str2 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			pIVar2 = pIVar1.klass;
			uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
			if (uVar7 != 0) {
				pIVar3 = (pIVar2._1).interfaceOffsets;
				lVar8 = 0;
				do {
					if (*(IAottgSettingAdapter*)((long)&pIVar3.interfaceType + lVar8) == typeof(IAottgSettingAdapter)) {
						pVVar4 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar8);
						goto label_05e5790b;
					}
					lVar8 = lVar8 + 0x10;
				} while (uVar7 * 0x10 != lVar8);
			}
			pVVar4 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar1, typeof(IAottgSettingAdapter), 0);
	label_05e5790b: ;
			str2 = (*pVVar4.methodPtr)(pIVar1,pVVar4.method);
		}
		pSVar5 = String.Concat(pSVar5, str1, str2);
		return pSVar5;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$<BuildControl>b__8_0: 13 lines keep C-only constructs
	private void BuildControl_b__8_0(AottgUi row)
	{
		object pIVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		IAottgSettingAdapter pGVar4;
		bool bVar5;
		String pSVar6;
		VirtualInvokeData pVVar7;
		Action<GisketchActionContext> pSVar8;
		GisketchNodeDefinition pGVar9;
		GisketchUIBindingDefinition __this_00;
		GisketchLength width;
		GisketchLayoutDefinition pGVar10;
		String enabledKey;
		ulong uVar11;
		long lVar12;
		AottgSettingDescriptor pGVar13;
		uint uStack_50;
		Nullable<bool>[] aSStack_48 = new Nullable<bool>[4];
		AottgUi pGStack_40;
		IAottgSettingAdapter pGStack_38;

		pGVar13 = this._descriptor;
		if (pGVar13 != null) {
			pSVar6 = String.Concat(pGVar13.Id, "-switch");
			pGVar13 = this._descriptor;
			if (pGVar13 != null) {
				pIVar1 = (object)pGVar13.Adapter;
				if (pIVar1 == null) {
					bVar5 = false;
				}
				else {
					pIVar2 = pIVar1.klass;
					uVar11 = (ulong)(pIVar2._2).interface_offsets_count;
					if (uVar11 != 0) {
						pIVar3 = (pIVar2._1).interfaceOffsets;
						lVar12 = 0;
						do {
							if (*(IAottgSettingAdapter*)((long)&pIVar3.interfaceType + lVar12) == typeof(IAottgSettingAdapter)) {
								pVVar7 = pIVar2.vtable + (*(int)((long)&pIVar3.offset + lVar12) + 2);
								goto label_05e57a74;
							}
							lVar12 = lVar12 + 0x10;
						} while (uVar11 * 0x10 != lVar12);
					}
					pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar1, (Il2CppClass)typeof(IAottgSettingAdapter), 2);
	label_05e57a74: ;
					bVar5 = (*pVVar7.methodPtr)(pIVar1,pVVar7.method);
				}
				pSVar8 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgToggleColorSettingRow_BuildControl_b__8_1);
				if (row != null) {
					pGVar9 = row.Switch(pSVar6, bVar5, pSVar8);
					pGVar13 = this._descriptor;
					if (pGVar13 != null) {
						aSStack_48[0].hasValue = false;
						aSStack_48[0].value = false;
						aSStack_48 = new Nullable<bool>(pGVar13.Disabled == false);
						if (pGVar9 != null) {
							pGVar9.enabled = aSStack_48[0];
							__this_00 = il2cpp_codegen_object_new(typeof(GisketchUIBindingDefinition)) ;
							__this_00 = new GisketchUIBindingDefinition();
							pGVar13 = this._descriptor;
							if ((pGVar13 != null) &&(pSVar6 = String.Concat(pGVar13.Id, ".controlValue"), __this_00 != null)) {
								__this_00.value = pSVar6;
								pGVar9.bind = __this_00;
								width = AottgUi.Points(58.0);
								pGVar10 = AottgUi.Layout("Row", "Center", "Center", null, null, 0.0, width, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
								pGVar9.layout = pGVar10;
								pGVar13 = this._descriptor;
								if (pGVar13 != null) {
									pGVar4 = pGVar13.SecondaryAdapter;
									bVar5 = true;
									pGStack_40 = row;
									if ((pGVar13.Disabled == false) &&(pIVar1 = (object)pGVar13.Adapter, pIVar1 != null)) {
										pIVar2 = pIVar1.klass;
										uVar11 = (ulong)(pIVar2._2).interface_offsets_count;
										if (uVar11 != 0) {
											pIVar3 = (pIVar2._1).interfaceOffsets;
											lVar12 = 0;
											do {
												if (*(IAottgSettingAdapter*)((long)&pIVar3.interfaceType + lVar12) == typeof(IAottgSettingAdapter)) {
													pVVar7 = pIVar2.vtable + (*(int)((long)&pIVar3.offset + lVar12) + 2);
													goto label_05e57ce9;
												}
												lVar12 = lVar12 + 0x10;
											} while (uVar11 * 0x10 != lVar12);
										}
										pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar1, (Il2CppClass)typeof(IAottgSettingAdapter), 2) ;
	label_05e57ce9: ;
										bVar5 = (*pVVar7.methodPtr)(pIVar1,pVVar7.method);
										pGVar13 = this._descriptor;
										if (pGVar13 == null) goto label_05e57de0;
										bVar5 = !bVar5;
									}
									pSVar6 = pGVar13.Id;
									pGStack_40 = row;
									pGStack_38 = pGVar4;
									pSVar8 = new Action<GisketchActionContext>((object)pGVar13, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_Changed);
									pGVar13 = this._descriptor;
									if (pGVar13 != null) {
										enabledKey = String.Concat(pGVar13.Id, ".color.enabled");
										pGVar13 = this._descriptor;
										if (pGVar13 != null) {
											uStack_50 = (uint)uStack_50._2_2_ << 0x10;
											uStack_50 = new Nullable<bool>(pGVar13.Disabled);
											AottgColorSettingRow.BuildPicker(pGStack_40, pGStack_38, bVar5, pSVar6, pSVar8, enabledKey, (Nullable<bool>)SUB42(uStack_50, 0));
											return;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_05e57de0: ;
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgToggleColorSettingRow$$<BuildControl>b__8_1: 12 lines keep C-only constructs
	private void BuildControl_b__8_1(GisketchActionContext context)
	{
		AottgSettingDescriptor pGVar1;
		object pIVar2;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		GisketchUIState pGVar5;
		bool bVar6;
		VirtualInvokeData pVVar7;
		GisketchUIRoot pGVar8;
		String pSVar9;
		String value;
		ulong uVar10;
		long lVar11;

		pGVar1 = this._descriptor;
		if (pGVar1 == null) goto label_05e5814e;
		pIVar2 = (object)pGVar1.Adapter;
		if (pIVar2 != null) {
			if (context.Node == null) {
				bVar6 = false;
			}
			else {
				bVar6 = (((context.Node).fields).value == "true");
			}
			pIVar3 = pIVar2.klass;
			uVar10 = (ulong)(pIVar3._2).interface_offsets_count;
			if (uVar10 != 0) {
				pIVar4 = (pIVar3._1).interfaceOffsets;
				lVar11 = 0;
				do {
					if (*(IAottgSettingAdapter*)((long)&pIVar4.interfaceType + lVar11) == typeof(IAottgSettingAdapter)) {
						pVVar7 = pIVar3.vtable + (*(int)((long)&pIVar4.offset + lVar11) + 8);
						goto label_05e57ee5;
					}
					lVar11 = lVar11 + 0x10;
				} while (uVar10 * 0x10 != lVar11);
			}
			pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar2, typeof(IAottgSettingAdapter), 8);
	label_05e57ee5: ;
			(*pVVar7.methodPtr)(pIVar2,bVar6,pVVar7.method);
		}
		if (context.GameObject != null) {
			pGVar8 = context.GameObject.GetComponentInParent<GisketchUIRoot>();
			if ((pGVar8 != null) &&(pGVar5 = pGVar8._State_k__BackingField, pGVar5 != null)) {
				pGVar1 = this._descriptor;
				if (pGVar1 == null) goto label_05e5814e;
				pSVar9 = String.Concat(pGVar1.Id, ".controlValue");
				pGVar1 = this._descriptor;
				if (pGVar1 == null) goto label_05e5814e;
				pIVar2 = (object)pGVar1.Adapter;
				if (pIVar2 == null) {
					if (pGVar5 == null) goto label_05e5814e;
					value = "false";
				}
				else {
					pIVar3 = pIVar2.klass;
					uVar10 = (ulong)(pIVar3._2).interface_offsets_count;
					if (uVar10 != 0) {
						pIVar4 = (pIVar3._1).interfaceOffsets;
						lVar11 = 0;
						do {
							if (*(IAottgSettingAdapter*)((long)&pIVar4.interfaceType + lVar11) == typeof(IAottgSettingAdapter)) {
								pVVar7 = pIVar3.vtable + *(int)((long)&pIVar4.offset + lVar11);
								goto label_05e58006;
							}
							lVar11 = lVar11 + 0x10;
						} while (uVar10 * 0x10 != lVar11);
					}
					pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar2, (Il2CppClass)typeof(IAottgSettingAdapter), 0);
	label_05e58006: ;
					value = (*pVVar7.methodPtr)(pIVar2,pVVar7.method);
				}
				pGVar5.Set(pSVar9, value);
			}
			pGVar8 = context.GameObject.GetComponentInParent<GisketchUIRoot>();
			if ((pGVar8 != null) &&(pGVar5 = pGVar8._State_k__BackingField, pGVar5 != null)) {
				pGVar1 = this._descriptor;
				if (pGVar1 == null) goto label_05e5814e;
				pSVar9 = String.Concat(pGVar1.Id, ".color.enabled");
				pGVar1 = this._descriptor;
				if (pGVar1 == null) goto label_05e5814e;
				pIVar2 = (object)pGVar1.Adapter;
				if (pIVar2 == null) {
					bVar6 = false;
				}
				else {
					pIVar3 = pIVar2.klass;
					uVar10 = (ulong)(pIVar3._2).interface_offsets_count;
					if (uVar10 != 0) {
						pIVar4 = (pIVar3._1).interfaceOffsets;
						lVar11 = 0;
						do {
							if (*(IAottgSettingAdapter*)((long)&pIVar4.interfaceType + lVar11) == typeof(IAottgSettingAdapter)) {
								pVVar7 = pIVar3.vtable + (*(int)((long)&pIVar4.offset + lVar11) + 2);
								goto label_05e58110;
							}
							lVar11 = lVar11 + 0x10;
						} while (uVar10 * 0x10 != lVar11);
					}
					pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar2, (Il2CppClass)typeof(IAottgSettingAdapter), 2);
	label_05e58110: ;
					bVar6 = (*pVVar7.methodPtr)(pIVar2,pVVar7.method);
					if (pIVar2 == null) goto label_05e5814e;
				}
				pGVar5.SetBool(pSVar9, bVar6);
			}
		}
		pGVar1 = this._descriptor;
		if (pGVar1 != null) {
			pGVar1.Changed(context);
			return;
		}
	label_05e5814e: ;
		throw new NullReferenceException();
	}
}
