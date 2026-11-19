// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x20001A1")]
internal static class AottgSettingsSkinsCategory
{
	[Token(Token = "0x400090A")]
	private const string CategoryId = "skins";

	[Token(Token = "0x400090B")]
	private const string SetsChangedId = "settings-skins-sets-changed";

	[Token(Token = "0x400090C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static float _pendingScrollOffset;

	[Token(Token = "0x400090D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private static int _setsRevision;

	[Token(Token = "0x6000927")]
	[Address(RVA = "0x5D4BA00", Offset = "0x5D4AA00", VA = "0x5D4BA00")]
	public static void Build(AottgUi content, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$Build): 2 lines keep C-only constructs
		float initialScrollOffset;
		String categoryId;
		AottgSettingsGroup[] groups;
		AottgVirtualSettingsScrollCategory __this;
		String* method_00;

		if (Il2CppMethodInitialized_07548636 == false) {
			method_00 = &"skins";
			Il2CppMethodInitialized_07548636 = true;
		}
		initialScrollOffset = AottgSettingsSkinsCategory. _pendingScrollOffset;
		AottgSettingsSkinsCategory._pendingScrollOffset = 0.0;
		groups = AottgSettingsSkinsCategory.Groups();
		categoryId = "skins";
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgVirtualSettingsScrollCategory));
		__this = new AottgVirtualSettingsScrollCategory(context, categoryId, groups, null, initialScrollOffset, (Nullable<float>)0x0);
		if (content == null) {
			throw new NullReferenceException();
		}
		content.Component((AottgComponent)__this);
		return;
	}

	[Token(Token = "0x6000928")]
	[Address(RVA = "0x5D4BC70", Offset = "0x5D4AC70", VA = "0x5D4BC70")]
	public static void SyncState(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$SyncState): clean
		AottgSettingsGroup[] groups;

		groups = AottgSettingsSkinsCategory.Groups();
		AottgSettingsCategoryPage.SyncState(root, groups);
		return;
	}

