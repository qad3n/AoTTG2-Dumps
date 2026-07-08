// Type: UI.PresetSkinEditPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/PresetSkinEditPopup.cs
// Prior source: NEW in this update
// --------------------------------

// UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$.ctor
// il2cpp: void UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28___ctor (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4061ad0

void UI_PresetSkinEditPopup_<LoadSkinAndRestoreSettingsCoroutine>d__28___ctor
               (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$System.IDisposable.Dispose
// il2cpp: void UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__System_IDisposable_Dispose (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o* __this, const MethodInfo* method);
// 0x4061de0

void UI_PresetSkinEditPopup_<LoadSkinAndRestoreSettingsCoroutine>d__28__System_IDisposable_Dispose
               (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *__this,
               MethodInfo *method)

{
  return;
}


// UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$MoveNext
// il2cpp: bool UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__MoveNext (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o* __this, const MethodInfo* method);
// 0x4061df0

bool_conflict
UI_PresetSkinEditPopup_<LoadSkinAndRestoreSettingsCoroutine>d__28__MoveNext
          (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *__this,
          MethodInfo *method)

{
  int iVar1;
  Characters_DummyHuman_o *__this_00;
  long lVar2;
  Settings_TypedSetting_bool__o *pSVar3;
  UnityEngine_WaitForSeconds_o *pUVar4;
  undefined8 uVar5;
  
  if (DAT_05704482 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_05704482 = '\x01';
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
LAB_04061f66:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    __this_00 = (__this->fields).character;
    if (__this_00 == (Characters_DummyHuman_o *)0x0) goto LAB_04061f66;
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


// UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o* __this, const MethodInfo* method);
// 0x4061f70

Il2CppObject *
UI_PresetSkinEditPopup_<LoadSkinAndRestoreSettingsCoroutine>d__28__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__System_Collections_IEnumerator_Reset (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o* __this, const MethodInfo* method);
// 0x4061f80

void UI_PresetSkinEditPopup_<LoadSkinAndRestoreSettingsCoroutine>d__28__System_Collections_IEnumerator_Reset
               (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *__this,
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


// UI.PresetSkinEditPopup.<LoadSkinAndRestoreSettingsCoroutine>d__28$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28__System_Collections_IEnumerator_get_Current (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o* __this, const MethodInfo* method);
// 0x4061fc0

Il2CppObject *
UI_PresetSkinEditPopup_<LoadSkinAndRestoreSettingsCoroutine>d__28__System_Collections_IEnumerator_get_Current
          (UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine_d__28_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.PresetSkinEditPopup$$get_Title
// il2cpp: System_String_o* UI_PresetSkinEditPopup__get_Title (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x405f8e0

System_String_o *
UI_PresetSkinEditPopup__get_Title(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  long lVar1;
  Settings_SetSettingsContainer_T__o *__this_00;
  Settings_StringSetting_o *pSVar2;
  System_String_o *pSVar3;
  Settings_BaseSetSetting_o *pSVar4;
  
  if (DAT_05704475 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"SettingsPopup");
    il2cpp_init_method_metadata(&": ");
    il2cpp_init_method_metadata(&"Skins.Human");
    il2cpp_init_method_metadata(&"Preset");
    il2cpp_init_method_metadata(&"");
    DAT_05704475 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = UI_UIManager__GetLocale
                     ("SettingsPopup","Skins.Human","Preset","","",
                      (MethodInfo *)0x0);
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
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


// UI.PresetSkinEditPopup$$get_Width
// il2cpp: float UI_PresetSkinEditPopup__get_Width (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x405fa20

float UI_PresetSkinEditPopup__get_Width(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  return 1100.0;
}


// UI.PresetSkinEditPopup$$get_Height
// il2cpp: float UI_PresetSkinEditPopup__get_Height (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x405fa30

float UI_PresetSkinEditPopup__get_Height(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  return 700.0;
}


// UI.PresetSkinEditPopup$$get_VerticalSpacing
// il2cpp: float UI_PresetSkinEditPopup__get_VerticalSpacing (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x405fa40

float UI_PresetSkinEditPopup__get_VerticalSpacing
                (UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  return 15.0;
}


// UI.PresetSkinEditPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_PresetSkinEditPopup__get_HorizontalPadding (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x405fa50

int32_t UI_PresetSkinEditPopup__get_HorizontalPadding
                  (UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.PresetSkinEditPopup$$get_VerticalPadding
// il2cpp: int32_t UI_PresetSkinEditPopup__get_VerticalPadding (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x405fa60

int32_t UI_PresetSkinEditPopup__get_VerticalPadding
                  (UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.PresetSkinEditPopup$$get_DoublePanel
// il2cpp: bool UI_PresetSkinEditPopup__get_DoublePanel (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x405fa70

bool_conflict
UI_PresetSkinEditPopup__get_DoublePanel(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.PresetSkinEditPopup$$get_ScrollBar
// il2cpp: bool UI_PresetSkinEditPopup__get_ScrollBar (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x405fa80

bool_conflict
UI_PresetSkinEditPopup__get_ScrollBar(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.PresetSkinEditPopup$$Setup
// il2cpp: void UI_PresetSkinEditPopup__Setup (UI_PresetSkinEditPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x405fa90

void UI_PresetSkinEditPopup__Setup
               (UI_PresetSkinEditPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_SetSettingsContainer_T__o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  Settings_StringSetting_o *pSVar4;
  Settings_FloatSetting_o *pSVar5;
  Il2CppClass *pIVar6;
  int32_t fontSize;
  System_String_o *pSVar7;
  UI_ElementStyle_o *__this_01;
  UI_ElementStyle_o *__this_02;
  Settings_HumanCustomSet_o *pSVar8;
  UnityEngine_Events_UnityAction_o *pUVar9;
  Settings_HumanCustomSet_o **ppSVar10;
  
  if (DAT_05704476 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__20_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__20_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__20_2);
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
    DAT_05704476 = '\x01';
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
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar2 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    pSVar8 = (Settings_HumanCustomSet_o *)
             Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    pIVar6 = TypeInfo_HumanCustomSet;
    if (pSVar8 == (Settings_HumanCustomSet_o *)0x0) {
      (__this->fields)._currentPreset = (Settings_HumanCustomSet_o *)0x0;
    }
    else {
      bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
      if (((((Settings_BaseSetSetting_c *)pSVar8->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_BaseSetSetting_c *)pSVar8->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          TypeInfo_HumanCustomSet)) {
LAB_040609db:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar8);
      }
      (__this->fields)._currentPreset = pSVar8;
      if (((((Settings_BaseSetSetting_c *)pSVar8->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_BaseSetSetting_c *)pSVar8->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          pIVar6)) goto LAB_040609db;
    }
    ppSVar10 = &(__this->fields)._currentPreset;
    il2cpp_runtime_glue(ppSVar10,pSVar8);
    pSVar8 = (__this->fields)._currentPreset;
    if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = (pSVar8->fields).SkinHair;
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar7 = UI_UIManager__GetLocale
                         ("SettingsPopup","Skins.Human","Hair","","",
                          (MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",300.0,40.0,0,
                 (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 (MethodInfo *)0x0);
      pSVar8 = *ppSVar10;
      if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
        pUVar3 = (__this->fields).DoublePanelLeft;
        pSVar4 = (pSVar8->fields).SkinEye;
        pSVar7 = UI_UIManager__GetLocale
                           ("SettingsPopup","Skins.Human","Eye","","",
                            (MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",300.0,40.0,
                   0,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0
                   ,(System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                   (MethodInfo *)0x0);
        pSVar8 = (__this->fields)._currentPreset;
        if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
          pUVar3 = (__this->fields).DoublePanelLeft;
          pSVar4 = (pSVar8->fields).SkinGlass;
          pSVar7 = UI_UIManager__GetLocale
                             ("SettingsPopup","Skins.Human","Glass","","",
                              (MethodInfo *)0x0);
          UI_ElementFactory__CreateInputSetting
                    (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",300.0,
                     40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                     (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                     (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
          pSVar8 = (__this->fields)._currentPreset;
          if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
            pUVar3 = (__this->fields).DoublePanelLeft;
            pSVar4 = (pSVar8->fields).SkinFace;
            pSVar7 = UI_UIManager__GetLocale
                               ("SettingsPopup","Skins.Human","Face","","",
                                (MethodInfo *)0x0);
            UI_ElementFactory__CreateInputSetting
                      (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",300.0,
                       40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                       (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                       (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
            pSVar8 = (__this->fields)._currentPreset;
            if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
              pUVar3 = (__this->fields).DoublePanelLeft;
              pSVar4 = (pSVar8->fields).SkinSkin;
              pSVar7 = UI_UIManager__GetLocale
                                 ("SettingsPopup","Skins.Human","Skin","","",
                                  (MethodInfo *)0x0);
              UI_ElementFactory__CreateInputSetting
                        (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",300.0
                         ,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                         (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                         (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
              pSVar8 = (__this->fields)._currentPreset;
              if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                pUVar3 = (__this->fields).DoublePanelLeft;
                pSVar4 = (pSVar8->fields).SkinCostume;
                pSVar7 = UI_UIManager__GetLocale
                                   ("SettingsPopup","Skins.Human","Costume","",""
                                    ,(MethodInfo *)0x0);
                UI_ElementFactory__CreateInputSetting
                          (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",
                           300.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                           (UnityEngine_Events_UnityAction_o *)0x0,
                           (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                           (MethodInfo *)0x0);
                pSVar8 = (__this->fields)._currentPreset;
                if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                  pUVar3 = (__this->fields).DoublePanelLeft;
                  pSVar4 = (pSVar8->fields).SkinLogo;
                  pSVar7 = UI_UIManager__GetLocale
                                     ("SettingsPopup","Skins.Human","Logo","",
                                      "",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateInputSetting
                            (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,"",
                             300.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                             (UnityEngine_Events_UnityAction_o *)0x0,
                             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0
                             ,(MethodInfo *)0x0);
                  pSVar8 = (__this->fields)._currentPreset;
                  if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                    pUVar3 = (__this->fields).DoublePanelLeft;
                    pSVar4 = (pSVar8->fields).SkinGearL;
                    pSVar7 = UI_UIManager__GetLocale
                                       ("SettingsPopup","Skins.Human","GearL","",
                                        "",(MethodInfo *)0x0);
                    UI_ElementFactory__CreateInputSetting
                              (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,""
                               ,300.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                               (UnityEngine_Events_UnityAction_o *)0x0,
                               (System_Func_string__bool__o *)0x0,
                               (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                    pSVar8 = (__this->fields)._currentPreset;
                    if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                      pUVar3 = (__this->fields).DoublePanelLeft;
                      pSVar4 = (pSVar8->fields).SkinGearR;
                      pSVar7 = UI_UIManager__GetLocale
                                         ("SettingsPopup","Skins.Human","GearR","",
                                          "",(MethodInfo *)0x0);
                      UI_ElementFactory__CreateInputSetting
                                (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,
                                 "",300.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                 (System_Func_string__bool__o *)0x0,
                                 (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                      pSVar8 = (__this->fields)._currentPreset;
                      if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                        pUVar3 = (__this->fields).DoublePanelLeft;
                        pSVar4 = (pSVar8->fields).SkinGas;
                        pSVar7 = UI_UIManager__GetLocale
                                           ("SettingsPopup","Skins.Human","Gas","",
                                            "",(MethodInfo *)0x0);
                        UI_ElementFactory__CreateInputSetting
                                  (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,
                                   "",300.0,40.0,0,(UnityEngine_Events_UnityAction_o *)0x0
                                   ,(UnityEngine_Events_UnityAction_o *)0x0,
                                   (System_Func_string__bool__o *)0x0,
                                   (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                        pSVar8 = (__this->fields)._currentPreset;
                        if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                          pUVar3 = (__this->fields).DoublePanelLeft;
                          pSVar4 = (pSVar8->fields).SkinHoodie;
                          pSVar7 = UI_UIManager__GetLocale
                                             ("SettingsPopup","Skins.Human","Hoodie","",
                                              "",(MethodInfo *)0x0);
                          UI_ElementFactory__CreateInputSetting
                                    (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,
                                     "",300.0,40.0,0,
                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                     (System_Func_string__bool__o *)0x0,
                                     (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                          pSVar8 = (__this->fields)._currentPreset;
                          if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                            pUVar3 = (__this->fields).DoublePanelRight;
                            pSVar4 = (pSVar8->fields).SkinWeaponTrail;
                            pSVar7 = UI_UIManager__GetLocale
                                               ("SettingsPopup","Skins.Human","WeaponTrail","",
                                                "",(MethodInfo *)0x0);
                            UI_ElementFactory__CreateInputSetting
                                      (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,
                                       "",300.0,40.0,0,
                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                       (System_Func_string__bool__o *)0x0,
                                       (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                            pSVar8 = (__this->fields)._currentPreset;
                            if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                              pUVar3 = (__this->fields).DoublePanelRight;
                              pSVar4 = (pSVar8->fields).SkinHorse;
                              pSVar7 = UI_UIManager__GetLocale
                                                 ("SettingsPopup","Skins.Human","Horse",
                                                  "","",(MethodInfo *)0x0);
                              UI_ElementFactory__CreateInputSetting
                                        (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,
                                         "",300.0,40.0,0,
                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                         (System_Func_string__bool__o *)0x0,
                                         (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                              pSVar8 = (__this->fields)._currentPreset;
                              if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                                pUVar3 = (__this->fields).DoublePanelRight;
                                pSVar4 = (pSVar8->fields).SkinThunderspearL;
                                pSVar7 = UI_UIManager__GetLocale
                                                   ("SettingsPopup","Skins.Human","ThunderspearL",
                                                    "","",(MethodInfo *)0x0);
                                UI_ElementFactory__CreateInputSetting
                                          (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar7,
                                           "",300.0,40.0,0,
                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                           (System_Func_string__bool__o *)0x0,
                                           (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                pSVar8 = (__this->fields)._currentPreset;
                                if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                                  pUVar3 = (__this->fields).DoublePanelRight;
                                  pSVar4 = (pSVar8->fields).SkinThunderspearR;
                                  pSVar7 = UI_UIManager__GetLocale
                                                     ("SettingsPopup","Skins.Human","ThunderspearR",
                                                      "","",(MethodInfo *)0x0);
                                  UI_ElementFactory__CreateInputSetting
                                            (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,
                                             pSVar7,"",300.0,40.0,0,
                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                             (System_Func_string__bool__o *)0x0,
                                             (System_Func_string__string__o *)0x0,(MethodInfo *)0x0)
                                  ;
                                  pSVar8 = (__this->fields)._currentPreset;
                                  if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                                    pUVar3 = (__this->fields).DoublePanelRight;
                                    pSVar4 = (pSVar8->fields).SkinHookL;
                                    pSVar7 = UI_UIManager__GetLocale
                                                       ("SettingsPopup","Skins.Human","HookL",
                                                        "","",(MethodInfo *)0x0)
                                    ;
                                    UI_ElementFactory__CreateInputSetting
                                              (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,
                                               pSVar7,"",300.0,40.0,0,
                                               (UnityEngine_Events_UnityAction_o *)0x0,
                                               (UnityEngine_Events_UnityAction_o *)0x0,
                                               (System_Func_string__bool__o *)0x0,
                                               (System_Func_string__string__o *)0x0,
                                               (MethodInfo *)0x0);
                                    pSVar8 = (__this->fields)._currentPreset;
                                    if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                                      pUVar3 = (__this->fields).DoublePanelRight;
                                      pSVar5 = (pSVar8->fields).SkinHookLTiling;
                                      pSVar7 = UI_UIManager__GetLocale
                                                         ("SettingsPopup","Skins.Human","HookLTiling",
                                                          "","",
                                                          (MethodInfo *)0x0);
                                      UI_ElementFactory__CreateInputSetting
                                                (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar5,
                                                 pSVar7,"",300.0,40.0,0,
                                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                                 (System_Func_string__bool__o *)0x0,
                                                 (System_Func_string__string__o *)0x0,
                                                 (MethodInfo *)0x0);
                                      pSVar8 = (__this->fields)._currentPreset;
                                      if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                                        pUVar3 = (__this->fields).DoublePanelRight;
                                        pSVar4 = (pSVar8->fields).SkinHookR;
                                        pSVar7 = UI_UIManager__GetLocale
                                                           ("SettingsPopup","Skins.Human","HookR",
                                                            "","",
                                                            (MethodInfo *)0x0);
                                        UI_ElementFactory__CreateInputSetting
                                                  (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4
                                                   ,pSVar7,"",300.0,40.0,0,
                                                   (UnityEngine_Events_UnityAction_o *)0x0,
                                                   (UnityEngine_Events_UnityAction_o *)0x0,
                                                   (System_Func_string__bool__o *)0x0,
                                                   (System_Func_string__string__o *)0x0,
                                                   (MethodInfo *)0x0);
                                        pSVar8 = (__this->fields)._currentPreset;
                                        if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                                          pUVar3 = (__this->fields).DoublePanelRight;
                                          pSVar5 = (pSVar8->fields).SkinHookRTiling;
                                          pSVar7 = UI_UIManager__GetLocale
                                                             ("SettingsPopup","Skins.Human","HookRTiling"
                                                              ,"","",
                                                              (MethodInfo *)0x0);
                                          UI_ElementFactory__CreateInputSetting
                                                    (pUVar3,__this_01,
                                                     (Settings_BaseSetting_o *)pSVar5,pSVar7,
                                                     "",300.0,40.0,0,
                                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                                     (System_Func_string__bool__o *)0x0,
                                                     (System_Func_string__string__o *)0x0,
                                                     (MethodInfo *)0x0);
                                          pSVar8 = (__this->fields)._currentPreset;
                                          if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                                            pUVar3 = (__this->fields).DoublePanelRight;
                                            pSVar4 = (pSVar8->fields).SkinHat;
                                            pSVar7 = UI_UIManager__GetLocale
                                                               ("SettingsPopup","Skins.Human",
                                                                "Hat","",
                                                                "",(MethodInfo *)0x0);
                                            UI_ElementFactory__CreateInputSetting
                                                      (pUVar3,__this_01,
                                                       (Settings_BaseSetting_o *)pSVar4,pSVar7,
                                                       "",300.0,40.0,0,
                                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                                       (System_Func_string__bool__o *)0x0,
                                                       (System_Func_string__string__o *)0x0,
                                                       (MethodInfo *)0x0);
                                            pSVar8 = (__this->fields)._currentPreset;
                                            if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                                              pUVar3 = (__this->fields).DoublePanelRight;
                                              pSVar4 = (pSVar8->fields).SkinHead;
                                              pSVar7 = UI_UIManager__GetLocale
                                                                 ("SettingsPopup","Skins.Human",
                                                                  "Head","",
                                                                  "",(MethodInfo *)0x0);
                                              UI_ElementFactory__CreateInputSetting
                                                        (pUVar3,__this_01,
                                                         (Settings_BaseSetting_o *)pSVar4,pSVar7,
                                                         "",300.0,40.0,0,
                                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                                         (System_Func_string__bool__o *)0x0,
                                                         (System_Func_string__string__o *)0x0,
                                                         (MethodInfo *)0x0);
                                              pSVar8 = (__this->fields)._currentPreset;
                                              if (pSVar8 != (Settings_HumanCustomSet_o *)0x0) {
                                                pUVar3 = (__this->fields).DoublePanelRight;
                                                pSVar4 = (pSVar8->fields).SkinBack;
                                                pSVar7 = UI_UIManager__GetLocale
                                                                   ("SettingsPopup","Skins.Human",
                                                                    "Back","",
                                                                    "",(MethodInfo *)0x0);
                                                UI_ElementFactory__CreateInputSetting
                                                          (pUVar3,__this_01,
                                                           (Settings_BaseSetting_o *)pSVar4,pSVar7,
                                                           "",300.0,40.0,0,
                                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                                           (System_Func_string__bool__o *)0x0,
                                                           (System_Func_string__string__o *)0x0,
                                                           (MethodInfo *)0x0);
                                                pUVar3 = (__this->fields).BottomBar;
                                                pSVar7 = UI_UIManager__GetLocaleCommon
                                                                   ("Clear",(MethodInfo *)0x0);
                                                pUVar9 = (UnityEngine_Events_UnityAction_o *)
                                                         il2cpp_runtime_glue(TypeInfo_UnityAction);
                                                UnityEngine_Events_UnityAction___ctor();
                                                UI_ElementFactory__CreateTextButton
                                                          (pUVar3,__this_02,pSVar7,0.0,pUVar9,
                                                           (MethodInfo *)0x0);
                                                pUVar3 = (__this->fields).BottomBar;
                                                pSVar7 = UI_UIManager__GetLocaleCommon
                                                                   ("Apply",(MethodInfo *)0x0);
                                                pUVar9 = (UnityEngine_Events_UnityAction_o *)
                                                         il2cpp_runtime_glue(TypeInfo_UnityAction);
                                                UnityEngine_Events_UnityAction___ctor();
                                                UI_ElementFactory__CreateTextButton
                                                          (pUVar3,__this_02,pSVar7,0.0,pUVar9,
                                                           (MethodInfo *)0x0);
                                                pUVar3 = (__this->fields).BottomBar;
                                                pSVar7 = UI_UIManager__GetLocaleCommon
                                                                   ("Cancel",(MethodInfo *)0x0);
                                                pUVar9 = (UnityEngine_Events_UnityAction_o *)
                                                         il2cpp_runtime_glue(TypeInfo_UnityAction);
                                                UnityEngine_Events_UnityAction___ctor();
                                                UI_ElementFactory__CreateTextButton
                                                          (pUVar3,__this_02,pSVar7,0.0,pUVar9,
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


// UI.PresetSkinEditPopup$$OnButtonClick
// il2cpp: void UI_PresetSkinEditPopup__OnButtonClick (UI_PresetSkinEditPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40609f0

void UI_PresetSkinEditPopup__OnButtonClick
               (UI_PresetSkinEditPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *pMVar2;
  
  if (DAT_05704477 == '\0') {
    il2cpp_init_method_metadata(&"Clear");
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"Save");
    DAT_05704477 = '\x01';
  }
  pMVar2 = "Cancel";
  bVar1 = System_String__op_Equality(name,(System_String_o *)"Cancel",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if ((char)(__this->fields)._hasBackup != '\0') {
      UI_PresetSkinEditPopup__RestoreBackup(__this,pMVar2);
    }
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  pMVar2 = "Clear";
  bVar1 = System_String__op_Equality(name,(System_String_o *)"Clear",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    UI_PresetSkinEditPopup__OnClearClick(__this,pMVar2);
    return;
  }
  pMVar2 = "Save";
  bVar1 = System_String__op_Equality(name,(System_String_o *)"Save",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    UI_PresetSkinEditPopup__OnSaveClick(__this,pMVar2);
    return;
  }
  return;
}


// UI.PresetSkinEditPopup$$OnClearClick
// il2cpp: void UI_PresetSkinEditPopup__OnClearClick (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x4060b00

void UI_PresetSkinEditPopup__OnClearClick(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSet_o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *pIVar2;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  bool_conflict bVar3;
  uint uVar4;
  System_Object_array *pSVar5;
  long *extraout_RDX;
  uint uVar6;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar7;
  Il2CppType **ppIVar8;
  Il2CppRGCTXData *pIVar9;
  _union_229680 _Var10;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar11;
  undefined1 local_50 [16];
  Il2CppRGCTXData *local_40;
  _union_229680 _Stack_38;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *local_30;
  
  if (DAT_05704478 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_InputSettingElement___GetComponentsInChildren_In);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_Settings_BaseSettin);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Value);
    DAT_05704478 = '\x01';
  }
  if ((char)(__this->fields)._hasBackup == '\0') {
    UI_PresetSkinEditPopup__CreateBackup(__this,method);
  }
  pSVar1 = (__this->fields)._currentPreset;
  if ((pSVar1 != (Settings_HumanCustomSet_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (pSVar1->fields).TypedSettings,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    System_Collections_Generic_Dictionary<object__object>__GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_50,
               __this_00,MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    pSVar7 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_50._0_8_;
    ppIVar8 = (Il2CppType **)local_50._8_8_;
    pIVar9 = local_40;
    _Var10 = _Stack_38;
    pSVar11 = local_30;
    while( true ) {
      __this_01.fields._8_8_ = ppIVar8;
      __this_01.fields._dictionary = pSVar7;
      __this_01.fields._current.fields.key = (Il2CppObject *)pIVar9;
      __this_01.fields._current.fields.value = _Var10.genericMethod;
      __this_01.fields._32_8_ = pSVar11;
      bVar3 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                        (__this_01,(MethodInfo_31CFE90 *)&stack0xffffffffffffff88);
      if ((char)bVar3 == '\0') break;
      il2cpp_glue_032bf890(&stack0xffffffffffffff88,MethodInfo_KeyValuePair_2_System_String_Settings_BaseSettin);
      if (extraout_RDX == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (**(code **)(*extraout_RDX + 0x178))(extraout_RDX,*(undefined8 *)(*extraout_RDX + 0x180));
    }
    __this_02.fields._8_8_ = ppIVar8;
    __this_02.fields._dictionary = pSVar7;
    __this_02.fields._current.fields.key = (Il2CppObject *)pIVar9;
    __this_02.fields._current.fields.value = _Var10.genericMethod;
    __this_02.fields._32_8_ = pSVar11;
    System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
              (__this_02,(MethodInfo_31CFFB0 *)&stack0xffffffffffffff88);
    pSVar5 = UnityEngine_Component__GetComponentsInChildren<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_InputSettingElement___GetComponentsInChildren_In);
    if (pSVar5 != (System_Object_array *)0x0) {
      uVar4 = (uint)pSVar5->max_length;
      if (0 < (int)uVar4) {
        uVar6 = 0;
        do {
          if (uVar4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pIVar2 = pSVar5->m_Items[(int)uVar6];
          if (pIVar2 == (Il2CppObject *)0x0) goto LAB_04060c9d;
          (*pIVar2->klass->vtable[6].methodPtr)(pIVar2,pIVar2->klass->vtable[6].method);
          uVar6 = uVar6 + 1;
          uVar4 = (uint)pSVar5->max_length;
        } while ((int)uVar6 < (int)uVar4);
      }
      return;
    }
  }
LAB_04060c9d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.PresetSkinEditPopup$$CreateBackup
// il2cpp: void UI_PresetSkinEditPopup__CreateBackup (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x4061180

void UI_PresetSkinEditPopup__CreateBackup(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_string__float__o *pSVar3;
  Settings_HumanCustomSet_o *pSVar4;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  bool_conflict bVar5;
  int32_t iVar6;
  Settings_BaseSetting_o *setting;
  undefined1 auVar7 [16];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar8;
  Il2CppRGCTXData *pIVar9;
  _union_229680 _Var10;
  Il2CppObject *pIVar11;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar12;
  undefined1 local_58 [16];
  _union_229680 local_48;
  Il2CppObject *pIStack_40;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *local_38;
  
  if (DAT_05704479 == '\0') {
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
    DAT_05704479 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._backupValues
  ;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Clear(pSVar2,MethodInfo_Void_Clear);
    pSVar3 = (__this->fields)._backupFloatValues;
    if (pSVar3 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      System_Collections_Generic_Dictionary<object__float>__Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,MethodInfo_Void_Clear);
      pSVar4 = (__this->fields)._currentPreset;
      if ((pSVar4 != (Settings_HumanCustomSet_o *)0x0) &&
         (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (pSVar4->fields).TypedSettings,
         pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        System_Collections_Generic_Dictionary<object__object>__GetEnumerator
                  ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_58,
                   pSVar2,MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
        pSVar8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_58._0_8_;
        pIVar9 = (Il2CppRGCTXData *)local_58._8_8_;
        _Var10 = local_48;
        pIVar11 = pIStack_40;
        pSVar12 = local_38;
        while( true ) {
          do {
            while( true ) {
              __this_00.fields._8_8_ = pIVar9;
              __this_00.fields._dictionary = pSVar8;
              __this_00.fields._current.fields.key = _Var10.genericMethod;
              __this_00.fields._current.fields.value = pIVar11;
              __this_00.fields._32_8_ = pSVar12;
              bVar5 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                                (__this_00,(MethodInfo_31CFE90 *)&stack0xffffffffffffff78);
              if ((char)bVar5 == '\0') {
                __this_01.fields._8_8_ = pIVar9;
                __this_01.fields._dictionary = pSVar8;
                __this_01.fields._current.fields.key = _Var10.genericMethod;
                __this_01.fields._current.fields.value = pIVar11;
                __this_01.fields._32_8_ = pSVar12;
                System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
                          (__this_01,(MethodInfo_31CFFB0 *)&stack0xffffffffffffff78);
                *(undefined1 *)&(__this->fields)._hasBackup = 1;
                return;
              }
              auVar7 = il2cpp_glue_032bf890(&stack0xffffffffffffff78);
              setting = auVar7._8_8_;
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
                         auVar7._0_8_,*(float *)((long)&setting[1].klass + 4),MethodInfo_Void_set_Item);
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
                    (pSVar2,auVar7._0_8_,setting[1].monitor,MethodInfo_Void_set_Item);
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(setting);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.PresetSkinEditPopup$$RestoreBackup
// il2cpp: void UI_PresetSkinEditPopup__RestoreBackup (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x4061520

void UI_PresetSkinEditPopup__RestoreBackup(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSet_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_Dictionary_string__float__o *pSVar4;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  bool_conflict bVar5;
  int32_t iVar6;
  uint uVar7;
  Il2CppObject *pIVar8;
  System_Object_array *pSVar9;
  Settings_TypedSetting_T__o *__this_02;
  uint uVar10;
  float value;
  undefined1 auVar11 [16];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar12;
  Il2CppRGCTXData *pIVar13;
  _union_229680 _Var14;
  Il2CppObject *pIVar15;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar16;
  undefined1 local_58 [16];
  _union_229680 local_48;
  Il2CppObject *pIStack_40;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *local_38;
  
  if (DAT_0570447a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_InputSettingElement___GetComponentsInChildren_In);
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
    DAT_0570447a = '\x01';
  }
  if (((char)(__this->fields)._hasBackup == '\0') ||
     (pSVar2 = (__this->fields)._currentPreset, pSVar2 == (Settings_HumanCustomSet_o *)0x0)) {
    return;
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar2->fields).TypedSettings
  ;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_58,pSVar3,
               MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    pSVar12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_58._0_8_;
    pIVar13 = (Il2CppRGCTXData *)local_58._8_8_;
    _Var14 = local_48;
    pIVar15 = pIStack_40;
    pSVar16 = local_38;
    while (__this_00.fields._8_8_ = pIVar13, __this_00.fields._dictionary = pSVar12,
          __this_00.fields._current.fields.key = _Var14.genericMethod,
          __this_00.fields._current.fields.value = pIVar15, __this_00.fields._32_8_ = pSVar16,
          bVar5 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                            (__this_00,(MethodInfo_31CFE90 *)&stack0xffffffffffffff78),
          (char)bVar5 != '\0') {
      auVar11 = il2cpp_glue_032bf890(&stack0xffffffffffffff78);
      __this_02 = auVar11._8_8_;
      pIVar8 = auVar11._0_8_;
      iVar6 = Settings_SettingsUtil__GetSettingType
                        ((Settings_BaseSetting_o *)__this_02,(MethodInfo *)0x0);
      if (iVar6 == 3) {
        pSVar4 = (__this->fields)._backupFloatValues;
        if (pSVar4 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar5 = System_Collections_Generic_Dictionary<object__float>__ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,pIVar8,
                           MethodInfo_Boolean_ContainsKey);
        if ((char)bVar5 != '\0') {
          pSVar4 = (__this->fields)._backupFloatValues;
          if (pSVar4 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          value = System_Collections_Generic_Dictionary<object__float>__get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,pIVar8,
                             MethodInfo_Single_get_Item);
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
                    ((Settings_TypedSetting_float__o *)__this_02,value,MethodInfo_Void_set_Value);
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
                          (pSVar3,pIVar8,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar5 != '\0') {
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._backupValues;
          if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pIVar8 = System_Collections_Generic_Dictionary<object__object>__get_Item
                             (pSVar3,pIVar8,MethodInfo_String_get_Item);
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
          Settings_TypedSetting<object>__set_Value(__this_02,pIVar8,MethodInfo_Void_set_Value);
        }
      }
    }
    __this_01.fields._8_8_ = pIVar13;
    __this_01.fields._dictionary = pSVar12;
    __this_01.fields._current.fields.key = _Var14.genericMethod;
    __this_01.fields._current.fields.value = pIVar15;
    __this_01.fields._32_8_ = pSVar16;
    System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
              (__this_01,(MethodInfo_31CFFB0 *)&stack0xffffffffffffff78);
    pSVar9 = UnityEngine_Component__GetComponentsInChildren<object>
                       ((UnityEngine_Component_o *)__this,MethodInfo_InputSettingElement___GetComponentsInChildren_In);
    if (pSVar9 != (System_Object_array *)0x0) {
      uVar7 = (uint)pSVar9->max_length;
      if ((int)uVar7 < 1) {
        return;
      }
      uVar10 = 0;
      while( true ) {
        if (uVar7 <= uVar10) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pIVar15 = pSVar9->m_Items[(int)uVar10];
        if (pIVar15 == (Il2CppObject *)0x0) break;
        (*pIVar15->klass->vtable[6].methodPtr)(pIVar15,pIVar15->klass->vtable[6].method);
        uVar10 = uVar10 + 1;
        uVar7 = (uint)pSVar9->max_length;
        if ((int)uVar7 <= (int)uVar10) {
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.PresetSkinEditPopup$$OnCancelClick
// il2cpp: void UI_PresetSkinEditPopup__OnCancelClick (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x4060ad0

void UI_PresetSkinEditPopup__OnCancelClick(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  
  if ((char)(__this->fields)._hasBackup != '\0') {
    UI_PresetSkinEditPopup__RestoreBackup(__this,method);
    in_RDX = extraout_RDX;
  }
  vtable_dispatch = (__this->klass->vtable)._22_Hide.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._22_Hide.method,in_RDX,vtable_dispatch);
  return;
}


// UI.PresetSkinEditPopup$$OnSaveClick
// il2cpp: void UI_PresetSkinEditPopup__OnSaveClick (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x4060d40

void UI_PresetSkinEditPopup__OnSaveClick(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

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
  
  if (DAT_0570447b == '\0') {
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
    DAT_0570447b = '\x01';
  }
  if ((__this->fields)._currentPreset == (Settings_HumanCustomSet_o *)0x0) {
    return;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields)._backupValues;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
  goto LAB_0406116c;
  System_Collections_Generic_Dictionary<object__object>__Clear(__this_00,MethodInfo_Void_Clear);
  __this_01 = (__this->fields)._backupFloatValues;
  if (__this_01 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto LAB_0406116c;
  System_Collections_Generic_Dictionary<object__float>__Clear
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,MethodInfo_Void_Clear);
  *(undefined1 *)&(__this->fields)._hasBackup = 0;
  bVar10 = UI_CharacterEditorCostumePanel__GetPersistentCustomPreview((MethodInfo *)0x0);
  if ((char)bVar10 == '\0') goto LAB_040610ef;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
    pUVar13 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar13 != (UnityEngine_MonoBehaviour_o *)0x0) goto LAB_04060e92;
LAB_04060eb2:
    __this_04 = (UnityEngine_MonoBehaviour_o *)0x0;
    iVar4 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar13 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar13 == (UnityEngine_MonoBehaviour_o *)0x0) goto LAB_04060eb2;
LAB_04060e92:
    bVar1 = (TypeInfo_CharacterEditorHumanMenu->_2).naturalAligment;
    if ((pUVar13->klass->_2).naturalAligment < bVar1) goto LAB_04060eb2;
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
  if ((char)bVar10 == '\0') goto LAB_040610ef;
  plVar5 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (plVar5 == (long *)0x0) goto LAB_0406116c;
  if ((*(byte *)(*plVar5 + 0x130) < *(byte *)(TypeInfo_CharacterEditorGameManager + 0x130)) ||
     (*(long *)(*(long *)(*plVar5 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CharacterEditorGameManager + 0x130) * 8) !=
      TypeInfo_CharacterEditorGameManager)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume();
  }
  pIVar6 = (Il2CppClass *)plVar5[7];
  if (pIVar6 == (Il2CppClass *)0x0) {
LAB_04060f5b:
    x = (Il2CppClass *)0x0;
    iVar4 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar7 = (pIVar6->_1).image;
    bVar1 = (TypeInfo_DummyHuman->_2).naturalAligment;
    if ((pUVar7->_2).naturalAligment < bVar1) goto LAB_04060f5b;
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
        if (DAT_0570447c == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_LoadSkinAndRestoreSettingsCoroutine_d__28);
          DAT_0570447c = '\x01';
        }
        __this_03 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkinAndRestoreSettingsCoroutine_d__28);
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
            goto LAB_040610ef;
          }
        }
      }
    }
LAB_0406116c:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_040610ef:
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.PresetSkinEditPopup$$LoadSkinAndRestoreSettings
// il2cpp: void UI_PresetSkinEditPopup__LoadSkinAndRestoreSettings (UI_PresetSkinEditPopup_o* __this, Characters_DummyHuman_o* character, bool originalGlobal, bool originalCustom, const MethodInfo* method);
// 0x4061a40

void UI_PresetSkinEditPopup__LoadSkinAndRestoreSettings
               (UI_PresetSkinEditPopup_o *__this,Characters_DummyHuman_o *character,
               bool_conflict originalGlobal,bool_conflict originalCustom,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_0570447c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LoadSkinAndRestoreSettingsCoroutine_d__28);
    DAT_0570447c = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkinAndRestoreSettingsCoroutine_d__28);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)character;
    il2cpp_runtime_glue(__this_00 + 2,character);
    *(char *)&__this_00[2].monitor = (char)originalGlobal;
    *(char *)((long)&__this_00[2].monitor + 1) = (char)originalCustom;
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.PresetSkinEditPopup$$LoadSkinAndRestoreSettingsCoroutine
// il2cpp: System_Collections_IEnumerator_o* UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine (UI_PresetSkinEditPopup_o* __this, Characters_DummyHuman_o* character, bool originalGlobal, bool originalCustom, const MethodInfo* method);
// 0x40619b0

System_Collections_IEnumerator_o *
UI_PresetSkinEditPopup__LoadSkinAndRestoreSettingsCoroutine
          (UI_PresetSkinEditPopup_o *__this,Characters_DummyHuman_o *character,
          bool_conflict originalGlobal,bool_conflict originalCustom,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_0570447c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LoadSkinAndRestoreSettingsCoroutine_d__28);
    DAT_0570447c = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkinAndRestoreSettingsCoroutine_d__28);
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


// UI.PresetSkinEditPopup$$Show
// il2cpp: void UI_PresetSkinEditPopup__Show (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x4061af0

void UI_PresetSkinEditPopup__Show(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_SetSettingsContainer_T__o *__this_00;
  Il2CppClass *pIVar3;
  Settings_HumanCustomSet_o *method_00;
  Settings_HumanCustomSet_o **ppSVar4;
  
  if (DAT_0570447d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_0570447d = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar2 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    method_00 = (Settings_HumanCustomSet_o *)
                Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    pIVar3 = TypeInfo_HumanCustomSet;
    if (method_00 == (Settings_HumanCustomSet_o *)0x0) {
      (__this->fields)._currentPreset = (Settings_HumanCustomSet_o *)0x0;
    }
    else {
      bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
      if (((((Settings_BaseSetSetting_c *)method_00->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_BaseSetSetting_c *)method_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          TypeInfo_HumanCustomSet)) {
LAB_04061bff:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(method_00);
      }
      (__this->fields)._currentPreset = method_00;
      if (((((Settings_BaseSetSetting_c *)method_00->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_BaseSetSetting_c *)method_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          pIVar3)) goto LAB_04061bff;
    }
    ppSVar4 = &(__this->fields)._currentPreset;
    il2cpp_runtime_glue(ppSVar4);
    if ((*ppSVar4 != (Settings_HumanCustomSet_o *)0x0) &&
       ((char)(__this->fields)._hasBackup == '\0')) {
      UI_PresetSkinEditPopup__CreateBackup(__this,(MethodInfo *)method_00);
    }
  }
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.PresetSkinEditPopup$$OnDisable
// il2cpp: void UI_PresetSkinEditPopup__OnDisable (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x4061c10

void UI_PresetSkinEditPopup__OnDisable(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  if ((char)(__this->fields)._hasBackup != '\0') {
    UI_PresetSkinEditPopup__RestoreBackup(__this,method);
  }
  UI_BasePopup__OnDisable((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.PresetSkinEditPopup$$HideImmediate
// il2cpp: void UI_PresetSkinEditPopup__HideImmediate (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x4061c30

void UI_PresetSkinEditPopup__HideImmediate(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  if ((char)(__this->fields)._hasBackup != '\0') {
    UI_PresetSkinEditPopup__RestoreBackup(__this,method);
  }
  UI_BasePopup__HideImmediate((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.PresetSkinEditPopup$$.ctor
// il2cpp: void UI_PresetSkinEditPopup___ctor (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x4061c50

void UI_PresetSkinEditPopup___ctor(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  
  if (DAT_0570447e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Single);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__float);
    DAT_0570447e = '\x01';
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


// UI.PresetSkinEditPopup$$<Setup>b__20_0
// il2cpp: void UI_PresetSkinEditPopup___Setup_b__20_0 (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x4061d20

void UI_PresetSkinEditPopup__<Setup>b__20_0(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570447f == '\0') {
    il2cpp_init_method_metadata(&"Clear");
    DAT_0570447f = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_PresetSkinEditPopup__OnButtonClick(__this,"Clear",in_RDX);
  return;
}


// UI.PresetSkinEditPopup$$<Setup>b__20_1
// il2cpp: void UI_PresetSkinEditPopup___Setup_b__20_1 (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x4061d60

void UI_PresetSkinEditPopup__<Setup>b__20_1(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704480 == '\0') {
    il2cpp_init_method_metadata(&"Save");
    DAT_05704480 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_PresetSkinEditPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.PresetSkinEditPopup$$<Setup>b__20_2
// il2cpp: void UI_PresetSkinEditPopup___Setup_b__20_2 (UI_PresetSkinEditPopup_o* __this, const MethodInfo* method);
// 0x4061da0

void UI_PresetSkinEditPopup__<Setup>b__20_2(UI_PresetSkinEditPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704481 == '\0') {
    il2cpp_init_method_metadata(&"Cancel");
    DAT_05704481 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_PresetSkinEditPopup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


