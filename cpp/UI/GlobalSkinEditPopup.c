// Type: UI.GlobalSkinEditPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/GlobalSkinEditPopup.cs
// Prior real C# source: none
// --------------------------------

// UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$.ctor
// il2cpp: void UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27___ctor (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27___ctor(UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$System.IDisposable.Dispose
// il2cpp: void UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__System_IDisposable_Dispose (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__System_IDisposable_Dispose(UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o* __this, MethodInfo* method)

{
  return;
}


// UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$MoveNext
// il2cpp: bool UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__MoveNext (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o* __this, const MethodInfo* method);
// 0x1821e7a20

bool UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__MoveNext
               (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_CustomSkinSettings_o *pSVar2;
  Settings_HumanCustomSkinSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Characters_DummyHuman_o *__this_00;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *pPVar5;
  
  if (Il2CppMethodInitialized_184346ff6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_184346ff6 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      __this_00 = (__this->fields).character;
      (__this->fields).__1__state = -1;
      if (__this_00 != (Characters_DummyHuman_o *)0x0) {
        Characters_DummyHuman__LoadSkin(__this_00,(MethodInfo *)0x0);
        pPVar5 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
        UnityEngine_WaitForSeconds___ctor(pPVar5,0.1,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)pPVar5;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pPVar5);
        (__this->fields).__1__state = 2;
        return true;
      }
    }
    else {
      if (iVar1 != 2) {
        return false;
      }
      (__this->fields).__1__state = -1;
      pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
      if (((pSVar2 != (Settings_CustomSkinSettings_o *)0x0) &&
          (pSVar3 = (pSVar2->fields).Human, pSVar3 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
         (pSVar4 = (pSVar3->fields).GlobalSkinOverridesEnabled, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
        Settings_TypedSetting_bool___set_Value
                  ((Settings_TypedSetting_bool__o *)pSVar4,(__this->fields).originalGlobal,
                   (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
        pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
        if (((pSVar2 != (Settings_CustomSkinSettings_o *)0x0) &&
            (pSVar3 = (pSVar2->fields).Human, pSVar3 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
           (pSVar4 = (pSVar3->fields).SetSpecificSkinsEnabled, pSVar4 != (Settings_BoolSetting_o *)0x0)) {
          Settings_TypedSetting_bool___set_Value
                    ((Settings_TypedSetting_bool__o *)pSVar4,(__this->fields).originalCustom,
                     (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
          return false;
        }
      }
    }
    ThrowNullReferenceException();
  }
  (__this->fields).__1__state = -1;
  pPVar5 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
  UnityEngine_WaitForSeconds___ctor(pPVar5,0.1,(MethodInfo *)0x0);
  (__this->fields).__2__current = (Il2CppObject *)pPVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pPVar5);
  (__this->fields).__1__state = 1;
  return true;
}


// UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.GlobalSkinEditPopup.<LoadSkinAndRestoreSettings>d__27$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__System_Collections_IEnumerator_Reset (UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o* __this, const MethodInfo* method);
// 0x1821e7be0

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
// 0x180573e90

Il2CppObject*
UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27__System_Collections_IEnumerator_get_Current(UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.GlobalSkinEditPopup$$get_Title
// il2cpp: System_String_o* UI_GlobalSkinEditPopup__get_Title (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x1821e4690

System_String_o * UI_GlobalSkinEditPopup__get_Title(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  Settings_CustomSkinSettings_o *pSVar1;
  Settings_HumanCustomSkinSettings_o *__this_00;
  Settings_StringSetting_o *pSVar2;
  System_String_o *pSVar3;
  Settings_BaseSetSetting_o *pSVar4;
  System_String_o *str2;
  
  if (Il2CppMethodInitialized_184346fe9 == '\0') {
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
    Il2CppMethodInitialized_184346fe9 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar3 = UI_UIManager__GetLocale
                     ("SettingsPopup","Skins.Human","EditGlobal","",
                      "",(MethodInfo *)0x0);
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  if ((pSVar1 != (Settings_CustomSkinSettings_o *)0x0) &&
     (__this_00 = (pSVar1->fields).Human, __this_00 != (Settings_HumanCustomSkinSettings_o *)0x0)) {
    pSVar4 = Settings_SetSettingsContainer_object___GetSelectedSet
                       ((Settings_SetSettingsContainer_T__o *)__this_00,
                        (MethodInfo_C8EAF0 *)
                        MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSelectedSet);
    if (pSVar4 == (Settings_BaseSetSetting_o *)0x0) {
      str2 = (System_String_o *)0x0;
    }
    else {
      pSVar2 = (pSVar4->fields).Name;
      if (pSVar2 == (Settings_StringSetting_o *)0x0) goto label_1821e47b3;
      str2 = (pSVar2->fields)._value;
    }
    pSVar3 = System_String__Concat_1969b70(pSVar3,": ",str2,(MethodInfo *)0x0);
    return pSVar3;
  }
label_1821e47b3:
  ThrowNullReferenceException();
}


// UI.GlobalSkinEditPopup$$get_Width
// il2cpp: float UI_GlobalSkinEditPopup__get_Width (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x1821e47c0

float
UI_GlobalSkinEditPopup__get_Width(UI_GlobalSkinEditPopup_o* __this, MethodInfo* method)

{
  return 1100.0;
}


// UI.GlobalSkinEditPopup$$get_Height
// il2cpp: float UI_GlobalSkinEditPopup__get_Height (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x1821e4680

float
UI_GlobalSkinEditPopup__get_Height(UI_GlobalSkinEditPopup_o* __this, MethodInfo* method)

{
  return 700.0;
}


// UI.GlobalSkinEditPopup$$get_VerticalSpacing
// il2cpp: float UI_GlobalSkinEditPopup__get_VerticalSpacing (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x182182ab0

float
UI_GlobalSkinEditPopup__get_VerticalSpacing(UI_GlobalSkinEditPopup_o* __this, MethodInfo* method)

{
  return 15.0;
}


// UI.GlobalSkinEditPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_GlobalSkinEditPopup__get_HorizontalPadding (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_GlobalSkinEditPopup__get_HorizontalPadding(UI_GlobalSkinEditPopup_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.GlobalSkinEditPopup$$get_VerticalPadding
// il2cpp: int32_t UI_GlobalSkinEditPopup__get_VerticalPadding (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_GlobalSkinEditPopup__get_VerticalPadding(UI_GlobalSkinEditPopup_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.GlobalSkinEditPopup$$get_DoublePanel
// il2cpp: bool UI_GlobalSkinEditPopup__get_DoublePanel (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_GlobalSkinEditPopup__get_DoublePanel(UI_GlobalSkinEditPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.GlobalSkinEditPopup$$get_ScrollBar
// il2cpp: bool UI_GlobalSkinEditPopup__get_ScrollBar (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_GlobalSkinEditPopup__get_ScrollBar(UI_GlobalSkinEditPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.GlobalSkinEditPopup$$Setup
// il2cpp: void UI_GlobalSkinEditPopup__Setup (UI_GlobalSkinEditPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1821e2b60
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821e2e56: mov r8d, r15d
// asm:   0x1821e2e59: jmp 0x1821e2e8e

void UI_GlobalSkinEditPopup__Setup(UI_GlobalSkinEditPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
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
  Settings_HumanCustomSkinSet_o *pSVar9;
  
  if (Il2CppMethodInitialized_184346fea == '\0') {
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
    Il2CppMethodInitialized_184346fea = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar6 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  pSVar9 = (Settings_HumanCustomSkinSet_o *)0x0;
  UI_ElementStyle___ctor(__this_01,0x18,200.0,20.0,pSVar6,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)(__this);
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
                        (MethodInfo_C8EAF0 *)
                        MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSelectedSet);
    if (pSVar7 != (Settings_HumanCustomSkinSet_o *)0x0) {
      bVar1 = (TypeInfo_Settings_HumanCustomSkinSet->_2).typeHierarchyDepth;
      if (((((Settings_BaseSetSetting_c *)pSVar7->klass)->_2).typeHierarchyDepth < bVar1) ||
         (pSVar9 = pSVar7,
         (((Settings_BaseSetSetting_c *)pSVar7->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
         (Il2CppClass *)TypeInfo_Settings_HumanCustomSkinSet)) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar7);
      }
    }
    (__this->fields)._currentGlobalSet = pSVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._currentGlobalSet,pSVar9);
    pSVar9 = (__this->fields)._currentGlobalSet;
    if (pSVar9 != (Settings_HumanCustomSkinSet_o *)0x0) {
      pUVar3 = (__this->fields).DoublePanelLeft;
      pSVar4 = (pSVar9->fields).Hair;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar6 = UI_UIManager__GetLocale
                         ("SettingsPopup","Skins.Human","Hair",
                          "","",(MethodInfo *)0x0);
      UI_ElementFactory__CreateInputSetting
                (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,"",300.0,40.0,
                 false,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                 (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
      pSVar9 = (__this->fields)._currentGlobalSet;
      if (pSVar9 != (Settings_HumanCustomSkinSet_o *)0x0) {
        pUVar3 = (__this->fields).DoublePanelLeft;
        pSVar4 = (pSVar9->fields).Eye;
        pSVar6 = UI_UIManager__GetLocale
                           ("SettingsPopup","Skins.Human","Eye",
                            "","",(MethodInfo *)0x0);
        UI_ElementFactory__CreateInputSetting
                  (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,"",300.0,40.0,
                   false,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                   (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pSVar9 = (__this->fields)._currentGlobalSet;
        if (pSVar9 != (Settings_HumanCustomSkinSet_o *)0x0) {
          pUVar3 = (__this->fields).DoublePanelLeft;
          pSVar4 = (pSVar9->fields).Glass;
          pSVar6 = UI_UIManager__GetLocale
                             ("SettingsPopup","Skins.Human","Glass",
                              "","",(MethodInfo *)0x0);
          UI_ElementFactory__CreateInputSetting
                    (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,"",300.0,40.0
                     ,false,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
                     (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0
                    );
          pSVar9 = (__this->fields)._currentGlobalSet;
          if (pSVar9 != (Settings_HumanCustomSkinSet_o *)0x0) {
            pUVar3 = (__this->fields).DoublePanelLeft;
            pSVar4 = (pSVar9->fields).Face;
            pSVar6 = UI_UIManager__GetLocale
                               ("SettingsPopup","Skins.Human","Face",
                                "","",(MethodInfo *)0x0);
            UI_ElementFactory__CreateInputSetting
                      (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,"",300.0,
                       40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                       (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                       (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
            pSVar9 = (__this->fields)._currentGlobalSet;
            if (pSVar9 != (Settings_HumanCustomSkinSet_o *)0x0) {
              pUVar3 = (__this->fields).DoublePanelLeft;
              pSVar4 = (pSVar9->fields).Skin;
              pSVar6 = UI_UIManager__GetLocale
                                 ("SettingsPopup","Skins.Human","Skin",
                                  "","",(MethodInfo *)0x0);
              UI_ElementFactory__CreateInputSetting
                        (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,"",300.0,
                         40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                         (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                         (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
              pSVar9 = (__this->fields)._currentGlobalSet;
              if (pSVar9 != (Settings_HumanCustomSkinSet_o *)0x0) {
                pUVar3 = (__this->fields).DoublePanelLeft;
                pSVar4 = (pSVar9->fields).Costume;
                pSVar6 = UI_UIManager__GetLocale
                                   ("SettingsPopup","Skins.Human","Costume",
                                    "","",(MethodInfo *)0x0);
                UI_ElementFactory__CreateInputSetting
                          (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,"",
                           300.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                           (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                           (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                pSVar9 = (__this->fields)._currentGlobalSet;
                if (pSVar9 != (Settings_HumanCustomSkinSet_o *)0x0) {
                  pUVar3 = (__this->fields).DoublePanelLeft;
                  pSVar4 = (pSVar9->fields).Logo;
                  pSVar6 = UI_UIManager__GetLocale
                                     ("SettingsPopup","Skins.Human","Logo",
                                      "","",(MethodInfo *)0x0);
                  UI_ElementFactory__CreateInputSetting
                            (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,"",
                             300.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                             (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                             (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                  pSVar9 = (__this->fields)._currentGlobalSet;
                  if (pSVar9 != (Settings_HumanCustomSkinSet_o *)0x0) {
                    pUVar3 = (__this->fields).DoublePanelLeft;
                    pSVar4 = (pSVar9->fields).GearL;
                    pSVar6 = UI_UIManager__GetLocale
                                       ("SettingsPopup","Skins.Human","GearL",
                                        "","",(MethodInfo *)0x0);
                    UI_ElementFactory__CreateInputSetting
                              (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,"",
                               300.0,40.0,false,(UnityEngine_Events_UnityAction_o *)0x0,
                               (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                               (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                    pSVar9 = (__this->fields)._currentGlobalSet;
                    if (pSVar9 != (Settings_HumanCustomSkinSet_o *)0x0) {
                      pUVar3 = (__this->fields).DoublePanelLeft;
                      pSVar4 = (pSVar9->fields).GearR;
                      pSVar6 = UI_UIManager__GetLocale
                                         ("SettingsPopup","Skins.Human","GearR",
                                          "","",(MethodInfo *)0x0);
                      UI_ElementFactory__CreateInputSetting
                                (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,
                                 "",300.0,40.0,false,
                                 (UnityEngine_Events_UnityAction_o *)0x0,
                                 (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                                 (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                      pSVar9 = (__this->fields)._currentGlobalSet;
                      if (pSVar9 != (Settings_HumanCustomSkinSet_o *)0x0) {
                        pUVar3 = (__this->fields).DoublePanelLeft;
                        pSVar4 = (pSVar9->fields).Gas;
                        pSVar6 = UI_UIManager__GetLocale
                                           ("SettingsPopup","Skins.Human","Gas",
                                            "","",(MethodInfo *)0x0);
                        UI_ElementFactory__CreateInputSetting
                                  (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4,pSVar6,
                                   "",300.0,40.0,false,
                                   (UnityEngine_Events_UnityAction_o *)0x0,
                                   (UnityEngine_Events_UnityAction_o *)0x0,(System_Func_string__bool__o *)0x0,
                                   (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                        pSVar9 = (__this->fields)._currentGlobalSet;
                        if (pSVar9 != (Settings_HumanCustomSkinSet_o *)0x0) {
                          pUVar3 = (__this->fields).DoublePanelLeft;
                          pSVar4 = (pSVar9->fields).Hoodie;
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
                                     (MethodInfo *)0x0);
                          pSVar9 = (__this->fields)._currentGlobalSet;
                          if (pSVar9 != (Settings_HumanCustomSkinSet_o *)0x0) {
                            pUVar3 = (__this->fields).DoublePanelLeft;
                            pSVar4 = (pSVar9->fields).Cloak;
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
                                       ,(MethodInfo *)0x0);
                            pSVar9 = (__this->fields)._currentGlobalSet;
                            if (pSVar9 != (Settings_HumanCustomSkinSet_o *)0x0) {
                              pUVar3 = (__this->fields).DoublePanelRight;
                              pSVar4 = (pSVar9->fields).WeaponTrail;
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
                                         (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                              pSVar9 = (__this->fields)._currentGlobalSet;
                              if (pSVar9 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                pUVar3 = (__this->fields).DoublePanelRight;
                                pSVar4 = (pSVar9->fields).Horse;
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
                                           (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                pSVar9 = (__this->fields)._currentGlobalSet;
                                if (pSVar9 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                  pUVar3 = (__this->fields).DoublePanelRight;
                                  pSVar4 = (pSVar9->fields).ThunderspearL;
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
                                             (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                  pSVar9 = (__this->fields)._currentGlobalSet;
                                  if (pSVar9 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                    pUVar3 = (__this->fields).DoublePanelRight;
                                    pSVar4 = (pSVar9->fields).ThunderspearR;
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
                                               (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                    pSVar9 = (__this->fields)._currentGlobalSet;
                                    if (pSVar9 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                      pUVar3 = (__this->fields).DoublePanelRight;
                                      pSVar4 = (pSVar9->fields).HookL;
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
                                                 (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                      pSVar9 = (__this->fields)._currentGlobalSet;
                                      if (pSVar9 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                        pUVar3 = (__this->fields).DoublePanelRight;
                                        pSVar5 = (pSVar9->fields).HookLTiling;
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
                                                   (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                        pSVar9 = (__this->fields)._currentGlobalSet;
                                        if (pSVar9 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                          pUVar3 = (__this->fields).DoublePanelRight;
                                          pSVar4 = (pSVar9->fields).HookR;
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
                                                     (System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
                                          pSVar9 = (__this->fields)._currentGlobalSet;
                                          if (pSVar9 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                            pUVar3 = (__this->fields).DoublePanelRight;
                                            pSVar5 = (pSVar9->fields).HookRTiling;
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
                                                       (System_Func_string__string__o *)0x0,(MethodInfo *)0x0)
                                            ;
                                            pSVar9 = (__this->fields)._currentGlobalSet;
                                            if (pSVar9 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                              pUVar3 = (__this->fields).DoublePanelRight;
                                              pSVar4 = (pSVar9->fields).Hat;
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
                                                         (MethodInfo *)0x0);
                                              pSVar9 = (__this->fields)._currentGlobalSet;
                                              if (pSVar9 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                                pUVar3 = (__this->fields).DoublePanelRight;
                                                pSVar4 = (pSVar9->fields).Head;
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
                                                           (MethodInfo *)0x0);
                                                pSVar9 = (__this->fields)._currentGlobalSet;
                                                if (pSVar9 != (Settings_HumanCustomSkinSet_o *)0x0) {
                                                  pUVar3 = (__this->fields).DoublePanelRight;
                                                  pSVar4 = (pSVar9->fields).Back;
                                                  pSVar6 = UI_UIManager__GetLocale
                                                                     ("SettingsPopup",
                                                                      "Skins.Human",
                                                                      "Back",
                                                                      "",
                                                                      "",(MethodInfo *)0x0)
                                                  ;
                                                  UI_ElementFactory__CreateInputSetting
                                                            (pUVar3,__this_01,(Settings_BaseSetting_o *)pSVar4
                                                             ,pSVar6,"",300.0,40.0,false,
                                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                                             (UnityEngine_Events_UnityAction_o *)0x0,
                                                             (System_Func_string__bool__o *)0x0,
                                                             (System_Func_string__string__o *)0x0,
                                                             (MethodInfo *)0x0);
                                                  pUVar3 = (__this->fields).BottomBar;
                                                  pSVar6 = UI_UIManager__GetLocaleCommon
                                                                     ("Clear",(MethodInfo *)0x0)
                                                  ;
                                                  pUVar8 = il2cpp_codegen_object_new
                                                                     ((Il2CppClass *)
                                                                      TypeInfo_UnityEngine_Events_UnityAction)
                                                  ;
                                                  UnityEngine_Font_FontTextureRebuildCallback___ctor
                                                            ((UnityEngine_Font_FontTextureRebuildCallback_o *)
                                                             pUVar8,(Il2CppObject *)__this,
                                                             (intptr_t)
                                                             MethodInfo_UI_GlobalSkinEditPopup_Setup_b__20_0,
                                                             (MethodInfo *)0x0);
                                                  UI_ElementFactory__CreateTextButton
                                                            (pUVar3,__this_02,pSVar6,0.0,pUVar8,
                                                             (MethodInfo *)0x0);
                                                  pUVar3 = (__this->fields).BottomBar;
                                                  pSVar6 = UI_UIManager__GetLocaleCommon
                                                                     ("Apply",(MethodInfo *)0x0)
                                                  ;
                                                  pUVar8 = il2cpp_codegen_object_new
                                                                     ((Il2CppClass *)
                                                                      TypeInfo_UnityEngine_Events_UnityAction)
                                                  ;
                                                  UnityEngine_Font_FontTextureRebuildCallback___ctor
                                                            ((UnityEngine_Font_FontTextureRebuildCallback_o *)
                                                             pUVar8,(Il2CppObject *)__this,
                                                             (intptr_t)
                                                             MethodInfo_UI_GlobalSkinEditPopup_Setup_b__20_1,
                                                             (MethodInfo *)0x0);
                                                  UI_ElementFactory__CreateTextButton
                                                            (pUVar3,__this_02,pSVar6,0.0,pUVar8,
                                                             (MethodInfo *)0x0);
                                                  pUVar3 = (__this->fields).BottomBar;
                                                  pSVar6 = UI_UIManager__GetLocaleCommon
                                                                     ("Cancel",(MethodInfo *)0x0)
                                                  ;
                                                  pUVar8 = il2cpp_codegen_object_new
                                                                     ((Il2CppClass *)
                                                                      TypeInfo_UnityEngine_Events_UnityAction)
                                                  ;
                                                  UnityEngine_Font_FontTextureRebuildCallback___ctor
                                                            ((UnityEngine_Font_FontTextureRebuildCallback_o *)
                                                             pUVar8,(Il2CppObject *)__this,
                                                             (intptr_t)
                                                             MethodInfo_UI_GlobalSkinEditPopup_Setup_b__20_2,
                                                             (MethodInfo *)0x0);
                                                  UI_ElementFactory__CreateTextButton
                                                            (pUVar3,__this_02,pSVar6,0.0,pUVar8,
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
  }
  ThrowNullReferenceException();
}


// UI.GlobalSkinEditPopup$$OnButtonClick
// il2cpp: void UI_GlobalSkinEditPopup__OnButtonClick (UI_GlobalSkinEditPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1821e1f90

void UI_GlobalSkinEditPopup__OnButtonClick
               (UI_GlobalSkinEditPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346feb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_184346feb = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if (bVar1) {
    UI_GlobalSkinEditPopup__OnSaveClick(__this,(MethodInfo *)0x0);
    return;
  }
  bVar1 = System_String__op_Equality(name,"Cancel",(MethodInfo *)0x0);
  if (bVar1) {
    if ((__this->fields)._hasBackup != false) {
      UI_GlobalSkinEditPopup__RestoreBackup(__this,(MethodInfo *)0x0);
    }
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar1 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
  if (bVar1) {
    UI_GlobalSkinEditPopup__OnClearClick(__this,(MethodInfo *)0x0);
  }
  return;
}


// UI.GlobalSkinEditPopup$$CreateBackup
// il2cpp: void UI_GlobalSkinEditPopup__CreateBackup (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x1821e1b60
// eh: try 0x1821e1d20..0x1821e1ed7 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821e1d1e: nop 
// asm:   0x1821e1e73: mov rdx, qword ptr [rip + 0x1ed6ae6]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose
// asm:   0x1821e1e7a: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821e1e7f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821e1e84: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821e1e89: test rcx, rcx
// asm:   0x1821e1e8c: jne 0x1821e1ed7
// asm:   0x1821e1e8e: mov r14, qword ptr [rsp + 0xc0]
// asm:   0x1821e1ed7: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_GlobalSkinEditPopup__CreateBackup(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *pSVar2;
  Settings_HumanCustomSkinSet_o *pSVar3;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  Il2CppObject *a;
  Il2CppObject *setting;
  bool bVar4;
  int32_t iVar5;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o local_80;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_58;
  
  if (Il2CppMethodInitialized_184346fec == '\0') {
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
    Il2CppMethodInitialized_184346fec = '\x01';
  }
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._version = 0;
  local_80.fields._index = 0;
  local_80.fields._current.fields.key = (Il2CppObject *)0x0;
  local_80.fields._current.fields.value = (Il2CppObject *)0x0;
  local_80.fields._getEnumeratorRetType = 0;
  local_80.fields._36_4_ = 0;
  if (((__this->fields)._currentGlobalSet == (Settings_HumanCustomSkinSet_o *)0x0) ||
     ((__this->fields)._hasBackup != false)) {
    return;
  }
  __this_00 = (__this->fields)._backupValues;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
    pSVar2 = (__this->fields)._backupFloatValues;
    if (pSVar2 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                 (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Clear);
      pSVar3 = (__this->fields)._currentGlobalSet;
      if ((pSVar3 != (Settings_HumanCustomSkinSet_o *)0x0) &&
         (__this_01 = (pSVar3->fields).TypedSettings,
         __this_01 != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0)) {
        System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
                  (&local_58,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                   (MethodInfo_13C1150 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_GetEnumerator);
        local_80.fields._dictionary = local_58.fields._dictionary;
        local_80.fields._version = local_58.fields._version;
        local_80.fields._index = local_58.fields._index;
        local_80.fields._current.fields.key = local_58.fields._current.fields.key;
        local_80.fields._current.fields.value = local_58.fields._current.fields.value;
        local_80.fields._getEnumeratorRetType = local_58.fields._getEnumeratorRetType;
        local_80.fields._36_4_ = local_58.fields._36_4_;
        while( true ) {
          while( true ) {
            do {
              bVar4 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                                (&local_80,
                                 (MethodInfo_1585360 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_MoveNext
                                );
              setting = local_80.fields._current.fields.value;
              a = local_80.fields._current.fields.key;
              if (!bVar4) {
                System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_80,
                           MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose
                          );
                (__this->fields)._hasBackup = true;
                return;
              }
              bVar4 = System_String__op_Equality
                                ((System_String_o *)local_80.fields._current.fields.key,"Name",
                                 (MethodInfo *)0x0);
            } while (((bVar4) ||
                     (bVar4 = System_String__op_Equality
                                        ((System_String_o *)a,"Preset",(MethodInfo *)0x0), bVar4)
                     ) || (bVar4 = System_String__op_Equality
                                             ((System_String_o *)a,"UniqueId",(MethodInfo *)0x0),
                          bVar4));
            iVar5 = Settings_SettingsUtil__GetSettingType((Settings_BaseSetting_o *)setting,(MethodInfo *)0x0)
            ;
            if (iVar5 == 3) break;
            if (iVar5 == 4) {
              if ((Settings_BaseSetting_o *)setting == (Settings_BaseSetting_o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
              if (((((Settings_BaseSetting_c *)setting->klass)->_2).typeHierarchyDepth < bVar1) ||
                 ((((Settings_BaseSetting_c *)setting->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
                il2cpp_codegen_raise_invalid_cast_exception(setting);
              }
              __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
                          (__this->fields)._backupValues;
              if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (__this_02,a,((Settings_BaseSetting_o *)((longlong)setting + 0x18))->monitor,
                         (MethodInfo_147A7F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
            }
          }
          if ((Settings_BaseSetting_o *)setting == (Settings_BaseSetting_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
          if (((((Settings_BaseSetting_c *)setting->klass)->_2).typeHierarchyDepth < bVar1) ||
             ((((Settings_BaseSetting_c *)setting->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_FloatSetting)) break;
          pSVar2 = (__this->fields)._backupFloatValues;
          if (pSVar2 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Collections_Generic_Dictionary_object__float___set_Item
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,a,
                     *(float *)((longlong)&((Settings_BaseSetting_o *)((longlong)setting + 0x18))->klass + 4),
                     (MethodInfo_1488DA0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
        }
        il2cpp_codegen_raise_invalid_cast_exception(setting);
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.GlobalSkinEditPopup$$RestoreBackup
// il2cpp: void UI_GlobalSkinEditPopup__RestoreBackup (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x1821e27b0
// eh: try 0x1821e2930..0x1821e2b4e -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821e2929: nop dword ptr [rax]
// asm:   0x1821e2af3: mov rdx, qword ptr [rip + 0x1ed5e66]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose
// asm:   0x1821e2afa: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821e2aff: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821e2b04: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821e2b09: test rcx, rcx
// asm:   0x1821e2b0c: jne 0x1821e2b4e
// asm:   0x1821e2b4e: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_GlobalSkinEditPopup__RestoreBackup(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *pSVar2;
  System_Collections_Generic_Dictionary_string__string__o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  Il2CppObject *a;
  Il2CppObject *__this_03;
  bool bVar3;
  int32_t iVar4;
  System_String_o *value;
  float value_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o local_80;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_58;
  
  if (Il2CppMethodInitialized_184346fed == '\0') {
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
    Il2CppMethodInitialized_184346fed = '\x01';
  }
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._version = 0;
  local_80.fields._index = 0;
  local_80.fields._current.fields.key = (Il2CppObject *)0x0;
  local_80.fields._current.fields.value = (Il2CppObject *)0x0;
  local_80.fields._getEnumeratorRetType = 0;
  local_80.fields._36_4_ = 0;
  if (((__this->fields)._currentGlobalSet != (Settings_HumanCustomSkinSet_o *)0x0) &&
     ((__this->fields)._hasBackup != false)) {
    __this_00 = (((__this->fields)._currentGlobalSet)->fields).TypedSettings;
    if (__this_00 == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
              (&local_58,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13C1150 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_GetEnumerator);
    local_80.fields._dictionary = local_58.fields._dictionary;
    local_80.fields._version = local_58.fields._version;
    local_80.fields._index = local_58.fields._index;
    local_80.fields._current.fields.key = local_58.fields._current.fields.key;
    local_80.fields._current.fields.value = local_58.fields._current.fields.value;
    local_80.fields._getEnumeratorRetType = local_58.fields._getEnumeratorRetType;
    local_80.fields._36_4_ = local_58.fields._36_4_;
    while( true ) {
      bVar3 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        (&local_80,
                         (MethodInfo_1585360 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_MoveNext
                        );
      __this_03 = local_80.fields._current.fields.value;
      a = local_80.fields._current.fields.key;
      if (!bVar3) break;
      bVar3 = System_String__op_Equality
                        ((System_String_o *)local_80.fields._current.fields.key,"Name",
                         (MethodInfo *)0x0);
      if (!bVar3) {
        bVar3 = System_String__op_Equality((System_String_o *)a,"Preset",(MethodInfo *)0x0);
        if (!bVar3) {
          bVar3 = System_String__op_Equality((System_String_o *)a,"UniqueId",(MethodInfo *)0x0);
          if (!bVar3) {
            iVar4 = Settings_SettingsUtil__GetSettingType
                              ((Settings_BaseSetting_o *)__this_03,(MethodInfo *)0x0);
            if (iVar4 == 3) {
              pSVar2 = (__this->fields)._backupFloatValues;
              if (pSVar2 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,a,
                                 (MethodInfo_1455450 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_float_ContainsKey);
              if (bVar3) {
                pSVar2 = (__this->fields)._backupFloatValues;
                if (pSVar2 == (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
                  ThrowNullReferenceException();
                }
                value_00 = System_Collections_Generic_Dictionary_object__float___get_Item
                                     ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,a,
                                      (MethodInfo_1488BA0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
                if ((Settings_TypedSetting_T__o *)__this_03 == (Settings_TypedSetting_T__o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar1 = (TypeInfo_Settings_FloatSetting->_2).typeHierarchyDepth;
                if (((((Settings_TypedSetting_T__c *)__this_03->klass)->_2).typeHierarchyDepth < bVar1) ||
                   ((((Settings_TypedSetting_T__c *)__this_03->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1]
                    != (Il2CppClass *)TypeInfo_Settings_FloatSetting)) {
                  il2cpp_codegen_raise_invalid_cast_exception(__this_03,TypeInfo_Settings_FloatSetting);
                }
                Settings_TypedSetting_float___set_Value
                          ((Settings_TypedSetting_float__o *)__this_03,value_00,
                           (MethodInfo_E8F490 *)MethodInfo_Settings_TypedSetting_float_set_Value);
              }
            }
            else if (iVar4 == 4) {
              __this_01 = (__this->fields)._backupValues;
              if (__this_01 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,a,
                                 (MethodInfo_1455450 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_string_ContainsKey);
              if (bVar3) {
                __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
                            (__this->fields)._backupValues;
                if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  ThrowNullReferenceException();
                }
                value = System_Collections_Generic_Dictionary_object__object___get_Item
                                  (__this_02,a,
                                   (MethodInfo_147A5B0 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_string_get_Item);
                if ((Settings_TypedSetting_T__o *)__this_03 == (Settings_TypedSetting_T__o *)0x0) {
                  ThrowNullReferenceException();
                }
                bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
                if (((((Settings_TypedSetting_T__c *)__this_03->klass)->_2).typeHierarchyDepth < bVar1) ||
                   ((((Settings_TypedSetting_T__c *)__this_03->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1]
                    != (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
                  il2cpp_codegen_raise_invalid_cast_exception(__this_03);
                }
                Settings_TypedSetting_object___set_Value
                          ((Settings_TypedSetting_T__o *)__this_03,(Il2CppObject *)value,
                           (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
              }
            }
          }
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_80,
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose);
  }
  return;
}


// UI.GlobalSkinEditPopup$$OnCancelClick
// il2cpp: void UI_GlobalSkinEditPopup__OnCancelClick (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x1821e2070

void UI_GlobalSkinEditPopup__OnCancelClick(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  if ((__this->fields)._hasBackup != false) {
    UI_GlobalSkinEditPopup__RestoreBackup(__this,(MethodInfo *)0x0);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.GlobalSkinEditPopup$$OnClearClick
// il2cpp: void UI_GlobalSkinEditPopup__OnClearClick (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x1821e20b0
// eh: try 0x1821e21e0..0x1821e22fa -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821e21df: nop 
// asm:   0x1821e2270: mov rdx, qword ptr [rip + 0x1ed66e9]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose
// asm:   0x1821e2277: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821e227c: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821e2281: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821e2286: test rcx, rcx
// asm:   0x1821e2289: jne 0x1821e22fa
// asm:   0x1821e228b: xor edi, edi
// asm:   0x1821e228d: mov r15, qword ptr [rsp + 0xb0]
// asm:   0x1821e22fa: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_GlobalSkinEditPopup__OnClearClick(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSkinSet_o *pSVar1;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_00;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  System_Object_array *pSVar5;
  uint uVar6;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o local_70;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_48;
  
  if (Il2CppMethodInitialized_184346fee == '\0') {
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
    Il2CppMethodInitialized_184346fee = '\x01';
  }
  local_70.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_70.fields._version = 0;
  local_70.fields._index = 0;
  local_70.fields._current.fields.key = (Il2CppObject *)0x0;
  local_70.fields._current.fields.value = (Il2CppObject *)0x0;
  local_70.fields._getEnumeratorRetType = 0;
  local_70.fields._36_4_ = 0;
  if ((__this->fields)._hasBackup == false) {
    UI_GlobalSkinEditPopup__CreateBackup(__this,(MethodInfo *)0x0);
  }
  pSVar1 = (__this->fields)._currentGlobalSet;
  if ((pSVar1 != (Settings_HumanCustomSkinSet_o *)0x0) &&
     (__this_00 = (pSVar1->fields).TypedSettings,
     __this_00 != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0)) {
    System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
              (&local_48,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13C1150 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_BaseSetting_GetEnumerator);
    local_70.fields._dictionary = local_48.fields._dictionary;
    local_70.fields._version = local_48.fields._version;
    local_70.fields._index = local_48.fields._index;
    local_70.fields._current.fields.key = local_48.fields._current.fields.key;
    local_70.fields._current.fields.value = local_48.fields._current.fields.value;
    local_70.fields._getEnumeratorRetType = local_48.fields._getEnumeratorRetType;
    local_70.fields._36_4_ = local_48.fields._36_4_;
    uVar6 = 0;
    while( true ) {
      bVar4 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        (&local_70,
                         (MethodInfo_1585360 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_MoveNext
                        );
      pIVar3 = local_70.fields._current.fields.value;
      pIVar2 = local_70.fields._current.fields.key;
      if (!bVar4) break;
      bVar4 = System_String__op_Equality
                        ((System_String_o *)local_70.fields._current.fields.key,"Name",
                         (MethodInfo *)0x0);
      if (!bVar4) {
        bVar4 = System_String__op_Equality((System_String_o *)pIVar2,"Preset",(MethodInfo *)0x0);
        if (!bVar4) {
          bVar4 = System_String__op_Equality
                            ((System_String_o *)pIVar2,"UniqueId",(MethodInfo *)0x0);
          if (!bVar4) {
            if (pIVar3 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            (*pIVar3->klass->vtable[4].methodPtr)(pIVar3,pIVar3->klass->vtable[4].method);
          }
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_70,
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_BaseSetting_Dispose);
    pSVar5 = UnityEngine_Component__GetComponentsInChildren_object__665370
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_665370 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_InputSettingElement);
    if (pSVar5 != (System_Object_array *)0x0) {
      while( true ) {
        if ((int)pSVar5->max_length <= (int)uVar6) {
          return;
        }
        if ((uint)pSVar5->max_length <= uVar6) {
          ThrowIndexOutOfRangeException();
        }
        pIVar2 = pSVar5->m_Items[(int)uVar6];
        if (pIVar2 == (Il2CppObject *)0x0) break;
        (*pIVar2->klass->vtable[6].methodPtr)(pIVar2,pIVar2->klass->vtable[6].method);
        uVar6 = uVar6 + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.GlobalSkinEditPopup$$OnSaveClick
// il2cpp: void UI_GlobalSkinEditPopup__OnSaveClick (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x1821e2340

void UI_GlobalSkinEditPopup__OnSaveClick(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  bool value;
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  UI_BaseMenu_o *pUVar3;
  GameManagers_BaseGameManager_o *pGVar4;
  Characters_DummyHuman_o *pCVar5;
  Settings_CustomSkinSettings_o *pSVar6;
  Settings_HumanCustomSkinSettings_o *pSVar7;
  Settings_BoolSetting_o *pSVar8;
  Settings_BoolSetting_o *pSVar9;
  Characters_HumanSetup_o *pCVar10;
  bool bVar11;
  bool bVar12;
  UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *routine;
  Characters_DummyHuman_o *x;
  UI_BaseMenu_o *__this_02;
  
  if (Il2CppMethodInitialized_184346fef == '\0') {
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
    Il2CppMethodInitialized_184346fef = '\x01';
  }
  if ((__this->fields)._currentGlobalSet == (Settings_HumanCustomSkinSet_o *)0x0) {
    return;
  }
  __this_00 = (__this->fields)._backupValues;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
    __this_01 = (__this->fields)._backupFloatValues;
    if (__this_01 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                 (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Clear);
      (__this->fields)._hasBackup = false;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      bVar12 = true;
      pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar3 == (UI_BaseMenu_o *)0x0) {
        __this_02 = (UI_BaseMenu_o *)0x0;
      }
      else {
        bVar1 = (TypeInfo_UI_CharacterEditorHumanMenu->_2).typeHierarchyDepth;
        if (((pUVar3->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pUVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_UI_CharacterEditorHumanMenu)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
        __this_02 = (UI_BaseMenu_o *)0x0;
        if (bVar11) {
          __this_02 = pUVar3;
        }
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar11 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar11) {
label_1821e2762:
        (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
        return;
      }
      pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
      if (pGVar4 != (GameManagers_BaseGameManager_o *)0x0) {
        bVar1 = (TypeInfo_GameManagers_CharacterEditorGameManager->_2).typeHierarchyDepth;
        if (((pGVar4->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pGVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_GameManagers_CharacterEditorGameManager)) {
          il2cpp_codegen_raise_invalid_cast_exception(pGVar4);
        }
        pCVar5 = (Characters_DummyHuman_o *)(*(uint64_t *)((char *)pGVar4 + 0x38));
        if (pCVar5 == (Characters_DummyHuman_o *)0x0) {
          x = (Characters_DummyHuman_o *)0x0;
        }
        else {
          bVar1 = (TypeInfo_Characters_DummyHuman->_2).typeHierarchyDepth;
          if (((pCVar5->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pCVar5->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Characters_DummyHuman)) {
            bVar12 = false;
          }
          x = (Characters_DummyHuman_o *)0x0;
          if (bVar12) {
            x = pCVar5;
          }
        }
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar12 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar12) goto label_1821e2762;
        if (Il2CppMethodInitialized_184346ff7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
          Il2CppMethodInitialized_184346ff7 = '\x01';
        }
        bVar12 = TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentGlobalSkinPreview;
        if (Il2CppMethodInitialized_184346ff8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CharacterEditorSkinsPanel);
          Il2CppMethodInitialized_184346ff8 = '\x01';
        }
        pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
        if ((((pSVar6 != (Settings_CustomSkinSettings_o *)0x0) &&
             (pSVar7 = (pSVar6->fields).Human, pSVar7 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
            (pSVar8 = (pSVar7->fields).GlobalSkinOverridesEnabled, pSVar8 != (Settings_BoolSetting_o *)0x0))
           && (pSVar9 = (((TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings->fields).Human
                         )->fields).SetSpecificSkinsEnabled, pSVar9 != (Settings_BoolSetting_o *)0x0)) {
          bVar11 = (pSVar9->fields)._value;
          bVar2 = (pSVar8->fields)._value;
          value = TypeInfo_UI_CharacterEditorSkinsPanel->static_fields->_persistentCustomSkinPreview;
          Settings_TypedSetting_bool___set_Value
                    ((Settings_TypedSetting_bool__o *)
                     (((TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings->fields).Human)->
                     fields).GlobalSkinOverridesEnabled,bVar12,
                     (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
          pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
          if (((pSVar6 != (Settings_CustomSkinSettings_o *)0x0) &&
              (pSVar7 = (pSVar6->fields).Human, pSVar7 != (Settings_HumanCustomSkinSettings_o *)0x0)) &&
             ((pSVar8 = (pSVar7->fields).SetSpecificSkinsEnabled, pSVar8 != (Settings_BoolSetting_o *)0x0 &&
              ((Settings_TypedSetting_bool___set_Value
                          ((Settings_TypedSetting_bool__o *)pSVar8,value,
                           (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value),
               x != (Characters_DummyHuman_o *)0x0 &&
               (pCVar10 = (x->fields).Setup, pCVar10 != (Characters_HumanSetup_o *)0x0)))))) {
            Characters_HumanSetup__Load
                      ((x->fields).Setup,(pCVar10->fields).CustomSet,(pCVar10->fields).Weapon,false,
                       (MethodInfo *)0x0);
            if (Il2CppMethodInitialized_184346ff0 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_UI_GlobalSkinEditPopup_LoadSkinAndRestoreSettings_d__27);
              Il2CppMethodInitialized_184346ff0 = '\x01';
            }
            routine = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_UI_GlobalSkinEditPopup_LoadSkinAndRestoreSettings_d__27);
            System_Object___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0
                      );
            (routine->fields).__1__state = 0;
            (routine->fields).character = x;
            Il2CppCodeGenWriteBarrier(&(routine->fields).character,x);
            (routine->fields).originalGlobal = bVar2;
            (routine->fields).originalCustom = bVar11;
            if (__this_02 != (UI_BaseMenu_o *)0x0) {
              UnityEngine_MonoBehaviour__StartCoroutine_Auto
                        ((UnityEngine_MonoBehaviour_o *)__this_02,(System_Collections_IEnumerator_o *)routine,
                         (MethodInfo *)0x0);
              goto label_1821e2762;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.GlobalSkinEditPopup$$LoadSkinAndRestoreSettings
// il2cpp: System_Collections_IEnumerator_o* UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings (UI_GlobalSkinEditPopup_o* __this, Characters_DummyHuman_o* character, bool originalGlobal, bool originalCustom, const MethodInfo* method);
// 0x1821e1f10

System_Collections_IEnumerator_o *
UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings
          (UI_GlobalSkinEditPopup_o *__this,Characters_DummyHuman_o *character,bool originalGlobal,
          bool originalCustom,MethodInfo *method)

{
  UI_GlobalSkinEditPopup__LoadSkinAndRestoreSettings_d__27_o *__this_00;
  
  if (Il2CppMethodInitialized_184346ff0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_UI_GlobalSkinEditPopup_LoadSkinAndRestoreSettings_d__27);
    Il2CppMethodInitialized_184346ff0 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_GlobalSkinEditPopup_LoadSkinAndRestoreSettings_d__27);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).character = character;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).character,character);
  (__this_00->fields).originalGlobal = originalGlobal;
  (__this_00->fields).originalCustom = originalCustom;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.GlobalSkinEditPopup$$Show
// il2cpp: void UI_GlobalSkinEditPopup__Show (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x1821e3c90
// eh: try 0x1821e3e82..0x1821e3f1a -> pad 0x183317c60 catch Il2CppExceptionWrapper
// eh: try 0x1821e3f1a..0x1821e3f72 -> pad 0x180026a30 cleanup
// eh: try 0x1821e3f72..0x1821e412a -> pad 0x183317c60 (+1 call sites) catch Il2CppExceptionWrapper
// eh: try 0x1821e412a..0x1821e419f -> pad 0x180026a30 cleanup
// eh: try 0x1821e419f..0x1821e434a -> pad 0x183324cb0 (+1 call sites) catch Il2CppExceptionWrapper
// eh: try 0x1821e434a..0x1821e43bf -> pad 0x180026a30 cleanup
// eh: try 0x1821e43bf..0x1821e44d8 -> pad 0x183318f20 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 73 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821e3f3a: mov rdx, qword ptr [rip + 0x1ea08ff]  ; TypeInfo_UnityEngine_Transform
// asm:   0x1821e3f41: mov r9, qword ptr [rax]
// asm:   0x1821e3f44: movzx eax, byte ptr [rdx + 0x130]
// asm:   0x1821e3f4b: cmp byte ptr [r9 + 0x130], al
// asm:   0x1821e3f52: jb 0x1821e4489
// asm:   0x1821e3fc8: lea rcx, [rsp + 0x40]
// asm:   0x1821e3fcd: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x1821e3fd2: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821e3fd7: test rcx, rcx
// asm:   0x1821e3fda: jne 0x1821e449c
// asm:   0x1821e3fe0: xor edi, edi
// asm:   0x1821e3fe2: mov rsi, qword ptr [rsp + 0x80]
// asm:   0x1821e40e9: nop dword ptr [rax]
// asm:   0x1821e4167: mov rdx, qword ptr [rip + 0x1ea06d2]  ; TypeInfo_UnityEngine_Transform
// asm:   0x1821e416e: mov r9, qword ptr [rax]
// asm:   0x1821e4171: movzx eax, byte ptr [rdx + 0x130]
// asm:   0x1821e4178: cmp byte ptr [r9 + 0x130], al
// asm:   0x1821e417f: jb 0x1821e44a7
// asm:   0x1821e41f5: lea rcx, [rsp + 0x40]
// asm:   0x1821e41fa: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x1821e41ff: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821e4204: test rcx, rcx
// asm:   0x1821e4207: jne 0x1821e44ba
// asm:   0x1821e420d: xor edi, edi
// asm:   0x1821e420f: mov rsi, qword ptr [rsp + 0x80]
// asm:   0x1821e4309: nop dword ptr [rax]
// asm:   0x1821e4387: mov rdx, qword ptr [rip + 0x1ea04b2]  ; TypeInfo_UnityEngine_Transform
// asm:   0x1821e438e: mov r9, qword ptr [rax]
// asm:   0x1821e4391: movzx eax, byte ptr [rdx + 0x130]
// asm:   0x1821e4398: cmp byte ptr [r9 + 0x130], al
// asm:   0x1821e439f: jb 0x1821e44c5
// asm:   0x1821e4415: lea rcx, [rsp + 0x40]
// asm:   0x1821e441a: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x1821e441f: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821e4424: test rcx, rcx
// asm:   0x1821e4427: jne 0x1821e44d8
// asm:   0x1821e442d: mov rsi, qword ptr [rsp + 0x80]
// asm:   0x1821e449c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821e44ba: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1821e44d8: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317c60: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317c65: push rbp
// asm:   0x183317c66: sub rsp, 0x20
// asm:   0x183317c6a: mov rbp, rdx
// asm:   0x183317c6d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317c71: mov rcx, qword ptr [rax]
// asm:   0x183317c74: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183317c78: movabs rax, 0
// asm:   0x183317c82: add rsp, 0x20
// asm:   0x183317c86: pop rbp
// asm:   0x183317c87: ret 
// asm:   0x183318f20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318f25: push rbp
// asm:   0x183318f26: sub rsp, 0x20
// asm:   0x183318f2a: mov rbp, rdx
// asm:   0x183318f2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183318f31: mov rcx, qword ptr [rax]
// asm:   0x183318f34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183318f38: movabs rax, 0
// asm:   0x183318f42: add rsp, 0x20
// asm:   0x183318f46: pop rbp
// asm:   0x183318f47: ret 
// asm:   0x183324cb0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183324cb5: push rbp
// asm:   0x183324cb6: sub rsp, 0x20
// asm:   0x183324cba: mov rbp, rdx
// asm:   0x183324cbd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183324cc1: mov rcx, qword ptr [rax]
// asm:   0x183324cc4: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183324cc8: movabs rax, 0
// asm:   0x183324cd2: add rsp, 0x20
// asm:   0x183324cd6: pop rbp
// asm:   0x183324cd7: ret 

void UI_GlobalSkinEditPopup__Show(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  Settings_CustomSkinSettings_o *pSVar3;
  Settings_HumanCustomSkinSettings_o *__this_00;
  System_Collections_Generic_Dictionary_string__string__o *__this_01;
  System_Collections_Generic_Dictionary_string__float__o *__this_02;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  bool bVar6;
  Settings_HumanCustomSkinSet_o *value;
  UnityEngine_Transform_o *pUVar7;
  Il2CppObject *pIVar8;
  void *pvVar9;
  VirtualInvokeData *pVVar10;
  UnityEngine_Component_o *pUVar11;
  UnityEngine_Object_o *pUVar12;
  ushort uVar13;
  ulonglong uVar14;
  
  if (Il2CppMethodInitialized_184346ff1 == '\0') {
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
    Il2CppMethodInitialized_184346ff1 = '\x01';
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  if ((pSVar3 != (Settings_CustomSkinSettings_o *)0x0) &&
     (__this_00 = (pSVar3->fields).Human, __this_00 != (Settings_HumanCustomSkinSettings_o *)0x0)) {
    value = (Settings_HumanCustomSkinSet_o *)
            Settings_SetSettingsContainer_object___GetSelectedSet
                      ((Settings_SetSettingsContainer_T__o *)__this_00,
                       (MethodInfo_C8EAF0 *)
                       MethodInfo_Settings_SetSettingsContainer_HumanCustomSkinSet_GetSelectedSet);
    if (value == (Settings_HumanCustomSkinSet_o *)0x0) {
      (__this->fields)._currentGlobalSet = (Settings_HumanCustomSkinSet_o *)0x0;
      value = (Settings_HumanCustomSkinSet_o *)0x0;
    }
    else {
      bVar1 = (TypeInfo_Settings_HumanCustomSkinSet->_2).typeHierarchyDepth;
      if (((((Settings_BaseSetSetting_c *)value->klass)->_2).typeHierarchyDepth < bVar1) ||
         ((((Settings_BaseSetSetting_c *)value->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_HumanCustomSkinSet)) {
        il2cpp_codegen_raise_invalid_cast_exception(value);
      }
      (__this->fields)._currentGlobalSet = value;
      bVar1 = (TypeInfo_Settings_HumanCustomSkinSet->_2).typeHierarchyDepth;
      if (((((Settings_BaseSetSetting_c *)value->klass)->_2).typeHierarchyDepth < bVar1) ||
         ((((Settings_BaseSetSetting_c *)value->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_HumanCustomSkinSet)) {
        il2cpp_codegen_raise_invalid_cast_exception(value);
      }
    }
    Il2CppCodeGenWriteBarrier(&(__this->fields)._currentGlobalSet,value);
    __this_01 = (__this->fields)._backupValues;
    if (__this_01 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                 (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
      __this_02 = (__this->fields)._backupFloatValues;
      if (__this_02 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
        System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
                   (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Clear);
        (__this->fields)._hasBackup = false;
        pUVar7 = (__this->fields).DoublePanelLeft;
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            pIVar8 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(pUVar7,(MethodInfo *)0x0);
            while( true ) {
              if (pIVar8 == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              pvVar9 = InterfaceInvoker0_Invoke
                                 (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar8);
              if ((char)pvVar9 == '\0') break;
              if (pIVar8 == (Il2CppObject *)0x0) {
                ThrowNullReferenceException();
              }
              pIVar4 = pIVar8->klass;
              uVar2 = (pIVar4->_2).interface_offsets_count;
              if (uVar2 != 0) {
                uVar14 = 0;
                pIVar5 = (pIVar4->_1).interfaceOffsets;
                do {
                  if (pIVar5[uVar14].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator)
                  {
                    pVVar10 = pIVar4->vtable + (pIVar5[uVar14].offset + 1);
                    goto label_1821e3f05;
                  }
                  uVar13 = (short)uVar14 + 1;
                  uVar14 = (ulonglong)uVar13;
                } while (uVar13 < uVar2);
              }
              pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                                  (pIVar8,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_1821e3f05:
              pUVar11 = (UnityEngine_Component_o *)(*pVVar10->methodPtr)(pIVar8,pVVar10->method);
              if (pUVar11 == (UnityEngine_Component_o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
              if (((pUVar11->klass->_2).typeHierarchyDepth < bVar1) ||
                 ((pUVar11->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                  (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
                il2cpp_codegen_raise_invalid_cast_exception(pUVar11);
              }
              pUVar12 = (UnityEngine_Object_o *)
                        UnityEngine_Component__get_gameObject(pUVar11,(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              UnityEngine_Object__Destroy_2f1ff70(pUVar12,(MethodInfo *)0x0);
            }
            pIVar8 = il2cpp_vm_Object_IsInst(pIVar8,(Il2CppClass *)TypeInfo_System_IDisposable);
            if (pIVar8 != (Il2CppObject *)0x0) {
              InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar8);
            }
            pUVar7 = (__this->fields).DoublePanelRight;
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              pUVar7 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                pIVar8 = (Il2CppObject *)UnityEngine_Transform__GetEnumerator(pUVar7,(MethodInfo *)0x0);
                do {
                  if (pIVar8 == (Il2CppObject *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pIVar4 = pIVar8->klass;
                  uVar2 = (pIVar4->_2).interface_offsets_count;
                  if (uVar2 != 0) {
                    uVar14 = 0;
                    pIVar5 = (pIVar4->_1).interfaceOffsets;
                    do {
                      if (pIVar5[uVar14].interfaceType ==
                          (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
                        pVVar10 = pIVar4->vtable + pIVar5[uVar14].offset;
                        goto label_1821e40a6;
                      }
                      uVar13 = (short)uVar14 + 1;
                      uVar14 = (ulonglong)uVar13;
                    } while (uVar13 < uVar2);
                  }
                  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                                      (pIVar8,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_1821e40a6:
                  bVar6 = (*pVVar10->methodPtr)(pIVar8,pVVar10->method);
                  if (!bVar6) {
                    pIVar8 = il2cpp_vm_Object_IsInst(pIVar8,(Il2CppClass *)TypeInfo_System_IDisposable);
                    if (pIVar8 != (Il2CppObject *)0x0) {
                      InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar8);
                    }
                    pUVar7 = (__this->fields).BottomBar;
                    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                      pUVar7 = UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
                      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                        pIVar8 = (Il2CppObject *)
                                 UnityEngine_Transform__GetEnumerator(pUVar7,(MethodInfo *)0x0);
                        do {
                          if (pIVar8 == (Il2CppObject *)0x0) {
                            ThrowNullReferenceException();
                          }
                          pIVar4 = pIVar8->klass;
                          uVar2 = (pIVar4->_2).interface_offsets_count;
                          if (uVar2 != 0) {
                            uVar14 = 0;
                            pIVar5 = (pIVar4->_1).interfaceOffsets;
                            do {
                              if (pIVar5[uVar14].interfaceType ==
                                  (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
                                pVVar10 = pIVar4->vtable + pIVar5[uVar14].offset;
                                goto label_1821e42c6;
                              }
                              uVar13 = (short)uVar14 + 1;
                              uVar14 = (ulonglong)uVar13;
                            } while (uVar13 < uVar2);
                          }
                          pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                                              (pIVar8,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0
                                              );
label_1821e42c6:
                          bVar6 = (*pVVar10->methodPtr)(pIVar8,pVVar10->method);
                          if (!bVar6) {
                            pIVar8 = il2cpp_vm_Object_IsInst
                                               (pIVar8,(Il2CppClass *)TypeInfo_System_IDisposable);
                            if (pIVar8 != (Il2CppObject *)0x0) {
                              InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar8);
                            }
                            (*(__this->klass->vtable)._20_Setup.methodPtr)
                                      (__this,(UI_BasePanel_o *)0x0,(__this->klass->vtable)._20_Setup.method);
                            if (((__this->fields)._currentGlobalSet != (Settings_HumanCustomSkinSet_o *)0x0)
                               && ((__this->fields)._hasBackup == false)) {
                              UI_GlobalSkinEditPopup__CreateBackup(__this,(MethodInfo *)0x0);
                            }
                            UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
                            return;
                          }
                          if (pIVar8 == (Il2CppObject *)0x0) {
                            ThrowNullReferenceException();
                          }
                          pIVar4 = pIVar8->klass;
                          uVar2 = (pIVar4->_2).interface_offsets_count;
                          if (uVar2 != 0) {
                            uVar14 = 0;
                            pIVar5 = (pIVar4->_1).interfaceOffsets;
                            do {
                              if (pIVar5[uVar14].interfaceType ==
                                  (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
                                pVVar10 = pIVar4->vtable + (pIVar5[uVar14].offset + 1);
                                goto label_1821e4335;
                              }
                              uVar13 = (short)uVar14 + 1;
                              uVar14 = (ulonglong)uVar13;
                            } while (uVar13 < uVar2);
                          }
                          pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                                              (pIVar8,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1
                                              );
label_1821e4335:
                          pUVar11 = (UnityEngine_Component_o *)(*pVVar10->methodPtr)(pIVar8,pVVar10->method);
                          if (pUVar11 == (UnityEngine_Component_o *)0x0) {
                            ThrowNullReferenceException();
                          }
                          bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
                          if (((pUVar11->klass->_2).typeHierarchyDepth < bVar1) ||
                             ((pUVar11->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                              (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
                            il2cpp_codegen_raise_invalid_cast_exception(pUVar11);
                          }
                          pUVar12 = (UnityEngine_Object_o *)
                                    UnityEngine_Component__get_gameObject(pUVar11,(MethodInfo *)0x0);
                          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                          }
                          UnityEngine_Object__Destroy_2f1ff70(pUVar12,(MethodInfo *)0x0);
                        } while( true );
                      }
                    }
                    break;
                  }
                  if (pIVar8 == (Il2CppObject *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pIVar4 = pIVar8->klass;
                  uVar2 = (pIVar4->_2).interface_offsets_count;
                  if (uVar2 != 0) {
                    uVar14 = 0;
                    pIVar5 = (pIVar4->_1).interfaceOffsets;
                    do {
                      if (pIVar5[uVar14].interfaceType ==
                          (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
                        pVVar10 = pIVar4->vtable + (pIVar5[uVar14].offset + 1);
                        goto label_1821e4115;
                      }
                      uVar13 = (short)uVar14 + 1;
                      uVar14 = (ulonglong)uVar13;
                    } while (uVar13 < uVar2);
                  }
                  pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                                      (pIVar8,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_1821e4115:
                  pUVar11 = (UnityEngine_Component_o *)(*pVVar10->methodPtr)(pIVar8,pVVar10->method);
                  if (pUVar11 == (UnityEngine_Component_o *)0x0) {
                    ThrowNullReferenceException();
                  }
                  bVar1 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
                  if (((pUVar11->klass->_2).typeHierarchyDepth < bVar1) ||
                     ((pUVar11->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                      (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
                    il2cpp_codegen_raise_invalid_cast_exception(pUVar11);
                  }
                  pUVar12 = (UnityEngine_Object_o *)
                            UnityEngine_Component__get_gameObject(pUVar11,(MethodInfo *)0x0);
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  UnityEngine_Object__Destroy_2f1ff70(pUVar12,(MethodInfo *)0x0);
                } while( true );
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.GlobalSkinEditPopup$$OnDisable
// il2cpp: void UI_GlobalSkinEditPopup__OnDisable (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x1821e2310

void UI_GlobalSkinEditPopup__OnDisable(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  if ((__this->fields)._hasBackup != false) {
    UI_GlobalSkinEditPopup__RestoreBackup(__this,(MethodInfo *)0x0);
  }
  UI_BasePopup__OnDisable((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.GlobalSkinEditPopup$$HideImmediate
// il2cpp: void UI_GlobalSkinEditPopup__HideImmediate (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x1821e1ee0

void UI_GlobalSkinEditPopup__HideImmediate(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  if ((__this->fields)._hasBackup != false) {
    UI_GlobalSkinEditPopup__RestoreBackup(__this,(MethodInfo *)0x0);
  }
  UI_BasePopup__HideImmediate((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.GlobalSkinEditPopup$$.ctor
// il2cpp: void UI_GlobalSkinEditPopup___ctor (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x1821e45b0

void UI_GlobalSkinEditPopup___ctor(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  
  if (Il2CppMethodInitialized_184346ff2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_float);
    Il2CppMethodInitialized_184346ff2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  (__this->fields)._backupValues = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._backupValues,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
  (__this->fields)._backupFloatValues = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._backupFloatValues,__this_01);
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.GlobalSkinEditPopup$$<Setup>b__20_0
// il2cpp: void UI_GlobalSkinEditPopup___Setup_b__20_0 (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x1821e44f0

void UI_GlobalSkinEditPopup___Setup_b__20_0(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346ff3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    Il2CppMethodInitialized_184346ff3 = '\x01';
  }
  UI_GlobalSkinEditPopup__OnButtonClick(__this,"Clear",(MethodInfo *)0x0);
  return;
}


// UI.GlobalSkinEditPopup$$<Setup>b__20_1
// il2cpp: void UI_GlobalSkinEditPopup___Setup_b__20_1 (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x1821e4530

void UI_GlobalSkinEditPopup___Setup_b__20_1(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346ff4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_184346ff4 = '\x01';
  }
  UI_GlobalSkinEditPopup__OnButtonClick(__this,"Save",(MethodInfo *)0x0);
  return;
}


// UI.GlobalSkinEditPopup$$<Setup>b__20_2
// il2cpp: void UI_GlobalSkinEditPopup___Setup_b__20_2 (UI_GlobalSkinEditPopup_o* __this, const MethodInfo* method);
// 0x1821e4570

void UI_GlobalSkinEditPopup___Setup_b__20_2(UI_GlobalSkinEditPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346ff5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    Il2CppMethodInitialized_184346ff5 = '\x01';
  }
  UI_GlobalSkinEditPopup__OnButtonClick(__this,"Cancel",(MethodInfo *)0x0);
  return;
}


