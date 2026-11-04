// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGeneralCategory
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsGeneralCategory.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGeneralCategory$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory__Build (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x182316840

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory__Build
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *context,MethodInfo *method)

{
  System_String_o *categoryId;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  Gisketch_Aottg2UI_SettingsScreen_AottgVirtualSettingsScrollCategory_o *__this;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o local_58;
  
  if (Il2CppMethodInitialized_18434777e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"general");
    Il2CppMethodInitialized_18434777e = '\x01';
  }
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory__Groups((MethodInfo *)0x0);
  categoryId = "general";
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


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGeneralCategory$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory__SyncState (Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x182318090

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory__SyncState
               (Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *groups;
  
  groups = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory__Groups((MethodInfo *)0x0);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsCategoryPage__SyncState(root,groups,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGeneralCategory$$Groups
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory__Groups (const MethodInfo* method);
// 0x182316910
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182316e2c: mov r15, rax
// asm:   0x182316ffa: mov r14, r15
// asm:   0x182317137: mov r9, r12
// asm:   0x1823171b9: mov r9, r12
// asm:   0x18231723b: mov r9, r12
// asm:   0x1823172bd: mov r9, r12
// asm:   0x182317342: mov r9, r12
// asm:   0x182317436: mov r9, r12
// asm:   0x1823174c1: mov r9, r12
// asm:   0x1823175a7: mov r9, r12
// asm:   0x182317635: mov r9, r12
// asm:   0x182317718: mov r9, r12
// asm:   0x1823177a3: mov r9, r12
// asm:   0x182317828: mov r9, r12
// asm:   0x18231790e: mov r9, r12
// asm:   0x1823179a3: mov r9, r12
// asm:   0x182317a2f: mov r9, r12
// asm:   0x182317abb: mov r9, r12
// asm:   0x182317b47: mov r9, r12
// asm:   0x182317bcc: mov r9, r12
// asm:   0x182317c58: mov r9, r12
// asm:   0x182317cdd: mov r9, r12

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory__Groups(MethodInfo *method)

{
  Settings_GeneralSettings_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *title;
  System_String_o *item;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *pGVar5;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar6;
  Settings_StringSetting_o *value;
  Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o *adapter;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor;
  System_String_array *pSVar7;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *value_00;
  System_String_o *pSVar8;
  Il2CppObject *pIVar9;
  Il2CppObject *pIVar10;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *pGVar11;
  Settings_FloatSetting_o *pSVar12;
  Settings_FloatSetting_o *setting;
  Settings_IntSetting_o *setting_00;
  
  if (Il2CppMethodInitialized_18434777f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Camera Mode / Position");
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-snapshots");
    il2cpp_codegen_initialize_runtime_metadata(&"Snapshots on");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraClipping");
    il2cpp_codegen_initialize_runtime_metadata(&"FOVMinTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"Language");
    il2cpp_codegen_initialize_runtime_metadata(&"Snapshots in-game");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-fov-cutscenes-original-camera");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse");
    il2cpp_codegen_initialize_runtime_metadata(&"Camera distance");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-invert-mouse");
    il2cpp_codegen_initialize_runtime_metadata(&"FOV max");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-camera-distance");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-snapshots-show-in-game");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraSide");
    il2cpp_codegen_initialize_runtime_metadata(&"Camera clipping");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-original-camera-wow-rotation");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraTilt");
    il2cpp_codegen_initialize_runtime_metadata(&"FOV min");
    il2cpp_codegen_initialize_runtime_metadata(&"OriginalCameraWOWRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"Minimap height");
    il2cpp_codegen_initialize_runtime_metadata(&"SnapshotsShowInGame");
    il2cpp_codegen_initialize_runtime_metadata(&"Snapshots min damage");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-snapshots-enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"FPSFOVMinTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-fps-fov-min");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-minimap-height");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-fps-fov-max");
    il2cpp_codegen_initialize_runtime_metadata(&"SnapshotsMinimumDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"TPS");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-camera-clipping");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-camera-tilt");
    il2cpp_codegen_initialize_runtime_metadata(&"OriginalCameraWOWRotationTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"Camera side");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-original-camera-speed");
    il2cpp_codegen_initialize_runtime_metadata(&"WOW");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"MinimapHeight");
    il2cpp_codegen_initialize_runtime_metadata(&"Original camera has WOW rotation");
    il2cpp_codegen_initialize_runtime_metadata(&"Skip cutscenes");
    il2cpp_codegen_initialize_runtime_metadata(&"OriginalCameraSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-camera-mode");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-minimap");
    il2cpp_codegen_initialize_runtime_metadata(&"FPS FOV min");
    il2cpp_codegen_initialize_runtime_metadata(&"SnapshotsEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"InvertMouse");
    il2cpp_codegen_initialize_runtime_metadata(&"FOVMaxTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"FPSFOVMin");
    il2cpp_codegen_initialize_runtime_metadata(&"FPS");
    il2cpp_codegen_initialize_runtime_metadata(&"Minimap");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-camera-mode-position");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-mouse-speed");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-original-camera-deadzone");
    il2cpp_codegen_initialize_runtime_metadata(&"Snapshots");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-camera-side");
    il2cpp_codegen_initialize_runtime_metadata(&"Original camera deadzone");
    il2cpp_codegen_initialize_runtime_metadata(&"FPS FOV max");
    il2cpp_codegen_initialize_runtime_metadata(&"MinimapEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-minimap-enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"FPSFOVMaxTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-skip-cutscenes");
    il2cpp_codegen_initialize_runtime_metadata(&"FPSFOVMax");
    il2cpp_codegen_initialize_runtime_metadata(&"Camera tilt");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-camera-height");
    il2cpp_codegen_initialize_runtime_metadata(&"Camera height");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse speed");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-mouse");
    il2cpp_codegen_initialize_runtime_metadata(&"Original camera speed");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraClippingTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraHeight");
    il2cpp_codegen_initialize_runtime_metadata(&"FOVMax");
    il2cpp_codegen_initialize_runtime_metadata(&"Minimap on");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-fov-min");
    il2cpp_codegen_initialize_runtime_metadata(&"FOV / Cutscenes / Original Camera");
    il2cpp_codegen_initialize_runtime_metadata(&"OriginalCameraDeadzone");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraMode");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-fov-max");
    il2cpp_codegen_initialize_runtime_metadata(&"Original");
    il2cpp_codegen_initialize_runtime_metadata(&"Camera mode");
    il2cpp_codegen_initialize_runtime_metadata(&"FOVMin");
    il2cpp_codegen_initialize_runtime_metadata(&"MouseSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"Invert mouse");
    il2cpp_codegen_initialize_runtime_metadata(&"SkipCutscenes");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-language");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-snapshots-min-damage");
    Il2CppMethodInitialized_18434777f = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  pGVar5 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array,6);
  pGVar6 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,1);
  if (Il2CppMethodInitialized_184347780 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"RequireRestart");
    il2cpp_codegen_initialize_runtime_metadata(&"Language");
    il2cpp_codegen_initialize_runtime_metadata(&"Requires game restart.");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-language-select");
    Il2CppMethodInitialized_184347780 = '\x01';
  }
  pSVar4 = "Language";
  pSVar3 = "settings-general-language-select";
  pSVar8 = "General";
  value = (Settings_StringSetting_o *)0x0;
  if (pSVar1 != (Settings_GeneralSettings_o *)0x0) {
    value = (pSVar1->fields).Language;
  }
  adapter = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)adapter,(MethodInfo *)0x0);
  (adapter->fields)._setting = value;
  Il2CppCodeGenWriteBarrier(&(adapter->fields)._setting,value);
  setting_00 = (Settings_IntSetting_o *)0x0;
  descriptor = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                         (pSVar3,pSVar8,pSVar4,pSVar4,1,
                          (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)adapter,
                          (System_String_o *)0x0,(System_String_o *)0x0,
                          (System_Action_GisketchActionContext__o *)0x0,true,(MethodInfo *)0x0);
  pSVar7 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__SafeLanguages((MethodInfo *)0x0);
  value_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__LocalizedStringOptions
                       (pSVar7,(System_String_array *)0x0,(MethodInfo *)0x0);
  if (descriptor != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    (descriptor->fields).Options = value_00;
    Il2CppCodeGenWriteBarrier(&(descriptor->fields).Options,value_00);
    (descriptor->fields).Tooltip = "Requires game restart.";
    Il2CppCodeGenWriteBarrier(&(descriptor->fields).Tooltip,"Requires game restart.");
    pSVar8 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__CommonKey
                       ("RequireRestart",(MethodInfo *)0x0);
    (descriptor->fields).TooltipKey = pSVar8;
    Il2CppCodeGenWriteBarrier(&(descriptor->fields).TooltipKey,pSVar8);
    pIVar9 = (Il2CppObject *)
             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Row(descriptor,(MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
      if ((pIVar9 != (Il2CppObject *)0x0) &&
         (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((pGVar6->obj).klass)->_1).element_class),
         pIVar10 == (Il2CppObject *)0x0)) {
        pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
      }
      if ((int)pGVar6->max_length != 0) {
        pGVar6->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
        Il2CppCodeGenWriteBarrier(pGVar6->m_Items,pIVar9);
        pGVar11 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
                  (pGVar11,"settings-general-language","Language",pGVar6,(MethodInfo *)0x0);
        if (pGVar5 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_array *)0x0) goto label_182317d99;
        if ((int)pGVar5->max_length != 0) {
          pGVar5->m_Items[0] = pGVar11;
          Il2CppCodeGenWriteBarrier(pGVar5->m_Items,pGVar11);
          pGVar6 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                   SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,6);
          item = "CameraMode";
          title = "Camera Mode / Position";
          pSVar4 = "settings-general-camera-mode-position";
          pSVar3 = "settings-general-camera-mode";
          pSVar8 = "General";
          if (pSVar1 != (Settings_GeneralSettings_o *)0x0) {
            setting_00 = (pSVar1->fields).CameraMode;
          }
          pSVar7 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
          pSVar2 = "TPS";
          if (pSVar7 == (System_String_array *)0x0) goto label_182317d99;
          if ((int)pSVar7->max_length != 0) {
            pSVar7->m_Items[0] = "TPS";
            Il2CppCodeGenWriteBarrier(pSVar7->m_Items,pSVar2);
            pSVar2 = "Original";
            if (1 < (uint)pSVar7->max_length) {
              pSVar7->m_Items[1] = "Original";
              Il2CppCodeGenWriteBarrier(pSVar7->m_Items + 1,pSVar2);
              pSVar2 = "FPS";
              if (2 < (uint)pSVar7->max_length) {
                pSVar7->m_Items[2] = "FPS";
                Il2CppCodeGenWriteBarrier(pSVar7->m_Items + 2,pSVar2);
                pSVar2 = "WOW";
                if (3 < (uint)pSVar7->max_length) {
                  pSVar7->m_Items[3] = "WOW";
                  Il2CppCodeGenWriteBarrier(pSVar7->m_Items + 3,pSVar2);
                  pIVar9 = (Il2CppObject *)
                           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Select
                                     (pSVar3,pSVar8,item,setting_00,"Camera mode",pSVar7,
                                      (System_String_o *)0x0,(System_String_o *)0x0,
                                      (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
                  if (pGVar6 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) goto label_182317d99;
                  if ((pIVar9 != (Il2CppObject *)0x0) &&
                     (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((pGVar6->obj).klass)->_1).element_class),
                     pIVar10 == (Il2CppObject *)0x0)) {
                    pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                    il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                  }
                  if ((int)pGVar6->max_length != 0) {
                    pGVar6->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                    Il2CppCodeGenWriteBarrier(pGVar6->m_Items,pIVar9);
                    setting = (Settings_FloatSetting_o *)0x0;
                    pSVar12 = setting;
                    if (pSVar1 != (Settings_GeneralSettings_o *)0x0) {
                      pSVar12 = (pSVar1->fields).CameraDistance;
                    }
                    pIVar9 = (Il2CppObject *)
                             Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                                       ("settings-general-camera-distance","General","CameraDistance",
                                        pSVar12,"Camera distance",(System_String_o *)0x0,
                                        (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0,
                                        (MethodInfo *)0x0);
                    if ((pIVar9 != (Il2CppObject *)0x0) &&
                       (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((pGVar6->obj).klass)->_1).element_class),
                       pIVar10 == (Il2CppObject *)0x0)) {
                      pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                      il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                    }
                    if (1 < (uint)pGVar6->max_length) {
                      pGVar6->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                      Il2CppCodeGenWriteBarrier(pGVar6->m_Items + 1,pIVar9);
                      pSVar12 = setting;
                      if (pSVar1 != (Settings_GeneralSettings_o *)0x0) {
                        pSVar12 = (pSVar1->fields).CameraHeight;
                      }
                      pIVar9 = (Il2CppObject *)
                               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                                         ("settings-general-camera-height","General","CameraHeight",
                                          pSVar12,"Camera height",(System_String_o *)0x0,
                                          (System_String_o *)0x0,(System_Action_GisketchActionContext__o *)0x0
                                          ,(MethodInfo *)0x0);
                      if ((pIVar9 != (Il2CppObject *)0x0) &&
                         (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((pGVar6->obj).klass)->_1).element_class),
                         pIVar10 == (Il2CppObject *)0x0)) {
                        pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                        il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                      }
                      if (2 < (uint)pGVar6->max_length) {
                        pGVar6->m_Items[2] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                        Il2CppCodeGenWriteBarrier(pGVar6->m_Items + 2,pIVar9);
                        pSVar12 = setting;
                        if (pSVar1 != (Settings_GeneralSettings_o *)0x0) {
                          pSVar12 = (pSVar1->fields).CameraSide;
                        }
                        pIVar9 = (Il2CppObject *)
                                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                                           ("settings-general-camera-side","General","CameraSide",
                                            pSVar12,"Camera side",(System_String_o *)0x0,
                                            (System_String_o *)0x0,
                                            (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0);
                        if ((pIVar9 != (Il2CppObject *)0x0) &&
                           (pIVar10 = il2cpp_vm_Object_IsInst
                                                (pIVar9,(((pGVar6->obj).klass)->_1).element_class),
                           pIVar10 == (Il2CppObject *)0x0)) {
                          pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                          il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                        }
                        if (3 < (uint)pGVar6->max_length) {
                          pGVar6->m_Items[3] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                          Il2CppCodeGenWriteBarrier(pGVar6->m_Items + 3,pIVar9);
                          pSVar12 = setting;
                          if (pSVar1 != (Settings_GeneralSettings_o *)0x0) {
                            pSVar12 = (pSVar1->fields).CameraTiltStrength;
                          }
                          pIVar9 = (Il2CppObject *)
                                   Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                                             ("settings-general-camera-tilt","General",
                                              "CameraTilt",pSVar12,"Camera tilt",
                                              (System_String_o *)0x0,(System_String_o *)0x0,
                                              (System_Action_GisketchActionContext__o *)0x0,(MethodInfo *)0x0)
                          ;
                          if ((pIVar9 != (Il2CppObject *)0x0) &&
                             (pIVar10 = il2cpp_vm_Object_IsInst
                                                  (pIVar9,(((pGVar6->obj).klass)->_1).element_class),
                             pIVar10 == (Il2CppObject *)0x0)) {
                            pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                            il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                          }
                          if (4 < (uint)pGVar6->max_length) {
                            pGVar6->m_Items[4] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                            Il2CppCodeGenWriteBarrier(pGVar6->m_Items + 4,pIVar9);
                            pSVar12 = setting;
                            if (pSVar1 != (Settings_GeneralSettings_o *)0x0) {
                              pSVar12 = (Settings_FloatSetting_o *)(pSVar1->fields).CameraClipping;
                            }
                            pIVar9 = (Il2CppObject *)
                                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                               ("settings-general-camera-clipping","General",
                                                "CameraClipping",(Settings_BoolSetting_o *)pSVar12,
                                                "Camera clipping","CameraClippingTooltip",
                                                (System_String_o *)0x0,
                                                (System_Action_GisketchActionContext__o *)0x0,
                                                (MethodInfo *)0x0);
                            if ((pIVar9 != (Il2CppObject *)0x0) &&
                               (pIVar10 = il2cpp_vm_Object_IsInst
                                                    (pIVar9,(((pGVar6->obj).klass)->_1).element_class),
                               pIVar10 == (Il2CppObject *)0x0)) {
                              pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                              il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                            }
                            if (5 < (uint)pGVar6->max_length) {
                              pGVar6->m_Items[5] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                              Il2CppCodeGenWriteBarrier(pGVar6->m_Items + 5,pIVar9);
                              pGVar11 = il2cpp_codegen_object_new
                                                  ((Il2CppClass *)
                                                   TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup
                                                  );
                              Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
                                        (pGVar11,pSVar4,title,pGVar6,(MethodInfo *)0x0);
                              if (1 < (uint)pGVar5->max_length) {
                                pGVar5->m_Items[1] = pGVar11;
                                Il2CppCodeGenWriteBarrier(pGVar5->m_Items + 1,pGVar11);
                                pGVar6 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                                         SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,2);
                                pSVar3 = "settings-general-mouse";
                                pSVar8 = "Mouse";
                                pSVar12 = setting;
                                if (pSVar1 != (Settings_GeneralSettings_o *)0x0) {
                                  pSVar12 = (pSVar1->fields).MouseSpeed;
                                }
                                pIVar9 = (Il2CppObject *)
                                         Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Slider
                                                   ("settings-general-mouse-speed","General",
                                                    "MouseSpeed",pSVar12,"Mouse speed",
                                                    (System_String_o *)0x0,(System_String_o *)0x0,
                                                    (System_Action_GisketchActionContext__o *)0x0,
                                                    (MethodInfo *)0x0);
                                if (pGVar6 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0)
                                goto label_182317d99;
                                if ((pIVar9 != (Il2CppObject *)0x0) &&
                                   (pIVar10 = il2cpp_vm_Object_IsInst
                                                        (pIVar9,(((pGVar6->obj).klass)->_1).element_class),
                                   pIVar10 == (Il2CppObject *)0x0)) {
                                  pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                                  il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                                }
                                if ((int)pGVar6->max_length != 0) {
                                  pGVar6->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                                  Il2CppCodeGenWriteBarrier(pGVar6->m_Items,pIVar9);
                                  pSVar12 = setting;
                                  if (pSVar1 != (Settings_GeneralSettings_o *)0x0) {
                                    pSVar12 = (Settings_FloatSetting_o *)(pSVar1->fields).InvertMouse;
                                  }
                                  pIVar9 = (Il2CppObject *)
                                           Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                     ("settings-general-invert-mouse","General",
                                                      "InvertMouse",(Settings_BoolSetting_o *)pSVar12,
                                                      "Invert mouse",(System_String_o *)0x0,
                                                      (System_String_o *)0x0,
                                                      (System_Action_GisketchActionContext__o *)0x0,
                                                      (MethodInfo *)0x0);
                                  if ((pIVar9 != (Il2CppObject *)0x0) &&
                                     (pIVar10 = il2cpp_vm_Object_IsInst
                                                          (pIVar9,(((pGVar6->obj).klass)->_1).element_class),
                                     pIVar10 == (Il2CppObject *)0x0)) {
                                    pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                                    il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                                  }
                                  if (1 < (uint)pGVar6->max_length) {
                                    pGVar6->m_Items[1] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                                    Il2CppCodeGenWriteBarrier(pGVar6->m_Items + 1,pIVar9);
                                    pGVar11 = il2cpp_codegen_object_new
                                                        ((Il2CppClass *)
                                                                                                                  
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup
                                                       );
                                    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
                                              (pGVar11,pSVar3,pSVar8,pGVar6,(MethodInfo *)0x0);
                                    if (2 < (uint)pGVar5->max_length) {
                                      pGVar5->m_Items[2] = pGVar11;
                                      Il2CppCodeGenWriteBarrier(pGVar5->m_Items + 2,pGVar11);
                                      pGVar6 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                                               SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array
                                                          ,2);
                                      pSVar3 = "settings-general-minimap";
                                      pSVar8 = "Minimap";
                                      pSVar12 = setting;
                                      if (pSVar1 != (Settings_GeneralSettings_o *)0x0) {
                                        pSVar12 = (Settings_FloatSetting_o *)(pSVar1->fields).MinimapEnabled;
                                      }
                                      pIVar9 = (Il2CppObject *)
                                               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                         ("settings-general-minimap-enabled","General",
                                                          "MinimapEnabled",
                                                          (Settings_BoolSetting_o *)pSVar12,
                                                          "Minimap on",(System_String_o *)0x0,
                                                          (System_String_o *)0x0,
                                                          (System_Action_GisketchActionContext__o *)0x0,
                                                          (MethodInfo *)0x0);
                                      if (pGVar6 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0)
                                      goto label_182317d99;
                                      if ((pIVar9 != (Il2CppObject *)0x0) &&
                                         (pIVar10 = il2cpp_vm_Object_IsInst
                                                              (pIVar9,(((pGVar6->obj).klass)->_1).
                                                                      element_class),
                                         pIVar10 == (Il2CppObject *)0x0)) {
                                        pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                                        il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                                      }
                                      if ((int)pGVar6->max_length != 0) {
                                        pGVar6->m_Items[0] = (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9
                                        ;
                                        Il2CppCodeGenWriteBarrier(pGVar6->m_Items,pIVar9);
                                        pSVar12 = setting;
                                        if (pSVar1 != (Settings_GeneralSettings_o *)0x0) {
                                          pSVar12 = (pSVar1->fields).MinimapCameraHeight;
                                        }
                                        pIVar9 = (Il2CppObject *)
                                                 Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_2391b80
                                                           ("settings-general-minimap-height","General",
                                                            "MinimapHeight",pSVar12,
                                                            "Minimap height",(System_String_o *)0x0,
                                                            (System_String_o *)0x0,
                                                            (System_Action_GisketchActionContext__o *)0x0,
                                                            (MethodInfo *)0x0);
                                        if ((pIVar9 != (Il2CppObject *)0x0) &&
                                           (pIVar10 = il2cpp_vm_Object_IsInst
                                                                (pIVar9,(((pGVar6->obj).klass)->_1).
                                                                        element_class),
                                           pIVar10 == (Il2CppObject *)0x0)) {
                                          pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                                          il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                                        }
                                        if (1 < (uint)pGVar6->max_length) {
                                          pGVar6->m_Items[1] =
                                               (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                                          Il2CppCodeGenWriteBarrier(pGVar6->m_Items + 1,pIVar9);
                                          pGVar11 = il2cpp_codegen_object_new
                                                              ((Il2CppClass *)
                                                                                                                              
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup
                                                       );
                                          Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
                                                    (pGVar11,pSVar3,pSVar8,pGVar6,(MethodInfo *)0x0);
                                          if (3 < (uint)pGVar5->max_length) {
                                            pGVar5->m_Items[3] = pGVar11;
                                            Il2CppCodeGenWriteBarrier(pGVar5->m_Items + 3,pGVar11);
                                            pGVar6 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                                                     SZArrayNew(
                                                       TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,3)
                                            ;
                                            pSVar3 = "settings-general-snapshots";
                                            pSVar8 = "Snapshots";
                                            pSVar12 = setting;
                                            if (pSVar1 != (Settings_GeneralSettings_o *)0x0) {
                                              pSVar12 = (Settings_FloatSetting_o *)
                                                        (pSVar1->fields).SnapshotsEnabled;
                                            }
                                            pIVar9 = (Il2CppObject *)
                                                     Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                               ("settings-general-snapshots-enabled","General",
                                                                "SnapshotsEnabled",
                                                                (Settings_BoolSetting_o *)pSVar12,
                                                                "Snapshots on",(System_String_o *)0x0,
                                                                (System_String_o *)0x0,
                                                                (System_Action_GisketchActionContext__o *)0x0,
                                                                (MethodInfo *)0x0);
                                            if (pGVar6 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0)
                                            goto label_182317d99;
                                            if ((pIVar9 != (Il2CppObject *)0x0) &&
                                               (pIVar10 = il2cpp_vm_Object_IsInst
                                                                    (pIVar9,(((pGVar6->obj).klass)->_1).
                                                                            element_class),
                                               pIVar10 == (Il2CppObject *)0x0)) {
                                              pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                                              il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                                            }
                                            if ((int)pGVar6->max_length != 0) {
                                              pGVar6->m_Items[0] =
                                                   (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                                              Il2CppCodeGenWriteBarrier(pGVar6->m_Items,pIVar9);
                                              pSVar12 = setting;
                                              if (pSVar1 != (Settings_GeneralSettings_o *)0x0) {
                                                pSVar12 = (Settings_FloatSetting_o *)
                                                          (pSVar1->fields).SnapshotsShowInGame;
                                              }
                                              pIVar9 = (Il2CppObject *)
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                                 ("settings-general-snapshots-show-in-game","General",
                                                                  "SnapshotsShowInGame",
                                                                  (Settings_BoolSetting_o *)pSVar12,
                                                                  "Snapshots in-game",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                              if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                 (pIVar10 = il2cpp_vm_Object_IsInst
                                                                      (pIVar9,(((pGVar6->obj).klass)->_1).
                                                                              element_class),
                                                 pIVar10 == (Il2CppObject *)0x0)) {
                                                pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                                                il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                                              }
                                              if (1 < (uint)pGVar6->max_length) {
                                                pGVar6->m_Items[1] =
                                                     (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                                                Il2CppCodeGenWriteBarrier(pGVar6->m_Items + 1,pIVar9);
                                                pSVar12 = setting;
                                                if (pSVar1 != (Settings_GeneralSettings_o *)0x0) {
                                                  pSVar12 = (Settings_FloatSetting_o *)
                                                            (pSVar1->fields).SnapshotsMinimumDamage;
                                                }
                                                pIVar9 = (Il2CppObject *)
                                                                                                                  
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input
                                                                 ("settings-general-snapshots-min-damage","General",
                                                                  "SnapshotsMinimumDamage",
                                                                  (Settings_IntSetting_o *)pSVar12,
                                                                  "Snapshots min damage",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                   (pIVar10 = il2cpp_vm_Object_IsInst
                                                                        (pIVar9,(((pGVar6->obj).klass)->_1).
                                                                                element_class),
                                                   pIVar10 == (Il2CppObject *)0x0)) {
                                                  pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                                                  il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
                                                }
                                                if (2 < (uint)pGVar6->max_length) {
                                                  pGVar6->m_Items[2] =
                                                       (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                                                  Il2CppCodeGenWriteBarrier(pGVar6->m_Items + 2,pIVar9);
                                                  pGVar11 = il2cpp_codegen_object_new
                                                                      ((Il2CppClass *)
                                                                                                                                              
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup
                                                       );
                                                  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
                                                            (pGVar11,pSVar3,pSVar8,pGVar6,(MethodInfo *)0x0);
                                                  if (4 < (uint)pGVar5->max_length) {
                                                    pGVar5->m_Items[4] = pGVar11;
                                                    Il2CppCodeGenWriteBarrier(pGVar5->m_Items + 4,pGVar11);
                                                    pGVar6 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
                                                             SZArrayNew(
                                                       TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,8)
                                                    ;
                                                    pSVar3 = "FOV / Cutscenes / Original Camera";
                                                    pSVar8 = "settings-general-fov-cutscenes-original-camera";
                                                    pSVar12 = setting;
                                                    if (pSVar1 != (Settings_GeneralSettings_o *)0x0) {
                                                      pSVar12 = (pSVar1->fields).FOVMin;
                                                    }
                                                    pIVar9 = (Il2CppObject *)
                                                                                                                          
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_2391b80
                                                                 ("settings-general-fov-min","General",
                                                                  "FOVMin",pSVar12,
                                                                  "FOV min","FOVMinTooltip",
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                    if (pGVar6 == (Gisketch_Aottg2UI_Code_AottgComponent_array
                                                                   *)0x0) goto label_182317d99;
                                                    if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                       (pIVar10 = il2cpp_vm_Object_IsInst
                                                                            (pIVar9,(((pGVar6->obj).klass)->_1
                                                                                    ).element_class),
                                                       pIVar10 == (Il2CppObject *)0x0)) {
                                                      pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                      il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0)
                                                      ;
                                                    }
                                                    if ((int)pGVar6->max_length != 0) {
                                                      pGVar6->m_Items[0] =
                                                           (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9;
                                                      Il2CppCodeGenWriteBarrier(pGVar6->m_Items,pIVar9);
                                                      pSVar12 = setting;
                                                      if (pSVar1 != (Settings_GeneralSettings_o *)0x0) {
                                                        pSVar12 = (pSVar1->fields).FOVMax;
                                                      }
                                                      pIVar9 = (Il2CppObject *)
                                                                                                                              
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_2391b80
                                                                 ("settings-general-fov-max","General",
                                                                  "FOVMax",pSVar12,
                                                                  "FOV max","FOVMaxTooltip",
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                      if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                         (pIVar10 = il2cpp_vm_Object_IsInst
                                                                              (pIVar9,(((pGVar6->obj).klass)->
                                                                                      _1).element_class),
                                                         pIVar10 == (Il2CppObject *)0x0)) {
                                                        pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                      }
                                                      if (1 < (uint)pGVar6->max_length) {
                                                        pGVar6->m_Items[1] =
                                                             (Gisketch_Aottg2UI_Code_AottgComponent_o *)pIVar9
                                                        ;
                                                        Il2CppCodeGenWriteBarrier(pGVar6->m_Items + 1,pIVar9);
                                                        pSVar12 = setting;
                                                        if (pSVar1 != (Settings_GeneralSettings_o *)0x0) {
                                                          pSVar12 = (pSVar1->fields).FPSFOVMin;
                                                        }
                                                        pIVar9 = (Il2CppObject *)
                                                                                                                                  
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_2391b80
                                                                 ("settings-general-fps-fov-min","General",
                                                                  "FPSFOVMin",pSVar12,
                                                                  "FPS FOV min","FPSFOVMinTooltip",
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar6->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (2 < (uint)pGVar6->max_length) {
                                                         pGVar6->m_Items[2] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar6->m_Items + 2,pIVar9)
                                                         ;
                                                         pSVar12 = setting;
                                                         if (pSVar1 != (Settings_GeneralSettings_o *)0x0) {
                                                           pSVar12 = (pSVar1->fields).FPSFOVMax;
                                                         }
                                                         pIVar9 = (Il2CppObject *)
                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_2391b80
                                                                 ("settings-general-fps-fov-max","General",
                                                                  "FPSFOVMax",pSVar12,
                                                                  "FPS FOV max","FPSFOVMaxTooltip",
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar6->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (3 < (uint)pGVar6->max_length) {
                                                         pGVar6->m_Items[3] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar6->m_Items + 3,pIVar9)
                                                         ;
                                                         pSVar12 = setting;
                                                         if (pSVar1 != (Settings_GeneralSettings_o *)0x0) {
                                                           pSVar12 = (Settings_FloatSetting_o *)
                                                                     (pSVar1->fields).SkipCutscenes;
                                                         }
                                                         pIVar9 = (Il2CppObject *)
                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                                 ("settings-general-skip-cutscenes","General",
                                                                  "SkipCutscenes",
                                                                  (Settings_BoolSetting_o *)pSVar12,
                                                                  "Skip cutscenes",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar6->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (4 < (uint)pGVar6->max_length) {
                                                         pGVar6->m_Items[4] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar6->m_Items + 4,pIVar9)
                                                         ;
                                                         pSVar12 = setting;
                                                         if (pSVar1 != (Settings_GeneralSettings_o *)0x0) {
                                                           pSVar12 = (Settings_FloatSetting_o *)
                                                                     (pSVar1->fields).
                                                                     OriginalCameraWOWRotation;
                                                         }
                                                         pIVar9 = (Il2CppObject *)
                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Switch
                                                                 ("settings-general-original-camera-wow-rotation","General",
                                                                  "OriginalCameraWOWRotation",
                                                                  (Settings_BoolSetting_o *)pSVar12,
                                                                  "Original camera has WOW rotation","OriginalCameraWOWRotationTooltip",
                                                                  (System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar6->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (5 < (uint)pGVar6->max_length) {
                                                         pGVar6->m_Items[5] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar6->m_Items + 5,pIVar9)
                                                         ;
                                                         pSVar12 = setting;
                                                         if (pSVar1 != (Settings_GeneralSettings_o *)0x0) {
                                                           pSVar12 = (pSVar1->fields).OriginalCameraDeadzone;
                                                         }
                                                         pIVar9 = (Il2CppObject *)
                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_2391b80
                                                                 ("settings-general-original-camera-deadzone","General",
                                                                  "OriginalCameraDeadzone",pSVar12,
                                                                  "Original camera deadzone",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar6->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (6 < (uint)pGVar6->max_length) {
                                                         pGVar6->m_Items[6] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar6->m_Items + 6,pIVar9)
                                                         ;
                                                         if (pSVar1 != (Settings_GeneralSettings_o *)0x0) {
                                                           setting = (pSVar1->fields).OriginalCameraSpeed;
                                                         }
                                                         pIVar9 = (Il2CppObject *)
                                                                                                                                    
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Input_2391b80
                                                                 ("settings-general-original-camera-speed","General",
                                                                  "OriginalCameraSpeed",setting,
                                                                  "Original camera speed",(System_String_o *)0x0
                                                                  ,(System_String_o *)0x0,
                                                                  (System_Action_GisketchActionContext__o *)
                                                                  0x0,(MethodInfo *)0x0);
                                                       if ((pIVar9 != (Il2CppObject *)0x0) &&
                                                          (pIVar10 = il2cpp_vm_Object_IsInst
                                                                               (pIVar9,(((pGVar6->obj).klass)
                                                                                       ->_1).element_class),
                                                          pIVar10 == (Il2CppObject *)0x0)) {
                                                         pIVar9 = 
                                                       il2cpp_codegen_get_array_type_mismatch_exception();
                                                       il2cpp_codegen_raise_exception
                                                                 (pIVar9,(MethodInfo *)0x0);
                                                       }
                                                       if (7 < (uint)pGVar6->max_length) {
                                                         pGVar6->m_Items[7] =
                                                              (Gisketch_Aottg2UI_Code_AottgComponent_o *)
                                                              pIVar9;
                                                         Il2CppCodeGenWriteBarrier(pGVar6->m_Items + 7,pIVar9)
                                                         ;
                                                         pGVar11 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                                                                                                            
                                                       TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup
                                                       );
                                                       Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_231b9f0
                                                                 (pGVar11,pSVar8,pSVar3,pGVar6,
                                                                  (MethodInfo *)0x0);
                                                       if (5 < (uint)pGVar5->max_length) {
                                                         pGVar5->m_Items[5] = pGVar11;
                                                         Il2CppCodeGenWriteBarrier
                                                                   (pGVar5->m_Items + 5,pGVar11);
                                                         return pGVar5;
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
label_182317d99:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGeneralCategory$$Language
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory__Language (Settings_GeneralSettings_o* settings, const MethodInfo* method);
// 0x182317f10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182317fa0: mov rsi, r12

Gisketch_Aottg2UI_Code_AottgComponent_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGeneralCategory__Language
          (Settings_GeneralSettings_o *settings,MethodInfo *method)

{
  System_String_o *id;
  System_String_o *item;
  Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter_o *adapter;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *descriptor;
  System_String_array *values;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption_array *value;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Code_AottgComponent_o *pGVar2;
  Settings_StringSetting_o *value_00;
  
  if (Il2CppMethodInitialized_184347780 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"RequireRestart");
    il2cpp_codegen_initialize_runtime_metadata(&"Language");
    il2cpp_codegen_initialize_runtime_metadata(&"Requires game restart.");
    il2cpp_codegen_initialize_runtime_metadata(&"settings-general-language-select");
    Il2CppMethodInitialized_184347780 = '\x01';
  }
  item = "Language";
  id = "settings-general-language-select";
  pSVar1 = "General";
  value_00 = (Settings_StringSetting_o *)0x0;
  if (settings != (Settings_GeneralSettings_o *)0x0) {
    value_00 = (settings->fields).Language;
  }
  adapter = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgStringSettingAdapter);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)adapter,(MethodInfo *)0x0);
  (adapter->fields)._setting = value_00;
  Il2CppCodeGenWriteBarrier(&(adapter->fields)._setting,value_00);
  descriptor = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Descriptor
                         (id,pSVar1,item,item,1,
                          (Gisketch_Aottg2UI_SettingsScreen_IAottgSettingAdapter_o *)adapter,
                          (System_String_o *)0x0,(System_String_o *)0x0,
                          (System_Action_GisketchActionContext__o *)0x0,true,(MethodInfo *)0x0);
  values = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__SafeLanguages((MethodInfo *)0x0);
  value = Gisketch_Aottg2UI_SettingsScreen_AottgSettingOption__LocalizedStringOptions
                    (values,(System_String_array *)0x0,(MethodInfo *)0x0);
  if (descriptor == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *)0x0) {
    ThrowNullReferenceException();
  }
  (descriptor->fields).Options = value;
  Il2CppCodeGenWriteBarrier(&(descriptor->fields).Options,value);
  (descriptor->fields).Tooltip = "Requires game restart.";
  Il2CppCodeGenWriteBarrier(&(descriptor->fields).Tooltip,"Requires game restart.");
  pSVar1 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__CommonKey
                     ("RequireRestart",(MethodInfo *)0x0);
  (descriptor->fields).TooltipKey = pSVar1;
  Il2CppCodeGenWriteBarrier(&(descriptor->fields).TooltipKey,pSVar1);
  pGVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRows__Row(descriptor,(MethodInfo *)0x0);
  return pGVar2;
}