	[Token(Token = "0x6000929")]
	[Address(RVA = "0x5D4BB00", Offset = "0x5D4AB00", VA = "0x5D4BB00")]
	private static AottgSettingsGroup[] Groups()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$Groups): clean
		uint uVar1;
		CustomSkinSettings pSVar2;
		AottgSettingsGroup[] pGVar3;
		AottgSettingsGroup pGVar4;
		BaseCustomSkinSettings<ShifterCustomSkinSet> settings;
		BaseCustomSkinSettings<SkyboxCustomSkinSet> settings_00;

		pSVar2 = SettingsManager.CustomSkinSettings;
		pGVar3 = (AottgSettingsGroup[])new AottgSettingsGroup[4];
		if (pSVar2 == null) {
			pGVar4 = AottgSettingsSkinsCategory.HumanGroup(null);
		}
		else {
			pGVar4 = AottgSettingsSkinsCategory.HumanGroup(pSVar2.Human);
		}
		if (pGVar3 == null) {
			throw new NullReferenceException();
		}
		if ((int)pGVar3.Length != 0) {
			pGVar3[0] = pGVar4;
			if (pSVar2 == null) {
				pGVar4 = AottgSettingsSkinsCategory.TitanGroup(null);
				uVar1 = (uint)pGVar3.Length;
			}
			else {
				pGVar4 = AottgSettingsSkinsCategory.TitanGroup(pSVar2.Titan);
				uVar1 = (uint)pGVar3.Length;
			}
			if ((uVar1 & 0xfffffffe) != 0) {
				pGVar3[1] = pGVar4;
				if (pSVar2 == null) {
					settings = null;
				}
				else {
					settings = pSVar2.Shifter;
				}
				pGVar4 = AottgSettingsSkinsCategory.SkinGroup("shifter", (ICustomSkinSettings)settings);
				if (2 < (uint)pGVar3.Length) {
					pGVar3[2] = pGVar4;
					if (pSVar2 == null) {
						settings_00 = null;
					}
					else {
						settings_00 = pSVar2.Skybox;
					}
					pGVar4 = AottgSettingsSkinsCategory.SkinGroup("skybox", (ICustomSkinSettings)settings_00);
					if ((pGVar3.Length & 0xfffffffc) != 0) {
						pGVar3[3] = pGVar4;
						return pGVar3;
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x600092A")]
	[Address(RVA = "0x5D4BC90", Offset = "0x5D4AC90", VA = "0x5D4BC90")]
	private static AottgSettingsGroup HumanGroup(HumanCustomSkinSettings settings)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$HumanGroup): 39 lines keep C-only constructs
		int piVar1;
		int iVar2;
		uint uVar3;
		IntSetting pSVar4;
		String pSVar5;
		AottgSettingsSkinsCategory.c__DisplayClass7_0 __this;
		List<object> __this_00;
		List<object> __this_01;
		Action<GisketchActionContext> __this_02;
		MethodInfo pMVar6;
		object pIVar7;
		Action __this_03;
		MethodInfo pMVar8;
		BaseSetSetting container;
		AottgSettingsRowBlock[] blocks;
		Object[] pSVar9;
		AottgSettingsRowBlock pGVar10;
		AottgSettingsGroup __this_04;
		String titleKey;
		HumanCustomSkinSettings pSVar11;
		MethodInfo in_R9;
		AottgSettingsSkinsCategory.c__DisplayClass7_0 targetAddress;

		if (Il2CppMethodInitialized_07548638 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_AottgComponent_Add) ;
			Il2CppMethodInitialized_07548638 = true;
		}
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSettingsSkinsCategory.c__DisplayClass7_0)) ;
		__this = new Object();
		if (__this == null) goto label_05e4c661;
		targetAddress = &__this.fields;
		__this.settings = settings;
		__this_00 = new List<AottgComponent>();
		__this_01 = new List<AottgComponent>();
		pSVar11 = __this.settings;
		if (pSVar11 == null) {
			blocks = (AottgSettingsRowBlock[])new AottgSettingsRowBlock[2];
			if (__this_00 == null) goto label_05e4c661;
		}
		else {
			pSVar4 = pSVar11.SkinMode;
			if (pSVar4 == null) goto label_05e4c661;
			iVar2 = pSVar4._value;
			__this_02 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_RefreshSkins);
			pMVar6 = (MethodInfo)AottgSettingsRows.Select("settings-skins-human-mode", "Skins.Human", "SkinMode", pSVar4, null, __this_02);
			pMVar8 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
			if (__this_00 == null) goto label_05e4c661;
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pSVar9 = __this_00._items;
			if (pSVar9 == null) goto label_05e4c661;
			uVar3 = __this_00._size;
			if (uVar3 < (uint)pSVar9.Length) {
				__this_00._size = uVar3 + 1;
				pSVar9[(int)uVar3] = (object)pMVar6;
				pSVar11 = targetAddress.settings;
				if (iVar2 != 1) goto label_05e4bfbd;
	label_05e4c053: ;
				pIVar7 = (object)AottgSettingsSkinsCategory.CharacterDropdown(pSVar11);
				pMVar8 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pSVar9 = __this_00._items;
				if (pSVar9 == null) goto label_05e4c661;
				uVar3 = __this_00._size;
				if (uVar3 < (uint)pSVar9.Length) {
					__this_00._size = uVar3 + 1;
					pSVar9[(int)uVar3] = pIVar7;
				}
				else {
					__this_00.AddWithResize(pIVar7);
				}
			}
			else {
				__this_00.AddWithResize((object)pMVar6) ;
				pSVar11 = targetAddress.settings;
				if (iVar2 == 1) goto label_05e4c053;
	label_05e4bfbd: ;
				pIVar7 = (object)AottgSettingsSkinsCategory.HumanGlobalSetDropdown(pSVar11);
				pMVar8 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pSVar9 = __this_00._items;
				if (pSVar9 == null) goto label_05e4c661;
				uVar3 = __this_00._size;
				if (uVar3 < (uint)pSVar9.Length) {
					__this_00._size = uVar3 + 1;
					pSVar9[(int)uVar3] = pIVar7;
				}
				else {
					__this_00.AddWithResize(pIVar7);
				}
				pSVar11 = __this.settings;
				pMVar8 = null;
				__this_03 = new Action((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass7_0_HumanGroup_b__0);
				pIVar7 = (object)AottgSettingsSkinsCategory.SetActions("settings-skins-human-actions", (ISetSettingsContainer)pSVar11, __this_03);
				pMVar8 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pSVar9 = __this_00._items;
				if (pSVar9 == null) goto label_05e4c661;
				uVar3 = __this_00._size;
				if (uVar3 < (uint)pSVar9.Length) {
					__this_00._size = uVar3 + 1;
					pSVar9[(int)uVar3] = pIVar7;
				}
				else {
					__this_00.AddWithResize(pIVar7);
				}
			}
			if (targetAddress.settings == null) goto label_05e4c661;
			pIVar7 = (object)AottgSettingsSkinsCategory.CommonSkinSwitch("settings-skins-human-enabled", "Human", "SkinsEnabled", targetAddress.settings.SkinsEnabled, null);
			pMVar8 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pSVar9 = __this_00._items;
			if (pSVar9 == null) goto label_05e4c661;
			uVar3 = __this_00._size;
			if (uVar3 < (uint)pSVar9.Length) {
				__this_00._size = uVar3 + 1;
				pSVar9[(int)uVar3] = pIVar7;
			}
			else {
				__this_00.AddWithResize(pIVar7);
			}
			if (targetAddress.settings == null) goto label_05e4c661;
			pIVar7 = (object)AottgSettingsSkinsCategory.CommonSkinSwitch("settings-skins-human-local", "Human", "SkinsLocal", targetAddress.settings.SkinsLocal, "SkinsLocalTooltip");
			pMVar8 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pSVar9 = __this_00._items;
			if (pSVar9 == null) goto label_05e4c661;
			uVar3 = __this_00._size;
			if (uVar3 < (uint)pSVar9.Length) {
				__this_00._size = uVar3 + 1;
				pSVar9[(int)uVar3] = pIVar7;
			}
			else {
				__this_00.AddWithResize(pIVar7);
			}
			if (targetAddress.settings == null) goto label_05e4c661;
			pIVar7 = (object)AottgSettingsRows.Switch("settings-skins-human-global-overrides", "Skins.Human", "GlobalSkinOverridesEnabled", targetAddress.settings.GlobalSkinOverridesEnabled, "GlobalSkinOverridesEnabledTooltip", null);
			pMVar8 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pSVar9 = __this_00._items;
			if (pSVar9 == null) goto label_05e4c661;
			uVar3 = __this_00._size;
			if (uVar3 < (uint)pSVar9.Length) {
				__this_00._size = uVar3 + 1;
				pSVar9[(int)uVar3] = pIVar7;
			}
			else {
				__this_00.AddWithResize(pIVar7);
			}
			if (targetAddress.settings == null) goto label_05e4c661;
			pIVar7 = (object)AottgSettingsRows.Switch("settings-skins-human-set-specific", "Skins.Human", "SetSpecificSkinsEnabled", targetAddress.settings.SetSpecificSkinsEnabled, "SetSpecificSkinsEnabledTooltip", null);
			pMVar8 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pSVar9 = __this_00._items;
			if (pSVar9 == null) goto label_05e4c661;
			uVar3 = __this_00._size;
			if (uVar3 < (uint)pSVar9.Length) {
				__this_00._size = uVar3 + 1;
				pSVar9[(int)uVar3] = pIVar7;
			}
			else {
				__this_00.AddWithResize(pIVar7);
			}
			if (targetAddress.settings == null) goto label_05e4c661;
			pIVar7 = (object)AottgSettingsRows.Switch("settings-skins-human-gas-enabled", "Skins.Human", "GasEnabled", targetAddress.settings.GasEnabled, null, null);
			pMVar8 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pSVar9 = __this_00._items;
			if (pSVar9 == null) goto label_05e4c661;
			uVar3 = __this_00._size;
			if (uVar3 < (uint)pSVar9.Length) {
				__this_00._size = uVar3 + 1;
				pSVar9[(int)uVar3] = pIVar7;
			}
			else {
				__this_00.AddWithResize(pIVar7);
			}
			if (targetAddress.settings == null) goto label_05e4c661;
			pMVar8 = (MethodInfo)AottgSettingsRows.Switch("settings-skins-human-hook-enabled", "Skins.Human", "HookEnabled", targetAddress.settings.HookEnabled, null, null);
			pMVar6 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pSVar9 = __this_00._items;
			if (pSVar9 == null) goto label_05e4c661;
			uVar3 = __this_00._size;
			if (uVar3 < (uint)pSVar9.Length) {
				__this_00._size = uVar3 + 1;
				pSVar9[(int)uVar3] = (object)pMVar8;
				if (iVar2 != 1) goto label_05e4c4c1;
	label_05e4c4f8: ;
				pSVar11 = targetAddress.settings;
				pSVar5 = "human-character";
			}
			else {
				__this_00.AddWithResize((object)pMVar8) ;
				if (iVar2 == 1) goto label_05e4c4f8;
	label_05e4c4c1: ;
				pSVar11 = targetAddress.settings;
				pSVar5 = "human-global";
			}
			if (pSVar11 == null) {
				container = null;
			}
			else {
				pSVar4 = pSVar11.SkinMode;
				if (pSVar4 == null) goto label_05e4c661;
				if ((pSVar4._value == 0) ||(container = (BaseSetSetting)AottgSettingsSkinsCategory.HumanCharacterSkinContainer(pSVar11), container == null)) {
					container = pSVar11.GetSelectedSet();
				}
			}
			in_R9 = (MethodInfo)(ulong)(iVar2 == 1);
			AottgSettingsSkinsCategory.AddSkinInputRows((List<AottgComponent>)__this_01, (List<AottgComponent>)__this_01, pSVar5, "Skins.Human", (BaseSettingsContainer)container, iVar2 == 1);
			blocks = (AottgSettingsRowBlock[])new AottgSettingsRowBlock[2];
		}
		pMVar8 = MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray;
		pSVar9 = __this_00.ToArray() ;
		pGVar10 = AottgSettingsRowBlock.TwoColumn((AottgComponent[])pSVar9);
		if (blocks == null) {
	label_05e4c661: ;
			throw new NullReferenceException();
		}
		if ((int)blocks.Length != 0) {
			blocks[0] = pGVar10;
			if (__this_01 == null) goto label_05e4c661;
			pMVar8 = MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray;
			pSVar9 = __this_01.ToArray();
			pMVar8 = (MethodInfo)AottgSettingsRowBlock.TwoColumn((AottgComponent[])pSVar9);
			if ((blocks.Length & 0xfffffffe) != 0) {
				blocks[1] = (AottgSettingsRowBlock)pMVar8;
				pSVar5 = "settings-skins-human";
				titleKey = AottgSettingsGroup.GroupTitleKey("settings-skins-human");
				__this_04 = new AottgSettingsGroup(pSVar5, null, titleKey, blocks);
				return __this_04;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x600092B")]
	[Address(RVA = "0x5D4C670", Offset = "0x5D4B670", VA = "0x5D4C670")]
	private static AottgSettingsGroup TitanGroup(BaseCustomSkinSettings<TitanCustomSkinSet> settings)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$TitanGroup): 37 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		IntSetting setting;
		ListSetting<TitanCustomSkinSlot> pSVar4;
		int iVar5;
		int iVar6;
		List<AottgSettingsRowBlock> blocks;
		AottgSettingsSkinsCategory.c__DisplayClass8_0 __this;
		TitanCustomSkinSet pSVar7;
		List<object> __this_00;
		String[] names;
		Action<GisketchActionContext> pSVar8;
		MethodInfo pMVar9;
		object pIVar10;
		Object[] pSVar11;
		AottgSettingsRowBlock item;
		AottgComponent[] rows;
		String pSVar12;
		AottgActionRow.ActionButton[] buttons;
		AottgActionRow.ActionButton __this_01;
		AottgActionRow __this_02;
		AottgSettingsRowBlock[] pGVar13;
		AottgSettingsGroup __this_03;
		String titleKey;
		Il2CppRGCTXData pIVar14;
		TitanCustomSkinSet pSVar15;
		MethodInfo pMVar16;
		AottgSettingsSkinsCategory.c__DisplayClass8_0 targetAddress;

		if (Il2CppMethodInitialized_07548639 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_AottgComponent_Add) ;
			Il2CppMethodInitialized_07548639 = true;
		}
		blocks = new List<AottgSettingsRowBlock>();
		if (settings == null) {
	label_05e4cf14: ;
			if (blocks != null) {
	label_05e4cf19: ;
				pMVar16 = MethodInfo_System_Collections_Generic_List_AottgSettingsRowBlock_ToArray;
				pGVar13 = (AottgSettingsRowBlock[])blocks.ToArray();
				pSVar12 = "settings-skins-titan";
				titleKey = AottgSettingsGroup.GroupTitleKey("settings-skins-titan");
				__this_03 = new AottgSettingsGroup(pSVar12, null, titleKey, pGVar13);
				return __this_03;
			}
		}
		else {
			__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSettingsSkinsCategory.c__DisplayClass8_0));
			__this = new Object();
			pSVar7 = (TitanCustomSkinSet)settings.GetSelectedSet();
			if (__this != null) {
				if (pSVar7 == null) {
					__this.set = null;
				}
				else {
					bVar2 = (typeof(TitanCustomSkinSet)._2).typeHierarchyDepth;
					if ((pSVar7.klass._2).typeHierarchyDepth < bVar2) {
						pSVar15 = null;
					}
					else {
						pSVar15 = null;
						if ((pSVar7.klass._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(TitanCustomSkinSet)) {
							pSVar15 = pSVar7;
						}
					}
					__this.set = pSVar15;
				}
				targetAddress = &__this.fields;
				__this_00 = new List<AottgComponent>();
				setting = settings.SelectedSetIndex;
				names = settings.GetSetNames();
				pSVar8 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_RefreshSkins);
				pMVar9 = (MethodInfo)AottgSettingsSkinsCategory.SetDropdown("settings-skins-titan-set", "Skins.Common", setting, names, pSVar8);
				pMVar16 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
				if (__this_00 != null) {
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pIVar14 = (Il2CppRGCTXData)__this_00._items;
					if (pIVar14 != null) {
						uVar3 = __this_00._size;
						if (uVar3 < *(uint)&pIVar14[3].rgctxDataDummy) {
							__this_00._size = uVar3 + 1;
							pIVar14[(long)(int)uVar3 + 4].method = pMVar9;
						}
						else {
							pIVar14 = pMVar16.klass.rgctx_data;
							__this_00.AddWithResize((object)pMVar9);
						}
						pIVar10 = (object)AottgSettingsSkinsCategory.SetActions("settings-skins-titan-actions", (ISetSettingsContainer)settings, null);
						pMVar16 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pSVar11 = __this_00._items;
						if (pSVar11 != null) {
							uVar3 = __this_00._size;
							if (uVar3 < (uint)pSVar11.Length) {
								__this_00._size = uVar3 + 1;
								pSVar11[(int)uVar3] = pIVar10;
							}
							else {
								__this_00.AddWithResize(pIVar10);
							}
							pIVar10 = (object)AottgSettingsSkinsCategory.CommonSkinSwitch("settings-skins-titan-enabled", "Titan", "SkinsEnabled", settings.SkinsEnabled, null);
							pMVar16 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
							piVar1 = &__this_00._version;
							*piVar1 = *piVar1 + 1;
							pSVar11 = __this_00._items;
							if (pSVar11 != null) {
								uVar3 = __this_00._size;
								if (uVar3 < (uint)pSVar11.Length) {
									__this_00._size = uVar3 + 1;
									pSVar11[(int)uVar3] = pIVar10;
								}
								else {
									__this_00.AddWithResize(pIVar10);
								}
								pIVar10 = (object)AottgSettingsSkinsCategory.CommonSkinSwitch("settings-skins-titan-local", "Titan", "SkinsLocal", settings.SkinsLocal, "SkinsLocalTooltip");
								pMVar16 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
								piVar1 = &__this_00._version;
								*piVar1 = *piVar1 + 1;
								pSVar11 = __this_00._items;
								if (pSVar11 != null) {
									uVar3 = __this_00._size;
									if (uVar3 < (uint)pSVar11.Length) {
										__this_00._size = uVar3 + 1;
										pSVar11[(int)uVar3] = pIVar10;
										pSVar7 = targetAddress.set;
									}
									else {
										__this_00.AddWithResize(pIVar10);
										pSVar7 = targetAddress.set;
									}
									if (pSVar7 != null) {
										pIVar10 = (object)AottgSettingsRows.Switch("settings-skins-titan-override", "Skins.Titan", "OverrideModels", pSVar7.OverrideModels, "OverrideModelsTooltip", null);
										pMVar16 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
										piVar1 = &__this_00._version;
										*piVar1 = *piVar1 + 1;
										pSVar11 = __this_00._items;
										if (pSVar11 == null) goto label_05e4cf0f;
										uVar3 = __this_00._size;
										if (uVar3 < (uint)pSVar11.Length) {
											__this_00._size = uVar3 + 1;
											pSVar11[(int)uVar3] = pIVar10;
										}
										else {
											__this_00.AddWithResize(pIVar10) ;
										}
									}
									pMVar16 = MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray;
									pSVar11 = __this_00.ToArray();
									item = AottgSettingsRowBlock.TwoColumn((AottgComponent[])pSVar11);
									pMVar16 = MethodInfo_System_Collections_Generic_List_AottgSettingsRowBlock_Add;
									if (blocks != null) {
										piVar1 = &blocks._version;
										*piVar1 = *piVar1 + 1;
										pGVar13 = blocks._items;
										if (pGVar13 != null) {
											uVar3 = blocks._size;
											if (uVar3 < (uint)pGVar13.Length) {
												blocks._size = uVar3 + 1;
												pGVar13[(int)uVar3] = item;
												pSVar7 = targetAddress.set;
											}
											else {
												blocks.AddWithResize((object)item);
												pSVar7 = targetAddress.set;
											}
											if (pSVar7 == null) goto label_05e4cf19;
											pMVar16 = (MethodInfo)0x1;
											rows = (AottgComponent[])new AottgComponent[1];
											pSVar12 = AottgSettingsSkinsCategory.SlotCountLabel(__this.set);
											buttons = (AottgActionRow.ActionButton[])new AottgActionRow.ActionButton[1];
											pSVar8 = new Action<GisketchActionContext>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass8_0_TitanGroup_b__0);
											pSVar7 = __this.set;
											if ((pSVar7 != null) &&(pSVar4 = pSVar7.Slots, pSVar4 != null)) {
												iVar5 = pSVar4.GetCount();
												__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgActionRow.ActionButton));
												__this_01 = new AottgActionRow.ActionButton("Common.Add", pSVar8, 1, 0x13 < iVar5, null);
												if (buttons != null ) {
													if ((int)buttons.Length == 0) {
	label_05e4cf77: ;
														throw new IndexOutOfRangeException();
													}
													buttons[0] = __this_01;
													__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgActionRow));
													__this_02 = new AottgActionRow("settings-skins-titan-slot-actions", pSVar12, buttons);
													if (rows != null) {
														if ((__this_02 != null) &&(pIVar10 = il2cpp_vm_Object_IsInst((object)__this_02, (((rows.obj).klass)._1).element_class), pIVar10 == null)) {
															pIVar10 = new ArrayTypeMismatchException();
															throw pIVar10;
														}
														if ((int)rows.Length == 0) goto label_05e4cf77;
														rows[0] = (AottgComponent)__this_02;
														pMVar9 = (MethodInfo)AottgSettingsRowBlock.TwoColumn(rows);
														pMVar16 = MethodInfo_System_Collections_Generic_List_AottgSettingsRowBlock_Add;
														piVar1 = &blocks._version;
														*piVar1 = *piVar1 + 1;
														pIVar14 = (Il2CppRGCTXData)blocks._items;
														if (pIVar14 != null) {
															uVar3 = blocks._size;
															if (uVar3 < *(uint)&pIVar14[3].rgctxDataDummy) {
																blocks._size = uVar3 + 1;
																pIVar14[(long)(int)uVar3 + 4].method = pMVar9;
															}
															else {
																pIVar14 = pMVar16.klass.rgctx_data;
																blocks.AddWithResize((object)pMVar9);
															}
															pSVar7 = targetAddress.set;
															if (pSVar7 != null) {
																iVar5 = 0;
																do {
																	pSVar4 = pSVar7.Slots;
																	if (pSVar4 == null) break;
																	iVar6 = pSVar4.GetCount();
																	if (iVar6 <= iVar5) goto label_05e4cf14;
																	AottgSettingsSkinsCategory.AddTitanSlotBlocks(blocks, targetAddress.set, iVar5);
																	iVar5 = iVar5 + 1;
																	pSVar7 = targetAddress.set;
																} while (pSVar7 != null);
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_05e4cf0f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600092C")]
	[Address(RVA = "0x5D4F3C0", Offset = "0x5D4E3C0", VA = "0x5D4F3C0")]
	private static void AddTitanSlotBlocks(List<AottgSettingsRowBlock> blocks, TitanCustomSkinSet set, int index)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$AddTitanSlotBlocks): 40 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		Il2CppClass pIVar4;
		IntPtr pvVar5;
		AottgSettingsRowBlock[] pGVar6;
		IntSetting pSVar7;
		int iVar8;
		object pIVar9;
		BaseSetting pSVar10;
		String pSVar11;
		String pSVar12;
		MethodInfo method_00;
		AottgComponent[] pGVar13;
		String newValue;
		AottgActionRow.ActionButton[] buttons;
		Action<GisketchActionContext> __this;
		AottgActionRow.ActionButton __this_00;
		AottgActionRow __this_01;
		MethodInfo pMVar14;
		AottgSettingsRowBlock pGVar15;
		object pIVar16;
		String[] pSVar17;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		IntPtr ppvVar18;
		BaseSetting pSVar19;
		MethodInfo pMVar20;
		int iStack_48;
		int iStack_44;
		List<AottgSettingsRowBlock> pSStack_40;
		String pSStack_38;

		iStack_44 = index;
		if (Il2CppMethodInitialized_0754863a == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_TitanCustomSkinSlot_GetItemAt) ;
			Il2CppMethodInitialized_0754863a = true;
		}
		iStack_48 = 0;
		pIVar9 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSettingsSkinsCategory.c__DisplayClass9_0)) ;
		pIVar9 = new Object();
		if (pIVar9 == null) goto label_05e4fed8;
		pIVar9[1].klass = (Il2CppClass)set;
		if ((pIVar9[1].klass == null) ||(pIVar4 = ((pIVar9[1].klass)._1).declaringType, pIVar4 == null)) goto label_05e4fed8;
		pSVar10 = pIVar4.GetItemAt(index);
		if (pSVar10 == null) {
			pIVar9[1].monitor = null;
	label_05e4f65c: ;
			pvVar5 = pIVar9[1].monitor;
		}
		else {
			bVar2 = (typeof(TitanCustomSkinSlot)._2).typeHierarchyDepth;
			if ((pSVar10.klass._2).typeHierarchyDepth < bVar2) {
				pSVar19 = null;
			}
			else {
				pSVar19 = null;
				if ((pSVar10.klass._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(TitanCustomSkinSlot)) {
					pSVar19 = pSVar10;
				}
			}
			pIVar9[1].monitor = pSVar19;
			if ((pSVar10.klass._2).typeHierarchyDepth < bVar2) goto label_05e4f65c;
			pvVar5 = pIVar9[1].monitor;
		}
		if (pvVar5 == null) {
			return;
		}
		ppvVar18 = &pIVar9[1].monitor;
		pSStack_40 = blocks;
		pSVar11 = (String)AottgSettingsSkinsCategory.SetScopeId();
		pSVar12 = iStack_44.ToString();
		method_00 = (MethodInfo)String.Concat("settings-skins-titan", pSVar11, "-slot-", pSVar12);
		pGVar13 = (AottgComponent[])new AottgComponent[2];
		pMVar20 = (MethodInfo *)"-header";
		pSVar11 = String.Concat((String)method_00, "-header");
		pSVar12 = AottgSettingsSkinsCategory.TitanLocale("Slot");
		iStack_48 = iStack_44 + 1;
		newValue = iStack_48.ToString();
		if (pSVar12 != null) {
			pSVar12 = pSVar12.Replace("{0}", newValue);
			buttons = (AottgActionRow.ActionButton[])new AottgActionRow.ActionButton[1];
			__this = new Action<GisketchActionContext>(pIVar9, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass9_0_AddTitanSlotBlock);
			if ((pIVar9[1].klass != null) &&(pIVar4 = ((pIVar9[1].klass)._1).declaringType, pSStack_38 = pSVar12, pIVar4 != null)) {
				iVar8 = pIVar4.GetCount();
				__this_00 = (AottgActionRow.ActionButton)il2cpp_codegen_object_new((Il2CppClass)typeof(AottgActionRow.ActionButton));
				pMVar20 = null;
				__this_00 = new AottgActionRow.ActionButton("Common.Delete", __this, 6, iVar8 < 2, "trashcan");
				if (buttons != null) {
					if ((int)buttons.Length == 0) {
	label_05e4fedd: ;
						throw new IndexOutOfRangeException();
					}
					buttons[0] = __this_00;
					__this_01 = new AottgActionRow(pSVar11, pSStack_38, buttons);
					if (pGVar13 != null) {
						if ((__this_01 != null) &&(pIVar9 = il2cpp_vm_Object_IsInst((object)__this_01, (((pGVar13.obj).klass)._1).element_class), pIVar9 == null)) {
	label_05e4fee2: ;
							pIVar9 = new ArrayTypeMismatchException();
							throw pIVar9;
						}
						if ((int)pGVar13.Length == 0) goto label_05e4fedd;
						pGVar13[0] = (AottgComponent)__this_01;
						pSVar11 = String.Concat((String)method_00, "-target");
						if (*ppvVar18 != null) {
							pMVar14 = (MethodInfo)AottgSettingsRows.Dropdown(pSVar11, "Skins.Titan", "Target", *(IntSetting*)((long)*ppvVar18 + 0x30), null, null);
							if ((pMVar14 != null) &&(pIVar9 = il2cpp_vm_Object_IsInst((object)pMVar14, (((pGVar13.obj).klass)._1).element_class), pIVar9 == null)) goto label_05e4fee2;
							if ((pGVar13.Length & 0xfffffffe) == 0) goto label_05e4fedd;
							pGVar13[1] = (AottgComponent)pMVar14;
							pGVar15 = AottgSettingsRowBlock.TwoColumn(pGVar13);
							pMVar14 = MethodInfo_System_Collections_Generic_List_AottgSettingsRowBlock_Add;
							if (pSStack_40 != null) {
								piVar1 = &pSStack_40._version;
								*piVar1 = *piVar1 + 1;
								pGVar6 = pSStack_40._items;
								if (pGVar6 != null) {
									uVar3 = pSStack_40._size;
									if (uVar3 < (uint)pGVar6.Length) {
										pSStack_40._size = uVar3 + 1;
										pGVar6[(int)uVar3] = pGVar15;
									}
									else {
										pSStack_40.AddWithResize((object)pGVar15);
									}
									pGVar13 = (AottgComponent[])new AottgComponent[8];
									pSVar11 = String.Concat((String)method_00, "-body");
									if ((*ppvVar18 != null) &&(pIVar9 = (object)AottgSettingsRows.Input(pSVar11, "Skins.Titan", "Body", *(StringSetting*)((long)*ppvVar18 + 0x38), null, null), pGVar13 != null)) {
										if ((pIVar9 != null) &&(pIVar16 = il2cpp_vm_Object_IsInst(pIVar9, (((pGVar13.obj).klass)._1).element_class), pIVar16 == null)) goto label_05e4fee2;
										if ((int)pGVar13.Length == 0) goto label_05e4fedd;
										pGVar13[0] = (AottgComponent)pIVar9;
										pSVar11 = String.Concat((String)method_00, "-head");
										if (*ppvVar18 != null) {
											pIVar9 = (object)AottgSettingsRows.Input(pSVar11, "Skins.Titan", "Head", *(StringSetting*)((long)*ppvVar18 + 0x40), null, null);
											if ((pIVar9 != null) &&(pIVar16 = il2cpp_vm_Object_IsInst(pIVar9, (((pGVar13.obj).klass)._1).element_class), pIVar16 == null)) goto label_05e4fee2;
											if ((pGVar13.Length & 0xfffffffe) == 0) goto label_05e4fedd;
											pGVar13[1] = (AottgComponent)pIVar9;
											pSVar11 = String.Concat((String)method_00, "-eye") ;
											if (*ppvVar18 != null) {
												pIVar9 = (object)AottgSettingsRows.Input(pSVar11, "Skins.Titan", "Eye", *(StringSetting*)((long)*ppvVar18 + 0x48), null, null);
												if ((pIVar9 != null) &&(pIVar16 = il2cpp_vm_Object_IsInst(pIVar9, (((pGVar13.obj).klass)._1).element_class) , pIVar16 == null)) goto label_05e4fee2;
												if ((uint)pGVar13.Length < 3) goto label_05e4fedd;
												pGVar13[2] = (AottgComponent)pIVar9;
												pSVar11 = String.Concat((String)method_00, "-hair");
												if (*ppvVar18 != null) {
													pIVar9 = (object)AottgSettingsRows.Input(pSVar11, "Skins.Titan", "Hair", *(StringSetting*)((long)*ppvVar18 + 0x50), null, null);
													if ((pIVar9 != null) &&(pIVar16 = il2cpp_vm_Object_IsInst(pIVar9, (((pGVar13.obj).klass)._1).element_class), pIVar16 == null)) goto label_05e4fee2;
													if ((pGVar13.Length & 0xfffffffc) == 0) goto label_05e4fedd;
													pGVar13[3] = (AottgComponent)pIVar9;
													pSVar11 = String.Concat((String)method_00, "-body-model");
													if (*ppvVar18 != null) {
														pSVar7 = *(IntSetting*)((long)*ppvVar18 + 0x58);
														pMVar20 = extraout_RDX;
														if ((typeof(BasicTitanSetup)._2).cctor_finished_or_no_cctor == 0) {
															pMVar20 = extraout_RDX_00;
														}
														pSVar17 = AottgSettingsSkinsCategory.TitanIndexOptions("Body", BasicTitanSetup.BodyCount);
														pIVar9 = (object)AottgSettingsRows.Dropdown(pSVar11, "Skins.Titan", "Model", pSVar7, pSVar17, null, null);
														if ((pIVar9 != null) &&(pIVar16 = il2cpp_vm_Object_IsInst(pIVar9, (((pGVar13.obj).klass)._1).element_class), pIVar16 == null)) goto label_05e4fee2;
														if ((uint)pGVar13.Length < 5) goto label_05e4fedd;
														pGVar13[4] = (AottgComponent)pIVar9;
														pSVar11 = String.Concat((String)method_00, "-head-model");
														if (*ppvVar18 != null) {
															pSVar7 = *(IntSetting*)((long)*ppvVar18 + 0x60);
															pSVar17 = AottgSettingsSkinsCategory.TitanIndexOptions("Head", BasicTitanSetup.HeadCount);
															pIVar9 = (object)AottgSettingsRows.Dropdown(pSVar11, "Skins.Titan", "Model", pSVar7, pSVar17, null, null);
															if ((pIVar9 != null) &&(pIVar16 = il2cpp_vm_Object_IsInst(pIVar9, (((pGVar13.obj).klass)._1).element_class), pIVar16 == null)) goto label_05e4fee2;
															if ((uint)pGVar13.Length < 6) goto label_05e4fedd;
															pGVar13[5] = (AottgComponent)pIVar9;
															pSVar11 = String.Concat((String)method_00, "-eye-model");
															if (*ppvVar18 != null) {
																pSVar7 = *(IntSetting*)((long)*ppvVar18 + 0x68);
																pSVar17 = AottgSettingsSkinsCategory.TitanIndexOptions("Eye", BasicTitanSetup. EyeCount);
																pIVar9 = (object)AottgSettingsRows.Dropdown(pSVar11, "Skins.Titan", "Model", pSVar7, pSVar17, null, null);
																if ((pIVar9 != null) &&(pIVar16 = il2cpp_vm_Object_IsInst(pIVar9, (((pGVar13.obj).klass)._1).element_class), pIVar16 == null)) goto label_05e4fee2;
																if ((uint)pGVar13.Length < 7) goto label_05e4fedd;
																pGVar13[6] = (AottgComponent)pIVar9;
																pSVar11 = String.Concat((String)method_00, "-hair-model");
																if (*ppvVar18 != null) {
																	pSVar7 = *(IntSetting*)((long)*ppvVar18 + 0x70);
																	pSVar17 = AottgSettingsSkinsCategory.TitanHairOptions();
																	pMVar20 = (MethodInfo)AottgSettingsRows.Dropdown(pSVar11, "Skins.Titan", "Model", pSVar7, pSVar17, null, null);
																	if ((pMVar20 != null) &&(pIVar9 = il2cpp_vm_Object_IsInst((object)pMVar20, (((pGVar13.obj).klass)._1).element_class), pIVar9 == null)) goto label_05e4fee2;
																	if ((pGVar13.Length & 0xfffffff8) == 0) goto label_05e4fedd;
																	pGVar13[7] = (AottgComponent)pMVar20;
																	pGVar15 = AottgSettingsRowBlock.TwoColumn(pGVar13);
																	pMVar20 = MethodInfo_System_Collections_Generic_List_AottgSettingsRowBlock_Add ;
																	piVar1 = &pSStack_40._version;
																	*piVar1 = *piVar1 + 1;
																	pGVar6 = pSStack_40._items;
																	if (pGVar6 != (AottgSettingsRowBlock[])0x0) {
																		uVar3 = pSStack_40._size;
																		if (uVar3 < (uint)pGVar6.Length) {
																			pSStack_40._size = uVar3 + 1;
																			pGVar6[(int)uVar3] = pGVar15;
																			return;
																		}
																		pSStack_40.AddWithResize((object)pGVar15);
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
								}
							}
						}
					}
				}
			}
		}
	label_05e4fed8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600092D")]
	[Address(RVA = "0x5D4F2D0", Offset = "0x5D4E2D0", VA = "0x5D4F2D0")]
	private static string SlotCountLabel(TitanCustomSkinSet set)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$SlotCountLabel): 6 lines keep C-only constructs
		ListSetting<TitanCustomSkinSlot> __this;
		int iVar1;
		ulong in_RAX;
		String pSVar2;
		String pSVar3;
		ulong uStack_18;

		uStack_18 = in_RAX;
		pSVar2 = AottgSettingsSkinsCategory.TitanLocale("SlotCount");
		if ((set != null) &&(__this = set.Slots, __this != null)) {
			iVar1 = __this.GetCount();
			uStack_18 = CONCAT44(iVar1, (undefined4)uStack_18);
			pSVar3 = (((long)&uStack_18 + 4)).ToString();
			if (pSVar2 != null) {
				pSVar2 = pSVar2.Replace("{0}", pSVar3);
				uStack_18 = CONCAT44(0x14, (undefined4)uStack_18);
				pSVar3 = (((long)&uStack_18 + 4)).ToString();
				if (pSVar2 != null) {
					pSVar2 = pSVar2.Replace("{1}", pSVar3);
					return pSVar2;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600092E")]
	[Address(RVA = "0x5D504B0", Offset = "0x5D4F4B0", VA = "0x5D504B0")]
	private static string CommonLocale(string item)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$CommonLocale): clean
		String pSVar1;

		pSVar1 = String.Concat("Common.", item);
		if ((typeof(Aottg2GisketchLocale)._2).cctor_finished_or_no_cctor == 0) {
			pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
			return pSVar1;
		}
		pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x600092F")]
	[Address(RVA = "0x5D4FFE0", Offset = "0x5D4EFE0", VA = "0x5D4FFE0")]
	private static string TitanLocale(string item)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$TitanLocale): clean
		String pSVar1;

		pSVar1 = "Skins.Titan";
		pSVar1 = String.Concat("SettingsPopup.", pSVar1, ".", item);
		pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x6000930")]
	[Address(RVA = "0x5D50090", Offset = "0x5D4F090", VA = "0x5D50090")]
	private static string[] TitanIndexOptions(string prefix, int count)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$TitanIndexOptions): 4 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<string> __this;
		String pSVar4;
		String[] pSVar5;
		int local_2c;

		local_2c = 0;
		__this = new List<string>();
		pSVar4 = "Any";
		pSVar4 = String.Concat("Common.", pSVar4);
		pSVar4 = Aottg2GisketchLocale.Text(pSVar4);
		if (__this != null) {
			piVar1 = &__this._version;
			*piVar1 = *piVar1 + 1;
			pSVar5 = __this._items;
			if (pSVar5 != null) {
				uVar2 = __this._size;
				if (uVar2 < (uint)pSVar5.Length) {
					__this._size = uVar2 + 1;
					pSVar5[(int)uVar2] = pSVar4;
				}
				else {
					__this.AddWithResize((object)pSVar4);
				}
				local_2c = 0;
				if (0 < count) {
					local_2c = 0;
					do {
						pSVar4 = local_2c.ToString();
						pSVar4 = String.Concat(prefix, pSVar4);
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pSVar5 = __this._items;
						if (pSVar5 == null) goto label_05e502c5;
						uVar2 = __this._size;
						if (uVar2 < (uint)pSVar5.Length) {
							__this._size = uVar2 + 1;
							pSVar5[(int)uVar2] = pSVar4;
						}
						else {
							__this.AddWithResize((object)pSVar4);
						}
						local_2c = local_2c + 1;
					} while (local_2c < count);
				}
				pSVar5 = (String[])__this.ToArray();
				return pSVar5;
			}
		}
	label_05e502c5: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000931")]
	[Address(RVA = "0x5D502D0", Offset = "0x5D4F2D0", VA = "0x5D502D0")]
	private static string[] TitanHairOptions()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$TitanHairOptions): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		List<string> __this;
		String pSVar5;
		String[] pSVar6;

		__this = new List<string>();
		pSVar5 = "Any";
		pSVar5 = String.Concat("Common.", pSVar5);
		pSVar5 = Aottg2GisketchLocale.Text(pSVar5);
		if (__this != null) {
			piVar1 = &__this._version;
			*piVar1 = *piVar1 + 1;
			pSVar6 = __this._items;
			if (pSVar6 != null) {
				uVar2 = __this._size;
				if (uVar2 < (uint)pSVar6.Length) {
					__this._size = uVar2 + 1;
					pSVar6[(int)uVar2] = pSVar5;
					uVar3 = (typeof(BasicTitanSetup)._2).cctor_finished_or_no_cctor;
				}
				else {
					__this.AddWithResize((object)pSVar5);
					uVar3 = (typeof(BasicTitanSetup)._2).cctor_finished_or_no_cctor;
				}
				if (uVar3 == 0) {
				}
				__this.AddRange((IEnumerable<T>)BasicTitanSetup.AllHairs);
				pSVar6 = (String[])__this.ToArray();
				return pSVar6;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000932")]
	[Address(RVA = "0x5D50540", Offset = "0x5D4F540", VA = "0x5D50540")]
	private static void AddTitanSlot(GisketchActionContext context, TitanCustomSkinSet set)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$AddTitanSlot): clean
		ListSetting<TitanCustomSkinSlot> __this;
		int iVar1;
		TitanCustomSkinSlot __this_00;
		MethodInfo method_00;

		if ((set != null) &&(__this = set.Slots, __this != null)) {
			iVar1 = __this.GetCount();
			if (0x13 < iVar1) {
				return;
			}
			method_00 = (MethodInfo)set.Slots;
			__this_00 = new TitanCustomSkinSlot();
			if (method_00 != null) {
				method_00.AddItem((BaseSetting)__this_00);
				AottgSettingsSkinsCategory.MarkSetsChanged();
				AottgSettingsSkinsCategory.RefreshSkins(context);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000933")]
	[Address(RVA = "0x5D50920", Offset = "0x5D4F920", VA = "0x5D50920")]
	private static void RemoveTitanSlot(GisketchActionContext context, TitanCustomSkinSet set, TitanCustomSkinSlot slot)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$RemoveTitanSlot): clean
		ListSetting<TitanCustomSkinSlot> pSVar1;
		int iVar2;
		MethodInfo method_00;

		if ((set != null) &&(pSVar1 = set.Slots, pSVar1 != null)) {
			iVar2 = pSVar1.GetCount();
			if (iVar2 < 2) {
				return;
			}
			pSVar1 = set.Slots;
			if ((pSVar1 != null) &&(method_00 = (MethodInfo)pSVar1._value, method_00 != null)) {
				method_00.Remove((object)slot);
				AottgSettingsSkinsCategory.MarkSetsChanged();
				AottgSettingsSkinsCategory.RefreshSkins(context);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000934")]
	[Address(RVA = "0x5D4CF90", Offset = "0x5D4BF90", VA = "0x5D4CF90")]
	private static AottgSettingsGroup SkinGroup(string id, ICustomSkinSettings settings)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$SkinGroup): 16 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		String pSVar5;
		List<object> __this;
		List<object> __this_00;
		String pSVar6;
		IntSetting setting;
		String[] names;
		Action<GisketchActionContext> __this_01;
		object pIVar8;
		BoolSetting pSVar9;
		BaseSettingsContainer container;
		AottgSettingsRowBlock[] blocks;
		Object[] pSVar10;
		AottgSettingsRowBlock pGVar11;
		MethodInfo pMVar12;
		AottgSettingsGroup __this_02;

		pMVar12 = (MethodInfo)settings;
		if (Il2CppMethodInitialized_07548642 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_AottgComponent_Add) ;
			Il2CppMethodInitialized_07548642 = true;
		}
		pSVar5 = AottgSettingsGroup.Pascal(id);
		__this = new List<AottgComponent>();
		__this_00 = new List<AottgComponent>();
		if (settings != null) {
			pSVar6 = String.Concat("settings-skins-", id, "-set");
			setting = (IntSetting)settings.GetSelectedSet();
			names = (String[])settings.GetSelectedSet();
			__this_01 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_RefreshSkins);
			pIVar8 = (object)AottgSettingsSkinsCategory.SetDropdown(pSVar6, "Skins.Common", setting, names, __this_01);
			pMVar12 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
			if (__this == null) goto label_05e4d6ba;
			piVar1 = &__this._version;
			*piVar1 = *piVar1 + 1;
			pSVar10 = __this._items;
			if (pSVar10 == null) goto label_05e4d6ba;
			uVar2 = __this._size;
			if (uVar2 < (uint)pSVar10.Length) {
				__this._size = uVar2 + 1;
				pSVar10[(int)uVar2] = pIVar8;
			}
			else {
				__this.AddWithResize(pIVar8);
			}
			pMVar12 = null;
			pSVar6 = String.Concat("settings-skins-", id, "-actions");
			pIVar8 = (object)AottgSettingsSkinsCategory.SetActions(pSVar6, (ISetSettingsContainer)settings, null);
			pMVar12 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
			piVar1 = &__this._version;
			*piVar1 = *piVar1 + 1;
			pSVar10 = __this._items;
			if (pSVar10 == null) goto label_05e4d6ba;
			uVar2 = __this._size;
			if (uVar2 < (uint)pSVar10.Length) {
				__this._size = uVar2 + 1;
				pSVar10[(int)uVar2] = pIVar8;
			}
			else {
				__this.AddWithResize(pIVar8);
			}
			pSVar6 = String.Concat("settings-skins-", id, "-enabled");
			pSVar9 = (BoolSetting)settings.GetSelectedSet();
			pIVar8 = (object)AottgSettingsSkinsCategory.CommonSkinSwitch(pSVar6, pSVar5, "SkinsEnabled", pSVar9, null);
			pMVar12 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
			piVar1 = &__this._version;
			*piVar1 = *piVar1 + 1;
			pSVar10 = __this._items;
			if (pSVar10 == null) goto label_05e4d6ba;
			uVar2 = __this._size;
			if (uVar2 < (uint)pSVar10.Length) {
				__this._size = uVar2 + 1;
				pSVar10[(int)uVar2] = pIVar8;
			}
			else {
				__this.AddWithResize(pIVar8);
			}
			pSVar6 = String.Concat("settings-skins-", id, "-local");
			pSVar9 = (BoolSetting)settings.GetSelectedSet();
			pIVar8 = (object)AottgSettingsSkinsCategory.CommonSkinSwitch(pSVar6, pSVar5, "SkinsLocal", pSVar9, "SkinsLocalTooltip");
			pMVar12 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
			piVar1 = &__this._version;
			*piVar1 = *piVar1 + 1;
			pSVar10 = __this._items;
			if (pSVar10 == null) goto label_05e4d6ba;
			uVar2 = __this._size;
			if (uVar2 < (uint)pSVar10.Length) {
				__this._size = uVar2 + 1;
				pSVar10[(int)uVar2] = pIVar8;
			}
			else {
				__this.AddWithResize(pIVar8);
			}
			pSVar5 = String.Concat("Skins.", pSVar5);
			container = (BaseSettingsContainer)settings.GetSelectedSet();
			AottgSettingsSkinsCategory.AddSkinInputRows((List<AottgComponent>)__this, (List<AottgComponent>)__this_00, id, pSVar5, container, false);
		}
		pSVar5 = String.Concat("settings-skins-", id);
		blocks = (AottgSettingsRowBlock[])new AottgSettingsRowBlock[2];
		if (__this != null) {
			pMVar12 = MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray;
			pSVar10 = __this.ToArray();
			pGVar11 = AottgSettingsRowBlock.TwoColumn((AottgComponent[])pSVar10);
			if (blocks != null) {
				if ((int)blocks.Length != 0) {
					blocks[0] = pGVar11;
					if (__this_00 == null) goto label_05e4d6ba;
					pMVar12 = MethodInfo_System_Collections_Generic_List_AottgComponent_ToArray;
					pSVar10 = __this_00.ToArray();
					pMVar12 = (MethodInfo)AottgSettingsRowBlock.TwoColumn((AottgComponent[])pSVar10);
					if ((blocks.Length & 0xfffffffe) != 0) {
						blocks[1] = (AottgSettingsRowBlock)pMVar12;
						pSVar6 = AottgSettingsGroup.GroupTitleKey(pSVar5);
						__this_02 = new AottgSettingsGroup(pSVar5, null, pSVar6, blocks);
						return __this_02;
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
	label_05e4d6ba: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000935")]
	[Address(RVA = "0x5D4DB20", Offset = "0x5D4CB20", VA = "0x5D4DB20")]
	private static AottgComponent HumanGlobalSetDropdown(HumanCustomSkinSettings settings)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$HumanGlobalSetDropdown): 8 lines keep C-only constructs
		List<int>* targetAddress;
		int piVar1;
		HumanCustomSkinSettings pSVar2;
		String[] pSVar3;
		Int32[] pSVar4;
		bool bVar6;
		uint uVar7;
		int iVar8;
		AottgSettingsSkinsCategory.c__DisplayClass18_0 __this;
		String[] pSVar9;
		List<string> __this_00;
		List<int> pSVar10;
		IntSetting pSVar11;
		String pSVar12;
		Action<GisketchActionContext> __this_01;
		AottgComponent pGVar13;
		uint item;
		long lVar14;
		int value;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSettingsSkinsCategory.c__DisplayClass18_0));
		__this = new Object();
		if (__this != null) {
			__this.settings = settings;
			pSVar2 = __this.settings;
			if (pSVar2 != null) {
				pSVar9 = pSVar2.GetSetNames();
				__this_00 = new List<string>();
				pSVar10 = new List<int>();
				targetAddress = &__this.originalIndices;
				__this.originalIndices = pSVar10;
				if (pSVar9 != null) {
					uVar7 = (uint)pSVar9.Length;
					if (__this_00 == null) {
						if (0 < (int)uVar7) {
							lVar14 = 0;
							do {
								if (uVar7 <= (uint)lVar14) goto label_05e4e05f;
								if (pSVar9[lVar14] == null) goto label_05e4e05a;
								bVar6 = (pSVar9[lVar14]).StartsWith("Custom Set:", 4);
								if (!bVar6) {
									if ((uint)lVar14 < (uint)pSVar9.Length) goto label_05e4e05a;
									goto label_05e4e05f;
								}
								uVar7 = (uint)pSVar9.Length;
								lVar14 = lVar14 + 1;
							} while ((int)lVar14 < (int)uVar7);
						}
					}
					else if (0 < (int)uVar7) {
						item = 0;
						do {
							if (uVar7 <= item) goto label_05e4e05f;
							if (pSVar9[(int)item] == null) goto label_05e4e05a;
							bVar6 = (pSVar9[(int)item]).StartsWith("Custom Set:", 4);
							if (!bVar6) {
								if ((uint)pSVar9.Length <= item) goto label_05e4e05f;
								pSVar12 = pSVar9[(int)item];
								piVar1 = &__this_00._version;
								*piVar1 = *piVar1 + 1;
								pSVar3 = __this_00._items;
								if (pSVar3 == null) goto label_05e4e05a;
								uVar7 = __this_00._size;
								if (uVar7 < (uint)pSVar3.Length) {
									__this_00._size = uVar7 + 1;
									pSVar3[(int)uVar7] = pSVar12;
								}
								else {
									__this_00.AddWithResize((object)pSVar12);
								}
								pSVar10 = *targetAddress;
								if (pSVar10 == null) goto label_05e4e05a;
								piVar1 = &pSVar10._version;
								*piVar1 = *piVar1 + 1;
								pSVar4 = pSVar10._items;
								if (pSVar4 == null) goto label_05e4e05a;
								uVar7 = pSVar10._size;
								if (uVar7 < (uint)pSVar4.Length) {
									pSVar10._size = uVar7 + 1;
									pSVar4[(int)uVar7] = item;
								}
								else {
									pSVar10.AddWithResize(item);
								}
							}
							item = item + 1;
							uVar7 = (uint)pSVar9.Length;
						} while ((int)item < (int)uVar7);
					}
					pSVar11 = new IntSetting(0, -0x80000000, 0x7fffffff);
					__this.filteredIndex = pSVar11;
					pSVar2 = __this.settings;
					if (((pSVar2 != null) &&(pSVar11 = pSVar2.LastGlobalPresetIndex, pSVar11 != null)) &&(pSVar10 = __this.originalIndices, pSVar10 != null)) {
						iVar8 = pSVar10.IndexOf(pSVar11._value);
						pSVar11 = __this.filteredIndex;
						if (pSVar11 != null) {
							value = 0;
							if (0 < iVar8) {
								value = iVar8;
							}
							pSVar11.Value = value;
							if (__this_00 != null) {
								if (__this_00._size < 1) {
									pSVar9 = (String[])new string[1];
									pSVar12 = "None";
									pSVar12 = String.Concat("Common.", pSVar12);
									if ((typeof(Aottg2GisketchLocale)._2). cctor_finished_or_no_cctor == 0) {
									}
									pSVar12 = Aottg2GisketchLocale.Text(pSVar12) ;
									if (pSVar9 == null) goto label_05e4e05a;
									if ((int)pSVar9.Length == 0) {
	label_05e4e05f: ;
										throw new IndexOutOfRangeException();
									}
									pSVar9[0] = pSVar12;
								}
								else {
									pSVar9 = (String[])__this_00.ToArray();
								}
								pSVar11 = __this.filteredIndex;
								__this_01 = new Action<GisketchActionContext>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass18_0_HumanGlobalSetDr);
								pGVar13 = AottgSettingsSkinsCategory.SetDropdown("settings-skins-human-set", "Skins.Common", pSVar11, pSVar9, __this_01) ;
								return pGVar13;
							}
						}
					}
				}
			}
		}
	label_05e4e05a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000936")]
	[Address(RVA = "0x5D4D6E0", Offset = "0x5D4C6E0", VA = "0x5D4D6E0")]
	private static AottgComponent CharacterDropdown(HumanCustomSkinSettings settings)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$CharacterDropdown): 6 lines keep C-only constructs
		byte bVar1;
		int val1;
		int iVar2;
		HumanCustomSettings pSVar3;
		Settings_SetSettingsContainer_HumanCustomSet__o pSVar4;
		ListSetting<T> obj;
		Il2CppClass pIVar5;
		IntSetting setting;
		uint length;
		List<BaseSetting> __this;
		String[] names;
		String pSVar8;
		BaseSetting pSVar9;
		Action<GisketchActionContext> __this_00;
		AottgComponent pGVar10;
		ulong uVar11;
		String* targetAddress;

		pSVar3 = SettingsManager.HumanCustomSettings;
		if (pSVar3 == null) {
	label_05e4d841: ;
			__this = new List<BaseSetting>();
		}
		else {
			pSVar4 = pSVar3.CustomSets;
			if (pSVar4 == null) goto label_05e4dad3;
			obj = pSVar4.Sets;
			if (obj == null) goto label_05e4d841;
			pIVar5 = (Il2CppClass)obj.klass;
			uVar11 = (ulong)(pIVar5._2).interface_offsets_count;
			__this = (List<BaseSetting>)obj.GetItems();
		}
		if (__this != null) {
			val1 = __this._size;
			if (((typeof(Math))._2).cctor_finished_or_no_cctor == 0) {
			}
			length = Math.Max(val1, 1);
			names = (String[])new string[length];
			pSVar8 = "None";
			iVar2 = __this._size;
			if (iVar2 == 0) {
				pSVar8 = String.Concat("Common.", pSVar8);
				pSVar8 = Aottg2GisketchLocale.Text(pSVar8);
				if (names == null) goto label_05e4dad3;
				if ((int)names.Length == 0) {
	label_05e4dab5: ;
					throw new IndexOutOfRangeException();
				}
				names[0] = pSVar8;
				iVar2 = __this._size;
			}
			if (0 < iVar2) {
				if (names == null) {
					pSVar9 = __this.get_Item(0);
					if (pSVar9 != null) {
						bVar1 = (typeof(BaseSetSetting)._2).typeHierarchyDepth;
						if ((bVar1 <= (pSVar9.klass._2).typeHierarchyDepth) &&((pSVar9.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(BaseSetSetting))) {
							throw new NullReferenceException();
						}
	label_05e4db0c: ;
						throw new InvalidCastException();
					}
					goto label_05e4dad3;
				}
				targetAddress = names.m_Items;
				uVar11 = 0;
				do {
					pSVar9 = __this.get_Item((int32_t)uVar11);
					if (pSVar9 == null) goto label_05e4dad3;
					bVar1 = (typeof(BaseSetSetting)._2).typeHierarchyDepth;
					if (((pSVar9.klass._2).typeHierarchyDepth < bVar1) ||((pSVar9.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(BaseSetSetting))) goto label_05e4db0c;
					if ((*(ulong)((sbyte)pSVar9 + 0x30)) == null) goto label_05e4dad3;
					if ((uint)names.Length <= uVar11) goto label_05e4dab5;
					*targetAddress = (((*(Il2CppClass*)((sbyte)pSVar9 + 0x30)))._1).byval_arg.data;
					uVar11 = uVar11 + 1;
					targetAddress = targetAddress + 1;
				} while ((long)uVar11 < (long)__this._size);
			}
			if (settings != null) {
				setting = settings.SelectedCharacterIndex;
				__this_00 = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_RefreshSkins);
				pGVar10 = AottgSettingsSkinsCategory.SetDropdown("settings-skins-human-character", "Skins.Human", setting, names, __this_00);
				return pGVar10;
			}
		}
	label_05e4dad3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000937")]
	[Address(RVA = "0x5D4E7A0", Offset = "0x5D4D7A0", VA = "0x5D4E7A0")]
	private static BaseSettingsContainer HumanSkinContainer(HumanCustomSkinSettings settings)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$HumanSkinContainer): clean
		IntSetting pSVar1;
		BaseSettingsContainer pSVar2;
		BaseSetSetting pSVar3;

		if (settings == null) {
			return null;
		}
		pSVar1 = settings.SkinMode;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		if (pSVar1._value != 0) {
			pSVar2 = AottgSettingsSkinsCategory.HumanCharacterSkinContainer(settings);
			if (pSVar2 != null) {
				return pSVar2;
			}
		}
		pSVar3 = settings.GetSelectedSet();
		return (BaseSettingsContainer)pSVar3;
	}

	[Token(Token = "0x6000938")]
	[Address(RVA = "0x5D509E0", Offset = "0x5D4F9E0", VA = "0x5D509E0")]
	private static BaseSettingsContainer HumanCharacterSkinContainer(HumanCustomSkinSettings settings)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$HumanCharacterSkinContainer): 3 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		HumanCustomSettings pSVar3;
		Settings_SetSettingsContainer_HumanCustomSet__o pSVar4;
		ListSetting<T> obj;
		IntSetting pSVar5;
		int iVar8;
		BaseSettingsContainer pSVar10;

		if (settings == null) {
			return null;
		}
		pSVar3 = SettingsManager.HumanCustomSettings;
		if (pSVar3 == null) {
			return null;
		}
		pSVar4 = pSVar3.CustomSets;
		if (pSVar4 == null) {
	label_05e50c90: ;
			throw new NullReferenceException();
		}
		obj = pSVar4.Sets;
		if (obj == null) {
			return null;
		}
		pSVar5 = settings.SelectedCharacterIndex;
		if (pSVar5 == null) goto label_05e50c90;
		iVar2 = pSVar5._value;
		if (-1 < iVar2) {
			iVar8 = obj.GetItemAt();
			if (iVar2 < iVar8) {
				pSVar10 = (BaseSettingsContainer)obj.GetItemAt(iVar2);
				if (pSVar10 == null) {
					return null;
				}
				goto label_05e50c53;
			}
		}
		iVar8 = obj.GetItemAt();
		if (iVar8 < 1) {
			return null;
		}
		pSVar10 = (BaseSettingsContainer)obj.GetItemAt(0);
		if (pSVar10 == null) {
			return null;
		}
	label_05e50c53: ;
		bVar1 = (typeof(BaseSettingsContainer)._2).typeHierarchyDepth;
		if ((((Il2CppClass)pSVar10.klass)._2).typeHierarchyDepth < bVar1) {
			return null;
		}
		if ((((Il2CppClass)pSVar10.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(BaseSettingsContainer)) {
			return pSVar10;
		}
		return null;
	}

	[Token(Token = "0x6000939")]
	[Address(RVA = "0x5D4F160", Offset = "0x5D4E160", VA = "0x5D4F160")]
	private static AottgComponent SetDropdown(string id, string sub, IntSetting setting, string[] names, Action<GisketchActionContext> changed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$SetDropdown): clean
		String item;
		String pSVar1;
		AottgComponent pGVar2;

		item = "Set";
		if ((names == null) || (names.Length == 0)) {
			names = (String[])new string[1];
			pSVar1 = "None";
			pSVar1 = String.Concat("Common.", pSVar1);
			pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
			if (names == null) {
				throw new NullReferenceException();
			}
			if ((int)names.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			names[0] = pSVar1;
		}
		pGVar2 = AottgSettingsRows.Dropdown(id, sub, item, setting, names, null, changed);
		return pGVar2;
	}

	[Token(Token = "0x600093A")]
	[Address(RVA = "0x5D4E5B0", Offset = "0x5D4D5B0", VA = "0x5D4E5B0")]
	private static AottgComponent CommonSkinSwitch(string id, string prefix, string item, BoolSetting setting, [Optional] string tooltipItem)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$CommonSkinSwitch): clean
		String pSVar1;
		String str0;
		AottgBoolSettingAdapter __this;
		AottgSettingDescriptor descriptor;
		AottgSettingRow __this_00;

		pSVar1 = "Groups.Skins";
		pSVar1 = String.Concat("SettingsPopup.", pSVar1, ".", prefix);
		str0 = Aottg2GisketchLocale.Text(pSVar1);
		pSVar1 = "Skins.Common";
		pSVar1 = String.Concat("SettingsPopup.", pSVar1, ".", item);
		pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
		pSVar1 = String.Concat(str0, " ", pSVar1);
		__this = new AottgBoolSettingAdapter(setting);
		descriptor = AottgSettingsRows.LabeledDescriptor(id, "Skins.Common", pSVar1, 0, (IAottgSettingAdapter)__this, tooltipItem, null);
		__this_00 = new AottgSettingRow(descriptor);
		return (AottgComponent)__this_00;
	}

	[Token(Token = "0x600093B")]
	[Address(RVA = "0x5D4E070", Offset = "0x5D4D070", VA = "0x5D4E070")]
	private static AottgComponent SetActions(string id, ISetSettingsContainer settings, Action afterChange)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$SetActions): 8 lines keep C-only constructs
		object pIVar1;
		String pSVar4;
		bool bVar5;
		AottgSettingsSkinsCategory.c__DisplayClass24_0 __this;
		String pSVar6;
		AottgActionRow.ActionButton[] buttons;
		Action<GisketchActionContext> pSVar7;
		AottgActionRow.ActionButton pGVar8;
		AottgActionRow pGVar10;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSettingsSkinsCategory.c__DisplayClass24_0));
		__this = new Object();
		if (__this != null) {
			__this.settings = settings;
			__this.afterChange = afterChange;
			pSVar4 = "Skins.Common";
			pSVar6 = "SetActions";
			pSVar6 = String.Concat("SettingsPopup.", pSVar4, ".", pSVar6);
			buttons = (AottgActionRow.ActionButton[])new AottgActionRow.ActionButton[4];
			pSVar7 = new Action<GisketchActionContext>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass24_0_SetActions_b__0);
			pGVar8 = new AottgActionRow.ActionButton("Common.Create", pSVar7, 1, false, "plus");
			if (buttons != null) {
				if ((int)buttons.Length != 0) {
					buttons[0] = pGVar8;
					pSVar7 = new Action<GisketchActionContext>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass24_0_SetActions_b__1);
					pSVar4 = "Common.Delete";
					pIVar1 = (object)__this.settings;
					if (pIVar1 == null) {
						bVar5 = true;
					}
					else {
						bVar5 = pIVar1.CanEditSelectedSet();
						bVar5 = !bVar5;
					}
					pGVar8 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgActionRow.ActionButton));
					pGVar8 = new AottgActionRow.ActionButton(pSVar4, pSVar7, 6, bVar5, "trashcan");
					if ((buttons.Length & 0xfffffffe) != 0) {
						buttons[1] = pGVar8;
						pSVar7 = new Action<GisketchActionContext>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass24_0_SetActions_b__2);
						pSVar4 = "Common.Rename";
						pIVar1 = (object)__this.settings;
						if (pIVar1 == null) {
							bVar5 = true;
						}
						else {
							bVar5 = pIVar1.CanEditSelectedSet();
							bVar5 = !bVar5;
						}
						pGVar8 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgActionRow.ActionButton));
						pGVar8 = new AottgActionRow.ActionButton(pSVar4, pSVar7, 1, bVar5, "pencil");
						if (2 < (uint)buttons.Length) {
							buttons[2] = pGVar8;
							pSVar7 = new Action<GisketchActionContext>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass24_0_SetActions_b__3);
							pGVar8 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgActionRow.ActionButton));
							pGVar8 = new AottgActionRow.ActionButton("Common.Copy", pSVar7, 1, false, "copy");
							if ((buttons.Length & 0xfffffffc) != 0) {
								buttons[3] = pGVar8;
								pGVar10 = AottgActionRow.Keyed(id, pSVar6, buttons);
								return (AottgComponent)pGVar10;
							}
						}
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x5D4E810", Offset = "0x5D4D810", VA = "0x5D4E810")]
	private static void AddSkinInputRows(List<AottgComponent> rows, List<AottgComponent> skinRows, string idPrefix, string sub, BaseSettingsContainer container, bool characterMode)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$AddSkinInputRows): 26 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		byte bVar3;
		uint uVar4;
		OrderedDictionary pSVar5;
		Il2CppClass pIVar6;
		Il2CppRuntimeInterfaceOffsetPair pIVar7;
		StringSetting pSVar8;
		Object[] pSVar9;
		sbyte cVar10;
		bool bVar11;
		object pIVar12;
		VirtualInvokeData pVVar13;
		ulong puVar14;
		String pSVar15;
		String[] values;
		String pSVar16;
		AottgStringSettingAdapter __this;
		AottgSettingDescriptor descriptor;
		AottgSettingRow __this_00;
		ulong uVar17;
		MethodInfo pMVar18;
		List<object> __this_01;
		long lVar19;
		undefined7 in_register_00000089;
		StringSetting setting;
		object local_98;
		MethodInfo local_90;
		uint local_84;
		String local_80;
		object local_78;
		String local_70;
		List<object> local_68;
		List<object> local_60;
		String local_58;
		MethodInfo local_50;
		object* local_40;
		object* local_38;

		local_84 = (undefined4)CONCAT71(in_register_00000089, characterMode);
		local_68 = (List<object>)rows;
		local_60 = (List<object>)skinRows;
		local_58 = idPrefix;
		local_50 = (MethodInfo)sub;
		if (Il2CppMethodInitialized_0754864a == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_AottgComponent_Add) ;
			Il2CppMethodInitialized_0754864a = true;
		}
		local_98 = null;
		local_78 = null;
		if (container == null) {
			return;
		}
		local_70 = AottgSettingsSkinsCategory.SetScopeId(container);
		pSVar5 = container.Settings;
		if (pSVar5 == null) {
			throw new NullReferenceException();
		}
		pIVar12 = (object)pSVar5.GetEnumerator();
		local_40 = &local_98;
		local_38 = &local_78;
	joined_r0x05e4e993: ;
		do {
			do {
				local_98 = pIVar12;
				if (pIVar12 == null) {
					throw new NullReferenceException();
				}
				pIVar6 = pIVar12.klass;
				uVar17 = (ulong)(pIVar6._2).interface_offsets_count;
				cVar10 = pIVar12.Dispose();
				pIVar12 = local_98;
				if (cVar10 == false) {
					pIVar12 = (local_98 as IDisposable);
					if (pIVar12 == null) {
						return;
					}
					pIVar6 = pIVar12.klass;
					uVar17 = (ulong)(pIVar6._2).interface_offsets_count;
					local_78 = pIVar12;
					if (uVar17 == 0) goto label_05e4f01f;
					pIVar7 = (pIVar6._1).interfaceOffsets;
					lVar19 = 0;
					goto label_05e4f010;
				}
				if (local_98 == null) {
					throw new NullReferenceException();
				}
				pIVar6 = local_98.klass;
				uVar17 = (ulong)(pIVar6._2).interface_offsets_count;
				pIVar12 = pIVar12.Dispose();
				if (pIVar12 == null) {
					throw new NullReferenceException();
				}
				if ((pIVar12.klass._1).element_class !=(typeof(DictionaryEntry)._1).element_class) {
					throw new InvalidCastException();
				}
				puVar14 = il2cpp_vm_Object_Unbox(pIVar12);
				setting = (StringSetting)puVar14[1];
				if (setting == null) {
	label_05e4eb12: ;
					setting = null;
					pSVar16 = (String)*puVar14;
				}
				else {
					bVar2 = (typeof(BaseSetting)._2).typeHierarchyDepth;
					if ((setting.klass._2).typeHierarchyDepth < bVar2) goto label_05e4eb12;
					if ((setting.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(BaseSetting)) {
						setting = null;
					}
					pSVar16 = (String)*puVar14;
				}
				if ((pSVar16 != null) && (pSVar16.klass != g_data_07556758)) {
					throw new InvalidCastException();
				}
				pIVar12 = local_98;
			} while (setting == null);
			pSVar8 = setting.klass;
			bVar2 = (pSVar8._2).typeHierarchyDepth;
			bVar3 = (typeof(StringSetting)._2).typeHierarchyDepth;
		} while ((((bVar2 < bVar3) ||((pSVar8._2).typeHierarchy[(ulong)bVar3 - 1] != typeof(StringSetting))) && ((bVar3 = (typeof(FloatSetting)._2).typeHierarchyDepth, bVar2 < bVar3 ||((pSVar8._2).typeHierarchy[(ulong)bVar3 - 1] != typeof(FloatSetting)) ))) ||((bVar11 = (pSVar16 == "Name"), pIVar12 = local_98, bVar11 ||(bVar11 = (pSVar16 == "UniqueId"), pIVar12 = local_98, bVar11))));
		pSVar15 = pSVar16;
		if ((char)local_84 != false) {
			if (pSVar16 == null) {
				throw new NullReferenceException();
			}
			bVar11 = pSVar16.StartsWith("Skin", 4);
			pIVar12 = local_98;
			if (!bVar11) goto joined_r0x05e4e993;
			if ("Skin" == null) {
				throw new NullReferenceException();
			}
			pSVar15 = pSVar16.Substring(("Skin".fields)._stringLength);
		}
		bVar11 = (pSVar15 == "Ground");
		local_90 = local_50;
		if (bVar11) {
			local_90 = (MethodInfo *)"Skins.Common";
		}
		values = (String[])new string[5];
		if (values == null) {
			throw new NullReferenceException();
		}
		if ((int)values.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		values[0] = "settings-skins-";
		if ((values.Length & 0xfffffffe) == 0) {
			throw new IndexOutOfRangeException();
		}
		values[1] = local_58;
		if ((uint)values.Length < 3) {
			throw new IndexOutOfRangeException();
		}
		values[2] = local_70;
		pMVar18 = (MethodInfo *)"-";
		if ((values.Length & 0xfffffffc) == 0) {
			throw new IndexOutOfRangeException();
		}
		values[3] = "-";
		pSVar16 = AottgSettingsCategoryPage.SafeId(pSVar16);
		if ((uint)values.Length < 5) {
			throw new IndexOutOfRangeException();
		}
		values[4] = pSVar16;
		pSVar16 = String.Concat(values);
		bVar2 = (typeof(StringSetting)._2).typeHierarchyDepth;
		local_80 = pSVar15;
		if (((setting.klass._2).typeHierarchyDepth < bVar2) ||((setting.klass._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(StringSetting))) {
			pMVar18 = local_90;
			bVar2 = (typeof(FloatSetting)._2).typeHierarchyDepth;
			if (((setting.klass._2).typeHierarchyDepth < bVar2) ||((setting.klass._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(FloatSetting)) ) {
				throw new InvalidCastException();
			}
			__this = new AottgStringSettingAdapter((FloatSetting)setting);
		}
		else {
			pMVar18 = local_90;
			bVar2 = (typeof(StringSetting)._2).typeHierarchyDepth;
			if (((setting.klass._2).typeHierarchyDepth < bVar2) ||((setting.klass._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(StringSetting) )) {
				throw new InvalidCastException();
			}
			__this = new AottgStringSettingAdapter(setting);
		}
		local_90 = (MethodInfo)pSVar16;
		pSVar16 = String.Concat("SettingsPopup.", (String)pMVar18, ".", local_80);
		pSVar15 = AottgSettingsSkinsCategory.SplitSkinName(local_80);
		pSVar15 = Aottg2GisketchLocale.Text(pSVar16, pSVar15);
		descriptor = AottgSettingsRows.LabeledDescriptor((String)local_90, (String)pMVar18, pSVar15, 4, (IAottgSettingAdapter)__this, null, null);
		if (descriptor == null) {
			throw new NullReferenceException();
		}
		descriptor.LabelKey = pSVar16;
		bVar2 = (typeof(StringSetting)._2).typeHierarchyDepth;
		if ((setting.klass._2).typeHierarchyDepth < bVar2) {
			setting = null;
		}
		else if ((setting.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(StringSetting)) {
			setting = null;
		}
		__this_01 = local_60;
		if (setting == null) {
			__this_01 = local_68;
		}
		__this_00 = new AottgSettingRow(descriptor);
		pMVar18 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
		if (__this_01 != null) {
			piVar1 = &__this_01._version;
			*piVar1 = *piVar1 + 1;
			pSVar9 = __this_01._items;
			if (pSVar9 != null) {
				uVar4 = __this_01._size;
				if (uVar4 < (uint)pSVar9.Length) {
					__this_01._size = uVar4 + 1;
					pSVar9[(int)uVar4] = (object)__this_00;
					pIVar12 = local_98;
				}
				else {
					__this_01.AddWithResize((object)__this_00);
					pIVar12 = local_98;
				}
				goto joined_r0x05e4e993;
			}
		}
		throw new NullReferenceException();
		while (true) {
			lVar19 = lVar19 + 0x10;
			if (!(uVar17 * 0x10 != lVar19)) break;
	label_05e4f010: ;
			if (*(IDisposable*)((long)&pIVar7.interfaceType + lVar19) == typeof(IDisposable)) {
				pVVar13 = pIVar6.vtable + *(int)((long)&pIVar7.offset + lVar19);
				goto label_05e4f03d;
			}
		}
	label_05e4f01f: ;
	label_05e4f03d: ;
		pIVar12.Dispose();
		return;
	}

	[Token(Token = "0x600093D")]
	[Address(RVA = "0x5D4FF10", Offset = "0x5D4EF10", VA = "0x5D4FF10")]
	private static string SetScopeId(BaseSettingsContainer container)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$SetScopeId): 1 lines keep C-only constructs
		byte bVar1;
		InspectorSettingMetadata pSVar2;
		bool bVar3;
		String pSVar4;

		if (container != null) {
			bVar1 = (typeof(BaseSetSetting)._2).typeHierarchyDepth;
			if ((bVar1 <= (container.klass._2).typeHierarchyDepth) &&((container.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(BaseSetSetting))) {
				pSVar2 = (*(ulong)((sbyte)container + 0x40));
				if (pSVar2 != null) {
					bVar3 = String.IsNullOrEmpty(pSVar2.Header);
					if (bVar3) goto label_05e4ff8f;
					pSVar2 = (*(ulong)((sbyte)container + 0x40));
					if (pSVar2 != null) {
						pSVar4 = AottgSettingsCategoryPage.SafeId(pSVar2.Header);
						pSVar4 = String.Concat("-", pSVar4);
						return pSVar4;
					}
				}
				throw new NullReferenceException();
			}
		}
	label_05e4ff8f: ;
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	[Token(Token = "0x600093E")]
	[Address(RVA = "0x5D50CB0", Offset = "0x5D4FCB0", VA = "0x5D50CB0")]
	private static string SplitSkinName(string name)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$SplitSkinName): 4 lines keep C-only constructs
		int index;
		int piVar1;
		uint uVar2;
		String[] pSVar3;
		bool bVar5;
		bool bVar6;
		bool bVar7;
		ushort uVar8;
		List<string> __this;
		String pSVar9;
		int index_00;
		int iVar10;

		bVar5 = String.IsNullOrEmpty(name);
		if (bVar5) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		__this = new List<string>();
		if (name != null) {
			iVar10 = 0;
			if (1 < name._stringLength) {
				iVar10 = 0;
				index_00 = 1;
				do {
					uVar8 = name.get_Chars(index_00);
					bVar7 = false;
					bVar5 = Char.IsUpper(uVar8);
					uVar8 = name.get_Chars(index_00 + -1);
					bVar6 = Char.IsLower(uVar8);
					index = index_00 + 1;
					if (index < name._stringLength) {
						uVar8 = name.get_Chars(index);
						bVar7 = Char.IsLower(uVar8);
					}
					if ((bVar5) && (bVar7 != false || bVar6)) {
						pSVar9 = name.Substring(iVar10, index_00 - iVar10);
						if (__this == null) goto label_05e50f67;
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pSVar3 = __this._items;
						if (pSVar3 == null) goto label_05e50f67;
						uVar2 = __this._size;
						iVar10 = index_00;
						if (uVar2 < (uint)pSVar3.Length) {
							__this._size = uVar2 + 1;
							pSVar3[(int)uVar2] = pSVar9;
						}
						else {
							__this.AddWithResize((object)pSVar9);
						}
					}
					index_00 = index;
				} while (index < name._stringLength);
			}
			pSVar9 = name.Substring(iVar10);
			if (__this != null) {
				piVar1 = &__this._version;
				*piVar1 = *piVar1 + 1;
				pSVar3 = __this._items;
				if (pSVar3 != null) {
					uVar2 = __this._size;
					if (uVar2 < (uint)pSVar3.Length) {
						__this._size = uVar2 + 1;
						pSVar3[(int)uVar2] = pSVar9;
					}
					else {
						__this.AddWithResize((object)pSVar9);
					}
					pSVar9 = String.Join(" ", (IEnumerable<string>)__this);
					return pSVar9;
				}
			}
		}
	label_05e50f67: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600093F")]
	[Address(RVA = "0x5D50F70", Offset = "0x5D4FF70", VA = "0x5D50F70")]
	private static void SyncHumanGlobalSelection(HumanCustomSkinSettings settings)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$SyncHumanGlobalSelection): clean
		IntSetting pSVar1;
		IntSetting __this;

		if (settings == null) {
			return;
		}
		pSVar1 = settings.SkinMode;
		if (pSVar1 != null) {
			if (pSVar1._value != 0) {
				return;
			}
			pSVar1 = settings.SelectedSetIndex;
			if ((pSVar1 != null) &&(__this = settings.LastGlobalPresetIndex, __this != null)) {
				__this.Value = pSVar1._value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000940")]
	[Address(RVA = "0x5D50FF0", Offset = "0x5D4FFF0", VA = "0x5D50FF0")]
	private static Action AfterSkinSetChange(GisketchActionContext context, Action beforeRefresh)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$AfterSkinSetChange): 3 lines keep C-only constructs
		AottgSettingsSkinsCategory.c__DisplayClass29_0 __this;
		Action __this_00;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSettingsSkinsCategory.c__DisplayClass29_0));
		__this = new Object();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.beforeRefresh = beforeRefresh;
		__this.context.Node = context.Node;
		__this.context.InputSource = context.InputSource;
		*(uint)&__this.context.field_0x1c = context._28_4_;
		__this.context.ElementId = context.ElementId;
		__this.context.GameObject = context.GameObject;
		__this_00 = new Action((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c__DisplayClass29_0_AfterSkinSetChan);
		return __this_00;
	}

	[Token(Token = "0x6000941")]
	[Address(RVA = "0x5D50600", Offset = "0x5D4F600", VA = "0x5D50600")]
	private static void MarkSetsChanged()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$MarkSetsChanged): 4 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		object @object;
		String pSVar3;
		String pSVar4;
		Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory___c_StaticFields pGVar5;
		Func<string> __this;
		String* method_00;

		pSVar3 = "Skins.Common";
		pSVar4 = "SetsChanged";
		pSVar4 = String.Concat("SettingsPopup.", pSVar3, ".", pSVar4);
		pSVar4 = Aottg2GisketchLocale.Text(pSVar4);
		pSVar3 = "settings-skins-sets-changed";
		pGVar5 = typeof(AottgSettingsSkinsCategory.c).static_fields;
		__this = pGVar5.__9__30_0;
		method_00 = &"settings-skins-sets-changed";
		if (__this == null) {
			if ((typeof(AottgSettingsSkinsCategory.c)._2). cctor_finished_or_no_cctor == 0) {
				pGVar5 = typeof(AottgSettingsSkinsCategory.c).static_fields;
			}
			@object = (object)pGVar5.__9;
			__this = new Func<string>(@object, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory_c_MarkSetsChanged_b__30_0);
			pGVar5 = typeof(AottgSettingsSkinsCategory.c).static_fields;
			pGVar5.__9__30_0 = __this;
			uVar2 = (typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		AottgSettingsDirtyRegistry.Register(pSVar3, pSVar4, __this);
		piVar1 = &AottgSettingsSkinsCategory._setsRevision ;
		*piVar1 = *piVar1 + 1;
		return;
	}

	[Token(Token = "0x6000942")]
	[Address(RVA = "0x5D50810", Offset = "0x5D4F810", VA = "0x5D50810")]
	private static void RefreshSkins(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$RefreshSkins): clean
		bool bVar1;
		GisketchUIRoot root;
		AottgSettingsGroup[] groups;
		float fVar2;

		root = null;
		bVar1 = ((Object)context.GameObject != null);
		if (bVar1) {
			if (context.GameObject == null) {
				throw new NullReferenceException();
			}
			root = context.GameObject.GetComponentInParent<GisketchUIRoot>();
		}
		fVar2 = AottgSettingsSkinsCategory.CurrentScrollOffset(root);
		AottgSettingsSkinsCategory._pendingScrollOffset = fVar2;
		AottgSettingsScreen.RefreshCategory(root, "skins");
		groups = AottgSettingsSkinsCategory.Groups();
		AottgSettingsCategoryPage.SyncState(root, groups);
		AottgSettingsDirtyRegistry.SyncAll(root);
		return;
	}

	[Token(Token = "0x6000943")]
	[Address(RVA = "0x5D510D0", Offset = "0x5D500D0", VA = "0x5D510D0")]
	private static float CurrentScrollOffset(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$CurrentScrollOffset): clean
		bool bVar1;
		Transform pUVar2;
		String pSVar3;
		GisketchVirtualScrollRuntime __this;
		float fVar4;

		pUVar2 = null;
		bVar1 = ((Object)root != null);
		if (bVar1) {
			if (root == null) goto label_05e51227;
			pUVar2 = root.transform;
		}
		pSVar3 = "skins";
		pSVar3 = String.Concat("settings-", pSVar3, "-content") ;
		pUVar2 = AottgSettingsSkinsCategory.FindById(pUVar2, pSVar3);
		__this = null;
		bVar1 = ((Object)pUVar2 != null);
		if (bVar1) {
			if (pUVar2 == null) goto label_05e51227;
			__this = pUVar2.GetComponent<GisketchVirtualScrollRuntime>();
		}
		bVar1 = ((Object)__this != null);
		if (!bVar1) {
			return 0.0;
		}
		if (__this != null) {
			return fVar4;
		}
	label_05e51227: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000944")]
	[Address(RVA = "0x5D51230", Offset = "0x5D50230", VA = "0x5D51230")]
	private static Transform FindById(Transform root, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory$$FindById): clean
		bool bVar1;
		int iVar2;
		String a;
		int index;
		Transform pUVar3;

		bVar1 = ((Object)root == null);
		pUVar3 = null;
		if (!bVar1) {
			if (root == null) {
				throw new NullReferenceException();
			}
			a = root.name;
			bVar1 = String.Equals(a, id, 5);
			if (bVar1) {
				pUVar3 = root;
			}
			else {
				index = 0;
				iVar2 = root.childCount;
				pUVar3 = null;
				if (0 < iVar2) {
					do {
						pUVar3 = root.GetChild(index);
						pUVar3 = AottgSettingsSkinsCategory.FindById(pUVar3, id);
						bVar1 = ((Object)pUVar3 != null);
						if (bVar1) {
							return pUVar3;
						}
						index = index + 1;
						iVar2 = root.childCount;
						pUVar3 = null;
					} while (index < iVar2);
				}
			}
		}
		return pUVar3;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsSkinsCategory.c.

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass7_0$$.ctor: clean
	private void c__DisplayClass7_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass8_0$$.ctor: clean
	private void c__DisplayClass8_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass9_0$$.ctor: clean
	private void c__DisplayClass9_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass18_0$$.ctor: clean
	private void c__DisplayClass18_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass24_0$$.ctor: clean
	private void c__DisplayClass24_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass29_0$$.ctor: clean
	private void c__DisplayClass29_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgSettingsSkinsCategory.c();
		AottgSettingsSkinsCategory.c.__9 =(AottgSettingsSkinsCategory.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c$$<MarkSetsChanged>b__30_0: clean
	private String c__MarkSetsChanged_b__30_0()
	{
		String pSVar1;

		pSVar1 = (AottgSettingsSkinsCategory. _setsRevision).ToString();
		return pSVar1;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass18_0$$<HumanGlobalSetDropdown>b__0: clean
	private void c__DisplayClass18_0__HumanGlobalSetDropdown_b__0(GisketchActionContext context)
	{
		int index;
		IntSetting pSVar1;
		List<int> __this_00;
		HumanCustomSkinSettings pSVar2;
		bool bVar3;
		int value;
		GisketchUIRoot root;
		AottgSettingsGroup[] groups;
		float fVar4;

		pSVar1 = this.filteredIndex;
		if (pSVar1 != null) {
			index = pSVar1._value;
			if (index < 0) {
	Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__RefreshSkins: ;
				root = null;
				bVar3 = ((Object)context.GameObject != null);
				if (bVar3) {
					if (context.GameObject == null) {
						throw new NullReferenceException();
					}
					root = (GisketchUIRoot)context.GameObject.GetComponentInParent<GisketchUIRoot>();
				}
				fVar4 = AottgSettingsSkinsCategory.CurrentScrollOffset(root) ;
				AottgSettingsSkinsCategory. _pendingScrollOffset = fVar4;
				AottgSettingsScreen.RefreshCategory(root, "skins");
				groups = AottgSettingsSkinsCategory.Groups();
				AottgSettingsCategoryPage.SyncState(root, groups);
				if ((typeof(AottgSettingsDirtyRegistry)._2). cctor_finished_or_no_cctor == 0) {
				}
				AottgSettingsDirtyRegistry.SyncAll(root);
				return;
			}
			__this_00 = this.originalIndices;
			if (__this_00 != null) {
				if (__this_00._size <= index) goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__RefreshSkins;
				value = __this_00.get_Item(index);
				pSVar2 = this.settings;
				if ((pSVar2 != null) &&(pSVar1 = pSVar2.SelectedSetIndex, pSVar1 != null)) {
					pSVar1.Value = value;
					pSVar2 = this.settings;
					if ((pSVar2 != null) &&(pSVar1 = pSVar2.LastGlobalPresetIndex, pSVar1 != null)) {
						pSVar1.Value = value;
						goto Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSkinsCategory__RefreshSkins;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass24_0$$<SetActions>b__0: clean
	private void c__DisplayClass24_0__SetActions_b__0(GisketchActionContext context)
	{
		ISetSettingsContainer settings;
		Action afterChange;

		settings = this.settings;
		afterChange = AottgSettingsSkinsCategory.AfterSkinSetChange(context, this.afterChange);
		AottgSkinSetActions.OpenName(context, settings, 0, afterChange);
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass24_0$$<SetActions>b__1: clean
	private void c__DisplayClass24_0__SetActions_b__1(GisketchActionContext context)
	{
		ISetSettingsContainer settings;
		Action afterChange;

		settings = this.settings;
		afterChange = AottgSettingsSkinsCategory.AfterSkinSetChange(context, this.afterChange);
		AottgSkinSetActions.OpenDelete(context, settings, afterChange);
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass24_0$$<SetActions>b__2: 4 lines keep C-only constructs
	private void c__DisplayClass24_0__SetActions_b__2(GisketchActionContext context)
	{
		object obj;
		Il2CppClass pIVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		bool bVar3;
		Action afterChange;
		MethodInfo method_00;
		ulong uVar4;
		long lVar5;

		obj = (object)this.settings;
		afterChange = AottgSettingsSkinsCategory.AfterSkinSetChange(context, this.afterChange);
		if (obj != null) {
			pIVar1 = obj.klass;
			uVar4 = (ulong)(pIVar1._2).interface_offsets_count;
			if (uVar4 != 0) {
				pIVar2 = (pIVar1._1).interfaceOffsets;
				lVar5 = 0;
				do {
					if (*(ISetSettingsContainer*)((long)&pIVar2.interfaceType + lVar5) == typeof(ISetSettingsContainer)) {
						method_00 = (MethodInfo)(pIVar1.vtable + (*(int)((long)&pIVar2.offset + lVar5) + 8));
						goto label_05e51799;
					}
					lVar5 = lVar5 + 0x10;
				} while (uVar4 * 0x10 != lVar5);
			}
			method_00 = (MethodInfo)GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(ISetSettingsContainer), 8);
	label_05e51799: ;
			bVar3 = (*method_00.methodPointer)(obj,(MethodInfo)method_00.virtualMethodPointer);
			if (bVar3) {
				AottgSkinSetActions.OpenName(context, (ISetSettingsContainer)obj, 1, afterChange);
				return;
			}
		}
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass24_0$$<SetActions>b__3: clean
	private void c__DisplayClass24_0__SetActions_b__3(GisketchActionContext context)
	{
		ISetSettingsContainer settings;
		Action afterChange;

		settings = this.settings;
		afterChange = AottgSettingsSkinsCategory.AfterSkinSetChange(context, this.afterChange);
		AottgSkinSetActions.OpenName(context, settings, 2, afterChange);
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass29_0$$<AfterSkinSetChange>b__0: clean
	private void c__DisplayClass29_0__AfterSkinSetChange_b__0()
	{
		Action pSVar1;
		MethodInfo method_00;

		pSVar1 = this.beforeRefresh;
		method_00 = (MethodInfo)this;
		if (pSVar1 != null) {
			method_00 = (MethodInfo)pSVar1.method_code;
			(*(code)pSVar1.invoke_impl)(method_00,pSVar1.method);
		}
		AottgSettingsSkinsCategory.MarkSetsChanged();
		AottgSettingsSkinsCategory.RefreshSkins((GisketchActionContext)this.context);
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass7_0$$<HumanGroup>b__0: clean
	private void c__DisplayClass7_0__HumanGroup_b__0()
	{
		AottgSettingsSkinsCategory.SyncHumanGlobalSelection(this.settings);
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass8_0$$<TitanGroup>b__0: clean
	private void c__DisplayClass8_0__TitanGroup_b__0(GisketchActionContext context)
	{
		AottgSettingsSkinsCategory.AddTitanSlot(context, this.set);
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsSkinsCategory.<>c__DisplayClass9_0$$<AddTitanSlotBlocks>b__0: clean
	private void c__DisplayClass9_0__AddTitanSlotBlocks_b__0(GisketchActionContext context)
	{


		AottgSettingsSkinsCategory.RemoveTitanSlot(context, this.set, this.slot);
		return;
	}
}
