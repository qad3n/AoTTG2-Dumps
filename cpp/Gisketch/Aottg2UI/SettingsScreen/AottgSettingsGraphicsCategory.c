// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGraphicsCategory
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsGraphicsCategory.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGraphicsCategory$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory__Build (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x1823180c0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory__Build
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *context,MethodInfo *method)

{
  System_String_o *categoryId;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory_o *__this;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o local_58;
  
  if (Il2CppMethodInitialized_184347781 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"graphics");
    Il2CppMethodInitialized_184347781 = '\x01';
  }
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory__Groups((MethodInfo *)0x0);
  categoryId = "graphics";
  if (Il2CppMethodInitialized_18434775e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
    Il2CppMethodInitialized_18434775e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
  local_58.fields._group = (context->fields)._group;
  local_58.fields._order = (context->fields)._order;
  local_58.fields._12_4_ = *(undefined4 *)&(context->fields).field_0xc;
  local_58.fields._SectionId_k__BackingField = (context->fields)._SectionId_k__BackingField;
  local_58.fields._SectionTitle_k__BackingField = (context->fields)._SectionTitle_k__BackingField;
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory___ctor
            (__this,&local_58,categoryId,groups,(System_String_o *)0x0,0.0,(System_Nullable_float__o)0x0,
             (MethodInfo *)0x0);
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (content,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGraphicsCategory$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory__SyncState (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x18231aa20

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory__SyncState
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory__Groups((MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SyncState(root,groups,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGraphicsCategory$$Groups
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory__Groups (const MethodInfo* method);
// 0x182318190
// asm: 17 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182318bde: mov rbx, r13
// asm:   0x182318ced: mov r9, r13
// asm:   0x182318d7f: mov r9, r13
// asm:   0x182318e01: mov r9, r13
// asm:   0x182318e86: mov r9, r13
// asm:   0x182318f01: mov r9, r13
// asm:   0x182318f8a: mov r9, r13
// asm:   0x18231900f: mov r9, r13
// asm:   0x182319105: mov r14, r13
// asm:   0x182319354: mov r9, r14
// asm:   0x1823193e0: mov r9, r14
// asm:   0x18231946c: mov r9, r14
// asm:   0x1823194f1: mov r9, r14
// asm:   0x182319576: mov r9, r14
// asm:   0x1823198d7: mov r9, r14
// asm:   0x18231995c: mov r9, r14
// asm:   0x18231a686: mov r9, rsi

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory__Groups(MethodInfo *method)

{
  Settings_GraphicsSettings_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  int32_t iVar8;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *pGVar9;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar10;
  System_String_array *pSVar11;
  DG_Tweening_Core_DOSetter_Color2__o *__this;
  Il2CppObject *pIVar12;
  Il2CppObject *pIVar13;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *pGVar14;
  Settings_IntSetting_o *pSVar15;
  Settings_IntSetting_o *pSVar16;
  Settings_BoolSetting_o *setting;
  
  if (Il2CppMethodInitialized_184347782 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory_PresetChanged);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Effects");
    il2cpp_codegen_initialize_runtime_metadata(&"WeaponTrailHold");
    il2cpp_codegen_initialize_runtime_metadata(&"AntiAliasing");
    il2cpp_codegen_initialize_runtime_metadata(&"FPS cap (0 for off)");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-fullscreen");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-anisotropic");
    il2cpp_codegen_initialize_runtime_metadata(&"Ultra");
    il2cpp_codegen_initialize_runtime_metadata(&"WeaponTrail");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-additional-lights");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-post-processing");
    il2cpp_codegen_initialize_runtime_metadata(&"Depth of Field");
    il2cpp_codegen_initialize_runtime_metadata(&"WeaponFireEffect");
    il2cpp_codegen_initialize_runtime_metadata(&"Weapon trail");
    il2cpp_codegen_initialize_runtime_metadata(&"Shadow quality");
    il2cpp_codegen_initialize_runtime_metadata(&"WeatherEffects");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-performance");
    il2cpp_codegen_initialize_runtime_metadata(&"MotionBlur");
    il2cpp_codegen_initialize_runtime_metadata(&"Fullscreen");
    il2cpp_codegen_initialize_runtime_metadata(&"RenderDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-ambient-occlusion");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-show-fps");
    il2cpp_codegen_initialize_runtime_metadata(&"BloodSplatterEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-texture-quality");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-preset-quality");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-weapon-trail-hold");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-blood-splatter");
    il2cpp_codegen_initialize_runtime_metadata(&"Preset quality");
    il2cpp_codegen_initialize_runtime_metadata(&"DepthOfField");
    il2cpp_codegen_initialize_runtime_metadata(&"Mipmapping");
    il2cpp_codegen_initialize_runtime_metadata(&"Show FPS");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-resolution");
    il2cpp_codegen_initialize_runtime_metadata(&"AmbientOcclusion");
    il2cpp_codegen_initialize_runtime_metadata(&"Resolution");
    il2cpp_codegen_initialize_runtime_metadata(&"Motion Blur");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-weapon-trail");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-preset-display");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-render-distance");
    il2cpp_codegen_initialize_runtime_metadata(&"FPSCap");
    il2cpp_codegen_initialize_runtime_metadata(&"Anti-aliasing");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-depth-of-field");
    il2cpp_codegen_initialize_runtime_metadata(&"Chromatic Aberration");
    il2cpp_codegen_initialize_runtime_metadata(&"Interpolation");
    il2cpp_codegen_initialize_runtime_metadata(&"Nape blood");
    il2cpp_codegen_initialize_runtime_metadata(&"Anisotropic");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-fps-cap");
    il2cpp_codegen_initialize_runtime_metadata(&"Weapon trail hold");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowFPS");
    il2cpp_codegen_initialize_runtime_metadata(&"On");
    il2cpp_codegen_initialize_runtime_metadata(&"VSync");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-chromatic-aberration");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-effects");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-shadow-quality");
    il2cpp_codegen_initialize_runtime_metadata(&"Mine");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-motion-blur");
    il2cpp_codegen_initialize_runtime_metadata(&"LightDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-texture-lighting");
    il2cpp_codegen_initialize_runtime_metadata(&"Auto Exposure");
    il2cpp_codegen_initialize_runtime_metadata(&"Off");
    il2cpp_codegen_initialize_runtime_metadata(&"FullscreenTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"MipmapEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-water-fx");
    il2cpp_codegen_initialize_runtime_metadata(&"Texture quality");
    il2cpp_codegen_initialize_runtime_metadata(&"Blood splatter");
    il2cpp_codegen_initialize_runtime_metadata(&"InterpolationEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"Render distance");
    il2cpp_codegen_initialize_runtime_metadata(&"Preset / Display");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-weather-effects");
    il2cpp_codegen_initialize_runtime_metadata(&"HDR");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-interpolation");
    il2cpp_codegen_initialize_runtime_metadata(&"Texture / Lighting");
    il2cpp_codegen_initialize_runtime_metadata(&"Very low");
    il2cpp_codegen_initialize_runtime_metadata(&"WindEffectEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"Very high");
    il2cpp_codegen_initialize_runtime_metadata(&"WeaponTrailHoldTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"AdditionalLights");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-menu-fps-cap");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-nape-blood");
    il2cpp_codegen_initialize_runtime_metadata(&"Additional lights");
    il2cpp_codegen_initialize_runtime_metadata(&"WaterFX");
    il2cpp_codegen_initialize_runtime_metadata(&"Exclusive");
    il2cpp_codegen_initialize_runtime_metadata(&"Weapon fire effect");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-anti-aliasing");
    il2cpp_codegen_initialize_runtime_metadata(&"Menu FPS cap");
    il2cpp_codegen_initialize_runtime_metadata(&"AutoExposure");
    il2cpp_codegen_initialize_runtime_metadata(&"High");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-color-grading");
    il2cpp_codegen_initialize_runtime_metadata(&"Lowest");
    il2cpp_codegen_initialize_runtime_metadata(&"MenuFPSCap");
    il2cpp_codegen_initialize_runtime_metadata(&"Color Grading");
    il2cpp_codegen_initialize_runtime_metadata(&"RenderDistanceTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"ChromaticAberration");
    il2cpp_codegen_initialize_runtime_metadata(&"Weather effects");
    il2cpp_codegen_initialize_runtime_metadata(&"InterpolationEnabledTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-shadow-distance");
    il2cpp_codegen_initialize_runtime_metadata(&"Windowed");
    il2cpp_codegen_initialize_runtime_metadata(&"NapeBloodEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"Borderless");
    il2cpp_codegen_initialize_runtime_metadata(&"Ambient Occlusion");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowQuality");
    il2cpp_codegen_initialize_runtime_metadata(&"All");
    il2cpp_codegen_initialize_runtime_metadata(&"Light distance");
    il2cpp_codegen_initialize_runtime_metadata(&"PresetQuality");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-weapon-fire-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-auto-exposure");
    il2cpp_codegen_initialize_runtime_metadata(&"MipmapEnabledTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"Performance");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-vsync");
    il2cpp_codegen_initialize_runtime_metadata(&"Water FX");
    il2cpp_codegen_initialize_runtime_metadata(&"Post Processing");
    il2cpp_codegen_initialize_runtime_metadata(&"Graphics");
    il2cpp_codegen_initialize_runtime_metadata(&"Bloom");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-wind-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-mipmap");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-bloom");
    il2cpp_codegen_initialize_runtime_metadata(&"Anisotropic filtering");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-light-distance");
    il2cpp_codegen_initialize_runtime_metadata(&"Wind effect");
    il2cpp_codegen_initialize_runtime_metadata(&"TextureQuality");
    il2cpp_codegen_initialize_runtime_metadata(&"HDRTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"ColorGrading");
    il2cpp_codegen_initialize_runtime_metadata(&"Low");
    il2cpp_codegen_initialize_runtime_metadata(&"WeaponFireEffectTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"Shadow distance");
    il2cpp_codegen_initialize_runtime_metadata(&"Medium");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-hdr");
    Il2CppMethodInitialized_184347782 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
    pGVar9 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array,5);
    pGVar10 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
              SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,3);
    pSVar16 = (Settings_IntSetting_o *)0x0;
  }
  else {
    pSVar16 = (pSVar1->fields).ScreenResolution;
    if (pSVar16 == (Settings_IntSetting_o *)0x0) goto label_18231a766;
    iVar8 = (pSVar16->fields)._value;
    if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
    }
    iVar8 = ApplicationManagers_FullscreenHandler__SanitizeResolutionSetting(iVar8,(MethodInfo *)0x0);
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar16,iVar8,
               (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    pGVar9 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array,5);
    pGVar10 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
              SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,3);
    pSVar16 = (pSVar1->fields).PresetQuality;
  }
  pSVar4 = "settings-graphics-preset-quality";
  pSVar6 = "settings-graphics-preset-display";
  pSVar7 = "PresetQuality";
  pSVar5 = "Preset / Display";
  pSVar2 = "Graphics";
  pSVar11 = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  pSVar3 = "Very low";
  if (pSVar11 == (System_String_array *)0x0) goto label_18231a766;
  if ((int)pSVar11->max_length != 0) {
    pSVar11->m_Items[0] = "Very low";
    Il2CppCodeGenWriteBarrier(pSVar11->m_Items,pSVar3);
    pSVar3 = "Low";
    if (1 < (uint)pSVar11->max_length) {
      pSVar11->m_Items[1] = "Low";
      Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 1,pSVar3);
      pSVar3 = "Medium";
      if (2 < (uint)pSVar11->max_length) {
        pSVar11->m_Items[2] = "Medium";
        Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 2,pSVar3);
        pSVar3 = "High";
        if (3 < (uint)pSVar11->max_length) {
          pSVar11->m_Items[3] = "High";
          Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 3,pSVar3);
          pSVar3 = "Very high";
          if (4 < (uint)pSVar11->max_length) {
            pSVar11->m_Items[4] = "Very high";
            Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 4,pSVar3);
            __this = (DG_Tweening_Core_DOSetter_Color2__o *)
                     il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
            System_Action_GisketchActionContext____ctor
                      (__this,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory_PresetChanged
                       ,(MethodInfo_1387DC0 *)0x0);
            pIVar12 = (Il2CppObject *)
                      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown
                                (pSVar4,pSVar2,pSVar7,pSVar16,"Preset quality",pSVar11,
                                 (System_String_o *)0x0,(System_String_o *)0x0,
                                 (System_Action_GisketchActionContext__o *)__this,(MethodInfo *)0x0);
            if (pGVar10 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
label_18231a766:
              ThrowNullReferenceException();
            }
            if ((pIVar12 != (Il2CppObject *)0x0) &&
               (pIVar13 = il2cpp_vm_Object_IsInst(pIVar12,(((pGVar10->obj).klass)->_1).element_class),
               pIVar13 == (Il2CppObject *)0x0)) {
              pIVar12 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar12,(MethodInfo *)0x0);
            }
            if ((int)pGVar10->max_length != 0) {
              pGVar10->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar12;
              Il2CppCodeGenWriteBarrier(pGVar10->m_Items,pIVar12);
              pSVar7 = "Fullscreen";
              pSVar3 = "settings-graphics-fullscreen";
              pSVar2 = "Graphics";
              if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
                pSVar16 = (Settings_IntSetting_o *)0x0;
              }
              else {
                pSVar16 = (pSVar1->fields).FullScreenMode;
              }
              pSVar11 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
              pSVar4 = "Windowed";
              if (pSVar11 == (System_String_array *)0x0) goto label_18231a766;
              if ((int)pSVar11->max_length != 0) {
                pSVar11->m_Items[0] = "Windowed";
                Il2CppCodeGenWriteBarrier(pSVar11->m_Items,pSVar4);
                pSVar4 = "Borderless";
                if (1 < (uint)pSVar11->max_length) {
                  pSVar11->m_Items[1] = "Borderless";
                  Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 1,pSVar4);
                  pSVar4 = "Exclusive";
                  if (2 < (uint)pSVar11->max_length) {
                    pSVar11->m_Items[2] = "Exclusive";
                    Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 2,pSVar4);
                    pIVar12 = (Il2CppObject *)
                              Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                        (pSVar3,pSVar2,pSVar7,pSVar16,"Fullscreen",pSVar11,
                                         "FullscreenTooltip",(System_String_o *)0x0,
                                         (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
                    if ((pIVar12 != (Il2CppObject *)0x0) &&
                       (pIVar13 = il2cpp_vm_Object_IsInst(pIVar12,(((pGVar10->obj).klass)->_1).element_class),
                       pIVar13 == (Il2CppObject *)0x0)) {
                      pIVar12 = il2cpp_codegen_get_array_type_mismatch_exception();
                      il2cpp_codegen_raise_exception(pIVar12,(MethodInfo *)0x0);
                    }
                    if (1 < (uint)pGVar10->max_length) {
                      pGVar10->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar12;
                      Il2CppCodeGenWriteBarrier(pGVar10->m_Items + 1,pIVar12);
                      pSVar7 = "Resolution";
                      pSVar3 = "settings-graphics-resolution";
                      pSVar2 = "Graphics";
                      pSVar16 = (Settings_IntSetting_o *)0x0;
                      pSVar15 = pSVar16;
                      if (pSVar1 != (Settings_GraphicsSettings_o *)0x0) {
                        pSVar15 = (pSVar1->fields).ScreenResolution;
                      }
                      pSVar11 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__SafeResolutions
                                          ((MethodInfo *)0x0);
                      pIVar12 = (Il2CppObject *)
                                Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown
                                          (pSVar3,pSVar2,pSVar7,pSVar15,"Resolution",pSVar11,
                                           (System_String_o *)0x0,(System_String_o *)0x0,
                                           (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
                      if ((pIVar12 != (Il2CppObject *)0x0) &&
                         (pIVar13 = il2cpp_vm_Object_IsInst
                                              (pIVar12,(((pGVar10->obj).klass)->_1).element_class),
                         pIVar13 == (Il2CppObject *)0x0)) {
                        pIVar12 = il2cpp_codegen_get_array_type_mismatch_exception();
                        il2cpp_codegen_raise_exception(pIVar12,(MethodInfo *)0x0);
                      }
                      if (2 < (uint)pGVar10->max_length) {
                        pGVar10->m_Items[2] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar12;
                        Il2CppCodeGenWriteBarrier(pGVar10->m_Items + 2,pIVar12);
                        pGVar14 = il2cpp_codegen_object_new
                                            ((Il2CppClass *)
                                             TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
                        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
                                  (pGVar14,pSVar6,pSVar5,pGVar10,(MethodInfo *)0x0);
                        if (pGVar9 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0)
                        goto label_18231a766;
                        if ((int)pGVar9->max_length != 0) {
                          pGVar9->m_Items[0] = pGVar14;
                          Il2CppCodeGenWriteBarrier(pGVar9->m_Items,pGVar14);
                          pGVar10 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                                    SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,7);
                          pSVar3 = "settings-graphics-performance";
                          pSVar2 = "Performance";
                          pSVar15 = pSVar16;
                          if (pSVar1 != (Settings_GraphicsSettings_o *)0x0) {
                            pSVar15 = (pSVar1->fields).RenderDistance;
                          }
                          pIVar12 = (Il2CppObject *)
                                    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
                                              ("settings-graphics-render-distance","Graphics",
                                               "RenderDistance",pSVar15,"Render distance",
                                               "RenderDistanceTooltip",(System_String_o *)0x0,
                                               (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0
                                              );
                          if (pGVar10 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0)
                          goto label_18231a766;
                          if ((pIVar12 != (Il2CppObject *)0x0) &&
                             (pIVar13 = il2cpp_vm_Object_IsInst
                                                  (pIVar12,(((pGVar10->obj).klass)->_1).element_class),
                             pIVar13 == (Il2CppObject *)0x0)) {
                            pIVar12 = il2cpp_codegen_get_array_type_mismatch_exception();
                            il2cpp_codegen_raise_exception(pIVar12,(MethodInfo *)0x0);
                          }
                          if ((int)pGVar10->max_length != 0) {
                            pGVar10->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar12;
                            Il2CppCodeGenWriteBarrier(pGVar10->m_Items,pIVar12);
                            pSVar15 = pSVar16;
                            if (pSVar1 != (Settings_GraphicsSettings_o *)0x0) {
                              pSVar15 = (pSVar1->fields).FPSCap;
                            }
                            pIVar12 = (Il2CppObject *)
                                      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
                                                ("settings-graphics-fps-cap","Graphics",
                                                 "FPSCap",pSVar15,"FPS cap (0 for off)",
                                                 (System_String_o *)0x0,(System_String_o *)0x0,
                                                 (System_Action_GisketchActionContext__o *)0x0,
                                                 (MethodInfo *)0x0);
                            if ((pIVar12 != (Il2CppObject *)0x0) &&
                               (pIVar13 = il2cpp_vm_Object_IsInst
                                                    (pIVar12,(((pGVar10->obj).klass)->_1).element_class),
                               pIVar13 == (Il2CppObject *)0x0)) {
                              pIVar12 = il2cpp_codegen_get_array_type_mismatch_exception();
                              il2cpp_codegen_raise_exception(pIVar12,(MethodInfo *)0x0);
                            }
                            if (1 < (uint)pGVar10->max_length) {
                              pGVar10->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar12;
                              Il2CppCodeGenWriteBarrier(pGVar10->m_Items + 1,pIVar12);
                              pSVar15 = pSVar16;
                              if (pSVar1 != (Settings_GraphicsSettings_o *)0x0) {
                                pSVar15 = (pSVar1->fields).MenuFPSCap;
                              }
                              pIVar12 = (Il2CppObject *)
                                        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
                                                  ("settings-graphics-menu-fps-cap","Graphics",
                                                   "MenuFPSCap",pSVar15,"Menu FPS cap",
                                                   (System_String_o *)0x0,(System_String_o *)0x0,
                                                   (System_Action_GisketchActionContext__o *)0x0,
                                                   (MethodInfo *)0x0);
                              if ((pIVar12 != (Il2CppObject *)0x0) &&
                                 (pIVar13 = il2cpp_vm_Object_IsInst
                                                      (pIVar12,(((pGVar10->obj).klass)->_1).element_class),
                                 pIVar13 == (Il2CppObject *)0x0)) {
                                pIVar12 = il2cpp_codegen_get_array_type_mismatch_exception();
                                il2cpp_codegen_raise_exception(pIVar12,(MethodInfo *)0x0);
                              }
                              if (2 < (uint)pGVar10->max_length) {
                                pGVar10->m_Items[2] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar12;
                                Il2CppCodeGenWriteBarrier(pGVar10->m_Items + 2,pIVar12);
                                pSVar15 = pSVar16;
                                if (pSVar1 != (Settings_GraphicsSettings_o *)0x0) {
                                  pSVar15 = (Settings_IntSetting_o *)(pSVar1->fields).VSync;
                                }
                                pIVar12 = (Il2CppObject *)
                                          Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                    ("settings-graphics-vsync","Graphics",
                                                     "VSync",(Settings_BoolSetting_o *)pSVar15,
                                                     "VSync",(System_String_o *)0x0,
                                                     (System_String_o *)0x0,
                                                     (System_Action_GisketchActionContext__o *)0x0,
                                                     (MethodInfo *)0x0);
                                if ((pIVar12 != (Il2CppObject *)0x0) &&
                                   (pIVar13 = il2cpp_vm_Object_IsInst
                                                        (pIVar12,(((pGVar10->obj).klass)->_1).element_class),
                                   pIVar13 == (Il2CppObject *)0x0)) {
                                  pIVar12 = il2cpp_codegen_get_array_type_mismatch_exception();
                                  il2cpp_codegen_raise_exception(pIVar12,(MethodInfo *)0x0);
                                }
                                if (3 < (uint)pGVar10->max_length) {
                                  pGVar10->m_Items[3] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar12;
                                  Il2CppCodeGenWriteBarrier(pGVar10->m_Items + 3,pIVar12);
                                  pSVar15 = pSVar16;
                                  if (pSVar1 != (Settings_GraphicsSettings_o *)0x0) {
                                    pSVar15 = (Settings_IntSetting_o *)(pSVar1->fields).InterpolationEnabled;
                                  }
                                  pIVar12 = (Il2CppObject *)
                                            Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                      ("settings-graphics-interpolation","Graphics",
                                                       "InterpolationEnabled",(Settings_BoolSetting_o *)pSVar15
                                                       ,"Interpolation","InterpolationEnabledTooltip",
                                                       (System_String_o *)0x0,
                                                       (System_Action_GisketchActionContext__o *)0x0,
                                                       (MethodInfo *)0x0);
                                  if ((pIVar12 != (Il2CppObject *)0x0) &&
                                     (pIVar13 = il2cpp_vm_Object_IsInst
                                                          (pIVar12,(((pGVar10->obj).klass)->_1).element_class)
                                     , pIVar13 == (Il2CppObject *)0x0)) {
                                    pIVar12 = il2cpp_codegen_get_array_type_mismatch_exception();
                                    il2cpp_codegen_raise_exception(pIVar12,(MethodInfo *)0x0);
                                  }
                                  if (4 < (uint)pGVar10->max_length) {
                                    pGVar10->m_Items[4] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar12;
                                    Il2CppCodeGenWriteBarrier(pGVar10->m_Items + 4,pIVar12);
                                    pSVar15 = pSVar16;
                                    if (pSVar1 != (Settings_GraphicsSettings_o *)0x0) {
                                      pSVar15 = (Settings_IntSetting_o *)(pSVar1->fields).ShowFPS;
                                    }
                                    pIVar12 = (Il2CppObject *)
                                              Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                        ("settings-graphics-show-fps","Graphics",
                                                         "ShowFPS",
                                                         (Settings_BoolSetting_o *)pSVar15,
                                                         "Show FPS",(System_String_o *)0x0,
                                                         (System_String_o *)0x0,
                                                         (System_Action_GisketchActionContext__o *)0x0,
                                                         (MethodInfo *)0x0);
                                    if ((pIVar12 != (Il2CppObject *)0x0) &&
                                       (pIVar13 = il2cpp_vm_Object_IsInst
                                                            (pIVar12,(((pGVar10->obj).klass)->_1).
                                                                     element_class),
                                       pIVar13 == (Il2CppObject *)0x0)) {
                                      pIVar12 = il2cpp_codegen_get_array_type_mismatch_exception();
                                      il2cpp_codegen_raise_exception(pIVar12,(MethodInfo *)0x0);
                                    }
                                    if (5 < (uint)pGVar10->max_length) {
                                      pGVar10->m_Items[5] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar12
                                      ;
                                      Il2CppCodeGenWriteBarrier(pGVar10->m_Items + 5,pIVar12);
                                      pSVar15 = pSVar16;
                                      if (pSVar1 != (Settings_GraphicsSettings_o *)0x0) {
                                        pSVar15 = (Settings_IntSetting_o *)(pSVar1->fields).MipmapEnabled;
                                      }
                                      pIVar12 = (Il2CppObject *)
                                                Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                          ("settings-graphics-mipmap","Graphics",
                                                           "MipmapEnabled",
                                                           (Settings_BoolSetting_o *)pSVar15,
                                                           "Mipmapping","MipmapEnabledTooltip",
                                                           (System_String_o *)0x0,
                                                           (System_Action_GisketchActionContext__o *)0x0,
                                                           (MethodInfo *)0x0);
                                      if ((pIVar12 != (Il2CppObject *)0x0) &&
                                         (pIVar13 = il2cpp_vm_Object_IsInst
                                                              (pIVar12,(((pGVar10->obj).klass)->_1).
                                                                       element_class),
                                         pIVar13 == (Il2CppObject *)0x0)) {
                                        pIVar12 = il2cpp_codegen_get_array_type_mismatch_exception();
                                        il2cpp_codegen_raise_exception(pIVar12,(MethodInfo *)0x0);
                                      }
                                      if (6 < (uint)pGVar10->max_length) {
                                        pGVar10->m_Items[6] =
                                             (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar12;
                                        Il2CppCodeGenWriteBarrier(pGVar10->m_Items + 6,pIVar12);
                                        pGVar14 = il2cpp_codegen_object_new
                                                            ((Il2CppClass *)
                                                                                                                          
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup
                                                       );
                                        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
                                                  (pGVar14,pSVar3,pSVar2,pGVar10,(MethodInfo *)0x0);
                                        if (1 < (uint)pGVar9->max_length) {
                                          pGVar9->m_Items[1] = pGVar14;
                                          Il2CppCodeGenWriteBarrier(pGVar9->m_Items + 1,pGVar14);
                                          pGVar10 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                                                    SZArrayNew(
                                                       TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,7)
                                          ;
                                          pSVar6 = "settings-graphics-weather-effects";
                                          pSVar7 = "settings-graphics-effects";
                                          pSVar5 = "Effects";
                                          pSVar3 = "WeatherEffects";
                                          pSVar2 = "Graphics";
                                          if (pSVar1 != (Settings_GraphicsSettings_o *)0x0) {
                                            pSVar16 = (pSVar1->fields).WeatherEffects;
                                          }
                                          pSVar11 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4)
                                          ;
                                          pSVar4 = "Off";
                                          if (pSVar11 == (System_String_array *)0x0) goto label_18231a766;
                                          if ((int)pSVar11->max_length != 0) {
                                            pSVar11->m_Items[0] = "Off";
                                            Il2CppCodeGenWriteBarrier(pSVar11->m_Items,pSVar4);
                                            pSVar4 = "Low";
                                            if (1 < (uint)pSVar11->max_length) {
                                              pSVar11->m_Items[1] = "Low";
                                              Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 1,pSVar4);
                                              pSVar4 = "Medium";
                                              if (2 < (uint)pSVar11->max_length) {
                                                pSVar11->m_Items[2] = "Medium";
                                                Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 2,pSVar4);
                                                pSVar4 = "High";
                                                if (3 < (uint)pSVar11->max_length) {
                                                  pSVar11->m_Items[3] = "High";
                                                  Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 3,pSVar4);
                                                  pIVar12 = (Il2CppObject *)
                                                                                                                        
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                                                 (pSVar6,pSVar2,pSVar3,pSVar16,
                                                                  "Weather effects",pSVar11,
                                                                  (System_String_o *)0x0,
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                  if (pGVar10 ==
                                                      (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0)
                                                  goto label_18231a766;
                                                  if ((pIVar12 != (Il2CppObject *)0x0) &&
                                                     (pIVar13 = il2cpp_vm_Object_IsInst
                                                                          (pIVar12,(((pGVar10->obj).klass)->_1
                                                                                   ).element_class),
                                                     pIVar13 == (Il2CppObject *)0x0)) {
                                                    pIVar12 = il2cpp_codegen_get_array_type_mismatch_exception
                                                                        ();
                                                    il2cpp_codegen_raise_exception(pIVar12,(MethodInfo *)0x0);
                                                  }
                                                  if ((int)pGVar10->max_length != 0) {
                                                    pGVar10->m_Items[0] =
                                                         (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar12;
                                                    Il2CppCodeGenWriteBarrier(pGVar10->m_Items,pIVar12);
                                                    pSVar6 = "settings-graphics-weapon-trail";
                                                    pSVar3 = "WeaponTrail";
                                                    pSVar2 = "Graphics";
                                                    if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
                                                      pSVar16 = (Settings_IntSetting_o *)0x0;
                                                    }
                                                    else {
                                                      pSVar16 = (pSVar1->fields).WeaponTrail;
                                                    }
                                                    pSVar11 = (System_String_array *)
                                                              SZArrayNew(TypeInfo_string_array,3);
                                                    pSVar4 = "Off";
                                                    if (pSVar11 == (System_String_array *)0x0)
                                                    goto label_18231a766;
                                                    if ((int)pSVar11->max_length != 0) {
                                                      pSVar11->m_Items[0] = "Off";
                                                      Il2CppCodeGenWriteBarrier(pSVar11->m_Items,pSVar4);
                                                      pSVar4 = "Mine";
                                                      if (1 < (uint)pSVar11->max_length) {
                                                        pSVar11->m_Items[1] = "Mine";
                                                        Il2CppCodeGenWriteBarrier(pSVar11->m_Items + 1,pSVar4)
                                                        ;
                                                        pSVar4 = "All";
                                                        if (2 < (uint)pSVar11->max_length) {
                                                          pSVar11->m_Items[2] = "All";
                                                          Il2CppCodeGenWriteBarrier
                                                                    (pSVar11->m_Items + 2,pSVar4);
                                                          pIVar12 = (Il2CppObject *)
                                                                                                                                        
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                                                 (pSVar6,pSVar2,pSVar3,pSVar16,
                                                                  "Weapon trail",pSVar11,
                                                                  (System_String_o *)0x0,
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar12 != (Il2CppObject *)0x0) &&
                                                          (pIVar13 = il2cpp_vm_Object_IsInst
                                                                               (pIVar12,(((pGVar10->obj).klass
                                                                                         )->_1).element_class)
                                                          , pIVar13 == (Il2CppObject *)0x0)) {
                                                         pIVar12 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar12,(MethodInfo *)0x0);
                                                       }
                                                       if (1 < (uint)pGVar10->max_length) {
                                                         pGVar10->m_Items[1] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar12;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar10->m_Items + 1,pIVar12);
                                                         pSVar16 = (Settings_IntSetting_o *)0x0;
                                                         pSVar15 = pSVar16;
                                                         if (pSVar1 != (Settings_GraphicsSettings_o *)0x0) {
                                                           pSVar15 = (Settings_IntSetting_o *)
                                                                     (pSVar1->fields).WeaponTrailHold;
                                                         }
                                                         pIVar12 = (Il2CppObject *)
                                                                                                                                      
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                                 ("settings-graphics-weapon-trail-hold","Graphics",
                                                                  "WeaponTrailHold",
                                                                  (Settings_BoolSetting_o *)pSVar15,
                                                                  "Weapon trail hold","WeaponTrailHoldTooltip",
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar12 != (Il2CppObject *)0x0) &&
                                                          (pIVar13 = il2cpp_vm_Object_IsInst
                                                                               (pIVar12,(((pGVar10->obj).klass
                                                                                         )->_1).element_class)
                                                          , pIVar13 == (Il2CppObject *)0x0)) {
                                                         pIVar12 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar12,(MethodInfo *)0x0);
                                                       }
                                                       if (2 < (uint)pGVar10->max_length) {
                                                         pGVar10->m_Items[2] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar12;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar10->m_Items + 2,pIVar12);
                                                         pSVar15 = pSVar16;
                                                         if (pSVar1 != (Settings_GraphicsSettings_o *)0x0) {
                                                           pSVar15 = (Settings_IntSetting_o *)
                                                                     (pSVar1->fields).WeaponFireEffect;
                                                         }
                                                         pIVar12 = (Il2CppObject *)
                                                                                                                                      
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                                 ("settings-graphics-weapon-fire-effect","Graphics",
                                                                  "WeaponFireEffect",
                                                                  (Settings_BoolSetting_o *)pSVar15,
                                                                  "Weapon fire effect","WeaponFireEffectTooltip",
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar12 != (Il2CppObject *)0x0) &&
                                                          (pIVar13 = il2cpp_vm_Object_IsInst
                                                                               (pIVar12,(((pGVar10->obj).klass
                                                                                         )->_1).element_class)
                                                          , pIVar13 == (Il2CppObject *)0x0)) {
                                                         pIVar12 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar12,(MethodInfo *)0x0);
                                                       }
                                                       if (3 < (uint)pGVar10->max_length) {
                                                         pGVar10->m_Items[3] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar12;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar10->m_Items + 3,pIVar12);
                                                         pSVar15 = pSVar16;
                                                         if (pSVar1 != (Settings_GraphicsSettings_o *)0x0) {
                                                           pSVar15 = (Settings_IntSetting_o *)
                                                                     (pSVar1->fields).WindEffectEnabled;
                                                         }
                                                         pIVar12 = (Il2CppObject *)
                                                                                                                                      
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                                 ("settings-graphics-wind-effect","Graphics",
                                                                  "WindEffectEnabled",
                                                                  (Settings_BoolSetting_o *)pSVar15,
                                                                  "Wind effect",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar12 != (Il2CppObject *)0x0) &&
                                                          (pIVar13 = il2cpp_vm_Object_IsInst
                                                                               (pIVar12,(((pGVar10->obj).klass
                                                                                         )->_1).element_class)
                                                          , pIVar13 == (Il2CppObject *)0x0)) {
                                                         pIVar12 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar12,(MethodInfo *)0x0);
                                                       }
                                                       if (4 < (uint)pGVar10->max_length) {
                                                         pGVar10->m_Items[4] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar12;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar10->m_Items + 4,pIVar12);
                                                         pSVar15 = pSVar16;
                                                         if (pSVar1 != (Settings_GraphicsSettings_o *)0x0) {
                                                           pSVar15 = (Settings_IntSetting_o *)
                                                                     (pSVar1->fields).BloodSplatterEnabled;
                                                         }
                                                         pIVar12 = (Il2CppObject *)
                                                                                                                                      
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                                 ("settings-graphics-blood-splatter","Graphics",
                                                                  "BloodSplatterEnabled",
                                                                  (Settings_BoolSetting_o *)pSVar15,
                                                                  "Blood splatter",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar12 != (Il2CppObject *)0x0) &&
                                                          (pIVar13 = il2cpp_vm_Object_IsInst
                                                                               (pIVar12,(((pGVar10->obj).klass
                                                                                         )->_1).element_class)
                                                          , pIVar13 == (Il2CppObject *)0x0)) {
                                                         pIVar12 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar12,(MethodInfo *)0x0);
                                                       }
                                                       if (5 < (uint)pGVar10->max_length) {
                                                         pGVar10->m_Items[5] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar12;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar10->m_Items + 5,pIVar12);
                                                         pSVar15 = pSVar16;
                                                         if (pSVar1 != (Settings_GraphicsSettings_o *)0x0) {
                                                           pSVar15 = (Settings_IntSetting_o *)
                                                                     (pSVar1->fields).NapeBloodEnabled;
                                                         }
                                                         pIVar12 = (Il2CppObject *)
                                                                                                                                      
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                                 ("settings-graphics-nape-blood","Graphics",
                                                                  "NapeBloodEnabled",
                                                                  (Settings_BoolSetting_o *)pSVar15,
                                                                  "Nape blood",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar12 != (Il2CppObject *)0x0) &&
                                                          (pIVar13 = il2cpp_vm_Object_IsInst
                                                                               (pIVar12,(((pGVar10->obj).klass
                                                                                         )->_1).element_class)
                                                          , pIVar13 == (Il2CppObject *)0x0)) {
                                                         pIVar12 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar12,(MethodInfo *)0x0);
                                                       }
                                                       if (6 < (uint)pGVar10->max_length) {
                                                         pGVar10->m_Items[6] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar12;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar10->m_Items + 6,pIVar12);
                                                         pGVar14 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                                                                                                            
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup
                                                       );
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
                                                                 (pGVar14,pSVar7,pSVar5,pGVar10,
                                                                  (MethodInfo *)0x0);
                                                       if (2 < (uint)pGVar9->max_length) {
                                                         pGVar9->m_Items[2] = pGVar14;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar9->m_Items + 2,pGVar14);
                                                         pGVar10 = (
                                                       Gisketch_Aottg2UI_Code_AottgComponent_array *)
                                                       SZArrayNew(
                                                       TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,7)
                                                       ;
                                                       pSVar6 = "settings-graphics-texture-quality";
                                                       pSVar7 = "settings-graphics-texture-lighting";
                                                       pSVar5 = "TextureQuality";
                                                       pSVar3 = "Texture / Lighting";
                                                       pSVar2 = "Graphics";
                                                       if (pSVar1 != (Settings_GraphicsSettings_o *)0x0) {
                                                         pSVar16 = (pSVar1->fields).TextureQuality;
                                                       }
                                                       pSVar11 = (System_String_array *)
                                                                 SZArrayNew(TypeInfo_string_array,4);
                                                       pSVar4 = "Very low";
                                                       if (pSVar11 == (System_String_array *)0x0)
                                                       goto label_18231a766;
                                                       if ((int)pSVar11->max_length != 0) {
                                                         pSVar11->m_Items[0] = "Very low";
                                                         Il2CppCodeGenWriteBarrier(pSVar11->m_Items,pSVar4);
                                                         pSVar4 = "Low";
                                                         if (1 < (uint)pSVar11->max_length) {
                                                           pSVar11->m_Items[1] = "Low";
                                                           Il2CppCodeGenWriteBarrier
                                                                     (pSVar11->m_Items + 1,pSVar4);
                                                           pSVar4 = "Medium";
                                                           if (2 < (uint)pSVar11->max_length) {
                                                             pSVar11->m_Items[2] = "Medium";
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pSVar11->m_Items + 2,pSVar4);
                                                             pSVar4 = "High";
                                                             if (3 < (uint)pSVar11->max_length) {
                                                               pSVar11->m_Items[3] = "High";
                                                               Il2CppCodeGenWriteBarrier
                                                                         (pSVar11->m_Items + 3,pSVar4);
                                                               pIVar12 = (Il2CppObject *)
                                                                                                                                                  
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                                                 (pSVar6,pSVar2,pSVar5,pSVar16,
                                                                  "Texture quality",pSVar11,
                                                                  (System_String_o *)0x0,
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if (pGVar10 ==
                                                           (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0)
                                                       goto label_18231a766;
                                                       if ((pIVar12 != (Il2CppObject *)0x0) &&
                                                          (pIVar13 = il2cpp_vm_Object_IsInst
                                                                               (pIVar12,(((pGVar10->obj).klass
                                                                                         )->_1).element_class)
                                                          , pIVar13 == (Il2CppObject *)0x0)) {
                                                         pIVar12 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar12,(MethodInfo *)0x0);
                                                       }
                                                       if ((int)pGVar10->max_length != 0) {
                                                         pGVar10->m_Items[0] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar12;
                                                         Il2CppCodeGenWriteBarrier(pGVar10->m_Items,pIVar12);
                                                         pSVar6 = "settings-graphics-shadow-quality";
                                                         pSVar5 = "ShadowQuality";
                                                         pSVar2 = "Graphics";
                                                         if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
                                                           pSVar16 = (Settings_IntSetting_o *)0x0;
                                                         }
                                                         else {
                                                           pSVar16 = (pSVar1->fields).ShadowQuality;
                                                         }
                                                         pSVar11 = (System_String_array *)
                                                                   SZArrayNew(TypeInfo_string_array,4);
                                                         pSVar4 = "Off";
                                                         if (pSVar11 == (System_String_array *)0x0)
                                                         goto label_18231a766;
                                                         if ((int)pSVar11->max_length != 0) {
                                                           pSVar11->m_Items[0] = "Off";
                                                           Il2CppCodeGenWriteBarrier(pSVar11->m_Items,pSVar4);
                                                           pSVar4 = "Low";
                                                           if (1 < (uint)pSVar11->max_length) {
                                                             pSVar11->m_Items[1] = "Low";
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pSVar11->m_Items + 1,pSVar4);
                                                             pSVar4 = "Medium";
                                                             if (2 < (uint)pSVar11->max_length) {
                                                               pSVar11->m_Items[2] = "Medium";
                                                               Il2CppCodeGenWriteBarrier
                                                                         (pSVar11->m_Items + 2,pSVar4);
                                                               pSVar4 = "High";
                                                               if (3 < (uint)pSVar11->max_length) {
                                                                 pSVar11->m_Items[3] = "High";
                                                                 Il2CppCodeGenWriteBarrier
                                                                           (pSVar11->m_Items + 3,pSVar4);
                                                                 pIVar12 = (Il2CppObject *)
                                                                                                                                                      
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                                                 (pSVar6,pSVar2,pSVar5,pSVar16,
                                                                  "Shadow quality",pSVar11,
                                                                  (System_String_o *)0x0,
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar12 != (Il2CppObject *)0x0) &&
                                                          (pIVar13 = il2cpp_vm_Object_IsInst
                                                                               (pIVar12,(((pGVar10->obj).klass
                                                                                         )->_1).element_class)
                                                          , pIVar13 == (Il2CppObject *)0x0)) {
                                                         pIVar12 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar12,(MethodInfo *)0x0);
                                                       }
                                                       if (1 < (uint)pGVar10->max_length) {
                                                         pGVar10->m_Items[1] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar12;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar10->m_Items + 1,pIVar12);
                                                         pSVar16 = (Settings_IntSetting_o *)0x0;
                                                         pSVar15 = pSVar16;
                                                         if (pSVar1 != (Settings_GraphicsSettings_o *)0x0) {
                                                           pSVar15 = (pSVar1->fields).ShadowDistance;
                                                         }
                                                         pIVar12 = (Il2CppObject *)
                                                                                                                                      
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider_2392770
                                                                 ("settings-graphics-shadow-distance","Graphics",
                                                                  "ShadowDistance",pSVar15,
                                                                  "Shadow distance",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar12 != (Il2CppObject *)0x0) &&
                                                          (pIVar13 = il2cpp_vm_Object_IsInst
                                                                               (pIVar12,(((pGVar10->obj).klass
                                                                                         )->_1).element_class)
                                                          , pIVar13 == (Il2CppObject *)0x0)) {
                                                         pIVar12 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar12,(MethodInfo *)0x0);
                                                       }
                                                       if (2 < (uint)pGVar10->max_length) {
                                                         pGVar10->m_Items[2] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar12;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar10->m_Items + 2,pIVar12);
                                                         pSVar15 = pSVar16;
                                                         if (pSVar1 != (Settings_GraphicsSettings_o *)0x0) {
                                                           pSVar15 = (pSVar1->fields).LightDistance;
                                                         }
                                                         pIVar12 = (Il2CppObject *)
                                                                                                                                      
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider_2392770
                                                                 ("settings-graphics-light-distance","Graphics",
                                                                  "LightDistance",pSVar15,
                                                                  "Light distance",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar12 != (Il2CppObject *)0x0) &&
                                                          (pIVar13 = il2cpp_vm_Object_IsInst
                                                                               (pIVar12,(((pGVar10->obj).klass
                                                                                         )->_1).element_class)
                                                          , pIVar13 == (Il2CppObject *)0x0)) {
                                                         pIVar12 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar12,(MethodInfo *)0x0);
                                                       }
                                                       if (3 < (uint)pGVar10->max_length) {
                                                         pGVar10->m_Items[3] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar12;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar10->m_Items + 3,pIVar12);
                                                         pSVar6 = "settings-graphics-anti-aliasing";
                                                         pSVar5 = "AntiAliasing";
                                                         pSVar2 = "Graphics";
                                                         if (pSVar1 != (Settings_GraphicsSettings_o *)0x0) {
                                                           pSVar16 = (pSVar1->fields).AntiAliasingQuality;
                                                         }
                                                         pSVar11 = (System_String_array *)
                                                                   SZArrayNew(TypeInfo_string_array,3);
                                                         pSVar4 = "Off";
                                                         if (pSVar11 == (System_String_array *)0x0)
                                                         goto label_18231a766;
                                                         if ((int)pSVar11->max_length != 0) {
                                                           pSVar11->m_Items[0] = "Off";
                                                           Il2CppCodeGenWriteBarrier(pSVar11->m_Items,pSVar4);
                                                           pSVar4 = "Low";
                                                           if (1 < (uint)pSVar11->max_length) {
                                                             pSVar11->m_Items[1] = "Low";
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pSVar11->m_Items + 1,pSVar4);
                                                             pSVar4 = "Medium";
                                                             if (2 < (uint)pSVar11->max_length) {
                                                               pSVar11->m_Items[2] = "Medium";
                                                               Il2CppCodeGenWriteBarrier
                                                                         (pSVar11->m_Items + 2,pSVar4);
                                                               pIVar12 = (Il2CppObject *)
                                                                                                                                                  
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                                                 (pSVar6,pSVar2,pSVar5,pSVar16,
                                                                  "Anti-aliasing",pSVar11,
                                                                  (System_String_o *)0x0,
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar12 != (Il2CppObject *)0x0) &&
                                                          (pIVar13 = il2cpp_vm_Object_IsInst
                                                                               (pIVar12,(((pGVar10->obj).klass
                                                                                         )->_1).element_class)
                                                          , pIVar13 == (Il2CppObject *)0x0)) {
                                                         pIVar12 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar12,(MethodInfo *)0x0);
                                                       }
                                                       if (4 < (uint)pGVar10->max_length) {
                                                         pGVar10->m_Items[4] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar12;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar10->m_Items + 4,pIVar12);
                                                         pSVar6 = "settings-graphics-anisotropic";
                                                         pSVar5 = "Anisotropic";
                                                         pSVar2 = "Graphics";
                                                         if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
                                                           pSVar16 = (Settings_IntSetting_o *)0x0;
                                                         }
                                                         else {
                                                           pSVar16 = (pSVar1->fields).AnisotropicFiltering;
                                                         }
                                                         pSVar11 = (System_String_array *)
                                                                   SZArrayNew(TypeInfo_string_array,3);
                                                         pSVar4 = "Off";
                                                         if (pSVar11 == (System_String_array *)0x0)
                                                         goto label_18231a766;
                                                         if ((int)pSVar11->max_length != 0) {
                                                           pSVar11->m_Items[0] = "Off";
                                                           Il2CppCodeGenWriteBarrier(pSVar11->m_Items,pSVar4);
                                                           pSVar4 = "Low";
                                                           if (1 < (uint)pSVar11->max_length) {
                                                             pSVar11->m_Items[1] = "Low";
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pSVar11->m_Items + 1,pSVar4);
                                                             pSVar4 = "High";
                                                             if (2 < (uint)pSVar11->max_length) {
                                                               pSVar11->m_Items[2] = "High";
                                                               Il2CppCodeGenWriteBarrier
                                                                         (pSVar11->m_Items + 2,pSVar4);
                                                               pIVar12 = (Il2CppObject *)
                                                                                                                                                  
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                                                 (pSVar6,pSVar2,pSVar5,pSVar16,
                                                                  "Anisotropic filtering",pSVar11,
                                                                  (System_String_o *)0x0,
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar12 != (Il2CppObject *)0x0) &&
                                                          (pIVar13 = il2cpp_vm_Object_IsInst
                                                                               (pIVar12,(((pGVar10->obj).klass
                                                                                         )->_1).element_class)
                                                          , pIVar13 == (Il2CppObject *)0x0)) {
                                                         pIVar12 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar12,(MethodInfo *)0x0);
                                                       }
                                                       if (5 < (uint)pGVar10->max_length) {
                                                         pGVar10->m_Items[5] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar12;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar10->m_Items + 5,pIVar12);
                                                         pSVar6 = "settings-graphics-additional-lights";
                                                         pSVar5 = "AdditionalLights";
                                                         pSVar2 = "Graphics";
                                                         if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
                                                           pSVar16 = (Settings_IntSetting_o *)0x0;
                                                         }
                                                         else {
                                                           pSVar16 = (pSVar1->fields).AdditionalLights;
                                                         }
                                                         pSVar11 = (System_String_array *)
                                                                   SZArrayNew(TypeInfo_string_array,3);
                                                         pSVar4 = "Low";
                                                         if (pSVar11 == (System_String_array *)0x0)
                                                         goto label_18231a766;
                                                         if ((int)pSVar11->max_length != 0) {
                                                           pSVar11->m_Items[0] = "Low";
                                                           Il2CppCodeGenWriteBarrier(pSVar11->m_Items,pSVar4);
                                                           pSVar4 = "Medium";
                                                           if (1 < (uint)pSVar11->max_length) {
                                                             pSVar11->m_Items[1] = "Medium";
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pSVar11->m_Items + 1,pSVar4);
                                                             pSVar4 = "High";
                                                             if (2 < (uint)pSVar11->max_length) {
                                                               pSVar11->m_Items[2] = "High";
                                                               Il2CppCodeGenWriteBarrier
                                                                         (pSVar11->m_Items + 2,pSVar4);
                                                               pIVar12 = (Il2CppObject *)
                                                                                                                                                  
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                                                 (pSVar6,pSVar2,pSVar5,pSVar16,
                                                                  "Additional lights",pSVar11,
                                                                  (System_String_o *)0x0,
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar12 != (Il2CppObject *)0x0) &&
                                                          (pIVar13 = il2cpp_vm_Object_IsInst
                                                                               (pIVar12,(((pGVar10->obj).klass
                                                                                         )->_1).element_class)
                                                          , pIVar13 == (Il2CppObject *)0x0)) {
                                                         pIVar12 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar12,(MethodInfo *)0x0);
                                                       }
                                                       if (6 < (uint)pGVar10->max_length) {
                                                         pGVar10->m_Items[6] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar12;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar10->m_Items + 6,pIVar12);
                                                         pGVar14 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                                                                                                            
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup
                                                       );
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
                                                                 (pGVar14,pSVar7,pSVar3,pGVar10,
                                                                  (MethodInfo *)0x0);
                                                       if (3 < (uint)pGVar9->max_length) {
                                                         pGVar9->m_Items[3] = pGVar14;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar9->m_Items + 3,pGVar14);
                                                         pGVar10 = (
                                                       Gisketch_Aottg2UI_Code_AottgComponent_array *)
                                                       SZArrayNew(
                                                       TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,9)
                                                       ;
                                                       pSVar6 = "settings-graphics-post-processing";
                                                       pSVar7 = "settings-graphics-ambient-occlusion";
                                                       pSVar5 = "Post Processing";
                                                       pSVar3 = "AmbientOcclusion";
                                                       pSVar2 = "Graphics";
                                                       if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
                                                         pSVar16 = (Settings_IntSetting_o *)0x0;
                                                       }
                                                       else {
                                                         pSVar16 = (pSVar1->fields).AmbientOcclusion;
                                                       }
                                                       pSVar11 = (System_String_array *)
                                                                 SZArrayNew(TypeInfo_string_array,6);
                                                       pSVar4 = "Off";
                                                       if (pSVar11 == (System_String_array *)0x0)
                                                       goto label_18231a766;
                                                       if ((int)pSVar11->max_length != 0) {
                                                         pSVar11->m_Items[0] = "Off";
                                                         Il2CppCodeGenWriteBarrier(pSVar11->m_Items,pSVar4);
                                                         pSVar4 = "Lowest";
                                                         if (1 < (uint)pSVar11->max_length) {
                                                           pSVar11->m_Items[1] = "Lowest";
                                                           Il2CppCodeGenWriteBarrier
                                                                     (pSVar11->m_Items + 1,pSVar4);
                                                           pSVar4 = "Low";
                                                           if (2 < (uint)pSVar11->max_length) {
                                                             pSVar11->m_Items[2] = "Low";
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pSVar11->m_Items + 2,pSVar4);
                                                             pSVar4 = "Medium";
                                                             if (3 < (uint)pSVar11->max_length) {
                                                               pSVar11->m_Items[3] = "Medium";
                                                               Il2CppCodeGenWriteBarrier
                                                                         (pSVar11->m_Items + 3,pSVar4);
                                                               pSVar4 = "High";
                                                               if (4 < (uint)pSVar11->max_length) {
                                                                 pSVar11->m_Items[4] = "High";
                                                                 Il2CppCodeGenWriteBarrier
                                                                           (pSVar11->m_Items + 4,pSVar4);
                                                                 pSVar4 = "Ultra";
                                                                 if (5 < (uint)pSVar11->max_length) {
                                                                   pSVar11->m_Items[5] = "Ultra"
                                                                   ;
                                                                   Il2CppCodeGenWriteBarrier
                                                                             (pSVar11->m_Items + 5,pSVar4);
                                                                   pIVar12 = (Il2CppObject *)
                                                                                                                                                          
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown
                                                                 (pSVar7,pSVar2,pSVar3,pSVar16,
                                                                  "Ambient Occlusion",pSVar11,
                                                                  (System_String_o *)0x0,
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if (pGVar10 ==
                                                           (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0)
                                                       {
label_18231a97c:
                                                         ThrowNullReferenceException();
                                                       }
                                                       if ((pIVar12 != (Il2CppObject *)0x0) &&
                                                          (pIVar13 = il2cpp_vm_Object_IsInst
                                                                               (pIVar12,(((pGVar10->obj).klass
                                                                                         )->_1).element_class)
                                                          , pIVar13 == (Il2CppObject *)0x0)) {
                                                         pIVar12 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar12,(MethodInfo *)0x0);
                                                       }
                                                       if ((int)pGVar10->max_length != 0) {
                                                         pGVar10->m_Items[0] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar12;
                                                         Il2CppCodeGenWriteBarrier(pGVar10->m_Items,pIVar12);
                                                         pSVar7 = "settings-graphics-bloom";
                                                         pSVar3 = "Bloom";
                                                         pSVar2 = "Graphics";
                                                         if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
                                                           pSVar16 = (Settings_IntSetting_o *)0x0;
                                                         }
                                                         else {
                                                           pSVar16 = (pSVar1->fields).Bloom;
                                                         }
                                                         pSVar11 = (System_String_array *)
                                                                   SZArrayNew(TypeInfo_string_array,3);
                                                         pSVar4 = "Off";
                                                         if (pSVar11 == (System_String_array *)0x0)
                                                         goto label_18231a97c;
                                                         if ((int)pSVar11->max_length != 0) {
                                                           pSVar11->m_Items[0] = "Off";
                                                           Il2CppCodeGenWriteBarrier(pSVar11->m_Items,pSVar4);
                                                           pSVar4 = "Low";
                                                           if (1 < (uint)pSVar11->max_length) {
                                                             pSVar11->m_Items[1] = "Low";
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pSVar11->m_Items + 1,pSVar4);
                                                             pSVar4 = "High";
                                                             if (2 < (uint)pSVar11->max_length) {
                                                               pSVar11->m_Items[2] = "High";
                                                               Il2CppCodeGenWriteBarrier
                                                                         (pSVar11->m_Items + 2,pSVar4);
                                                               pIVar12 = (Il2CppObject *)
                                                                                                                                                  
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                                                 (pSVar7,pSVar2,pSVar3,pSVar16,
                                                                  "Bloom",pSVar11,
                                                                  (System_String_o *)0x0,
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar12 != (Il2CppObject *)0x0) &&
                                                          (pIVar13 = il2cpp_vm_Object_IsInst
                                                                               (pIVar12,(((pGVar10->obj).klass
                                                                                         )->_1).element_class)
                                                          , pIVar13 == (Il2CppObject *)0x0)) {
                                                         pIVar12 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar12,(MethodInfo *)0x0);
                                                       }
                                                       if (1 < (uint)pGVar10->max_length) {
                                                         pGVar10->m_Items[1] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar12;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar10->m_Items + 1,pIVar12);
                                                         pSVar7 = "settings-graphics-chromatic-aberration";
                                                         pSVar3 = "Graphics";
                                                         pSVar2 = "ChromaticAberration";
                                                         if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
                                                           pSVar16 = (Settings_IntSetting_o *)0x0;
                                                         }
                                                         else {
                                                           pSVar16 = (pSVar1->fields).ChromaticAberrationFX;
                                                         }
                                                         pSVar11 = (System_String_array *)
                                                                   SZArrayNew(TypeInfo_string_array,3);
                                                         pSVar4 = "Off";
                                                         if (pSVar11 == (System_String_array *)0x0)
                                                         goto label_18231a97c;
                                                         if ((int)pSVar11->max_length != 0) {
                                                           pSVar11->m_Items[0] = "Off";
                                                           Il2CppCodeGenWriteBarrier(pSVar11->m_Items,pSVar4);
                                                           pSVar4 = "Low";
                                                           if (1 < (uint)pSVar11->max_length) {
                                                             pSVar11->m_Items[1] = "Low";
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pSVar11->m_Items + 1,pSVar4);
                                                             pSVar4 = "High";
                                                             if (2 < (uint)pSVar11->max_length) {
                                                               pSVar11->m_Items[2] = "High";
                                                               Il2CppCodeGenWriteBarrier
                                                                         (pSVar11->m_Items + 2,pSVar4);
                                                               pIVar12 = (Il2CppObject *)
                                                                                                                                                  
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                                                 (pSVar7,pSVar3,pSVar2,pSVar16,
                                                                  "Chromatic Aberration",pSVar11,
                                                                  (System_String_o *)0x0,
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar12 != (Il2CppObject *)0x0) &&
                                                          (pIVar13 = il2cpp_vm_Object_IsInst
                                                                               (pIVar12,(((pGVar10->obj).klass
                                                                                         )->_1).element_class)
                                                          , pIVar13 == (Il2CppObject *)0x0)) {
                                                         pIVar12 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar12,(MethodInfo *)0x0);
                                                       }
                                                       if (2 < (uint)pGVar10->max_length) {
                                                         pGVar10->m_Items[2] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar12;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar10->m_Items + 2,pIVar12);
                                                         pSVar7 = "settings-graphics-color-grading";
                                                         pSVar3 = "Graphics";
                                                         pSVar2 = "ColorGrading";
                                                         if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
                                                           pSVar16 = (Settings_IntSetting_o *)0x0;
                                                         }
                                                         else {
                                                           pSVar16 = (pSVar1->fields).ColorGrading;
                                                         }
                                                         pSVar11 = (System_String_array *)
                                                                   SZArrayNew(TypeInfo_string_array,2);
                                                         pSVar4 = "Off";
                                                         if (pSVar11 == (System_String_array *)0x0)
                                                         goto label_18231a97c;
                                                         if ((int)pSVar11->max_length != 0) {
                                                           pSVar11->m_Items[0] = "Off";
                                                           Il2CppCodeGenWriteBarrier(pSVar11->m_Items,pSVar4);
                                                           pSVar4 = "On";
                                                           if (1 < (uint)pSVar11->max_length) {
                                                             pSVar11->m_Items[1] = "On";
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pSVar11->m_Items + 1,pSVar4);
                                                             pIVar12 = (Il2CppObject *)
                                                                                                                                              
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                                                 (pSVar7,pSVar3,pSVar2,pSVar16,
                                                                  "Color Grading",pSVar11,
                                                                  (System_String_o *)0x0,
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar12 != (Il2CppObject *)0x0) &&
                                                          (pIVar13 = il2cpp_vm_Object_IsInst
                                                                               (pIVar12,(((pGVar10->obj).klass
                                                                                         )->_1).element_class)
                                                          , pIVar13 == (Il2CppObject *)0x0)) {
                                                         pIVar12 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar12,(MethodInfo *)0x0);
                                                       }
                                                       if (3 < (uint)pGVar10->max_length) {
                                                         pGVar10->m_Items[3] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar12;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar10->m_Items + 3,pIVar12);
                                                         pSVar7 = "settings-graphics-auto-exposure";
                                                         pSVar3 = "AutoExposure";
                                                         pSVar2 = "Graphics";
                                                         if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
                                                           pSVar16 = (Settings_IntSetting_o *)0x0;
                                                         }
                                                         else {
                                                           pSVar16 = (pSVar1->fields).AutoExposure;
                                                         }
                                                         pSVar11 = (System_String_array *)
                                                                   SZArrayNew(TypeInfo_string_array,2);
                                                         pSVar4 = "Off";
                                                         if (pSVar11 == (System_String_array *)0x0)
                                                         goto label_18231a97c;
                                                         if ((int)pSVar11->max_length != 0) {
                                                           pSVar11->m_Items[0] = "Off";
                                                           Il2CppCodeGenWriteBarrier(pSVar11->m_Items,pSVar4);
                                                           pSVar4 = "On";
                                                           if (1 < (uint)pSVar11->max_length) {
                                                             pSVar11->m_Items[1] = "On";
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pSVar11->m_Items + 1,pSVar4);
                                                             pIVar12 = (Il2CppObject *)
                                                                                                                                              
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                                                 (pSVar7,pSVar2,pSVar3,pSVar16,
                                                                  "Auto Exposure",pSVar11,
                                                                  (System_String_o *)0x0,
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar12 != (Il2CppObject *)0x0) &&
                                                          (pIVar13 = il2cpp_vm_Object_IsInst
                                                                               (pIVar12,(((pGVar10->obj).klass
                                                                                         )->_1).element_class)
                                                          , pIVar13 == (Il2CppObject *)0x0)) {
                                                         pIVar12 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar12,(MethodInfo *)0x0);
                                                       }
                                                       if (4 < (uint)pGVar10->max_length) {
                                                         pGVar10->m_Items[4] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar12;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar10->m_Items + 4,pIVar12);
                                                         pSVar7 = "settings-graphics-depth-of-field";
                                                         pSVar3 = "DepthOfField";
                                                         pSVar2 = "Graphics";
                                                         if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
                                                           pSVar16 = (Settings_IntSetting_o *)0x0;
                                                         }
                                                         else {
                                                           pSVar16 = (pSVar1->fields).DepthOfField;
                                                         }
                                                         pSVar11 = (System_String_array *)
                                                                   SZArrayNew(TypeInfo_string_array,4);
                                                         pSVar4 = "Off";
                                                         if (pSVar11 == (System_String_array *)0x0)
                                                         goto label_18231a97c;
                                                         if ((int)pSVar11->max_length != 0) {
                                                           pSVar11->m_Items[0] = "Off";
                                                           Il2CppCodeGenWriteBarrier(pSVar11->m_Items,pSVar4);
                                                           pSVar4 = "Low";
                                                           if (1 < (uint)pSVar11->max_length) {
                                                             pSVar11->m_Items[1] = "Low";
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pSVar11->m_Items + 1,pSVar4);
                                                             pSVar4 = "Medium";
                                                             if (2 < (uint)pSVar11->max_length) {
                                                               pSVar11->m_Items[2] = "Medium";
                                                               Il2CppCodeGenWriteBarrier
                                                                         (pSVar11->m_Items + 2,pSVar4);
                                                               pSVar4 = "High";
                                                               if (3 < (uint)pSVar11->max_length) {
                                                                 pSVar11->m_Items[3] = "High";
                                                                 Il2CppCodeGenWriteBarrier
                                                                           (pSVar11->m_Items + 3,pSVar4);
                                                                 pIVar12 = (Il2CppObject *)
                                                                                                                                                      
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                                                 (pSVar7,pSVar2,pSVar3,pSVar16,
                                                                  "Depth of Field",pSVar11,
                                                                  (System_String_o *)0x0,
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar12 != (Il2CppObject *)0x0) &&
                                                          (pIVar13 = il2cpp_vm_Object_IsInst
                                                                               (pIVar12,(((pGVar10->obj).klass
                                                                                         )->_1).element_class)
                                                          , pIVar13 == (Il2CppObject *)0x0)) {
                                                         pIVar12 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar12,(MethodInfo *)0x0);
                                                       }
                                                       if (5 < (uint)pGVar10->max_length) {
                                                         pGVar10->m_Items[5] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar12;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar10->m_Items + 5,pIVar12);
                                                         pSVar7 = "settings-graphics-motion-blur";
                                                         pSVar3 = "MotionBlur";
                                                         pSVar2 = "Graphics";
                                                         if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
                                                           pSVar16 = (Settings_IntSetting_o *)0x0;
                                                         }
                                                         else {
                                                           pSVar16 = (pSVar1->fields).MotionBlur;
                                                         }
                                                         pSVar11 = (System_String_array *)
                                                                   SZArrayNew(TypeInfo_string_array,4);
                                                         pSVar4 = "Off";
                                                         if (pSVar11 == (System_String_array *)0x0)
                                                         goto label_18231a97c;
                                                         if ((int)pSVar11->max_length != 0) {
                                                           pSVar11->m_Items[0] = "Off";
                                                           Il2CppCodeGenWriteBarrier(pSVar11->m_Items,pSVar4);
                                                           pSVar4 = "Low";
                                                           if (1 < (uint)pSVar11->max_length) {
                                                             pSVar11->m_Items[1] = "Low";
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pSVar11->m_Items + 1,pSVar4);
                                                             pSVar4 = "Medium";
                                                             if (2 < (uint)pSVar11->max_length) {
                                                               pSVar11->m_Items[2] = "Medium";
                                                               Il2CppCodeGenWriteBarrier
                                                                         (pSVar11->m_Items + 2,pSVar4);
                                                               pSVar4 = "High";
                                                               if (3 < (uint)pSVar11->max_length) {
                                                                 pSVar11->m_Items[3] = "High";
                                                                 Il2CppCodeGenWriteBarrier
                                                                           (pSVar11->m_Items + 3,pSVar4);
                                                                 pIVar12 = (Il2CppObject *)
                                                                                                                                                      
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                                                 (pSVar7,pSVar2,pSVar3,pSVar16,
                                                                  "Motion Blur",pSVar11,
                                                                  (System_String_o *)0x0,
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar12 != (Il2CppObject *)0x0) &&
                                                          (pIVar13 = il2cpp_vm_Object_IsInst
                                                                               (pIVar12,(((pGVar10->obj).klass
                                                                                         )->_1).element_class)
                                                          , pIVar13 == (Il2CppObject *)0x0)) {
                                                         pIVar12 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar12,(MethodInfo *)0x0);
                                                       }
                                                       if (6 < (uint)pGVar10->max_length) {
                                                         pGVar10->m_Items[6] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar12;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar10->m_Items + 6,pIVar12);
                                                         pSVar7 = "settings-graphics-water-fx";
                                                         pSVar3 = "WaterFX";
                                                         pSVar2 = "Graphics";
                                                         if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
                                                           pSVar16 = (Settings_IntSetting_o *)0x0;
                                                         }
                                                         else {
                                                           pSVar16 = (pSVar1->fields).WaterFX;
                                                         }
                                                         pSVar11 = (System_String_array *)
                                                                   SZArrayNew(TypeInfo_string_array,4);
                                                         pSVar4 = "Off";
                                                         if (pSVar11 == (System_String_array *)0x0)
                                                         goto label_18231a97c;
                                                         if ((int)pSVar11->max_length != 0) {
                                                           pSVar11->m_Items[0] = "Off";
                                                           Il2CppCodeGenWriteBarrier(pSVar11->m_Items,pSVar4);
                                                           pSVar4 = "Low";
                                                           if (1 < (uint)pSVar11->max_length) {
                                                             pSVar11->m_Items[1] = "Low";
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pSVar11->m_Items + 1,pSVar4);
                                                             pSVar4 = "Medium";
                                                             if (2 < (uint)pSVar11->max_length) {
                                                               pSVar11->m_Items[2] = "Medium";
                                                               Il2CppCodeGenWriteBarrier
                                                                         (pSVar11->m_Items + 2,pSVar4);
                                                               pSVar4 = "High";
                                                               if (3 < (uint)pSVar11->max_length) {
                                                                 pSVar11->m_Items[3] = "High";
                                                                 Il2CppCodeGenWriteBarrier
                                                                           (pSVar11->m_Items + 3,pSVar4);
                                                                 pIVar12 = (Il2CppObject *)
                                                                                                                                                      
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                                                 (pSVar7,pSVar2,pSVar3,pSVar16,
                                                                  "Water FX",pSVar11,
                                                                  (System_String_o *)0x0,
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar12 != (Il2CppObject *)0x0) &&
                                                          (pIVar13 = il2cpp_vm_Object_IsInst
                                                                               (pIVar12,(((pGVar10->obj).klass
                                                                                         )->_1).element_class)
                                                          , pIVar13 == (Il2CppObject *)0x0)) {
                                                         pIVar12 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar12,(MethodInfo *)0x0);
                                                       }
                                                       if (7 < (uint)pGVar10->max_length) {
                                                         pGVar10->m_Items[7] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar12;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar10->m_Items + 7,pIVar12);
                                                         setting = (Settings_BoolSetting_o *)0x0;
                                                         if (pSVar1 != (Settings_GraphicsSettings_o *)0x0) {
                                                           setting = (pSVar1->fields).HDR;
                                                         }
                                                         pIVar12 = (Il2CppObject *)
                                                                                                                                      
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                                 ("settings-graphics-hdr","Graphics",
                                                                  "HDR",setting,
                                                                  "HDR","HDRTooltip",
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar12 != (Il2CppObject *)0x0) &&
                                                          (pIVar13 = il2cpp_vm_Object_IsInst
                                                                               (pIVar12,(((pGVar10->obj).klass
                                                                                         )->_1).element_class)
                                                          , pIVar13 == (Il2CppObject *)0x0)) {
                                                         pIVar12 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar12,(MethodInfo *)0x0);
                                                       }
                                                       if (8 < (uint)pGVar10->max_length) {
                                                         pGVar10->m_Items[8] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar12;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar10->m_Items + 8,pIVar12);
                                                         pGVar14 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                                                                                                            
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup
                                                       );
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
                                                                 (pGVar14,pSVar6,pSVar5,pGVar10,
                                                                  (MethodInfo *)0x0);
                                                       if (4 < (uint)pGVar9->max_length) {
                                                         pGVar9->m_Items[4] = pGVar14;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar9->m_Items + 4,pGVar14);
                                                         return pGVar9;
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
                                                       }
                                                       }
                                                       }
                                                       }
                                                       ThrowIndexOutOfRangeException();
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
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGraphicsCategory$$PresetChanged
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory__PresetChanged (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x18231a990

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory__PresetChanged
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  Settings_GraphicsSettings_o *__this;
  UnityEngine_GameObject_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  
  if (Il2CppMethodInitialized_184347783 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_184347783 = '\x01';
  }
  __this = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if (__this != (Settings_GraphicsSettings_o *)0x0) {
    Settings_GraphicsSettings__OnSelectPreset(__this,(MethodInfo *)0x0);
  }
  __this_00 = (context->fields).GameObject;
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  }
  else {
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (__this_00,
                      (MethodInfo_6F53B0 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory__Groups((MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SyncState(root,groups,(MethodInfo *)0x0);
  return;
}


