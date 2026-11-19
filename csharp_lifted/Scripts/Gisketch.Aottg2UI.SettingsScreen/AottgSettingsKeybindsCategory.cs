// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Game;
using Gisketch.Aottg2UI.Virtualization;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200018E")]
internal static class AottgSettingsKeybindsCategory
{
	[Token(Token = "0x40008C9")]
	internal const string CategoryId = "keybinds";

	[Token(Token = "0x40008CA")]
	internal const string DefaultTabId = "general";

	[Token(Token = "0x40008CB")]
	internal const string SelectedTabStateKey = "settings.keybinds.selectedTab";

	[Token(Token = "0x40008CC")]
	private const string ActiveContentId = "settings-keybinds-active-content";

	[Token(Token = "0x40008CD")]
	private const string TabStripId = "settings-keybinds-tabs";

	[Token(Token = "0x40008CE")]
	private const string CategoryTitleId = "settings-keybinds-title";

	[Token(Token = "0x40008CF")]
	[FieldOffset(Offset = "0x0")]
	private static readonly string[] TabIds;

	[Token(Token = "0x40008D0")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string[][] HumanSpecialItems;

	[Token(Token = "0x60008A0")]
	[Address(RVA = "0x5D428F0", Offset = "0x5D418F0", VA = "0x5D428F0")]
	public static void Build(AottgUi content, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$Build): clean


		if ((typeof(AottgSettingsKeybindsCategory)._2).cctor_finished_or_no_cctor == 0) {
		}
		AottgSettingsKeybindsCategory.Build(content, context, "general", 0.0);
		return;
	}

