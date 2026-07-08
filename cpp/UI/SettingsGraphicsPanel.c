// Type: UI.SettingsGraphicsPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/SettingsGraphicsPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/SettingsPopup/SettingsGraphicsPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.SettingsGraphicsPanel$$get_ScrollBar
// il2cpp: bool UI_SettingsGraphicsPanel__get_ScrollBar (UI_SettingsGraphicsPanel_o* __this, const MethodInfo* method);
// 0x412e980

bool_conflict
UI_SettingsGraphicsPanel__get_ScrollBar(UI_SettingsGraphicsPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SettingsGraphicsPanel$$Setup
// il2cpp: void UI_SettingsGraphicsPanel__Setup (UI_SettingsGraphicsPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x412e990

void UI_SettingsGraphicsPanel__Setup
               (UI_SettingsGraphicsPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_TypedSetting_int__o *__this_00;
  System_String_o *category;
  UnityEngine_Transform_o *pUVar3;
  Settings_BaseSetting_o *pSVar4;
  int32_t iVar5;
  System_String_o *pSVar6;
  UI_ElementStyle_o *__this_01;
  System_String_array *pSVar7;
  UnityEngine_Events_UnityAction_o *onDropdownOptionSelect;
  MethodInfo *pMVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  MethodInfo *in_R9;
  MethodInfo *pMVar11;
  
  if (DAT_05704943 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_FullscreenHandler);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__2_0);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsPopup);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"WeaponTrailHold");
    il2cpp_init_method_metadata(&"AntiAliasing");
    il2cpp_init_method_metadata(&"WeaponTrail");
    il2cpp_init_method_metadata(&"ShadowQualityOptions");
    il2cpp_init_method_metadata(&"WeaponFireEffect");
    il2cpp_init_method_metadata(&"FullscreenOptions");
    il2cpp_init_method_metadata(&"WeatherEffects");
    il2cpp_init_method_metadata(&"MotionBlur");
    il2cpp_init_method_metadata(&"WeatherEffectsOptions");
    il2cpp_init_method_metadata(&"Fullscreen");
    il2cpp_init_method_metadata(&"RenderDistance");
    il2cpp_init_method_metadata(&"BloodSplatterEnabled");
    il2cpp_init_method_metadata(&"MotionBlurOptions");
    il2cpp_init_method_metadata(&"PresetQualityOptions");
    il2cpp_init_method_metadata(&"DepthOfField");
    il2cpp_init_method_metadata(&"WeaponTrailOptions");
    il2cpp_init_method_metadata(&"AmbientOcclusionOptions");
    il2cpp_init_method_metadata(&"ChromaticAberrationOptions");
    il2cpp_init_method_metadata(&"AmbientOcclusion");
    il2cpp_init_method_metadata(&"Resolution");
    il2cpp_init_method_metadata(&"FPSCap");
    il2cpp_init_method_metadata(&"Anisotropic");
    il2cpp_init_method_metadata(&"ShowFPS");
    il2cpp_init_method_metadata(&"VSync");
    il2cpp_init_method_metadata(&"ShadowDistance");
    il2cpp_init_method_metadata(&"DepthOfFieldOptions");
    il2cpp_init_method_metadata(&"LightDistance");
    il2cpp_init_method_metadata(&"FullscreenTooltip");
    il2cpp_init_method_metadata(&"MipmapEnabled");
    il2cpp_init_method_metadata(&"InterpolationEnabled");
    il2cpp_init_method_metadata(&"HDR");
    il2cpp_init_method_metadata(&"WindEffectEnabled");
    il2cpp_init_method_metadata(&"WeaponTrailHoldTooltip");
    il2cpp_init_method_metadata(&"WaterFX");
    il2cpp_init_method_metadata(&"ColorGradingOptions");
    il2cpp_init_method_metadata(&"AnisotropicOptions");
    il2cpp_init_method_metadata(&"AutoExposure");
    il2cpp_init_method_metadata(&"MenuFPSCap");
    il2cpp_init_method_metadata(&"TextureQualityOptions");
    il2cpp_init_method_metadata(&"RenderDistanceTooltip");
    il2cpp_init_method_metadata(&"ChromaticAberration");
    il2cpp_init_method_metadata(&"InterpolationEnabledTooltip");
    il2cpp_init_method_metadata(&"NapeBloodEnabled");
    il2cpp_init_method_metadata(&"ShadowQuality");
    il2cpp_init_method_metadata(&"PresetQuality");
    il2cpp_init_method_metadata(&"BloomOptions");
    il2cpp_init_method_metadata(&"MipmapEnabledTooltip");
    il2cpp_init_method_metadata(&"WaterFXOptions");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"AutoExposureOptions");
    il2cpp_init_method_metadata(&"Graphics");
    il2cpp_init_method_metadata(&"Bloom");
    il2cpp_init_method_metadata(&"AntiAliasingOptions");
    il2cpp_init_method_metadata(&"TextureQuality");
    il2cpp_init_method_metadata(&"HDRTooltip");
    il2cpp_init_method_metadata(&"ColorGrading");
    il2cpp_init_method_metadata(&"WeaponFireEffectTooltip");
    DAT_05704943 = '\x01';
  }
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar10 = "Graphics";
  if (parent != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_SettingsPopup->_2).naturalAligment;
    if (((parent->klass->_2).naturalAligment < bVar1) ||
       ((parent->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_SettingsPopup)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(parent);
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
    if ((lVar2 != 0) &&
       (__this_00 = *(Settings_TypedSetting_int__o **)(lVar2 + 0x30),
       __this_00 != (Settings_TypedSetting_int__o *)0x0)) {
      category = (System_String_o *)parent[1].fields._currentCategoryPanel;
      iVar5 = (__this_00->fields)._value;
      if (*(int *)(TypeInfo_FullscreenHandler + 0xe4) == 0) {
        il2cpp_init_class();
      }
      iVar5 = ApplicationManagers_FullscreenHandler__SanitizeResolutionSetting
                        (iVar5,(MethodInfo *)0x0);
      Settings_TypedSetting<int>__set_Value(__this_00,iVar5,MethodInfo_Void_set_Value);
      pSVar6 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
      UI_ElementStyle___ctor(__this_01,0x18,200.0,20.0,pSVar6,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x20);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pMVar8 = "";
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"PresetQuality",(System_String_o *)"",
                          (System_String_o *)"",in_R9);
      pSVar7 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"PresetQualityOptions",(System_String_o *)"",pMVar8);
      onDropdownOptionSelect = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      pMVar11 = "";
      UI_ElementFactory__CreateDropdownSetting
                (pUVar3,__this_01,pSVar4,pSVar6,pSVar7,(System_String_o *)"",200.0,40.0,
                 300.0,(System_Nullable_float__o)0x0,onDropdownOptionSelect,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x28);
      pMVar8 = "";
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"Fullscreen",(System_String_o *)"",
                          (System_String_o *)"",pMVar11);
      pSVar7 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"FullscreenOptions",(System_String_o *)"",pMVar8);
      pMVar8 = (MethodInfo *)
               UI_UIManager__GetLocale
                         (category,pSVar10,"FullscreenTooltip",(System_String_o *)"",
                          (System_String_o *)"",pMVar11);
      UI_ElementFactory__CreateDropdownSetting
                (pUVar3,__this_01,pSVar4,pSVar6,pSVar7,(System_String_o *)pMVar8,160.0,40.0,300.0,
                 (System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x30);
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"Resolution",(System_String_o *)"",
                          (System_String_o *)"",pMVar8);
      pSVar7 = ApplicationManagers_FullscreenHandler__GetResolutionOptions((MethodInfo *)0x0);
      pMVar8 = "";
      UI_ElementFactory__CreateDropdownSetting
                (pUVar3,__this_01,pSVar4,pSVar6,pSVar7,(System_String_o *)"",200.0,40.0,
                 300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x60);
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"RenderDistance",(System_String_o *)"",
                          (System_String_o *)"",pMVar8);
      pSVar9 = UI_UIManager__GetLocale
                         (category,pSVar10,"RenderDistanceTooltip",(System_String_o *)"",
                          (System_String_o *)"",pMVar8);
      pMVar8 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_01,pSVar4,pSVar6,pSVar9,100.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x38);
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"FPSCap",(System_String_o *)"",
                          (System_String_o *)"",pMVar8);
      pMVar8 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_01,pSVar4,pSVar6,(System_String_o *)"",100.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x40);
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"MenuFPSCap",(System_String_o *)"",
                          (System_String_o *)"",pMVar8);
      pMVar8 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_01,pSVar4,pSVar6,(System_String_o *)"",100.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x48);
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"VSync",(System_String_o *)"",
                          (System_String_o *)"",pMVar8);
      pMVar8 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateToggleSetting
                (pUVar3,__this_01,pSVar4,pSVar6,(System_String_o *)"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x50);
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"InterpolationEnabled",(System_String_o *)"",
                          (System_String_o *)"",pMVar8);
      pSVar9 = UI_UIManager__GetLocale
                         (category,pSVar10,"InterpolationEnabledTooltip",(System_String_o *)"",
                          (System_String_o *)"",pMVar8);
      pMVar8 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateToggleSetting
                (pUVar3,__this_01,pSVar4,pSVar6,pSVar9,30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x58);
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"ShowFPS",(System_String_o *)"",
                          (System_String_o *)"",pMVar8);
      pMVar8 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateToggleSetting
                (pUVar3,__this_01,pSVar4,pSVar6,(System_String_o *)"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0xd0);
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"MipmapEnabled",(System_String_o *)"",
                          (System_String_o *)"",pMVar8);
      pSVar9 = UI_UIManager__GetLocale
                         (category,pSVar10,"MipmapEnabledTooltip",(System_String_o *)"",
                          (System_String_o *)"",pMVar8);
      pMVar8 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateToggleSetting
                (pUVar3,__this_01,pSVar4,pSVar6,pSVar9,30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 200);
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"NapeBloodEnabled",(System_String_o *)"",
                          (System_String_o *)"",pMVar8);
      pMVar8 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateToggleSetting
                (pUVar3,__this_01,pSVar4,pSVar6,(System_String_o *)"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0xb8);
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"WindEffectEnabled",(System_String_o *)"",
                          (System_String_o *)"",pMVar8);
      pMVar8 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateToggleSetting
                (pUVar3,__this_01,pSVar4,pSVar6,(System_String_o *)"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0xc0);
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"BloodSplatterEnabled",(System_String_o *)"",
                          (System_String_o *)"",pMVar8);
      pMVar11 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateToggleSetting
                (pUVar3,__this_01,pSVar4,pSVar6,(System_String_o *)"",30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0xa0);
      pMVar8 = "";
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"WeaponTrail",(System_String_o *)"",
                          (System_String_o *)"",pMVar11);
      pSVar7 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"WeaponTrailOptions",(System_String_o *)"",pMVar8);
      pMVar8 = "";
      UI_ElementFactory__CreateDropdownSetting
                (pUVar3,__this_01,pSVar4,pSVar6,pSVar7,(System_String_o *)"",200.0,40.0,
                 300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0xa8);
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"WeaponTrailHold",(System_String_o *)"",
                          (System_String_o *)"",pMVar8);
      pSVar9 = UI_UIManager__GetLocale
                         (category,pSVar10,"WeaponTrailHoldTooltip",(System_String_o *)"",
                          (System_String_o *)"",pMVar8);
      pMVar8 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateToggleSetting
                (pUVar3,__this_01,pSVar4,pSVar6,pSVar9,30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0xb0);
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"WeaponFireEffect",(System_String_o *)"",
                          (System_String_o *)"",pMVar8);
      pSVar9 = UI_UIManager__GetLocale
                         (category,pSVar10,"WeaponFireEffectTooltip",(System_String_o *)"",
                          (System_String_o *)"",pMVar8);
      pMVar11 = (MethodInfo *)0x0;
      UI_ElementFactory__CreateToggleSetting
                (pUVar3,__this_01,pSVar4,pSVar6,pSVar9,30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelRight;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x68);
      pMVar8 = "";
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"TextureQuality",(System_String_o *)"",
                          (System_String_o *)"",pMVar11);
      pSVar7 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"TextureQualityOptions",(System_String_o *)"",pMVar8);
      pMVar11 = "";
      UI_ElementFactory__CreateDropdownSetting
                (pUVar3,__this_01,pSVar4,pSVar6,pSVar7,(System_String_o *)"",200.0,40.0,
                 300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelRight;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x70);
      pMVar8 = "";
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"ShadowQuality",(System_String_o *)"",
                          (System_String_o *)"",pMVar11);
      pSVar7 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"ShadowQualityOptions",(System_String_o *)"",pMVar8);
      pMVar8 = "";
      UI_ElementFactory__CreateDropdownSetting
                (pUVar3,__this_01,pSVar4,pSVar6,pSVar7,(System_String_o *)"",200.0,40.0,
                 300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelRight;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x78);
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"ShadowDistance",(System_String_o *)"",
                          (System_String_o *)"",pMVar8);
      pMVar8 = (MethodInfo *)0x2;
      UI_ElementFactory__CreateSliderSetting
                (pUVar3,__this_01,pSVar4,pSVar6,(System_String_o *)"",130.0,16.0,2,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelRight;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x80);
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"LightDistance",(System_String_o *)"",
                          (System_String_o *)"",pMVar8);
      pMVar11 = (MethodInfo *)0x2;
      UI_ElementFactory__CreateSliderSetting
                (pUVar3,__this_01,pSVar4,pSVar6,(System_String_o *)"",130.0,16.0,2,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelRight;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x88);
      pMVar8 = "";
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"AntiAliasing",(System_String_o *)"",
                          (System_String_o *)"",pMVar11);
      pSVar7 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"AntiAliasingOptions",(System_String_o *)"",pMVar8);
      pMVar11 = "";
      UI_ElementFactory__CreateDropdownSetting
                (pUVar3,__this_01,pSVar4,pSVar6,pSVar7,(System_String_o *)"",200.0,40.0,
                 300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelRight;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x90);
      pMVar8 = "";
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"Anisotropic",(System_String_o *)"",
                          (System_String_o *)"",pMVar11);
      pSVar7 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"AnisotropicOptions",(System_String_o *)"",pMVar8);
      pMVar11 = "";
      UI_ElementFactory__CreateDropdownSetting
                (pUVar3,__this_01,pSVar4,pSVar6,pSVar7,(System_String_o *)"",200.0,40.0,
                 300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelRight;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x98);
      pMVar8 = "";
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"WeatherEffects",(System_String_o *)"",
                          (System_String_o *)"",pMVar11);
      pSVar7 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"WeatherEffectsOptions",(System_String_o *)"",pMVar8);
      pMVar11 = "";
      UI_ElementFactory__CreateDropdownSetting
                (pUVar3,__this_01,pSVar4,pSVar6,pSVar7,(System_String_o *)"",200.0,40.0,
                 300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelRight;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0xd8);
      pMVar8 = "";
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"AmbientOcclusion",(System_String_o *)"",
                          (System_String_o *)"",pMVar11);
      pSVar7 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"AmbientOcclusionOptions",(System_String_o *)"",pMVar8);
      pMVar11 = "";
      UI_ElementFactory__CreateDropdownSetting
                (pUVar3,__this_01,pSVar4,pSVar6,pSVar7,(System_String_o *)"",200.0,40.0,
                 300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelRight;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0xe0);
      pMVar8 = "";
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"Bloom",(System_String_o *)"",
                          (System_String_o *)"",pMVar11);
      pSVar7 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"BloomOptions",(System_String_o *)"",pMVar8);
      pMVar11 = "";
      UI_ElementFactory__CreateDropdownSetting
                (pUVar3,__this_01,pSVar4,pSVar6,pSVar7,(System_String_o *)"",200.0,40.0,
                 300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelRight;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0xe8);
      pMVar8 = "";
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"ChromaticAberration",(System_String_o *)"",
                          (System_String_o *)"",pMVar11);
      pSVar7 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"ChromaticAberrationOptions",(System_String_o *)"",pMVar8);
      pMVar11 = "";
      UI_ElementFactory__CreateDropdownSetting
                (pUVar3,__this_01,pSVar4,pSVar6,pSVar7,(System_String_o *)"",200.0,40.0,
                 300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelRight;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0xf0);
      pMVar8 = "";
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"ColorGrading",(System_String_o *)"",
                          (System_String_o *)"",pMVar11);
      pSVar7 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"ColorGradingOptions",(System_String_o *)"",pMVar8);
      pMVar11 = "";
      UI_ElementFactory__CreateDropdownSetting
                (pUVar3,__this_01,pSVar4,pSVar6,pSVar7,(System_String_o *)"",200.0,40.0,
                 300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelRight;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0xf8);
      pMVar8 = "";
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"AutoExposure",(System_String_o *)"",
                          (System_String_o *)"",pMVar11);
      pSVar7 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"AutoExposureOptions",(System_String_o *)"",pMVar8);
      pMVar11 = "";
      UI_ElementFactory__CreateDropdownSetting
                (pUVar3,__this_01,pSVar4,pSVar6,pSVar7,(System_String_o *)"",200.0,40.0,
                 300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelRight;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x100);
      pMVar8 = "";
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"DepthOfField",(System_String_o *)"",
                          (System_String_o *)"",pMVar11);
      pSVar7 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"DepthOfFieldOptions",(System_String_o *)"",pMVar8);
      pMVar11 = "";
      UI_ElementFactory__CreateDropdownSetting
                (pUVar3,__this_01,pSVar4,pSVar6,pSVar7,(System_String_o *)"",200.0,40.0,
                 300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelRight;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x108);
      pMVar8 = "";
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"MotionBlur",(System_String_o *)"",
                          (System_String_o *)"",pMVar11);
      pSVar7 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"MotionBlurOptions",(System_String_o *)"",pMVar8);
      pMVar11 = "";
      UI_ElementFactory__CreateDropdownSetting
                (pUVar3,__this_01,pSVar4,pSVar6,pSVar7,(System_String_o *)"",200.0,40.0,
                 300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelRight;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x110);
      pMVar8 = "";
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"WaterFX",(System_String_o *)"",
                          (System_String_o *)"",pMVar11);
      pSVar7 = UI_UIManager__GetLocaleArray
                         (category,pSVar10,"WaterFXOptions",(System_String_o *)"",pMVar8);
      pMVar8 = "";
      UI_ElementFactory__CreateDropdownSetting
                (pUVar3,__this_01,pSVar4,pSVar6,pSVar7,(System_String_o *)"",200.0,40.0,
                 300.0,(System_Nullable_float__o)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (MethodInfo *)0x0);
      pUVar3 = (__this->fields).DoublePanelRight;
      pSVar4 = *(Settings_BaseSetting_o **)(lVar2 + 0x118);
      pSVar6 = UI_UIManager__GetLocale
                         (category,pSVar10,"HDR",(System_String_o *)"",
                          (System_String_o *)"",pMVar8);
      pSVar10 = UI_UIManager__GetLocale
                          (category,pSVar10,"HDRTooltip",(System_String_o *)"",
                           (System_String_o *)"",pMVar8);
      UI_ElementFactory__CreateToggleSetting
                (pUVar3,__this_01,pSVar4,pSVar6,pSVar10,30.0,30.0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsGraphicsPanel$$OnSelectPreset
// il2cpp: void UI_SettingsGraphicsPanel__OnSelectPreset (UI_SettingsGraphicsPanel_o* __this, const MethodInfo* method);
// 0x4130720

void UI_SettingsGraphicsPanel__OnSelectPreset(UI_SettingsGraphicsPanel_o *__this,MethodInfo *method)

{
  Settings_GraphicsSettings_o *__this_00;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 extraout_RDX;
  
  if (DAT_05704944 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_05704944 = '\x01';
  }
  __this_00 = *(Settings_GraphicsSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if (__this_00 != (Settings_GraphicsSettings_o *)0x0) {
    Settings_GraphicsSettings__OnSelectPreset(__this_00,(MethodInfo *)0x0);
    vtable_dispatch = (__this->klass->vtable)._23_SyncSettingElements.methodPtr;
    (*vtable_dispatch)
              (__this,(__this->klass->vtable)._23_SyncSettingElements.method,extraout_RDX,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsGraphicsPanel$$.ctor
// il2cpp: void UI_SettingsGraphicsPanel___ctor (UI_SettingsGraphicsPanel_o* __this, const MethodInfo* method);
// 0x4130780

void UI_SettingsGraphicsPanel___ctor(UI_SettingsGraphicsPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsGraphicsPanel$$<Setup>b__2_0
// il2cpp: void UI_SettingsGraphicsPanel___Setup_b__2_0 (UI_SettingsGraphicsPanel_o* __this, const MethodInfo* method);
// 0x4130790

void UI_SettingsGraphicsPanel__<Setup>b__2_0(UI_SettingsGraphicsPanel_o *__this,MethodInfo *method)

{
  Settings_GraphicsSettings_o *__this_00;
  Il2CppMethodPointer vtable_dispatch;
  undefined8 extraout_RDX;
  
  if (DAT_05704944 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_05704944 = '\x01';
  }
  __this_00 = *(Settings_GraphicsSettings_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
  if (__this_00 != (Settings_GraphicsSettings_o *)0x0) {
    Settings_GraphicsSettings__OnSelectPreset(__this_00,(MethodInfo *)0x0);
    vtable_dispatch = (__this->klass->vtable)._23_SyncSettingElements.methodPtr;
    (*vtable_dispatch)
              (__this,(__this->klass->vtable)._23_SyncSettingElements.method,extraout_RDX,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


