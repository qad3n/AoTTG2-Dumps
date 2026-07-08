// Type: UI.GlobalSkinEditPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/GlobalSkinEditPopup.cs
// Prior source: NEW in this update
// --------------------------------

// UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$.ctor
// il2cpp: void UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27___ctor (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x405e510

void UI_GlobalSkinEditPopup_<LoadSkinAndRestoreSettings>d__27___ctor
               (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$System.IDisposable.Dispose
// il2cpp: void UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__System_IDisposable_Dispose (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o* __this, const MethodInfo* method);
// 0x405f2e0

void UI_GlobalSkinEditPopup_<LoadSkinAndRestoreSettings>d__27__System_IDisposable_Dispose
               (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *__this,
               MethodInfo *method)

{
  return;
}


// UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$MoveNext
// il2cpp: bool UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__MoveNext (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o* __this, const MethodInfo* method);
// 0x405f2f0

bool_conflict
UI_GlobalSkinEditPopup_<LoadSkinAndRestoreSettings>d__27__MoveNext
          (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_DummyHuman_o *__this_00;
  long lVar2;
  Settings_TypedSetting_bool__o *pSVar3;
  UnityEngine_WaitForSeconds_o *pUVar4;
  undefined8 uVar5;
  
  if (DAT_05704471 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_05704471 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
       (pSVar3 = *(Settings_TypedSetting_bool__o **)(lVar2 + 0x60),
       pSVar3 != (Settings_TypedSetting_bool__o *)0x0)) {
      Settings_TypedSetting<bool>__set_Value
                (pSVar3,(uint)(byte)(__this->fields).originalGlobal,MethodInfo_Void_set_Value);
      lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
         (pSVar3 = *(Settings_TypedSetting_bool__o **)(lVar2 + 0x58),
         pSVar3 != (Settings_TypedSetting_bool__o *)0x0)) {
        Settings_TypedSetting<bool>__set_Value
                  (pSVar3,(uint)*(byte *)((long)&(__this->fields).originalGlobal + 1),MethodInfo_Void_set_Value);
        return 0;
      }
    }
LAB_0405f466:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    __this_00 = (__this->fields).character;
    if (__this_00 == (Characters_DummyHuman_o *)0x0) goto LAB_0405f466;
    Characters_DummyHuman__LoadSkin(__this_00,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(pUVar4,0.1,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)pUVar4;
    uVar5 = il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar4);
    (__this->fields).__1__state = 2;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    pUVar4 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(pUVar4,0.1,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)pUVar4;
    uVar5 = il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar4);
    (__this->fields).__1__state = 1;
  }
  return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
}


// UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o* __this, const MethodInfo* method);
// 0x405f470

Il2CppObject *
UI_GlobalSkinEditPopup_<LoadSkinAndRestoreSettings>d__27__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__System_Collections_IEnumerator_Reset (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o* __this, const MethodInfo* method);
// 0x405f480

