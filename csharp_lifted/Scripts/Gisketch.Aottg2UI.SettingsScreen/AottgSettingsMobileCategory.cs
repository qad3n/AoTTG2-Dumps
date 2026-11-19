// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMobileCategory
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMobileCategory.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using UI;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000196")]
internal static class AottgSettingsMobileCategory
{
	[Token(Token = "0x2000197")]
	private sealed class LayoutRow : AottgComponent
	{
		[Token(Token = "0x40008F2")]
		[FieldOffset(Offset = "0x10")]
		private readonly MobileInputLayoutRole _role;

		[Token(Token = "0x60008E1")]
		[Address(RVA = "0x5D48EB0", Offset = "0x5D47EB0", VA = "0x5D48EB0")]
		internal LayoutRow(MobileInputLayoutRole role)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMobileCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMobileCategory.LayoutRow$$.ctor): clean
			base();
			this._role = role;
			return;
		}

		[Token(Token = "0x60008E2")]
		[Address(RVA = "0x5D48F80", Offset = "0x5D47F80", VA = "0x5D48F80", Slot = "4")]
		public override void Build(AottgUi ui)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMobileCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMobileCategory.LayoutRow$$Build): 6 lines keep C-only constructs
			int iVar1;
			AottgSettingsMobileCategory.LayoutRow.c__DisplayClass2_0 __this_00;
			String pSVar2;
			String[] pSVar3;
			GisketchChoiceOptionDefinition[] pGVar4;
			GisketchChoiceOptionDefinition __this_01;
			Action<AottgUi> __this_02;
			GisketchLength height;
			GisketchLength width;
			GisketchLayoutDefinition layout;
			ulong uVar5;
			GisketchChoiceOptionDefinition[]* targetAddress;
			long lVar6;
			Enum SStack_48;

			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSettingsMobileCategory.LayoutRow.c__DisplayClass2_0));
			__this_00 = new Object();
			if (__this_00 !=null) {
				__this_00.__4__this = this;
				SStack_48.klass = (Enum)typeof(MobileInputLayoutRole);
				SStack_48.monitor = (IntPtr)0xffffffffffffffff;
				pSVar2 = SStack_48.ToString();
				pSVar2 = String.Concat("settings-mobile-layout-", pSVar2);
				__this_00.id = pSVar2;
				pSVar2 = MobileInputLayoutUtil.GetRoleLabel(this._role);
				__this_00.label = pSVar2;
				iVar1 = this._role;
				pSVar3 = MobileInputLayoutManager.GetLayoutNames(iVar1);
				if (pSVar3 != null) {
					pGVar4 = (GisketchChoiceOptionDefinition[])new GisketchChoiceOptionDefinition[(uint32_t)pSVar3.Length];
					targetAddress = &__this_00.choices;
					__this_00.choices = pGVar4;
					if (0 < (int)pSVar3.Length) {
						lVar6 = 0x20;
						uVar5 = 0;
						do {
							pGVar4 = *targetAddress;
							__this_01 = il2cpp_codegen_object_new(typeof(GisketchChoiceOptionDefinition));
							__this_01 = new GisketchChoiceOptionDefinition();
							if ((uint)pSVar3.Length <= uVar5) {
		label_05e49377: ;
								throw new IndexOutOfRangeException();
							}
							if (__this_01 == null) goto label_05e4937c;
							__this_01.value = *(String*)((long)pSVar3.m_Items + lVar6 + -0x20);
							if ((uint)pSVar3.Length <= uVar5) goto label_05e49377;
							iVar1 = this._role;
							pSVar2 = *(String*)((long)pSVar3.m_Items + lVar6 + -0x20);
							pSVar2 = MobileInputLayoutManager.GetLayoutDisplayName(iVar1, pSVar2);
							__this_01.text = pSVar2;
							if (pGVar4 == null) goto label_05e4937c;
							if ((uint)pGVar4.Length <= uVar5) goto label_05e49377;
							*(GisketchChoiceOptionDefinition*)((long)pGVar4.m_Items + lVar6 + -0x20) = __this_01;
							uVar5 = uVar5 + 1;
							lVar6 = lVar6 + 8;
						} while ((long)uVar5 < (long)(int)pSVar3.Length);
					}
					__this_02 = new Action<AottgUi>((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow_c__DisplayClass2_0_Build);
					pSVar2 = String.Concat(__this_00.id, "-row");
					height = AottgUi.Points(72.0);
					width = AottgUi.Percent(100.0);
					layout = AottgUi.Layout("Row", null, "Center", null, null, 12.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
					if (ui != null) {
						ui.Panel("clear", __this_02, pSVar2, layout, null);
						return;
					}
				}
			}
		label_05e4937c: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x60008DE")]
	[Address(RVA = "0x5D48200", Offset = "0x5D47200", VA = "0x5D48200")]
	internal static void Build(AottgUi ui, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMobileCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMobileCategory$$Build): 2 lines keep C-only constructs
		String categoryId;
		AottgSettingsGroup[] groups;
		AottgVirtualSettingsScrollCategory __this;
		String* method_00;

		if (g_data_07548606 == false) {
			method_00 = &"mobile";
			g_data_07548606 = true;
		}
		groups = AottgSettingsMobileCategory.Groups();
		categoryId = "mobile";
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgVirtualSettingsScrollCategory));
		__this = new AottgVirtualSettingsScrollCategory(context, categoryId, groups, null, 0.0, (Nullable<float>)0x0);
		if (ui == null) {
			throw new NullReferenceException();
		}
		ui.Component((AottgComponent)__this);
		return;
	}

	[Token(Token = "0x60008DF")]
	[Address(RVA = "0x5D48E90", Offset = "0x5D47E90", VA = "0x5D48E90")]
	internal static void SyncState(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMobileCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMobileCategory$$SyncState): clean
		AottgSettingsGroup[] groups;

		groups = AottgSettingsMobileCategory.Groups();
		AottgSettingsCategoryPage.SyncState(root, groups);
		return;
	}

	[Token(Token = "0x60008E0")]
	[Address(RVA = "0x5D482D0", Offset = "0x5D472D0", VA = "0x5D482D0")]
	private static AottgSettingsGroup[] Groups()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMobileCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMobileCategory$$Groups): 31 lines keep C-only constructs
		int iVar1;
		uint uVar2;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		UISettings pSVar5;
		Il2CppType handle;
		String pSVar6;
		String id;
		GeneralSettings pSVar7;
		sbyte cVar8;
		List<object> __this;
		Type enumType;
		Array __this_00;
		object pIVar9;
		VirtualInvokeData pVVar10;
		int piVar11;
		AottgSettingsMobileCategory.LayoutRow item;
		AottgSettingsGroup[] pGVar12;
		AottgComponent[] rows;
		Action<GisketchActionContext> pSVar13;
		object pIVar14;
		Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory___c_StaticFields pGVar15;
		AottgSettingsGroup pGVar16;
		AottgSettingsRowBlock[] blocks;
		Object[] pSVar17;
		MethodInfo pMVar18;
		String pSVar19;
		ulong uVar20;
		BoolSetting pSVar21;
		BoolSetting item_00;
		long lVar22;
		object local_80;
		object local_78;
		BoolSetting local_70;
		GeneralSettings local_68;
		object local_60;
		String local_58;
		AottgSettingsGroup[] local_50;
		object* local_40;
		object* local_38;

		if (Il2CppMethodInitialized_07548607 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_AottgComponent_Add) ;
			Il2CppMethodInitialized_07548607 = true;
		}
		local_60 = null;
		local_68 = SettingsManager.GeneralSettings;
		if ((local_68 == null) ||(SettingsManager.UISettings == null)) {
			pGVar12 = (AottgSettingsGroup[])new AottgSettingsGroup[0];
			return pGVar12;
		}
		__this = new List<AottgComponent>();
		handle = TypeRef_UI_MobileInputLayoutRole;
		enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		__this_00 = Enum.GetValues(enumType);
		if (__this_00 != null) {
			pIVar9 = (object)__this_00.GetEnumerator();
			local_40 = &local_80;
			local_38 = &local_60;
			do {
				local_80 = pIVar9;
				if (pIVar9 == null) {
					throw new NullReferenceException();
				}
				pIVar3 = pIVar9.klass;
				uVar20 = (ulong)(pIVar3._2).interface_offsets_count;
				cVar8 = pIVar9.Dispose();
				pIVar9 = local_80;
				if (cVar8 == false) {
					pIVar9 = (local_80 as IDisposable);
					local_60 = pIVar9;
					if (pIVar9 == null) goto label_05e48816;
					pIVar3 = pIVar9.klass;
					uVar20 = (ulong)(pIVar3._2).interface_offsets_count;
					if (uVar20 == 0) goto label_05e487ef;
					pIVar4 = (pIVar3._1).interfaceOffsets;
					lVar22 = 0;
					goto label_05e487e0;
				}
				if (local_80 == null) {
					throw new NullReferenceException();
				}
				pIVar3 = local_80.klass;
				uVar20 = (ulong)(pIVar3._2).interface_offsets_count;
				pIVar9 = pIVar9.Dispose();
				if (pIVar9 == null) {
					throw new NullReferenceException();
				}
				if ((pIVar9.klass._1).element_class != (typeof(MobileInputLayoutRole)._1).element_class) {
					throw new InvalidCastException();
				}
				piVar11 = il2cpp_vm_Object_Unbox(pIVar9);
				iVar1 = *piVar11;
				item = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSettingsMobileCategory.LayoutRow));
				item = new AottgComponent();
				item._role = iVar1;
				pMVar18 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
				if (__this == null) {
	label_05e48dfa: ;
					throw new NullReferenceException();
				}
				piVar11 = &__this._version;
				*piVar11 = *piVar11 + 1;
				pSVar17 = __this._items;
				if (pSVar17 == null) goto label_05e48dfa;
				uVar2 = __this._size;
				if (uVar2 < (uint)pSVar17.Length) {
					__this._size = uVar2 + 1;
					pSVar17[(int)uVar2] = (object)item;
					pIVar9 = local_80;
				}
				else {
					__this.AddWithResize((object)item);
					pIVar9 = local_80;
				}
			} while(true);
		}
		goto label_05e48e1b;
		while (true) {
			lVar22 = lVar22 + 0x10;
			if (!(uVar20 * 0x10 != lVar22)) break;
	label_05e487e0: ;
			if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar22) == typeof(IDisposable)) {
				pVVar10 = pIVar3.vtable + *(int)((long)&pIVar4.offset + lVar22);
				goto label_05e4880d;
			}
		}
	label_05e487ef: ;
	label_05e4880d: ;
		pIVar9.Dispose();
	label_05e48816: ;
		local_50 = (AottgSettingsGroup[])new AottgSettingsGroup[2];
		rows = (AottgComponent[])new AottgComponent[7];
		pSVar21 = local_68.MobileInputEnabled;
		pSVar19 = "settings-mobile-enabled";
		pSVar6 = "General";
		pGVar15 = typeof(AottgSettingsMobileCategory.c).static_fields;
		pSVar13 = pGVar15.__9__2_0;
		local_58 = "settings-mobile-input";
		item_00 = (Settings_BoolSetting_o *)"MobileInputEnabled";
		if (pSVar13 == null) {
			local_70 = (Settings_BoolSetting_o *)"MobileInputEnabled";
			if ((typeof(AottgSettingsMobileCategory.c)._2). cctor_finished_or_no_cctor == 0) {
				pGVar15 = typeof(AottgSettingsMobileCategory.c).static_fields;
			}
			local_78 = (object)pGVar15.__9;
			pSVar13 = new Action<GisketchActionContext>(local_78, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_c_Groups_b__2_0);
			pGVar15 = typeof(AottgSettingsMobileCategory.c).static_fields;
			pGVar15.__9__2_0 = pSVar13;
			item_00 = local_70;
		}
		pIVar9 = (object)AottgSettingsRows.Switch(pSVar19, pSVar6, (String)item_00, pSVar21, null, pSVar13);
		pSVar7 = local_68;
		if (rows != null) {
			if ((pIVar9 != null) &&(pIVar14 = il2cpp_vm_Object_IsInst(pIVar9, (((rows.obj).klass)._1).element_class), pIVar14 == null)) {
	label_05e48e20: ;
				pIVar9 = new ArrayTypeMismatchException();
				throw pIVar9;
			}
			if ((int)rows.Length != 0) {
				rows[0] = (AottgComponent)pIVar9;
				pSVar21 = pSVar7.MobileButtonIcons;
				if ((typeof(AottgSettingsMobileCategory.c)._2). cctor_finished_or_no_cctor == 0) {
				}
				id = "settings-mobile-icons";
				pSVar19 = "MobileButtonIcons";
				pSVar6 = "Keybinds";
				pGVar15 = typeof(AottgSettingsMobileCategory.c).static_fields;
				pSVar13 = pGVar15.__9__2_1;
				if (pSVar13 == null) {
					local_70 = pSVar21;
					if ((typeof(AottgSettingsMobileCategory.c)._2). cctor_finished_or_no_cctor == 0) {
						pGVar15 = typeof(AottgSettingsMobileCategory.c).static_fields;
					}
					local_78 = (object)pGVar15.__9;
					pSVar13 = new Action<GisketchActionContext>(local_78, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_c_Groups_b__2_1);
					pGVar15 = typeof(AottgSettingsMobileCategory.c).static_fields;
					pGVar15.__9__2_1 = pSVar13;
					pSVar21 = local_70;
				}
				pIVar9 = (object)AottgSettingsRows.Switch(id, pSVar6, pSVar19, pSVar21, null, pSVar13);
				if ((pIVar9 != null) &&(pIVar14 = il2cpp_vm_Object_IsInst(pIVar9, (((rows.obj).klass)._1).element_class), pIVar14 == null)) goto label_05e48e20;
				pSVar7 = local_68;
				if ((rows.Length & 0xfffffffe) != 0) {
					rows[1] = (AottgComponent)pIVar9;
					pIVar9 = (object)AottgSettingsRows.Switch("settings-mobile-gyro", "General", "MobileGyroscope", pSVar7.MobileGyroscope, null, null);
					if ((pIVar9 != null) &&(pIVar14 = il2cpp_vm_Object_IsInst(pIVar9, (((rows.obj).klass)._1).element_class), pIVar14 == null)) goto label_05e48e20;
					if (2 < (uint)rows.Length) {
						rows[2] = (AottgComponent)pIVar9;
						pIVar9 = (object)AottgSettingsRows.Slider("settings-mobile-gyro-x", "General", "MobileGyroscopeHorizontalSensitivity", pSVar7.MobileGyroscopeHorizontalSensitivity, null, null);
						if ((pIVar9 != null) &&(pIVar14 = il2cpp_vm_Object_IsInst(pIVar9, (((rows.obj).klass)._1).element_class), pIVar14 == null)) goto label_05e48e20;
						if ((rows.Length & 0xfffffffc) != 0) {
							rows[3] = (AottgComponent)pIVar9;
							pIVar9 = (object)AottgSettingsRows.Slider("settings-mobile-gyro-y", "General", "MobileGyroscopeVerticalSensitivity", pSVar7.MobileGyroscopeVerticalSensitivity, null, null);
							if ((pIVar9 != null) &&(pIVar14 = il2cpp_vm_Object_IsInst(pIVar9, (((rows.obj).klass)._1).element_class), pIVar14 == null)) goto label_05e48e20;
							if (4 < (uint)rows.Length) {
								rows[4] = (AottgComponent)pIVar9;
								pIVar9 = (object)AottgSettingsRows.Slider("settings-mobile-look", "General", "MobileLookStabilization", pSVar7.MobileLookStabilization, null, null);
								if ((pIVar9 != null) &&(pIVar14 = il2cpp_vm_Object_IsInst(pIVar9, (((rows.obj).klass)._1).element_class), pIVar14 == null)) goto label_05e48e20;
								if (5 < (uint)rows.Length) {
									rows[5] = (AottgComponent)pIVar9;
									pSVar5 = SettingsManager.UISettings;
									if (pSVar5 == null) goto label_05e48e1b;
									pMVar18 = (MethodInfo)pSVar5.MobileHorizontalSafePadding;
									pIVar9 = (object)AottgSettingsRows.Slider("settings-mobile-safe-area", "UI", "MobileHorizontalSafePadding", (FloatSetting)pMVar18, null, null);
									if ((pIVar9 != null) &&(pIVar14 = il2cpp_vm_Object_IsInst(pIVar9, (((rows.obj).klass)._1).element_class), pIVar14 == null)) goto label_05e48e20;
									if (6 < (uint)rows.Length) {
										rows[6] = (AottgComponent)pIVar9;
										pGVar16 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSettingsGroup));
										pGVar16 = new AottgSettingsGroup(local_58, rows);
										pGVar12 = local_50;
										if (local_50 != null) {
											if ((int)local_50.Length == 0) goto label_05e48e16;
											local_50[0] = pGVar16;
											blocks = (AottgSettingsRowBlock[])new AottgSettingsRowBlock[1];
											if (__this != null) {
												pMVar18 = MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray;
												pSVar17 = __this.ToArray();
												pMVar18 = (MethodInfo)AottgSettingsRowBlock.SingleColumn((AottgComponent[])pSVar17);
												if (blocks != null) {
													if ((int)blocks.Length != 0) {
														blocks[0] =(AottgSettingsRowBlock)pMVar18;
														pGVar16 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSettingsGroup));
														pSVar6 = "settings-mobile-layouts";
														pSVar19 = AottgSettingsGroup.GroupTitleKey("settings-mobile-layouts");
														pGVar16 = new AottgSettingsGroup(pSVar6, null, pSVar19, blocks);
														if ((pGVar12.Length & 0xfffffffe) != 0) {
															pGVar12[1] = pGVar16;
															return pGVar12;
														}
													}
													goto label_05e48e16;
												}
											}
										}
										goto label_05e48e1b;
									}
								}
							}
						}
					}
				}
			}
	label_05e48e16: ;
			throw new IndexOutOfRangeException();
		}
	label_05e48e1b: ;
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMobileCategory.c.

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMobileCategory.LayoutRow.<>c__DisplayClass2_0$$.ctor: clean
	private void LayoutRow_c__DisplayClass2_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMobileCategory.LayoutRow.<>c__DisplayClass2_0$$<Build>b__0: 2 lines keep C-only constructs
	private void LayoutRow_c__DisplayClass2_0__Build_b__0(AottgUi row)
	{
		int role;
		AottgSettingsMobileCategory.LayoutRow pGVar1;
		GisketchChoiceOptionDefinition[] options;
		GisketchNodeDefinition pGVar2;
		GisketchLength pGVar3;
		GisketchLayoutDefinition pGVar4;
		String value;
		Action<GisketchActionContext> __this_00;
		GisketchLength pGVar5;
		String pSVar6;
		Enum SStack_48;

		if (row != null) {
			pGVar2 = row.Text(this.label, "settingLabel", null, null, null);
			pGVar3 = AottgUi.Points(180.0);
			pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar3, null, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (pGVar2 != null) {
				pGVar2.layout = pGVar4;
				pGVar1 = this.__4__this;
				if (pGVar1 != null) {
					pSVar6 = this.id;
					role = pGVar1._role;
					value = MobileInputLayoutManager.GetSelectedLayoutName(role);
					options = this.choices;
					__this_00 = this.__9__1;
					if (__this_00 == null) {
						__this_00 = new Action<GisketchActionContext>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsMobileCategory_LayoutRow_c__DisplayClass2_0_Build_71ca128);
						this.__9__1 = __this_00;
					}
					pGVar2 = row.Dropdown(pSVar6, value, options, __this_00, null, 8);
					pGVar3 = AottgUi.Points(300.0);
					pGVar5 = AottgUi.Percent(100.0);
					pGVar4 = AottgUi.Layout("Row", "Center", "Center", null, null, 0.0, pGVar3, null, null, null, pGVar5, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0);
					if (pGVar2 != null) {
						pGVar2.layout = pGVar4;
						pGVar2 = row.ButtonKey(3, "Common.Edit", "mobile.layout.open", null, null, null, null);
						pGVar1 = this.__4__this;
						if (pGVar1 != null) {
							SStack_48.klass = (Enum)typeof(MobileInputLayoutRole);
							SStack_48.monitor = (IntPtr)0xffffffffffffffff;
							pSVar6 = SStack_48.ToString();
							if (pGVar2 != null) {
								pGVar2.value = pSVar6;
								pGVar3 = AottgUi.Points(44.0);
								pGVar5 = AottgUi.Points(140.0);
								pGVar4 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar5, pGVar3, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
								pGVar2.layout = pGVar4;
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMobileCategory.LayoutRow.<>c__DisplayClass2_0$$<Build>b__1: clean
	private void LayoutRow_c__DisplayClass2_0__Build_b__1(GisketchActionContext context)
	{
		int role;
		AottgSettingsMobileCategory.LayoutRow pGVar1;
		String name;

		pGVar1 = this.__4__this;
		if ((pGVar1 == null) ||(context.Node == null)) {
			throw new NullReferenceException();
		}
		role = pGVar1._role;
		name = ((context.Node).fields).value;
		MobileInputLayoutManager.SetSelectedLayoutName(role, name);
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMobileCategory.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgSettingsMobileCategory.c();
		AottgSettingsMobileCategory.c.__9 =(AottgSettingsMobileCategory.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMobileCategory.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMobileCategory.<>c$$<Groups>b__2_0: clean
	private void c__Groups_b__2_0(GisketchActionContext __)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754860c == false) {
			Il2CppMethodInitialized_0754860c = true;
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileInputBridge)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			MobileInputBridge.ClearState();
			return;
		}
		MobileInputBridge.ClearState();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMobileCategory.<>c$$<Groups>b__2_1: clean
	private void c__Groups_b__2_1(GisketchActionContext __)
	{
		uint uVar1;

		if (Il2CppMethodInitialized_0754860d == false) {
			Il2CppMethodInitialized_0754860d = true;
			uVar1 = (typeof(MobileInputLayoutManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(MobileInputLayoutManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			MobileInputLayoutManager.RefreshControls();
			return;
		}
		MobileInputLayoutManager.RefreshControls();
		return;
	}
}
