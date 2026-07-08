// Type: UI.SettingsGeneralPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/SettingsGeneralPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/SettingsPopup/SettingsGeneralPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.SettingsGeneralPanel.<>c__DisplayClass2_0$$.ctor
// il2cpp: void UI_SettingsGeneralPanel___c__DisplayClass2_0___ctor (UI_SettingsGeneralPanel___c__DisplayClass2_0_o* __this, const MethodInfo* method);
// 0x412e5d0

void UI_SettingsGeneralPanel_<>c__DisplayClass2_0___ctor
               (UI_SettingsGeneralPanel___c__DisplayClass2_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsGeneralPanel.<>c__DisplayClass2_0$$<Setup>b__0
// il2cpp: void UI_SettingsGeneralPanel___c__DisplayClass2_0___Setup_b__0 (UI_SettingsGeneralPanel___c__DisplayClass2_0_o* __this, const MethodInfo* method);
// 0x412e960

void UI_SettingsGeneralPanel_<>c__DisplayClass2_0__<Setup>b__0
               (UI_SettingsGeneralPanel___c__DisplayClass2_0_o *__this,MethodInfo *method)

{
  UI_SettingsPopup_o *__this_00;
  
  __this_00 = (__this->fields).settingsPopup;
  if (__this_00 != (UI_SettingsPopup_o *)0x0) {
    UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsGeneralPanel$$get_ScrollBar
// il2cpp: bool UI_SettingsGeneralPanel__get_ScrollBar (UI_SettingsGeneralPanel_o* __this, const MethodInfo* method);
// 0x412d710

bool_conflict
UI_SettingsGeneralPanel__get_ScrollBar(UI_SettingsGeneralPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SettingsGeneralPanel$$Setup
// il2cpp: void UI_SettingsGeneralPanel__Setup (UI_SettingsGeneralPanel_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x412d720

void UI_SettingsGeneralPanel__Setup
               (UI_SettingsGeneralPanel_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  System_String_o *category;
  long lVar3;
  UnityEngine_Transform_o *pUVar4;
  Settings_BaseSetting_o *pSVar5;
  Il2CppObject *__this_00;
  System_String_o *pSVar6;
  UI_ElementStyle_o *__this_01;
  System_String_array *pSVar7;
  MethodInfo *pMVar8;
  UnityEngine_Events_UnityAction_o *onDropdownOptionSelect;
  System_String_o *pSVar9;
  UI_ElementStyle_o *style;
  System_String_o *pSVar10;
  MethodInfo *in_R9;
  
  if (DAT_05704942 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsPopup);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass2_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"General");
    il2cpp_init_method_metadata(&"RequireRestart");
    il2cpp_init_method_metadata(&"CameraClipping");
    il2cpp_init_method_metadata(&"FOVMinTooltip");
    il2cpp_init_method_metadata(&"Language");
    il2cpp_init_method_metadata(&"CameraSide");
    il2cpp_init_method_metadata(&"CameraTilt");
    il2cpp_init_method_metadata(&"SnapshotsShowInGame");
    il2cpp_init_method_metadata(&"FPSFOVMinTooltip");
    il2cpp_init_method_metadata(&"SnapshotsMinimumDamage");
    il2cpp_init_method_metadata(&"TPS");
    il2cpp_init_method_metadata(&"CameraDistance");
    il2cpp_init_method_metadata(&"MinimapHeight");
    il2cpp_init_method_metadata(&"OriginalCameraSpeed");
    il2cpp_init_method_metadata(&"SnapshotsEnabled");
    il2cpp_init_method_metadata(&"InvertMouse");
    il2cpp_init_method_metadata(&"FOVMaxTooltip");
    il2cpp_init_method_metadata(&"FPSFOVMin");
    il2cpp_init_method_metadata(&"FPS");
    il2cpp_init_method_metadata(&"MinimapEnabled");
    il2cpp_init_method_metadata(&"FPSFOVMaxTooltip");
    il2cpp_init_method_metadata(&"FPSFOVMax");
    il2cpp_init_method_metadata(&"CameraClippingTooltip");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"CameraHeight");
    il2cpp_init_method_metadata(&"FOVMax");
    il2cpp_init_method_metadata(&"OriginalCameraDeadzone");
    il2cpp_init_method_metadata(&"CameraMode");
    il2cpp_init_method_metadata(&"Original");
    il2cpp_init_method_metadata(&"FOVMin");
    il2cpp_init_method_metadata(&"MouseSpeed");
    il2cpp_init_method_metadata(&"SkipCutscenes");
    DAT_05704942 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass2_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  UI_BasePanel__Setup((UI_BasePanel_o *)__this,parent,(MethodInfo *)0x0);
  pIVar2 = TypeInfo_SettingsPopup;
  if (__this_00 != (Il2CppObject *)0x0) {
    if (parent == (UI_BasePanel_o *)0x0) {
      __this_00[1].klass = (Il2CppClass *)0x0;
    }
    else {
      bVar1 = (TypeInfo_SettingsPopup->_2).naturalAligment;
      if (((parent->klass->_2).naturalAligment < bVar1) ||
         ((parent->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_SettingsPopup)) {
LAB_0412e5c3:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(parent);
      }
      __this_00[1].klass = (Il2CppClass *)parent;
      if (((parent->klass->_2).naturalAligment < bVar1) ||
         ((parent->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar2)) goto LAB_0412e5c3;
    }
    il2cpp_runtime_glue(__this_00 + 1,parent);
    pSVar10 = "General";
    pIVar2 = __this_00[1].klass;
    if (pIVar2 != (Il2CppClass *)0x0) {
      category = (System_String_o *)(pIVar2->_1).implementedInterfaces;
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
      pSVar6 = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
      __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
      UI_ElementStyle___ctor(__this_01,0x18,200.0,20.0,pSVar6,(MethodInfo *)0x0);
      if (lVar3 != 0) {
        pUVar4 = (__this->fields).DoublePanelLeft;
        pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x20);
        pMVar8 = TypeInfo_UIManager;
        if (*(int *)((long)&TypeInfo_UIManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = UI_UIManager__GetLanguages(pMVar8);
        pSVar6 = "RequireRestart";
        if (DAT_05704983 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_UIManager);
          il2cpp_init_method_metadata(&"Common");
          il2cpp_init_method_metadata(&"");
          DAT_05704983 = '\x01';
        }
        if (*(int *)((long)&TypeInfo_UIManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        pMVar8 = (MethodInfo *)
                 UI_UIManager__GetLocale
                           ("Common",pSVar6,(System_String_o *)"",
                            (System_String_o *)"",(System_String_o *)"",in_R9);
        onDropdownOptionSelect =
             (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateDropdownSetting
                  (pUVar4,__this_01,pSVar5,"Language",pSVar7,(System_String_o *)pMVar8,160.0,40.0,
                   300.0,(System_Nullable_float__o)0x0,onDropdownOptionSelect,(MethodInfo *)0x0);
        pUVar4 = (__this->fields).DoublePanelLeft;
        pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x80);
        pSVar6 = UI_UIManager__GetLocale
                           (category,pSVar10,"CameraMode",(System_String_o *)"",
                            (System_String_o *)"",pMVar8);
        pSVar7 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,3);
        if (pSVar7 != (System_String_array *)0x0) {
          if ((int)pSVar7->max_length != 0) {
            pSVar7->m_Items[0] = "TPS";
            il2cpp_runtime_glue(pSVar7->m_Items);
            if (1 < (uint)pSVar7->max_length) {
              pSVar7->m_Items[1] = "Original";
              il2cpp_runtime_glue(pSVar7->m_Items + 1);
              if (2 < (uint)pSVar7->max_length) {
                pSVar7->m_Items[2] = "FPS";
                il2cpp_runtime_glue(pSVar7->m_Items + 2);
                pMVar8 = "";
                UI_ElementFactory__CreateDropdownSetting
                          (pUVar4,__this_01,pSVar5,pSVar6,pSVar7,(System_String_o *)"",
                           200.0,40.0,300.0,(System_Nullable_float__o)0x0,
                           (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                pUVar4 = (__this->fields).DoublePanelLeft;
                pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x30);
                pSVar6 = UI_UIManager__GetLocale
                                   (category,pSVar10,"CameraDistance",(System_String_o *)"",
                                    (System_String_o *)"",pMVar8);
                pMVar8 = (MethodInfo *)0x2;
                UI_ElementFactory__CreateSliderSetting
                          (pUVar4,__this_01,pSVar5,pSVar6,(System_String_o *)"",135.0,16.0
                           ,2,(MethodInfo *)0x0);
                pUVar4 = (__this->fields).DoublePanelLeft;
                pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x38);
                pSVar6 = UI_UIManager__GetLocale
                                   (category,pSVar10,"CameraHeight",(System_String_o *)"",
                                    (System_String_o *)"",pMVar8);
                pMVar8 = (MethodInfo *)0x2;
                UI_ElementFactory__CreateSliderSetting
                          (pUVar4,__this_01,pSVar5,pSVar6,(System_String_o *)"",135.0,16.0
                           ,2,(MethodInfo *)0x0);
                pUVar4 = (__this->fields).DoublePanelLeft;
                pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x40);
                pSVar6 = UI_UIManager__GetLocale
                                   (category,pSVar10,"CameraSide",(System_String_o *)"",
                                    (System_String_o *)"",pMVar8);
                pMVar8 = (MethodInfo *)0x2;
                UI_ElementFactory__CreateSliderSetting
                          (pUVar4,__this_01,pSVar5,pSVar6,(System_String_o *)"",135.0,16.0
                           ,2,(MethodInfo *)0x0);
                pUVar4 = (__this->fields).DoublePanelLeft;
                pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x50);
                pSVar6 = UI_UIManager__GetLocale
                                   (category,pSVar10,"CameraTilt",(System_String_o *)"",
                                    (System_String_o *)"",pMVar8);
                pMVar8 = (MethodInfo *)0x0;
                UI_ElementFactory__CreateToggleSetting
                          (pUVar4,__this_01,pSVar5,pSVar6,(System_String_o *)"",30.0,30.0,
                           (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                pUVar4 = (__this->fields).DoublePanelLeft;
                pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x90);
                pSVar6 = UI_UIManager__GetLocale
                                   (category,pSVar10,"CameraClipping",(System_String_o *)"",
                                    (System_String_o *)"",pMVar8);
                pSVar9 = UI_UIManager__GetLocale
                                   (category,pSVar10,"CameraClippingTooltip",(System_String_o *)"",
                                    (System_String_o *)"",pMVar8);
                pMVar8 = (MethodInfo *)0x0;
                UI_ElementFactory__CreateToggleSetting
                          (pUVar4,__this_01,pSVar5,pSVar6,pSVar9,30.0,30.0,
                           (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                pUVar4 = (__this->fields).DoublePanelLeft;
                pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x98);
                pSVar6 = UI_UIManager__GetLocale
                                   (category,pSVar10,"FOVMin",(System_String_o *)"",
                                    (System_String_o *)"",pMVar8);
                pSVar9 = UI_UIManager__GetLocale
                                   (category,pSVar10,"FOVMinTooltip",(System_String_o *)"",
                                    (System_String_o *)"",pMVar8);
                pMVar8 = (MethodInfo *)0x0;
                UI_ElementFactory__CreateInputSetting
                          (pUVar4,__this_01,pSVar5,pSVar6,pSVar9,100.0,40.0,0,
                           (UnityEngine_Events_UnityAction_o *)0x0,
                           (UnityEngine_Events_UnityAction_o *)0x0,
                           (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                           (MethodInfo *)0x0);
                pUVar4 = (__this->fields).DoublePanelLeft;
                pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0xa0);
                pSVar6 = UI_UIManager__GetLocale
                                   (category,pSVar10,"FOVMax",(System_String_o *)"",
                                    (System_String_o *)"",pMVar8);
                pSVar9 = UI_UIManager__GetLocale
                                   (category,pSVar10,"FOVMaxTooltip",(System_String_o *)"",
                                    (System_String_o *)"",pMVar8);
                pMVar8 = (MethodInfo *)0x0;
                UI_ElementFactory__CreateInputSetting
                          (pUVar4,__this_01,pSVar5,pSVar6,pSVar9,100.0,40.0,0,
                           (UnityEngine_Events_UnityAction_o *)0x0,
                           (UnityEngine_Events_UnityAction_o *)0x0,
                           (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                           (MethodInfo *)0x0);
                pUVar4 = (__this->fields).DoublePanelLeft;
                pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0xa8);
                pSVar6 = UI_UIManager__GetLocale
                                   (category,pSVar10,"FPSFOVMin",(System_String_o *)"",
                                    (System_String_o *)"",pMVar8);
                pSVar9 = UI_UIManager__GetLocale
                                   (category,pSVar10,"FPSFOVMinTooltip",(System_String_o *)"",
                                    (System_String_o *)"",pMVar8);
                pMVar8 = (MethodInfo *)0x0;
                UI_ElementFactory__CreateInputSetting
                          (pUVar4,__this_01,pSVar5,pSVar6,pSVar9,100.0,40.0,0,
                           (UnityEngine_Events_UnityAction_o *)0x0,
                           (UnityEngine_Events_UnityAction_o *)0x0,
                           (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                           (MethodInfo *)0x0);
                pUVar4 = (__this->fields).DoublePanelLeft;
                pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0xb0);
                pSVar6 = UI_UIManager__GetLocale
                                   (category,pSVar10,"FPSFOVMax",(System_String_o *)"",
                                    (System_String_o *)"",pMVar8);
                pSVar9 = UI_UIManager__GetLocale
                                   (category,pSVar10,"FPSFOVMaxTooltip",(System_String_o *)"",
                                    (System_String_o *)"",pMVar8);
                pMVar8 = (MethodInfo *)0x0;
                UI_ElementFactory__CreateInputSetting
                          (pUVar4,__this_01,pSVar5,pSVar6,pSVar9,100.0,40.0,0,
                           (UnityEngine_Events_UnityAction_o *)0x0,
                           (UnityEngine_Events_UnityAction_o *)0x0,
                           (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                           (MethodInfo *)0x0);
                pUVar4 = (__this->fields).DoublePanelRight;
                pSVar6 = (System_String_o *)
                         (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                                   (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
                style = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
                UI_ElementStyle___ctor(style,0x18,165.0,20.0,pSVar6,(MethodInfo *)0x0);
                pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x28);
                pSVar6 = UI_UIManager__GetLocale
                                   (category,pSVar10,"MouseSpeed",(System_String_o *)"",
                                    (System_String_o *)"",pMVar8);
                pMVar8 = (MethodInfo *)0x3;
                UI_ElementFactory__CreateSliderInputSetting
                          (pUVar4,style,pSVar5,pSVar6,(System_String_o *)"",135.0,16.0,
                           70.0,40.0,3,(MethodInfo *)0x0);
                pUVar4 = (__this->fields).DoublePanelRight;
                pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x48);
                pSVar6 = UI_UIManager__GetLocale
                                   (category,pSVar10,"InvertMouse",(System_String_o *)"",
                                    (System_String_o *)"",pMVar8);
                pMVar8 = (MethodInfo *)0x0;
                UI_ElementFactory__CreateToggleSetting
                          (pUVar4,__this_01,pSVar5,pSVar6,(System_String_o *)"",30.0,30.0,
                           (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                pUVar4 = (__this->fields).DoublePanelRight;
                pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x70);
                pSVar6 = UI_UIManager__GetLocale
                                   (category,pSVar10,"MinimapEnabled",(System_String_o *)"",
                                    (System_String_o *)"",pMVar8);
                pMVar8 = (MethodInfo *)0x0;
                UI_ElementFactory__CreateToggleSetting
                          (pUVar4,__this_01,pSVar5,pSVar6,(System_String_o *)"",30.0,30.0,
                           (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                pUVar4 = (__this->fields).DoublePanelRight;
                pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x78);
                pSVar6 = UI_UIManager__GetLocale
                                   (category,pSVar10,"MinimapHeight",(System_String_o *)"",
                                    (System_String_o *)"",pMVar8);
                pMVar8 = (MethodInfo *)0x0;
                UI_ElementFactory__CreateInputSetting
                          (pUVar4,__this_01,pSVar5,pSVar6,(System_String_o *)"",100.0,40.0
                           ,0,(UnityEngine_Events_UnityAction_o *)0x0,
                           (UnityEngine_Events_UnityAction_o *)0x0,
                           (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                           (MethodInfo *)0x0);
                pUVar4 = (__this->fields).DoublePanelRight;
                pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x58);
                pSVar6 = UI_UIManager__GetLocale
                                   (category,pSVar10,"SnapshotsEnabled",(System_String_o *)"",
                                    (System_String_o *)"",pMVar8);
                pMVar8 = (MethodInfo *)0x0;
                UI_ElementFactory__CreateToggleSetting
                          (pUVar4,__this_01,pSVar5,pSVar6,(System_String_o *)"",30.0,30.0,
                           (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                pUVar4 = (__this->fields).DoublePanelRight;
                pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x60);
                pSVar6 = UI_UIManager__GetLocale
                                   (category,pSVar10,"SnapshotsShowInGame",(System_String_o *)"",
                                    (System_String_o *)"",pMVar8);
                pMVar8 = (MethodInfo *)0x0;
                UI_ElementFactory__CreateToggleSetting
                          (pUVar4,__this_01,pSVar5,pSVar6,(System_String_o *)"",30.0,30.0,
                           (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                pUVar4 = (__this->fields).DoublePanelRight;
                pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x68);
                pSVar6 = UI_UIManager__GetLocale
                                   (category,pSVar10,"SnapshotsMinimumDamage",(System_String_o *)"",
                                    (System_String_o *)"",pMVar8);
                pMVar8 = (MethodInfo *)0x0;
                UI_ElementFactory__CreateInputSetting
                          (pUVar4,__this_01,pSVar5,pSVar6,(System_String_o *)"",100.0,40.0
                           ,0,(UnityEngine_Events_UnityAction_o *)0x0,
                           (UnityEngine_Events_UnityAction_o *)0x0,
                           (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                           (MethodInfo *)0x0);
                pUVar4 = (__this->fields).DoublePanelRight;
                pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0x88);
                pSVar6 = UI_UIManager__GetLocale
                                   (category,pSVar10,"SkipCutscenes",(System_String_o *)"",
                                    (System_String_o *)"",pMVar8);
                pMVar8 = (MethodInfo *)0x0;
                UI_ElementFactory__CreateToggleSetting
                          (pUVar4,__this_01,pSVar5,pSVar6,(System_String_o *)"",30.0,30.0,
                           (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
                pUVar4 = (__this->fields).DoublePanelRight;
                pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0xb8);
                pSVar6 = UI_UIManager__GetLocale
                                   (category,pSVar10,"OriginalCameraDeadzone",(System_String_o *)"",
                                    (System_String_o *)"",pMVar8);
                pMVar8 = (MethodInfo *)0x0;
                UI_ElementFactory__CreateInputSetting
                          (pUVar4,__this_01,pSVar5,pSVar6,(System_String_o *)"",140.0,40.0
                           ,0,(UnityEngine_Events_UnityAction_o *)0x0,
                           (UnityEngine_Events_UnityAction_o *)0x0,
                           (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                           (MethodInfo *)0x0);
                pUVar4 = (__this->fields).DoublePanelRight;
                pSVar5 = *(Settings_BaseSetting_o **)(lVar3 + 0xc0);
                pSVar10 = UI_UIManager__GetLocale
                                    (category,pSVar10,"OriginalCameraSpeed",(System_String_o *)"",
                                     (System_String_o *)"",pMVar8);
                UI_ElementFactory__CreateInputSetting
                          (pUVar4,__this_01,pSVar5,pSVar10,(System_String_o *)"",140.0,
                           40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                           (UnityEngine_Events_UnityAction_o *)0x0,
                           (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsGeneralPanel$$.ctor
// il2cpp: void UI_SettingsGeneralPanel___ctor (UI_SettingsGeneralPanel_o* __this, const MethodInfo* method);
// 0x412e950

void UI_SettingsGeneralPanel___ctor(UI_SettingsGeneralPanel_o *__this,MethodInfo *method)

{
  UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
  return;
}


