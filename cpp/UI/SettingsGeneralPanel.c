// Type: UI.SettingsGeneralPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SettingsGeneralPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsGeneralPanel.cs
// --------------------------------

// UI.SettingsGeneralPanel.<>c__DisplayClass2_0$$.ctor
// il2cpp: void UI_SettingsGeneralPanel___c__DisplayClass2_0___ctor (UI_SettingsGeneralPanel___c__DisplayClass2_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_SettingsGeneralPanel___c__DisplayClass2_0___ctor(UI_SettingsGeneralPanel___c__DisplayClass2_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsGeneralPanel.<>c__DisplayClass2_0$$<Setup>b__0
// il2cpp: void UI_SettingsGeneralPanel___c__DisplayClass2_0___Setup_b__0 (UI_SettingsGeneralPanel___c__DisplayClass2_0_o* __this, const MethodInfo* method);
// 0x18229d210

void
UI_SettingsGeneralPanel___c__DisplayClass2_0___Setup_b__0(UI_SettingsGeneralPanel___c__DisplayClass2_0_o* __this, MethodInfo* method)

{
  UI_SettingsSkinsPanel_o *__this_00;
  
  __this_00 = (__this->fields).settingsPopup;
  if (__this_00 != (UI_SettingsSkinsPanel_o *)0x0) {
    UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.SettingsGeneralPanel$$get_ScrollBar
// il2cpp: bool UI_SettingsGeneralPanel__get_ScrollBar (UI_SettingsGeneralPanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_SettingsGeneralPanel__get_ScrollBar(UI_SettingsGeneralPanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.SettingsGeneralPanel$$Setup
// il2cpp: void UI_SettingsGeneralPanel__Setup (UI_SettingsGeneralPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822e1220

void UI_SettingsGeneralPanel__Setup
               (UI_SettingsGeneralPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  UI_SettingsPopup_o *pUVar2;
  System_String_o *category;
  Settings_GeneralSettings_o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  Settings_StringSetting_o *setting;
  Settings_IntSetting_o *pSVar5;
  Settings_FloatSetting_o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  UI_SettingsGeneralPanel___c__DisplayClass2_0_o *object;
  System_String_o *pSVar8;
  UI_ElementStyle_o *__this_00;
  System_String_array *pSVar9;
  UnityEngine_Events_UnityAction_o *__this_01;
  System_String_o *pSVar10;
  UI_ElementStyle_o *__this_02;
  System_String_o *pSVar11;
  
  if (Il2CppMethodInitialized_184347628 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SettingsPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_SettingsGeneralPanel_c__DisplayClass2_0_Setup_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_SettingsGeneralPanel_c__DisplayClass2_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"RequireRestart");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraClipping");
    il2cpp_codegen_initialize_runtime_metadata(&"FOVMinTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"Language");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraSide");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraTilt");
    il2cpp_codegen_initialize_runtime_metadata(&"OriginalCameraWOWRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"SnapshotsShowInGame");
    il2cpp_codegen_initialize_runtime_metadata(&"FPSFOVMinTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"SnapshotsMinimumDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"TPS");
    il2cpp_codegen_initialize_runtime_metadata(&"OriginalCameraWOWRotationTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"WOW");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"MinimapHeight");
    il2cpp_codegen_initialize_runtime_metadata(&"OriginalCameraSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"SnapshotsEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"InvertMouse");
    il2cpp_codegen_initialize_runtime_metadata(&"FOVMaxTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"FPSFOVMin");
    il2cpp_codegen_initialize_runtime_metadata(&"FPS");
    il2cpp_codegen_initialize_runtime_metadata(&"MinimapEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"FPSFOVMaxTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"FPSFOVMax");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraClippingTooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraHeight");
    il2cpp_codegen_initialize_runtime_metadata(&"FOVMax");
    il2cpp_codegen_initialize_runtime_metadata(&"OriginalCameraDeadzone");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraMode");
    il2cpp_codegen_initialize_runtime_metadata(&"Original");
    il2cpp_codegen_initialize_runtime_metadata(&"FOVMin");
    il2cpp_codegen_initialize_runtime_metadata(&"MouseSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"SkipCutscenes");
    Il2CppMethodInitialized_184347628 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_SettingsGeneralPanel_c__DisplayClass2_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  if (object != (UI_SettingsGeneralPanel___c__DisplayClass2_0_o *)0x0) {
    if (parent == (UI_BasePanel_o *)0x0) {
      (object->fields).settingsPopup = (UI_SettingsPopup_o *)0x0;
      parent = (UI_BasePanel_o *)0x0;
    }
    else {
      bVar1 = (TypeInfo_UI_SettingsPopup->_2).typeHierarchyDepth;
      if (((parent->klass->_2).typeHierarchyDepth < bVar1) ||
         ((parent->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_SettingsPopup)
         ) {
        il2cpp_codegen_raise_invalid_cast_exception(parent);
      }
      (object->fields).settingsPopup = (UI_SettingsPopup_o *)parent;
      bVar1 = (TypeInfo_UI_SettingsPopup->_2).typeHierarchyDepth;
      if (((parent->klass->_2).typeHierarchyDepth < bVar1) ||
         ((parent->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_SettingsPopup)
         ) {
        il2cpp_codegen_raise_invalid_cast_exception(parent);
      }
    }
    Il2CppCodeGenWriteBarrier(&(object->fields).settingsPopup,parent);
    pSVar11 = "General";
    pUVar2 = (object->fields).settingsPopup;
    if (pUVar2 != (UI_SettingsPopup_o *)0x0) {
      category = (pUVar2->fields).LocaleCategory;
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
      pSVar8 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
      UI_ElementStyle___ctor(__this_00,0x18,200.0,20.0,pSVar8,(MethodInfo *)0x0);
      if (pSVar3 != (Settings_GeneralSettings_o *)0x0) {
        pUVar4 = (__this->fields).DoublePanelLeft;
        setting = (pSVar3->fields).Language;
        if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
        }
        pSVar9 = UI_UIManager__GetLanguages((MethodInfo *)0x0);
        pSVar8 = UI_UIManager__GetLocaleCommon("RequireRestart",(MethodInfo *)0x0);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_UI_SettingsGeneralPanel_c__DisplayClass2_0_Setup_b__0,
                   (MethodInfo *)0x0);
        UI_ElementFactory__CreateDropdownSetting
                  (pUVar4,__this_00,(Settings_BaseSetting_o *)setting,"Language",pSVar9,pSVar8,
                   160.0,40.0,300.0,(System_Nullable_float__o)0x0,__this_01,(System_Int32_array *)0x0,
                   (MethodInfo *)0x0);
        pUVar4 = (__this->fields).DoublePanelLeft;
        pSVar5 = (pSVar3->fields).CameraMode;
        pSVar10 = UI_UIManager__GetLocale
                            (category,pSVar11,"CameraMode","",
                             "",(MethodInfo *)0x0);
        pSVar9 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
        pSVar8 = "TPS";
        if (pSVar9 != (System_String_array *)0x0) {
          if ((int)pSVar9->max_length != 0) {
            pSVar9->m_Items[0] = "TPS";
            Il2CppCodeGenWriteBarrier(pSVar9->m_Items,pSVar8);
            pSVar8 = "Original";
            if (1 < (uint)pSVar9->max_length) {
              pSVar9->m_Items[1] = "Original";
              Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 1,pSVar8);
              pSVar8 = "FPS";
              if (2 < (uint)pSVar9->max_length) {
                pSVar9->m_Items[2] = "FPS";
                Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 2,pSVar8);
                pSVar8 = "WOW";
                if (3 < (uint)pSVar9->max_length) {
                  pSVar9->m_Items[3] = "WOW";
                  Il2CppCodeGenWriteBarrier(pSVar9->m_Items + 3,pSVar8);
                  UI_ElementFactory__CreateDropdownSetting
                            (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar5,pSVar10,pSVar9,
                             "",200.0,40.0,300.0,(System_Nullable_float__o)0x0,
                             (UnityEngine_Events_UnityAction_o *)0x0,(System_Int32_array *)0x0,
                             (MethodInfo *)0x0);
                  pUVar4 = (__this->fields).DoublePanelLeft;
                  pSVar6 = (pSVar3->fields).CameraDistance;
                  pSVar8 = UI_UIManager__GetLocale
                                     (category,pSVar11,"CameraDistance","",
                                      "",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateSliderSetting
                            (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar6,pSVar8,"",
                             135.0,16.0,2,0.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields).DoublePanelLeft;
                  pSVar6 = (pSVar3->fields).CameraHeight;
                  pSVar8 = UI_UIManager__GetLocale
                                     (category,pSVar11,"CameraHeight","",
                                      "",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateSliderSetting
                            (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar6,pSVar8,"",
                             135.0,16.0,2,0.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields).DoublePanelLeft;
                  pSVar6 = (pSVar3->fields).CameraSide;
                  pSVar8 = UI_UIManager__GetLocale
                                     (category,pSVar11,"CameraSide","",
                                      "",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateSliderSetting
                            (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar6,pSVar8,"",
                             135.0,16.0,2,0.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields).DoublePanelLeft;
                  pSVar6 = (pSVar3->fields).CameraTiltStrength;
                  pSVar8 = UI_UIManager__GetLocale
                                     (category,pSVar11,"CameraTilt","",
                                      "",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateSliderSetting
                            (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar6,pSVar8,"",
                             135.0,16.0,2,0.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields).DoublePanelLeft;
                  pSVar7 = (pSVar3->fields).CameraClipping;
                  pSVar8 = UI_UIManager__GetLocale
                                     (category,pSVar11,"CameraClipping","",
                                      "",(MethodInfo *)0x0);
                  pSVar10 = UI_UIManager__GetLocale
                                      (category,pSVar11,"CameraClippingTooltip","",
                                       "",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateToggleSetting
                            (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar7,pSVar8,pSVar10,30.0,30.0,
                             (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields).DoublePanelLeft;
                  pSVar6 = (pSVar3->fields).FOVMin;
                  pSVar8 = UI_UIManager__GetLocale
                                     (category,pSVar11,"FOVMin","",
                                      "",(MethodInfo *)0x0);
                  pSVar10 = UI_UIManager__GetLocale
                                      (category,pSVar11,"FOVMinTooltip","",
                                       "",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateInputSetting
                            (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar6,pSVar8,pSVar10,100.0,40.0,false
                             ,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                             (MethodInfo *)0x0);
                  pUVar4 = (__this->fields).DoublePanelLeft;
                  pSVar6 = (pSVar3->fields).FOVMax;
                  pSVar8 = UI_UIManager__GetLocale
                                     (category,pSVar11,"FOVMax","",
                                      "",(MethodInfo *)0x0);
                  pSVar10 = UI_UIManager__GetLocale
                                      (category,pSVar11,"FOVMaxTooltip","",
                                       "",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateInputSetting
                            (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar6,pSVar8,pSVar10,100.0,40.0,false
                             ,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                             (MethodInfo *)0x0);
                  pUVar4 = (__this->fields).DoublePanelLeft;
                  pSVar6 = (pSVar3->fields).FPSFOVMin;
                  pSVar8 = UI_UIManager__GetLocale
                                     (category,pSVar11,"FPSFOVMin","",
                                      "",(MethodInfo *)0x0);
                  pSVar10 = UI_UIManager__GetLocale
                                      (category,pSVar11,"FPSFOVMinTooltip","",
                                       "",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateInputSetting
                            (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar6,pSVar8,pSVar10,100.0,40.0,false
                             ,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                             (MethodInfo *)0x0);
                  pUVar4 = (__this->fields).DoublePanelLeft;
                  pSVar6 = (pSVar3->fields).FPSFOVMax;
                  pSVar8 = UI_UIManager__GetLocale
                                     (category,pSVar11,"FPSFOVMax","",
                                      "",(MethodInfo *)0x0);
                  pSVar10 = UI_UIManager__GetLocale
                                      (category,pSVar11,"FPSFOVMaxTooltip","",
                                       "",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateInputSetting
                            (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar6,pSVar8,pSVar10,100.0,40.0,false
                             ,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                             (MethodInfo *)0x0);
                  pUVar4 = (__this->fields).DoublePanelRight;
                  pSVar8 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
                  UI_ElementStyle___ctor(__this_02,0x18,165.0,20.0,pSVar8,(MethodInfo *)0x0);
                  pSVar6 = (pSVar3->fields).MouseSpeed;
                  pSVar8 = UI_UIManager__GetLocale
                                     (category,pSVar11,"MouseSpeed","",
                                      "",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateSliderInputSetting
                            (pUVar4,__this_02,(Settings_BaseSetting_o *)pSVar6,pSVar8,"",
                             135.0,16.0,70.0,40.0,3,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields).DoublePanelRight;
                  pSVar7 = (pSVar3->fields).InvertMouse;
                  pSVar8 = UI_UIManager__GetLocale
                                     (category,pSVar11,"InvertMouse","",
                                      "",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateToggleSetting
                            (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar7,pSVar8,"",
                             30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields).DoublePanelRight;
                  pSVar7 = (pSVar3->fields).MinimapEnabled;
                  pSVar8 = UI_UIManager__GetLocale
                                     (category,pSVar11,"MinimapEnabled","",
                                      "",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateToggleSetting
                            (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar7,pSVar8,"",
                             30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields).DoublePanelRight;
                  pSVar6 = (pSVar3->fields).MinimapCameraHeight;
                  pSVar8 = UI_UIManager__GetLocale
                                     (category,pSVar11,"MinimapHeight","",
                                      "",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateInputSetting
                            (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar6,pSVar8,"",
                             100.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                             (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                             (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields).DoublePanelRight;
                  pSVar7 = (pSVar3->fields).SnapshotsEnabled;
                  pSVar8 = UI_UIManager__GetLocale
                                     (category,pSVar11,"SnapshotsEnabled","",
                                      "",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateToggleSetting
                            (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar7,pSVar8,"",
                             30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields).DoublePanelRight;
                  pSVar7 = (pSVar3->fields).SnapshotsShowInGame;
                  pSVar8 = UI_UIManager__GetLocale
                                     (category,pSVar11,"SnapshotsShowInGame","",
                                      "",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateToggleSetting
                            (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar7,pSVar8,"",
                             30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields).DoublePanelRight;
                  pSVar5 = (pSVar3->fields).SnapshotsMinimumDamage;
                  pSVar8 = UI_UIManager__GetLocale
                                     (category,pSVar11,"SnapshotsMinimumDamage","",
                                      "",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateInputSetting
                            (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar5,pSVar8,"",
                             100.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                             (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                             (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields).DoublePanelRight;
                  pSVar7 = (pSVar3->fields).SkipCutscenes;
                  pSVar8 = UI_UIManager__GetLocale
                                     (category,pSVar11,"SkipCutscenes","",
                                      "",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateToggleSetting
                            (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar7,pSVar8,"",
                             30.0,30.0,(UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields).DoublePanelRight;
                  pSVar7 = (pSVar3->fields).OriginalCameraWOWRotation;
                  pSVar8 = UI_UIManager__GetLocale
                                     (category,pSVar11,"OriginalCameraWOWRotation","",
                                      "",(MethodInfo *)0x0);
                  pSVar10 = UI_UIManager__GetLocale
                                      (category,pSVar11,"OriginalCameraWOWRotationTooltip","",
                                       "",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateToggleSetting
                            (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar7,pSVar8,pSVar10,30.0,30.0,
                             (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields).DoublePanelRight;
                  pSVar6 = (pSVar3->fields).OriginalCameraDeadzone;
                  pSVar8 = UI_UIManager__GetLocale
                                     (category,pSVar11,"OriginalCameraDeadzone","",
                                      "",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateInputSetting
                            (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar6,pSVar8,"",
                             140.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                             (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                             (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields).DoublePanelRight;
                  pSVar6 = (pSVar3->fields).OriginalCameraSpeed;
                  pSVar11 = UI_UIManager__GetLocale
                                      (category,pSVar11,"OriginalCameraSpeed","",
                                       "",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateInputSetting
                            (pUVar4,__this_00,(Settings_BaseSetting_o *)pSVar6,pSVar11,"",
                             140.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                             (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                             (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
          ThrowIndexOutOfRangeException();
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.SettingsGeneralPanel$$.ctor
// il2cpp: void UI_SettingsGeneralPanel___ctor (UI_SettingsGeneralPanel_o* __this, const MethodInfo* method);
// 0x181da8ae0

void
UI_SettingsGeneralPanel___ctor(UI_SettingsGeneralPanel_o* __this, MethodInfo* method)

{
  UI_CategoryPanel___ctor((UI_TopLeftHUD_o *)__this,(MethodInfo *)0x0);
  return;
}