void UI_GlobalSkinEditPopup_<LoadSkinAndRestoreSettings>d__27__System_Collections_IEnumerator_Reset
               (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__System_Collections_IEnumerator_get_Current (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o* __this, const MethodInfo* method);
// 0x405f4c0

Il2CppObject *
UI_GlobalSkinEditPopup_<LoadSkinAndRestoreSettings>d__27__System_Collections_IEnumerator_get_Current
          (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.GlobalSkinEditPopup$$get_Title
// il2cpp: System_String_o* UI_GlobalSkinEditPopup__get_Title (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x405c260

System_String_o *
UI_GlobalSkinEditPopup__get_Title(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  long lVar1;
  Settings_SetSettingsContainer_T__o *__this_00;
  Settings_StringSetting_o *pSVar2;
  System_String_o *pSVar3;
  Settings_BaseSetSetting_o *pSVar4;
  
  if (DAT_05704464 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"SettingsPopup");
    il2cpp_init_method_metadata(&": ");
    il2cpp_init_method_metadata(&"EditGlobal");
    il2cpp_init_method_metadata(&"Skins.Human");
    il2cpp_init_method_metadata(&"");
    DAT_05704464 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = UI_UIManager__GetLocale
                     ("SettingsPopup","Skins.Human","EditGlobal","","",
                      (MethodInfo *)0x0);
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  if ((lVar1 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar1 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    pSVar4 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (pSVar4 == (Settings_BaseSetSetting_o *)0x0) {
      pSVar3 = System_String__Concat(pSVar3,": ",(System_String_o *)0x0,(MethodInfo *)0x0);
      return pSVar3;
    }
    pSVar2 = (pSVar4->fields).Name;
    if (pSVar2 != (Settings_StringSetting_o *)0x0) {
      pSVar3 = System_String__Concat(pSVar3,": ",(pSVar2->fields)._value,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.GlobalSkinEditPopup$$get_Width
// il2cpp: float UI_GlobalSkinEditPopup__get_Width (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x405c3a0

float UI_GlobalSkinEditPopup__get_Width(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  return 1100.0;
}


// UI.GlobalSkinEditPopup$$get_Height
// il2cpp: float UI_GlobalSkinEditPopup__get_Height (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x405c3b0

float UI_GlobalSkinEditPopup__get_Height(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  return 700.0;
}


// UI.GlobalSkinEditPopup$$get_VerticalSpacing
// il2cpp: float UI_GlobalSkinEditPopup__get_VerticalSpacing (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x405c3c0

float UI_GlobalSkinEditPopup__get_VerticalSpacing
                (UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  return 15.0;
}


// UI.GlobalSkinEditPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_GlobalSkinEditPopup__get_HorizontalPadding (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x405c3d0

int32_t UI_GlobalSkinEditPopup__get_HorizontalPadding
                  (UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.GlobalSkinEditPopup$$get_VerticalPadding
// il2cpp: int32_t UI_GlobalSkinEditPopup__get_VerticalPadding (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x405c3e0

int32_t UI_GlobalSkinEditPopup__get_VerticalPadding
                  (UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.GlobalSkinEditPopup$$get_DoublePanel
// il2cpp: bool UI_GlobalSkinEditPopup__get_DoublePanel (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x405c3f0

bool_conflict
UI_GlobalSkinEditPopup__get_DoublePanel(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.GlobalSkinEditPopup$$get_ScrollBar
// il2cpp: bool UI_GlobalSkinEditPopup__get_ScrollBar (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x405c400

bool_conflict
UI_GlobalSkinEditPopup__get_ScrollBar(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.GlobalSkinEditPopup$$Setup
// il2cpp: void UI_GlobalSkinEditPopup__Setup (UI_GlobalSkinEditPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x405c410

void UI_GlobalSkinEditPopup__Setup
               (UI_GlobalSkinEditPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Settings_HumanCustomSkinSet_o **ppSVar1;
  byte bVar2;
  long lVar3;
  Settings_SetSettingsContainer_T__o *__this_00;
  UnityEngine_Transform_o *pUVar4;
  Settings_StringSetting_o *pSVar5;
  Settings_FloatSetting_o *pSVar6;
  int32_t fontSize;
  System_String_o *pSVar7;
  UI_ElementStyle_o *__this_01;
  UI_ElementStyle_o *__this_02;
  Settings_HumanCustomSkinSet_o *pSVar8;
  UnityEngine_Events_UnityAction_o *pUVar9;
  
  if (DAT_05704465 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__20_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__20_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__20_2);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSkinSet);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"SettingsPopup");
    il2cpp_init_method_metadata(&"WeaponTrail");
    il2cpp_init_method_metadata(&"Clear");
    il2cpp_init_method_metadata(&"Horse");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"Logo");
    il2cpp_init_method_metadata(&"Costume");
    il2cpp_init_method_metadata(&"Hoodie");
    il2cpp_init_method_metadata(&"GearR");
    il2cpp_init_method_metadata(&"Skins.Human");
    il2cpp_init_method_metadata(&"HookR");
    il2cpp_init_method_metadata(&"Gas");
    il2cpp_init_method_metadata(&"Face");
    il2cpp_init_method_metadata(&"Head");
    il2cpp_init_method_metadata(&"Glass");
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"HookL");
    il2cpp_init_method_metadata(&"HookRTiling");
    il2cpp_init_method_metadata(&"HookLTiling");
    il2cpp_init_method_metadata(&"ThunderspearL");
    il2cpp_init_method_metadata(&"Apply");
    il2cpp_init_method_metadata(&"Eye");
    il2cpp_init_method_metadata(&"ThunderspearR");
    il2cpp_init_method_metadata(&"GearL");
    il2cpp_init_method_metadata(&"Hair");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Skin");
    il2cpp_init_method_metadata(&"Hat");
    DAT_05704465 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar7 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,200.0,20.0,pSVar7,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar7 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_02 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_02,fontSize,120.0,20.0,pSVar7,(MethodInfo *)0x0);
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  if ((lVar3 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    pSVar8 = (Settings_HumanCustomSkinSet_o *)
             Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (pSVar8 != (Settings_HumanCustomSkinSet_o *)0x0) {
      bVar2 = (TypeInfo_HumanCustomSkinSet->_2).naturalAligment;
      if (((((Settings_BaseSetSetting_c *)pSVar8->klass)->_2).naturalAligment < bVar2) ||
         ((((Settings_BaseSetSetting_c *)pSVar8->klass)->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          TypeInfo_HumanCustomSkinSet)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar8);
      }
    }
    ppSVar1 = &(__this->fields)._currentGlobalSet;
    (__this->fields)._currentGlobalSet = pSVar8;
    il2cpp_runtime_glue(ppSVar1,pSVar8);
    pSVar8 = (__this->fields)._currentGlobalSet;
    if (pSVar8 != (Settings_HumanCustomSkinSet_o *)0x0) {
      pUVar4 = (__this->fields).DoublePanelLeft;
      pSVar5 = (pSVar8->fields).Hair;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar7 = UI_UIManager__GetLocale
                         ("SettingsPopup","Skins.Human","Hair","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar4,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar7,"",300.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 (MethodInfo *)0x0);
      pSVar8 = *ppSVar1;
      if (pSVar8 != (Settings_HumanCustomSkinSet_o *)0x0) {
        pUVar4 = (__this->fields).DoublePanelLeft;
        pSVar5 = (pSVar8->fields).Eye;
        pSVar7 = UI_UIManager__GetLocale
                           ("SettingsPopup","Skins.Human","Eye","","",
                            (MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar4,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar7,"",300.0,40.0,
                   0,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0
                   ,(System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                   (MethodInfo *)0x0);
        pSVar8 = (__this->fields)._currentGlobalSet;
        if (pSVar8 != (Settings_HumanCustomSkinSet_o *)0x0) {
          pUVar4 = (__this->fields).DoublePanelLeft;
          pSVar5 = (pSVar8->fields).Glass;
          pSVar7 = UI_UIManager__GetLocale
                             ("SettingsPopup","Skins.Human","Glass","","",
                              (MethodInfo *)0x0);
          UI_ElementFactory__CreateInputSetting
                    (pUVar4,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar7,"",300.0,
                     40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                     (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                     (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
          pSVar8 = (__this->fields)._currentGlobalSet;
          if (pSVar8 != (Settings_HumanCustomSkinSet_o *)0x0) {
            pUVar4 = (__this->fields).DoublePanelLeft;
            pSVar5 = (pSVar8->fields).Face;
            pSVar7 = UI_UIManager__GetLocale
                               ("SettingsPopup","Skins.Human","Face","","",
                                (MethodInfo *)0x0);
            UI_ElementFactory__CreateInputSetting
                      (pUVar4,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar7,"",300.0,
                       40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                       (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                       (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
            pSVar8 = (__this->fields)._currentGlobalSet;
            if (pSVar8 != (Settings_HumanCustomSkinSet_o *)0x0) {
              pUVar4 = (__this->fields).DoublePanelLeft;
              pSVar5 = (pSVar8->fields).Skin;
              pSVar7 = UI_UIManager__GetLocale
                                 ("SettingsPopup","Skins.Human","Skin","","",
                                  (MethodInfo *)0x0);
              UI_ElementFactory__CreateInputSetting
                        (pUVar4,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar7,"",300.0
                         ,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                         (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                         (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
              pSVar8 = (__this->fields)._currentGlobalSet;
              if (pSVar8 != (Settings_HumanCustomSkinSet_o *)0x0) {
                pUVar4 = (__this->fields).DoublePanelLeft;
                pSVar5 = (pSVar8->fields).Costume;
                pSVar7 = UI_UIManager__GetLocale
                                   ("SettingsPopup","Skins.Human","Costume","",""
                                    ,(MethodInfo *)0x0);
                UI_ElementFactory__CreateInputSetting
                          (pUVar4,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar7,"",
                           300.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                           (UnityEngine_Events_UnityAction_o *)0x0,
                           (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                           (MethodInfo *)0x0);
                pSVar8 = (__this->fields)._currentGlobalSet;
                if (pSVar8 != (Settings_HumanCustomSkinSet_o *)0x0) {
                  pUVar4 = (__this->fields).DoublePanelLeft;
                  pSVar5 = (pSVar8->fields).Logo;
                  pSVar7 = UI_UIManager__GetLocale
                                     ("SettingsPopup","Skins.Human","Logo","",
                                      "",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateInputSetting
                            (pUVar4,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar7,"",
                             300.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                             (UnityEngine_Events_UnityAction_o *)0x0,
                             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0
                             ,(MethodInfo *)0x0);
                  pSVar8 = (__this->fields)._currentGlobalSet;
                  if (pSVar8 != (Settings_HumanCustomSkinSet_o *)0x0) {
                    pUVar4 = (__this->fields).DoublePanelLeft;
                    pSVar5 = (pSVar8->fields).GearL;
                    pSVar7 = UI_UIManager__GetLocale
                                       ("SettingsPopup","Skins.Human","GearL","",
                                        "",(MethodInfo *)0x0);
                    UI_ElementFactory__CreateInputSetting
                              (pUVar4,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar7,""
                               ,300.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                               (UnityEngine_Events_UnityAction_o *)0x0,
                               (System_Func_string__bool__o *)0x0,
                               (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                    pSVar8 = (__this->fields)._currentGlobalSet;
                    if (pSVar8 != (Settings_HumanCustomSkinSet_o *)0x0) {
                      pUVar4 = (__this->fields).DoublePanelLeft;
                      pSVar5 = (pSVar8->fields).GearR;
                      pSVar7 = UI_UIManager__GetLocale
                                         ("SettingsPopup","Skins.Human","GearR","",
                                          "",(MethodInfo *)0x0);
                      UI_ElementFactory__CreateInputSetting
                                (pUVar4,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar7,
                                 "",300.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                 (System_Func_string__bool__o *)0x0,
                                 (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                      pSVar8 = (__this->fields)._currentGlobalSet;
                      if (pSVar8 != (Settings_HumanCustomSkinSet_o *)0x0) {
                        pUVar4 = (__this->fields).DoublePanelLeft;
                        pSVar5 = (pSVar8->fields).Gas;
                        pSVar7 = UI_UIManager__GetLocale
                                           ("SettingsPopup","Skins.Human","Gas","",
                                            "",(MethodInfo *)0x0);
                        UI_ElementFactory__CreateInputSetting
                                  (pUVar4,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar7,
                                   "",300.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0
                                   ,(UnityEngine_Events_UnityAction_o *)0x0,
                                   (System_Func_string__bool__o *)0x0,
                                   (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                        pSVar8 = (__this->fields)._currentGlobalSet;
                        if (pSVar8 != (Settings_HumanCustomSkinSet_o *)0x0) {
                          pUVar4 = (__this->fields).DoublePanelLeft;
                          pSVar5 = (pSVar8->fields).Hoodie;
                          pSVar7 = UI_UIManager__GetLocale
                                             ("SettingsPopup","Skins.Human","Hoodie","",
                                              "",(MethodInfo *)0x0);
                          UI_ElementFactory__CreateInputSetting
                                    (pUVar4,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar7,
                                     "",300.0,40.0,0,
                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                     (System_Func_string__bool__o *)0x0,
                                     (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                          pSVar8 = (__this->fields)._currentGlobalSet;
                          if (pSVar8 != (Settings_HumanCustomSkinSet_o *)0x0) {
                            pUVar4 = (__this->fields).DoublePanelRight;
                            pSVar5 = (pSVar8->fields).WeaponTrail;
                            pSVar7 = UI_UIManager__GetLocale
                                               ("SettingsPopup","Skins.Human","WeaponTrail","",
                                                "",(MethodInfo *)0x0);
                            UI_ElementFactory__CreateInputSetting
                                      (pUVar4,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar7,
                                       "",300.0,40.0,0,
                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                       (System_Func_string__bool__o *)0x0,
                                       (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                            pSVar8 = (__this->fields)._currentGlobalSet;
                            if (pSVar8 != (Settings_HumanCustomSkinSet_o *)0x0) {
                              pUVar4 = (__this->fields).DoublePanelRight;
                              pSVar5 = (pSVar8->fields).Horse;
                              pSVar7 = UI_UIManager__GetLocale
                                                 ("SettingsPopup","Skins.Human","Horse",
                                                  "","",(MethodInfo *)0x0);
                              UI_ElementFactory__CreateInputSetting
                                        (pUVar4,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar7,
                                         "",300.0,40.0,0,
                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                         (System_Func_string__bool__o *)0x0,
                                         (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                              pSVar8 = (__this->fields)._currentGlobalSet;
                              if (pSVar8 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                pUVar4 = (__this->fields).DoublePanelRight;
                                pSVar5 = (pSVar8->fields).ThunderspearL;
                                pSVar7 = UI_UIManager__GetLocale
                                                   ("SettingsPopup","Skins.Human","ThunderspearL",
                                                    "","",(MethodInfo *)0x0);
                                UI_ElementFactory__CreateInputSetting
                                          (pUVar4,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar7,
                                           "",300.0,40.0,0,
                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                           (System_Func_string__bool__o *)0x0,
                                           (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                pSVar8 = (__this->fields)._currentGlobalSet;
                                if (pSVar8 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                  pUVar4 = (__this->fields).DoublePanelRight;
                                  pSVar5 = (pSVar8->fields).ThunderspearR;
                                  pSVar7 = UI_UIManager__GetLocale
                                                     ("SettingsPopup","Skins.Human","ThunderspearR",
                                                      "","",(MethodInfo *)0x0);
                                  UI_ElementFactory__CreateInputSetting
                                            (pUVar4,__this_01,(Settings_BaseSetting_o *)pSVar5,
                                             pSVar7,"",300.0,40.0,0,
                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                             (System_Func_string__bool__o *)0x0,
                                             (System_Func_string__string__o *)0x0,(MethodInfo *)0x0)
                                  ;
                                  pSVar8 = (__this->fields)._currentGlobalSet;
                                  if (pSVar8 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                    pUVar4 = (__this->fields).DoublePanelRight;
                                    pSVar5 = (pSVar8->fields).HookL;
                                    pSVar7 = UI_UIManager__GetLocale
                                                       ("SettingsPopup","Skins.Human","HookL",
                                                        "","",(MethodInfo *)0x0)
                                    ;
                                    UI_ElementFactory__CreateInputSetting
                                              (pUVar4,__this_01,(Settings_BaseSetting_o *)pSVar5,
                                               pSVar7,"",300.0,40.0,0,
                                               (UnityEngine_Events_UnityAction_o *)0x0,
                                               (UnityEngine_Events_UnityAction_o *)0x0,
                                               (System_Func_string__bool__o *)0x0,
                                               (System_Func_string__string__o *)0x0,
                                               (MethodInfo *)0x0);
                                    pSVar8 = (__this->fields)._currentGlobalSet;
                                    if (pSVar8 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                      pUVar4 = (__this->fields).DoublePanelRight;
                                      pSVar6 = (pSVar8->fields).HookLTiling;
                                      pSVar7 = UI_UIManager__GetLocale
                                                         ("SettingsPopup","Skins.Human","HookLTiling",
                                                          "","",
                                                          (MethodInfo *)0x0);
                                      UI_ElementFactory__CreateInputSetting
                                                (pUVar4,__this_01,(Settings_BaseSetting_o *)pSVar6,
                                                 pSVar7,"",300.0,40.0,0,
                                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                                 (System_Func_string__bool__o *)0x0,
                                                 (System_Func_string__string__o *)0x0,
                                                 (MethodInfo *)0x0);
                                      pSVar8 = (__this->fields)._currentGlobalSet;
                                      if (pSVar8 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                        pUVar4 = (__this->fields).DoublePanelRight;
                                        pSVar5 = (pSVar8->fields).HookR;
                                        pSVar7 = UI_UIManager__GetLocale
                                                           ("SettingsPopup","Skins.Human","HookR",
                                                            "","",
                                                            (MethodInfo *)0x0);
                                        UI_ElementFactory__CreateInputSetting
                                                  (pUVar4,__this_01,(Settings_BaseSetting_o *)pSVar5
                                                   ,pSVar7,"",300.0,40.0,0,
                                                   (UnityEngine_Events_UnityAction_o *)0x0,
                                                   (UnityEngine_Events_UnityAction_o *)0x0,
                                                   (System_Func_string__bool__o *)0x0,
                                                   (System_Func_string__string__o *)0x0,
                                                   (MethodInfo *)0x0);
                                        pSVar8 = (__this->fields)._currentGlobalSet;
                                        if (pSVar8 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                          pUVar4 = (__this->fields).DoublePanelRight;
                                          pSVar6 = (pSVar8->fields).HookRTiling;
                                          pSVar7 = UI_UIManager__GetLocale
                                                             ("SettingsPopup","Skins.Human","HookRTiling"
                                                              ,"","",
                                                              (MethodInfo *)0x0);
                                          UI_ElementFactory__CreateInputSetting
                                                    (pUVar4,__this_01,
                                                     (Settings_BaseSetting_o *)pSVar6,pSVar7,
                                                     "",300.0,40.0,0,
                                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                                     (System_Func_string__bool__o *)0x0,
                                                     (System_Func_string__string__o *)0x0,
                                                     (MethodInfo *)0x0);
                                          pSVar8 = (__this->fields)._currentGlobalSet;
                                          if (pSVar8 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                            pUVar4 = (__this->fields).DoublePanelRight;
                                            pSVar5 = (pSVar8->fields).Hat;
                                            pSVar7 = UI_UIManager__GetLocale
                                                               ("SettingsPopup","Skins.Human",
                                                                "Hat","",
                                                                "",(MethodInfo *)0x0);
                                            UI_ElementFactory__CreateInputSetting
                                                      (pUVar4,__this_01,
                                                       (Settings_BaseSetting_o *)pSVar5,pSVar7,
                                                       "",300.0,40.0,0,
                                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                                       (System_Func_string__bool__o *)0x0,
                                                       (System_Func_string__string__o *)0x0,
                                                       (MethodInfo *)0x0);
                                            pSVar8 = (__this->fields)._currentGlobalSet;
                                            if (pSVar8 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                              pUVar4 = (__this->fields).DoublePanelRight;
                                              pSVar5 = (pSVar8->fields).Head;
                                              pSVar7 = UI_UIManager__GetLocale
                                                                 ("SettingsPopup","Skins.Human",
                                                                  "Head","",
                                                                  "",(MethodInfo *)0x0);
                                              UI_ElementFactory__CreateInputSetting
                                                        (pUVar4,__this_01,
                                                         (Settings_BaseSetting_o *)pSVar5,pSVar7,
                                                         "",300.0,40.0,0,
                                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                                         (System_Func_string__bool__o *)0x0,
                                                         (System_Func_string__string__o *)0x0,
                                                         (MethodInfo *)0x0);
                                              pSVar8 = (__this->fields)._currentGlobalSet;
                                              if (pSVar8 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                                pUVar4 = (__this->fields).DoublePanelRight;
                                                pSVar5 = (pSVar8->fields).Back;
                                                pSVar7 = UI_UIManager__GetLocale
                                                                   ("SettingsPopup","Skins.Human",
                                                                    "Back","",
                                                                    "",(MethodInfo *)0x0);
                                                UI_ElementFactory__CreateInputSetting
                                                          (pUVar4,__this_01,
                                                           (Settings_BaseSetting_o *)pSVar5,pSVar7,
                                                           "",300.0,40.0,0,
                                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                                           (System_Func_string__bool__o *)0x0,
                                                           (System_Func_string__string__o *)0x0,
                                                           (MethodInfo *)0x0);
                                                pUVar4 = (__this->fields).BottomBar;
                                                pSVar7 = UI_UIManager__GetLocaleCommon
                                                                   ("Clear",(MethodInfo *)0x0);
                                                pUVar9 = (UnityEngine_Events_UnityAction_o *)
                                                         il2cpp_runtime_glue(TypeInfo_UnityAction);
                                                UnityEngine_Events_UnityAction___ctor();
                                                UI_ElementFactory__CreateTextButton
                                                          (pUVar4,__this_02,pSVar7,0.0,pUVar9,
                                                           (MethodInfo *)0x0);
                                                pUVar4 = (__this->fields).BottomBar;
                                                pSVar7 = UI_UIManager__GetLocaleCommon
                                                                   ("Apply",(MethodInfo *)0x0);
                                                pUVar9 = (UnityEngine_Events_UnityAction_o *)
                                                         il2cpp_runtime_glue(TypeInfo_UnityAction);
                                                UnityEngine_Events_UnityAction___ctor();
                                                UI_ElementFactory__CreateTextButton
                                                          (pUVar4,__this_02,pSVar7,0.0,pUVar9,
                                                           (MethodInfo *)0x0);
                                                pUVar4 = (__this->fields).BottomBar;
                                                pSVar7 = UI_UIManager__GetLocaleCommon
                                                                   ("Cancel",(MethodInfo *)0x0);
                                                pUVar9 = (UnityEngine_Events_UnityAction_o *)
                                                         il2cpp_runtime_glue(TypeInfo_UnityAction);
                                                UnityEngine_Events_UnityAction___ctor();
                                                UI_ElementFactory__CreateTextButton
                                                          (pUVar4,__this_02,pSVar7,0.0,pUVar9,
                                                           (MethodInfo *)0x0);
                                                return;
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.GlobalSkinEditPopup$$OnButtonClick
// il2cpp: void UI_GlobalSkinEditPopup__OnButtonClick (UI_GlobalSkinEditPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x405d320

void UI_GlobalSkinEditPopup__OnButtonClick
               (UI_GlobalSkinEditPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  Il2CppClass *pIVar4;
  UnityEngine_Object_c *pUVar5;
  long lVar6;
  Settings_TypedSetting_bool__o *pSVar7;
  Characters_HumanSetup_o *__this_01;
  Settings_HumanCustomSkinSet_o *pSVar8;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  bool_conflict bVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  UnityEngine_MonoBehaviour_o *pUVar13;
  Il2CppObject *pIVar14;
  System_String_o *a;
  System_Object_array *pSVar15;
  long *plVar16;
  MethodInfo *pMVar17;
  UnityEngine_MonoBehaviour_o *__this_04;
  Il2CppClass *x;
  undefined1 auVar18 [16];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar19;
  Il2CppRGCTXData *pIVar20;
  _union_229680 _Var21;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar22;
  undefined1 local_58 [16];
  _union_229680 local_48;
  Il2CppObject *pIStack_40;
  undefined8 local_38;
  undefined4 extraout_var;
  
  if (DAT_05704466 == '\0') {
    il2cpp_init_method_metadata(&"Clear");
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"Save");
    DAT_05704466 = '\x01';
  }
  uVar12._0_4_ = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  uVar12._4_4_ = extraout_var;
  if ((char)(bool_conflict)uVar12 == '\0') {
    pMVar17 = "Cancel";
    bVar9 = System_String__op_Equality(name,(System_String_o *)"Cancel",(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      if ((char)(__this->fields)._hasBackup != '\0') {
        UI_GlobalSkinEditPopup__RestoreBackup(__this,pMVar17);
      }
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
      return;
    }
    pMVar17 = "Clear";
    bVar9 = System_String__op_Equality(name,(System_String_o *)"Clear",(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      return;
    }
    if (DAT_05704469 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_InputSettingElement___GetComponentsInChildren_In);
      il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
      il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
      il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
      il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_Settings_BaseSettin);
      il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
      il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Value);
      il2cpp_init_method_metadata(&"UniqueId");
      il2cpp_init_method_metadata(&"Name");
      il2cpp_init_method_metadata(&"Preset");
      DAT_05704469 = '\x01';
    }
    if ((char)(__this->fields)._hasBackup == '\0') {
      UI_GlobalSkinEditPopup__CreateBackup(__this,pMVar17);
    }
    pSVar8 = (__this->fields)._currentGlobalSet;
    if ((pSVar8 != (Settings_HumanCustomSkinSet_o *)0x0) &&
       (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (pSVar8->fields).TypedSettings,
       pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      System_Collections_Generic_Dictionary<object__object>__GetEnumerator
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_58,pSVar3
                 ,MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
      pSVar19 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_58._0_8_;
      pIVar20 = (Il2CppRGCTXData *)local_58._8_8_;
      _Var21 = local_48;
      pIVar14 = pIStack_40;
      pSVar22 = local_38;
      while (__this_02.fields._8_8_ = pIVar20, __this_02.fields._dictionary = pSVar19,
            __this_02.fields._current.fields.key = _Var21.genericMethod,
            __this_02.fields._current.fields.value = pIVar14, __this_02.fields._32_8_ = pSVar22,
            bVar9 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                              (__this_02,(MethodInfo_31CFE90 *)&stack0xffffffffffffff78),
            (char)bVar9 != '\0') {
        auVar18 = il2cpp_glue_032bf890(&stack0xffffffffffffff78,MethodInfo_KeyValuePair_2_System_String_Settings_BaseSettin);
        plVar16 = auVar18._8_8_;
        a = auVar18._0_8_;
        bVar9 = System_String__op_Equality(a,"Name",(MethodInfo *)0x0);
        if ((((char)bVar9 == '\0') &&
            (bVar9 = System_String__op_Equality(a,"Preset",(MethodInfo *)0x0),
            (char)bVar9 == '\0')) &&
           (bVar9 = System_String__op_Equality(a,"UniqueId",(MethodInfo *)0x0),
           (char)bVar9 == '\0')) {
          if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          (**(code **)(*plVar16 + 0x178))(plVar16,*(undefined8 *)(*plVar16 + 0x180));
        }
      }
      __this_03.fields._8_8_ = pIVar20;
      __this_03.fields._dictionary = pSVar19;
      __this_03.fields._current.fields.key = _Var21.genericMethod;
      __this_03.fields._current.fields.value = pIVar14;
      __this_03.fields._32_8_ = pSVar22;
      System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
                (__this_03,(MethodInfo_31CFFB0 *)&stack0xffffffffffffff78);
      pSVar15 = UnityEngine_Component__GetComponentsInChildren<object>
                          ((UnityEngine_Component_o *)__this,MethodInfo_InputSettingElement___GetComponentsInChildren_In);
      if (pSVar15 != (System_Object_array *)0x0) {
        uVar10 = (uint)pSVar15->max_length;
        if (0 < (int)uVar10) {
          uVar11 = 0;
          do {
            if (uVar10 <= uVar11) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pIVar14 = pSVar15->m_Items[(int)uVar11];
            if (pIVar14 == (Il2CppObject *)0x0) goto LAB_0405da5a;
            (*pIVar14->klass->vtable[6].methodPtr)(pIVar14,pIVar14->klass->vtable[6].method);
            uVar11 = uVar11 + 1;
            uVar10 = (uint)pSVar15->max_length;
          } while ((int)uVar11 < (int)uVar10);
        }
        return;
      }
    }
LAB_0405da5a:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  local_38 = (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *)uVar12;
  if (DAT_0570446a == '\0') {
    pIStack_40 = (Il2CppObject *)0x405d427;
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    pIStack_40 = (Il2CppObject *)0x405d433;
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorHumanMenu);
    pIStack_40 = (Il2CppObject *)0x405d43f;
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    pIStack_40 = (Il2CppObject *)0x405d44b;
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    pIStack_40 = (Il2CppObject *)0x405d457;
    il2cpp_init_method_metadata(&TypeInfo_DummyHuman);
    pIStack_40 = (Il2CppObject *)0x405d463;
    il2cpp_init_method_metadata(&TypeInfo_Object);
    pIStack_40 = (Il2CppObject *)0x405d46f;
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    pIStack_40 = (Il2CppObject *)0x405d47b;
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    pIStack_40 = (Il2CppObject *)0x405d487;
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    pIStack_40 = (Il2CppObject *)0x405d493;
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    pIStack_40 = (Il2CppObject *)0x405d49f;
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_0570446a = '\x01';
  }
  if ((__this->fields)._currentGlobalSet == (Settings_HumanCustomSkinSet_o *)0x0) {
    return;
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._backupValues
  ;
  if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0405d81d;
  pIStack_40 = (Il2CppObject *)0x405d4cf;
  System_Collections_Generic_Dictionary<object__object>__Clear(pSVar3,MethodInfo_Void_Clear);
  __this_00 = (__this->fields)._backupFloatValues;
  if (__this_00 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto LAB_0405d81d;
  pIStack_40 = (Il2CppObject *)0x405d4ee;
  System_Collections_Generic_Dictionary<object__float>__Clear
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,MethodInfo_Void_Clear);
  *(undefined1 *)&(__this->fields)._hasBackup = 0;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    pIStack_40 = (Il2CppObject *)0x405d52f;
    il2cpp_init_class();
    pUVar13 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar13 != (UnityEngine_MonoBehaviour_o *)0x0) goto LAB_0405d543;
LAB_0405d563:
    __this_04 = (UnityEngine_MonoBehaviour_o *)0x0;
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar13 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar13 == (UnityEngine_MonoBehaviour_o *)0x0) goto LAB_0405d563;
LAB_0405d543:
    bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
    if ((pUVar13->klass->_2).naturalAligment < bVar1) goto LAB_0405d563;
    __this_04 = (UnityEngine_MonoBehaviour_o *)0x0;
    if ((pUVar13->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu) {
      __this_04 = pUVar13;
    }
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar2 == 0) {
    pIStack_40 = (Il2CppObject *)0x405d57f;
    il2cpp_init_class();
  }
  pIStack_40 = (Il2CppObject *)0x405d58b;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar9 == '\0') goto LAB_0405d7a0;
  plVar16 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar16 == (long *)0x0) goto LAB_0405d81d;
  if ((*(byte *)(*plVar16 + 0x130) < *(byte *)(TypeInfo_CharacterEditorGameManager + 0x130)) ||
     (*(long *)(*(long *)(*plVar16 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CharacterEditorGameManager + 0x130) * 8) !=
      TypeInfo_CharacterEditorGameManager)) {
                    /* WARNING: Subroutine does not return */
    pIStack_40 = (Il2CppObject *)&UNK_0405d827;
    il2cpp_unwind_resume();
  }
  pIVar4 = (Il2CppClass *)plVar16[7];
  if (pIVar4 == (Il2CppClass *)0x0) {
LAB_0405d60c:
    x = (Il2CppClass *)0x0;
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar5 = (pIVar4->_1).image;
    bVar1 = (TypeInfo_DummyHuman->_2).naturalAligment;
    if ((pUVar5->_2).naturalAligment < bVar1) goto LAB_0405d60c;
    x = (Il2CppClass *)0x0;
    if ((pUVar5->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_DummyHuman) {
      x = pIVar4;
    }
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar2 == 0) {
    pIStack_40 = (Il2CppObject *)0x405d621;
    il2cpp_init_class();
  }
  pIStack_40 = (Il2CppObject *)0x405d62d;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    pIStack_40 = (Il2CppObject *)0x405d63c;
    uVar10 = UI_CharacterEditorCostumePanel__GetPersistentGlobalPreview((MethodInfo *)0x0);
    pIStack_40 = (Il2CppObject *)0x405d646;
    uVar11 = UI_CharacterEditorCostumePanel__GetPersistentCustomPreview((MethodInfo *)0x0);
    lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x20), lVar6 != 0)) &&
       ((pSVar7 = *(Settings_TypedSetting_bool__o **)(lVar6 + 0x60),
        pSVar7 != (Settings_TypedSetting_bool__o *)0x0 && (*(long *)(lVar6 + 0x58) != 0)))) {
      local_38._6_1_ = *(undefined1 *)(*(long *)(lVar6 + 0x58) + 0x11);
      local_38._7_1_ = *(undefined1 *)((long)&(pSVar7->fields).DefaultValue + 1);
      pIStack_40 = (Il2CppObject *)0x405d6af;
      Settings_TypedSetting<bool>__set_Value(pSVar7,uVar10 & 0xff,MethodInfo_Void_set_Value);
      lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if (((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x20), lVar6 != 0)) &&
         (pSVar7 = *(Settings_TypedSetting_bool__o **)(lVar6 + 0x58),
         pSVar7 != (Settings_TypedSetting_bool__o *)0x0)) {
        pIStack_40 = (Il2CppObject *)0x405d6f4;
        Settings_TypedSetting<bool>__set_Value(pSVar7,uVar11 & 0xff,MethodInfo_Void_set_Value);
        if ((x != (Il2CppClass *)0x0) &&
           (__this_01 = *(Characters_HumanSetup_o **)&(x->_1).this_arg.bits,
           __this_01 != (Characters_HumanSetup_o *)0x0)) {
          pIStack_40 = (Il2CppObject *)0x405d721;
          Characters_HumanSetup__Load
                    (__this_01,(__this_01->fields).CustomSet,(__this_01->fields).Weapon,0,
                     (MethodInfo *)0x0);
          if (DAT_0570446b == '\0') {
            pIStack_40 = (Il2CppObject *)0x405d736;
            il2cpp_init_method_metadata(&TypeInfo_LoadSkinAndRestoreSettings_d__27);
            DAT_0570446b = '\x01';
          }
          pIStack_40 = (Il2CppObject *)0x405d74c;
          pIVar14 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkinAndRestoreSettings_d__27);
          pIStack_40 = (Il2CppObject *)0x405d759;
          System_Object___ctor(pIVar14,(MethodInfo *)0x0);
          *(undefined4 *)&pIVar14[1].klass = 0;
          if (pIVar14 != (Il2CppObject *)0x0) {
            pIVar14[2].klass = x;
            pIStack_40 = (Il2CppObject *)0x405d77c;
            il2cpp_runtime_glue(pIVar14 + 2,x);
            *(undefined1 *)&pIVar14[2].monitor = local_38._7_1_;
            *(undefined1 *)((long)&pIVar14[2].monitor + 1) = local_38._6_1_;
            if (__this_04 != (UnityEngine_MonoBehaviour_o *)0x0) {
              pIStack_40 = (Il2CppObject *)0x405d7a0;
              UnityEngine_MonoBehaviour__StartCoroutine
                        (__this_04,(System_Collections_IEnumerator_o *)pIVar14,(MethodInfo *)0x0);
              goto LAB_0405d7a0;
            }
          }
        }
      }
    }
LAB_0405d81d:
                    /* WARNING: Subroutine does not return */
    pIStack_40 = (Il2CppObject *)0x405d822;
    il2cpp_raise_exception();
  }
LAB_0405d7a0:
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.GlobalSkinEditPopup$$CreateBackup
// il2cpp: void UI_GlobalSkinEditPopup__CreateBackup (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x405db20

void UI_GlobalSkinEditPopup__CreateBackup(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_string__float__o *pSVar3;
  Settings_HumanCustomSkinSet_o *pSVar4;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  bool_conflict bVar5;
  int32_t iVar6;
  System_String_o *a;
  Settings_BaseSetting_o *setting;
  undefined1 auVar7 [16];
  undefined8 in_stack_ffffffffffffff68;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar8;
  Il2CppRGCTXData *pIVar9;
  _union_229680 _Var10;
  undefined1 local_58 [16];
  _union_229680 local_48;
  
  if (DAT_05704467 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_Settings_BaseSettin);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&"UniqueId");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"Preset");
    DAT_05704467 = '\x01';
  }
  if (((__this->fields)._currentGlobalSet == (Settings_HumanCustomSkinSet_o *)0x0) ||
     ((char)(__this->fields)._hasBackup != '\0')) {
    return;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._backupValues
  ;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Clear(pSVar2,MethodInfo_Void_Clear);
    pSVar3 = (__this->fields)._backupFloatValues;
    if (pSVar3 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      System_Collections_Generic_Dictionary<object__float>__Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,MethodInfo_Void_Clear);
      pSVar4 = (__this->fields)._currentGlobalSet;
      if ((pSVar4 != (Settings_HumanCustomSkinSet_o *)0x0) &&
         (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (pSVar4->fields).TypedSettings,
         pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        System_Collections_Generic_Dictionary<object__object>__GetEnumerator
                  ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_58,
                   pSVar2,MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
        pSVar8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_58._0_8_;
        pIVar9 = (Il2CppRGCTXData *)local_58._8_8_;
        _Var10 = local_48;
        while( true ) {
          do {
            while( true ) {
              do {
                __this_00.fields._8_8_ = __this;
                __this_00.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                     in_stack_ffffffffffffff68;
                __this_00.fields._current.fields.key = (Il2CppObject *)pSVar8;
                __this_00.fields._current.fields.value = (Il2CppObject *)pIVar9;
                __this_00.fields._32_8_ = _Var10.genericMethod;
                bVar5 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                                  (__this_00,(MethodInfo_31CFE90 *)&stack0xffffffffffffff78);
                if ((char)bVar5 == '\0') {
                  __this_01.fields._8_8_ = __this;
                  __this_01.fields._dictionary =
                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       in_stack_ffffffffffffff68;
                  __this_01.fields._current.fields.key = (Il2CppObject *)pSVar8;
                  __this_01.fields._current.fields.value = (Il2CppObject *)pIVar9;
                  __this_01.fields._32_8_ = _Var10.genericMethod;
                  System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
                            (__this_01,(MethodInfo_31CFFB0 *)&stack0xffffffffffffff78);
                  *(undefined1 *)&(__this->fields)._hasBackup = 1;
                  return;
                }
                auVar7 = il2cpp_glue_032bf890((MethodInfo_31CFE90 *)&stack0xffffffffffffff78,MethodInfo_KeyValuePair_2_System_String_Settings_BaseSettin);
                setting = auVar7._8_8_;
                a = auVar7._0_8_;
                bVar5 = System_String__op_Equality(a,"Name",(MethodInfo *)0x0);
              } while ((((char)bVar5 != '\0') ||
                       (bVar5 = System_String__op_Equality(a,"Preset",(MethodInfo *)0x0),
                       (char)bVar5 != '\0')) ||
                      (bVar5 = System_String__op_Equality(a,"UniqueId",(MethodInfo *)0x0),
                      (char)bVar5 != '\0'));
              iVar6 = Settings_SettingsUtil__GetSettingType(setting,(MethodInfo *)0x0);
              if (iVar6 != 3) break;
              if (setting == (Settings_BaseSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
              if (((setting->klass->_2).naturalAligment < bVar1) ||
                 ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_FloatSetting)) {
                    /* WARNING: Subroutine does not return */
                il2cpp_unwind_resume(setting);
              }
              pSVar3 = (__this->fields)._backupFloatValues;
              if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              System_Collections_Generic_Dictionary<object__float>__set_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                         (Il2CppObject *)a,*(float *)((long)&setting[1].klass + 4),MethodInfo_Void_set_Item);
            }
          } while (iVar6 != 4);
          if (setting == (Settings_BaseSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
          if (((setting->klass->_2).naturalAligment < bVar1) ||
             ((setting->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) break;
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._backupValues;
          if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          System_Collections_Generic_Dictionary<object__object>__set_Item
                    (pSVar2,(Il2CppObject *)a,setting[1].monitor,MethodInfo_Void_set_Item);
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(setting);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.GlobalSkinEditPopup$$RestoreBackup
// il2cpp: void UI_GlobalSkinEditPopup__RestoreBackup (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x405df90

void UI_GlobalSkinEditPopup__RestoreBackup(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSkinSet_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_Dictionary_string__float__o *pSVar4;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  bool_conflict bVar5;
  int32_t iVar6;
  System_String_o *a;
  Il2CppObject *value;
  Settings_TypedSetting_T__o *__this_02;
  float value_00;
  undefined1 auVar7 [16];
  undefined8 in_stack_ffffffffffffff68;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar8;
  Il2CppRGCTXData *pIVar9;
  _union_229680 _Var10;
  undefined1 local_58 [16];
  _union_229680 local_48;
  
  if (DAT_05704468 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_Settings_BaseSettin);
    il2cpp_init_method_metadata(&TypeInfo_FloatSetting);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"UniqueId");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"Preset");
    DAT_05704468 = '\x01';
  }
  pSVar2 = (__this->fields)._currentGlobalSet;
  if ((pSVar2 != (Settings_HumanCustomSkinSet_o *)0x0) &&
     ((char)(__this->fields)._hasBackup != '\0')) {
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             (pSVar2->fields).TypedSettings;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_Dictionary<object__object>__GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_58,pSVar3,
               MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    pSVar8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_58._0_8_;
    pIVar9 = (Il2CppRGCTXData *)local_58._8_8_;
    _Var10 = local_48;
    while( true ) {
      __this_00.fields._8_8_ = __this;
      __this_00.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff68;
      __this_00.fields._current.fields.key = (Il2CppObject *)pSVar8;
      __this_00.fields._current.fields.value = (Il2CppObject *)pIVar9;
      __this_00.fields._32_8_ = _Var10.genericMethod;
      bVar5 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                        (__this_00,(MethodInfo_31CFE90 *)&stack0xffffffffffffff78);
      if ((char)bVar5 == '\0') break;
      auVar7 = il2cpp_glue_032bf890((MethodInfo_31CFE90 *)&stack0xffffffffffffff78,MethodInfo_KeyValuePair_2_System_String_Settings_BaseSettin);
      __this_02 = auVar7._8_8_;
      a = auVar7._0_8_;
      bVar5 = System_String__op_Equality(a,"Name",(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        bVar5 = System_String__op_Equality(a,"Preset",(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          bVar5 = System_String__op_Equality(a,"UniqueId",(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            iVar6 = Settings_SettingsUtil__GetSettingType
                              ((Settings_BaseSetting_o *)__this_02,(MethodInfo *)0x0);
            if (iVar6 == 3) {
              pSVar4 = (__this->fields)._backupFloatValues;
              if (pSVar4 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              bVar5 = System_Collections_Generic_Dictionary<object__float>__ContainsKey
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                                 (Il2CppObject *)a,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar5 != '\0') {
                pSVar4 = (__this->fields)._backupFloatValues;
                if (pSVar4 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                value_00 = System_Collections_Generic_Dictionary<object__float>__get_Item
                                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                                      pSVar4,(Il2CppObject *)a,MethodInfo_Single_get_Item);
                if (__this_02 == (Settings_TypedSetting_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                bVar1 = (TypeInfo_FloatSetting->_2).naturalAligment;
                if (((__this_02->klass->_2).naturalAligment < bVar1) ||
                   ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_FloatSetting)) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_unwind_resume(__this_02);
                }
                Settings_TypedSetting<float>__set_Value
                          ((Settings_TypedSetting_float__o *)__this_02,value_00,MethodInfo_Void_set_Value);
              }
            }
            else if (iVar6 == 4) {
              pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._backupValues;
              if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              bVar5 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                                (pSVar3,(Il2CppObject *)a,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar5 != '\0') {
                pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (__this->fields)._backupValues;
                if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                value = System_Collections_Generic_Dictionary<object__object>__get_Item
                                  (pSVar3,(Il2CppObject *)a,MethodInfo_String_get_Item);
                if (__this_02 == (Settings_TypedSetting_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
                if (((__this_02->klass->_2).naturalAligment < bVar1) ||
                   ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_unwind_resume(__this_02);
                }
                Settings_TypedSetting<object>__set_Value(__this_02,value,MethodInfo_Void_set_Value);
              }
            }
          }
        }
      }
    }
    __this_01.fields._8_8_ = __this;
    __this_01.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff68;
    __this_01.fields._current.fields.key = (Il2CppObject *)pSVar8;
    __this_01.fields._current.fields.value = (Il2CppObject *)pIVar9;
    __this_01.fields._32_8_ = _Var10.genericMethod;
    System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
              (__this_01,(MethodInfo_31CFFB0 *)&stack0xffffffffffffff78);
  }
  return;
}


// UI.GlobalSkinEditPopup$$OnCancelClick
// il2cpp: void UI_GlobalSkinEditPopup__OnCancelClick (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x40556e0

void UI_GlobalSkinEditPopup__OnCancelClick(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if ((char)(__this->fields)._hasBackup != '\0') {
    UI_GlobalSkinEditPopup__RestoreBackup(__this,method);
    in_RDX = extraout_RDX;
  }
  vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._22_Hide.method,in_RDX,vtable_dispatch);
  return;
}


// UI.GlobalSkinEditPopup$$OnClearClick
// il2cpp: void UI_GlobalSkinEditPopup__OnClearClick (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x405d830

void UI_GlobalSkinEditPopup__OnClearClick(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSkinSet_o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  bool_conflict bVar2;
  uint uVar3;
  System_String_o *a;
  System_Object_array *pSVar4;
  long *plVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar8;
  Il2CppRGCTXData *pIVar9;
  _union_229680 _Var10;
  Il2CppObject *pIVar11;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar12;
  undefined1 auStack_58 [16];
  _union_229680 _Stack_48;
  Il2CppObject *pIStack_40;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSStack_38;
  
  if (DAT_05704469 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_InputSettingElement___GetComponentsInChildren_In);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_Settings_BaseSettin);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Value);
    il2cpp_init_method_metadata(&"UniqueId");
    il2cpp_init_method_metadata(&"Name");
    il2cpp_init_method_metadata(&"Preset");
    DAT_05704469 = '\x01';
  }
  if ((char)(__this->fields)._hasBackup == '\0') {
    UI_GlobalSkinEditPopup__CreateBackup(__this,method);
  }
  pSVar1 = (__this->fields)._currentGlobalSet;
  if (pSVar1 != (Settings_HumanCustomSkinSet_o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (pSVar1->fields).TypedSettings;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__GetEnumerator
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_58,
                 __this_00,MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
      pSVar8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_58._0_8_;
      pIVar9 = (Il2CppRGCTXData *)auStack_58._8_8_;
      _Var10 = _Stack_48;
      pIVar11 = pIStack_40;
      pSVar12 = pSStack_38;
      while( true ) {
        __this_01.fields._8_8_ = pIVar9;
        __this_01.fields._dictionary = pSVar8;
        __this_01.fields._current.fields.key = _Var10.genericMethod;
        __this_01.fields._current.fields.value = pIVar11;
        __this_01.fields._32_8_ = pSVar12;
        bVar2 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                          (__this_01,(MethodInfo_31CFE90 *)&stack0xffffffffffffff78);
        if ((char)bVar2 == '\0') break;
        auVar7 = il2cpp_glue_032bf890(&stack0xffffffffffffff78,MethodInfo_KeyValuePair_2_System_String_Settings_BaseSettin);
        plVar5 = auVar7._8_8_;
        a = auVar7._0_8_;
        bVar2 = System_String__op_Equality(a,"Name",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          bVar2 = System_String__op_Equality(a,"Preset",(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            bVar2 = System_String__op_Equality(a,"UniqueId",(MethodInfo *)0x0);
            if ((char)bVar2 == '\0') {
              if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
            }
          }
        }
      }
      __this_02.fields._8_8_ = pIVar9;
      __this_02.fields._dictionary = pSVar8;
      __this_02.fields._current.fields.key = _Var10.genericMethod;
      __this_02.fields._current.fields.value = pIVar11;
      __this_02.fields._32_8_ = pSVar12;
      System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
                (__this_02,(MethodInfo_31CFFB0 *)&stack0xffffffffffffff78);
      pSVar4 = UnityEngine_Component__GetComponentsInChildren<object>
                         ((UnityEngine_Component_o *)__this,MethodInfo_InputSettingElement___GetComponentsInChildren_In);
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar3 = (uint)pSVar4->max_length;
        if (0 < (int)uVar3) {
          uVar6 = 0;
          do {
            if (uVar3 <= uVar6) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pIVar11 = pSVar4->m_Items[(int)uVar6];
            if (pIVar11 == (Il2CppObject *)0x0) goto LAB_0405da5a;
            (*pIVar11->klass->vtable[6].methodPtr)(pIVar11,pIVar11->klass->vtable[6].method);
            uVar6 = uVar6 + 1;
            uVar3 = (uint)pSVar4->max_length;
          } while ((int)uVar6 < (int)uVar3);
        }
        return;
      }
    }
  }
LAB_0405da5a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.GlobalSkinEditPopup$$OnSaveClick
// il2cpp: void UI_GlobalSkinEditPopup__OnSaveClick (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x405d400

void UI_GlobalSkinEditPopup__OnSaveClick(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  long *plVar5;
  Il2CppClass *pIVar6;
  UnityEngine_Object_c *pUVar7;
  long lVar8;
  Settings_TypedSetting_bool__o *pSVar9;
  Characters_HumanSetup_o *__this_02;
  bool_conflict bVar10;
  uint uVar11;
  uint uVar12;
  UnityEngine_MonoBehaviour_o *pUVar13;
  Il2CppObject *__this_03;
  UnityEngine_MonoBehaviour_o *__this_04;
  Il2CppClass *x;
  
  if (DAT_0570446a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorHumanMenu);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_DummyHuman);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_0570446a = '\x01';
  }
  if ((__this->fields)._currentGlobalSet == (Settings_HumanCustomSkinSet_o *)0x0) {
    return;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields)._backupValues;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
  goto LAB_0405d81d;
  System_Collections_Generic_Dictionary<object__object>__Clear(__this_00,MethodInfo_Void_Clear);
  __this_01 = (__this->fields)._backupFloatValues;
  if (__this_01 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto LAB_0405d81d;
  System_Collections_Generic_Dictionary<object__float>__Clear
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,MethodInfo_Void_Clear);
  *(undefined1 *)&(__this->fields)._hasBackup = 0;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
    pUVar13 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar13 != (UnityEngine_MonoBehaviour_o *)0x0) goto LAB_0405d543;
LAB_0405d563:
    __this_04 = (UnityEngine_MonoBehaviour_o *)0x0;
    iVar4 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar13 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar13 == (UnityEngine_MonoBehaviour_o *)0x0) goto LAB_0405d563;
LAB_0405d543:
    bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
    if ((pUVar13->klass->_2).naturalAligment < bVar1) goto LAB_0405d563;
    __this_04 = (UnityEngine_MonoBehaviour_o *)0x0;
    if ((pUVar13->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CharacterEditorHumanMenu) {
      __this_04 = pUVar13;
    }
    iVar4 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar4 == 0) {
    il2cpp_init_class();
  }
  bVar10 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,
                      (MethodInfo *)0x0);
  if ((char)bVar10 == '\0') goto LAB_0405d7a0;
  plVar5 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar5 == (long *)0x0) goto LAB_0405d81d;
  if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_CharacterEditorGameManager + 0x130)) ||
     (*(long *)(*(long *)(*plVar5 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CharacterEditorGameManager + 0x130) * 8) !=
      TypeInfo_CharacterEditorGameManager)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  pIVar6 = (Il2CppClass *)plVar5[7];
  if (pIVar6 == (Il2CppClass *)0x0) {
LAB_0405d60c:
    x = (Il2CppClass *)0x0;
    iVar4 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar7 = (pIVar6->_1).image;
    bVar1 = (TypeInfo_DummyHuman->_2).naturalAligment;
    if ((pUVar7->_2).naturalAligment < bVar1) goto LAB_0405d60c;
    x = (Il2CppClass *)0x0;
    if ((pUVar7->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_DummyHuman) {
      x = pIVar6;
    }
    iVar4 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar4 == 0) {
    il2cpp_init_class();
  }
  bVar10 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    uVar11 = UI_CharacterEditorCostumePanel__GetPersistentGlobalPreview((MethodInfo *)0x0);
    uVar12 = UI_CharacterEditorCostumePanel__GetPersistentCustomPreview((MethodInfo *)0x0);
    lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if ((((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x20), lVar8 != 0)) &&
        (pSVar9 = *(Settings_TypedSetting_bool__o **)(lVar8 + 0x60),
        pSVar9 != (Settings_TypedSetting_bool__o *)0x0)) && (*(long *)(lVar8 + 0x58) != 0)) {
      uVar2 = *(undefined1 *)((long)&(pSVar9->fields).DefaultValue + 1);
      uVar3 = *(undefined1 *)(*(long *)(lVar8 + 0x58) + 0x11);
      Settings_TypedSetting<bool>__set_Value(pSVar9,uVar11 & 0xff,MethodInfo_Void_set_Value);
      lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
      if (((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0x20), lVar8 != 0)) &&
         ((pSVar9 = *(Settings_TypedSetting_bool__o **)(lVar8 + 0x58),
          pSVar9 != (Settings_TypedSetting_bool__o *)0x0 &&
          ((Settings_TypedSetting<bool>__set_Value(pSVar9,uVar12 & 0xff,MethodInfo_Void_set_Value),
           x != (Il2CppClass *)0x0 &&
           (__this_02 = *(Characters_HumanSetup_o **)&(x->_1).this_arg.bits,
           __this_02 != (Characters_HumanSetup_o *)0x0)))))) {
        Characters_HumanSetup__Load
                  (__this_02,(__this_02->fields).CustomSet,(__this_02->fields).Weapon,0,
                   (MethodInfo *)0x0);
        if (DAT_0570446b == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_LoadSkinAndRestoreSettings_d__27);
          DAT_0570446b = '\x01';
        }
        __this_03 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkinAndRestoreSettings_d__27);
        System_Object___ctor(__this_03,(MethodInfo *)0x0);
        *(undefined4 *)&__this_03[1].klass = 0;
        if (__this_03 != (Il2CppObject *)0x0) {
          __this_03[2].klass = x;
          il2cpp_runtime_glue(__this_03 + 2,x);
          *(undefined1 *)&__this_03[2].monitor = uVar2;
          *(undefined1 *)((long)&__this_03[2].monitor + 1) = uVar3;
          if (__this_04 != (UnityEngine_MonoBehaviour_o *)0x0) {
            UnityEngine_MonoBehaviour__StartCoroutine
                      (__this_04,(System_Collections_IEnumerator_o *)__this_03,(MethodInfo *)0x0);
            goto LAB_0405d7a0;
          }
        }
      }
    }
LAB_0405d81d:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0405d7a0:
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.GlobalSkinEditPopup$$LoadSkinAndRestoreSettings
// il2cpp: System_Collections_IEnumerator_o* UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings (UI_GlobalSkinEditPopup_o* __this, Characters_DummyHuman_o* character, bool originalGlobal, bool originalCustom, const MethodInfo* method);
// 0x405e480

System_Collections_IEnumerator_o *
UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings
          (UI_GlobalSkinEditPopup_o *__this,Characters_DummyHuman_o *character,
          bool_conflict originalGlobal,bool_conflict originalCustom,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_0570446b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LoadSkinAndRestoreSettings_d__27);
    DAT_0570446b = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkinAndRestoreSettings_d__27);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)character;
    il2cpp_runtime_glue(__this_00 + 2,character);
    *(char *)&__this_00[2].monitor = (char)originalGlobal;
    *(char *)((long)&__this_00[2].monitor + 1) = (char)originalCustom;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.GlobalSkinEditPopup$$Show
// il2cpp: void UI_GlobalSkinEditPopup__Show (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x405e530

/* WARNING: Removing unreachable block (ram,0x0405eb15) */
/* WARNING: Removing unreachable block (ram,0x0405edf6) */
/* WARNING: Removing unreachable block (ram,0x0405ed55) */
/* WARNING: Removing unreachable block (ram,0x0405eda6) */
/* WARNING: Removing unreachable block (ram,0x0405ede9) */

void UI_GlobalSkinEditPopup__Show(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  Settings_SetSettingsContainer_T__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_Dictionary_string__float__o *__this_02;
  System_Collections_IEnumerator_c *pSVar8;
  Il2CppRuntimeInterfaceOffsetPair *pIVar9;
  Il2CppClass *pIVar10;
  char cVar11;
  Settings_HumanCustomSkinSet_o *pSVar12;
  UnityEngine_Transform_o *pUVar13;
  System_Collections_IEnumerator_o *pSVar14;
  VirtualInvokeData *pVVar15;
  UnityEngine_Component_o *pUVar16;
  UnityEngine_Object_o *pUVar17;
  long *plVar18;
  undefined8 *puVar19;
  MethodInfo *method_00;
  long lVar20;
  long lVar21;
  
  if (DAT_0570446c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSkinSet);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_Transform);
    DAT_0570446c = '\x01';
  }
  lVar20 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  if ((lVar20 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar20 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    pSVar12 = (Settings_HumanCustomSkinSet_o *)
              Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    pIVar10 = TypeInfo_HumanCustomSkinSet;
    if (pSVar12 == (Settings_HumanCustomSkinSet_o *)0x0) {
      (__this->fields)._currentGlobalSet = (Settings_HumanCustomSkinSet_o *)0x0;
    }
    else {
      bVar1 = (TypeInfo_HumanCustomSkinSet->_2).naturalAligment;
      if (((((Settings_BaseSetSetting_c *)pSVar12->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_BaseSetSetting_c *)pSVar12->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          TypeInfo_HumanCustomSkinSet)) {
LAB_0405ede1:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar12);
      }
      (__this->fields)._currentGlobalSet = pSVar12;
      if (((((Settings_BaseSetSetting_c *)pSVar12->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_BaseSetSetting_c *)pSVar12->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          pIVar10)) goto LAB_0405ede1;
    }
    il2cpp_runtime_glue(&(__this->fields)._currentGlobalSet,pSVar12);
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields)._backupValues;
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__Clear(__this_01,MethodInfo_Void_Clear);
      __this_02 = (__this->fields)._backupFloatValues;
      if (__this_02 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
        System_Collections_Generic_Dictionary<object__float>__Clear
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,MethodInfo_Void_Clear);
        *(undefined1 *)&(__this->fields)._hasBackup = 0;
        pUVar13 = (__this->fields).DoublePanelLeft;
        if ((pUVar13 != (UnityEngine_Transform_o *)0x0) &&
           (pUVar13 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
           pUVar13 != (UnityEngine_Transform_o *)0x0)) {
          pSVar14 = UnityEngine_Transform__GetEnumerator(pUVar13,(MethodInfo *)0x0);
          if (pSVar14 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          do {
            pSVar8 = pSVar14->klass;
            uVar2._0_1_ = (pSVar8->_2).rank;
            uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
            if ((ulong)uVar2 != 0) {
              pIVar9 = (pSVar8->_1).interfaceOffsets;
              lVar20 = 0;
              do {
                if (*(long *)((long)&pIVar9->interfaceType + lVar20) == TypeInfo_IEnumerator) {
                  pVVar15 = pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar20);
                  goto LAB_0405e773;
                }
                lVar20 = lVar20 + 0x10;
              } while ((ulong)uVar2 << 4 != lVar20);
            }
            pVVar15 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar14,TypeInfo_IEnumerator,0);
LAB_0405e773:
            cVar11 = (*pVVar15->methodPtr)(pSVar14,pVVar15->method);
            if (cVar11 == '\0') {
              plVar18 = (long *)il2cpp_runtime_glue();
              if (plVar18 == (long *)0x0) goto LAB_0405e8d6;
              lVar20 = *plVar18;
              if ((ulong)*(ushort *)(lVar20 + 0x12e) == 0) goto LAB_0405e8af;
              lVar21 = 0;
              goto LAB_0405e8a0;
            }
            pSVar8 = pSVar14->klass;
            uVar3._0_1_ = (pSVar8->_2).rank;
            uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
            if ((ulong)uVar3 != 0) {
              pIVar9 = (pSVar8->_1).interfaceOffsets;
              lVar20 = 0;
              do {
                if (*(long *)((long)&pIVar9->interfaceType + lVar20) == TypeInfo_IEnumerator) {
                  pVVar15 = pSVar8->vtable + (*(int *)((long)&pIVar9->offset + lVar20) + 1);
                  goto LAB_0405e7f8;
                }
                lVar20 = lVar20 + 0x10;
              } while ((ulong)uVar3 << 4 != lVar20);
            }
            pVVar15 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar14,TypeInfo_IEnumerator,1);
LAB_0405e7f8:
            pUVar16 = (UnityEngine_Component_o *)(*pVVar15->methodPtr)(pSVar14,pVVar15->method);
            if (pUVar16 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            bVar1 = (TypeInfo_Transform->_2).naturalAligment;
            if (((pUVar16->klass->_2).naturalAligment < bVar1) ||
               ((pUVar16->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Transform)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(pUVar16);
            }
            pUVar17 = (UnityEngine_Object_o *)
                      UnityEngine_Component__get_gameObject(pUVar16,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Object__Destroy(pUVar17,(MethodInfo *)0x0);
          } while( true );
        }
      }
    }
  }
  goto LAB_0405eddc;
  while (lVar21 = lVar21 + 0x10, (ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar21) {
LAB_0405e8a0:
    if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar21) == TypeInfo_IDisposable) {
      puVar19 = (undefined8 *)
                (lVar20 + (long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar21) * 0x10 + 0x138);
      goto LAB_0405e8cd;
    }
  }
LAB_0405e8af:
  puVar19 = (undefined8 *)il2cpp_runtime_glue(plVar18,TypeInfo_IDisposable,0);
LAB_0405e8cd:
  (*(code *)*puVar19)(plVar18);
LAB_0405e8d6:
  pUVar13 = (__this->fields).DoublePanelRight;
  if ((pUVar13 != (UnityEngine_Transform_o *)0x0) &&
     (pUVar13 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
     pUVar13 != (UnityEngine_Transform_o *)0x0)) {
    pSVar14 = UnityEngine_Transform__GetEnumerator(pUVar13,(MethodInfo *)0x0);
    if (pSVar14 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    do {
      pSVar8 = pSVar14->klass;
      uVar4._0_1_ = (pSVar8->_2).rank;
      uVar4._1_1_ = (pSVar8->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar9 = (pSVar8->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar20) == TypeInfo_IEnumerator) {
            pVVar15 = pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar20);
            goto LAB_0405e993;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar20);
      }
      pVVar15 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar14,TypeInfo_IEnumerator,0);
LAB_0405e993:
      cVar11 = (*pVVar15->methodPtr)(pSVar14,pVVar15->method);
      if (cVar11 == '\0') {
        plVar18 = (long *)il2cpp_runtime_glue();
        if (plVar18 == (long *)0x0) goto LAB_0405eb06;
        lVar20 = *plVar18;
        if ((ulong)*(ushort *)(lVar20 + 0x12e) == 0) goto LAB_0405eadf;
        lVar21 = 0;
        goto LAB_0405ead0;
      }
      pSVar8 = pSVar14->klass;
      uVar5._0_1_ = (pSVar8->_2).rank;
      uVar5._1_1_ = (pSVar8->_2).minimumAlignment;
      if ((ulong)uVar5 != 0) {
        pIVar9 = (pSVar8->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar20) == TypeInfo_IEnumerator) {
            pVVar15 = pSVar8->vtable + (*(int *)((long)&pIVar9->offset + lVar20) + 1);
            goto LAB_0405ea18;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)uVar5 << 4 != lVar20);
      }
      pVVar15 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar14,TypeInfo_IEnumerator,1);
LAB_0405ea18:
      pUVar16 = (UnityEngine_Component_o *)(*pVVar15->methodPtr)(pSVar14,pVVar15->method);
      if (pUVar16 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar1 = (TypeInfo_Transform->_2).naturalAligment;
      if (((pUVar16->klass->_2).naturalAligment < bVar1) ||
         ((pUVar16->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Transform)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pUVar16);
      }
      pUVar17 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject(pUVar16,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(pUVar17,(MethodInfo *)0x0);
    } while( true );
  }
  goto LAB_0405eddc;
  while (lVar21 = lVar21 + 0x10, (ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar21) {
LAB_0405ed10:
    if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar21) == TypeInfo_IDisposable) {
      puVar19 = (undefined8 *)
                (lVar20 + (long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar21) * 0x10 + 0x138);
      goto LAB_0405ed3d;
    }
  }
LAB_0405ed1f:
  puVar19 = (undefined8 *)il2cpp_runtime_glue(plVar18,TypeInfo_IDisposable,0);
LAB_0405ed3d:
  (*(code *)*puVar19)(plVar18);
LAB_0405ed46:
  method_00 = (MethodInfo *)0x0;
  (*(__this->klass->vtable)._20_Setup.methodPtr)(__this,0,(__this->klass->vtable)._20_Setup.method);
  if (((__this->fields)._currentGlobalSet != (Settings_HumanCustomSkinSet_o *)0x0) &&
     ((char)(__this->fields)._hasBackup == '\0')) {
    UI_GlobalSkinEditPopup__CreateBackup(__this,method_00);
  }
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
  while (lVar21 = lVar21 + 0x10, (ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar21) {
LAB_0405ead0:
    if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar21) == TypeInfo_IDisposable) {
      puVar19 = (undefined8 *)
                (lVar20 + (long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar21) * 0x10 + 0x138);
      goto LAB_0405eafd;
    }
  }
LAB_0405eadf:
  puVar19 = (undefined8 *)il2cpp_runtime_glue(plVar18,TypeInfo_IDisposable,0);
LAB_0405eafd:
  (*(code *)*puVar19)(plVar18);
LAB_0405eb06:
  pUVar13 = (__this->fields).BottomBar;
  if ((pUVar13 != (UnityEngine_Transform_o *)0x0) &&
     (pUVar13 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
     pUVar13 != (UnityEngine_Transform_o *)0x0)) {
    pSVar14 = UnityEngine_Transform__GetEnumerator(pUVar13,(MethodInfo *)0x0);
    if (pSVar14 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    do {
      pSVar8 = pSVar14->klass;
      uVar6._0_1_ = (pSVar8->_2).rank;
      uVar6._1_1_ = (pSVar8->_2).minimumAlignment;
      if ((ulong)uVar6 != 0) {
        pIVar9 = (pSVar8->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar20) == TypeInfo_IEnumerator) {
            pVVar15 = pSVar8->vtable + *(int *)((long)&pIVar9->offset + lVar20);
            goto LAB_0405ebd3;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)uVar6 << 4 != lVar20);
      }
      pVVar15 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar14,TypeInfo_IEnumerator,0);
LAB_0405ebd3:
      cVar11 = (*pVVar15->methodPtr)(pSVar14,pVVar15->method);
      if (cVar11 == '\0') {
        plVar18 = (long *)il2cpp_runtime_glue();
        if (plVar18 == (long *)0x0) goto LAB_0405ed46;
        lVar20 = *plVar18;
        if ((ulong)*(ushort *)(lVar20 + 0x12e) == 0) goto LAB_0405ed1f;
        lVar21 = 0;
        goto LAB_0405ed10;
      }
      pSVar8 = pSVar14->klass;
      uVar7._0_1_ = (pSVar8->_2).rank;
      uVar7._1_1_ = (pSVar8->_2).minimumAlignment;
      if ((ulong)uVar7 != 0) {
        pIVar9 = (pSVar8->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(long *)((long)&pIVar9->interfaceType + lVar20) == TypeInfo_IEnumerator) {
            pVVar15 = pSVar8->vtable + (*(int *)((long)&pIVar9->offset + lVar20) + 1);
            goto LAB_0405ec58;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)uVar7 << 4 != lVar20);
      }
      pVVar15 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar14,TypeInfo_IEnumerator,1);
LAB_0405ec58:
      pUVar16 = (UnityEngine_Component_o *)(*pVVar15->methodPtr)(pSVar14,pVVar15->method);
      if (pUVar16 == (UnityEngine_Component_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar1 = (TypeInfo_Transform->_2).naturalAligment;
      if (((pUVar16->klass->_2).naturalAligment < bVar1) ||
         ((pUVar16->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_Transform)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pUVar16);
      }
      pUVar17 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject(pUVar16,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(pUVar17,(MethodInfo *)0x0);
    } while( true );
  }
LAB_0405eddc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.GlobalSkinEditPopup$$OnDisable
// il2cpp: void UI_GlobalSkinEditPopup__OnDisable (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x405f110

void UI_GlobalSkinEditPopup__OnDisable(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  if ((char)(__this->fields)._hasBackup != '\0') {
    UI_GlobalSkinEditPopup__RestoreBackup(__this,method);
  }
  UI_BasePopup__OnDisable((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.GlobalSkinEditPopup$$HideImmediate
// il2cpp: void UI_GlobalSkinEditPopup__HideImmediate (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x405f130

void UI_GlobalSkinEditPopup__HideImmediate(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  if ((char)(__this->fields)._hasBackup != '\0') {
    UI_GlobalSkinEditPopup__RestoreBackup(__this,method);
  }
  UI_BasePopup__HideImmediate((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.GlobalSkinEditPopup$$.ctor
// il2cpp: void UI_GlobalSkinEditPopup___ctor (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x405f150

void UI_GlobalSkinEditPopup___ctor(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  
  if (DAT_0570446d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__float);
    DAT_0570446d = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_String_System_String);
  (__this->fields)._backupValues =
       (System_Collections_Generic_Dictionary_string__string__o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields)._backupValues,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_string__float__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__float);
  System_Collections_Generic_Dictionary<object__float>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,MethodInfo_Dictionary_2_System_String_System_Single);
  (__this->fields)._backupFloatValues = __this_01;
  il2cpp_runtime_glue(&(__this->fields)._backupFloatValues);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.GlobalSkinEditPopup$$<Setup>b__20_0
// il2cpp: void UI_GlobalSkinEditPopup___Setup_b__20_0 (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x405f220

void UI_GlobalSkinEditPopup__<Setup>b__20_0(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570446e == '\0') {
    il2cpp_init_method_metadata(&"Clear");
    DAT_0570446e = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_GlobalSkinEditPopup__OnButtonClick(__this,"Clear",in_RDX);
  return;
}


// UI.GlobalSkinEditPopup$$<Setup>b__20_1
// il2cpp: void UI_GlobalSkinEditPopup___Setup_b__20_1 (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x405f260

void UI_GlobalSkinEditPopup__<Setup>b__20_1(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570446f == '\0') {
    il2cpp_init_method_metadata(&"Save");
    DAT_0570446f = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_GlobalSkinEditPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.GlobalSkinEditPopup$$<Setup>b__20_2
// il2cpp: void UI_GlobalSkinEditPopup___Setup_b__20_2 (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x405f2a0

void UI_GlobalSkinEditPopup__<Setup>b__20_2(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704470 == '\0') {
    il2cpp_init_method_metadata(&"Cancel");
    DAT_05704470 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_GlobalSkinEditPopup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


