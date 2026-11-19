// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGraphicsCategory
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGraphicsCategory.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000189")]
internal static class AottgSettingsGraphicsCategory
{
	[Token(Token = "0x6000888")]
	[Address(RVA = "0x5D3F100", Offset = "0x5D3E100", VA = "0x5D3F100")]
	public static void Build(AottgUi content, AottgScreenSectionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGraphicsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGraphicsCategory$$Build): 2 lines keep C-only constructs
		String categoryId;
		AottgSettingsGroup[] groups;
		AottgVirtualSettingsScrollCategory __this;
		String* method_00;

		if (g_data_075485c3 == false) {
			method_00 = &"graphics";
			g_data_075485c3 = true;
		}
		groups = AottgSettingsGraphicsCategory.Groups();
		categoryId = "graphics";
		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgVirtualSettingsScrollCategory));
		__this = new AottgVirtualSettingsScrollCategory(context, categoryId, groups, null, 0.0, (Nullable<float>)0x0);
		if (content == null) {
			throw new NullReferenceException();
		}
		content.Component((AottgComponent)__this);
		return;
	}

	[Token(Token = "0x6000889")]
	[Address(RVA = "0x5D408A0", Offset = "0x5D3F8A0", VA = "0x5D408A0")]
	public static void SyncState(GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGraphicsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGraphicsCategory$$SyncState): clean
		AottgSettingsGroup[] groups;

		groups = AottgSettingsGraphicsCategory.Groups();
		AottgSettingsCategoryPage.SyncState(root, groups);
		return;
	}

	[Token(Token = "0x600088A")]
	[Address(RVA = "0x5D3F1D0", Offset = "0x5D3E1D0", VA = "0x5D3F1D0")]
	private static AottgSettingsGroup[] Groups()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGraphicsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGraphicsCategory$$Groups): 88 lines keep C-only constructs
		GraphicsSettings pSVar1;
		String pSVar2;
		String pSVar3;
		String id;
		String pSVar4;
		int iVar5;
		AottgSettingsGroup[] pGVar6;
		AottgComponent[] pGVar7;
		Action<GisketchActionContext> __this;
		object pIVar8;
		object pIVar9;
		String[] labels;
		AottgSettingsGroup pGVar10;
		IntSetting pSVar11;
		MethodInfo pMVar12;
		BoolSetting pSVar13;
		MethodInfo pMVar14;

		pSVar1 = SettingsManager.GraphicsSettings;
		if (pSVar1 != null) {
			pSVar11 = pSVar1.ScreenResolution;
			if (pSVar11 == null) goto label_05e40882;
			iVar5 = pSVar11._value;
			iVar5 = FullscreenHandler.SanitizeResolutionSetting(iVar5);
			pSVar11.Value = iVar5;
		}
		pGVar6 = (AottgSettingsGroup[])new AottgSettingsGroup[5];
		pGVar7 = (AottgComponent[])new AottgComponent[3];
		pSVar4 = "settings-graphics-preset-quality";
		id = "settings-graphics-preset-display";
		pSVar3 = "PresetQuality";
		pSVar2 = "Graphics";
		if (pSVar1 == null) {
			pSVar11 = null;
		}
		else {
			pSVar11 = pSVar1.PresetQuality;
		}
		__this = new Action<GisketchActionContext>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory_PresetChanged);
		pIVar8 = (object)AottgSettingsRows.Dropdown(pSVar4, pSVar2, pSVar3, pSVar11, null, __this);
		if (pGVar7 == null) goto label_05e40882;
		if (pIVar8 != null) {
			pIVar9 = il2cpp_vm_Object_IsInst(pIVar8, (((pGVar7.obj).klass)._1).element_class);
			if (pIVar9 == null) goto label_05e40887;
		}
		if ((int)pGVar7.Length == 0) goto label_05e4087d;
		pGVar7[0] = (AottgComponent)pIVar8;
		if (pSVar1 == null) {
			pSVar11 = null;
		}
		else {
			pSVar11 = pSVar1.FullScreenMode;
		}
		pIVar8 = (object)AottgSettingsRows.Select("settings-graphics-fullscreen", "Graphics", "Fullscreen", pSVar11, "FullscreenTooltip", null);
		if (pIVar8 != null) {
			pIVar9 = il2cpp_vm_Object_IsInst(pIVar8, (((pGVar7.obj).klass)._1).element_class);
			if (pIVar9 == null) goto label_05e40887;
		}
		if ((pGVar7.Length & 0xfffffffe) == 0) goto label_05e4087d;
		pMVar14 = (MethodInfo)(pGVar7.m_Items + 1);
		pGVar7[1] = (AottgComponent)pIVar8;
		pSVar4 = "settings-graphics-resolution";
		pSVar3 = "Resolution";
		pSVar2 = "Graphics";
		if (pSVar1 == null) {
			pMVar12 = null;
		}
		else {
			pMVar12 = (MethodInfo)pSVar1.ScreenResolution;
		}
		labels = AottgSettingsRows.SafeResolutions();
		pIVar8 = (object)AottgSettingsRows.Dropdown(pSVar4, pSVar2, pSVar3, (IntSetting)pMVar12, labels, null, null);
		if (pIVar8 != null) {
			pIVar9 = il2cpp_vm_Object_IsInst(pIVar8, (((pGVar7.obj).klass)._1).element_class);
			if (pIVar9 == null) goto label_05e40887;
		}
		if ((uint)pGVar7.Length < 3) goto label_05e4087d;
		pGVar7[2] = (AottgComponent)pIVar8;
		pGVar10 = new AottgSettingsGroup(id, pGVar7);
		if (pGVar6 == null) {
	label_05e40882: ;
			throw new NullReferenceException();
		}
		if ((int)pGVar6.Length == 0) goto label_05e4087d;
		pGVar6[0] = pGVar10;
		pGVar7 = (AottgComponent[])new AottgComponent[8];
		pSVar2 = "settings-graphics-performance";
		if (pSVar1 == null) {
			pSVar11 = null;
		}
		else {
			pSVar11 = pSVar1.RenderScale;
		}
		pIVar8 = (object)AottgSettingsRows.Slider("settings-graphics-render-scale", "Graphics", "RenderScale", pSVar11, "RenderScaleTooltip", null);
		if (pGVar7 == null) goto label_05e40882;
		if (pIVar8 != null) {
			pIVar9 = il2cpp_vm_Object_IsInst(pIVar8, (((pGVar7.obj).klass)._1).element_class);
			if (pIVar9 == null) goto label_05e40887;
		}
		if ((int)pGVar7.Length == 0) goto label_05e4087d;
		pGVar7[0] = (AottgComponent)pIVar8;
		if (pSVar1 == null) {
			pSVar11 = null;
		}
		else {
			pSVar11 = pSVar1.RenderDistance;
		}
		pIVar8 = (object)AottgSettingsRows.Input("settings-graphics-render-distance", "Graphics", "RenderDistance", pSVar11, "RenderDistanceTooltip", null);
		if (pIVar8 != null) {
			pIVar9 = il2cpp_vm_Object_IsInst(pIVar8, (((pGVar7.obj).klass)._1).element_class);
			if (pIVar9 == null) goto label_05e40887;
		}
		if ((pGVar7.Length & 0xfffffffe) == 0) goto label_05e4087d;
		pGVar7[1] = (AottgComponent)pIVar8;
		if (pSVar1 == null) {
			pSVar11 = null;
		}
		else {
			pSVar11 = pSVar1.FPSCap;
		}
		pIVar8 = (object)AottgSettingsRows.Input("settings-graphics-fps-cap", "Graphics", "FPSCap", pSVar11, null, null);
		if (pIVar8 != null) {
			pIVar9 = il2cpp_vm_Object_IsInst(pIVar8, (((pGVar7.obj).klass)._1).element_class);
			if (pIVar9 == null) goto label_05e40887;
		}
		if ((uint)pGVar7.Length < 3) goto label_05e4087d;
		pGVar7[2] = (AottgComponent)pIVar8;
		if (pSVar1 == null) {
			pSVar11 = null;
		}
		else {
			pSVar11 = pSVar1.MenuFPSCap;
		}
		pIVar8 = (object)AottgSettingsRows.Input("settings-graphics-menu-fps-cap", "Graphics", "MenuFPSCap", pSVar11, null, null);
		if (pIVar8 != null) {
			pIVar9 = il2cpp_vm_Object_IsInst(pIVar8, (((pGVar7.obj).klass)._1).element_class);
			if (pIVar9 == null) goto label_05e40887;
		}
		if ((pGVar7.Length & 0xfffffffc) == 0) goto label_05e4087d;
		pGVar7[3] = (AottgComponent)pIVar8;
		if (pSVar1 == null) {
			pSVar13 = null;
		}
		else {
			pSVar13 = pSVar1.VSync;
		}
		pIVar8 = (object)AottgSettingsRows.Switch("settings-graphics-vsync", "Graphics", "VSync", pSVar13, null, null);
		if (pIVar8 != null) {
			pIVar9 = il2cpp_vm_Object_IsInst(pIVar8, (((pGVar7.obj).klass)._1).element_class);
			if (pIVar9 == null) goto label_05e40887;
		}
		if (4 < (uint)pGVar7.Length) {
			pGVar7[4] = (AottgComponent)pIVar8;
			if (pSVar1 == null) {
				pSVar13 = null;
			}
			else {
				pSVar13 = pSVar1.InterpolationEnabled;
			}
			pIVar8 = (object)AottgSettingsRows.Switch("settings-graphics-interpolation", "Graphics", "InterpolationEnabled", pSVar13, "InterpolationEnabledTooltip", null);
			if (pIVar8 != null) {
				pIVar9 = il2cpp_vm_Object_IsInst(pIVar8, (((pGVar7.obj).klass)._1).element_class);
				if (pIVar9 == null) {
	label_05e40887: ;
					pIVar8 = new ArrayTypeMismatchException();
					throw pIVar8;
				}
			}
			if (5 < (uint)pGVar7.Length) {
				pGVar7[5] = (AottgComponent)pIVar8;
				if (pSVar1 == null) {
					pMVar12 = null;
					pIVar8 = (object)AottgSettingsRows.Switch("settings-graphics-show-fps", "Graphics", "ShowFPS", null, null, null);
					il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
					il2cpp_codegen_array_set_ref((Array)pGVar7, 6, pIVar8);
				}
				else {
					pIVar8 = (object)AottgSettingsRows.Switch("settings-graphics-show-fps", "Graphics", "ShowFPS", pSVar1.ShowFPS, null, null);
					il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
					il2cpp_codegen_array_set_ref((Array)pGVar7, 6, pIVar8);
					pMVar12 = (MethodInfo)pSVar1.MipmapEnabled;
				}
				pSVar11 = null;
				pIVar8 = (object)AottgSettingsRows.Switch("settings-graphics-mipmap", "Graphics", "MipmapEnabled", (BoolSetting)pMVar12, "MipmapEnabledTooltip", null);
				il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
				il2cpp_codegen_array_set_ref((Array)pGVar7, 7, pIVar8);
				pGVar10 = new AottgSettingsGroup(pSVar2, pGVar7);
				il2cpp_runtime_helper_02fe1060(pGVar6, 1, pGVar10);
				pGVar7 = (AottgComponent[])new AottgComponent[8];
				pSVar2 = "settings-graphics-effects";
				if (pSVar1 != null) {
					pSVar11 = pSVar1.WeatherEffects;
				}
				pIVar8 = (object)AottgSettingsRows.Select("settings-graphics-weather-effects", "Graphics", "WeatherEffects", pSVar11, null, null);
				if (pGVar7 != null) {
					il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
					il2cpp_codegen_array_set_ref((Array)pGVar7, 0, pIVar8);
					if (pSVar1 == null) {
						pSVar13 = null;
						pIVar8 = (object)AottgSettingsRows.Select("settings-graphics-weapon-trail", "Graphics", "WeaponTrail", null, null, null);
						il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
						il2cpp_codegen_array_set_ref((Array)pGVar7, 1, pIVar8);
					}
					else {
						pIVar8 = (object)AottgSettingsRows.Select("settings-graphics-weapon-trail", "Graphics", "WeaponTrail", pSVar1.WeaponTrail, null, null);
						il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
						il2cpp_codegen_array_set_ref((Array)pGVar7, 1, pIVar8);
						pSVar13 = pSVar1.WeaponTrailHold;
					}
					pIVar8 = (object)AottgSettingsRows.Switch("settings-graphics-weapon-trail-hold", "Graphics", "WeaponTrailHold", pSVar13, "WeaponTrailHoldTooltip", null);
					il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
					il2cpp_codegen_array_set_ref((Array)pGVar7, 2, pIVar8);
					if (pSVar1 == null) {
						pSVar13 = null;
						pIVar8 = (object)AottgSettingsRows.Switch("settings-graphics-weapon-fire-effect", "Graphics", "WeaponFireEffect", null, "WeaponFireEffectTooltip", null);
						il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
						il2cpp_codegen_array_set_ref((Array)pGVar7, 3, pIVar8);
					}
					else {
						pIVar8 = (object)AottgSettingsRows.Switch("settings-graphics-weapon-fire-effect", "Graphics", "WeaponFireEffect", pSVar1.WeaponFireEffect, "WeaponFireEffectTooltip", null);
						il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
						il2cpp_codegen_array_set_ref((Array)pGVar7, 3, pIVar8);
						pSVar13 = pSVar1.WindEffectEnabled;
					}
					pIVar8 = (object)AottgSettingsRows.Switch("settings-graphics-wind-effect", "Graphics", "WindEffectEnabled", pSVar13, null, null);
					il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
					il2cpp_codegen_array_set_ref((Array)pGVar7, 4, pIVar8);
					if (pSVar1 == null) {
						pSVar13 = null;
						pIVar8 = (object)AottgSettingsRows.Switch("settings-graphics-blood-splatter", "Graphics", "BloodSplatterEnabled", null, null, null);
						il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
						il2cpp_codegen_array_set_ref((Array)pGVar7, 5, pIVar8);
					}
					else {
						pIVar8 = (object)AottgSettingsRows.Switch("settings-graphics-blood-splatter", "Graphics", "BloodSplatterEnabled", pSVar1.BloodSplatterEnabled, null, null);
						il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
						il2cpp_codegen_array_set_ref((Array)pGVar7, 5, pIVar8);
						pSVar13 = pSVar1.NapeBloodEnabled;
					}
					pMVar12 = null;
					pIVar8 = (object)AottgSettingsRows.Switch("settings-graphics-nape-blood", "Graphics", "NapeBloodEnabled", pSVar13, null, null);
					il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
					il2cpp_codegen_array_set_ref((Array)pGVar7, 6, pIVar8);
					if (pSVar1 != null) {
						pMVar12 = (MethodInfo)pSVar1.TitanGore;
					}
					pSVar11 = null;
					pIVar8 = (object)AottgSettingsRows.Switch("settings-graphics-titan-gore", "Graphics", "TitanGore", (BoolSetting)pMVar12, "TitanGoreTooltip", null);
					il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
					il2cpp_codegen_array_set_ref((Array)pGVar7, 7, pIVar8);
					pGVar10 = new AottgSettingsGroup(pSVar2, pGVar7);
					il2cpp_runtime_helper_02fe1060(pGVar6, 2, pGVar10);
					pGVar7 = (AottgComponent[])new AottgComponent[7];
					pSVar2 = "settings-graphics-texture-lighting";
					if (pSVar1 != null) {
						pSVar11 = pSVar1.TextureQuality;
					}
					pIVar8 = (object)AottgSettingsRows.Select("settings-graphics-texture-quality", "Graphics", "TextureQuality", pSVar11, null, null);
					if (pGVar7 != null) {
						il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
						il2cpp_codegen_array_set_ref((Array)pGVar7, 0, pIVar8);
						if (pSVar1 == null) {
							pSVar11 = null;
							pIVar8 = (object)AottgSettingsRows.Select("settings-graphics-shadow-quality", "Graphics", "ShadowQuality", null, null, null);
							il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
							il2cpp_codegen_array_set_ref((Array)pGVar7, 1, pIVar8);
						}
						else {
							pIVar8 = (object)AottgSettingsRows.Select("settings-graphics-shadow-quality", "Graphics", "ShadowQuality", pSVar1.ShadowQuality, null, null);
							il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
							il2cpp_codegen_array_set_ref((Array)pGVar7, 1, pIVar8);
							pSVar11 = pSVar1.ShadowDistance;
						}
						pIVar8 = (object)AottgSettingsRows.Slider("settings-graphics-shadow-distance", "Graphics", "ShadowDistance", pSVar11, null, null);
						il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
						il2cpp_codegen_array_set_ref((Array)pGVar7, 2, pIVar8);
						if (pSVar1 == null) {
							pSVar11 = null;
							pIVar8 = (object)AottgSettingsRows.Slider("settings-graphics-light-distance", "Graphics", "LightDistance", null, null, null);
							il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
							il2cpp_codegen_array_set_ref((Array)pGVar7, 3, pIVar8);
						}
						else {
							pIVar8 = (object)AottgSettingsRows.Slider("settings-graphics-light-distance", "Graphics", "LightDistance", pSVar1.LightDistance, null, null);
							il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
							il2cpp_codegen_array_set_ref((Array)pGVar7, 3, pIVar8);
							pSVar11 = pSVar1.AntiAliasingQuality;
						}
						pIVar8 = (object)AottgSettingsRows.Select("settings-graphics-anti-aliasing", "Graphics", "AntiAliasing", pSVar11, null, null);
						il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
						il2cpp_codegen_array_set_ref((Array)pGVar7, 4, pIVar8);
						if (pSVar1 == null) {
							pMVar12 = null;
							pIVar8 = (object)AottgSettingsRows.Select("settings-graphics-anisotropic", "Graphics", "Anisotropic", null, null, null);
							il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
							il2cpp_codegen_array_set_ref((Array)pGVar7, 5, pIVar8);
						}
						else {
							pIVar8 = (object)AottgSettingsRows.Select("settings-graphics-anisotropic", "Graphics", "Anisotropic", pSVar1.AnisotropicFiltering, null, null);
							il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
							il2cpp_codegen_array_set_ref((Array)pGVar7, 5, pIVar8);
							pMVar12 = (MethodInfo)pSVar1.AdditionalLights;
						}
						pSVar11 = null;
						pIVar8 = (object)AottgSettingsRows.Select("settings-graphics-additional-lights", "Graphics", "AdditionalLights", (IntSetting)pMVar12, null, null);
						il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
						il2cpp_codegen_array_set_ref((Array)pGVar7, 6, pIVar8);
						pGVar10 = new AottgSettingsGroup(pSVar2, pGVar7);
						il2cpp_runtime_helper_02fe1060(pGVar6, 3, pGVar10);
						pGVar7 = (AottgComponent[])new AottgComponent[9];
						pSVar2 = "settings-graphics-post-processing";
						if (pSVar1 != null) {
							pSVar11 = pSVar1.AmbientOcclusion;
						}
						pIVar8 = (object)AottgSettingsRows.Dropdown("settings-graphics-ambient-occlusion", "Graphics", "AmbientOcclusion", pSVar11, null, null);
						if (pGVar7 != null) {
							il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
							il2cpp_codegen_array_set_ref((Array)pGVar7, 0, pIVar8);
							if (pSVar1 == null) {
								pSVar11 = null;
								pIVar8 = (object)AottgSettingsRows.Select("settings-graphics-bloom", "Graphics", "Bloom", null, null, null);
								il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
								il2cpp_codegen_array_set_ref((Array)pGVar7, 1, pIVar8);
							}
							else {
								pIVar8 = (object)AottgSettingsRows.Select("settings-graphics-bloom", "Graphics", "Bloom", pSVar1.Bloom, null, null);
								il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
								il2cpp_codegen_array_set_ref((Array)pGVar7, 1, pIVar8);
								pSVar11 = pSVar1.ChromaticAberrationFX;
							}
							pIVar8 = (object)AottgSettingsRows.Select("settings-graphics-chromatic-aberration", "Graphics", "ChromaticAberration", pSVar11, null, null);
							il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
							il2cpp_codegen_array_set_ref((Array)pGVar7, 2, pIVar8);
							if (pSVar1 == null) {
								pSVar11 = null;
								pIVar8 = (object)AottgSettingsRows.Select("settings-graphics-color-grading", "Graphics", "ColorGrading", null, null, null);
								il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
								il2cpp_codegen_array_set_ref((Array)pGVar7, 3, pIVar8);
							}
							else {
								pIVar8 = (object)AottgSettingsRows.Select("settings-graphics-color-grading", "Graphics", "ColorGrading", pSVar1.ColorGrading, null, null);
								il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
								il2cpp_codegen_array_set_ref((Array)pGVar7, 3, pIVar8);
								pSVar11 = pSVar1.AutoExposure;
							}
							pIVar8 = (object)AottgSettingsRows.Select("settings-graphics-auto-exposure", "Graphics", "AutoExposure", pSVar11, null, null);
							il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
							il2cpp_codegen_array_set_ref((Array)pGVar7, 4, pIVar8);
							if (pSVar1 == null) {
								pSVar11 = null;
								pIVar8 = (object)AottgSettingsRows.Select("settings-graphics-depth-of-field", "Graphics", "DepthOfField", null, null, null);
								il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
								il2cpp_codegen_array_set_ref((Array)pGVar7, 5, pIVar8);
							}
							else {
								pIVar8 = (object)AottgSettingsRows.Select("settings-graphics-depth-of-field", "Graphics", "DepthOfField", pSVar1.DepthOfField, null, null);
								il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
								il2cpp_codegen_array_set_ref((Array)pGVar7, 5, pIVar8);
								pSVar11 = pSVar1.MotionBlur;
							}
							pIVar8 = (object)AottgSettingsRows.Select("settings-graphics-motion-blur", "Graphics", "MotionBlur", pSVar11, null, null);
							il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
							il2cpp_codegen_array_set_ref((Array)pGVar7, 6, pIVar8);
							if (pSVar1 == null) {
								pMVar12 = null;
								pIVar8 = (object)AottgSettingsRows.Select("settings-graphics-water-fx", "Graphics", "WaterFX", null, null, null);
								il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
								il2cpp_codegen_array_set_ref((Array)pGVar7, 7, pIVar8);
							}
							else {
								pIVar8 = (object)AottgSettingsRows.Select("settings-graphics-water-fx", "Graphics", "WaterFX", pSVar1.WaterFX, null, null);
								il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
								il2cpp_codegen_array_set_ref((Array)pGVar7, 7, pIVar8);
								pMVar12 = (MethodInfo)pSVar1.HDR;
							}
							pIVar8 = (object)AottgSettingsRows.Switch("settings-graphics-hdr", "Graphics", "HDR", (BoolSetting)pMVar12, "HDRTooltip", null);
							il2cpp_codegen_array_element_type_check((Array)pGVar7, pIVar8);
							il2cpp_codegen_array_set_ref((Array)pGVar7, 8, pIVar8);
							pGVar10 = new AottgSettingsGroup(pSVar2, pGVar7);
							il2cpp_runtime_helper_02fe1060(pGVar6, 4, pGVar10);
							return pGVar6;
						}
					}
				}
				goto label_05e40882;
			}
		}
	label_05e4087d: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x600088B")]
	[Address(RVA = "0x5D40C20", Offset = "0x5D3FC20", VA = "0x5D40C20")]
	private static void PresetChanged(GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGraphicsCategory.c (Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGraphicsCategory$$PresetChanged): clean
		GraphicsSettings __this;
		GisketchUIRoot root;
		AottgSettingsGroup[] groups;

		__this = SettingsManager.GraphicsSettings;
		if (__this != null) {
			__this.OnSelectPreset();
		}
		if (context.GameObject == null) {
			root = null;
		}
		else {
			root = context.GameObject.GetComponentInParent<GisketchUIRoot>();
		}
		groups = AottgSettingsGraphicsCategory.Groups();
		AottgSettingsCategoryPage.SyncState(root, groups);
		return;
	}
}
