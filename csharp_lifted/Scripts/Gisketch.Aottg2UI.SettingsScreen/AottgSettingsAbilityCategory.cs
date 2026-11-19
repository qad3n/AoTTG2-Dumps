// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsAbilityCategory
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsAbilityCategory.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200017E")]
internal static class AottgSettingsAbilityCategory
{
	[Token(Token = "0x6000850")]
	[Address(RVA = "0x5D39E50", Offset = "0x5D38E50", VA = "0x5D39E50")]
	public static void Build(AottgUi content, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsAbilityCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsAbilityCategory$$Build): 2 lines keep C-only constructs
		String categoryId;
		AottgSettingsGroup[] groups;
		AottgVirtualSettingsScrollCategory __this;
		String* method_00;

		if (g_data_0754859d == false) {
			method_00 = &"ability";
			g_data_0754859d = true;
		}
		groups = AottgSettingsAbilityCategory.Groups();
		categoryId = "ability";
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgVirtualSettingsScrollCategory));
		__this = new AottgVirtualSettingsScrollCategory(context, categoryId, groups, null, 0.0, (Nullable<float>)0x0);
		if (content == null) {
			throw new NullReferenceException();
		}
		content.Component((AottgComponent)__this);
		return;
	}

	[Token(Token = "0x6000851")]
	[Address(RVA = "0x5D3A820", Offset = "0x5D39820", VA = "0x5D3A820")]
	public static void SyncState(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsAbilityCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsAbilityCategory$$SyncState): clean
		AottgSettingsGroup[] groups;

		groups = AottgSettingsAbilityCategory.Groups();
		AottgSettingsCategoryPage.SyncState(root, groups);
		return;
	}

	[Token(Token = "0x6000852")]
	[Address(RVA = "0x5D39F20", Offset = "0x5D38F20", VA = "0x5D39F20")]
	private static AottgSettingsGroup[] Groups()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsAbilityCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsAbilityCategory$$Groups): 11 lines keep C-only constructs
		AbilitySettings pSVar1;
		String pSVar2;
		String item;
		String id;
		String id_00;
		AottgSettingsGroup[] pGVar3;
		AottgComponent[] pGVar4;
		Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory___c_StaticFields pGVar5;
		Func<string> __this;
		object pIVar6;
		object pIVar7;
		AottgBombStatSettingRow pGVar8;
		AottgSettingsGroup pGVar9;
		MethodInfo pMVar10;
		ColorSetting setting;
		BoolSetting pSVar11;
		IntSetting pSVar12;

		pSVar1 = SettingsManager.AbilitySettings;
		pGVar3 = (AottgSettingsGroup[])new AottgSettingsGroup[3];
		pGVar4 = (AottgComponent[])new AottgComponent[5];
		if ((typeof(AottgSettingsAbilityCategory.c)._2). cctor_finished_or_no_cctor == 0) {
		}
		id_00 = "settings-ability-unused-points";
		id = "settings-ability-bomb-stats";
		item = "UnusedPoints";
		pSVar2 = "Ability";
		pGVar5 = typeof(AottgSettingsAbilityCategory.c).static_fields;
		__this = pGVar5.__9__2_0;
		if (__this == null) {
			if ((typeof(AottgSettingsAbilityCategory.c)._2). cctor_finished_or_no_cctor == 0) {
				pGVar5 = typeof(AottgSettingsAbilityCategory.c).static_fields;
			}
			pIVar6 = (object)pGVar5.__9;
			__this = new Func<string>(pIVar6, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsAbilityCategory_c_Groups_b__2_0);
			pGVar5 = typeof(AottgSettingsAbilityCategory.c).static_fields;
			pGVar5.__9__2_0 = __this;
		}
		pIVar6 = (object)AottgSettingsRows.Dynamic(id_00, pSVar2, item, __this, "20", "settings-ability-bomb-unused-points.value", null);
		if (pGVar4 == null) goto label_05e3a76c;
		if (pIVar6 != null) {
			pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((pGVar4.obj).klass)._1).element_class);
			if (pIVar7 == null) goto label_05e3a75d;
		}
		if ((int)pGVar4.Length == 0) goto label_05e3a758;
		pGVar4[0] = (AottgComponent)pIVar6;
		pSVar2 = "settings-ability-bomb-radius";
		if (pSVar1 == null) {
			pSVar12 = null;
		}
		else {
			pSVar12 = pSVar1.BombRadius;
		}
		pGVar8 = new AottgBombStatSettingRow(pSVar2, pSVar12, 0);
		if (pGVar8 != null) {
			pIVar6 = il2cpp_vm_Object_IsInst((object)pGVar8, (((pGVar4.obj).klass)._1).element_class);
			if (pIVar6 == null) goto label_05e3a75d;
		}
		if ((pGVar4.Length & 0xfffffffe) == 0) goto label_05e3a758;
		pGVar4[1] = (AottgComponent)pGVar8;
		pSVar2 = "settings-ability-bomb-range";
		if (pSVar1 == null) {
			pSVar12 = null;
		}
		else {
			pSVar12 = pSVar1.BombRange;
		}
		pGVar8 = new AottgBombStatSettingRow(pSVar2, pSVar12, 1);
		if (pGVar8 != null) {
			pIVar6 = il2cpp_vm_Object_IsInst((object)pGVar8, (((pGVar4.obj).klass)._1).element_class);
			if (pIVar6 == null) goto label_05e3a75d;
		}
		if ((uint)pGVar4.Length < 3) goto label_05e3a758;
		pGVar4[2] = (AottgComponent)pGVar8;
		pSVar2 = "settings-ability-bomb-speed";
		if (pSVar1 == null) {
			pSVar12 = null;
		}
		else {
			pSVar12 = pSVar1.BombSpeed;
		}
		pGVar8 = new AottgBombStatSettingRow(pSVar2, pSVar12, 2);
		if (pGVar8 != null) {
			pIVar6 = il2cpp_vm_Object_IsInst((object)pGVar8, (((pGVar4.obj).klass)._1).element_class);
			if (pIVar6 == null) goto label_05e3a75d;
		}
		if ((pGVar4.Length & 0xfffffffc) == 0) goto label_05e3a758;
		pGVar4[3] = (AottgComponent)pGVar8;
		pSVar2 = "settings-ability-bomb-cooldown";
		if (pSVar1 == null) {
			pSVar12 = null;
		}
		else {
			pSVar12 = pSVar1.BombCooldown;
		}
		pMVar10 = (MethodInfo)0x3;
		pGVar8 = new AottgBombStatSettingRow(pSVar2, pSVar12, 3);
		if (pGVar8 != null) {
			pIVar6 = il2cpp_vm_Object_IsInst((object)pGVar8, (((pGVar4.obj).klass)._1).element_class);
			if (pIVar6 == null) goto label_05e3a75d;
		}
		if ((uint)pGVar4.Length < 5) goto label_05e3a758;
		pGVar4[4] = (AottgComponent)pGVar8;
		pGVar9 = new AottgSettingsGroup(id, pGVar4);
		if (pGVar3 == null) {
	label_05e3a76c: ;
			throw new NullReferenceException();
		}
		if ((int)pGVar3.Length == 0) goto label_05e3a758;
		pGVar3[0] = pGVar9;
		pGVar4 = (AottgComponent[])new AottgComponent[3];
		pSVar2 = "settings-ability-bomb-visuals";
		if (pSVar1 == null) {
			setting = null;
		}
		else {
			setting = pSVar1.BombColor;
		}
		pIVar6 = (object)AottgSettingsRows.Color("settings-ability-bomb-color", "Ability", "BombColor", setting, null, null);
		if (pGVar4 == null) goto label_05e3a76c;
		if (pIVar6 != null) {
			pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((pGVar4.obj).klass)._1).element_class);
			if (pIVar7 == null) goto label_05e3a75d;
		}
		if ((int)pGVar4.Length == 0) goto label_05e3a758;
		pGVar4[0] = (AottgComponent)pIVar6;
		if (pSVar1 == null) {
			pSVar11 = null;
		}
		else {
			pSVar11 = pSVar1.ShowBombColors;
		}
		pIVar6 = (object)AottgSettingsRows.Switch("settings-ability-show-bomb-colors", "Ability", "ShowBombColors", pSVar11, null, null);
		if (pIVar6 != null) {
			pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((pGVar4.obj).klass)._1).element_class);
			if (pIVar7 == null) goto label_05e3a75d;
		}
		if ((pGVar4.Length & 0xfffffffe) == 0) goto label_05e3a758;
		pGVar4[1] = (AottgComponent)pIVar6;
		if (pSVar1 == null) {
			pMVar10 = null;
		}
		else {
			pMVar10 = (MethodInfo)pSVar1.UseOldEffect;
		}
		pIVar6 = (object)AottgSettingsRows.Switch("settings-ability-use-old-effect", "Ability", "UseOldEffect", (BoolSetting)pMVar10, null, null);
		if (pIVar6 != null) {
			pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((pGVar4.obj).klass)._1).element_class);
			if (pIVar7 == null) goto label_05e3a75d;
		}
		if (2 < (uint)pGVar4.Length) {
			pGVar4[2] = (AottgComponent)pIVar6;
			pGVar9 = new AottgSettingsGroup(pSVar2, pGVar4);
			if ((pGVar3.Length & 0xfffffffe) == 0) goto label_05e3a758;
			pGVar3[1] = pGVar9;
			pGVar4 = (AottgComponent[])new AottgComponent[2];
			pSVar2 = "settings-ability-toggles";
			if (pSVar1 == null) {
				pSVar11 = null;
			}
			else {
				pSVar11 = pSVar1.CursorCooldown;
			}
			pIVar6 = (object)AottgSettingsRows.Switch("settings-ability-cursor-cooldown", "Ability", "CursorCooldown", pSVar11, null, null);
			if (pGVar4 == null) goto label_05e3a76c;
			if (pIVar6 != null) {
				pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((pGVar4.obj).klass)._1).element_class);
				if (pIVar7 == null) goto label_05e3a75d;
			}
			if ((int)pGVar4.Length != 0) {
				pGVar4[0] = (AottgComponent)pIVar6;
				if (pSVar1 == null) {
					pMVar10 = null;
				}
				else {
					pMVar10 = (MethodInfo)pSVar1.BombCollision;
				}
				pIVar6 = (object)AottgSettingsRows.Switch("settings-ability-bomb-collision", "Ability", "BombCollision", (BoolSetting)pMVar10, null, null);
				if (pIVar6 != null) {
					pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((pGVar4.obj).klass)._1).element_class);
					if (pIVar7 == null) {
	label_05e3a75d: ;
						pIVar6 = new ArrayTypeMismatchException();
						throw pIVar6;
					}
				}
				if ((pGVar4.Length & 0xfffffffe) != 0) {
					pGVar4[1] = (AottgComponent)pIVar6;
					pGVar9 = new AottgSettingsGroup(pSVar2, pGVar4);
					if (2 < (uint)pGVar3.Length) {
						pGVar3[2] = pGVar9;
						return pGVar3;
					}
				}
			}
		}
	label_05e3a758: ;
		throw new IndexOutOfRangeException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsAbilityCategory.c.

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsAbilityCategory.<>c$$.cctor: 1 lines keep C-only constructs
	private static void c__cctor()
	{
		object __this;

		__this = (object)il2cpp_codegen_object_new(typeof(AottgSettingsAbilityCategory.c)) ;
		__this = new Object();
		AottgSettingsAbilityCategory.c.__9 =(AottgSettingsAbilityCategory.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsAbilityCategory.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsAbilityCategory.<>c$$<Groups>b__2_0: clean
	private String c__Groups_b__2_0()
	{
		String pSVar1;

		AottgBombStatSettingRow.UnusedPoints();
		return pSVar1;
	}
}
