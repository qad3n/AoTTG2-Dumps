// Type: UI.GlobalSkinEditPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/GlobalSkinEditPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$.ctor
// il2cpp: void UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27___ctor (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5ce13f0

void UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27___ctor
               (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$System.IDisposable.Dispose
// il2cpp: void UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__System_IDisposable_Dispose (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o* __this, const MethodInfo* method);
// 0x5ce2040

void UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__System_IDisposable_Dispose
               (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *__this,MethodInfo *method)

{
  return;
}


// UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$MoveNext
// il2cpp: bool UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__MoveNext (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o* __this, const MethodInfo* method);
// 0x5ce2050

bool UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__MoveNext
               (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_CustomSkinSettings_o *pSVar2;
  Settings_HumanCustomSkinSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Characters_DummyHuman_o *__this_00;
  UnityEngine_WaitForSeconds_o *pUVar5;
  
  if (Il2CppMethodInitialized_07547bf7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_07547bf7 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      __this_00 = (__this->fields).character;
      if (__this_00 == (Characters_DummyHuman_o *)0x0) goto label_05ce21d5;
      Characters_DummyHuman__LoadSkin(__this_00,(MethodInfo *)0x0);
      pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(pUVar5,0.1,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)pUVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 2;
    }
    else {
      if (iVar1 != 0) {
        return false;
      }
      (__this->fields).__1__state = -1;
      pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(pUVar5,0.1,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)pUVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
    }
    return true;
  }
  (__this->fields).__1__state = -1;
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  if (((pSVar2 != (Settings_CustomSkinSettings_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).Human, pSVar3 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
     (pSVar4 = (pSVar3->fields).GlobalSkinOverridesEnabled, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
    Settings_TypedSetting_bool___set_Value
              ((Settings_TypedSetting_bool__o *)pSVar4,(__this->fields).originalGlobal,
               (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if (((pSVar2 != (Settings_CustomSkinSettings_o *)0x0) &&
        (pSVar3 = (pSVar2->fields).Human, pSVar3 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
       (pSVar4 = (pSVar3->fields).SetSpecificSkinsEnabled, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)pSVar4,(__this->fields).originalCustom,
                 (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      return false;
    }
  }
label_05ce21d5:
  ThrowNullReferenceException();
}


// UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o* __this, const MethodInfo* method);
// 0x5ce21e0

Il2CppObject *
UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__System_Collections_IEnumerator_Reset (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o* __this, const MethodInfo* method);
// 0x5ce21f0

void UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__System_Collections_IEnumerator_Reset
               (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_UI_GlobalSkinEditPopup_LoadSkinAndRestoreSettings_d__27_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__System_Collections_IEnumerator_get_Current (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o* __this, const MethodInfo* method);
// 0x5ce2230

Il2CppObject *
UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__System_Collections_IEnumerator_get_Current
          (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.GlobalSkinEditPopup$$get_Title
// il2cpp: System_String_o* UI_GlobalSkinEditPopup__get_Title (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5cdf210

System_String_o * UI_GlobalSkinEditPopup__get_Title(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  Settings_CustomSkinSettings_o *pSVar1;
  Settings_HumanCustomSkinSettings_o *__this_00;
  Settings_StringSetting_o *pSVar2;
  System_String_o *pSVar3;
  Settings_BaseSetSetting_o *pSVar4;
  System_String_o *str2;
  
  if (Il2CppMethodInitialized_07547bea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&": ");
    il2cpp_codegen_initialize_runtime_metadata(&"EditGlobal");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins.Human");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547bea = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar3 = UI_UIManager__GetLocale
                     ("SettingsPopup","Skins.Human","EditGlobal","",
                      "",(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  if ((pSVar1 == (Settings_CustomSkinSettings_o *)0x0) ||
     (__this_00 = (pSVar1->fields).Human, __this_00 == (Settings_HumanCustomSkinSettings_o *)0x0)) {
label_05cdf338:
    ThrowNullReferenceException();
  }
  pSVar4 = Settings_SetSettingsContainer_object___GetSelectedSet
                     ((Settings_SetSettingsContainer_T__o *)__this_00,
                      (MethodInfo_40477A0 *)
                      MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSelectedSet);
  if (pSVar4 == (Settings_BaseSetSetting_o *)0x0) {
    str2 = (System_String_o *)0x0;
  }
  else {
    pSVar2 = (pSVar4->fields).Name;
    if (pSVar2 == (Settings_StringSetting_o *)0x0) goto label_05cdf338;
    str2 = (pSVar2->fields)._value;
  }
  pSVar3 = System_String__Concat_5301f10(pSVar3,": ",str2,(MethodInfo *)0x0);
  return pSVar3;
}


// UI.GlobalSkinEditPopup$$get_Width
// il2cpp: float UI_GlobalSkinEditPopup__get_Width (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5cdf340

float UI_GlobalSkinEditPopup__get_Width(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  return 1100.0;
}


// UI.GlobalSkinEditPopup$$get_Height
// il2cpp: float UI_GlobalSkinEditPopup__get_Height (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5cdf350

float UI_GlobalSkinEditPopup__get_Height(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  return 700.0;
}


// UI.GlobalSkinEditPopup$$get_VerticalSpacing
// il2cpp: float UI_GlobalSkinEditPopup__get_VerticalSpacing (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5cdf360

float UI_GlobalSkinEditPopup__get_VerticalSpacing(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  return 15.0;
}


// UI.GlobalSkinEditPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_GlobalSkinEditPopup__get_HorizontalPadding (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5cdf370

int32_t UI_GlobalSkinEditPopup__get_HorizontalPadding(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.GlobalSkinEditPopup$$get_VerticalPadding
// il2cpp: int32_t UI_GlobalSkinEditPopup__get_VerticalPadding (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5cdf380

int32_t UI_GlobalSkinEditPopup__get_VerticalPadding(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.GlobalSkinEditPopup$$get_DoublePanel
// il2cpp: bool UI_GlobalSkinEditPopup__get_DoublePanel (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5cdf390

bool UI_GlobalSkinEditPopup__get_DoublePanel(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  return true;
}


// UI.GlobalSkinEditPopup$$get_ScrollBar
// il2cpp: bool UI_GlobalSkinEditPopup__get_ScrollBar (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5cdf3a0

bool UI_GlobalSkinEditPopup__get_ScrollBar(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  return true;
}


// UI.GlobalSkinEditPopup$$Setup
// il2cpp: void UI_GlobalSkinEditPopup__Setup (UI_GlobalSkinEditPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5cdf3b0

void UI_GlobalSkinEditPopup__Setup(UI_GlobalSkinEditPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  Settings_HumanCustomSkinSet_o **targetAddress;
  byte bVar1;
  Settings_CustomSkinSettings_o *pSVar2;
  Settings_HumanCustomSkinSettings_o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  Settings_StringSetting_o *pSVar4;
  Settings_FloatSetting_o *pSVar5;
  int32_t fontSize;
  System_String_o *pSVar6;
  UI_ElementStyle_o *__this_01;
  UI_ElementStyle_o *__this_02;
  Settings_HumanCustomSkinSet_o *pSVar7;
  UnityEngine_Events_UnityAction_o *pUVar8;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (Il2CppMethodInitialized_07547beb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_GlobalSkinEditPopup_Setup_b__20_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_GlobalSkinEditPopup_Setup_b__20_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_GlobalSkinEditPopup_Setup_b__20_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSkinSet);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"WeaponTrail");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Horse");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Logo");
    il2cpp_codegen_initialize_runtime_metadata(&"Costume");
    il2cpp_codegen_initialize_runtime_metadata(&"Hoodie");
    il2cpp_codegen_initialize_runtime_metadata(&"GearR");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins.Human");
    il2cpp_codegen_initialize_runtime_metadata(&"HookR");
    il2cpp_codegen_initialize_runtime_metadata(&"Gas");
    il2cpp_codegen_initialize_runtime_metadata(&"Face");
    il2cpp_codegen_initialize_runtime_metadata(&"Head");
    il2cpp_codegen_initialize_runtime_metadata(&"Glass");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"HookL");
    il2cpp_codegen_initialize_runtime_metadata(&"HookRTiling");
    il2cpp_codegen_initialize_runtime_metadata(&"HookLTiling");
    il2cpp_codegen_initialize_runtime_metadata(&"ThunderspearL");
    il2cpp_codegen_initialize_runtime_metadata(&"Apply");
    il2cpp_codegen_initialize_runtime_metadata(&"Cloak");
    il2cpp_codegen_initialize_runtime_metadata(&"Eye");
    il2cpp_codegen_initialize_runtime_metadata(&"ThunderspearR");
    il2cpp_codegen_initialize_runtime_metadata(&"GearL");
    il2cpp_codegen_initialize_runtime_metadata(&"Hair");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Skin");
    il2cpp_codegen_initialize_runtime_metadata(&"Hat");
    Il2CppMethodInitialized_07547beb = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar6 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,200.0,20.0,pSVar6,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar6 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_02,fontSize,120.0,20.0,pSVar6,(MethodInfo *)0x0);
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  if ((pSVar2 != (Settings_CustomSkinSettings_o *)0x0) &&
     (__this_00 = (pSVar2->fields).Human, __this_00 != (Settings_HumanCustomSkinSettings_o *)0x0)) {
    pSVar7 = (Settings_HumanCustomSkinSet_o *)
             Settings_SetSettingsContainer_object___GetSelectedSet
                       ((Settings_SetSettingsContainer_T__o *)__this_00,
                        (MethodInfo_40477A0 *)
                        MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSelectedSet);
    if (pSVar7 != (Settings_HumanCustomSkinSet_o *)0x0) {
      bVar1 = (TypeInfo_Settings_HumanCustomSkinSet->_2).typeHierarchyDepth;
      if (((((Settings_BaseSetSetting_c *)pSVar7->klass)->_2).typeHierarchyDepth < bVar1) ||
         ((((Settings_BaseSetSetting_c *)pSVar7->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_HumanCustomSkinSet)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar7);
      }
    }
    targetAddress = &(__this->fields)._currentGlobalSet;
    (__this->fields)._currentGlobalSet = pSVar7;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pSVar7 = (__this->fields)._currentGlobalSet;
    if (pSVar7 != (Settings_HumanCustomSkinSet_o *)0x0) {
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = (pSVar7->fields).Hair;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar6 = UI_UIManager__GetLocale
                         ("SettingsPopup","Skins.Human","Hair",
                          "","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,"",300.0,40.0,
                 false,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                 in_stack_ffffffffffffffb8);
      pSVar7 = *targetAddress;
      if (pSVar7 != (Settings_HumanCustomSkinSet_o *)0x0) {
        pUVar3 = (__this->fields).DoublePanelLeft;
        pSVar4 = (pSVar7->fields).Eye;
        pSVar6 = UI_UIManager__GetLocale
                           ("SettingsPopup","Skins.Human","Eye",
                            "","",(MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,"",300.0,40.0,
                   false,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                   in_stack_ffffffffffffffb8);
        pSVar7 = (__this->fields)._currentGlobalSet;
        if (pSVar7 != (Settings_HumanCustomSkinSet_o *)0x0) {
          pUVar3 = (__this->fields).DoublePanelLeft;
          pSVar4 = (pSVar7->fields).Glass;
          pSVar6 = UI_UIManager__GetLocale
                             ("SettingsPopup","Skins.Human","Glass",
                              "","",(MethodInfo *)0x0);
          UI_ElementFactory__CreateInputSetting
                    (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,"",300.0,40.0
                     ,false,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                     (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                     in_stack_ffffffffffffffb8);
          pSVar7 = (__this->fields)._currentGlobalSet;
          if (pSVar7 != (Settings_HumanCustomSkinSet_o *)0x0) {
            pUVar3 = (__this->fields).DoublePanelLeft;
            pSVar4 = (pSVar7->fields).Face;
            pSVar6 = UI_UIManager__GetLocale
                               ("SettingsPopup","Skins.Human","Face",
                                "","",(MethodInfo *)0x0);
            UI_ElementFactory__CreateInputSetting
                      (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,"",300.0,
                       40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                       (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                       (System_Func_string__string__o *)0x0,in_stack_ffffffffffffffb8);
            pSVar7 = (__this->fields)._currentGlobalSet;
            if (pSVar7 != (Settings_HumanCustomSkinSet_o *)0x0) {
              pUVar3 = (__this->fields).DoublePanelLeft;
              pSVar4 = (pSVar7->fields).Skin;
              pSVar6 = UI_UIManager__GetLocale
                                 ("SettingsPopup","Skins.Human","Skin",
                                  "","",(MethodInfo *)0x0);
              UI_ElementFactory__CreateInputSetting
                        (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,"",300.0,
                         40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                         (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                         (System_Func_string__string__o *)0x0,in_stack_ffffffffffffffb8);
              pSVar7 = (__this->fields)._currentGlobalSet;
              if (pSVar7 != (Settings_HumanCustomSkinSet_o *)0x0) {
                pUVar3 = (__this->fields).DoublePanelLeft;
                pSVar4 = (pSVar7->fields).Costume;
                pSVar6 = UI_UIManager__GetLocale
                                   ("SettingsPopup","Skins.Human","Costume",
                                    "","",(MethodInfo *)0x0);
                UI_ElementFactory__CreateInputSetting
                          (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,"",
                           300.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                           (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                           (System_Func_string__string__o *)0x0,in_stack_ffffffffffffffb8);
                pSVar7 = (__this->fields)._currentGlobalSet;
                if (pSVar7 != (Settings_HumanCustomSkinSet_o *)0x0) {
                  pUVar3 = (__this->fields).DoublePanelLeft;
                  pSVar4 = (pSVar7->fields).Logo;
                  pSVar6 = UI_UIManager__GetLocale
                                     ("SettingsPopup","Skins.Human","Logo",
                                      "","",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateInputSetting
                            (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,"",
                             300.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                             (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                             (System_Func_string__string__o *)0x0,in_stack_ffffffffffffffb8);
                  pSVar7 = (__this->fields)._currentGlobalSet;
                  if (pSVar7 != (Settings_HumanCustomSkinSet_o *)0x0) {
                    pUVar3 = (__this->fields).DoublePanelLeft;
                    pSVar4 = (pSVar7->fields).GearL;
                    pSVar6 = UI_UIManager__GetLocale
                                       ("SettingsPopup","Skins.Human","GearL",
                                        "","",(MethodInfo *)0x0);
                    UI_ElementFactory__CreateInputSetting
                              (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,"",
                               300.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                               (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                               (System_Func_string__string__o *)0x0,in_stack_ffffffffffffffb8);
                    pSVar7 = (__this->fields)._currentGlobalSet;
                    if (pSVar7 != (Settings_HumanCustomSkinSet_o *)0x0) {
                      pUVar3 = (__this->fields).DoublePanelLeft;
                      pSVar4 = (pSVar7->fields).GearR;
                      pSVar6 = UI_UIManager__GetLocale
                                         ("SettingsPopup","Skins.Human","GearR",
                                          "","",(MethodInfo *)0x0);
                      UI_ElementFactory__CreateInputSetting
                                (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,
                                 "",300.0,40.0,false,
                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                                 (System_Func_string__string__o *)0x0,in_stack_ffffffffffffffb8);
                      pSVar7 = (__this->fields)._currentGlobalSet;
                      if (pSVar7 != (Settings_HumanCustomSkinSet_o *)0x0) {
                        pUVar3 = (__this->fields).DoublePanelLeft;
                        pSVar4 = (pSVar7->fields).Gas;
                        pSVar6 = UI_UIManager__GetLocale
                                           ("SettingsPopup","Skins.Human","Gas",
                                            "","",(MethodInfo *)0x0);
                        UI_ElementFactory__CreateInputSetting
                                  (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,
                                   "",300.0,40.0,false,
                                   (UnityEngine_Events_UnityAction_o *)0x0,
                                   (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                                   (System_Func_string__string__o *)0x0,in_stack_ffffffffffffffb8);
                        pSVar7 = (__this->fields)._currentGlobalSet;
                        if (pSVar7 != (Settings_HumanCustomSkinSet_o *)0x0) {
                          pUVar3 = (__this->fields).DoublePanelLeft;
                          pSVar4 = (pSVar7->fields).Hoodie;
                          pSVar6 = UI_UIManager__GetLocale
                                             ("SettingsPopup","Skins.Human",
                                              "Hoodie","",
                                              "",(MethodInfo *)0x0);
                          UI_ElementFactory__CreateInputSetting
                                    (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,
                                     "",300.0,40.0,false,
                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                     (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
                                     in_stack_ffffffffffffffb8);
                          pSVar7 = (__this->fields)._currentGlobalSet;
                          if (pSVar7 != (Settings_HumanCustomSkinSet_o *)0x0) {
                            pUVar3 = (__this->fields).DoublePanelLeft;
                            pSVar4 = (pSVar7->fields).Cloak;
                            pSVar6 = UI_UIManager__GetLocale
                                               ("SettingsPopup","Skins.Human",
                                                "Cloak","",
                                                "",(MethodInfo *)0x0);
                            UI_ElementFactory__CreateInputSetting
                                      (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,
                                       "",300.0,40.0,false,
                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                       (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0
                                       ,in_stack_ffffffffffffffb8);
                            pSVar7 = (__this->fields)._currentGlobalSet;
                            if (pSVar7 != (Settings_HumanCustomSkinSet_o *)0x0) {
                              pUVar3 = (__this->fields).DoublePanelRight;
                              pSVar4 = (pSVar7->fields).WeaponTrail;
                              pSVar6 = UI_UIManager__GetLocale
                                                 ("SettingsPopup","Skins.Human",
                                                  "WeaponTrail","",
                                                  "",(MethodInfo *)0x0);
                              UI_ElementFactory__CreateInputSetting
                                        (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,
                                         "",300.0,40.0,false,
                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                         (System_Func_string__bool__o *)0x0,
                                         (System_Func_string__string__o *)0x0,in_stack_ffffffffffffffb8);
                              pSVar7 = (__this->fields)._currentGlobalSet;
                              if (pSVar7 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                pUVar3 = (__this->fields).DoublePanelRight;
                                pSVar4 = (pSVar7->fields).Horse;
                                pSVar6 = UI_UIManager__GetLocale
                                                   ("SettingsPopup","Skins.Human",
                                                    "Horse","",
                                                    "",(MethodInfo *)0x0);
                                UI_ElementFactory__CreateInputSetting
                                          (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,
                                           "",300.0,40.0,false,
                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                           (System_Func_string__bool__o *)0x0,
                                           (System_Func_string__string__o *)0x0,in_stack_ffffffffffffffb8);
                                pSVar7 = (__this->fields)._currentGlobalSet;
                                if (pSVar7 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                  pUVar3 = (__this->fields).DoublePanelRight;
                                  pSVar4 = (pSVar7->fields).ThunderspearL;
                                  pSVar6 = UI_UIManager__GetLocale
                                                     ("SettingsPopup","Skins.Human",
                                                      "ThunderspearL","",
                                                      "",(MethodInfo *)0x0);
                                  UI_ElementFactory__CreateInputSetting
                                            (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,
                                             "",300.0,40.0,false,
                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                             (System_Func_string__bool__o *)0x0,
                                             (System_Func_string__string__o *)0x0,in_stack_ffffffffffffffb8);
                                  pSVar7 = (__this->fields)._currentGlobalSet;
                                  if (pSVar7 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                    pUVar3 = (__this->fields).DoublePanelRight;
                                    pSVar4 = (pSVar7->fields).ThunderspearR;
                                    pSVar6 = UI_UIManager__GetLocale
                                                       ("SettingsPopup","Skins.Human",
                                                        "ThunderspearR","",
                                                        "",(MethodInfo *)0x0);
                                    UI_ElementFactory__CreateInputSetting
                                              (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,
                                               "",300.0,40.0,false,
                                               (UnityEngine_Events_UnityAction_o *)0x0,
                                               (UnityEngine_Events_UnityAction_o *)0x0,
                                               (System_Func_string__bool__o *)0x0,
                                               (System_Func_string__string__o *)0x0,in_stack_ffffffffffffffb8)
                                    ;
                                    pSVar7 = (__this->fields)._currentGlobalSet;
                                    if (pSVar7 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                      pUVar3 = (__this->fields).DoublePanelRight;
                                      pSVar4 = (pSVar7->fields).HookL;
                                      pSVar6 = UI_UIManager__GetLocale
                                                         ("SettingsPopup","Skins.Human",
                                                          "HookL","",
                                                          "",(MethodInfo *)0x0);
                                      UI_ElementFactory__CreateInputSetting
                                                (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,
                                                 "",300.0,40.0,false,
                                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                                 (System_Func_string__bool__o *)0x0,
                                                 (System_Func_string__string__o *)0x0,
                                                 in_stack_ffffffffffffffb8);
                                      pSVar7 = (__this->fields)._currentGlobalSet;
                                      if (pSVar7 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                        pUVar3 = (__this->fields).DoublePanelRight;
                                        pSVar5 = (pSVar7->fields).HookLTiling;
                                        pSVar6 = UI_UIManager__GetLocale
                                                           ("SettingsPopup","Skins.Human",
                                                            "HookLTiling","",
                                                            "",(MethodInfo *)0x0);
                                        UI_ElementFactory__CreateInputSetting
                                                  (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar5,pSVar6,
                                                   "",300.0,40.0,false,
                                                   (UnityEngine_Events_UnityAction_o *)0x0,
                                                   (UnityEngine_Events_UnityAction_o *)0x0,
                                                   (System_Func_string__bool__o *)0x0,
                                                   (System_Func_string__string__o *)0x0,
                                                   in_stack_ffffffffffffffb8);
                                        pSVar7 = (__this->fields)._currentGlobalSet;
                                        if (pSVar7 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                          pUVar3 = (__this->fields).DoublePanelRight;
                                          pSVar4 = (pSVar7->fields).HookR;
                                          pSVar6 = UI_UIManager__GetLocale
                                                             ("SettingsPopup","Skins.Human",
                                                              "HookR","",
                                                              "",(MethodInfo *)0x0);
                                          UI_ElementFactory__CreateInputSetting
                                                    (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,
                                                     "",300.0,40.0,false,
                                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                                     (UnityEngine_Events_UnityAction_o *)0x0,
                                                     (System_Func_string__bool__o *)0x0,
                                                     (System_Func_string__string__o *)0x0,
                                                     in_stack_ffffffffffffffb8);
                                          pSVar7 = (__this->fields)._currentGlobalSet;
                                          if (pSVar7 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                            pUVar3 = (__this->fields).DoublePanelRight;
                                            pSVar5 = (pSVar7->fields).HookRTiling;
                                            pSVar6 = UI_UIManager__GetLocale
                                                               ("SettingsPopup","Skins.Human",
                                                                "HookRTiling","",
                                                                "",(MethodInfo *)0x0);
                                            UI_ElementFactory__CreateInputSetting
                                                      (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar5,
                                                       pSVar6,"",300.0,40.0,false,
                                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                                       (UnityEngine_Events_UnityAction_o *)0x0,
                                                       (System_Func_string__bool__o *)0x0,
                                                       (System_Func_string__string__o *)0x0,
                                                       in_stack_ffffffffffffffb8);
                                            pSVar7 = (__this->fields)._currentGlobalSet;
                                            if (pSVar7 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                              pUVar3 = (__this->fields).DoublePanelRight;
                                              pSVar4 = (pSVar7->fields).Hat;
                                              pSVar6 = UI_UIManager__GetLocale
                                                                 ("SettingsPopup","Skins.Human",
                                                                  "Hat","",
                                                                  "",(MethodInfo *)0x0);
                                              UI_ElementFactory__CreateInputSetting
                                                        (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,
                                                         pSVar6,"",300.0,40.0,false,
                                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                                         (UnityEngine_Events_UnityAction_o *)0x0,
                                                         (System_Func_string__bool__o *)0x0,
                                                         (System_Func_string__string__o *)0x0,
                                                         in_stack_ffffffffffffffb8);
                                              pSVar7 = (__this->fields)._currentGlobalSet;
                                              if (pSVar7 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                                pUVar3 = (__this->fields).DoublePanelRight;
                                                pSVar4 = (pSVar7->fields).Head;
                                                pSVar6 = UI_UIManager__GetLocale
                                                                   ("SettingsPopup",
                                                                    "Skins.Human",
                                                                    "Head",
                                                                    "",
                                                                    "",(MethodInfo *)0x0);
                                                UI_ElementFactory__CreateInputSetting
                                                          (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,
                                                           pSVar6,"",300.0,40.0,false,
                                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                                           (UnityEngine_Events_UnityAction_o *)0x0,
                                                           (System_Func_string__bool__o *)0x0,
                                                           (System_Func_string__string__o *)0x0,
                                                           in_stack_ffffffffffffffb8);
                                                pSVar7 = (__this->fields)._currentGlobalSet;
                                                if (pSVar7 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                                  pUVar3 = (__this->fields).DoublePanelRight;
                                                  pSVar4 = (pSVar7->fields).Back;
                                                  pSVar6 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "Skins.Human",
                                                                      "Back",
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  method_00 = (MethodInfo *)"";
                                                  UI_ElementFactory__CreateInputSetting
                                                            (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4
                                                             ,pSVar6,"",300.0,40.0,false,
                                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                                             (System_Func_string__bool__o *)0x0,
                                                             (System_Func_string__string__o *)0x0,
                                                             in_stack_ffffffffffffffb8);
                                                  pUVar3 = (__this->fields).BottomBar;
                                                  pSVar6 = UI_UIManager__GetLocaleCommon
                                                                     ("Clear",(MethodInfo *)0x0)
                                                  ;
                                                  pUVar8 = il2cpp_codegen_object_new
                                                                     ((Il2CppClass *)
                                                                      TypeInfo_UnityEngine_Events_UnityAction)
                                                  ;
                                                  UnityEngine_Events_UnityAction___ctor
                                                            (pUVar8,(Il2CppObject *)__this,
                                                             (intptr_t)
                                                             MethodInfo_UI_GlobalSkinEditPopup_Setup_b__20_0,
                                                             (MethodInfo *)0x0);
                                                  UI_ElementFactory__CreateTextButton
                                                            (pUVar3,__this_02,pSVar6,0.0,pUVar8,method_00);
                                                  pUVar3 = (__this->fields).BottomBar;
                                                  pSVar6 = UI_UIManager__GetLocaleCommon
                                                                     ("Apply",(MethodInfo *)0x0)
                                                  ;
                                                  pUVar8 = il2cpp_codegen_object_new
                                                                     ((Il2CppClass *)
                                                                      TypeInfo_UnityEngine_Events_UnityAction)
                                                  ;
                                                  UnityEngine_Events_UnityAction___ctor
                                                            (pUVar8,(Il2CppObject *)__this,
                                                             (intptr_t)
                                                             MethodInfo_UI_GlobalSkinEditPopup_Setup_b__20_1,
                                                             (MethodInfo *)0x0);
                                                  UI_ElementFactory__CreateTextButton
                                                            (pUVar3,__this_02,pSVar6,0.0,pUVar8,method_00);
                                                  pUVar3 = (__this->fields).BottomBar;
                                                  pSVar6 = UI_UIManager__GetLocaleCommon
                                                                     ("Cancel",(MethodInfo *)0x0)
                                                  ;
                                                  pUVar8 = il2cpp_codegen_object_new
                                                                     ((Il2CppClass *)
                                                                      TypeInfo_UnityEngine_Events_UnityAction)
                                                  ;
                                                  UnityEngine_Events_UnityAction___ctor
                                                            (pUVar8,(Il2CppObject *)__this,
                                                             (intptr_t)
                                                             MethodInfo_UI_GlobalSkinEditPopup_Setup_b__20_2,
                                                             (MethodInfo *)0x0);
                                                  UI_ElementFactory__CreateTextButton
                                                            (pUVar3,__this_02,pSVar6,0.0,pUVar8,method_00);
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
  }
  ThrowNullReferenceException();
}


// UI.GlobalSkinEditPopup$$OnButtonClick
// il2cpp: void UI_GlobalSkinEditPopup__OnButtonClick (UI_GlobalSkinEditPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5ce03a0

void UI_GlobalSkinEditPopup__OnButtonClick
               (UI_GlobalSkinEditPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *pMVar2;
  
  if (Il2CppMethodInitialized_07547bec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_07547bec = '\x01';
  }
  pMVar2 = (MethodInfo *)"Save";
  bVar1 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if (bVar1) {
    UI_GlobalSkinEditPopup__OnSaveClick(__this,pMVar2);
    return;
  }
  pMVar2 = (MethodInfo *)"Cancel";
  bVar1 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if (bVar1) {
    if ((__this->fields)._hasBackup != false) {
      UI_GlobalSkinEditPopup__RestoreBackup(__this,pMVar2);
    }
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  pMVar2 = (MethodInfo *)"Clear";
  bVar1 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
  if (bVar1) {
    UI_GlobalSkinEditPopup__OnClearClick(__this,pMVar2);
    return;
  }
  return;
}


// UI.GlobalSkinEditPopup$$CreateBackup
// il2cpp: void UI_GlobalSkinEditPopup__CreateBackup (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce0b60
// eh: try 0x5ce0d44..0x5ce0ed5 -> pad 0x5ce0ee9 (+11 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ce0f01..0x5ce0f06 -> pad 0x5ce0f2b cleanup
// eh: try 0x5ce0f2e..0x5ce0f38 -> pad 0x5ce0f40 catch (...) [compiler noexcept guard]
// asm: 34 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ce0d3c: nop dword ptr [rax]
// asm:   0x5ce0ed5: jmp 0x5ce0ee9
// asm:   0x5ce0ed7: jmp 0x5ce0ee9
// asm:   0x5ce0ed9: jmp 0x5ce0ee9
// asm:   0x5ce0edb: jmp 0x5ce0ee9
// asm:   0x5ce0edd: jmp 0x5ce0ee9
// asm:   0x5ce0edf: jmp 0x5ce0ee9
// asm:   0x5ce0ee1: jmp 0x5ce0ee9
// asm:   0x5ce0ee3: jmp 0x5ce0ee9
// asm:   0x5ce0ee5: jmp 0x5ce0ee9
// asm:   0x5ce0ee7: jmp 0x5ce0ee9
// asm:   0x5ce0ee9: mov rbx, rax
// asm:   0x5ce0eec: cmp edx, 1
// asm:   0x5ce0eef: jne 0x5ce0f2e
// asm:   0x5ce0ef1: mov rdi, rbx
// asm:   0x5ce0ef4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ce0ef9: mov rbx, qword ptr [rax]
// asm:   0x5ce0efc: mov qword ptr [rsp + 0x40], rbx
// asm:   0x5ce0f01: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ce0f06: lea rax, [rip + 0x15aef0b]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose
// asm:   0x5ce0f0d: mov rsi, qword ptr [rax]
// asm:   0x5ce0f10: lea rdi, [rsp + 0x10]
// asm:   0x5ce0f15: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x5ce0f1a: test rbx, rbx
// asm:   0x5ce0f1d: je 0x5ce0e91
// asm:   0x5ce0f23: mov rdi, rbx
// asm:   0x5ce0f26: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ce0f2b: mov rbx, rax
// asm:   0x5ce0f2e: lea rdi, [rsp + 0x40]
// asm:   0x5ce0f33: call 0x2fdb5c0  ; il2cpp_runtime_helper_02fdb5c0()
// asm:   0x5ce0f38: mov rdi, rbx
// asm:   0x5ce0f3b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ce0f40: mov rdi, rax
// asm:   0x5ce0f43: call 0x2ab61e0  ; __clang_call_terminate()

void UI_GlobalSkinEditPopup__CreateBackup(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_string__float__o *pSVar3;
  Settings_HumanCustomSkinSet_o *pSVar4;
  Il2CppObject *a;
  Il2CppObject *setting;
  bool bVar5;
  int32_t iVar6;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o local_88;
  undefined1 local_58 [16];
  System_String_o *local_48;
  Settings_BaseSetting_o *pSStack_40;
  int32_t local_38;
  undefined4 uStack_34;
  
  if (Il2CppMethodInitialized_07547bed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_BaseSetting_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_BaseSetting_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"UniqueId");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Preset");
    Il2CppMethodInitialized_07547bed = '\x01';
  }
  local_88.fields._current.fields.key = (Il2CppObject *)0x0;
  local_88.fields._current.fields.value = (Il2CppObject *)0x0;
  local_88.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_88.fields._version = 0;
  local_88.fields._index = 0;
  local_88.fields._getEnumeratorRetType = 0;
  local_88.fields._36_4_ = 0;
  if (((__this->fields)._currentGlobalSet == (Settings_HumanCustomSkinSet_o *)0x0) ||
     ((__this->fields)._hasBackup != false)) {
    return;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._backupValues;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear
              (pSVar2,(MethodInfo_4AAD690 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
    pSVar3 = (__this->fields)._backupFloatValues;
    if (pSVar3 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      System_Collections_Generic_Dictionary_object__float___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                 (MethodInfo_4AB5620 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Clear);
      pSVar4 = (__this->fields)._currentGlobalSet;
      if ((pSVar4 != (Settings_HumanCustomSkinSet_o *)0x0) &&
         (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar4->fields).TypedSettings,
         pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        System_Collections_Generic_Dictionary_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_58,pSVar2,
                   (MethodInfo_4AAD970 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_GetEnumerator);
        local_88.fields._getEnumeratorRetType = local_38;
        local_88.fields._36_4_ = uStack_34;
        local_88.fields._current.fields.key = (Il2CppObject *)local_48;
        local_88.fields._current.fields.value = (Il2CppObject *)pSStack_40;
        local_88.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_58._0_8_;
        local_88.fields._version = local_58._8_4_;
        local_88.fields._index = local_58._12_4_;
        local_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_58._8_8_ = &local_88;
        while( true ) {
          do {
            while( true ) {
              do {
                bVar5 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                                  (&local_88,
                                   (MethodInfo_4CE66D0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_MoveNext
                                  );
                setting = local_88.fields._current.fields.value;
                a = local_88.fields._current.fields.key;
                if (!bVar5) {
                  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                            (&local_88,
                             (MethodInfo_4CE67F0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose
                            );
                  (__this->fields)._hasBackup = true;
                  return;
                }
                bVar5 = System_String__op_Equality
                                  ((System_String_o *)local_88.fields._current.fields.key,
                                   "Name",(MethodInfo *)0x0);
              } while (((bVar5) ||
                       (bVar5 = System_String__op_Equality
                                          ((System_String_o *)a,"Preset",(MethodInfo *)0x0),
                       bVar5)) ||
                      (bVar5 = System_String__op_Equality
                                         ((System_String_o *)a,"UniqueId",(MethodInfo *)0x0), bVar5
                      ));
              iVar6 = Settings_SettingsUtil__GetSettingType
                                ((Settings_BaseSetting_o *)setting,(MethodInfo *)0x0);
              if (iVar6 != 3) break;
              if ((Settings_BaseSetting_o *)setting == (Settings_BaseSetting_o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
              if (((((Settings_BaseSetting_c *)setting->klass)->_2).typeHierarchyDepth < bVar1) ||
                 ((((Settings_BaseSetting_c *)setting->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
                il2cpp_codegen_raise_invalid_cast_exception(setting);
              }
              pSVar3 = (__this->fields)._backupFloatValues;
              if (pSVar3 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Collections_Generic_Dictionary_object__float___set_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,a,
                         *(float *)((long)&((Settings_BaseSetting_o *)((long)setting + 0x18))->klass + 4),
                         (MethodInfo_4AB5450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
            }
          } while (iVar6 != 4);
          if ((Settings_BaseSetting_o *)setting == (Settings_BaseSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
          if (((((Settings_BaseSetting_c *)setting->klass)->_2).typeHierarchyDepth < bVar1) ||
             ((((Settings_BaseSetting_c *)setting->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_StringSetting)) break;
          pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._backupValues;
          if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar2,a,((Settings_BaseSetting_o *)((long)setting + 0x18))->monitor,
                     (MethodInfo_4AAD4C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
        }
        il2cpp_codegen_raise_invalid_cast_exception(setting);
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.GlobalSkinEditPopup$$RestoreBackup
// il2cpp: void UI_GlobalSkinEditPopup__RestoreBackup (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce0f50
// eh: try 0x5ce10e4..0x5ce12f4 -> pad 0x5ce1310 (+16 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ce1328..0x5ce132d -> pad 0x5ce1352 cleanup
// eh: try 0x5ce1355..0x5ce135f -> pad 0x5ce1367 catch (...) [compiler noexcept guard]
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ce12f4: jmp 0x5ce1310
// asm:   0x5ce12f6: jmp 0x5ce1310
// asm:   0x5ce12f8: jmp 0x5ce1310
// asm:   0x5ce12fa: jmp 0x5ce1310
// asm:   0x5ce12fc: jmp 0x5ce1310
// asm:   0x5ce12fe: jmp 0x5ce1310
// asm:   0x5ce1300: jmp 0x5ce1310
// asm:   0x5ce1302: jmp 0x5ce1310
// asm:   0x5ce1304: jmp 0x5ce1310
// asm:   0x5ce1306: jmp 0x5ce1310
// asm:   0x5ce1308: jmp 0x5ce1310
// asm:   0x5ce130a: jmp 0x5ce1310
// asm:   0x5ce130c: jmp 0x5ce1310
// asm:   0x5ce130e: jmp 0x5ce1310
// asm:   0x5ce1310: mov rbx, rax
// asm:   0x5ce1313: cmp edx, 1
// asm:   0x5ce1316: jne 0x5ce1355
// asm:   0x5ce1318: mov rdi, rbx
// asm:   0x5ce131b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ce1320: mov rbx, qword ptr [rax]
// asm:   0x5ce1323: mov qword ptr [rsp + 0x40], rbx
// asm:   0x5ce1328: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ce132d: lea rax, [rip + 0x15aeae4]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose
// asm:   0x5ce1334: mov rsi, qword ptr [rax]
// asm:   0x5ce1337: lea rdi, [rsp + 0x10]
// asm:   0x5ce133c: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x5ce1341: test rbx, rbx
// asm:   0x5ce1344: je 0x5ce12b2
// asm:   0x5ce134a: mov rdi, rbx
// asm:   0x5ce134d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ce1352: mov rbx, rax
// asm:   0x5ce1355: lea rdi, [rsp + 0x40]
// asm:   0x5ce135a: call 0x2fdb5f0  ; il2cpp_runtime_helper_02fdb5f0()
// asm:   0x5ce135f: mov rdi, rbx
// asm:   0x5ce1362: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ce1367: mov rdi, rax
// asm:   0x5ce136a: call 0x2ab61e0  ; __clang_call_terminate()

void UI_GlobalSkinEditPopup__RestoreBackup(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_HumanCustomSkinSet_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_Dictionary_string__float__o *pSVar4;
  Il2CppObject *a;
  Il2CppObject *__this_00;
  bool bVar5;
  int32_t iVar6;
  System_String_o *value;
  float value_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o local_88;
  undefined1 local_58 [16];
  System_String_o *local_48;
  Settings_TypedSetting_T__o *pSStack_40;
  int32_t local_38;
  undefined4 uStack_34;
  
  if (Il2CppMethodInitialized_07547bee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_BaseSetting_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_BaseSetting_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"UniqueId");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Preset");
    Il2CppMethodInitialized_07547bee = '\x01';
  }
  local_88.fields._current.fields.key = (Il2CppObject *)0x0;
  local_88.fields._current.fields.value = (Il2CppObject *)0x0;
  local_88.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_88.fields._version = 0;
  local_88.fields._index = 0;
  local_88.fields._getEnumeratorRetType = 0;
  local_88.fields._36_4_ = 0;
  pSVar2 = (__this->fields)._currentGlobalSet;
  if ((pSVar2 != (Settings_HumanCustomSkinSet_o *)0x0) && ((__this->fields)._hasBackup != false)) {
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar2->fields).TypedSettings;
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_58,pSVar3,
               (MethodInfo_4AAD970 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_GetEnumerator);
    local_88.fields._getEnumeratorRetType = local_38;
    local_88.fields._36_4_ = uStack_34;
    local_88.fields._current.fields.key = (Il2CppObject *)local_48;
    local_88.fields._current.fields.value = (Il2CppObject *)pSStack_40;
    local_88.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_58._0_8_;
    local_88.fields._version = local_58._8_4_;
    local_88.fields._index = local_58._12_4_;
    local_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_58._8_8_ = &local_88;
    while( true ) {
      bVar5 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        (&local_88,
                         (MethodInfo_4CE66D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_MoveNext
                        );
      __this_00 = local_88.fields._current.fields.value;
      a = local_88.fields._current.fields.key;
      if (!bVar5) break;
      bVar5 = System_String__op_Equality
                        ((System_String_o *)local_88.fields._current.fields.key,"Name",
                         (MethodInfo *)0x0);
      if (!bVar5) {
        bVar5 = System_String__op_Equality((System_String_o *)a,"Preset",(MethodInfo *)0x0);
        if (!bVar5) {
          bVar5 = System_String__op_Equality((System_String_o *)a,"UniqueId",(MethodInfo *)0x0);
          if (!bVar5) {
            iVar6 = Settings_SettingsUtil__GetSettingType
                              ((Settings_BaseSetting_o *)__this_00,(MethodInfo *)0x0);
            if (iVar6 == 3) {
              pSVar4 = (__this->fields)._backupFloatValues;
              if (pSVar4 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar5 = System_Collections_Generic_Dictionary_object__float___ContainsKey
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,a,
                                 (MethodInfo_4AB5680 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_float_ContainsKey);
              if (bVar5) {
                pSVar4 = (__this->fields)._backupFloatValues;
                if (pSVar4 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
                  ThrowNullReferenceException();
                }
                value_00 = System_Collections_Generic_Dictionary_object__float___get_Item
                                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,a,
                                      (MethodInfo_4AB53E0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
                if ((Settings_TypedSetting_T__o *)__this_00 == (Settings_TypedSetting_T__o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
                if (((((Settings_TypedSetting_T__c *)__this_00->klass)->_2).typeHierarchyDepth < bVar1) ||
                   ((((Settings_TypedSetting_T__c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
                  il2cpp_codegen_raise_invalid_cast_exception(__this_00);
                }
                Settings_TypedSetting_float___set_Value
                          ((Settings_TypedSetting_float__o *)__this_00,value_00,
                           (MethodInfo_42DA3B0 *)MethodInfo_Settings_TypedSetting_float_set_Value);
              }
            }
            else if (iVar6 == 4) {
              pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._backupValues;
              if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                                (pSVar3,a,(MethodInfo_4AAD6F0 *)
                                          MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey
                                );
              if (bVar5) {
                pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (__this->fields)._backupValues;
                if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                value = System_Collections_Generic_Dictionary_object__object___get_Item
                                  (pSVar3,a,(MethodInfo_4AAD450 *)
                                            MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item
                                  );
                if ((Settings_TypedSetting_T__o *)__this_00 == (Settings_TypedSetting_T__o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
                if (((((Settings_TypedSetting_T__c *)__this_00->klass)->_2).typeHierarchyDepth < bVar1) ||
                   ((((Settings_TypedSetting_T__c *)__this_00->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
                  il2cpp_codegen_raise_invalid_cast_exception(__this_00);
                }
                Settings_TypedSetting_object___set_Value
                          ((Settings_TypedSetting_T__o *)__this_00,(Il2CppObject *)value,
                           (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
              }
            }
          }
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (&local_88,
               (MethodInfo_4CE67F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose);
  }
  return;
}


// UI.GlobalSkinEditPopup$$OnCancelClick
// il2cpp: void UI_GlobalSkinEditPopup__OnCancelClick (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5cd7170

void UI_GlobalSkinEditPopup__OnCancelClick(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  if ((__this->fields)._hasBackup != false) {
    UI_GlobalSkinEditPopup__RestoreBackup(__this,method);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.GlobalSkinEditPopup$$OnClearClick
// il2cpp: void UI_GlobalSkinEditPopup__OnClearClick (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce08a0
// eh: try 0x5ce09f4..0x5ce0ae8 -> pad 0x5ce0af2 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ce0b0a..0x5ce0b0f -> pad 0x5ce0b34 cleanup
// eh: try 0x5ce0b37..0x5ce0b41 -> pad 0x5ce0b49 catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ce08d7: jmp 0x5ce0ad9
// asm:   0x5ce09ec: nop dword ptr [rax]
// asm:   0x5ce0a9d: nop dword ptr [rax]
// asm:   0x5ce0ae8: jmp 0x5ce0af2
// asm:   0x5ce0aea: jmp 0x5ce0af2
// asm:   0x5ce0aec: jmp 0x5ce0af2
// asm:   0x5ce0aee: jmp 0x5ce0af2
// asm:   0x5ce0af0: jmp 0x5ce0af2
// asm:   0x5ce0af2: mov rbx, rax
// asm:   0x5ce0af5: cmp edx, 1
// asm:   0x5ce0af8: jne 0x5ce0b37
// asm:   0x5ce0afa: mov rdi, rbx
// asm:   0x5ce0afd: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ce0b02: mov rbx, qword ptr [rax]
// asm:   0x5ce0b05: mov qword ptr [rsp + 0x40], rbx
// asm:   0x5ce0b0a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ce0b0f: lea rax, [rip + 0x15af302]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose
// asm:   0x5ce0b16: mov rsi, qword ptr [rax]
// asm:   0x5ce0b19: lea rdi, [rsp + 0x10]
// asm:   0x5ce0b1e: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x5ce0b23: test rbx, rbx
// asm:   0x5ce0b26: je 0x5ce0a78
// asm:   0x5ce0b2c: mov rdi, rbx
// asm:   0x5ce0b2f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ce0b34: mov rbx, rax
// asm:   0x5ce0b37: lea rdi, [rsp + 0x40]
// asm:   0x5ce0b3c: call 0x2fdb620  ; il2cpp_runtime_helper_02fdb620()
// asm:   0x5ce0b41: mov rdi, rbx
// asm:   0x5ce0b44: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ce0b49: mov rdi, rax
// asm:   0x5ce0b4c: call 0x2ab61e0  ; __clang_call_terminate()

void UI_GlobalSkinEditPopup__OnClearClick(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  char cVar1;
  Settings_HumanCustomSkinSet_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *pIVar3;
  System_String_o *a;
  bool bVar4;
  uint uVar5;
  System_Object_array *pSVar6;
  uint uVar7;
  undefined1 auStack_88 [16];
  System_String_o *pSStack_78;
  Il2CppObject *pIStack_70;
  int32_t iStack_68;
  undefined4 uStack_64;
  undefined1 auStack_58 [16];
  System_String_o *pSStack_48;
  Il2CppObject *pIStack_40;
  int32_t iStack_38;
  undefined4 uStack_34;
  
  if (Il2CppMethodInitialized_07547bef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_InputSettingElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_BaseSetting_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_BaseSetting_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"UniqueId");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Preset");
    Il2CppMethodInitialized_07547bef = '\x01';
    cVar1 = (__this->fields)._hasBackup;
  }
  else {
    cVar1 = (__this->fields)._hasBackup;
  }
  if (cVar1 == '\0') {
    UI_GlobalSkinEditPopup__CreateBackup(__this,method);
    pSVar2 = (__this->fields)._currentGlobalSet;
  }
  else {
    pSVar2 = (__this->fields)._currentGlobalSet;
  }
  if ((pSVar2 != (Settings_HumanCustomSkinSet_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pSVar2->fields).TypedSettings,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_58,__this_00,
               (MethodInfo_4AAD970 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_GetEnumerator);
    iStack_68 = iStack_38;
    uStack_64 = uStack_34;
    pSStack_78 = pSStack_48;
    pIStack_70 = pIStack_40;
    auStack_88._0_8_ = auStack_58._0_8_;
    auStack_88._8_8_ = auStack_58._8_8_;
    auStack_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    auStack_58._8_8_ = (System_Collections_Generic_Dictionary_Enumerator_object__object__o *)auStack_88;
    while (bVar4 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                             ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)auStack_88
                              ,(MethodInfo_4CE66D0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_MoveNext
                             ), pIVar3 = pIStack_70, a = pSStack_78, bVar4) {
      bVar4 = System_String__op_Equality(pSStack_78,"Name",(MethodInfo *)0x0);
      if (((!bVar4) && (bVar4 = System_String__op_Equality(a,"Preset",(MethodInfo *)0x0), !bVar4)
          ) && (bVar4 = System_String__op_Equality(a,"UniqueId",(MethodInfo *)0x0), !bVar4)) {
        if (pIVar3 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        (*pIVar3->klass->vtable[4].methodPtr)(pIVar3,pIVar3->klass->vtable[4].method);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)auStack_88,
               (MethodInfo_4CE67F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose);
    pSVar6 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B11B0 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_InputSettingElement);
    if (pSVar6 != (System_Object_array *)0x0) {
      uVar5 = (uint)pSVar6->max_length;
      if (0 < (int)uVar5) {
        uVar7 = 0;
        do {
          if (uVar5 <= uVar7) {
            ThrowIndexOutOfRangeException();
          }
          pIVar3 = pSVar6->m_Items[(int)uVar7];
          if (pIVar3 == (Il2CppObject *)0x0) goto label_05ce0ad9;
          (*pIVar3->klass->vtable[6].methodPtr)(pIVar3,pIVar3->klass->vtable[6].method);
          uVar7 = uVar7 + 1;
          uVar5 = (uint)pSVar6->max_length;
        } while ((int)uVar7 < (int)uVar5);
      }
      return;
    }
  }
label_05ce0ad9:
  ThrowNullReferenceException();
}


// UI.GlobalSkinEditPopup$$OnSaveClick
// il2cpp: void UI_GlobalSkinEditPopup__OnSaveClick (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce0480
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ce0599: jmp 0x5ce05e3
// asm:   0x5ce0867: jmp 0x5ce05fa
// asm:   0x5ce0890: jmp 0x5ce069c

void UI_GlobalSkinEditPopup__OnSaveClick(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint32_t uVar4;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  GameManagers_BaseGameManager_o *pGVar5;
  Characters_DummyHuman_o *pCVar6;
  Settings_CustomSkinSettings_o *pSVar7;
  Settings_HumanCustomSkinSettings_o *pSVar8;
  Settings_BoolSetting_o *pSVar9;
  Settings_BoolSetting_o *pSVar10;
  Characters_HumanSetup_o *__this_02;
  bool bVar11;
  bool value;
  UI_BaseMenu_o *pUVar12;
  UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *__this_03;
  UI_BaseMenu_o *__this_04;
  Characters_DummyHuman_o *x;
  
  if (Il2CppMethodInitialized_07547bf0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_CharacterEditorGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorHumanMenu);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_DummyHuman);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547bf0 = '\x01';
  }
  if ((__this->fields)._currentGlobalSet == (Settings_HumanCustomSkinSet_o *)0x0) {
    return;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._backupValues;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05ce0895;
  System_Collections_Generic_Dictionary_object__object___Clear
            (__this_00,
             (MethodInfo_4AAD690 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
  __this_01 = (__this->fields)._backupFloatValues;
  if (__this_01 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) goto label_05ce0895;
  System_Collections_Generic_Dictionary_object__float___Clear
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_4AB5620 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Clear);
  (__this->fields)._hasBackup = false;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    pUVar12 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar12 != (UI_BaseMenu_o *)0x0) goto label_05ce05c3;
label_05ce05e3:
    __this_04 = (UI_BaseMenu_o *)0x0;
    uVar4 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    pUVar12 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar12 == (UI_BaseMenu_o *)0x0) goto label_05ce05e3;
label_05ce05c3:
    bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
    if ((pUVar12->klass->_2).typeHierarchyDepth < bVar1) goto label_05ce05e3;
    __this_04 = (UI_BaseMenu_o *)0x0;
    if ((pUVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu) {
      __this_04 = pUVar12;
    }
    uVar4 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar4 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)__this_04,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar11) goto label_05ce0818;
  pGVar5 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar5 == (GameManagers_BaseGameManager_o *)0x0) goto label_05ce0895;
  bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
  if (((pGVar5->klass->_2).typeHierarchyDepth < bVar1) ||
     ((pGVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
    il2cpp_codegen_raise_invalid_cast_exception();
  }
  pCVar6 = (Characters_DummyHuman_o *)(*(uint64_t *)((char *)pGVar5 + 0x38));
  if (pCVar6 == (Characters_DummyHuman_o *)0x0) {
label_05ce068c:
    x = (Characters_DummyHuman_o *)0x0;
    uVar4 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
    if ((pCVar6->klass->_2).typeHierarchyDepth < bVar1) goto label_05ce068c;
    x = (Characters_DummyHuman_o *)0x0;
    if ((pCVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_DummyHuman)
    {
      x = pCVar6;
    }
    uVar4 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar4 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar11) {
    bVar11 = UI_CharacterEditorCostumePanel__GetPersistentGlobalPreview((MethodInfo *)0x0);
    value = UI_CharacterEditorCostumePanel__GetPersistentCustomPreview((MethodInfo *)0x0);
    pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
    if ((((pSVar7 != (Settings_CustomSkinSettings_o *)0x0) &&
         (pSVar8 = (pSVar7->fields).Human, pSVar8 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
        (pSVar9 = (pSVar8->fields).GlobalSkinOverridesEnabled, pSVar9 != (Settings_BoolSetting_o *)0x0)) &&
       (pSVar10 = (pSVar8->fields).SetSpecificSkinsEnabled, pSVar10 != (Settings_BoolSetting_o *)0x0)) {
      bVar2 = ((Settings_TypedSetting_bool__Fields *)&pSVar9->fields)->_value;
      bVar3 = (pSVar10->fields)._value;
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)pSVar9,bVar11,
                 (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
      if (((pSVar7 != (Settings_CustomSkinSettings_o *)0x0) &&
          (pSVar8 = (pSVar7->fields).Human, pSVar8 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
         ((pSVar9 = (pSVar8->fields).SetSpecificSkinsEnabled, pSVar9 != (Settings_BoolSetting_o *)0x0 &&
          ((Settings_TypedSetting_bool___set_Value
                      ((Settings_TypedSetting_bool__o *)pSVar9,value,
                       (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value),
           x != (Characters_DummyHuman_o *)0x0 &&
           (__this_02 = (x->fields).Setup, __this_02 != (Characters_HumanSetup_o *)0x0)))))) {
        Characters_HumanSetup__Load
                  (__this_02,(__this_02->fields).CustomSet,(__this_02->fields).Weapon,false,(MethodInfo *)0x0)
        ;
        if (Il2CppMethodInitialized_07547bf1 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_UI_GlobalSkinEditPopup_LoadSkinAndRestoreSettings_d__27);
          Il2CppMethodInitialized_07547bf1 = '\x01';
        }
        __this_03 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_UI_GlobalSkinEditPopup_LoadSkinAndRestoreSettings_d__27
                              );
        System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
        (__this_03->fields).__1__state = 0;
        (__this_03->fields).character = x;
        Il2CppCodeGenWriteBarrier(&(__this_03->fields).character);
        (__this_03->fields).originalGlobal = bVar2;
        (__this_03->fields).originalCustom = bVar3;
        if (__this_04 != (UI_BaseMenu_o *)0x0) {
          UnityEngine_MonoBehaviour__StartCoroutine_691c390
                    ((UnityEngine_MonoBehaviour_o *)__this_04,(System_Collections_IEnumerator_o *)__this_03,
                     (MethodInfo *)0x0);
          goto label_05ce0818;
        }
      }
    }
label_05ce0895:
    ThrowNullReferenceException();
  }
label_05ce0818:
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.GlobalSkinEditPopup$$LoadSkinAndRestoreSettings
// il2cpp: System_Collections_IEnumerator_o* UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings (UI_GlobalSkinEditPopup_o* __this, Characters_DummyHuman_o* character, bool originalGlobal, bool originalCustom, const MethodInfo* method);
// 0x5ce1370

System_Collections_IEnumerator_o *
UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings
          (UI_GlobalSkinEditPopup_o *__this,Characters_DummyHuman_o *character,bool originalGlobal,
          bool originalCustom,MethodInfo *method)

{
  UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *__this_00;
  
  if (Il2CppMethodInitialized_07547bf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_GlobalSkinEditPopup_LoadSkinAndRestoreSettings_d__27);
    Il2CppMethodInitialized_07547bf1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_GlobalSkinEditPopup_LoadSkinAndRestoreSettings_d__27);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).character = character;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).character);
  (__this_00->fields).originalGlobal = originalGlobal;
  (__this_00->fields).originalCustom = originalCustom;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.GlobalSkinEditPopup$$Show
// il2cpp: void UI_GlobalSkinEditPopup__Show (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce1410
// eh: try 0x5ce1620..0x5ce1798 -> pad 0x5ce17a8 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ce17c6..0x5ce17cb -> pad 0x5ce1dbf cleanup
// eh: try 0x5ce18c0..0x5ce1db2 -> pad 0x5ce1e1e (+15 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5ce1dc2..0x5ce1dcc -> pad 0x5ce1e5f catch (...) [compiler noexcept guard]
// eh: try 0x5ce1e05..0x5ce1e0a -> pad 0x5ce1e0f cleanup
// eh: try 0x5ce1e12..0x5ce1e1c -> pad 0x5ce1e5f catch (...) [compiler noexcept guard]
// eh: try 0x5ce1e40..0x5ce1e45 -> pad 0x5ce1e4a cleanup
// eh: try 0x5ce1e4d..0x5ce1e57 -> pad 0x5ce1e5f catch (...) [compiler noexcept guard]
// asm: 63 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ce1548: lea rdi, [r15 + 0xa8]
// asm:   0x5ce154f: jmp 0x5ce1563
// asm:   0x5ce17a0: jmp 0x5ce17aa
// asm:   0x5ce17a2: jmp 0x5ce17aa
// asm:   0x5ce17a4: jmp 0x5ce17aa
// asm:   0x5ce17a6: jmp 0x5ce17aa
// asm:   0x5ce17a8: jmp 0x5ce17aa
// asm:   0x5ce17aa: mov r14, rax
// asm:   0x5ce17ad: cmp edx, 1
// asm:   0x5ce17b0: jne 0x5ce1dc2
// asm:   0x5ce17b6: mov rdi, r14
// asm:   0x5ce17b9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ce17be: mov r14, qword ptr [rax]
// asm:   0x5ce17c1: mov qword ptr [rsp + 0x18], r14
// asm:   0x5ce17c6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ce1db7: mov rdi, r14
// asm:   0x5ce1dbf: mov r14, rax
// asm:   0x5ce1dc2: lea rdi, [rsp + 0x18]
// asm:   0x5ce1dc7: call 0x2fdb650  ; il2cpp_runtime_helper_02fdb650()
// asm:   0x5ce1dcc: jmp 0x5ce1e57
// asm:   0x5ce1dd1: jmp 0x5ce1de3
// asm:   0x5ce1dd3: jmp 0x5ce1de3
// asm:   0x5ce1dd5: jmp 0x5ce1e20
// asm:   0x5ce1dd7: jmp 0x5ce1e20
// asm:   0x5ce1dd9: jmp 0x5ce1de3
// asm:   0x5ce1ddb: jmp 0x5ce1de3
// asm:   0x5ce1ddd: jmp 0x5ce1de3
// asm:   0x5ce1ddf: jmp 0x5ce1e20
// asm:   0x5ce1de1: jmp 0x5ce1e20
// asm:   0x5ce1de3: mov r14, rax
// asm:   0x5ce1de6: lea rbp, [rip + 0x159756b]  ; TypeInfo_System_IDisposable
// asm:   0x5ce1ded: cmp edx, 1
// asm:   0x5ce1df0: jne 0x5ce1e12
// asm:   0x5ce1df2: mov rdi, r14
// asm:   0x5ce1df5: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ce1dfa: mov r14, qword ptr [rax]
// asm:   0x5ce1dfd: mov qword ptr [rsp + 0x18], r14
// asm:   0x5ce1e02: xor r12d, r12d
// asm:   0x5ce1e05: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ce1e0a: jmp 0x5ce1caa
// asm:   0x5ce1e0f: mov r14, rax
// asm:   0x5ce1e12: lea rdi, [rsp + 0x18]
// asm:   0x5ce1e17: call 0x2fdb790  ; il2cpp_runtime_helper_02fdb790()
// asm:   0x5ce1e1c: jmp 0x5ce1e57
// asm:   0x5ce1e1e: jmp 0x5ce1e20
// asm:   0x5ce1e20: mov r14, rax
// asm:   0x5ce1e23: cmp edx, 1
// asm:   0x5ce1e26: jne 0x5ce1e4d
// asm:   0x5ce1e28: mov rdi, r14
// asm:   0x5ce1e2b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ce1e30: mov rcx, qword ptr [rax]
// asm:   0x5ce1e33: mov qword ptr [rsp + 0x30], rcx
// asm:   0x5ce1e38: mov qword ptr [rsp + 0x18], rcx
// asm:   0x5ce1e3d: xor r14d, r14d
// asm:   0x5ce1e40: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ce1e45: jmp 0x5ce1a33
// asm:   0x5ce1e4a: mov r14, rax
// asm:   0x5ce1e4d: lea rdi, [rsp + 0x18]
// asm:   0x5ce1e52: call 0x2fdb6f0  ; il2cpp_runtime_helper_02fdb6f0()
// asm:   0x5ce1e57: mov rdi, r14
// asm:   0x5ce1e5a: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ce1e5f: mov rdi, rax
// asm:   0x5ce1e62: call 0x2ab61e0  ; __clang_call_terminate()

void UI_GlobalSkinEditPopup__Show(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  Settings_CustomSkinSettings_o *pSVar2;
  Settings_HumanCustomSkinSettings_o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_Dictionary_string__float__o *__this_02;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Settings_HumanCustomSkinSet_c *pSVar5;
  bool bVar6;
  Settings_HumanCustomSkinSet_o *pSVar7;
  UnityEngine_Transform_o *pUVar8;
  VirtualInvokeData *pVVar9;
  UnityEngine_Component_o *pUVar10;
  UnityEngine_Object_o *pUVar11;
  Il2CppObject *pIVar12;
  ulong uVar13;
  MethodInfo *method_00;
  long lVar14;
  Il2CppObject *pIStack_60;
  Il2CppObject *pIStack_58;
  undefined8 uStack_50;
  Il2CppObject **ppIStack_48;
  Il2CppObject **ppIStack_40;
  long lStack_38;
  
  if (Il2CppMethodInitialized_07547bf2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSkinSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    Il2CppMethodInitialized_07547bf2 = '\x01';
  }
  pIStack_60 = (Il2CppObject *)0x0;
  pIStack_58 = (Il2CppObject *)0x0;
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  if ((pSVar2 != (Settings_CustomSkinSettings_o *)0x0) &&
     (__this_00 = (pSVar2->fields).Human, __this_00 != (Settings_HumanCustomSkinSettings_o *)0x0)) {
    pSVar7 = (Settings_HumanCustomSkinSet_o *)
             Settings_SetSettingsContainer_object___GetSelectedSet
                       ((Settings_SetSettingsContainer_T__o *)__this_00,
                        (MethodInfo_40477A0 *)
                        MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSelectedSet);
    pSVar5 = TypeInfo_Settings_HumanCustomSkinSet;
    if (pSVar7 == (Settings_HumanCustomSkinSet_o *)0x0) {
      (__this->fields)._currentGlobalSet = (Settings_HumanCustomSkinSet_o *)0x0;
    }
    else {
      bVar1 = (TypeInfo_Settings_HumanCustomSkinSet->_2).typeHierarchyDepth;
      if (((((Settings_BaseSetSetting_c *)pSVar7->klass)->_2).typeHierarchyDepth < bVar1) ||
         ((((Settings_BaseSetSetting_c *)pSVar7->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_HumanCustomSkinSet)) {
label_05ce1798:
        il2cpp_codegen_raise_invalid_cast_exception(pSVar7);
      }
      (__this->fields)._currentGlobalSet = pSVar7;
      if (((((Settings_BaseSetSetting_c *)pSVar7->klass)->_2).typeHierarchyDepth < bVar1) ||
         ((((Settings_BaseSetSetting_c *)pSVar7->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)pSVar5)) goto label_05ce1798;
    }
    Il2CppCodeGenWriteBarrier(&(__this->fields)._currentGlobalSet);
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._backupValues;
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Clear
                (__this_01,
                 (MethodInfo_4AAD690 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
      __this_02 = (__this->fields)._backupFloatValues;
      if (__this_02 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
        System_Collections_Generic_Dictionary_object__float___Clear
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                   (MethodInfo_4AB5620 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Clear);
        (__this->fields)._hasBackup = false;
        pUVar8 = (__this->fields).DoublePanelLeft;
        if ((pUVar8 != (UnityEngine_Transform_o *)0x0) &&
           (pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0)
           , pUVar8 != (UnityEngine_Transform_o *)0x0)) {
          pIStack_60 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(pUVar8,(MethodInfo *)0x0);
          uStack_50 = 0;
          ppIStack_48 = &pIStack_60;
          ppIStack_40 = &pIStack_58;
          do {
            pIVar12 = pIStack_60;
            if (pIStack_60 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar3 = pIStack_60->klass;
            uVar13 = (ulong)(pIVar3->_2).interface_offsets_count;
            if (uVar13 != 0) {
              pIVar4 = (pIVar3->_1).interfaceOffsets;
              lVar14 = 0;
              do {
                if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar14) ==
                    TypeInfo_System_Collections_IEnumerator) {
                  pVVar9 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar14);
                  goto label_05ce1693;
                }
                lVar14 = lVar14 + 0x10;
              } while (uVar13 * 0x10 != lVar14);
            }
            pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                               (pIStack_60,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05ce1693:
            bVar6 = (*pVVar9->methodPtr)(pIVar12,pVVar9->method);
            pIVar12 = pIStack_60;
            if (!bVar6) {
              pIVar12 = il2cpp_vm_Object_IsInst(pIStack_60,(Il2CppClass *)TypeInfo_System_IDisposable);
              pIStack_58 = pIVar12;
              if (pIVar12 == (Il2CppObject *)0x0) goto label_05ce1856;
              pIVar3 = pIVar12->klass;
              uVar13 = (ulong)(pIVar3->_2).interface_offsets_count;
              if (uVar13 == 0) goto label_05ce182f;
              pIVar4 = (pIVar3->_1).interfaceOffsets;
              lVar14 = 0;
              goto label_05ce1820;
            }
            if (pIStack_60 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar3 = pIStack_60->klass;
            uVar13 = (ulong)(pIVar3->_2).interface_offsets_count;
            if (uVar13 != 0) {
              pIVar4 = (pIVar3->_1).interfaceOffsets;
              lVar14 = 0;
              do {
                if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar14) ==
                    TypeInfo_System_Collections_IEnumerator) {
                  pVVar9 = pIVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar14) + 1);
                  goto label_05ce1727;
                }
                lVar14 = lVar14 + 0x10;
              } while (uVar13 * 0x10 != lVar14);
            }
            pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                               (pIStack_60,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05ce1727:
            pUVar10 = (UnityEngine_Component_o *)(*pVVar9->methodPtr)(pIVar12,pVVar9->method);
            if (pUVar10 == (UnityEngine_Component_o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
            if (((pUVar10->klass->_2).typeHierarchyDepth < bVar1) ||
               ((pUVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
              il2cpp_codegen_raise_invalid_cast_exception(pUVar10);
            }
            pUVar11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(pUVar10,(MethodInfo *)0x0)
            ;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            UnityEngine_Object__Destroy_69214e0(pUVar11,(MethodInfo *)0x0);
          } while( true );
        }
      }
    }
  }
  goto label_05ce1db2;
  while (lVar14 = lVar14 + 0x10, uVar13 * 0x10 != lVar14) {
label_05ce1820:
    if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar14) == TypeInfo_System_IDisposable) {
      pVVar9 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar14);
      goto label_05ce184d;
    }
  }
label_05ce182f:
  pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar12,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05ce184d:
  (*pVVar9->methodPtr)(pIVar12,pVVar9->method);
label_05ce1856:
  pUVar8 = (__this->fields).DoublePanelRight;
  if ((pUVar8 != (UnityEngine_Transform_o *)0x0) &&
     (pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0),
     pUVar8 != (UnityEngine_Transform_o *)0x0)) {
    lStack_38 = 0;
    pIStack_60 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(pUVar8,(MethodInfo *)0x0);
    uStack_50 = 0;
    ppIStack_48 = &pIStack_60;
    ppIStack_40 = &pIStack_58;
    do {
      pIVar12 = pIStack_60;
      if (pIStack_60 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar3 = pIStack_60->klass;
      uVar13 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar13 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar14 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar14) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar9 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar14);
            goto label_05ce1933;
          }
          lVar14 = lVar14 + 0x10;
        } while (uVar13 * 0x10 != lVar14);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIStack_60,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05ce1933:
      bVar6 = (*pVVar9->methodPtr)(pIVar12,pVVar9->method);
      pIVar12 = pIStack_60;
      if (!bVar6) {
        pIVar12 = il2cpp_vm_Object_IsInst(pIStack_60,(Il2CppClass *)TypeInfo_System_IDisposable);
        pIStack_58 = pIVar12;
        if (pIVar12 == (Il2CppObject *)0x0) goto label_05ce1ab6;
        pIVar3 = pIVar12->klass;
        uVar13 = (ulong)(pIVar3->_2).interface_offsets_count;
        if (uVar13 == 0) goto label_05ce1a8f;
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar14 = 0;
        goto label_05ce1a80;
      }
      if (pIStack_60 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar3 = pIStack_60->klass;
      uVar13 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar13 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar14 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar14) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar9 = pIVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar14) + 1);
            goto label_05ce19c7;
          }
          lVar14 = lVar14 + 0x10;
        } while (uVar13 * 0x10 != lVar14);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIStack_60,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05ce19c7:
      pUVar10 = (UnityEngine_Component_o *)(*pVVar9->methodPtr)(pIVar12,pVVar9->method);
      if (pUVar10 == (UnityEngine_Component_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
      if (((pUVar10->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar10);
      }
      pUVar11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(pUVar10,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(pUVar11,(MethodInfo *)0x0);
    } while( true );
  }
  goto label_05ce1db2;
  while (lVar14 = lVar14 + 0x10, uVar13 * 0x10 != lVar14) {
label_05ce1cf0:
    if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar14) == TypeInfo_System_IDisposable) {
      pVVar9 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar14);
      goto label_05ce1d1d;
    }
  }
label_05ce1cff:
  pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar12,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05ce1d1d:
  (*pVVar9->methodPtr)(pIVar12,pVVar9->method);
label_05ce1d26:
  method_00 = (MethodInfo *)0x0;
  (*(__this->klass->vtable)._20_Setup.methodPtr)
            (__this,(UI_BasePanel_o *)0x0,(__this->klass->vtable)._20_Setup.method);
  if (((__this->fields)._currentGlobalSet != (Settings_HumanCustomSkinSet_o *)0x0) &&
     ((__this->fields)._hasBackup == false)) {
    UI_GlobalSkinEditPopup__CreateBackup(__this,method_00);
  }
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
  while (lVar14 = lVar14 + 0x10, uVar13 * 0x10 != lVar14) {
label_05ce1a80:
    if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar14) == TypeInfo_System_IDisposable) {
      pVVar9 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar14);
      goto label_05ce1aad;
    }
  }
label_05ce1a8f:
  pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar12,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05ce1aad:
  (*pVVar9->methodPtr)(pIVar12,pVVar9->method);
label_05ce1ab6:
  if (lStack_38 != 0) {
    il2cpp_codegen_rethrow(lStack_38);
  }
  pUVar8 = (__this->fields).BottomBar;
  if ((pUVar8 != (UnityEngine_Transform_o *)0x0) &&
     (pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0),
     pUVar8 != (UnityEngine_Transform_o *)0x0)) {
    pIStack_60 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(pUVar8,(MethodInfo *)0x0);
    uStack_50 = 0;
    ppIStack_48 = &pIStack_60;
    ppIStack_40 = &pIStack_58;
    do {
      pIVar12 = pIStack_60;
      if (pIStack_60 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar3 = pIStack_60->klass;
      uVar13 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar13 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar14 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar14) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar9 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar14);
            goto label_05ce1ba3;
          }
          lVar14 = lVar14 + 0x10;
        } while (uVar13 * 0x10 != lVar14);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIStack_60,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05ce1ba3:
      bVar6 = (*pVVar9->methodPtr)(pIVar12,pVVar9->method);
      pIVar12 = pIStack_60;
      if (!bVar6) {
        pIVar12 = il2cpp_vm_Object_IsInst(pIStack_60,(Il2CppClass *)TypeInfo_System_IDisposable);
        pIStack_58 = pIVar12;
        if (pIVar12 == (Il2CppObject *)0x0) goto label_05ce1d26;
        pIVar3 = pIVar12->klass;
        uVar13 = (ulong)(pIVar3->_2).interface_offsets_count;
        if (uVar13 == 0) goto label_05ce1cff;
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar14 = 0;
        goto label_05ce1cf0;
      }
      if (pIStack_60 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar3 = pIStack_60->klass;
      uVar13 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar13 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar14 = 0;
        do {
          if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar14) ==
              TypeInfo_System_Collections_IEnumerator) {
            pVVar9 = pIVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar14) + 1);
            goto label_05ce1c37;
          }
          lVar14 = lVar14 + 0x10;
        } while (uVar13 * 0x10 != lVar14);
      }
      pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIStack_60,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05ce1c37:
      pUVar10 = (UnityEngine_Component_o *)(*pVVar9->methodPtr)(pIVar12,pVVar9->method);
      if (pUVar10 == (UnityEngine_Component_o *)0x0) {
        ThrowNullReferenceException();
      }
      bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
      if (((pUVar10->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar10->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar10);
      }
      pUVar11 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(pUVar10,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(pUVar11,(MethodInfo *)0x0);
    } while( true );
  }
label_05ce1db2:
  ThrowNullReferenceException();
}


// UI.GlobalSkinEditPopup$$OnDisable
// il2cpp: void UI_GlobalSkinEditPopup__OnDisable (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce1e70

void UI_GlobalSkinEditPopup__OnDisable(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  if ((__this->fields)._hasBackup != false) {
    UI_GlobalSkinEditPopup__RestoreBackup(__this,method);
  }
  UI_BasePopup__OnDisable((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.GlobalSkinEditPopup$$HideImmediate
// il2cpp: void UI_GlobalSkinEditPopup__HideImmediate (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce1e90

void UI_GlobalSkinEditPopup__HideImmediate(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  if ((__this->fields)._hasBackup != false) {
    UI_GlobalSkinEditPopup__RestoreBackup(__this,method);
  }
  UI_BasePopup__HideImmediate((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.GlobalSkinEditPopup$$.ctor
// il2cpp: void UI_GlobalSkinEditPopup___ctor (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce1eb0

void UI_GlobalSkinEditPopup___ctor(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  
  if (Il2CppMethodInitialized_07547bf3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_float);
    Il2CppMethodInitialized_07547bf3 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  (__this->fields)._backupValues = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._backupValues);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_4AB4860 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
  (__this->fields)._backupFloatValues = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._backupFloatValues);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.GlobalSkinEditPopup$$<Setup>b__20_0
// il2cpp: void UI_GlobalSkinEditPopup___Setup_b__20_0 (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce1f80

void UI_GlobalSkinEditPopup___Setup_b__20_0(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547bf4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    Il2CppMethodInitialized_07547bf4 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_GlobalSkinEditPopup__OnButtonClick(__this,"Clear",in_RDX);
  return;
}


// UI.GlobalSkinEditPopup$$<Setup>b__20_1
// il2cpp: void UI_GlobalSkinEditPopup___Setup_b__20_1 (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce1fc0

void UI_GlobalSkinEditPopup___Setup_b__20_1(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547bf5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_07547bf5 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_GlobalSkinEditPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.GlobalSkinEditPopup$$<Setup>b__20_2
// il2cpp: void UI_GlobalSkinEditPopup___Setup_b__20_2 (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x5ce2000

void UI_GlobalSkinEditPopup___Setup_b__20_2(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_07547bf6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    Il2CppMethodInitialized_07547bf6 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_GlobalSkinEditPopup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


