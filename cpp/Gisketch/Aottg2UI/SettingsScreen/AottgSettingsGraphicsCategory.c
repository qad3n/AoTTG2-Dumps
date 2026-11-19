// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGraphicsCategory
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsGraphicsCategory.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGraphicsCategory$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory__Build (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x5e3f100

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory__Build
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  System_String_o *categoryId;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory_o *__this;
  System_String_o **method_00;
  
  method_00 = (System_String_o **)content;
  if (g_data_075485c3 == '\0') {
    method_00 = &"graphics";
    il2cpp_codegen_initialize_runtime_metadata(&"graphics");
    g_data_075485c3 = '\x01';
  }
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory__Groups((MethodInfo *)method_00);
  categoryId = "graphics";
  if (Il2CppMethodInitialized_075485a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
    Il2CppMethodInitialized_075485a1 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory);
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory___ctor
            (__this,context,categoryId,groups,(System_String_o *)0x0,0.0,(System_Nullable_float__o)0x0,
             (MethodInfo *)0x0);
  if (content == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (content,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGraphicsCategory$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory__SyncState (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5e408a0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory__SyncState
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  MethodInfo *method_00;
  
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory__Groups((MethodInfo *)root);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SyncState(root,groups,method_00);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGraphicsCategory$$Groups
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory__Groups (const MethodInfo* method);
// 0x5e3f1d0

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory__Groups(MethodInfo *method)

{
  Settings_GraphicsSettings_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *id;
  System_String_o *pSVar4;
  int32_t iVar5;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *pGVar6;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar7;
  System_Action_GisketchActionContext__o *__this;
  Il2CppObject *pIVar8;
  Il2CppObject *pIVar9;
  System_String_array *labels;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *pGVar10;
  Settings_IntSetting_o *pSVar11;
  MethodInfo *pMVar12;
  Settings_BoolSetting_o *pSVar13;
  MethodInfo *in_stack_ffffffffffffffa8;
  MethodInfo *pMVar14;
  MethodInfo *in_stack_ffffffffffffffb0;
  
  if (Il2CppMethodInitialized_075485c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory_PresetChanged);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_FullscreenHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"WeaponTrailHold");
    il2cpp_codegen_initialize_runtime_metadata(&"AntiAliasing");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-fullscreen");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-anisotropic");
    il2cpp_codegen_initialize_runtime_metadata(&"WeaponTrail");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-additional-lights");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-post-processing");
    il2cpp_codegen_initialize_runtime_metadata(&"WeaponFireEffect");
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
    il2cpp_codegen_initialize_runtime_metadata(&"DepthOfField");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-resolution");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanGoreTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"AmbientOcclusion");
    il2cpp_codegen_initialize_runtime_metadata(&"Resolution");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-weapon-trail");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-preset-display");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-render-distance");
    il2cpp_codegen_initialize_runtime_metadata(&"FPSCap");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-depth-of-field");
    il2cpp_codegen_initialize_runtime_metadata(&"Anisotropic");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-fps-cap");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowFPS");
    il2cpp_codegen_initialize_runtime_metadata(&"VSync");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-chromatic-aberration");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-effects");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-shadow-quality");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-motion-blur");
    il2cpp_codegen_initialize_runtime_metadata(&"LightDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-texture-lighting");
    il2cpp_codegen_initialize_runtime_metadata(&"FullscreenTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"MipmapEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-water-fx");
    il2cpp_codegen_initialize_runtime_metadata(&"InterpolationEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-weather-effects");
    il2cpp_codegen_initialize_runtime_metadata(&"HDR");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-interpolation");
    il2cpp_codegen_initialize_runtime_metadata(&"WindEffectEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"WeaponTrailHoldTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"AdditionalLights");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-menu-fps-cap");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-nape-blood");
    il2cpp_codegen_initialize_runtime_metadata(&"WaterFX");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-anti-aliasing");
    il2cpp_codegen_initialize_runtime_metadata(&"AutoExposure");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-color-grading");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-titan-gore");
    il2cpp_codegen_initialize_runtime_metadata(&"MenuFPSCap");
    il2cpp_codegen_initialize_runtime_metadata(&"RenderDistanceTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"ChromaticAberration");
    il2cpp_codegen_initialize_runtime_metadata(&"InterpolationEnabledTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-shadow-distance");
    il2cpp_codegen_initialize_runtime_metadata(&"NapeBloodEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-render-scale");
    il2cpp_codegen_initialize_runtime_metadata(&"ShadowQuality");
    il2cpp_codegen_initialize_runtime_metadata(&"PresetQuality");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-weapon-fire-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-auto-exposure");
    il2cpp_codegen_initialize_runtime_metadata(&"MipmapEnabledTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-vsync");
    il2cpp_codegen_initialize_runtime_metadata(&"Graphics");
    il2cpp_codegen_initialize_runtime_metadata(&"Bloom");
    il2cpp_codegen_initialize_runtime_metadata(&"TitanGore");
    il2cpp_codegen_initialize_runtime_metadata(&"RenderScaleTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-wind-effect");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-mipmap");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-bloom");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-light-distance");
    il2cpp_codegen_initialize_runtime_metadata(&"TextureQuality");
    il2cpp_codegen_initialize_runtime_metadata(&"HDRTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"ColorGrading");
    il2cpp_codegen_initialize_runtime_metadata(&"WeaponFireEffectTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"RenderScale");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-graphics-hdr");
    Il2CppMethodInitialized_075485c4 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if (pSVar1 != (Settings_GraphicsSettings_o *)0x0) {
    pSVar11 = (pSVar1->fields).ScreenResolution;
    if (pSVar11 == (Settings_IntSetting_o *)0x0) goto label_05e40882;
    iVar5 = (pSVar11->fields)._value;
    if ((TypeInfo_ApplicationManagers_FullscreenHandler->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_FullscreenHandler);
    }
    iVar5 = ApplicationManagers_FullscreenHandler__SanitizeResolutionSetting(iVar5,(MethodInfo *)0x0);
    Settings_TypedSetting_int___set_Value
              ((Settings_TypedSetting_int__o *)pSVar11,iVar5,
               (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
  }
  pGVar6 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array,5);
  pGVar7 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,3);
  pSVar4 = "settings-graphics-preset-quality";
  id = "settings-graphics-preset-display";
  pSVar3 = "PresetQuality";
  pSVar2 = "Graphics";
  if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
    pSVar11 = (Settings_IntSetting_o *)0x0;
  }
  else {
    pSVar11 = (pSVar1->fields).PresetQuality;
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (__this,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory_PresetChanged
             ,(MethodInfo_4A803E0 *)0x0);
  pIVar8 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown
                     (pSVar4,pSVar2,pSVar3,pSVar11,(System_String_o *)0x0,__this,in_stack_ffffffffffffffa8);
  if (pGVar7 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) goto label_05e40882;
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar9 = il2cpp_vm_Object_IsInst(pIVar8,(((pGVar7->obj).klass)->_1).element_class);
    if (pIVar9 == (Il2CppObject *)0x0) goto label_05e40887;
  }
  if ((int)pGVar7->max_length == 0) goto label_05e4087d;
  pGVar7->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar8;
  Il2CppCodeGenWriteBarrier(pGVar7->m_Items);
  if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
    pSVar11 = (Settings_IntSetting_o *)0x0;
  }
  else {
    pSVar11 = (pSVar1->fields).FullScreenMode;
  }
  pIVar8 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                     ("settings-graphics-fullscreen","Graphics","Fullscreen",pSVar11,
                      "FullscreenTooltip",(System_Action_GisketchActionContext__o *)0x0,
                      in_stack_ffffffffffffffa8);
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar9 = il2cpp_vm_Object_IsInst(pIVar8,(((pGVar7->obj).klass)->_1).element_class);
    if (pIVar9 == (Il2CppObject *)0x0) goto label_05e40887;
  }
  if ((pGVar7->max_length & 0xfffffffe) == 0) goto label_05e4087d;
  pMVar14 = (MethodInfo *)(pGVar7->m_Items + 1);
  pGVar7->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar8;
  Il2CppCodeGenWriteBarrier((void **)pMVar14);
  pSVar4 = "settings-graphics-resolution";
  pSVar3 = "Resolution";
  pSVar2 = "Graphics";
  if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
    pMVar12 = (MethodInfo *)0x0;
  }
  else {
    pMVar12 = (MethodInfo *)(pSVar1->fields).ScreenResolution;
  }
  labels = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__SafeResolutions(pMVar14);
  pMVar14 = (MethodInfo *)0x0;
  pIVar8 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown_5d40a70
                     (pSVar4,pSVar2,pSVar3,(Settings_IntSetting_o *)pMVar12,labels,(System_String_o *)0x0,
                      (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb0);
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar9 = il2cpp_vm_Object_IsInst(pIVar8,(((pGVar7->obj).klass)->_1).element_class);
    if (pIVar9 == (Il2CppObject *)0x0) goto label_05e40887;
  }
  if ((uint)pGVar7->max_length < 3) goto label_05e4087d;
  pGVar7->m_Items[2] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar8;
  Il2CppCodeGenWriteBarrier(pGVar7->m_Items + 2);
  pGVar10 = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor(pGVar10,id,pGVar7,pMVar12);
  if (pGVar6 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) {
label_05e40882:
    ThrowNullReferenceException();
  }
  if ((int)pGVar6->max_length == 0) goto label_05e4087d;
  pGVar6->m_Items[0] = pGVar10;
  Il2CppCodeGenWriteBarrier(pGVar6->m_Items);
  pGVar7 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,8);
  pSVar2 = "settings-graphics-performance";
  if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
    pSVar11 = (Settings_IntSetting_o *)0x0;
  }
  else {
    pSVar11 = (pSVar1->fields).RenderScale;
  }
  pIVar8 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider_5d40b40
                     ("settings-graphics-render-scale","Graphics","RenderScale",pSVar11,
                      "RenderScaleTooltip",(System_Action_GisketchActionContext__o *)0x0,pMVar14);
  if (pGVar7 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) goto label_05e40882;
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar9 = il2cpp_vm_Object_IsInst(pIVar8,(((pGVar7->obj).klass)->_1).element_class);
    if (pIVar9 == (Il2CppObject *)0x0) goto label_05e40887;
  }
  if ((int)pGVar7->max_length == 0) goto label_05e4087d;
  pGVar7->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar8;
  Il2CppCodeGenWriteBarrier(pGVar7->m_Items);
  if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
    pSVar11 = (Settings_IntSetting_o *)0x0;
  }
  else {
    pSVar11 = (pSVar1->fields).RenderDistance;
  }
  pIVar8 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
                     ("settings-graphics-render-distance","Graphics","RenderDistance",pSVar11,
                      "RenderDistanceTooltip",(System_Action_GisketchActionContext__o *)0x0,pMVar14);
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar9 = il2cpp_vm_Object_IsInst(pIVar8,(((pGVar7->obj).klass)->_1).element_class);
    if (pIVar9 == (Il2CppObject *)0x0) goto label_05e40887;
  }
  if ((pGVar7->max_length & 0xfffffffe) == 0) goto label_05e4087d;
  pGVar7->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar8;
  Il2CppCodeGenWriteBarrier(pGVar7->m_Items + 1);
  if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
    pSVar11 = (Settings_IntSetting_o *)0x0;
  }
  else {
    pSVar11 = (pSVar1->fields).FPSCap;
  }
  pIVar8 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
                     ("settings-graphics-fps-cap","Graphics","FPSCap",pSVar11,
                      (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,pMVar14);
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar9 = il2cpp_vm_Object_IsInst(pIVar8,(((pGVar7->obj).klass)->_1).element_class);
    if (pIVar9 == (Il2CppObject *)0x0) goto label_05e40887;
  }
  if ((uint)pGVar7->max_length < 3) goto label_05e4087d;
  pGVar7->m_Items[2] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar8;
  Il2CppCodeGenWriteBarrier(pGVar7->m_Items + 2);
  if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
    pSVar11 = (Settings_IntSetting_o *)0x0;
  }
  else {
    pSVar11 = (pSVar1->fields).MenuFPSCap;
  }
  pIVar8 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
                     ("settings-graphics-menu-fps-cap","Graphics","MenuFPSCap",pSVar11,
                      (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,pMVar14);
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar9 = il2cpp_vm_Object_IsInst(pIVar8,(((pGVar7->obj).klass)->_1).element_class);
    if (pIVar9 == (Il2CppObject *)0x0) goto label_05e40887;
  }
  if ((pGVar7->max_length & 0xfffffffc) == 0) goto label_05e4087d;
  pGVar7->m_Items[3] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar8;
  Il2CppCodeGenWriteBarrier(pGVar7->m_Items + 3);
  if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
    pSVar13 = (Settings_BoolSetting_o *)0x0;
  }
  else {
    pSVar13 = (pSVar1->fields).VSync;
  }
  pIVar8 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                     ("settings-graphics-vsync","Graphics","VSync",pSVar13,
                      (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,pMVar14);
  if (pIVar8 != (Il2CppObject *)0x0) {
    pIVar9 = il2cpp_vm_Object_IsInst(pIVar8,(((pGVar7->obj).klass)->_1).element_class);
    if (pIVar9 == (Il2CppObject *)0x0) goto label_05e40887;
  }
  if (4 < (uint)pGVar7->max_length) {
    pGVar7->m_Items[4] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar8;
    Il2CppCodeGenWriteBarrier(pGVar7->m_Items + 4);
    if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
      pSVar13 = (Settings_BoolSetting_o *)0x0;
    }
    else {
      pSVar13 = (pSVar1->fields).InterpolationEnabled;
    }
    pIVar8 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                       ("settings-graphics-interpolation","Graphics","InterpolationEnabled",pSVar13,
                        "InterpolationEnabledTooltip",(System_Action_GisketchActionContext__o *)0x0,pMVar14);
    if (pIVar8 != (Il2CppObject *)0x0) {
      pIVar9 = il2cpp_vm_Object_IsInst(pIVar8,(((pGVar7->obj).klass)->_1).element_class);
      if (pIVar9 == (Il2CppObject *)0x0) {
label_05e40887:
        pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
      }
    }
    if (5 < (uint)pGVar7->max_length) {
      pGVar7->m_Items[5] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar8;
      Il2CppCodeGenWriteBarrier(pGVar7->m_Items + 5);
      if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
        pMVar12 = (MethodInfo *)0x0;
        pIVar8 = (Il2CppObject *)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                           ("settings-graphics-show-fps","Graphics","ShowFPS",
                            (Settings_BoolSetting_o *)0x0,(System_String_o *)0x0,
                            (System_Action_GisketchActionContext__o *)0x0,pMVar14);
        il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
        il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,6,pIVar8);
      }
      else {
        pIVar8 = (Il2CppObject *)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                           ("settings-graphics-show-fps","Graphics","ShowFPS",
                            (pSVar1->fields).ShowFPS,(System_String_o *)0x0,
                            (System_Action_GisketchActionContext__o *)0x0,pMVar14);
        il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
        il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,6,pIVar8);
        pMVar12 = (MethodInfo *)(pSVar1->fields).MipmapEnabled;
      }
      pSVar11 = (Settings_IntSetting_o *)0x0;
      pIVar8 = (Il2CppObject *)
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                         ("settings-graphics-mipmap","Graphics","MipmapEnabled",
                          (Settings_BoolSetting_o *)pMVar12,"MipmapEnabledTooltip",
                          (System_Action_GisketchActionContext__o *)0x0,pMVar14);
      il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
      il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,7,pIVar8);
      pGVar10 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor(pGVar10,pSVar2,pGVar7,pMVar12);
      il2cpp_runtime_helper_02fe1060(pGVar6,1,pGVar10);
      pGVar7 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
               SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,8);
      pSVar2 = "settings-graphics-effects";
      if (pSVar1 != (Settings_GraphicsSettings_o *)0x0) {
        pSVar11 = (pSVar1->fields).WeatherEffects;
      }
      pIVar8 = (Il2CppObject *)
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                         ("settings-graphics-weather-effects","Graphics","WeatherEffects",pSVar11,
                          (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,pMVar14);
      if (pGVar7 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
        il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
        il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,0,pIVar8);
        if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
          pSVar13 = (Settings_BoolSetting_o *)0x0;
          pIVar8 = (Il2CppObject *)
                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                             ("settings-graphics-weapon-trail","Graphics","WeaponTrail",
                              (Settings_IntSetting_o *)0x0,(System_String_o *)0x0,
                              (System_Action_GisketchActionContext__o *)0x0,pMVar14);
          il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
          il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,1,pIVar8);
        }
        else {
          pIVar8 = (Il2CppObject *)
                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                             ("settings-graphics-weapon-trail","Graphics","WeaponTrail",
                              (pSVar1->fields).WeaponTrail,(System_String_o *)0x0,
                              (System_Action_GisketchActionContext__o *)0x0,pMVar14);
          il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
          il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,1,pIVar8);
          pSVar13 = (pSVar1->fields).WeaponTrailHold;
        }
        pIVar8 = (Il2CppObject *)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                           ("settings-graphics-weapon-trail-hold","Graphics","WeaponTrailHold",pSVar13,
                            "WeaponTrailHoldTooltip",(System_Action_GisketchActionContext__o *)0x0,pMVar14);
        il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
        il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,2,pIVar8);
        if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
          pSVar13 = (Settings_BoolSetting_o *)0x0;
          pIVar8 = (Il2CppObject *)
                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                             ("settings-graphics-weapon-fire-effect","Graphics","WeaponFireEffect",
                              (Settings_BoolSetting_o *)0x0,"WeaponFireEffectTooltip",
                              (System_Action_GisketchActionContext__o *)0x0,pMVar14);
          il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
          il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,3,pIVar8);
        }
        else {
          pIVar8 = (Il2CppObject *)
                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                             ("settings-graphics-weapon-fire-effect","Graphics","WeaponFireEffect",
                              (pSVar1->fields).WeaponFireEffect,"WeaponFireEffectTooltip",
                              (System_Action_GisketchActionContext__o *)0x0,pMVar14);
          il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
          il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,3,pIVar8);
          pSVar13 = (pSVar1->fields).WindEffectEnabled;
        }
        pIVar8 = (Il2CppObject *)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                           ("settings-graphics-wind-effect","Graphics","WindEffectEnabled",pSVar13,
                            (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,pMVar14);
        il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
        il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,4,pIVar8);
        if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
          pSVar13 = (Settings_BoolSetting_o *)0x0;
          pIVar8 = (Il2CppObject *)
                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                             ("settings-graphics-blood-splatter","Graphics","BloodSplatterEnabled",
                              (Settings_BoolSetting_o *)0x0,(System_String_o *)0x0,
                              (System_Action_GisketchActionContext__o *)0x0,pMVar14);
          il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
          il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,5,pIVar8);
        }
        else {
          pIVar8 = (Il2CppObject *)
                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                             ("settings-graphics-blood-splatter","Graphics","BloodSplatterEnabled",
                              (pSVar1->fields).BloodSplatterEnabled,(System_String_o *)0x0,
                              (System_Action_GisketchActionContext__o *)0x0,pMVar14);
          il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
          il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,5,pIVar8);
          pSVar13 = (pSVar1->fields).NapeBloodEnabled;
        }
        pMVar12 = (MethodInfo *)0x0;
        pIVar8 = (Il2CppObject *)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                           ("settings-graphics-nape-blood","Graphics","NapeBloodEnabled",pSVar13,
                            (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,pMVar14);
        il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
        il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,6,pIVar8);
        if (pSVar1 != (Settings_GraphicsSettings_o *)0x0) {
          pMVar12 = (MethodInfo *)(pSVar1->fields).TitanGore;
        }
        pSVar11 = (Settings_IntSetting_o *)0x0;
        pIVar8 = (Il2CppObject *)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                           ("settings-graphics-titan-gore","Graphics","TitanGore",
                            (Settings_BoolSetting_o *)pMVar12,"TitanGoreTooltip",
                            (System_Action_GisketchActionContext__o *)0x0,pMVar14);
        il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
        il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,7,pIVar8);
        pGVar10 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor(pGVar10,pSVar2,pGVar7,pMVar12);
        il2cpp_runtime_helper_02fe1060(pGVar6,2,pGVar10);
        pGVar7 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                 SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,7);
        pSVar2 = "settings-graphics-texture-lighting";
        if (pSVar1 != (Settings_GraphicsSettings_o *)0x0) {
          pSVar11 = (pSVar1->fields).TextureQuality;
        }
        pIVar8 = (Il2CppObject *)
                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                           ("settings-graphics-texture-quality","Graphics","TextureQuality",pSVar11,
                            (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,pMVar14);
        if (pGVar7 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
          il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
          il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,0,pIVar8);
          if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
            pSVar11 = (Settings_IntSetting_o *)0x0;
            pIVar8 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                               ("settings-graphics-shadow-quality","Graphics","ShadowQuality",
                                (Settings_IntSetting_o *)0x0,(System_String_o *)0x0,
                                (System_Action_GisketchActionContext__o *)0x0,pMVar14);
            il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,1,pIVar8);
          }
          else {
            pIVar8 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                               ("settings-graphics-shadow-quality","Graphics","ShadowQuality",
                                (pSVar1->fields).ShadowQuality,(System_String_o *)0x0,
                                (System_Action_GisketchActionContext__o *)0x0,pMVar14);
            il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,1,pIVar8);
            pSVar11 = (pSVar1->fields).ShadowDistance;
          }
          pIVar8 = (Il2CppObject *)
                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider_5d40b40
                             ("settings-graphics-shadow-distance","Graphics","ShadowDistance",pSVar11,
                              (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,pMVar14);
          il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
          il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,2,pIVar8);
          if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
            pSVar11 = (Settings_IntSetting_o *)0x0;
            pIVar8 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider_5d40b40
                               ("settings-graphics-light-distance","Graphics","LightDistance",
                                (Settings_IntSetting_o *)0x0,(System_String_o *)0x0,
                                (System_Action_GisketchActionContext__o *)0x0,pMVar14);
            il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,3,pIVar8);
          }
          else {
            pIVar8 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider_5d40b40
                               ("settings-graphics-light-distance","Graphics","LightDistance",
                                (pSVar1->fields).LightDistance,(System_String_o *)0x0,
                                (System_Action_GisketchActionContext__o *)0x0,pMVar14);
            il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,3,pIVar8);
            pSVar11 = (pSVar1->fields).AntiAliasingQuality;
          }
          pIVar8 = (Il2CppObject *)
                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                             ("settings-graphics-anti-aliasing","Graphics","AntiAliasing",pSVar11,
                              (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,pMVar14);
          il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
          il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,4,pIVar8);
          if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
            pMVar12 = (MethodInfo *)0x0;
            pIVar8 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                               ("settings-graphics-anisotropic","Graphics","Anisotropic",
                                (Settings_IntSetting_o *)0x0,(System_String_o *)0x0,
                                (System_Action_GisketchActionContext__o *)0x0,pMVar14);
            il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,5,pIVar8);
          }
          else {
            pIVar8 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                               ("settings-graphics-anisotropic","Graphics","Anisotropic",
                                (pSVar1->fields).AnisotropicFiltering,(System_String_o *)0x0,
                                (System_Action_GisketchActionContext__o *)0x0,pMVar14);
            il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,5,pIVar8);
            pMVar12 = (MethodInfo *)(pSVar1->fields).AdditionalLights;
          }
          pSVar11 = (Settings_IntSetting_o *)0x0;
          pIVar8 = (Il2CppObject *)
                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                             ("settings-graphics-additional-lights","Graphics","AdditionalLights",
                              (Settings_IntSetting_o *)pMVar12,(System_String_o *)0x0,
                              (System_Action_GisketchActionContext__o *)0x0,pMVar14);
          il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
          il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,6,pIVar8);
          pGVar10 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
          Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor(pGVar10,pSVar2,pGVar7,pMVar12);
          il2cpp_runtime_helper_02fe1060(pGVar6,3,pGVar10);
          pGVar7 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                   SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,9);
          pSVar2 = "settings-graphics-post-processing";
          if (pSVar1 != (Settings_GraphicsSettings_o *)0x0) {
            pSVar11 = (pSVar1->fields).AmbientOcclusion;
          }
          pIVar8 = (Il2CppObject *)
                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Dropdown
                             ("settings-graphics-ambient-occlusion","Graphics","AmbientOcclusion",pSVar11,
                              (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,pMVar14);
          if (pGVar7 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
            il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,0,pIVar8);
            if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
              pSVar11 = (Settings_IntSetting_o *)0x0;
              pIVar8 = (Il2CppObject *)
                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                 ("settings-graphics-bloom","Graphics","Bloom",
                                  (Settings_IntSetting_o *)0x0,(System_String_o *)0x0,
                                  (System_Action_GisketchActionContext__o *)0x0,pMVar14);
              il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
              il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,1,pIVar8);
            }
            else {
              pIVar8 = (Il2CppObject *)
                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                 ("settings-graphics-bloom","Graphics","Bloom",
                                  (pSVar1->fields).Bloom,(System_String_o *)0x0,
                                  (System_Action_GisketchActionContext__o *)0x0,pMVar14);
              il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
              il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,1,pIVar8);
              pSVar11 = (pSVar1->fields).ChromaticAberrationFX;
            }
            pIVar8 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                               ("settings-graphics-chromatic-aberration","Graphics","ChromaticAberration",pSVar11,
                                (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,pMVar14);
            il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,2,pIVar8);
            if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
              pSVar11 = (Settings_IntSetting_o *)0x0;
              pIVar8 = (Il2CppObject *)
                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                 ("settings-graphics-color-grading","Graphics","ColorGrading",
                                  (Settings_IntSetting_o *)0x0,(System_String_o *)0x0,
                                  (System_Action_GisketchActionContext__o *)0x0,pMVar14);
              il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
              il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,3,pIVar8);
            }
            else {
              pIVar8 = (Il2CppObject *)
                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                 ("settings-graphics-color-grading","Graphics","ColorGrading",
                                  (pSVar1->fields).ColorGrading,(System_String_o *)0x0,
                                  (System_Action_GisketchActionContext__o *)0x0,pMVar14);
              il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
              il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,3,pIVar8);
              pSVar11 = (pSVar1->fields).AutoExposure;
            }
            pIVar8 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                               ("settings-graphics-auto-exposure","Graphics","AutoExposure",pSVar11,
                                (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,pMVar14);
            il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,4,pIVar8);
            if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
              pSVar11 = (Settings_IntSetting_o *)0x0;
              pIVar8 = (Il2CppObject *)
                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                 ("settings-graphics-depth-of-field","Graphics","DepthOfField",
                                  (Settings_IntSetting_o *)0x0,(System_String_o *)0x0,
                                  (System_Action_GisketchActionContext__o *)0x0,pMVar14);
              il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
              il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,5,pIVar8);
            }
            else {
              pIVar8 = (Il2CppObject *)
                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                 ("settings-graphics-depth-of-field","Graphics","DepthOfField",
                                  (pSVar1->fields).DepthOfField,(System_String_o *)0x0,
                                  (System_Action_GisketchActionContext__o *)0x0,pMVar14);
              il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
              il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,5,pIVar8);
              pSVar11 = (pSVar1->fields).MotionBlur;
            }
            pIVar8 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                               ("settings-graphics-motion-blur","Graphics","MotionBlur",pSVar11,
                                (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,pMVar14);
            il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,6,pIVar8);
            if (pSVar1 == (Settings_GraphicsSettings_o *)0x0) {
              pMVar12 = (MethodInfo *)0x0;
              pIVar8 = (Il2CppObject *)
                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                 ("settings-graphics-water-fx","Graphics","WaterFX",
                                  (Settings_IntSetting_o *)0x0,(System_String_o *)0x0,
                                  (System_Action_GisketchActionContext__o *)0x0,pMVar14);
              il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
              il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,7,pIVar8);
            }
            else {
              pIVar8 = (Il2CppObject *)
                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                 ("settings-graphics-water-fx","Graphics","WaterFX",
                                  (pSVar1->fields).WaterFX,(System_String_o *)0x0,
                                  (System_Action_GisketchActionContext__o *)0x0,pMVar14);
              il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
              il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,7,pIVar8);
              pMVar12 = (MethodInfo *)(pSVar1->fields).HDR;
            }
            pIVar8 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                               ("settings-graphics-hdr","Graphics","HDR",
                                (Settings_BoolSetting_o *)pMVar12,"HDRTooltip",
                                (System_Action_GisketchActionContext__o *)0x0,pMVar14);
            il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar7,pIVar8);
            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar7,8,pIVar8);
            pGVar10 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
            Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor(pGVar10,pSVar2,pGVar7,pMVar12);
            il2cpp_runtime_helper_02fe1060(pGVar6,4,pGVar10);
            return pGVar6;
          }
        }
      }
      goto label_05e40882;
    }
  }
label_05e4087d:
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGraphicsCategory$$PresetChanged
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory__PresetChanged (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5e40c20

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory__PresetChanged
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Settings_GraphicsSettings_o *__this;
  Gisketch_Aottg2UI_GisketchUIRoot_o *root;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075485c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_075485c5 = '\x01';
  }
  __this = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
  if (__this != (Settings_GraphicsSettings_o *)0x0) {
    Settings_GraphicsSettings__OnSelectPreset(__this,(MethodInfo *)0x0);
  }
  if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
    root = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  }
  else {
    root = UnityEngine_GameObject__GetComponentInParent_object_
                     (context.fields.GameObject,
                      (MethodInfo_353BB40 *)
                      MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGraphicsCategory__Groups
                     ((MethodInfo *)context.fields.GameObject);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SyncState(root,groups,method_00);
  return;
}


