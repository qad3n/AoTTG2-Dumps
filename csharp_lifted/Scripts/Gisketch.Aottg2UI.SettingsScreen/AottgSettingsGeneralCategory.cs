// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGeneralCategory
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGeneralCategory.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000187")]
internal static class AottgSettingsGeneralCategory
{
	[Token(Token = "0x6000881")]
	[Address(RVA = "0x5D3D8A0", Offset = "0x5D3C8A0", VA = "0x5D3D8A0")]
	public static void Build(AottgUi content, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGeneralCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGeneralCategory$$Build): 2 lines keep C-only constructs
		String categoryId;
		AottgSettingsGroup[] groups;
		AottgVirtualSettingsScrollCategory __this;
		String* method_00;

		if (g_data_075485bf == false) {
			method_00 = &"general";
			g_data_075485bf = true;
		}
		groups = AottgSettingsGeneralCategory.Groups();
		categoryId = "general";
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgVirtualSettingsScrollCategory));
		__this = new AottgVirtualSettingsScrollCategory(context, categoryId, groups, null, 0.0, (Nullable<float>)0x0);
		if (content == null) {
			throw new NullReferenceException();
		}
		content.Component((AottgComponent)__this);
		return;
	}

	[Token(Token = "0x6000882")]
	[Address(RVA = "0x5D3E8B0", Offset = "0x5D3D8B0", VA = "0x5D3E8B0")]
	public static void SyncState(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGeneralCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGeneralCategory$$SyncState): clean
		AottgSettingsGroup[] groups;

		groups = AottgSettingsGeneralCategory.Groups();
		AottgSettingsCategoryPage.SyncState(root, groups);
		return;
	}

	[Token(Token = "0x6000883")]
	[Address(RVA = "0x5D3D970", Offset = "0x5D3C970", VA = "0x5D3D970")]
	private static AottgSettingsGroup[] Groups()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGeneralCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGeneralCategory$$Groups): 37 lines keep C-only constructs
		GeneralSettings settings;
		String pSVar1;
		AottgSettingsGroup[] pGVar2;
		AottgComponent[] pGVar3;
		object pIVar4;
		object pIVar5;
		AottgSettingsGroup pGVar6;
		IntSetting setting;
		FloatSetting pSVar7;
		BoolSetting pSVar8;
		MethodInfo pMVar9;

		settings = SettingsManager.GeneralSettings;
		pGVar2 = (AottgSettingsGroup[])new AottgSettingsGroup[6];
		pMVar9 = (MethodInfo)0x1;
		pGVar3 = (AottgComponent[])new AottgComponent[1];
		pIVar4 = (object)AottgSettingsGeneralCategory.Language(settings);
		if (pGVar3 == null) {
	label_05e3e8a6: ;
			throw new NullReferenceException();
		}
		if (pIVar4 != null) {
			pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
			if (pIVar5 == null) goto label_05e3e897;
		}
		if ((int)pGVar3.Length != 0) {
			pGVar3[0] = (AottgComponent)pIVar4;
			pGVar6 = new AottgSettingsGroup("settings-general-language", pGVar3);
			if (pGVar2 == null) goto label_05e3e8a6;
			if ((int)pGVar2.Length == 0) goto label_05e3e892;
			pGVar2[0] = pGVar6;
			pGVar3 = (AottgComponent[])new AottgComponent[6];
			pSVar1 = "settings-general-camera-mode-position";
			if (settings == null) {
				setting = null;
			}
			else {
				setting = settings.CameraMode;
			}
			pIVar4 = (object)AottgSettingsRows.Select("settings-general-camera-mode", "General", "CameraMode", setting, null, null);
			if (pGVar3 == null) goto label_05e3e8a6;
			if (pIVar4 != null) {
				pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
				if (pIVar5 == null) goto label_05e3e897;
			}
			if ((int)pGVar3.Length == 0) goto label_05e3e892;
			pGVar3[0] = (AottgComponent)pIVar4;
			if (settings == null) {
				pSVar7 = null;
			}
			else {
				pSVar7 = settings.CameraDistance;
			}
			pIVar4 = (object)AottgSettingsRows.Slider("settings-general-camera-distance", "General", "CameraDistance", pSVar7, null, null);
			if (pIVar4 != null) {
				pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
				if (pIVar5 == null) goto label_05e3e897;
			}
			if ((pGVar3.Length & 0xfffffffe) == 0) goto label_05e3e892;
			pGVar3[1] = (AottgComponent)pIVar4;
			if (settings == null) {
				pSVar7 = null;
			}
			else {
				pSVar7 = settings.CameraHeight;
			}
			pIVar4 = (object)AottgSettingsRows.Slider("settings-general-camera-height", "General", "CameraHeight", pSVar7, null, null);
			if (pIVar4 != null) {
				pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
				if (pIVar5 == null) goto label_05e3e897;
			}
			if ((uint)pGVar3.Length < 3) goto label_05e3e892;
			pGVar3[2] = (AottgComponent)pIVar4;
			if (settings == null) {
				pSVar7 = null;
			}
			else {
				pSVar7 = settings.CameraSide;
			}
			pIVar4 = (object)AottgSettingsRows.Slider("settings-general-camera-side", "General", "CameraSide", pSVar7, null, null);
			if (pIVar4 != null) {
				pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
				if (pIVar5 == null) goto label_05e3e897;
			}
			if ((pGVar3.Length & 0xfffffffc) == 0) goto label_05e3e892;
			pGVar3[3] = (AottgComponent)pIVar4;
			if (settings == null) {
				pSVar7 = null;
			}
			else {
				pSVar7 = settings.CameraTiltStrength;
			}
			pIVar4 = (object)AottgSettingsRows.Slider("settings-general-camera-tilt", "General", "CameraTilt", pSVar7, null, null);
			if (pIVar4 != null) {
				pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
				if (pIVar5 == null) goto label_05e3e897;
			}
			if ((uint)pGVar3.Length < 5) goto label_05e3e892;
			pGVar3[4] = (AottgComponent)pIVar4;
			if (settings == null) {
				pMVar9 = null;
			}
			else {
				pMVar9 = (MethodInfo)settings.CameraClipping;
			}
			pIVar4 = (object)AottgSettingsRows.Switch("settings-general-camera-clipping", "General", "CameraClipping", (BoolSetting)pMVar9, "CameraClippingTooltip", null);
			if (pIVar4 != null) {
				pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
				if (pIVar5 == null) goto label_05e3e897;
			}
			if ((uint)pGVar3.Length < 6) goto label_05e3e892;
			pGVar3[5] = (AottgComponent)pIVar4;
			pGVar6 = new AottgSettingsGroup(pSVar1, pGVar3);
			if ((pGVar2.Length & 0xfffffffe) == 0) goto label_05e3e892;
			pGVar2[1] = pGVar6;
			pGVar3 = (AottgComponent[])new AottgComponent[2];
			pSVar1 = "settings-general-mouse";
			if (settings == null) {
				pSVar7 = null;
			}
			else {
				pSVar7 = settings.MouseSpeed;
			}
			pIVar4 = (object)AottgSettingsRows.Slider("settings-general-mouse-speed", "General", "MouseSpeed", pSVar7, null, null);
			if (pGVar3 == null) goto label_05e3e8a6;
			if (pIVar4 != null) {
				pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
				if (pIVar5 == null) goto label_05e3e897;
			}
			if ((int)pGVar3.Length == 0) goto label_05e3e892;
			pGVar3[0] = (AottgComponent)pIVar4;
			if (settings == null) {
				pMVar9 = null;
			}
			else {
				pMVar9 = (MethodInfo)settings.InvertMouse;
			}
			pIVar4 = (object)AottgSettingsRows.Switch("settings-general-invert-mouse", "General", "InvertMouse", (BoolSetting)pMVar9, null, null);
			if (pIVar4 != null) {
				pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
				if (pIVar5 == null) goto label_05e3e897;
			}
			if ((pGVar3.Length & 0xfffffffe) == 0) goto label_05e3e892;
			pGVar3[1] = (AottgComponent)pIVar4;
			pGVar6 = new AottgSettingsGroup(pSVar1, pGVar3);
			if ((uint)pGVar2.Length < 3) goto label_05e3e892;
			pGVar2[2] = pGVar6;
			pGVar3 = (AottgComponent[])new AottgComponent[2];
			pSVar1 = "settings-general-minimap";
			if (settings == null) {
				pSVar8 = null;
			}
			else {
				pSVar8 = settings.MinimapEnabled;
			}
			pIVar4 = (object)AottgSettingsRows.Switch("settings-general-minimap-enabled", "General", "MinimapEnabled", pSVar8, null, null);
			if (pGVar3 == null) goto label_05e3e8a6;
			if (pIVar4 != null) {
				pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
				if (pIVar5 == null) goto label_05e3e897;
			}
			if ((int)pGVar3.Length == 0) goto label_05e3e892;
			pGVar3[0] = (AottgComponent)pIVar4;
			if (settings == null) {
				pMVar9 = null;
			}
			else {
				pMVar9 = (MethodInfo)settings.MinimapCameraHeight;
			}
			pIVar4 = (object)AottgSettingsRows.Input("settings-general-minimap-height", "General", "MinimapHeight", (FloatSetting)pMVar9, null, null);
			if (pIVar4 != null) {
				pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
				if (pIVar5 == null) goto label_05e3e897;
			}
			if ((pGVar3.Length & 0xfffffffe) == 0) goto label_05e3e892;
			pGVar3[1] = (AottgComponent)pIVar4;
			pGVar6 = new AottgSettingsGroup(pSVar1, pGVar3);
			if ((pGVar2.Length & 0xfffffffc) == 0) goto label_05e3e892;
			pGVar2[3] = pGVar6;
			pGVar3 = (AottgComponent[])new AottgComponent[3];
			pSVar1 = "settings-general-snapshots";
			if (settings == null) {
				pSVar8 = null;
			}
			else {
				pSVar8 = settings.SnapshotsEnabled;
			}
			pIVar4 = (object)AottgSettingsRows.Switch("settings-general-snapshots-enabled", "General", "SnapshotsEnabled", pSVar8, null, null);
			if (pGVar3 == null) goto label_05e3e8a6;
			if (pIVar4 != null) {
				pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
				if (pIVar5 == null) goto label_05e3e897;
			}
			if ((int)pGVar3.Length == 0) goto label_05e3e892;
			pGVar3[0] = (AottgComponent)pIVar4;
			if (settings == null) {
				pSVar8 = null;
			}
			else {
				pSVar8 = settings.SnapshotsShowInGame;
			}
			pIVar4 = (object)AottgSettingsRows.Switch("settings-general-snapshots-show-in-game", "General", "SnapshotsShowInGame", pSVar8, null, null);
			if (pIVar4 != null) {
				pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
				if (pIVar5 == null) goto label_05e3e897;
			}
			if ((pGVar3.Length & 0xfffffffe) != 0) {
				pGVar3[1] = (AottgComponent)pIVar4;
				if (settings == null) {
					pMVar9 = null;
				}
				else {
					pMVar9 = (MethodInfo)settings.SnapshotsMinimumDamage;
				}
				pIVar4 = (object)AottgSettingsRows.Input("settings-general-snapshots-min-damage", "General", "SnapshotsMinimumDamage", (IntSetting)pMVar9, null, null);
				if (pIVar4 != null) {
					pIVar5 = il2cpp_vm_Object_IsInst(pIVar4, (((pGVar3.obj).klass)._1).element_class);
					if (pIVar5 == null) {
	label_05e3e897: ;
						pIVar4 = new ArrayTypeMismatchException();
						throw pIVar4;
					}
				}
				if (2 < (uint)pGVar3.Length) {
					pGVar3[2] = (AottgComponent)pIVar4;
					pGVar6 = new AottgSettingsGroup(pSVar1, pGVar3);
					if (4 < (uint)pGVar2.Length) {
						pGVar2[4] = pGVar6;
						pGVar3 = (AottgComponent[])new AottgComponent[8];
						pSVar1 = "settings-general-fov-cutscenes-original-camera";
						if (settings == null) {
							pSVar7 = null;
						}
						else {
							pSVar7 = settings.FOVMin;
						}
						pIVar4 = (object)AottgSettingsRows.Input("settings-general-fov-min", "General", "FOVMin", pSVar7, "FOVMinTooltip", null);
						if (pGVar3 != null) {
							il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
							il2cpp_codegen_array_set_ref((Array)pGVar3, 0, pIVar4);
							if (settings == null) {
								pSVar7 = null;
								pIVar4 = (object)AottgSettingsRows.Input("settings-general-fov-max", "General", "FOVMax", null, "FOVMaxTooltip", null);
								il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
								il2cpp_codegen_array_set_ref((Array)pGVar3, 1, pIVar4);
							}
							else {
								pIVar4 = (object)AottgSettingsRows.Input("settings-general-fov-max", "General", "FOVMax", settings.FOVMax, "FOVMaxTooltip", null);
								il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
								il2cpp_codegen_array_set_ref((Array)pGVar3, 1, pIVar4);
								pSVar7 = settings.FPSFOVMin;
							}
							pIVar4 = (object)AottgSettingsRows.Input("settings-general-fps-fov-min", "General", "FPSFOVMin", pSVar7, "FPSFOVMinTooltip", null);
							il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
							il2cpp_codegen_array_set_ref((Array)pGVar3, 2, pIVar4);
							if (settings == null) {
								pSVar8 = null;
								pIVar4 = (object)AottgSettingsRows.Input("settings-general-fps-fov-max", "General", "FPSFOVMax", null, "FPSFOVMaxTooltip", null);
								il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
								il2cpp_codegen_array_set_ref((Array)pGVar3, 3, pIVar4);
							}
							else {
								pIVar4 = (object)AottgSettingsRows.Input("settings-general-fps-fov-max", "General", "FPSFOVMax", settings.FPSFOVMax, "FPSFOVMaxTooltip", null);
								il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
								il2cpp_codegen_array_set_ref((Array)pGVar3, 3, pIVar4);
								pSVar8 = settings.SkipCutscenes;
							}
							pIVar4 = (object)AottgSettingsRows.Switch("settings-general-skip-cutscenes", "General", "SkipCutscenes", pSVar8, null, null);
							il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
							il2cpp_codegen_array_set_ref((Array)pGVar3, 4, pIVar4);
							if (settings == null) {
								pSVar7 = null;
								pIVar4 = (object)AottgSettingsRows.Switch("settings-general-original-camera-wow-rotation", "General", "OriginalCameraWOWRotation", null, "OriginalCameraWOWRotationTooltip", null);
								il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
								il2cpp_codegen_array_set_ref((Array)pGVar3, 5, pIVar4);
							}
							else {
								pIVar4 = (object)AottgSettingsRows.Switch("settings-general-original-camera-wow-rotation", "General", "OriginalCameraWOWRotation", settings.OriginalCameraWOWRotation, "OriginalCameraWOWRotationTooltip", null);
								il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
								il2cpp_codegen_array_set_ref((Array)pGVar3, 5, pIVar4);
								pSVar7 = settings.OriginalCameraDeadzone;
							}
							pMVar9 = null;
							pIVar4 = (object)AottgSettingsRows.Input("settings-general-original-camera-deadzone", "General", "OriginalCameraDeadzone", pSVar7, null, null);
							il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
							il2cpp_codegen_array_set_ref((Array)pGVar3, 6, pIVar4);
							if (settings != null) {
								pMVar9 = (MethodInfo)settings.OriginalCameraSpeed;
							}
							pIVar4 = (object)AottgSettingsRows.Input("settings-general-original-camera-speed", "General", "OriginalCameraSpeed", (FloatSetting)pMVar9, null, null);
							il2cpp_codegen_array_element_type_check((Array)pGVar3, pIVar4);
							il2cpp_codegen_array_set_ref((Array)pGVar3, 7, pIVar4);
							pGVar6 = new AottgSettingsGroup(pSVar1, pGVar3);
							il2cpp_runtime_helper_02fe1060(pGVar2, 5, pGVar6);
							return pGVar2;
						}
						goto label_05e3e8a6;
					}
				}
			}
		}
	label_05e3e892: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000884")]
	[Address(RVA = "0x5D3E8D0", Offset = "0x5D3D8D0", VA = "0x5D3E8D0")]
	private static AottgComponent Language(GeneralSettings settings)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGeneralCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGeneralCategory$$Language): 1 lines keep C-only constructs
		object @object;
		String sub;
		String item;
		AottgStringSettingAdapter __this;
		AottgSettingDescriptor descriptor;
		String[] values;
		AottgSettingOption[] pGVar1;
		Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory___c_StaticFields pGVar2;
		Action<GisketchActionContext> __this_00;
		AottgSettingRow __this_01;
		MethodInfo method_00;
		StringSetting setting;

		method_00 = (MethodInfo *)"settings-general-language-select";
		item = "Language";
		sub = "General";
		if (settings == null) {
			setting = null;
		}
		else {
			setting = settings.Language;
		}
		__this = new AottgStringSettingAdapter(setting);
		descriptor = AottgSettingsRows.Descriptor((String)method_00, sub, item, 1, (IAottgSettingAdapter)__this, null, null);
		values = AottgSettingsRows.SafeLanguages();
		pGVar1 = AottgSettingOption.StringOptions(values);
		if (descriptor == null) {
			throw new NullReferenceException();
		}
		descriptor.Options = pGVar1;
		if ((typeof(AottgSettingsGeneralCategory.c)._2). cctor_finished_or_no_cctor == 0) {
			pGVar2 = typeof(AottgSettingsGeneralCategory.c).static_fields;
			__this_00 = pGVar2.__9__3_0;
		}
		else {
			pGVar2 = typeof(AottgSettingsGeneralCategory.c).static_fields;
			__this_00 = pGVar2.__9__3_0;
		}
		if (__this_00 == null) {
			if (((typeof(AottgSettingsGeneralCategory.c))._2). cctor_finished_or_no_cctor == 0) {
				pGVar2 = typeof(AottgSettingsGeneralCategory.c).static_fields;
			}
			@object = (object)pGVar2.__9;
			__this_00 = new Action<GisketchActionContext>(@object, (intptr_t) MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory_c_Language_b__3_0);
			pGVar2 = typeof(AottgSettingsGeneralCategory.c).static_fields;
			pGVar2.__9__3_0 = __this_00;
		}
		descriptor.OnChanged = __this_00;
		__this_01 = new AottgSettingRow(descriptor);
		return (AottgComponent)__this_01;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGeneralCategory.c.

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGeneralCategory.<>c$$.cctor: 1 lines keep C-only constructs
	private static void c__cctor()
	{
		object __this;

		__this = (object)il2cpp_codegen_object_new(typeof(AottgSettingsGeneralCategory.c)) ;
		__this = new Object();
		AottgSettingsGeneralCategory.c.__9 =(AottgSettingsGeneralCategory.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGeneralCategory.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGeneralCategory.<>c$$<Language>b__3_0: clean
	private void c__Language_b__3_0(GisketchActionContext __)
	{
		AottgGisketchUiHost.ApplyLanguageNextFrame();
		return;
	}
}
