// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGeneralCategory
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsGeneralCategory.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGeneralCategory.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory___c___cctor (const MethodInfo* method);
// 0x5e3f070

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075485c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory_c);
    Il2CppMethodInitialized_075485c2 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory_c)
  ;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory_c->static_fields->__9 =
       (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGeneralCategory.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory___c___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory___c_o* __this, const MethodInfo* method);
// 0x5e3f0e0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory___c___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory___c_o *__this,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGeneralCategory.<>c$$<Language>b__3_0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory___c___Language_b__3_0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o __, const MethodInfo* method);
// 0x5e3f0f0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory___c___Language_b__3_0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o __,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ApplyLanguageNextFrame((MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGeneralCategory$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory__Build (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x5e3d8a0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory__Build
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  System_String_o *categoryId;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory_o *__this;
  System_String_o **method_00;
  
  method_00 = (System_String_o **)content;
  if (g_data_075485bf == '\0') {
    method_00 = &"general";
    il2cpp_codegen_initialize_runtime_metadata(&"general");
    g_data_075485bf = '\x01';
  }
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory__Groups((MethodInfo *)method_00);
  categoryId = "general";
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


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGeneralCategory$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory__SyncState (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5e3e8b0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory__SyncState
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  MethodInfo *method_00;
  
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory__Groups((MethodInfo *)root);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SyncState(root,groups,method_00);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGeneralCategory$$Groups
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory__Groups (const MethodInfo* method);
// 0x5e3d970

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory__Groups(MethodInfo *method)

{
  Settings_GeneralSettings_o *settings;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *pGVar2;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *pGVar6;
  MethodInfo *in_RCX;
  Settings_IntSetting_o *setting;
  Settings_FloatSetting_o *pSVar7;
  Settings_BoolSetting_o *pSVar8;
  MethodInfo *pMVar9;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (Il2CppMethodInitialized_075485c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-snapshots");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraClipping");
    il2cpp_codegen_initialize_runtime_metadata(&"FOVMinTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-fov-cutscenes-original-camera");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-invert-mouse");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-camera-distance");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-snapshots-show-in-game");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraSide");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-original-camera-wow-rotation");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraTilt");
    il2cpp_codegen_initialize_runtime_metadata(&"OriginalCameraWOWRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"SnapshotsShowInGame");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-snapshots-enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"FPSFOVMinTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-fps-fov-min");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-minimap-height");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-fps-fov-max");
    il2cpp_codegen_initialize_runtime_metadata(&"SnapshotsMinimumDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-camera-clipping");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-camera-tilt");
    il2cpp_codegen_initialize_runtime_metadata(&"OriginalCameraWOWRotationTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-original-camera-speed");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"MinimapHeight");
    il2cpp_codegen_initialize_runtime_metadata(&"OriginalCameraSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-camera-mode");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-minimap");
    il2cpp_codegen_initialize_runtime_metadata(&"SnapshotsEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"InvertMouse");
    il2cpp_codegen_initialize_runtime_metadata(&"FOVMaxTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"FPSFOVMin");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-camera-mode-position");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-mouse-speed");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-original-camera-deadzone");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-camera-side");
    il2cpp_codegen_initialize_runtime_metadata(&"MinimapEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-minimap-enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"FPSFOVMaxTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-skip-cutscenes");
    il2cpp_codegen_initialize_runtime_metadata(&"FPSFOVMax");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-camera-height");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-mouse");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraClippingTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraHeight");
    il2cpp_codegen_initialize_runtime_metadata(&"FOVMax");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-fov-min");
    il2cpp_codegen_initialize_runtime_metadata(&"OriginalCameraDeadzone");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraMode");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-fov-max");
    il2cpp_codegen_initialize_runtime_metadata(&"FOVMin");
    il2cpp_codegen_initialize_runtime_metadata(&"MouseSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"SkipCutscenes");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-language");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-snapshots-min-damage");
    Il2CppMethodInitialized_075485c0 = '\x01';
  }
  settings = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  pGVar2 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array,6);
  pMVar9 = (MethodInfo *)0x1;
  pGVar3 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,1);
  pIVar4 = (Il2CppObject *)
           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory__Language(settings,pMVar9);
  if (pGVar3 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
label_05e3e8a6:
    ThrowNullReferenceException();
  }
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
    if (pIVar5 == (Il2CppObject *)0x0) goto label_05e3e897;
  }
  if ((int)pGVar3->max_length != 0) {
    pGVar3->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
    Il2CppCodeGenWriteBarrier(pGVar3->m_Items);
    pGVar6 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor(pGVar6,"settings-general-language",pGVar3,in_RCX);
    if (pGVar2 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) goto label_05e3e8a6;
    if ((int)pGVar2->max_length == 0) goto label_05e3e892;
    pGVar2->m_Items[0] = pGVar6;
    Il2CppCodeGenWriteBarrier(pGVar2->m_Items);
    pGVar3 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,6);
    pSVar1 = "settings-general-camera-mode-position";
    if (settings == (Settings_GeneralSettings_o *)0x0) {
      setting = (Settings_IntSetting_o *)0x0;
    }
    else {
      setting = (settings->fields).CameraMode;
    }
    pIVar4 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                       ("settings-general-camera-mode","General","CameraMode",setting,
                        (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                        in_stack_ffffffffffffffb8);
    if (pGVar3 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) goto label_05e3e8a6;
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
      if (pIVar5 == (Il2CppObject *)0x0) goto label_05e3e897;
    }
    if ((int)pGVar3->max_length == 0) goto label_05e3e892;
    pGVar3->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
    Il2CppCodeGenWriteBarrier(pGVar3->m_Items);
    if (settings == (Settings_GeneralSettings_o *)0x0) {
      pSVar7 = (Settings_FloatSetting_o *)0x0;
    }
    else {
      pSVar7 = (settings->fields).CameraDistance;
    }
    pIVar4 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                       ("settings-general-camera-distance","General","CameraDistance",pSVar7,
                        (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                        in_stack_ffffffffffffffb8);
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
      if (pIVar5 == (Il2CppObject *)0x0) goto label_05e3e897;
    }
    if ((pGVar3->max_length & 0xfffffffe) == 0) goto label_05e3e892;
    pGVar3->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
    Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 1);
    if (settings == (Settings_GeneralSettings_o *)0x0) {
      pSVar7 = (Settings_FloatSetting_o *)0x0;
    }
    else {
      pSVar7 = (settings->fields).CameraHeight;
    }
    pIVar4 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                       ("settings-general-camera-height","General","CameraHeight",pSVar7,
                        (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                        in_stack_ffffffffffffffb8);
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
      if (pIVar5 == (Il2CppObject *)0x0) goto label_05e3e897;
    }
    if ((uint)pGVar3->max_length < 3) goto label_05e3e892;
    pGVar3->m_Items[2] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
    Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 2);
    if (settings == (Settings_GeneralSettings_o *)0x0) {
      pSVar7 = (Settings_FloatSetting_o *)0x0;
    }
    else {
      pSVar7 = (settings->fields).CameraSide;
    }
    pIVar4 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                       ("settings-general-camera-side","General","CameraSide",pSVar7,
                        (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                        in_stack_ffffffffffffffb8);
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
      if (pIVar5 == (Il2CppObject *)0x0) goto label_05e3e897;
    }
    if ((pGVar3->max_length & 0xfffffffc) == 0) goto label_05e3e892;
    pGVar3->m_Items[3] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
    Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 3);
    if (settings == (Settings_GeneralSettings_o *)0x0) {
      pSVar7 = (Settings_FloatSetting_o *)0x0;
    }
    else {
      pSVar7 = (settings->fields).CameraTiltStrength;
    }
    pIVar4 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                       ("settings-general-camera-tilt","General","CameraTilt",pSVar7,
                        (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                        in_stack_ffffffffffffffb8);
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
      if (pIVar5 == (Il2CppObject *)0x0) goto label_05e3e897;
    }
    if ((uint)pGVar3->max_length < 5) goto label_05e3e892;
    pGVar3->m_Items[4] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
    Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 4);
    if (settings == (Settings_GeneralSettings_o *)0x0) {
      pMVar9 = (MethodInfo *)0x0;
    }
    else {
      pMVar9 = (MethodInfo *)(settings->fields).CameraClipping;
    }
    pIVar4 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                       ("settings-general-camera-clipping","General","CameraClipping",
                        (Settings_BoolSetting_o *)pMVar9,"CameraClippingTooltip",
                        (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
      if (pIVar5 == (Il2CppObject *)0x0) goto label_05e3e897;
    }
    if ((uint)pGVar3->max_length < 6) goto label_05e3e892;
    pGVar3->m_Items[5] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
    Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 5);
    pGVar6 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor(pGVar6,pSVar1,pGVar3,pMVar9);
    if ((pGVar2->max_length & 0xfffffffe) == 0) goto label_05e3e892;
    pGVar2->m_Items[1] = pGVar6;
    Il2CppCodeGenWriteBarrier(pGVar2->m_Items + 1);
    pGVar3 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,2);
    pSVar1 = "settings-general-mouse";
    if (settings == (Settings_GeneralSettings_o *)0x0) {
      pSVar7 = (Settings_FloatSetting_o *)0x0;
    }
    else {
      pSVar7 = (settings->fields).MouseSpeed;
    }
    pIVar4 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                       ("settings-general-mouse-speed","General","MouseSpeed",pSVar7,
                        (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                        in_stack_ffffffffffffffb8);
    if (pGVar3 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) goto label_05e3e8a6;
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
      if (pIVar5 == (Il2CppObject *)0x0) goto label_05e3e897;
    }
    if ((int)pGVar3->max_length == 0) goto label_05e3e892;
    pGVar3->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
    Il2CppCodeGenWriteBarrier(pGVar3->m_Items);
    if (settings == (Settings_GeneralSettings_o *)0x0) {
      pMVar9 = (MethodInfo *)0x0;
    }
    else {
      pMVar9 = (MethodInfo *)(settings->fields).InvertMouse;
    }
    pIVar4 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                       ("settings-general-invert-mouse","General","InvertMouse",
                        (Settings_BoolSetting_o *)pMVar9,(System_String_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
      if (pIVar5 == (Il2CppObject *)0x0) goto label_05e3e897;
    }
    if ((pGVar3->max_length & 0xfffffffe) == 0) goto label_05e3e892;
    pGVar3->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
    Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 1);
    pGVar6 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor(pGVar6,pSVar1,pGVar3,pMVar9);
    if ((uint)pGVar2->max_length < 3) goto label_05e3e892;
    pGVar2->m_Items[2] = pGVar6;
    Il2CppCodeGenWriteBarrier(pGVar2->m_Items + 2);
    pGVar3 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,2);
    pSVar1 = "settings-general-minimap";
    if (settings == (Settings_GeneralSettings_o *)0x0) {
      pSVar8 = (Settings_BoolSetting_o *)0x0;
    }
    else {
      pSVar8 = (settings->fields).MinimapEnabled;
    }
    pIVar4 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                       ("settings-general-minimap-enabled","General","MinimapEnabled",pSVar8,
                        (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                        in_stack_ffffffffffffffb8);
    if (pGVar3 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) goto label_05e3e8a6;
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
      if (pIVar5 == (Il2CppObject *)0x0) goto label_05e3e897;
    }
    if ((int)pGVar3->max_length == 0) goto label_05e3e892;
    pGVar3->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
    Il2CppCodeGenWriteBarrier(pGVar3->m_Items);
    if (settings == (Settings_GeneralSettings_o *)0x0) {
      pMVar9 = (MethodInfo *)0x0;
    }
    else {
      pMVar9 = (MethodInfo *)(settings->fields).MinimapCameraHeight;
    }
    pIVar4 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_5d3eca0
                       ("settings-general-minimap-height","General","MinimapHeight",
                        (Settings_FloatSetting_o *)pMVar9,(System_String_o *)0x0,
                        (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
      if (pIVar5 == (Il2CppObject *)0x0) goto label_05e3e897;
    }
    if ((pGVar3->max_length & 0xfffffffe) == 0) goto label_05e3e892;
    pGVar3->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
    Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 1);
    pGVar6 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor(pGVar6,pSVar1,pGVar3,pMVar9);
    if ((pGVar2->max_length & 0xfffffffc) == 0) goto label_05e3e892;
    pGVar2->m_Items[3] = pGVar6;
    Il2CppCodeGenWriteBarrier(pGVar2->m_Items + 3);
    pGVar3 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,3);
    pSVar1 = "settings-general-snapshots";
    if (settings == (Settings_GeneralSettings_o *)0x0) {
      pSVar8 = (Settings_BoolSetting_o *)0x0;
    }
    else {
      pSVar8 = (settings->fields).SnapshotsEnabled;
    }
    pIVar4 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                       ("settings-general-snapshots-enabled","General","SnapshotsEnabled",pSVar8,
                        (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                        in_stack_ffffffffffffffb8);
    if (pGVar3 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) goto label_05e3e8a6;
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
      if (pIVar5 == (Il2CppObject *)0x0) goto label_05e3e897;
    }
    if ((int)pGVar3->max_length == 0) goto label_05e3e892;
    pGVar3->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
    Il2CppCodeGenWriteBarrier(pGVar3->m_Items);
    if (settings == (Settings_GeneralSettings_o *)0x0) {
      pSVar8 = (Settings_BoolSetting_o *)0x0;
    }
    else {
      pSVar8 = (settings->fields).SnapshotsShowInGame;
    }
    pIVar4 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                       ("settings-general-snapshots-show-in-game","General","SnapshotsShowInGame",pSVar8,
                        (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                        in_stack_ffffffffffffffb8);
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
      if (pIVar5 == (Il2CppObject *)0x0) goto label_05e3e897;
    }
    if ((pGVar3->max_length & 0xfffffffe) != 0) {
      pGVar3->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
      Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 1);
      if (settings == (Settings_GeneralSettings_o *)0x0) {
        pMVar9 = (MethodInfo *)0x0;
      }
      else {
        pMVar9 = (MethodInfo *)(settings->fields).SnapshotsMinimumDamage;
      }
      pIVar4 = (Il2CppObject *)
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
                         ("settings-general-snapshots-min-damage","General","SnapshotsMinimumDamage",
                          (Settings_IntSetting_o *)pMVar9,(System_String_o *)0x0,
                          (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
      if (pIVar4 != (Il2CppObject *)0x0) {
        pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pGVar3->obj).klass)->_1).element_class);
        if (pIVar5 == (Il2CppObject *)0x0) {
label_05e3e897:
          pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)pGVar3->max_length) {
        pGVar3->m_Items[2] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar4;
        Il2CppCodeGenWriteBarrier(pGVar3->m_Items + 2);
        pGVar6 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor(pGVar6,pSVar1,pGVar3,pMVar9);
        if (4 < (uint)pGVar2->max_length) {
          pGVar2->m_Items[4] = pGVar6;
          Il2CppCodeGenWriteBarrier(pGVar2->m_Items + 4);
          pGVar3 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                   SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,8);
          pSVar1 = "settings-general-fov-cutscenes-original-camera";
          if (settings == (Settings_GeneralSettings_o *)0x0) {
            pSVar7 = (Settings_FloatSetting_o *)0x0;
          }
          else {
            pSVar7 = (settings->fields).FOVMin;
          }
          pIVar4 = (Il2CppObject *)
                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_5d3eca0
                             ("settings-general-fov-min","General","FOVMin",pSVar7,
                              "FOVMinTooltip",(System_Action_GisketchActionContext__o *)0x0,
                              in_stack_ffffffffffffffb8);
          if (pGVar3 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
            il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,0,pIVar4);
            if (settings == (Settings_GeneralSettings_o *)0x0) {
              pSVar7 = (Settings_FloatSetting_o *)0x0;
              pIVar4 = (Il2CppObject *)
                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_5d3eca0
                                 ("settings-general-fov-max","General","FOVMax",
                                  (Settings_FloatSetting_o *)0x0,"FOVMaxTooltip",
                                  (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
              il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
              il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,1,pIVar4);
            }
            else {
              pIVar4 = (Il2CppObject *)
                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_5d3eca0
                                 ("settings-general-fov-max","General","FOVMax",
                                  (settings->fields).FOVMax,"FOVMaxTooltip",
                                  (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
              il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
              il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,1,pIVar4);
              pSVar7 = (settings->fields).FPSFOVMin;
            }
            pIVar4 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_5d3eca0
                               ("settings-general-fps-fov-min","General","FPSFOVMin",pSVar7,
                                "FPSFOVMinTooltip",(System_Action_GisketchActionContext__o *)0x0,
                                in_stack_ffffffffffffffb8);
            il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,2,pIVar4);
            if (settings == (Settings_GeneralSettings_o *)0x0) {
              pSVar8 = (Settings_BoolSetting_o *)0x0;
              pIVar4 = (Il2CppObject *)
                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_5d3eca0
                                 ("settings-general-fps-fov-max","General","FPSFOVMax",
                                  (Settings_FloatSetting_o *)0x0,"FPSFOVMaxTooltip",
                                  (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
              il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
              il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,3,pIVar4);
            }
            else {
              pIVar4 = (Il2CppObject *)
                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_5d3eca0
                                 ("settings-general-fps-fov-max","General","FPSFOVMax",
                                  (settings->fields).FPSFOVMax,"FPSFOVMaxTooltip",
                                  (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
              il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
              il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,3,pIVar4);
              pSVar8 = (settings->fields).SkipCutscenes;
            }
            pIVar4 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                               ("settings-general-skip-cutscenes","General","SkipCutscenes",pSVar8,
                                (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                                in_stack_ffffffffffffffb8);
            il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,4,pIVar4);
            if (settings == (Settings_GeneralSettings_o *)0x0) {
              pSVar7 = (Settings_FloatSetting_o *)0x0;
              pIVar4 = (Il2CppObject *)
                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                 ("settings-general-original-camera-wow-rotation","General","OriginalCameraWOWRotation",
                                  (Settings_BoolSetting_o *)0x0,"OriginalCameraWOWRotationTooltip",
                                  (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
              il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
              il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,5,pIVar4);
            }
            else {
              pIVar4 = (Il2CppObject *)
                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                 ("settings-general-original-camera-wow-rotation","General","OriginalCameraWOWRotation",
                                  (settings->fields).OriginalCameraWOWRotation,"OriginalCameraWOWRotationTooltip",
                                  (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
              il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
              il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,5,pIVar4);
              pSVar7 = (settings->fields).OriginalCameraDeadzone;
            }
            pMVar9 = (MethodInfo *)0x0;
            pIVar4 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_5d3eca0
                               ("settings-general-original-camera-deadzone","General","OriginalCameraDeadzone",pSVar7,
                                (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                                in_stack_ffffffffffffffb8);
            il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,6,pIVar4);
            if (settings != (Settings_GeneralSettings_o *)0x0) {
              pMVar9 = (MethodInfo *)(settings->fields).OriginalCameraSpeed;
            }
            pIVar4 = (Il2CppObject *)
                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_5d3eca0
                               ("settings-general-original-camera-speed","General","OriginalCameraSpeed",
                                (Settings_FloatSetting_o *)pMVar9,(System_String_o *)0x0,
                                (System_Action_GisketchActionContext__o *)0x0,in_stack_ffffffffffffffb8);
            il2cpp_codegen_array_element_type_check((System_Array_o *)pGVar3,pIVar4);
            il2cpp_codegen_array_set_ref((System_Array_o *)pGVar3,7,pIVar4);
            pGVar6 = il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
            Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor(pGVar6,pSVar1,pGVar3,pMVar9);
            il2cpp_runtime_helper_02fe1060(pGVar2,5,pGVar6);
            return pGVar2;
          }
          goto label_05e3e8a6;
        }
      }
    }
  }
label_05e3e892:
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGeneralCategory$$Language
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory__Language (Settings_GeneralSettings_o* settings, const MethodInfo* method);
// 0x5e3e8d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e3e9ff: jmp 0x5e3ea1a

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory__Language
          (Settings_GeneralSettings_o *settings,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *sub;
  System_String_o *item;
  Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o *__this;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor;
  System_String_array *values;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *pGVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory___c_StaticFields *pGVar2;
  System_Action_GisketchActionContext__o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *__this_01;
  MethodInfo *method_00;
  Settings_StringSetting_o *setting;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (Il2CppMethodInitialized_075485c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory_c_Language_b__3_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory_c);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Language");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-language-select");
    Il2CppMethodInitialized_075485c1 = '\x01';
  }
  method_00 = (MethodInfo *)"settings-general-language-select";
  item = "Language";
  sub = "General";
  if (settings == (Settings_GeneralSettings_o *)0x0) {
    setting = (Settings_StringSetting_o *)0x0;
  }
  else {
    setting = (settings->fields).Language;
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
  Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter___ctor(__this,setting,(MethodInfo *)0x0);
  descriptor = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                         ((System_String_o *)method_00,sub,item,1,
                          (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)__this,
                          (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                          in_stack_ffffffffffffffd0);
  values = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__SafeLanguages(method_00);
  pGVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__StringOptions(values,(MethodInfo *)0x0);
  if (descriptor == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    ThrowNullReferenceException();
  }
  (descriptor->fields).Options = pGVar1;
  Il2CppCodeGenWriteBarrier(&(descriptor->fields).Options);
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory_c->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory_c);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory_c->static_fields;
    __this_00 = pGVar2->__9__3_0;
  }
  else {
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory_c->static_fields;
    __this_00 = pGVar2->__9__3_0;
  }
  if (__this_00 == (System_Action_GisketchActionContext__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory_c);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory_c->static_fields;
    }
    object = (Il2CppObject *)pGVar2->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_00,object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory_c_Language_b__3_0,
               (MethodInfo_4A803E0 *)0x0);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory_c->static_fields;
    pGVar2->__9__3_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar2->__9__3_0);
  }
  (descriptor->fields).OnChanged = __this_00;
  Il2CppCodeGenWriteBarrier(&(descriptor->fields).OnChanged);
  if (Il2CppMethodInitialized_07548623 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Il2CppMethodInitialized_07548623 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor(__this_01,descriptor,(MethodInfo *)0x0);
  return (Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01;
}


