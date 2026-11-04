// Type: UI.SettingsGraphicsPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SettingsGraphicsPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsGraphicsPanel.cs
// --------------------------------

// UI.SettingsGraphicsPanel$$get_ScrollBar
// il2cpp: bool UI_SettingsGraphicsPanel__get_ScrollBar (UI_SettingsGraphicsPanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_SettingsGraphicsPanel__get_ScrollBar(UI_SettingsGraphicsPanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.SettingsGraphicsPanel$$Setup
// il2cpp: void UI_SettingsGraphicsPanel__Setup (UI_SettingsGraphicsPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822e22e0

void UI_SettingsGraphicsPanel__Setup
               (UI_SettingsGraphicsPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  Settings_GraphicsSettings_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  System_String_o *category;
  UnityEngine_Transform_o *pUVar4;
  Settings_BoolSetting_o *pSVar5;
  int32_t iVar6;
  System_String_o *pSVar7;
  UI_ElementStyle_o *__this_00;
  System_String_array *pSVar8;
  UnityEngine_Events_UnityAction_o *__this_01;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  
  if (Il2CppMethodInitialized_184347629 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_SettingsGraphicsPanel_Setup_b__2_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SettingsPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"WeaponTrailHold");
    il2cpp_codegen_initialize_runtime_metadata(&"AntiAliasing");
    il2cpp_codegen_initialize_runtime_metadata(&"WeaponTrail");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowQualityOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"WeaponFireEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"FullscreenOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"WeatherEffects");
    il2cpp_codegen_initialize_runtime_metadata(&"MotionBlur");
    il2cpp_codegen_initialize_runtime_metadata(&"WeatherEffectsOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"Fullscreen");
    il2cpp_codegen_initialize_runtime_metadata(&"RenderDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"BloodSplatterEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"MotionBlurOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"PresetQualityOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"DepthOfField");
    il2cpp_codegen_initialize_runtime_metadata(&"WeaponTrailOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"AmbientOcclusionOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"ChromaticAberrationOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"AmbientOcclusion");
    il2cpp_codegen_initialize_runtime_metadata(&"Resolution");
    il2cpp_codegen_initialize_runtime_metadata(&"FPSCap");
    il2cpp_codegen_initialize_runtime_metadata(&"Anisotropic");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowFPS");
    il2cpp_codegen_initialize_runtime_metadata(&"VSync");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"DepthOfFieldOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"LightDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"FullscreenTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"MipmapEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"InterpolationEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"HDR");
    il2cpp_codegen_initialize_runtime_metadata(&"WindEffectEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"WeaponTrailHoldTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"WaterFX");
    il2cpp_codegen_initialize_runtime_metadata(&"ColorGradingOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"AnisotropicOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"AutoExposure");
    il2cpp_codegen_initialize_runtime_metadata(&"MenuFPSCap");
    il2cpp_codegen_initialize_runtime_metadata(&"TextureQualityOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"RenderDistanceTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"ChromaticAberration");
    il2cpp_codegen_initialize_runtime_metadata(&"InterpolationEnabledTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"NapeBloodEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowQuality");
    il2cpp_codegen_initialize_runtime_metadata(&"PresetQuality");
    il2cpp_codegen_initialize_runtime_metadata(&"BloomOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"MipmapEnabledTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"WaterFXOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"AutoExposureOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"Graphics");
    il2cpp_codegen_initialize_runtime_metadata(&"Bloom");
    il2cpp_codegen_initialize_runtime_metadata(&"AntiAliasingOptions");
    il2cpp_codegen_initialize_runtime_metadata(&"TextureQuality");
    il2cpp_codegen_initialize_runtime_metadata(&"HDRTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"ColorGrading");
    il2cpp_codegen_initialize_runtime_metadata(&"WeaponFireEffectTooltip");
    Il2CppMethodInitialized_184347629 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar10 = "Graphics";
  if (parent != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_UI_SettingsPopup->_2).typeHierarchyDepth;
    if (((parent->klass->_2).typeHierarchyDepth < bVar1) ||
       ((parent->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_SettingsPopup))
    {
      il2cpp_codegen_raise_invalid_cast_exception(parent);
    }
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
    if ((pSVar2 != (Settings_GraphicsSettings_o *)0x0) &&
       (pSVar3 = (pSVar2->fields).ScreenResolution, pSVar3 != (Settings_IntSetting_o *)0x0)) {
      category = (System_String_o *)(*(uint64_t *)((char *)parent + 0xa8));
      iVar6 = (pSVar3->fields)._value;
      if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
      }
      iVar6 = ApplicationManagers_FullscreenHandler__SanitizeResolutionSetting(iVar6,(MethodInfo *)0x0);
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar3,iVar6,
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      pSVar7 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
      UI_ElementStyle___ctor(__this_00,0x18,200.0,20.0,pSVar7,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelLeft;
      pSVar3 = (pSVar2->fields).PresetQuality;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"PresetQuality","","",
                          (MethodInfo *)0x0);
      pSVar8 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"PresetQualityOptions","",(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_UI_SettingsGraphicsPanel_Setup_b__2_0,(MethodInfo *)0x0);
      UI_ElementFactory__CreateDropdownSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar3,pSVar7,pSVar8,"",200.0,
                 40.0,300.0,(System_Nullable_float__o)0x0,__this_01,(System_Int32_array *)0x0,
                 (MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelLeft;
      pSVar3 = (pSVar2->fields).FullScreenMode;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"Fullscreen","","",
                          (MethodInfo *)0x0);
      pSVar8 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"FullscreenOptions","",(MethodInfo *)0x0);
      pSVar9 = UI_UIManager__GetLocale
                         (category,pSVar10,"FullscreenTooltip","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateDropdownSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar3,pSVar7,pSVar8,pSVar9,160.0,40.0,300.0,
                 (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Int32_array *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelLeft;
      pSVar3 = (pSVar2->fields).ScreenResolution;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"Resolution","","",
                          (MethodInfo *)0x0);
      pSVar8 = ApplicationManagers_FullscreenHandler__GetResolutionOptions((MethodInfo *)0x0);
      UI_ElementFactory__CreateDropdownSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar3,pSVar7,pSVar8,"",200.0,
                 40.0,300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Int32_array *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelLeft;
      pSVar3 = (pSVar2->fields).RenderDistance;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"RenderDistance","","",
                          (MethodInfo *)0x0);
      pSVar9 = UI_UIManager__GetLocale
                         (category,pSVar10,"RenderDistanceTooltip","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar3,pSVar7,pSVar9,100.0,40.0,false,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelLeft;
      pSVar3 = (pSVar2->fields).FPSCap;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"FPSCap","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar3,pSVar7,"",100.0,40.0,
                 false,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelLeft;
      pSVar3 = (pSVar2->fields).MenuFPSCap;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"MenuFPSCap","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar3,pSVar7,"",100.0,40.0,
                 false,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelLeft;
      pSVar5 = (pSVar2->fields).VSync;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"VSync","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar5,pSVar7,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelLeft;
      pSVar5 = (pSVar2->fields).InterpolationEnabled;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"InterpolationEnabled","","",
                          (MethodInfo *)0x0);
      pSVar9 = UI_UIManager__GetLocale
                         (category,pSVar10,"InterpolationEnabledTooltip","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar5,pSVar7,pSVar9,30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelLeft;
      pSVar5 = (pSVar2->fields).ShowFPS;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"ShowFPS","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar5,pSVar7,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelLeft;
      pSVar5 = (pSVar2->fields).MipmapEnabled;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"MipmapEnabled","","",
                          (MethodInfo *)0x0);
      pSVar9 = UI_UIManager__GetLocale
                         (category,pSVar10,"MipmapEnabledTooltip","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar5,pSVar7,pSVar9,30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelLeft;
      pSVar5 = (pSVar2->fields).NapeBloodEnabled;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"NapeBloodEnabled","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar5,pSVar7,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelLeft;
      pSVar5 = (pSVar2->fields).WindEffectEnabled;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"WindEffectEnabled","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar5,pSVar7,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelLeft;
      pSVar5 = (pSVar2->fields).BloodSplatterEnabled;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"BloodSplatterEnabled","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar5,pSVar7,"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelLeft;
      pSVar3 = (pSVar2->fields).WeaponTrail;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"WeaponTrail","","",
                          (MethodInfo *)0x0);
      pSVar8 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"WeaponTrailOptions","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateDropdownSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar3,pSVar7,pSVar8,"",200.0,
                 40.0,300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Int32_array *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelLeft;
      pSVar5 = (pSVar2->fields).WeaponTrailHold;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"WeaponTrailHold","","",
                          (MethodInfo *)0x0);
      pSVar9 = UI_UIManager__GetLocale
                         (category,pSVar10,"WeaponTrailHoldTooltip","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar5,pSVar7,pSVar9,30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelLeft;
      pSVar5 = (pSVar2->fields).WeaponFireEffect;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"WeaponFireEffect","","",
                          (MethodInfo *)0x0);
      pSVar9 = UI_UIManager__GetLocale
                         (category,pSVar10,"WeaponFireEffectTooltip","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar5,pSVar7,pSVar9,30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelRight;
      pSVar3 = (pSVar2->fields).TextureQuality;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"TextureQuality","","",
                          (MethodInfo *)0x0);
      pSVar8 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"TextureQualityOptions","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateDropdownSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar3,pSVar7,pSVar8,"",200.0,
                 40.0,300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Int32_array *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelRight;
      pSVar3 = (pSVar2->fields).ShadowQuality;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"ShadowQuality","","",
                          (MethodInfo *)0x0);
      pSVar8 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"ShadowQualityOptions","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateDropdownSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar3,pSVar7,pSVar8,"",200.0,
                 40.0,300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Int32_array *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelRight;
      pSVar3 = (pSVar2->fields).ShadowDistance;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"ShadowDistance","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateSliderSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar3,pSVar7,"",130.0,16.0,2,
                 0.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelRight;
      pSVar3 = (pSVar2->fields).LightDistance;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"LightDistance","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateSliderSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar3,pSVar7,"",130.0,16.0,2,
                 0.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelRight;
      pSVar3 = (pSVar2->fields).AntiAliasingQuality;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"AntiAliasing","","",
                          (MethodInfo *)0x0);
      pSVar8 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"AntiAliasingOptions","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateDropdownSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar3,pSVar7,pSVar8,"",200.0,
                 40.0,300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Int32_array *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelRight;
      pSVar3 = (pSVar2->fields).AnisotropicFiltering;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"Anisotropic","","",
                          (MethodInfo *)0x0);
      pSVar8 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"AnisotropicOptions","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateDropdownSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar3,pSVar7,pSVar8,"",200.0,
                 40.0,300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Int32_array *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelRight;
      pSVar3 = (pSVar2->fields).WeatherEffects;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"WeatherEffects","","",
                          (MethodInfo *)0x0);
      pSVar8 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"WeatherEffectsOptions","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateDropdownSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar3,pSVar7,pSVar8,"",200.0,
                 40.0,300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Int32_array *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelRight;
      pSVar3 = (pSVar2->fields).AmbientOcclusion;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"AmbientOcclusion","","",
                          (MethodInfo *)0x0);
      pSVar8 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"AmbientOcclusionOptions","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateDropdownSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar3,pSVar7,pSVar8,"",200.0,
                 40.0,300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Int32_array *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelRight;
      pSVar3 = (pSVar2->fields).Bloom;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"Bloom","","",
                          (MethodInfo *)0x0);
      pSVar8 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"BloomOptions","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateDropdownSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar3,pSVar7,pSVar8,"",200.0,
                 40.0,300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Int32_array *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelRight;
      pSVar3 = (pSVar2->fields).ChromaticAberrationFX;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"ChromaticAberration","","",
                          (MethodInfo *)0x0);
      pSVar8 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"ChromaticAberrationOptions","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateDropdownSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar3,pSVar7,pSVar8,"",200.0,
                 40.0,300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Int32_array *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelRight;
      pSVar3 = (pSVar2->fields).ColorGrading;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"ColorGrading","","",
                          (MethodInfo *)0x0);
      pSVar8 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"ColorGradingOptions","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateDropdownSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar3,pSVar7,pSVar8,"",200.0,
                 40.0,300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Int32_array *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelRight;
      pSVar3 = (pSVar2->fields).AutoExposure;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"AutoExposure","","",
                          (MethodInfo *)0x0);
      pSVar8 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"AutoExposureOptions","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateDropdownSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar3,pSVar7,pSVar8,"",200.0,
                 40.0,300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Int32_array *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelRight;
      pSVar3 = (pSVar2->fields).DepthOfField;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"DepthOfField","","",
                          (MethodInfo *)0x0);
      pSVar8 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"DepthOfFieldOptions","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateDropdownSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar3,pSVar7,pSVar8,"",200.0,
                 40.0,300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Int32_array *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelRight;
      pSVar3 = (pSVar2->fields).MotionBlur;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"MotionBlur","","",
                          (MethodInfo *)0x0);
      pSVar8 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"MotionBlurOptions","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateDropdownSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar3,pSVar7,pSVar8,"",200.0,
                 40.0,300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Int32_array *)0x0,(MethodInfo *)0x0);
      pUVar4 = (__this->fields).DoublePanelRight;
      pSVar3 = (pSVar2->fields).WaterFX;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"WaterFX","","",
                          (MethodInfo *)0x0);
      pSVar8 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"WaterFXOptions","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateDropdownSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar3,pSVar7,pSVar8,"",200.0,
                 40.0,300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Int32_array *)0x0,(MethodInfo *)0x0);
      pSVar5 = (pSVar2->fields).HDR;
      pUVar4 = (__this->fields).DoublePanelRight;
      pSVar7 = UI_UIManager__GetLocale
                         (category,pSVar10,"HDR","","",
                          (MethodInfo *)0x0);
      pSVar10 = UI_UIManager__GetLocale
                          (category,pSVar10,"HDRTooltip","","",
                           (MethodInfo *)0x0);
      UI_ElementFactory__CreateToggleSetting
                (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar5,pSVar7,pSVar10,30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.SettingsGraphicsPanel$$OnSelectPreset
// il2cpp: void UI_SettingsGraphicsPanel__OnSelectPreset (UI_SettingsGraphicsPanel_o* __this, const MethodInfo* method);
// 0x1822e2270

void
UI_SettingsGraphicsPanel__OnSelectPreset(UI_SettingsGraphicsPanel_o* __this, MethodInfo* method)

{
  Settings_GraphicsSettings_o *__this_00;
  
  if (Il2CppMethodInitialized_18434762a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_18434762a = '\x01';
  }
  __this_00 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if (__this_00 != (Settings_GraphicsSettings_o *)0x0) {
    Settings_GraphicsSettings__OnSelectPreset(__this_00,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._23_SyncSettingElements.methodPtr)
              (__this,(__this->klass->vtable)._23_SyncSettingElements.method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.SettingsGraphicsPanel$$.ctor
// il2cpp: void UI_SettingsGraphicsPanel___ctor (UI_SettingsGraphicsPanel_o* __this, const MethodInfo* method);
// 0x181da8ae0

void
UI_SettingsGraphicsPanel___ctor(UI_SettingsGraphicsPanel_o* __this, MethodInfo* method)

{
  UI_CategoryPanel___ctor((UI_TopLeftHUD_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsGraphicsPanel$$<Setup>b__2_0
// il2cpp: void UI_SettingsGraphicsPanel___Setup_b__2_0 (UI_SettingsGraphicsPanel_o* __this, const MethodInfo* method);
// 0x1822e2270

void UI_SettingsGraphicsPanel___Setup_b__2_0(UI_SettingsGraphicsPanel_o *__this,MethodInfo *method)

{
  Settings_GraphicsSettings_o *__this_00;
  
  if (Il2CppMethodInitialized_18434762a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_18434762a = '\x01';
  }
  __this_00 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if (__this_00 != (Settings_GraphicsSettings_o *)0x0) {
    Settings_GraphicsSettings__OnSelectPreset(__this_00,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._23_SyncSettingElements.methodPtr)
              (__this,(__this->klass->vtable)._23_SyncSettingElements.method);
    return;
  }
  ThrowNullReferenceException();
}