	[Token(Token = "0x60008A1")]
	[Address(RVA = "0x5D42950", Offset = "0x5D41950", VA = "0x5D42950")]
	internal static void Build(AottgUi content, AottgScreenSectionContext context, string selectedTabId, float scrollOffset = 0f)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$Build): 3 lines keep C-only constructs
		AottgSettingsKeybindsCategory.c__DisplayClass9_0 __this;
		MethodInfo pMVar1;
		AottgSettingsGroup pGVar2;
		Action<AottgUi> __this_00;
		String pSVar3;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition layout;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSettingsKeybindsCategory.c__DisplayClass9_0));
		__this = new Object();
		if (__this != null) {
			__this.selectedTabId = selectedTabId;
			__this.context._SectionId_k__BackingField = context._SectionId_k__BackingField;
			__this.context._SectionTitle_k__BackingField = context._SectionTitle_k__BackingField;
			__this.context._group = context._group;
			__this.context._order = context._order;
			*(uint)&__this.context.field_0xc = context._12_4_;
			pMVar1 = null;
			__this.scrollOffset = scrollOffset;
			pSVar3 = __this.selectedTabId;
			if ((typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor == 0) {
			}
			pMVar1 = (MethodInfo)AottgSettingsKeybindsCategory.NormalizeTabId(pSVar3);
			__this.selectedTabId = (String)pMVar1;
			pGVar2 = AottgSettingsKeybindsCategory.GroupFor(__this.selectedTabId);
			__this.selectedGroup = pGVar2;
			pGVar2 = __this.selectedGroup;
			if (pGVar2 != null) {
				pGVar2._showHeader = false;
			}
			__this_00 = new Action<AottgUi>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c__DisplayClass9_0_Build_b__0);
			pSVar3 = "keybinds";
			pSVar3 = String.Concat("settings-", pSVar3, "-content");
			width = AottgUi.Percent(100.0);
			height = AottgUi.Percent(100.0);
			layout = AottgUi.Layout("Column", null, "Stretch", null, null, 6.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0);
			if (content != null) {
				content.Panel("clear", __this_00, pSVar3, layout, null);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60008A2")]
	[Address(RVA = "0x5D42E40", Offset = "0x5D41E40", VA = "0x5D42E40")]
	public static void SyncState(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$SyncState): clean
		AottgSettingsGroup[] groups;

		groups = AottgSettingsKeybindsCategory.Groups();
		AottgSettingsCategoryPage.SyncState(root, groups);
		return;
	}

	[Token(Token = "0x60008A3")]
	[Address(RVA = "0x5D42E90", Offset = "0x5D41E90", VA = "0x5D42E90")]
	private static AottgSettingsGroup[] Groups()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$Groups): 33 lines keep C-only constructs
		byte bVar1;
		InputSettings settings;
		String pSVar2;
		AottgSettingsGroup[] pGVar3;
		AottgComponent[] pGVar4;
		AottgSettingsGroup pGVar5;
		Il2CppClass pIVar6;
		MethodInfo pMVar7;
		ErenShifterInputSettings container;
		GeneralInputSettings container_00;
		InteractionInputSettings container_01;
		HumanInputSettings container_02;
		TitanInputSettings container_03;
		AnnieShifterInputSettings container_04;

		settings = SettingsManager.InputSettings;
		pMVar7 = (MethodInfo)&g_data_00000006;
		pGVar3 = (AottgSettingsGroup[])new AottgSettingsGroup[6];
		pSVar2 = "general";
		if (settings == null) {
			container_00 = null;
		}
		else {
			container_00 = settings.General;
		}
		pGVar4 = AottgSettingsKeybindsCategory.GeneralSpecialRows(settings) ;
		pGVar5 = AottgSettingsKeybindsCategory.Group(pSVar2, (BaseSettingsContainer)container_00, false, pGVar4);
		if (pGVar3 == null) {
			throw new NullReferenceException();
		}
		if ((int)pGVar3.Length == 0) goto label_05e43431;
		pGVar3[0] = pGVar5;
		pSVar2 = "interaction";
		pMVar7 = MethodInfo_System_Array_Empty_AottgComponent;
		if (settings == null) {
			container_01 = null;
		}
		else {
			container_01 = settings.Interaction;
		}
		if ((MethodInfo_System_Array_Empty_AottgComponent.field7_0x38).methodMetadataHandle == null) {
			il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_AottgComponent);
			pIVar6 = *(Il2CppClass*)((long)(pMVar7.field7_0x38).methodMetadataHandle + 0x10);
			if (((pIVar6._2).bitflags1 & 1) == 0) goto label_05e43094;
	label_05e42ffc: ;
			if ((pIVar6._2).cctor_finished_or_no_cctor != 0) goto label_05e43009;
	label_05e430a9: ;
			pIVar6 = (pMVar7.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar6._2).bitflags1;
		}
		else {
			pIVar6 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_AottgComponent.field7_0x38).methodMetadataHandle + 0x10);
			if (((pIVar6._2).bitflags1 & 1) != 0) goto label_05e42ffc;
	label_05e43094: ;
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
			if ((pIVar6._2).cctor_finished_or_no_cctor == 0) goto label_05e430a9;
	label_05e43009: ;
			pIVar6 = (pMVar7.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar6._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
		}
		pGVar4 = *(AottgComponent[]*)pIVar6.static_fields;
		pGVar5 = AottgSettingsKeybindsCategory.Group(pSVar2, (BaseSettingsContainer)container_01, false, pGVar4);
		if ((pGVar3.Length & 0xfffffffe) == 0) goto label_05e43431;
		pGVar3[1] = pGVar5;
		pSVar2 = "human";
		if (settings == null) {
			container_02 = null;
		}
		else {
			container_02 = settings.Human;
		}
		pGVar4 = AottgSettingsKeybindsCategory.HumanSpecialRows(settings);
		pGVar5 = AottgSettingsKeybindsCategory.Group(pSVar2, (BaseSettingsContainer)container_02, false, pGVar4);
		if ((uint)pGVar3.Length < 3) goto label_05e43431;
		pGVar3[2] = pGVar5;
		pSVar2 = "titan";
		pMVar7 = MethodInfo_System_Array_Empty_AottgComponent;
		if (settings == null) {
			container_03 = null;
		}
		else {
			container_03 = settings.Titan;
		}
		if ((MethodInfo_System_Array_Empty_AottgComponent.field7_0x38).methodMetadataHandle == null) {
			il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_AottgComponent);
			pIVar6 = *(Il2CppClass*)((long)(pMVar7.field7_0x38).methodMetadataHandle + 0x10);
			if (((pIVar6._2).bitflags1 & 1) == 0) goto label_05e431f5;
	label_05e4315a: ;
			if ((pIVar6._2).cctor_finished_or_no_cctor != 0) goto label_05e43167;
	label_05e4320a: ;
			pIVar6 = (pMVar7.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar6._2).bitflags1;
		}
		else {
			pIVar6 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_AottgComponent.field7_0x38).methodMetadataHandle + 0x10);
			if (((pIVar6._2).bitflags1 & 1) != 0) goto label_05e4315a;
	label_05e431f5: ;
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
			if ((pIVar6._2).cctor_finished_or_no_cctor == 0) goto label_05e4320a;
	label_05e43167: ;
			pIVar6 = (pMVar7.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar6._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
		}
		pGVar4 = *(AottgComponent[]*)pIVar6.static_fields;
		pGVar5 = AottgSettingsKeybindsCategory.Group(pSVar2, (BaseSettingsContainer)container_03, true, pGVar4);
		if ((pGVar3.Length & 0xfffffffc) == 0) goto label_05e43431;
		pGVar3[3] = pGVar5;
		pSVar2 = "annie-shifter";
		pMVar7 = MethodInfo_System_Array_Empty_AottgComponent;
		if (settings == null) {
			container_04 = null;
		}
		else {
			container_04 = settings.AnnieShifter;
		}
		if ((MethodInfo_System_Array_Empty_AottgComponent.field7_0x38).methodMetadataHandle == null) {
			il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_AottgComponent);
			pIVar6 = *(Il2CppClass*)((long)(pMVar7.field7_0x38).methodMetadataHandle + 0x10);
			if (((pIVar6._2).bitflags1 & 1) == 0) goto label_05e432f6;
	label_05e4325e: ;
			if ((pIVar6._2).cctor_finished_or_no_cctor != 0) goto label_05e4326b;
	label_05e4330b: ;
			pIVar6 = (pMVar7.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar6._2).bitflags1;
		}
		else {
			pIVar6 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_AottgComponent.field7_0x38).methodMetadataHandle + 0x10);
			if (((pIVar6._2).bitflags1 & 1) != 0) goto label_05e4325e;
	label_05e432f6: ;
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
			if ((pIVar6._2).cctor_finished_or_no_cctor == 0) goto label_05e4330b;
	label_05e4326b: ;
			pIVar6 = (pMVar7.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar6._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
		}
		pGVar4 = *(AottgComponent[]*)pIVar6.static_fields;
		pGVar5 = AottgSettingsKeybindsCategory.Group(pSVar2, (BaseSettingsContainer)container_04, true, pGVar4);
		if ((uint)pGVar3.Length < 5) goto label_05e43431;
		pGVar3[4] = pGVar5;
		pSVar2 = "eren-shifter";
		pMVar7 = MethodInfo_System_Array_Empty_AottgComponent;
		if (settings == null) {
			container = null;
		}
		else {
			container = settings.ErenShifter;
		}
		if ((MethodInfo_System_Array_Empty_AottgComponent.field7_0x38).methodMetadataHandle == null) {
			il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_AottgComponent);
			pIVar6 = *(Il2CppClass*)((long)(pMVar7.field7_0x38).methodMetadataHandle + 0x10);
			if (((pIVar6._2).bitflags1 & 1) == 0) goto label_05e433fd;
	label_05e4335f: ;
			if ((pIVar6._2).cctor_finished_or_no_cctor != 0) goto label_05e4336c;
	label_05e43412: ;
			pIVar6 = (pMVar7.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar6._2).bitflags1;
		}
		else {
			pIVar6 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_AottgComponent.field7_0x38).methodMetadataHandle + 0x10);
			if (((pIVar6._2).bitflags1 & 1) != 0) goto label_05e4335f;
	label_05e433fd: ;
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
			if ((pIVar6._2).cctor_finished_or_no_cctor == 0) goto label_05e43412;
	label_05e4336c: ;
			pIVar6 = (pMVar7.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar6._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
		}
		pGVar4 = *(AottgComponent[]*)pIVar6.static_fields;
		pGVar5 = AottgSettingsKeybindsCategory.Group(pSVar2, (BaseSettingsContainer)container, true, pGVar4);
		if (5 < (uint)pGVar3.Length) {
			pGVar3[5] = pGVar5;
			return pGVar3;
		}
	label_05e43431: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60008A4")]
	[Address(RVA = "0x5D43D60", Offset = "0x5D42D60", VA = "0x5D43D60")]
	internal static string SelectedTab(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$SelectedTab): clean
		uint uVar1;
		GisketchUIState __this;
		bool bVar2;
		String pSVar3;
		MethodInfo method_00;

		bVar2 = ((Object)root != null);
		if (bVar2) {
			if (root == null) {
				throw new NullReferenceException();
			}
			__this = root._State_k__BackingField;
			if (__this != null) {
				method_00 = (MethodInfo *)"settings.keybinds.selectedTab";
				pSVar3 = __this.Get("settings.keybinds.selectedTab", "general");
				uVar1 = (typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor;
				goto joined_r0x05e43e0c;
			}
		}
		uVar1 = (typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor;
		pSVar3 = "general";
	joined_r0x05e43e0c: ;
		if (uVar1 == 0) {
			pSVar3 = AottgSettingsKeybindsCategory.NormalizeTabId(pSVar3);
			return pSVar3;
		}
		pSVar3 = AottgSettingsKeybindsCategory.NormalizeTabId(pSVar3);
		return pSVar3;
	}

	[Token(Token = "0x60008A5")]
	[Address(RVA = "0x5D43E50", Offset = "0x5D42E50", VA = "0x5D43E50")]
	internal static string ScrollStateKey(string tabId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$ScrollStateKey): clean
		String pSVar1;

		pSVar1 = AottgSettingsKeybindsCategory.NormalizeTabId(tabId);
		pSVar1 = String.Concat("settings.keybinds.scroll.", pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x60008A6")]
	[Address(RVA = "0x5D43EC0", Offset = "0x5D42EC0", VA = "0x5D43EC0")]
	internal static float SavedScroll(GisketchUIRoot root, string tabId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$SavedScroll): clean
		uint uVar1;
		GisketchUIState __this;
		bool bVar2;
		String pSVar3;
		CultureInfo provider;
		float local_1c;

		local_1c = 0.0;
		bVar2 = ((Object)root == null);
		if (bVar2) {
			return 0.0;
		}
		if (root == null) {
			throw new NullReferenceException();
		}
		__this = root._State_k__BackingField;
		if (__this == null) {
			return 0.0;
		}
		if (Il2CppMethodInitialized_075485d8 == false) {
			Il2CppMethodInitialized_075485d8 = true;
			uVar1 = (typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(AottgSettingsKeybindsCategory))._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar3 = AottgSettingsKeybindsCategory.NormalizeTabId(tabId);
		pSVar3 = String.Concat("settings.keybinds.scroll.", pSVar3);
		pSVar3 = __this.Get(pSVar3, "0") ;
		provider = CultureInfo.InvariantCulture;
		Single.TryParse(pSVar3, 0xa7, (IFormatProvider)provider, ref local_1c);
		return local_1c;
	}

	[Token(Token = "0x60008A7")]
	[Address(RVA = "0x5D44060", Offset = "0x5D43060", VA = "0x5D44060")]
	private static void SelectTab(GameObject source, string tabId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$SelectTab): 1 lines keep C-only constructs
		GisketchUIState __this;
		bool bVar1;
		GisketchUIRoot root;
		MethodInfo pMVar2;
		String pSVar3;

		root = null;
		pMVar2 = null;
		bVar1 = ((Object)source != null);
		if (bVar1) {
			if (source == null) goto label_05e441fa;
			pMVar2 = MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot;
			root = source.GetComponentInParent<GisketchUIRoot>();
		}
		pMVar2 = (MethodInfo)AottgSettingsKeybindsCategory.NormalizeTabId(tabId);
		bVar1 = ((Object)root == null);
		if (!bVar1) {
			if (root == null) {
	label_05e441fa: ;
				throw new NullReferenceException();
			}
			if (root._State_k__BackingField != null) {
				if ((typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor == 0) {
				}
				pSVar3 = AottgSettingsKeybindsCategory.SelectedTab(root);
				bVar1 = String.Equals(pSVar3, (String)pMVar2, 5);
				if (!bVar1) {
					if ((typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor == 0) {
					}
					pSVar3 = AottgSettingsKeybindsCategory.SelectedTab(root);
					AottgSettingsKeybindsCategory.SaveCurrentScroll(root, pSVar3);
					__this = root._State_k__BackingField;
					if (__this != null) {
						__this.Set("settings.keybinds.selectedTab", (String)pMVar2);
						AottgSettingsScreen.RefreshCategory(root, "keybinds");
						return;
					}
					goto label_05e441fa;
				}
			}
		}
		return;
	}

	[Token(Token = "0x60008A8")]
	[Address(RVA = "0x5D44200", Offset = "0x5D43200", VA = "0x5D44200")]
	private static void SaveCurrentScroll(GisketchUIRoot root, string tabId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$SaveCurrentScroll): 4 lines keep C-only constructs
		uint uVar1;
		GisketchUIState __this;
		bool bVar2;
		uint in_EAX;
		Transform root_00;
		GisketchVirtualScrollRuntime __this_00;
		String pSVar3;
		CultureInfo provider;
		String value;
		float fVar5;
		ulong uStack_38;

		uStack_38._0_4_ = in_EAX;
		uStack_38 = (ulong)(uint)uStack_38;
		root_00 = null;
		bVar2 = ((Object)root != null);
		if (bVar2) {
			if (root == null) goto label_05e443ee;
			root_00 = root.transform;
		}
		__this_00 = AottgSettingsKeybindsCategory.FindActiveScroll(root_00) ;
		bVar2 = ((Object)__this_00 != null);
		if (!bVar2) {
			return;
		}
		if (root == null) goto label_05e443ee;
		__this = root._State_k__BackingField;
		if ((typeof(AottgSettingsKeybindsCategory)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_075485d8 == false) goto label_05e443b4;
	label_05e44307: ;
			uVar1 = (typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_075485d8 != false) goto label_05e44307;
	label_05e443b4: ;
			Il2CppMethodInitialized_075485d8 = true;
			uVar1 = (typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar3 = AottgSettingsKeybindsCategory.NormalizeTabId(tabId);
		pSVar3 = String.Concat("settings.keybinds.scroll.", pSVar3);
		if (__this_00 != null) {
			fVar5 = __this_00.CurrentScrollOffset;
			uStack_38 = CONCAT44(fVar5, (uint)uStack_38);
			provider = CultureInfo.InvariantCulture;
			value = (((long)&uStack_38 + 4)).ToString((IFormatProvider)provider) ;
			if (__this != null) {
				__this.Set(pSVar3, value);
				return;
			}
		}
	label_05e443ee: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60008A9")]
	[Address(RVA = "0x5D44400", Offset = "0x5D43400", VA = "0x5D44400")]
	internal static GisketchVirtualScrollRuntime FindActiveScroll(Transform root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$FindActiveScroll): clean
		bool bVar1;
		Transform x;
		GisketchVirtualScrollRuntime pGVar2;

		if ((typeof(AottgSettingsKeybindsCategory)._2).cctor_finished_or_no_cctor == 0) {
		}
		x = AottgSettingsKeybindsCategory.Find(root, "settings-keybinds-active-content");
		bVar1 = ((Object)x != null);
		if (bVar1) {
			if (x == null) {
				throw new NullReferenceException();
			}
			pGVar2 = x.GetComponent<GisketchVirtualScrollRuntime>();
			return pGVar2;
		}
		return null;
	}

	[Token(Token = "0x60008AA")]
	[Address(RVA = "0x5D444C0", Offset = "0x5D434C0", VA = "0x5D444C0")]
	private static Transform Find(Transform root, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$Find): 1 lines keep C-only constructs
		bool bVar1;
		int iVar2;
		String a;
		Transform pUVar3;
		int index;

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
						if ((typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor == 0) {
							il2cpp_codegen_runtime_class_init(typeof(AottgSettingsKeybindsCategory)) ;
						}
						pUVar3 = AottgSettingsKeybindsCategory.Find(pUVar3, id);
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

	[Token(Token = "0x60008AB")]
	[Address(RVA = "0x5D42D10", Offset = "0x5D41D10", VA = "0x5D42D10")]
	private static AottgSettingsGroup GroupFor(string tabId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$GroupFor): 9 lines keep C-only constructs
		uint uVar1;
		String __this;
		bool bVar2;
		AottgSettingsGroup[] pGVar3;
		il2cpp_array_size_t iVar4;
		String value;
		AottgSettingsGroup pGVar5;
		ulong uVar6;
		Il2CppClass klass;
		AottgSettingsGroup* ppGVar7;

		if (Il2CppMethodInitialized_075485de == false) {
			Il2CppMethodInitialized_075485de = true;
			uVar1 = (typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor;
			klass = typeof(AottgSettingsKeybindsCategory);
		}
		else {
			uVar1 = (typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor;
			klass = typeof(AottgSettingsKeybindsCategory);
		}
		typeof(AottgSettingsKeybindsCategory) =(AottgSettingsKeybindsCategory)klass;
		if (uVar1 == 0) {
			pGVar3 = AottgSettingsKeybindsCategory.Groups();
		}
		else {
			pGVar3 = AottgSettingsKeybindsCategory.Groups();
		}
		if (pGVar3 == null) {
	label_05e42e36: ;
			throw new NullReferenceException();
		}
		iVar4 = pGVar3.Length;
		if (0 < (int)iVar4) {
			ppGVar7 = pGVar3.m_Items;
			uVar6 = 0;
			do {
				if ((iVar4 & 0xffffffff) <= uVar6) goto label_05e42e31;
				if (*ppGVar7 != null) {
					__this = ((*ppGVar7).fields)._id;
					value = String.Concat("-", tabId);
					if (__this == null) goto label_05e42e36;
					bVar2 = __this.EndsWith(value, 5);
					if (bVar2) {
						if ((uint)pGVar3.Length <= (uint)uVar6) goto label_05e42e31;
						goto label_05e42e1e;
					}
					iVar4 = pGVar3.Length;
				}
				uVar6 = uVar6 + 1;
				ppGVar7 = ppGVar7 + 1;
			} while ((long)uVar6 < (long)(int)iVar4);
		}
		if (iVar4 == 0) {
		}
		else {
			if ((int)iVar4 == 0) {
	label_05e42e31: ;
				throw new IndexOutOfRangeException();
			}
			ppGVar7 = pGVar3.m_Items;
	label_05e42e1e: ;
			pGVar5 = *ppGVar7;
		}
		return pGVar5;
	}

	[Token(Token = "0x60008AC")]
	[Address(RVA = "0x5D44600", Offset = "0x5D43600", VA = "0x5D44600")]
	private static AottgSubtab[] Tabs()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$Tabs): clean
		uint length;
		uint uVar1;
		String pSVar2;
		AottgSubtab[] pGVar3;
		String pSVar4;
		MethodInfo method_00;
		String[] pSVar5;
		AottgSubtab __this;
		long lVar6;
		ulong uVar7;

		if (Il2CppMethodInitialized_075485df == false) {
			Il2CppMethodInitialized_075485df = true;
			if ((typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor != 0) goto label_05e4462b;
	label_05e4467e: ;
			pSVar5 = AottgSettingsKeybindsCategory.TabIds;
		}
		else {
			if ((typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor == 0) goto label_05e4467e;
	label_05e4462b: ;
			pSVar5 = AottgSettingsKeybindsCategory.TabIds;
		}
		if (pSVar5 == null) {
	label_05e4480d: ;
			throw new NullReferenceException();
		}
		length = (uint)pSVar5.Length;
		method_00 = (MethodInfo)(ulong)length;
		pGVar3 = (AottgSubtab[])new AottgSubtab[length];
		if (pGVar3 == null) {
			if ((typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor == 0) {
			}
			pSVar5 = AottgSettingsKeybindsCategory.TabIds;
			if (pSVar5 == null) goto label_05e4480d;
			if ((int)pSVar5.Length < 1) {
				return null;
			}
			if ((typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor == 0) {
				pSVar5 = AottgSettingsKeybindsCategory.TabIds;
				if (pSVar5 == null) goto label_05e4480d;
			}
			if ((int)pSVar5.Length != 0) {
				pSVar2 = pSVar5[0];
				pSVar4 = AottgSettingsKeybindsCategory.GroupTitle(pSVar2);
				__this = new AottgSubtab(pSVar2, pSVar4);
				throw new NullReferenceException();
			}
		}
		else {
			lVar6 = 0;
			uVar7 = 0;
			uVar1 = (typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor;
			while(true) {
				if (uVar1 == 0) {
				}
				pSVar5 = AottgSettingsKeybindsCategory.TabIds;
				if (pSVar5 == null) goto label_05e4480d;
				if ((long)(int)pSVar5.Length <= (long)uVar7) {
					return pGVar3;
				}
				if ((typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor == 0) {
					pSVar5 = AottgSettingsKeybindsCategory. TabIds;
					if (pSVar5 == null) goto label_05e4480d;
				}
				if ((uint)pSVar5.Length <= uVar7) break;
				pSVar2 = pSVar5[uVar7];
				pSVar4 = AottgSettingsKeybindsCategory.GroupTitle(pSVar2);
				method_00 = new AottgSubtab(pSVar2, pSVar4);
				if ((uint)pGVar3.Length <= uVar7) break;
				pGVar3[uVar7] = (AottgSubtab)method_00;
				uVar7 = uVar7 + 1;
				lVar6 = lVar6 + 8;
				uVar1 = (typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60008AD")]
	[Address(RVA = "0x5D42C10", Offset = "0x5D41C10", VA = "0x5D42C10")]
	private static string NormalizeTabId(string tabId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$NormalizeTabId): 5 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		uint uVar3;
		AottgSubtab[] pGVar4;
		uint uVar5;
		Il2CppClass klass;
		String* ppSVar6;

		if (Il2CppMethodInitialized_075485e0 == false) {
			Il2CppMethodInitialized_075485e0 = true;
			uVar1 = (typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor;
			klass = typeof(AottgSettingsKeybindsCategory);
		}
		else {
			uVar1 = (typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor;
			klass = typeof(AottgSettingsKeybindsCategory);
		}
		typeof(AottgSettingsKeybindsCategory) =(AottgSettingsKeybindsCategory)klass;
		if (uVar1 == 0) {
			pGVar4 = AottgSettingsKeybindsCategory.Tabs();
		}
		else {
			pGVar4 = AottgSettingsKeybindsCategory.Tabs();
		}
		if (pGVar4 == null) {
	label_05e42cf7: ;
			throw new NullReferenceException();
		}
		uVar3 = (uint)pGVar4.Length;
		ppSVar6 = &"general";
		if (0 < (int)uVar3) {
			uVar5 = 0;
			do {
				if (uVar3 <= uVar5) {
	label_05e42cfc: ;
					throw new IndexOutOfRangeException();
				}
				if (pGVar4[(int)uVar5] == null) goto label_05e42cf7;
				bVar2 = String.Equals((pGVar4[(int)uVar5].fields)._Id_k__BackingField, tabId, 5);
				if (bVar2) {
					if ((uint)pGVar4.Length <= uVar5) goto label_05e42cfc;
					if (pGVar4[(int)uVar5] == null) goto label_05e42cf7;
					ppSVar6 = &(pGVar4[(int)uVar5].fields)._Id_k__BackingField;
					break;
				}
				uVar5 = uVar5 + 1;
				uVar3 = (uint)pGVar4.Length;
			} while ((int)uVar5 < (int)uVar3);
		}
		return ((AottgSubtab)ppSVar6)._Id_k__BackingField;
	}

	[Token(Token = "0x60008AE")]
	[Address(RVA = "0x5D44930", Offset = "0x5D43930", VA = "0x5D44930")]
	private static void AddSearchBridge(AottgUi page)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$AddSearchBridge): 1 lines keep C-only constructs
		GisketchNodeDefinition __this;
		GisketchNodeDefinition[] pGVar1;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar2;
		MethodInfo method_00;

		AottgKeybindTabSearchBridge.RegisterFactory();
		__this = new GisketchNodeDefinition();
		if (__this != null) {
			__this.type = "AottgKeybindTabSearchBridge";
			__this.id = "settings-keybinds-search-bridge";
			if ((typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor == 0) {
			}
			method_00 = (MethodInfo)&__this.options;
			__this.options = AottgSettingsKeybindsCategory.TabIds;
			pGVar1 = AottgSettingsKeybindsCategory.SearchMetadata();
			__this.deferredChildren = pGVar1;
			width = AottgUi.Points(0.0);
			height = AottgUi.Points(0.0);
			pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			__this.layout = pGVar2;
			if (page != null) {
				page.Add(__this);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60008AF")]
	[Address(RVA = "0x5D44B00", Offset = "0x5D43B00", VA = "0x5D44B00")]
	private static GisketchNodeDefinition[] SearchMetadata()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$SearchMetadata): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		InputSettings pSVar4;
		String[] pSVar5;
		String str3;
		List<GisketchNodeDefinition> nodes;
		System_String_array_array pSVar7;
		String id;
		String pSVar8;
		GisketchNodeDefinition item;
		GisketchNodeDefinition[] pGVar9;
		HumanInputSettings container;
		ErenShifterInputSettings container_00;
		uint uVar10;
		InteractionInputSettings container_01;
		TitanInputSettings container_02;
		AnnieShifterInputSettings container_03;

		nodes = new List<GisketchNodeDefinition>();
		pSVar8 = "interaction";
		pSVar4 = SettingsManager.InputSettings;
		if (pSVar4 == null) {
			container_01 = null;
		}
		else {
			container_01 = pSVar4.Interaction;
		}
		container = null;
		AottgSettingsKeybindsCategory.AddContainerMetadata(nodes, pSVar8, (BaseSettingsContainer)container_01, false);
		pSVar8 = "human";
		if (pSVar4 != null) {
			container = pSVar4.Human;
		}
		uVar10 = 0;
		AottgSettingsKeybindsCategory.AddContainerMetadata(nodes, pSVar8, (BaseSettingsContainer)container, false);
		while(true) {
			if ((typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor == 0) {
			}
			pSVar8 = "titan";
			pSVar7 = AottgSettingsKeybindsCategory. HumanSpecialItems;
			if (pSVar7 == null) goto label_05e44f51;
			if ((int)pSVar7.Length <= (int)uVar10) break;
			if ((typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor == 0) {
				pSVar7 = AottgSettingsKeybindsCategory. HumanSpecialItems;
				if (pSVar7 == null) goto label_05e44f51;
			}
			if ((uint)pSVar7.Length <= uVar10) {
	label_05e44f56: ;
				throw new IndexOutOfRangeException();
			}
			pSVar5 = pSVar7[(int)uVar10];
			if (pSVar5 == null) goto label_05e44f51;
			if ((int)pSVar5.Length == 0) goto label_05e44f56;
			id = String.Concat("settings-keybinds-human-", pSVar5[0]);
			pSVar8 = "Keybinds.Human";
			pSVar7 = AottgSettingsKeybindsCategory. HumanSpecialItems;
			if (pSVar7 == null) goto label_05e44f51;
			if ((uint)pSVar7.Length <= uVar10) goto label_05e44f56;
			pSVar5 = pSVar7[(int)uVar10];
			if (pSVar5 == null) goto label_05e44f51;
			if ((pSVar5.Length & 0xfffffffe) == 0) goto label_05e44f56;
			str3 = pSVar5[1];
			pSVar8 = String.Concat("SettingsPopup.", pSVar8, ".", str3);
			pSVar8 = Aottg2GisketchLocale.Text(pSVar8);
			item = AottgSettingsKeybindsCategory.SearchNode(id, pSVar8, "human");
			if (nodes == null) goto label_05e44f51;
			piVar1 = &nodes._version;
			*piVar1 = *piVar1 + 1;
			pGVar9 = nodes._items;
			if (pGVar9 == null) goto label_05e44f51;
			uVar2 = nodes._size;
			if (uVar2 < (uint)pGVar9.Length) {
				nodes._size = uVar2 + 1;
				pGVar9[(int)uVar2] = item;
			}
			else {
				nodes.AddWithResize((object)item);
			}
			uVar10 = uVar10 + 1;
		}
		if (pSVar4 == null) {
			container_02 = null;
			uVar3 = (typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor;
		}
		else {
			container_02 = pSVar4.Titan;
			uVar3 = (typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		AottgSettingsKeybindsCategory.AddContainerMetadata(nodes, pSVar8, (BaseSettingsContainer)container_02, true);
		pSVar8 = "annie-shifter";
		if (pSVar4 == null) {
			container_03 = null;
		}
		else {
			container_03 = pSVar4.AnnieShifter;
		}
		AottgSettingsKeybindsCategory.AddContainerMetadata(nodes, pSVar8, (BaseSettingsContainer)container_03, true);
		pSVar8 = "eren-shifter";
		if (pSVar4 == null) {
			container_00 = null;
		}
		else {
			container_00 = pSVar4.ErenShifter;
		}
		AottgSettingsKeybindsCategory.AddContainerMetadata(nodes, pSVar8, (BaseSettingsContainer)container_00, true);
		if (nodes != null) {
			pGVar9 = (GisketchNodeDefinition[])nodes.ToArray();
			return pGVar9;
		}
	label_05e44f51: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60008B0")]
	[Address(RVA = "0x5D44F60", Offset = "0x5D43F60", VA = "0x5D44F60")]
	private static void AddContainerMetadata(List<GisketchNodeDefinition> nodes, string tabId, BaseSettingsContainer container, bool titanLabels)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$AddContainerMetadata): 15 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		OrderedDictionary pSVar4;
		Il2CppClass pIVar5;
		Il2CppRuntimeInterfaceOffsetPair pIVar6;
		GisketchNodeDefinition[] pGVar7;
		sbyte cVar8;
		bool bVar9;
		object pIVar10;
		VirtualInvokeData pVVar11;
		ulong puVar12;
		MethodInfo method_00;
		String id;
		String sub;
		String pSVar13;
		GisketchNodeDefinition item;
		undefined7 in_register_00000009;
		ulong uVar14;
		String method_01;
		long lVar16;
		object local_68;
		uint local_5c;
		MethodInfo local_58;
		object local_50;
		byte local_40;
		object* local_38;

		local_5c = (undefined4)CONCAT71(in_register_00000009, titanLabels);
		local_58 = (MethodInfo)tabId;
		local_68 = null;
		local_50 = null;
		if (container == null) {
			return;
		}
		pSVar4 = container.Settings;
		if (pSVar4 == null) {
			throw new NullReferenceException();
		}
		pIVar10 = (object)pSVar4.GetEnumerator();
		local_40 = (byte)&local_68;
		local_38 = &local_50;
	joined_r0x05e45031: ;
		do {
			do {
				local_68 = pIVar10;
				if (pIVar10 == null) {
					throw new NullReferenceException();
				}
				pIVar5 = pIVar10.klass;
				uVar14 = (ulong)(pIVar5._2).interface_offsets_count;
				cVar8 = pIVar10.Dispose();
				pIVar10 = local_68;
				if (cVar8 == false) {
					pIVar10 = (local_68 as IDisposable);
					if (pIVar10 == null) {
						return;
					}
					pIVar5 = pIVar10.klass;
					uVar14 = (ulong)(pIVar5._2).interface_offsets_count;
					local_50 = pIVar10;
					if (uVar14 == 0) goto label_05e4537f;
					pIVar6 = (pIVar5._1).interfaceOffsets;
					lVar16 = 0;
					goto label_05e45370;
				}
				if (local_68 == null) {
					throw new NullReferenceException();
				}
				pIVar5 = local_68.klass;
				uVar14 = (ulong)(pIVar5._2).interface_offsets_count;
				pIVar10 = pIVar10.Dispose();
				if (pIVar10 == null) {
					throw new NullReferenceException();
				}
				if ((pIVar10.klass._1).element_class !=(typeof(DictionaryEntry)._1).element_class) {
					throw new InvalidCastException();
				}
				puVar12 = il2cpp_vm_Object_Unbox(pIVar10);
				pIVar10 = local_68;
			} while ((long)puVar12[1] == null);
			lVar16 = *(long)puVar12[1];
			bVar2 = (typeof(KeybindSetting)._2).typeHierarchyDepth;
		} while ((*(byte)(lVar16 + 0x130) < bVar2) ||(*(KeybindSetting*)(*(long)(lVar16 + 200) + -8 + (long)(ulong)bVar2 * 8) != typeof(KeybindSetting)));
		pSVar13 = (String)*puVar12;
		method_01 = (String)(ulong)bVar2;
		if ((pSVar13 != null) && (method_01 = g_data_07556758, pSVar13.klass != g_data_07556758)) {
			throw new InvalidCastException();
		}
		method_00 = (MethodInfo)AottgSettingsCategoryPage.SafeId(pSVar13);
		id = String.Concat("settings-keybinds-", (String)local_58, "-", (String)method_00);
		sub = AottgSettingsGroup.Pascal((String)local_58);
		if (((char)local_5c != false) &&(bVar9 = (pSVar13 == "CoverNape1"))) {
			pSVar13 = "CoverNape";
		}
		pSVar13 = AottgSettingsKeybindsCategory.KeybindLabel(sub, pSVar13, (bool)(char)local_5c);
		item = AottgSettingsKeybindsCategory.SearchNode(id, pSVar13, (String)local_58);
		if (nodes != null) {
			piVar1 = &nodes._version;
			*piVar1 = *piVar1 + 1;
			pGVar7 = nodes._items;
			if (pGVar7 != null) {
				uVar3 = nodes._size;
				if (uVar3 < (uint)pGVar7.Length) {
					nodes._size = uVar3 + 1;
					pGVar7[(int)uVar3] = item;
					pIVar10 = local_68;
				}
				else {
					nodes.AddWithResize((object)item);
					pIVar10 = local_68;
				}
				goto joined_r0x05e45031;
			}
		}
		throw new NullReferenceException();
		while (true) {
			lVar16 = lVar16 + 0x10;
			if (!(uVar14 * 0x10 != lVar16)) break;
	label_05e45370: ;
			if (*(IDisposable*)((long)&pIVar6.interfaceType + lVar16) == typeof(IDisposable)) {
				pVVar11 = pIVar5.vtable + *(int)((long)&pIVar6.offset + lVar16);
				goto label_05e4539d;
			}
		}
	label_05e4537f: ;
	label_05e4539d: ;
		pIVar10.Dispose();
		return;
	}

	[Token(Token = "0x60008B1")]
	[Address(RVA = "0x5D454B0", Offset = "0x5D444B0", VA = "0x5D454B0")]
	private static GisketchNodeDefinition SearchNode(string id, string label, string tabId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$SearchNode): clean
		String str2;
		String pSVar1;
		GisketchNodeDefinition __this;
		String[] values;
		String pSVar2;
		GisketchSearchDefinition pGVar3;

		str2 = AottgSettingsKeybindsCategory.GroupTitle(tabId);
		pSVar2 = "Top";
		pSVar1 = "KeybindsButton";
		pSVar1 = String.Concat("SettingsPopup.", pSVar2, ".", pSVar1);
		pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
		__this = new GisketchNodeDefinition();
		if (__this != null) {
			__this.type = "Panel";
			__this.id = id;
			values = (String[])new string[7];
			pSVar2 = "Settings";
			pSVar2 = String.Concat("Common.", pSVar2);
			pSVar2 = Aottg2GisketchLocale.Text(pSVar2);
			if (values != null) {
				if ((int)values.Length != 0) {
					values[0] = pSVar2;
					if ((values.Length & 0xfffffffe) != 0) {
						values[1] = " ";
						if (2 < (uint)values.Length) {
							values[2] = pSVar1;
							if ((values.Length & 0xfffffffc) != 0) {
								values[3] = " ";
								if (4 < (uint)values.Length) {
									values[4] = str2;
									if (5 < (uint)values.Length) {
										values[5] = " ";
										if (6 < (uint)values.Length) {
											values[6] = label;
											pSVar2 = String.Concat(values);
											pSVar1 = String.Concat(pSVar1, " > ", str2);
											pGVar3 = AottgUi.Search(label, pSVar2, false, "buttonA", "setting", "keybinds", pSVar1, false);
											__this.search = pGVar3;
											return __this;
										}
									}
								}
							}
						}
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60008B2")]
	[Address(RVA = "0x5D43620", Offset = "0x5D42620", VA = "0x5D43620")]
	private static AottgSettingsGroup Group(string tabId, BaseSettingsContainer container, bool titanLabels, params AottgComponent[] extraRows)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$Group): clean
		uint uVar1;
		AottgSettingsRowBlock __this;
		List<object> __this_00;
		String id;
		Object[] rows;
		AottgSettingsGroup __this_01;
		AottgSettingsRowBlock[] pGVar2;
		ulong uVar3;

		__this_00 = new List<AottgComponent>();
		if (container != null) {
			if ((typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor == 0) {
			}
			AottgSettingsKeybindsCategory.AddKeybindRows((List<AottgComponent>)__this_00, tabId, container, titanLabels);
		}
		if (extraRows == null) {
			id = String.Concat("settings-keybinds-", tabId);
			if (__this_00 == null) goto label_05e437d7;
		}
		else {
			if (__this_00 == null) goto label_05e437d7;
			__this_00.AddRange((IEnumerable<T>)extraRows);
			id = String.Concat("settings-keybinds-", tabId);
		}
		rows = __this_00.ToArray();
		__this_01 = new AottgSettingsGroup(id, (AottgComponent[])rows);
		if ((__this_01 != null) &&(pGVar2 = __this_01._blocks, pGVar2 != null)) {
			uVar3 = 0;
			do {
				uVar1 = (uint)pGVar2.Length;
				if ((long)(int)uVar1 <= (long)uVar3) {
					return __this_01;
				}
				if (uVar1 <= uVar3) {
					throw new IndexOutOfRangeException();
				}
				__this = pGVar2[uVar3];
				if (__this != null) {
					if (__this == null) break;
					__this.SetLayoutMode(0);
					pGVar2 = __this_01._blocks;
				}
				uVar3 = uVar3 + 1;
			} while (pGVar2 != null);
		}
	label_05e437d7: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60008B3")]
	[Address(RVA = "0x5D45A20", Offset = "0x5D44A20", VA = "0x5D45A20")]
	private static void AddKeybindRows(List<AottgComponent> rows, string tabId, BaseSettingsContainer container, bool titanLabels)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$AddKeybindRows): 19 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		OrderedDictionary pSVar4;
		Il2CppClass pIVar5;
		Il2CppRuntimeInterfaceOffsetPair pIVar6;
		KeybindSetting setting;
		Object[] pSVar7;
		bool bVar8;
		VirtualInvokeData pVVar9;
		object pIVar10;
		MethodInfo pMVar11;
		String pSVar12;
		String label;
		AottgKeybindSettingRow __this;
		undefined7 in_register_00000009;
		ulong uVar13;
		MethodInfo labelName;
		MethodInfo pMVar14;
		long lVar15;
		object local_88;
		uint local_7c;
		String local_78;
		long local_70;
		String local_68;
		object local_60;
		List<object> local_58;
		MethodInfo local_50;
		byte local_40;
		object* local_38;

		local_7c = (undefined4)CONCAT71(in_register_00000009, titanLabels);
		local_78 = tabId;
		if (Il2CppMethodInitialized_075485e6 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_AottgComponent_Add) ;
			Il2CppMethodInitialized_075485e6 = true;
		}
		local_88 = null;
		local_60 = null;
		local_68 = AottgSettingsGroup.Pascal(local_78);
		if (container != null) {
			pSVar4 = container.Settings;
			local_58 = (List<object>)rows;
			if (pSVar4 != null) {
				local_88 = (object)pSVar4.GetEnumerator();
				local_40 = (byte)&local_88;
				local_38 = &local_60;
				if (local_88 != null) {
					local_70 = 0;
					local_40 = (byte)&local_88;
					do {
						pIVar10 = local_88;
						pIVar5 = local_88.klass;
						uVar13 = (ulong)(pIVar5._2).interface_offsets_count;
						bVar8 = pIVar10.Dispose();
						pIVar10 = local_88;
						if (!bVar8) {
							pIVar10 = (local_88 as IDisposable);
							local_60 = pIVar10;
							if (pIVar10 == null) goto label_05e45f96;
							pIVar5 = pIVar10.klass;
							uVar13 = (ulong)(pIVar5._2).interface_offsets_count;
							if (uVar13 == 0) goto label_05e45f6f;
							pIVar6 = (pIVar5._1).interfaceOffsets;
							lVar15 = 0;
							goto label_05e45f60;
						}
						if (local_88 == null) {
							throw new NullReferenceException();
						}
						pIVar5 = local_88.klass;
						uVar13 = (ulong)(pIVar5._2).interface_offsets_count;
						pIVar10 = pIVar10.Dispose();
						if (pIVar10 == null) {
							throw new NullReferenceException();
						}
						if ((pIVar10.klass._1).element_class !=(typeof(DictionaryEntry)._1).element_class) {
							throw new InvalidCastException();
						}
						pMVar11 = il2cpp_vm_Object_Unbox(pIVar10);
						setting = (KeybindSetting)pMVar11.virtualMethodPointer;
						if (setting != null) {
							bVar2 = (typeof(KeybindSetting)._2).typeHierarchyDepth;
							if ((bVar2 <= (setting.klass._2).typeHierarchyDepth) &&((setting.klass._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(KeybindSetting))) {
								pMVar14 = (MethodInfo)pMVar11.methodPointer;
								if ((pMVar14 != null) &&((String)pMVar14.methodPointer != g_data_07556758)) {
									throw new InvalidCastException();
								}
								if ((typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor == 0) {
								}
								labelName = pMVar14;
								if ((char)local_7c != false) {
									bVar8 = ((String)pMVar14 == "CoverNape1");
									if (bVar8) {
										labelName = (MethodInfo *)"CoverNape";
									}
								}
								bVar8 = (bool)(char)local_7c;
								local_50 = (MethodInfo)AottgSettingsKeybindsCategory.KeybindLabelKey(local_68, (String)labelName, (bool)(char)local_7c);
								pMVar11 = (MethodInfo)AottgSettingsCategoryPage.SafeId((String)pMVar14);
								pSVar12 = String.Concat("settings-keybinds-", local_78, "-", (String)pMVar11);
								label = AottgSettingsKeybindsCategory.KeybindLabel(local_68, (String)labelName, bVar8);
								__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgKeybindSettingRow));
								__this = new AottgKeybindSettingRow(pSVar12, label, setting);
								if (__this == null) {
									throw new NullReferenceException();
								}
								__this.WarnOnConflict = true;
								__this.ConflictScopeId = local_78;
								pMVar11 = local_50;
								__this.LabelKey = (String)local_50;
								pMVar14 = local_50;
								pSVar12 = AottgSettingsKeybindsCategory.TooltipKeyIfPresent((String)pMVar11);
								__this.TooltipKey = pSVar12;
								pMVar11 = MethodInfo_System_Collections_Generic_List_AottgComponent_Add;
								if (local_58 == null) {
	label_05e45ebb: ;
									throw new NullReferenceException();
								}
								piVar1 = &local_58._version;
								*piVar1 = *piVar1 + 1;
								pSVar7 = local_58._items;
								if (pSVar7 == null) goto label_05e45ebb;
								uVar3 = local_58._size;
								if (uVar3 < (uint)pSVar7.Length) {
									local_58._size = uVar3 + 1;
									pSVar7[(int)uVar3] = (object)__this;
								}
								else {
									local_58.AddWithResize((object)__this);
								}
							}
						}
					} while (local_88 != null);
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
		while (true) {
			lVar15 = lVar15 + 0x10;
			if (!(uVar13 * 0x10 != lVar15)) break;
	label_05e45f60: ;
			if (*(IDisposable*)((long)&pIVar6.interfaceType + lVar15) == typeof(IDisposable)) {
				pVVar9 = pIVar5.vtable + *(int)((long)&pIVar6.offset + lVar15);
				goto label_05e45f8d;
			}
		}
	label_05e45f6f: ;
	label_05e45f8d: ;
		pIVar10.Dispose();
	label_05e45f96: ;
		if (local_70 != 0) {
			throw;
		}
		return;
	}

	[Token(Token = "0x60008B4")]
	[Address(RVA = "0x5D45830", Offset = "0x5D44830", VA = "0x5D45830")]
	private static string RowId(string tabId, string name)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$RowId): clean
		String pSVar1;

		pSVar1 = AottgSettingsCategoryPage.SafeId(name);
		pSVar1 = String.Concat("settings-keybinds-", tabId, "-", pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x60008B5")]
	[Address(RVA = "0x5D458A0", Offset = "0x5D448A0", VA = "0x5D458A0")]
	private static string Sub(string tabId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$Sub): clean
		String pSVar1;

		return pSVar1;
	}

	[Token(Token = "0x60008B6")]
	[Address(RVA = "0x5D44850", Offset = "0x5D43850", VA = "0x5D44850")]
	private static string GroupTitle(string tabId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$GroupTitle): clean
		String str3;
		String pSVar1;

		str3 = AottgSettingsGroup.Pascal(tabId);
		pSVar1 = "Groups.Keybinds";
		pSVar1 = String.Concat("SettingsPopup.", pSVar1, ".", str3);
		pSVar1 = Aottg2GisketchLocale.Text(pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x60008B7")]
	[Address(RVA = "0x5D45920", Offset = "0x5D44920", VA = "0x5D45920")]
	private static string KeybindLabel(string sub, string labelName, bool titanLabels)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$KeybindLabel): clean
		String pSVar1;
		String fallback;

		pSVar1 = AottgSettingsKeybindsCategory.KeybindLabelKey(sub, labelName, titanLabels);
		fallback = AottgSettingsKeybindsCategory.KeybindLabelFallback(labelName, titanLabels);
		if (pSVar1 == null) {
			return fallback;
		}
		pSVar1 = Aottg2GisketchLocale.Text(pSVar1, fallback);
		return pSVar1;
	}

	[Token(Token = "0x60008B8")]
	[Address(RVA = "0x5D458B0", Offset = "0x5D448B0", VA = "0x5D458B0")]
	private static string KeybindLabelName(string name, bool titanLabels)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$KeybindLabelName): clean
		bool bVar1;

		if (titanLabels) {
			bVar1 = (name == "CoverNape1");
			if (bVar1) {
				name = "CoverNape";
			}
		}
		return name;
	}

	[Token(Token = "0x60008B9")]
	[Address(RVA = "0x5D46370", Offset = "0x5D45370", VA = "0x5D46370")]
	private static bool IsRawAttackLabel(string labelName, bool titanLabels)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$IsRawAttackLabel): clean
		bool bVar1;

		if (titanLabels) {
			if (labelName == null) {
				throw new NullReferenceException();
			}
			bVar1 = labelName.StartsWith("Attack");
			return bVar1;
		}
		return false;
	}

	[Token(Token = "0x60008BA")]
	[Address(RVA = "0x5D46290", Offset = "0x5D45290", VA = "0x5D46290")]
	private static string KeybindLabelFallback(string labelName, bool titanLabels)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$KeybindLabelFallback): clean
		uint uVar1;
		bool bVar2;
		String pSVar3;

		if (Il2CppMethodInitialized_075485ec == false) {
			Il2CppMethodInitialized_075485ec = true;
			uVar1 = (typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (!titanLabels) {
			return labelName;
		}
		if (labelName != null) {
			bVar2 = labelName.StartsWith("Attack");
			if (!bVar2) {
				return labelName;
			}
			if ("Attack" != null) {
				pSVar3 = labelName.Substring(("Attack".fields)._stringLength);
				return pSVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60008BB")]
	[Address(RVA = "0x5D46140", Offset = "0x5D45140", VA = "0x5D46140")]
	private static string TooltipKeyIfPresent(string labelKey)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$TooltipKeyIfPresent): clean
		String subCategory;
		String item;
		bool bVar1;
		String pSVar2;
		Char[] separator;
		String[] pSVar3;

		if (labelKey == null) {
			return null;
		}
		pSVar2 = String.Concat(labelKey, "Tooltip");
		separator = (Char[])new char[1];
		if (separator != null) {
			if ((int)separator.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			separator[0] = 0x2e;
			if ((pSVar2 != null) &&(pSVar3 = pSVar2.Split(separator, 3), pSVar3 != null)) {
				if ((int)pSVar3.Length != 3) {
					return null;
				}
				pSVar2 = pSVar3[0];
				subCategory = pSVar3[1];
				item = pSVar3[2];
				bVar1 = UIManager.HasLocale(pSVar2, subCategory, item, "English");
				if (bVar1) {
					pSVar2 = String.Concat(labelKey, "Tooltip");
					return pSVar2;
				}
				return null;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60008BC")]
	[Address(RVA = "0x5D45FE0", Offset = "0x5D44FE0", VA = "0x5D45FE0")]
	private static string KeybindLabelKey(string sub, string labelName, bool titanLabels)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$KeybindLabelKey): clean
		uint uVar1;
		bool bVar2;
		String pSVar3;

		if (Il2CppMethodInitialized_075485ee == false) {
			Il2CppMethodInitialized_075485ee = true;
			uVar1 = (typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (titanLabels) {
			if (labelName == null) {
				throw new NullReferenceException();
			}
			bVar2 = labelName.StartsWith("Attack");
			pSVar3 = "Keybinds.Titan";
			if (bVar2) {
				return null;
			}
		}
		else {
			pSVar3 = String.Concat("Keybinds.", sub);
		}
		pSVar3 = String.Concat("SettingsPopup.", pSVar3, ".", labelName);
		return pSVar3;
	}

	[Token(Token = "0x60008BD")]
	[Address(RVA = "0x5D43440", Offset = "0x5D42440", VA = "0x5D43440")]
	private static AottgComponent[] GeneralSpecialRows(InputSettings settings)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$GeneralSpecialRows): 2 lines keep C-only constructs
		GeneralInputSettings pSVar1;
		AottgComponent[] pGVar2;
		object pIVar3;
		object pIVar4;

		if (settings == null) {
			pGVar2 = (AottgComponent[])new AottgComponent[0];
			return pGVar2;
		}
		pGVar2 = (AottgComponent[])new AottgComponent[2];
		pSVar1 = settings.General;
		if (pSVar1 == null) {
	label_05e435fc: ;
			throw new NullReferenceException();
		}
		pIVar3 = (object)AottgSettingsRows.Switch("settings-keybinds-general-tap-scoreboard", "Keybinds.General", "TapScoreboard", pSVar1.TapScoreboard, "TapScoreboardTooltip", null);
		if (pGVar2 == null) goto label_05e435fc;
		if (pIVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((pGVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05e43606;
		}
		if ((int)pGVar2.Length != 0) {
			pGVar2[0] = (AottgComponent)pIVar3;
			pSVar1 = settings.General;
			if (pSVar1 == null) goto label_05e435fc;
			pIVar3 = (object)AottgSettingsRows.Switch("settings-keybinds-general-tap-map", "Keybinds.General", "TapMap", pSVar1.TapMap, "TapMapTooltip", null);
			if (pIVar3 != null) {
				pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((pGVar2.obj).klass)._1).element_class);
				if (pIVar4 == null) {
	label_05e43606: ;
					pIVar3 = new ArrayTypeMismatchException();
					throw pIVar3;
				}
			}
			if ((pGVar2.Length & 0xfffffffe) != 0) {
				pGVar2[1] = (AottgComponent)pIVar3;
				return pGVar2;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60008BE")]
	[Address(RVA = "0x5D437F0", Offset = "0x5D427F0", VA = "0x5D437F0")]
	private static AottgComponent[] HumanSpecialRows(InputSettings settings)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$HumanSpecialRows): 8 lines keep C-only constructs
		HumanInputSettings pSVar1;
		AottgComponent[] pGVar2;
		object pIVar3;
		object pIVar4;

		if (settings == null) {
			pGVar2 = (AottgComponent[])new AottgComponent[0];
			return pGVar2;
		}
		pGVar2 = (AottgComponent[])new AottgComponent[8];
		pSVar1 = settings.Human;
		if (pSVar1 == null) {
	label_05e43d3e: ;
			throw new NullReferenceException();
		}
		pIVar3 = (object)AottgSettingsRows.Switch("settings-keybinds-human-dash-double-tap", "Keybinds.Human", "DashDoubleTap", pSVar1.DashDoubleTap, null, null);
		if (pGVar2 == null) goto label_05e43d3e;
		if (pIVar3 != null) {
			pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((pGVar2.obj).klass)._1).element_class);
			if (pIVar4 == null) goto label_05e43d48;
		}
		if ((int)pGVar2.Length != 0) {
			pGVar2[0] = (AottgComponent)pIVar3;
			pSVar1 = settings.Human;
			if (pSVar1 == null) goto label_05e43d3e;
			pIVar3 = (object)AottgSettingsRows.Switch("settings-keybinds-human-wall-slide-dash", "Keybinds.Human", "WallSlideDash", pSVar1.WallSlideDash, "WallSlideDashTooltip", null);
			if (pIVar3 != null) {
				pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((pGVar2.obj).klass)._1).element_class);
				if (pIVar4 == null) goto label_05e43d48;
			}
			if ((pGVar2.Length & 0xfffffffe) == 0) goto label_05e43d43;
			pGVar2[1] = (AottgComponent)pIVar3;
			pSVar1 = settings.Human;
			if (pSVar1 == null) goto label_05e43d3e;
			pIVar3 = (object)AottgSettingsRows.Select("settings-keybinds-human-wall-slide-attach", "Keybinds.Human", "WallSlideAttach", pSVar1.WallSlideAttach, "WallSlideAttachTooltip", null);
			if (pIVar3 != null) {
				pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((pGVar2.obj).klass)._1).element_class);
				if (pIVar4 == null) goto label_05e43d48;
			}
			if ((uint)pGVar2.Length < 3) goto label_05e43d43;
			pGVar2[2] = (AottgComponent)pIVar3;
			pSVar1 = settings.Human;
			if (pSVar1 == null) goto label_05e43d3e;
			pIVar3 = (object)AottgSettingsRows.Switch("settings-keybinds-human-auto-use-gas", "Keybinds.Human", "AutoUseGas", pSVar1.AutoUseGas, "AutoUseGasTooltip", null);
			if (pIVar3 != null) {
				pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((pGVar2.obj).klass)._1).element_class);
				if (pIVar4 == null) goto label_05e43d48;
			}
			if ((pGVar2.Length & 0xfffffffc) == 0) goto label_05e43d43;
			pGVar2[3] = (AottgComponent)pIVar3;
			pSVar1 = settings.Human;
			if (pSVar1 == null) goto label_05e43d3e;
			pIVar3 = (object)AottgSettingsRows.Switch("settings-keybinds-human-auto-refill-gas", "Keybinds.Human", "AutoRefillGas", pSVar1.AutoRefillGas, null, null);
			if (pIVar3 != null) {
				pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((pGVar2.obj).klass)._1).element_class);
				if (pIVar4 == null) goto label_05e43d48;
			}
			if ((uint)pGVar2.Length < 5) goto label_05e43d43;
			pGVar2[4] = (AottgComponent)pIVar3;
			pSVar1 = settings.Human;
			if (pSVar1 == null) goto label_05e43d3e;
			pIVar3 = (object)AottgSettingsRows.Switch("settings-keybinds-human-swap-ts-attack-special", "Keybinds.Human", "SwapTSAttackSpecial", pSVar1.SwapTSAttackSpecial, "SwapTSAttackSpecialTooltip", null);
			if (pIVar3 != null) {
				pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((pGVar2.obj).klass)._1).element_class);
				if (pIVar4 == null) goto label_05e43d48;
			}
			if ((uint)pGVar2.Length < 6) goto label_05e43d43;
			pGVar2[5] = (AottgComponent)pIVar3;
			pSVar1 = settings.Human;
			if (pSVar1 == null) goto label_05e43d3e;
			pIVar3 = (object)AottgSettingsRows.Switch("settings-keybinds-human-reel-in-holding", "Keybinds.Human", "ReelInHolding", pSVar1.ReelInHolding, "ReelInHoldingTooltip", null);
			if (pIVar3 != null) {
				pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((pGVar2.obj).klass)._1).element_class);
				if (pIVar4 == null) goto label_05e43d48;
			}
			if (6 < (uint)pGVar2.Length) {
				pGVar2[6] = (AottgComponent)pIVar3;
				pSVar1 = settings.Human;
				if (pSVar1 == null) goto label_05e43d3e;
				pIVar3 = (object)AottgSettingsRows.Slider("settings-keybinds-human-reel-out-scroll-smoothing", "Keybinds.Human", "ReelOutScrollSmoothing", pSVar1.ReelOutScrollSmoothing, "ReelOutScrollSmoothingTooltip", null);
				if (pIVar3 != null) {
					pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((pGVar2.obj).klass)._1).element_class);
					if (pIVar4 == null) {
	label_05e43d48: ;
						pIVar3 = new ArrayTypeMismatchException();
						throw pIVar3;
					}
				}
				if ((pGVar2.Length & 0xfffffff8) != 0) {
					pGVar2[7] = (AottgComponent)pIVar3;
					return pGVar2;
				}
			}
		}
	label_05e43d43: ;
		throw new IndexOutOfRangeException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsKeybindsCategory.c.

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory.<>c__DisplayClass9_0$$.ctor: clean
	private void c__DisplayClass9_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory$$.cctor: clean
	static AottgSettingsKeybindsCategory()
	{
		Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_StaticFields pGVar1;
		String[] pSVar2;
		System_String_array_array pSVar3;

		pSVar2 = (String[])new string[6];
		if (pSVar2 == null) goto label_05e46a5a;
		if ((int)pSVar2.Length != 0) {
			pSVar2[0] = "general";
			if ((pSVar2.Length & 0xfffffffe) != 0) {
				pSVar2[1] = "interaction";
				if (2 < (uint)pSVar2.Length) {
					pSVar2[2] = "human";
					if ((pSVar2.Length & 0xfffffffc) != 0) {
						pSVar2[3] = "titan";
						if (4 < (uint)pSVar2.Length) {
							pSVar2[4] = "annie-shifter";
							if (5 < (uint)pSVar2.Length) {
								pSVar2[5] = "eren-shifter";
								AottgSettingsKeybindsCategory.TabIds = pSVar2;
								pSVar3 = (System_String_array_array)new string[][8];
								pSVar2 = (String[])new string[2];
								if (pSVar2 == null) goto label_05e46a5a;
								if ((int)pSVar2.Length != 0) {
									pSVar2[0] = "dash-double-tap";
									if ((pSVar2.Length & 0xfffffffe) != 0) {
										pSVar2[1] = "DashDoubleTap";
										if (pSVar3 == null) {
	label_05e46a5a: ;
											throw new NullReferenceException();
										}
										if ((int)pSVar3.Length != 0) {
											pSVar3[0] = pSVar2;
											pSVar2 = (String[])new string[2];
											if (pSVar2 == null) goto label_05e46a5a;
											if ((int)pSVar2.Length != 0) {
												pSVar2[0] = "wall-slide-dash";
												if ((pSVar2.Length & 0xfffffffe) != 0) {
													pSVar2[1] = "WallSlideDash";
													if ((pSVar3.Length & 0xfffffffe) != 0) {
														pSVar3[1] = pSVar2;
														pSVar2 = (String[])new string[2];
														if (pSVar2 == null) goto label_05e46a5a;
														if ((int)pSVar2.Length != 0) {
															pSVar2[0] = "wall-slide-attach";
															if ((pSVar2.Length & 0xfffffffe) != 0) {
																pSVar2[1] = "WallSlideAttach";
																if (2 < (uint)pSVar3.Length) {
																	pSVar3[2] = pSVar2;
																	pSVar2 = (String[])new string[2];
																	if (pSVar2 == null) goto label_05e46a5a;
																	if ((int)pSVar2.Length != 0) {
																		pSVar2[0] = "auto-use-gas";
																		if ((pSVar2.Length & 0xfffffffe) != 0) {
																			pSVar2[1] = "AutoUseGas";
																			if ((pSVar3.Length & 0xfffffffc) != 0) {
																				pSVar3[3] = pSVar2;
																				pSVar2 = (String[])new string[2];
																				if (pSVar2 == null) goto label_05e46a5a;
																				if ((int)pSVar2.Length != 0) {
																					pSVar2[0] = "auto-refill-gas";
																					if ((pSVar2.Length & 0xfffffffe) != 0) {
																						pSVar2[1] = "AutoRefillGas";
																						if (4 < (uint)pSVar3.Length) {
																							pSVar3[4] = pSVar2;
																							pSVar2 = (String[])new string[2];
																							if (pSVar2 == null) goto label_05e46a5a;
																							if ((int)pSVar2.Length != 0) {
																								pSVar2[0] = "swap-ts-attack-special";
																								if ((pSVar2.Length & 0xfffffffe) != 0) {
																									pSVar2[1] = "SwapTSAttackSpecial";
																									if (5 < (uint)pSVar3.Length) {
																										pSVar3[5] = pSVar2;
																										pSVar2 = (String[])new string[2];
																										if (pSVar2 == null) goto label_05e46a5a;
																										if ((int)pSVar2.Length != 0) {
																											pSVar2[0] = "reel-in-holding";
																											if ((pSVar2.Length & 0xfffffffe) != 0) {
																												pSVar2[1] = "ReelInHolding";
																												if (6 < (uint)pSVar3.Length) {
																													pSVar3[6] = pSVar2;
																													pSVar2 = (String[])new string[2];
																													if (pSVar2 == null) goto label_05e46a5a;
																													if ((int)pSVar2.Length != 0) {
																														pSVar2[0] = "reel-out-scroll-smoothing";
																														if ((pSVar2.Length & 0xfffffffe) != 0) {
																															pSVar2[1] = "ReelOutScrollSmoothing";
																															if ((pSVar3.Length & 0xfffffff8) != 0) {
																																pSVar3[7] = pSVar2;
																																pGVar1 = typeof(AottgSettingsKeybindsCategory) .static_fields;
																												pGVar1.HumanSpecialItems = pSVar3;
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
		throw new IndexOutOfRangeException();
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory.<>c$$.cctor: 1 lines keep C-only constructs
	private static void c__cctor()
	{
		object __this;

		__this = (object)il2cpp_codegen_object_new(typeof(AottgSettingsKeybindsCategory.c));
		__this = new Object();
		AottgSettingsKeybindsCategory.c.__9 =(AottgSettingsKeybindsCategory.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory.<>c$$<Build>b__9_1: clean
	private void c__Build_b__9_1(AottgUi title)
	{
		GisketchNodeDefinition pGVar1;
		GisketchLength width;
		GisketchLength height;
		GisketchLayoutDefinition pGVar2;

		if (title != null) {
			pGVar1 = title.TextKey("SettingsPopup.Top.KeybindsButton", "settingsCategoryTitle", "settings-keybinds-title", null, null);
			width = AottgUi.Percent(100.0);
			height = AottgUi.Points(72.0);
			pGVar2 = AottgUi.Layout("Column", null, null, null, null, 0.0, width, height, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			if (pGVar1 != null) {
				pGVar1.layout = pGVar2;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory.<>c$$<Build>b__9_3: clean
	private void c__Build_b__9_3(GisketchActionContext action, String tabId)
	{


		if ((typeof(AottgSettingsKeybindsCategory)._2).cctor_finished_or_no_cctor == 0) {
		}
		AottgSettingsKeybindsCategory.SelectTab(action.GameObject, tabId);
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory.<>c__DisplayClass9_0$$<Build>b__0: 6 lines keep C-only constructs
	private void c__DisplayClass9_0__Build_b__0(AottgUi page)
	{
		float initialScrollOffset;
		object @object;
		AottgScreenSectionContext context;
		String style;
		Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c_StaticFields pGVar1;
		Action<AottgUi> pSVar2;
		GisketchLength pGVar3;
		GisketchLength pGVar4;
		GisketchLayoutDefinition pGVar5;
		AottgSettingsGroup[] groups;
		AottgVirtualSettingsScrollCategory __this_00;
		MethodInfo method_00;
		Nullable<float> SStack_60;
		String pSStack_58;
		ulong uStack_50;
		String pSStack_48;
		String pSStack_40;

		if ((typeof(AottgSettingsKeybindsCategory.c)._2). cctor_finished_or_no_cctor == 0) {
		}
		style = "clear";
		pGVar1 = typeof(AottgSettingsKeybindsCategory.c).static_fields;
		pSVar2 = pGVar1.__9__9_1;
		if (pSVar2 == null) {
			if ((typeof(AottgSettingsKeybindsCategory.c)._2). cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgSettingsKeybindsCategory.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			pSVar2 = new Action<AottgUi>(@object, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c_Build_b__9_1);
			pGVar1 = typeof(AottgSettingsKeybindsCategory.c).static_fields;
			pGVar1.__9__9_1 = pSVar2;
		}
		pGVar3 = AottgUi.Percent(100.0);
		pGVar4 = AottgUi.Points(170.0);
		pGVar5 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, pGVar3, pGVar4, null, null, null, null, 0.0, 0.0, 0.0, 582.0, 88.0, 98.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		if (page != null) {
			page.Panel(style, pSVar2, "settings-keybinds-category-header", pGVar5, null);
			method_00 = (MethodInfo *)"clear";
			pSVar2 = this.__9__2;
			if (pSVar2 == null) {
				pSVar2 = new Action<AottgUi>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c__DisplayClass9_0_Build_b__2);
				this.__9__2 = pSVar2;
			}
			pGVar3 = AottgUi.Percent(100.0);
			pGVar4 = AottgUi.Points(52.0);
			pGVar5 = AottgUi.Layout("Column", null, "Stretch", null, null, 0.0, pGVar3, pGVar4, null, null, null, null, 0.0, 0.0, 0.0, 582.0, 88.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
			page.Panel((String)method_00, pSVar2, "settings-keybinds-tab-header", pGVar5, null);
			if ((typeof(AottgSettingsKeybindsCategory)._2). cctor_finished_or_no_cctor == 0) {
			}
			AottgSettingsKeybindsCategory.AddSearchBridge(page);
			pSStack_58 = this.context._group;
			uStack_50 = *(ulong)&this.context._order;
			pSStack_48 = this.context._SectionId_k__BackingField;
			pSStack_40 = this.context._SectionTitle_k__BackingField;
			groups = (AottgSettingsGroup[])new AottgSettingsGroup[1];
			if (groups != null) {
				if ((int)groups.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				groups[0] = this.selectedGroup;
				initialScrollOffset = this.scrollOffset;
				SStack_60.hasValue = false;
				SStack_60._1_3_ = 0;
				SStack_60.value = 0.0;
				SStack_60 = new Nullable<float>(0.0);
				__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgVirtualSettingsScrollCategory));
				context._8_8_ = uStack_50;
				context._group = pSStack_58;
				context._SectionId_k__BackingField = pSStack_48;
				context._SectionTitle_k__BackingField = pSStack_40;
				__this_00 = new AottgVirtualSettingsScrollCategory(context, "keybinds", groups, "settings-keybinds-active-content", initialScrollOffset, (Nullable<float>)SStack_60);
				page.Component((AottgComponent)__this_00);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsKeybindsCategory.<>c__DisplayClass9_0$$<Build>b__2: 1 lines keep C-only constructs
	private void c__DisplayClass9_0__Build_b__2(AottgUi header)
	{
		String selectedId;
		object @object;
		String id;
		AottgSubtab[] tabs;
		Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory___c_StaticFields pGVar1;
		Action<T1, T2> __this_00;
		AottgSubtabStrip __this_01;

		tabs = AottgSettingsKeybindsCategory.Tabs();
		selectedId = this.selectedTabId;
		if ((typeof(AottgSettingsKeybindsCategory.c)._2). cctor_finished_or_no_cctor == 0) {
		}
		id = "settings-keybinds-tabs";
		pGVar1 = typeof(AottgSettingsKeybindsCategory.c).static_fields;
		__this_00 = (Action<T1, T2>)pGVar1.__9__9_3;
		if (__this_00 == null) {
			if ((typeof(AottgSettingsKeybindsCategory.c)._2). cctor_finished_or_no_cctor == 0) {
				pGVar1 = typeof(AottgSettingsKeybindsCategory.c).static_fields;
			}
			@object = (object)pGVar1.__9;
			__this_00 = new Action<GisketchActionContext, string>(@object, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsKeybindsCategory_c_Build_b__9_3);
			pGVar1 = typeof(AottgSettingsKeybindsCategory.c).static_fields;
			pGVar1.__9__9_3 = (Action<GisketchActionContext, string>)__this_00;
		}
		__this_01 = new AottgSubtabStrip(id, tabs, selectedId, (Action<GisketchActionContext, string>)__this_00);
		if (header == null) {
			throw new NullReferenceException();
		}
		header.Component((AottgComponent)__this_01);
		return;
	}
}
